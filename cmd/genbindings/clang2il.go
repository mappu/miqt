package main

import (
	"errors"
	"fmt"
	"log"
	"strings"
)

func parseHeader(topLevel []interface{}, addNamePrefix string) (*CppParsedHeader, error) {

	var ret CppParsedHeader

	for _, node := range topLevel {

		node, ok := node.(map[string]interface{})
		if !ok {
			return nil, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"].(string)
		if !ok {
			return nil, errors.New("node has no kind")
		}

		switch kind {

		case "CXXRecordDecl":

			// Process the inner class definition
			obj, err := processClassType(node, addNamePrefix)
			if err != nil {
				if errors.Is(err, ErrNoContent) {
					log.Printf("-> Skipping (%v)\n", err)
					continue
				}

				// A real error (shouldn't happen)
				panic(err)
			}

			ret.Classes = append(ret.Classes, obj)

		case "StaticAssertDecl":
			// ignore

		case "ClassTemplateDecl",
			"ClassTemplateSpecializationDecl",
			"ClassTemplatePartialSpecializationDecl",
			"FunctionTemplateDecl",
			"TypeAliasTemplateDecl", // e.g. qendian.h
			"VarTemplateDecl":       // e.g. qglobal.h
			// Template stuff probably can't be supported in the binding since
			// we would need to link a concrete instantiation for each type in
			// the CABI
			// Ignore this node

		case "FileScopeAsmDecl":
			// ignore

		case "NamespaceDecl":
			// Parse everything inside the namespace with prefix, as if it is
			// a whole separate file
			// Then copy the parsed elements back into our own file
			namespace, ok := node["name"].(string)
			if !ok {
				panic("NamespaceDecl missing name")
			}

			namespaceInner, ok := node["inner"].([]interface{})
			if !ok {
				// A namespace declaration with no inner content means that, for
				// the rest of this whole file, we are in this namespace
				// Update our own `addNamePrefix` accordingly
				addNamePrefix += namespace + "::"

			} else {

				contents, err := parseHeader(namespaceInner, namespace+"::")
				if err != nil {
					panic(err)
				}

				ret.AddContentFrom(contents)
			}

		case "FunctionDecl":
			// TODO

		case "EnumDecl":
			// TODO e.g. qmetatype.h

		case "VarDecl":
			// TODO e.g. qmath.h
			// We could probably generate setter/getter for this in the CABI

		case "CXXConstructorDecl":
			// TODO (why is this at the top level? e.g qobject.h)

		case "CXXDestructorDecl":
			// ignore

		case "CXXConversionDecl":
			// TODO (e.g. qbytearray.h)

		case "LinkageSpecDecl":
			// TODO e.g. qfuturewatcher.h
			// Probably can't be supported in the Go binding

		case "TypeAliasDecl", // qglobal.h
			"UsingDirectiveDecl", // qtextstream.h
			"UsingDecl",          // qglobal.h
			"UsingShadowDecl":    // global.h
			// TODO e.g.
			// Should be treated like a typedef

		case "TypedefDecl":
			td, err := processTypedef(node, addNamePrefix)
			if err != nil {
				return nil, fmt.Errorf("processTypedef: %w", err)
			}
			ret.Typedefs = append(ret.Typedefs, td)

		case "CXXMethodDecl":
			// A C++ class method implementation directly in the header
			// Skip over these

		case "FullComment":
			// Safe to skip

		default:
			return nil, fmt.Errorf("missing handling for clang ast node type %q", kind)
		}
	}

	return &ret, nil // done
}

func processTypedef(node map[string]interface{}, addNamePrefix string) (CppTypedef, error) {
	// Must have a name
	nodename, ok := node["name"].(string)
	if !ok {
		return CppTypedef{}, errors.New("node has no name")
	}

	if typ, ok := node["type"].(map[string]interface{}); ok {
		if qualType, ok := typ["qualType"].(string); ok {
			return CppTypedef{
				Alias:          addNamePrefix + nodename,
				UnderlyingType: parseSingleTypeString(qualType),
			}, nil
		}
	}

	return CppTypedef{}, errors.New("processTypedef: ???")
}

func processClassType(node map[string]interface{}, addNamePrefix string) (CppClass, error) {
	var ret CppClass
	ret.CanDelete = true

	// Must have a name
	nodename, ok := node["name"].(string)
	if !ok {
		// This can happen for some nested class definitions e.g. qbytearraymatcher.h::Data
		return CppClass{}, ErrNoContent // errors.New("node has no name")
	}
	nodename = addNamePrefix + nodename

	// Hacks:
	if nodename == "FromBase64Result" {
		nodename = "QByteArray::FromBase64Result"
	}

	ret.ClassName = nodename

	log.Printf("-> Processing class %q...\n", nodename)

	// Also skip over any custom exceptions
	if !AllowClass(nodename) {
		return CppClass{}, ErrNoContent
	}

	// Skip over forward class declarations
	// This is determined in two ways:
	// 1. If the class has no inner nodes
	inner, ok := node["inner"].([]interface{})
	if !ok {
		return CppClass{}, ErrNoContent
	}

	// 2. If this class has only one `inner` entry that's a VisibilityAttr
	if len(inner) == 1 {
		if node, ok := inner[0].(map[string]interface{}); ok {
			if kind, ok := node["kind"].(string); ok && kind == "VisibilityAttr" {
				return CppClass{}, ErrNoContent
			}
		}
	}

	// Check if this was 'struct' (default visible) or 'class' (default invisible)
	visibility := true
	if tagUsed, ok := node["tagUsed"].(string); ok && tagUsed == "class" {
		visibility = false
	}

	// Check if this is an abstract class
	if definitionData, ok := node["definitionData"].(map[string]interface{}); ok {
		if isAbstract, ok := definitionData["isAbstract"].(bool); ok && isAbstract {
			ret.Abstract = true
		}
	}

	// Check if this (publicly) inherits another class
	if bases, ok := node["bases"].([]interface{}); ok {
		for _, base := range bases {
			base, ok := base.(map[string]interface{})
			if !ok {
				continue
			}

			access, ok := base["access"].(string)
			if !(ok && access == "public") {
				continue
			}

			if typ, ok := base["type"].(map[string]interface{}); ok {
				if qualType, ok := typ["qualType"].(string); ok {
					ret.Inherits = append(ret.Inherits, qualType)
				}
			}
		}
	}

	isSignal := false

	// Parse all methods

nextMethod:
	for _, node := range inner {
		node, ok := node.(map[string]interface{})
		if !ok {
			return CppClass{}, errors.New("inner[] element not an object")
		}

		kind, ok := node["kind"].(string)
		if !ok {
			panic("inner element has no kind")
		}

		switch kind {
		case "AccessSpecDecl":
			// Swap between visible/invisible
			access, ok := node["access"].(string)
			if !ok {
				panic("AccessSpecDecl missing `access` field")
			}

			switch access {
			case "public":
				visibility = true
			case "private", "protected":
				visibility = false
			default:
				panic("unexpected access visibility '" + access + "'")
			}

			// Clang sees Q_SIGNALS/signals as being a macro for `public`
			// If this AccessSpecDecl was imported from a macro, assume it's signals
			isSignal = false
			if loc, ok := node["loc"].(map[string]interface{}); ok {
				if _, ok := loc["expansionLoc"].(map[string]interface{}); ok {
					isSignal = true
				}
			}

		case "FriendDecl":
			// Safe to ignore

		case "VisibilityAttr":
			// These seem to have no useful content

		case "CXXRecordDecl":
			// Child class type definition e.g. QAbstractEventDispatcher::TimerInfo
			// Parse as a whole child class

			if !visibility {
				continue // Skip private/protected
			}

			child, err := processClassType(node, nodename+"::")
			if err != nil {
				if errors.Is(err, ErrNoContent) {
					log.Printf("-> Skipping inner class because: %v", err)
					continue
				}
				panic(err) // A real problem
			}

			ret.ChildClassdefs = append(ret.ChildClassdefs, child)

		case "TypedefDecl":
			// Child class typedef
			td, err := processTypedef(node, nodename+"::")
			if err != nil {
				panic(fmt.Errorf("processTypedef: %w", err)) // A real problem
			}
			ret.ChildTypedefs = append(ret.ChildTypedefs, td)

		case "CXXConstructorDecl":

			if isImplicit, ok := node["isImplicit"].(bool); ok && isImplicit {
				// This is an implicit ctor. Therefore the class is constructable
				// even if we're currently in a `private:` block.

			} else if !visibility {
				continue // Skip private/protected
			}

			if ret.Abstract {
				continue // The bindings can't construct an abstract class
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				continue
			}

			var mm CppMethod
			err := parseMethod(node, &mm)
			if err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping ctor with complex type")
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			// Always set IsStatic for constructors, since they can be called without
			// an existing class instance
			mm.IsStatic = true

			// Some QFoo constructors take a QFooPrivate
			for _, p := range mm.Parameters {
				if strings.Contains(p.ParameterType, "Private") {
					log.Printf("Skipping constructor taking Private type")
					continue nextMethod
				}
			}

			if ret.ClassName == "QDebug" && len(mm.Parameters) == 1 && mm.Parameters[0].ParameterType == "QString" && mm.Parameters[0].Pointer {
				log.Printf("Skipping ctor taking QString pointer")
				continue nextMethod
			}

			if ret.ClassName == "QXmlStreamWriter" && len(mm.Parameters) == 1 && mm.Parameters[0].ParameterType == "QString" && mm.Parameters[0].Pointer {
				log.Printf("Skipping ctor taking QString pointer") // qxmlstream.h 4th constructor overload
				continue nextMethod
			}

			ret.Ctors = append(ret.Ctors, mm)

		case "CXXDestructorDecl":
			// We don't need to expose destructors in the binding beyond offering
			// a regular delete function
			// However if this destructor is private or deleted, we should
			// not bind it

			if isImplicit, ok := node["isImplicit"].(bool); ok && isImplicit {
				// This is an implicit dtor. Therefore the class is deleteable
				// even if we're currently in a `private:` block.
				ret.CanDelete = true
				continue
			}

			if !visibility {
				ret.CanDelete = false
				continue
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				ret.CanDelete = false
				continue
			}

		case "CXXMethodDecl":
			if !visibility {
				continue // Skip private/protected
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				continue
			}

			// Method
			methodName, ok := node["name"].(string)
			if !ok {
				return CppClass{}, errors.New("method has no name")
			}

			var mm CppMethod
			mm.MethodName = methodName

			if strings.Contains(methodName, `QGADGET`) {
				log.Printf("Skipping method %q with weird QGADGET behaviour\n", mm.MethodName)
				continue
			}

			err := parseMethod(node, &mm)
			if err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping method %q with complex type", mm.MethodName)
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			for _, p := range mm.Parameters {
				if strings.HasSuffix(p.ParameterType, "Private") {
					log.Printf("Skipping method %q taking Private type", mm.MethodName)
					continue nextMethod
				}
			}
			if strings.HasSuffix(mm.ReturnType.ParameterType, "Private") {
				log.Printf("Skipping method %q returning Private type", mm.MethodName)
				continue nextMethod
			}

			mm.IsSignal = isSignal && !mm.IsStatic && mm.MethodName != `metaObject`

			if mm.IsReceiverMethod() {
				log.Printf("Skipping method %q using non-projectable receiver pattern parameters", mm.MethodName)
				continue nextMethod
			}

			if ret.ClassName == "QFile" && mm.MethodName == "moveToTrash" && len(mm.Parameters) == 2 && mm.Parameters[1].ParameterType == "QString" && mm.Parameters[1].Pointer {
				// @ref https://doc.qt.io/qt-6/qfile.html#moveToTrash-1
				log.Printf("Skipping method %q using complex return type by pointer argument", mm.MethodName) // TODO support this
				continue nextMethod
			}

			if ret.ClassName == "QLockFile" && mm.MethodName == "getLockInfo" && len(mm.Parameters) == 3 && mm.Parameters[1].ParameterType == "QString" && mm.Parameters[1].Pointer {
				log.Printf("Skipping method %q using complex return type by pointer argument", mm.MethodName) // TODO support this
				continue nextMethod
			}

			if ret.ClassName == "QTextDecoder" && mm.MethodName == "toUnicode" && len(mm.Parameters) == 3 && mm.Parameters[0].ParameterType == "QString" && mm.Parameters[0].Pointer {
				log.Printf("Skipping method %q using complex return type by pointer argument", mm.MethodName) // TODO support this
				continue nextMethod
			}

			if ret.ClassName == "QTextStream" && mm.MethodName == "readLineInto" && len(mm.Parameters) > 0 && mm.Parameters[0].ParameterType == "QString" && mm.Parameters[0].Pointer {
				log.Printf("Skipping method %q using complex return type by pointer argument", mm.MethodName) // TODO support this
				continue nextMethod
			}

			ret.Methods = append(ret.Methods, mm)

		default:
			log.Printf("==> NOT IMPLEMENTED %q\n", kind)
		}
	}

	return ret, nil // done
}

// isExplicitlyDeleted checks if this node is marked `= delete`.
func isExplicitlyDeleted(node map[string]interface{}) bool {

	if explicitlyDeleted, ok := node["explicitlyDeleted"].(bool); ok && explicitlyDeleted {
		return true
	}

	if explicitlyDefaulted, ok := node["explicitlyDefaulted"].(string); ok && explicitlyDefaulted == "deleted" {
		return true
	}

	return false
}

var (
	ErrTooComplex = errors.New("Type declaration is too complex to parse")
	ErrNoContent  = errors.New("There's no content to include")
)

func parseMethod(node map[string]interface{}, mm *CppMethod) error {

	if typobj, ok := node["type"].(map[string]interface{}); ok {
		if qualType, ok := typobj["qualType"].(string); ok {
			// The qualType is the whole type of the method, including its parameter types
			// If anything here is too complicated, skip the whole method

			var err error = nil
			mm.ReturnType, mm.Parameters, mm.IsConst, err = parseTypeString(qualType)
			if err != nil {
				return err
			}

		}
	}

	if storageClass, ok := node["storageClass"].(string); ok && storageClass == "static" {
		mm.IsStatic = true
	}

	if methodInner, ok := node["inner"].([]interface{}); ok {
		paramCounter := 0
		for _, methodObj := range methodInner {
			methodObj, ok := methodObj.(map[string]interface{})
			if !ok {
				return errors.New("inner[] element not an object")
			}

			switch methodObj["kind"] {
			case "ParmVarDecl":
				// Parameter variable
				parmName, _ := methodObj["name"].(string) // n.b. may be unnamed
				if parmName == "" {

					// Generate a default parameter name
					// Super nice autogen names if this is a Q_PROPERTY setter:
					if len(mm.Parameters) == 1 && strings.HasPrefix(mm.MethodName, "set") {
						parmName = strings.ToLower(string(mm.MethodName[3])) + mm.MethodName[4:]

					} else {
						// Otherwise - default
						parmName = fmt.Sprintf("param%d", paramCounter+1)
					}
				}

				// Block reserved Go words, replace with generic parameters
				if goReservedWord(parmName) {
					parmName += "Val"
				}

				// Update the name for the existing nth parameter
				mm.Parameters[paramCounter].ParameterName = parmName

				// If this parameter has any internal AST nodes of its
				// own, assume it means it's an optional parameter
				if _, ok := methodObj["inner"]; ok {
					mm.Parameters[paramCounter].Optional = true
				}

				// Next
				paramCounter++

			default:
				// Something else inside a declaration??
				log.Printf("==> NOT IMPLEMENTED CXXMethodDecl->%q\n", methodObj["kind"])
			}
		}
	}

	// Fixups
	// QDataStream.operator<< return a reference to QDataStream, but have a private
	// copy constructor
	// The bindings don't know it's the same object. This is just a trick for a more
	// ergonomic C++ API but has no real effect
	// Wipe out
	if (mm.MethodName == "operator<<" || mm.MethodName == "operator>>" || mm.MethodName == "writeBytes") && mm.ReturnType.ParameterType == "QDataStream" && mm.ReturnType.ByRef {
		mm.ReturnType = CppParameter{ParameterType: "void"}
	}

	// Change operator= (assign) to always return void. By default it returns *self which
	// is a trick for more ergnonomic C++ that has no real effect
	if mm.MethodName == "operator=" ||
		mm.MethodName == "operator&=" || // qbitarray.h
		mm.MethodName == "operator|=" || // qbitarray.h
		mm.MethodName == "operator^=" { // qbitarray.h
		mm.ReturnType = CppParameter{ParameterType: "void"}
	}

	return nil
}

// parseTypeString converts a function/method type string such as
// - `QString (const char *, const char *, int) const`
// - `void (const QKeySequence \u0026)`
// into its (A) return type and (B) separate parameter types.
// These clang strings never contain the parameter's name, so the names here are
// not filled in.
func parseTypeString(typeString string) (CppParameter, []CppParameter, bool, error) {

	if strings.Contains(typeString, `&&`) { // TODO Rvalue references
		return CppParameter{}, nil, false, ErrTooComplex
	}

	// Cut to exterior-most (, ) pair
	opos := strings.Index(typeString, `(`)
	epos := strings.LastIndex(typeString, `)`)

	if opos == -1 || epos == -1 {
		return CppParameter{}, nil, false, fmt.Errorf("Type string %q missing brackets", typeString)
	}

	isConst := false
	if strings.Contains(typeString[epos:], `const`) {
		isConst = true
	}

	returnType := parseSingleTypeString(strings.TrimSpace(typeString[0:opos]))

	// Skip functions that return ints-by-reference since the ergonomics don't
	// go through the binding
	if returnType.IntType() && returnType.ByRef {
		return CppParameter{}, nil, false, ErrTooComplex // e.g. QSize::rheight()
	}

	inner := typeString[opos+1 : epos]

	// Should be no more brackets
	if strings.ContainsAny(inner, `()`) {
		return CppParameter{}, nil, false, ErrTooComplex
	}

	// Parameters are separated by commas and nesting can not be possible
	params := tokenizeMultipleParameters(inner) // strings.Split(inner, `,`)

	ret := make([]CppParameter, 0, len(params))
	for _, p := range params {

		insert := parseSingleTypeString(p)

		if insert.ParameterType != "" {
			ret = append(ret, insert)
		}
	}

	return returnType, ret, isConst, nil
}

func tokenizeMultipleParameters(p string) []string {
	// Tokenize into top-level strings
	templateDepth := 0
	tokens := []string{}
	wip := ""
	p = strings.TrimSpace(p)
	for _, c := range p {
		if c == '<' {
			wip += string(c)
			templateDepth++
		} else if c == '>' {
			wip += string(c)
			templateDepth--
		} else if c == ',' && templateDepth == 0 {
			tokens = append(tokens, wip)
			wip = ""
		} else {
			wip += string(c)
		}
	}

	tokens = append(tokens, wip)
	return tokens
}

func tokenizeSingleParameter(p string) []string {
	// Tokenize into top-level strings
	templateDepth := 0
	tokens := []string{}
	wip := ""
	p = strings.TrimSpace(p)
	for _, c := range p {
		if c == '<' || c == '(' {
			wip += string(c)
			templateDepth++
		} else if c == '>' || c == ')' {
			wip += string(c)
			templateDepth--
		} else if (c == '*' || c == '&') && templateDepth == 0 {
			if len(wip) > 0 {
				tokens = append(tokens, wip)
			}
			tokens = append(tokens, string(c))
			wip = ""
		} else if c == ' ' && templateDepth == 0 {
			if len(wip) > 0 {
				tokens = append(tokens, wip)
			}
			wip = ""
		} else {
			wip += string(c)
		}
	}

	if len(wip) > 0 {
		tokens = append(tokens, wip)
	}

	return tokens
}
func parseSingleTypeString(p string) CppParameter {

	isSigned := false

	tokens := tokenizeSingleParameter(p) // strings.Split(strings.TrimSpace(p), " ")
	insert := CppParameter{}
	for _, tok := range tokens {

		if tok == "" {
			continue // extra space

		} else if tok == "const" || tok == "*const" {
			// *const happens for QPixmap, clang reports `const char *const *` which
			// isn't even valid syntax
			insert.Const = true

		} else if tok == "&" { // U+0026
			insert.ByRef = true

		} else if tok == "signed" {
			// We don't need this - UNLESS it's 'signed char'
			isSigned = true

		} else if tok == "*" {
			insert.Pointer = true
			insert.PointerCount++

		} else if len(tok) > 4 && strings.HasSuffix(tok, "List") {
			// Classes ending in --List are usually better represented as a QList
			// type directly, so that the binding uses proper Go slices
			// Typedef e.g. QObjectList
			insert.TypeAlias = tok
			switch tok {
			case "QStringList", "QModelIndexList", "QVariantList", "QFileInfoList":
				// These types are defined as a QList of values
				insert.ParameterType += " QList<" + tok[0:len(tok)-4] + ">"
			case "QTextList":
				// This is really a custom class, preserve as-is
				insert.ParameterType += " " + tok
			default:
				// These types are defined as a QList of pointers.
				// QList<QFoo*>. This is the most common case
				insert.ParameterType += " QList<" + tok[0:len(tok)-4] + " *>"
			}

		} else {
			// Valid part of the type name
			if tok == "char" && isSigned {
				tok = "signed char"
				isSigned = false
			}
			insert.ParameterType += " " + tok
		}
	}
	insert.ParameterType = strings.TrimSpace(insert.ParameterType)

	return insert
}

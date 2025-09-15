package main

import (
	"errors"
	"fmt"
	"log"
	"strconv"
	"strings"
)

type HeaderMatcher func(astNodeFilename, curFilename string) bool

func ClangMatchSameHeaderDefinitionOnly(astNodeFilename, curFilename string) bool {
	return astNodeFilename == curFilename
}

type clangMatchUnderPath struct {
	basePath string
}

func (c *clangMatchUnderPath) Match(astNodeFilename, curFilename string) bool {
	if astNodeFilename == curFilename {
		return true
	}
	return strings.HasPrefix(astNodeFilename, c.basePath)
}

var (
	ErrTooComplex          = errors.New("Type declaration is too complex to parse")
	ErrForwardIncompatible = fmt.Errorf("Breaks compatibility with newer versions: %w", ErrTooComplex)
	ErrNoContent           = errors.New("There's no content to include")
)

func (node *AstNode) file() string {
	if loc, ok := node.Fields["loc"].(map[string]interface{}); ok {
		if file, ok := loc["file"].(string); ok {
			return file
		}
		if expansion, ok := loc["expansionLoc"].(map[string]interface{}); ok {
			if file, ok := expansion["file"].(string); ok {
				return file
			}
		}
	}
	return ""
}

// parseHeader parses a whole C++ header into our CppParsedHeader intermediate format.
func parseHeader(node *AstNode, addNamePrefix string, output *CppParsedHeader, matcher HeaderMatcher) {
	kind := node.Kind
	switch kind {
	case "TranslationUnitDecl":
		for _, inner := range node.Inner {
			parseHeader(inner, addNamePrefix, output, matcher)
		}
	case "NamespaceDecl":
		if !matcher(node.file(), output.Filename) {
			return
		}

		// Parse everything inside the namespace with prefix, as if it is
		// a whole separate file
		// Then copy the parsed elements back into our own file
		namespace, ok := node.Fields["name"].(string)
		if ok {
			// Only process named namespaces
			namespaceInner := node.Inner
			for _, inner := range namespaceInner {
				parseHeader(inner, addNamePrefix+namespace+"::", output, matcher)
			}
		}

	case "CXXRecordDecl":
		if !matcher(node.file(), output.Filename) {
			return
		}

		// Process the inner class definition
		obj, err := processClassType(node, addNamePrefix)
		if err != nil {
			if errors.Is(err, ErrNoContent) {
				log.Printf("-> Skipping (%v)\n", err)
				return
			}

			// A real error (shouldn't happen)
			panic(err)
		}

		output.Classes = append(output.Classes, obj)

	case "EnumDecl":
		if !matcher(node.file(), output.Filename) {
			return
		}
		// Child class enum
		en, err := processEnum(node, addNamePrefix)
		if err != nil {
			panic(fmt.Errorf("processEnum: %w", err)) // A real problem
		}
		// n.b. In some cases we may produce multiple "copies" of an enum
		// (e.g. qcborcommon and qmetatype both define QCborSimpleType)
		// Allow, but use a transform pass to avoid multiple definitions of
		// it
		output.Enums = append(output.Enums, en)

	case "TypeAliasDecl", "TypedefDecl":
		if !matcher(node.file(), output.Filename) {
			return
		}

		td, err := processTypedef(node, addNamePrefix)
		if err != nil {
			panic(fmt.Errorf("processTypedef: %w", err)) // A real problem
		}
		output.Typedefs = append(output.Typedefs, td)
	default:
		panic(fmt.Sprintf("missing handling for clang ast node type %q id %v", kind, node.Id))
	}
}

// processTypedef parses a single C++ typedef into our intermediate format.
func processTypedef(node *AstNode, addNamePrefix string) (CppTypedef, error) {
	// Must have a name
	nodename, ok := node.Fields["name"].(string)
	if !ok {
		return CppTypedef{}, errors.New("node has no name")
	}

	if typ, ok := node.Fields["type"].(map[string]interface{}); ok {
		if qualType, ok := typ["qualType"].(string); ok {
			return CppTypedef{
				Alias:          addNamePrefix + nodename,
				UnderlyingType: parseSingleTypeString(qualType),
			}, nil
		}
	}

	return CppTypedef{}, errors.New("processTypedef: ???")
}

type visibilityState int

const (
	VsPublic    visibilityState = 1
	VsProtected                 = 2
	VsPrivate                   = 3
)

// processClassType parses a single C++ class definition into our intermediate format.
func processClassType(node *AstNode, addNamePrefix string) (CppClass, error) {
	var ret CppClass
	ret.CanDelete = true

	// Must have a name
	nodename, ok := node.Fields["name"].(string)
	if !ok {
		// This can happen for some nested class definitions e.g. qbytearraymatcher.h::Data
		return CppClass{}, ErrNoContent // errors.New("node has no name")
	}
	nodename = addNamePrefix + nodename

	// Hacks:
	if nodename == "FromBase64Result" {
		nodename = "QByteArray::FromBase64Result"
	}
	if nodename == "Connection" {
		// qobject.h requires this, defined in qobjectdefs.h
		// We produce a type named 'Connection' instead of 'QMetaObject::Connection' as expected, not sure why
		nodename = "QMetaObject::Connection"
	}

	ret.ClassName = nodename

	log.Printf("-> Processing class %q...\n", nodename)

	// Skip over forward class declarations
	// This is determined in two ways:
	// 1. If the class has no inner nodes
	if len(node.Inner) == 0 {
		return CppClass{}, ErrNoContent
	}

	// 2. If this class has only one `inner` entry that's a VisibilityAttr
	if len(node.Inner) == 1 {
		if node := node.Inner[0]; ok {
			if node.Kind == "VisibilityAttr" {
				return CppClass{}, ErrNoContent
			}
		}
	}

	// Check if this was 'struct' (default public) or 'class' (default private)
	visibility := VsPublic
	if tagUsed, ok := node.Fields["tagUsed"].(string); ok && tagUsed == "class" {
		visibility = VsPrivate
	}

	// Check if this is an abstract class
	if definitionData, ok := node.Fields["definitionData"].(map[string]interface{}); ok {
		if isAbstract, ok := definitionData["isAbstract"].(bool); ok && isAbstract {
			ret.Abstract = true
		}
	}

	// Check if this (publicly) inherits another class
	if bases, ok := node.Fields["bases"].([]interface{}); ok {
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
					ret.DirectInherits = append(ret.DirectInherits, qualType)
				}
			}
		}
	}

	isSignal := false

	// Parse all methods

nextMethod:
	for _, node := range node.Inner {
		kind := node.Kind
		switch kind {
		case "AccessSpecDecl":
			// Swap between visible/invisible
			access, ok := node.Fields["access"].(string)
			if !ok {
				panic("AccessSpecDecl missing `access` field")
			}

			switch access {
			case "public":
				visibility = VsPublic
			case "protected":
				visibility = VsProtected
			case "private":
				visibility = VsPrivate
			default:
				panic("unexpected access visibility '" + access + "'")
			}

			// Clang sees Q_SIGNALS/signals as being a macro for `public`
			// If this AccessSpecDecl was imported from a macro, assume it's signals
			isSignal = false
			if loc, ok := node.Fields["loc"].(map[string]interface{}); ok {
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

			if visibility != VsPublic {
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

		case "TypeAliasDecl", "TypedefDecl":
			// Child class typedef
			td, err := processTypedef(node, nodename+"::")
			if err != nil {
				panic(fmt.Errorf("processTypedef: %w", err)) // A real problem
			}
			ret.ChildTypedefs = append(ret.ChildTypedefs, td)

		case "EnumDecl":
			// Child class enum

			if visibility == VsPrivate {
				continue // Skip private, ALLOW protected
			}

			en, err := processEnum(node, nodename+"::")
			if err != nil {
				panic(fmt.Errorf("processEnum: %w", err)) // A real problem
			}

			if len(en.Entries) > 0 { // e.g. qmetatype's version of QCborSimpleType (the real one is in qcborcommon)
				ret.ChildEnums = append(ret.ChildEnums, en)
			}

		case "CXXConstructorDecl":

			if isImplicit, ok := node.Fields["isImplicit"].(bool); ok && isImplicit {
				// This is an implicit ctor. Therefore the class is constructable
				// even if we're currently in a `private:` block.

			} else if visibility != VsPublic {
				continue // Skip private/protected
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

			if !AllowCtor(ret.ClassName, mm) {
				continue
			}

			ret.Ctors = append(ret.Ctors, mm)

		case "CXXDestructorDecl":
			// We don't need to expose destructors in the binding beyond offering
			// a regular delete function
			// However if this destructor is private or deleted, we should
			// not bind it

			if isImplicit, ok := node.Fields["isImplicit"].(bool); ok && isImplicit {
				// This is an implicit dtor. Therefore the class is deleteable
				// even if we're currently in a `private:` block.
				ret.CanDelete = true
				continue
			}

			if visibility != VsPublic {
				// TODO Is there any use case for allowing MIQT to overload a virtual destructor?
				ret.CanDelete = false
				continue
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				ret.CanDelete = false
				continue
			}

		case "CXXMethodDecl",
			"CXXConversionDecl": // e.g. `QColor::operator QVariant()`

			// Method
			methodName, ok := node.Fields["name"].(string)
			if !ok {
				return CppClass{}, errors.New("method has no name")
			}

			isImplicit, ok := node.Fields["isImplicit"].(bool)

			if ok && isImplicit {
				// implicit is implicitly public!
			} else if visibility == VsPrivate {
				// If this is a virtual method, we want to allow overriding it even
				// if it is protected
				// But we can only call it if it is public
				ret.PrivateMethods = append(ret.PrivateMethods, methodName)
				continue // Skip private, ALLOW protected
			}

			// Check if this is `= delete`
			if isExplicitlyDeleted(node) {
				continue
			}

			var mm CppMethod
			mm.MethodName = methodName

			err := parseMethod(node, &mm)
			if err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping method %q with complex type", mm.MethodName)
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			// Check for private signal
			if i, ok := isPrivateSignal(&mm); ok {
				// Remove only the QPrivateSignal parameter, keep other parameters
				mm.Parameters = append(mm.Parameters[:i], mm.Parameters[i+1:]...)
				mm.IsSignal = true
				ret.PrivateSignals = append(ret.PrivateSignals, mm)
				continue nextMethod
			}

			mm.IsSignal = isSignal && !mm.IsStatic && AllowSignal(mm)
			mm.IsProtected = !isImplicit && (visibility == VsProtected)

			if mm.IsProtected && mm.IsStatic && !mm.IsVirtual {
				// Protected static method, so there is no possible subclass to call it from
				// e.g. QBitmap::fromImageInPlace
				// Non-virtual, so we can't override it
				// There is nothing we can do with this function
				continue nextMethod
			}
			if mm.IsProtected && strings.HasPrefix(mm.MethodName, `operator`) {
				// The subclass system causes problems here with e.g. QStandardItem::operator=
				// This is a protected method, but the assignment `other` ends up
				// with the child MiqtVirtual class instead of the original one
				// Just skip them as well
				continue nextMethod
			}

			// Once all processing is complete, pass to exceptions for final decision

			if err := AllowMethod(ret.ClassName, mm); err != nil {
				if errors.Is(err, ErrTooComplex) {
					log.Printf("Skipping method %q with complex type", mm.MethodName)
					continue nextMethod
				}

				// Real error
				return CppClass{}, err
			}

			ret.Methods = append(ret.Methods, mm)

		default:
			log.Printf("==> NOT IMPLEMENTED %q\n", kind)
		}
	}

	return ret, nil // done
}

// isExplicitlyDeleted checks if this node is marked `= delete`.
func isExplicitlyDeleted(node *AstNode) bool {

	if explicitlyDeleted, ok := node.Fields["explicitlyDeleted"].(bool); ok && explicitlyDeleted {
		return true
	}

	if explicitlyDefaulted, ok := node.Fields["explicitlyDefaulted"].(string); ok && explicitlyDefaulted == "deleted" {
		return true
	}

	return false
}

// isPrivateSignal checks if a method is a private signal by looking for a
// QPrivateSignal parameter
func isPrivateSignal(method *CppMethod) (int, bool) {
	for i, param := range method.Parameters {
		if strings.HasSuffix(param.ParameterType, "::QPrivateSignal") {
			return i, true
		}
	}
	return -1, false
}

// processEnum parses a Clang enum into our CppEnum intermediate format.
func processEnum(node *AstNode, addNamePrefix string) (CppEnum, error) {
	var ret = CppEnum{}

	// Underlying type
	ret.UnderlyingType = parseSingleTypeString("int")
	if nodefut, ok := node.Fields["fixedUnderlyingType"].(map[string]interface{}); ok {
		if nodequal, ok := nodefut["qualType"].(string); ok {
			ret.UnderlyingType = parseSingleTypeString(nodequal)
		}
	}

	// Name
	nodename, ok := node.Fields["name"].(string)
	if !ok {
		// An unnamed enum is possible (e.g. qcalendar.h)
		// It defines integer constants just in the current scope
		ret.EnumName = addNamePrefix

	} else {
		ret.EnumName = addNamePrefix + nodename
	}

	// Entries
	if len(node.Inner) == 0 {
		// This is either a forward declaration or an empty enum
		return ret, nil
	}

	var lastImplicitValue int64 = -1

nextEnumEntry:
	for _, entry := range node.Inner {
		kind := entry.Kind
		if kind == "DeprecatedAttr" || kind == "FullComment" || kind == "VisibilityAttr" {
			continue nextEnumEntry // skip
		} else if kind == "EnumConstantDecl" {
			// allow
		} else {
			// unknown kind, or maybe !ok
			return ret, fmt.Errorf("unexpected kind %q", kind)
		}

		var cee CppEnumEntry

		entryname, ok := entry.Fields["name"].(string)
		if !ok {
			return ret, errors.New("entry without name")
		}

		cee.EntryName = entryname

		// Try to find the enum value
		ei1 := entry.Inner
		if !ok {
			// No inner value on the enum = autoincrement
			// Fall through as if a blank ei1, this will be handled
		}

		// There may be more than one RHS `inner` expression if one of them
		// is a comment
		// Iterate through each of the ei1 entries and see if any of them
		// work for the purposes of enum constant value parsing
		foundValidInner := false
		for _, ei1_0 := range ei1 {
			ei1Kind := ei1_0.Kind

			if ei1Kind == "FullComment" {
				continue
			}
			foundValidInner = true

			// Best case: .inner -> kind=ConstantExpr value=xx
			// e.g. qabstractitemmodel
			if ei1Kind == "ConstantExpr" {
				if ei1Value, ok := ei1_0.Fields["value"].(string); ok {
					cee.EntryValue = ei1Value
					goto afterParse
				}
			}

			// Best case: .inner -> kind=ImplicitCastExpr .inner -> kind=ConstantExpr value=xx
			// e.g. QCalendar (when there is a int typecast)
			if ei1Kind == "ImplicitCastExpr" {
				if ei2 := ei1_0.Inner; ok && len(ei2) > 0 {
					ei2_0 := ei2[0]
					if ei2_0.Kind == "ConstantExpr" {
						if ei2Value, ok := ei2_0.Fields["value"].(string); ok {
							cee.EntryValue = ei2Value
							goto afterParse
						}
					}
				}
			}

			if ei1Kind == "DeprecatedAttr" {
				log.Printf("Enum entry %q is deprecated, skipping", ret.EnumName+"::"+entryname)
				continue nextEnumEntry
			}

		}

		// If we made it here, we did not hit any of the `goto afterParse` cases
		if !foundValidInner {
			// Enum case without definition e.g. QCalendar::Gregorian
			// This means one more than the last value
			cee.EntryValue = strconv.FormatInt(lastImplicitValue+1, 10)
		}

	afterParse:
		if cee.EntryValue == "" {
			return ret, fmt.Errorf("Complex enum %q entry %q", ret.EnumName, entryname)
		}

		var err error
		if cee.EntryValue == "true" || cee.EntryValue == "false" {
			ret.UnderlyingType = parseSingleTypeString("bool")

		} else {
			lastImplicitValue, err = strconv.ParseInt(cee.EntryValue, 10, 64)
			if err != nil {
				return ret, fmt.Errorf("Enum %q entry %q has non-parseable value %q: %w", ret.EnumName, entryname, cee.EntryValue, err)
			}
		}

		ret.Entries = append(ret.Entries, cee)
	}

	return ret, nil
}

// parseMethod parses a Clang method into our CppMethod intermediate format.
func parseMethod(node *AstNode, mm *CppMethod) error {

	if typobj, ok := node.Fields["type"].(map[string]interface{}); ok {
		if qualType, ok := typobj["qualType"].(string); ok {
			// The qualType is the whole type of the method, including its parameter types
			// If anything here is too complicated, skip the whole method

			var err error = nil
			mm.ReturnType, mm.Parameters, mm.IsConst, mm.IsNoExcept, err = parseTypeString(qualType)
			if err != nil {
				return err
			}
		}
	}

	if storageClass, ok := node.Fields["storageClass"].(string); ok && storageClass == "static" {
		mm.IsStatic = true
	}

	if virtual, ok := node.Fields["virtual"].(bool); ok && virtual {
		mm.IsVirtual = true
	}

	if pure, ok := node.Fields["pure"].(bool); ok && pure {
		mm.IsPureVirtual = true
	}

	if methodInner := node.Inner; len(methodInner) > 0 {
		paramCounter := 0
		for _, methodObj := range methodInner {
			switch methodObj.Kind {
			case "ParmVarDecl":
				// Parameter variable
				parmName, _ := methodObj.Fields["name"].(string) // n.b. may be unnamed
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

				// Update the name for the existing nth parameter
				mm.Parameters[paramCounter].ParameterName = parmName

				// If this parameter has any internal AST nodes of its
				// own, assume it means it's an optional parameter
				if len(methodObj.Inner) > 0 {
					mm.Parameters[paramCounter].Optional = true
				}

				// Next
				paramCounter++

			case "OverrideAttr":
				// void keyPressEvent(QKeyEvent *e) override;
				// This is a virtual method being overridden and is a replacement
				// for actually using the 'virtual' keyword
				mm.IsVirtual = true

			default:
				// Something else inside a declaration??
				log.Printf("==> NOT IMPLEMENTED CXXMethodDecl->%q\n", methodObj.Kind)
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
func parseTypeString(typeString string) (CppParameter, []CppParameter, bool, bool, error) {

	if strings.Contains(typeString, `&&`) { // TODO Rvalue references
		return CppParameter{}, nil, false, false, ErrTooComplex
	}

	// Cut to exterior-most (, ) pair
	opos := strings.Index(typeString, `(`)
	epos := strings.LastIndex(typeString, `)`)

	if opos == -1 || epos == -1 {
		return CppParameter{}, nil, false, false, fmt.Errorf("Type string %q missing brackets", typeString)
	}

	isConst := strings.Contains(typeString[epos:], `const`)
	isNoExcept := strings.Contains(typeString[epos:], `noexcept`)

	returnType := parseSingleTypeString(strings.TrimSpace(typeString[0:opos]))

	inner := typeString[opos+1 : epos]

	// Should be no more brackets
	if strings.ContainsAny(inner, `()`) {
		return CppParameter{}, nil, false, false, ErrTooComplex
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

	return returnType, ret, isConst, isNoExcept, nil
}

// tokenizeMultipleParameters is like strings.Split by comma, except it does not
// split if a comma is used for an interior template type e.g. QMap<K,V>.
// It is expected to be used with a Clang type representing a function's parameter
// list.
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

// tokenizeSingleParameter tokenizes a Clang qualType into separate tokens.
// Interior templates or brackets are tokenized together as a single token.
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

// parseSingleTypeString parses the Clang qualType for a single type into our
// CppParameter intermediate format.
func parseSingleTypeString(p string) CppParameter {

	isSigned := false

	tokens := tokenizeSingleParameter(p)
	insert := CppParameter{}
	for _, tok := range tokens {

		if tok == "" {
			continue // extra space

		} else if tok == "const" {
			insert.Const = true

		} else if tok == "class" {
			// QNetwork has some references to 'class QSslCertificate'. Flatten
			continue

		} else if tok == "noexcept" {
			// Used by ScintillaEdit
			insert.NoExcept = true

		} else if tok == "&" { // U+0026
			insert.ByRef = true

		} else if tok == "signed" {
			// We don't need this - UNLESS it's 'signed char'
			isSigned = true

		} else if tok == "*" {
			insert.Pointer = true
			insert.PointerCount++

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
	insert.ParameterType = strings.TrimPrefix(insert.ParameterType, "::")

	return insert
}

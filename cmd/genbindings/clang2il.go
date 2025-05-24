package main

import (
	"errors"
	"fmt"
	"log"
	"strconv"
	"strings"
)

var (
	ErrTooComplex = errors.New("Type declaration is too complex to parse")
	ErrNoContent  = errors.New("There's no content to include")
)

// parseHeader parses a whole C++ header into our CppParsedHeader intermediate format.
func parseHeader(topLevel []interface{}, addNamePrefix string) (*CppParsedHeader, error) {

	var ret CppParsedHeader

nextTopLevel:
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
			"BuiltinTemplateDecl",                  // Scintilla
			"VarTemplatePartialSpecializationDecl", // e.g. Qt6 qcontainerinfo.h
			"VarTemplateSpecializationDecl",        // e.g. qhashfunctions.h
			"TypeAliasTemplateDecl",                // e.g. qendian.h
			"VarTemplateDecl":                      // e.g. qglobal.h
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
				// Qt 5 has none of these
				// Qt 6 has some e.g. qloggingcategory.h
				// Treat it as not having existed
				continue nextTopLevel
			}

			namespaceInner, ok := node["inner"].([]interface{})
			if !ok {
				// A namespace declaration with no inner content means that, for
				// the rest of this whole file, we are in this namespace
				// Update our own `addNamePrefix` accordingly
				addNamePrefix += namespace + "::"

			} else {

				contents, err := parseHeader(namespaceInner, addNamePrefix+namespace+"::")
				if err != nil {
					panic(err)
				}

				ret.AddContentFrom(contents)
			}

		case "FunctionDecl":
			// TODO

		case "EnumDecl":
			// Child class enum
			en, err := processEnum(node, addNamePrefix)
			if err != nil {
				panic(fmt.Errorf("processEnum: %w", err)) // A real problem
			}

			// n.b. In some cases we may produce multiple "copies" of an enum
			// (e.g. qcborcommon and qmetatype both define QCborSimpleType)
			// Allow, but use a transform pass to avoid multiple definitions of
			// it
			ret.Enums = append(ret.Enums, en)

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

		case "AbiTagAttr":
			// e.g. scintilla.org ScintillaEditBase
		case "VisibilityAttr":
			// e.g. scintilla.org ScintillaEditBase
			// Don't understand why this appears at top level??

		case "UsingDirectiveDecl", // qtextstream.h
			"UsingDecl",       // qglobal.h
			"UsingShadowDecl": // global.h
			// TODO e.g.
			// Should be treated like a typedef

		case "TypeAliasDecl", "TypedefDecl":
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

// processTypedef parses a single C++ typedef into our intermediate format.
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

type visibilityState int

const (
	VsPublic    visibilityState = 1
	VsProtected                 = 2
	VsPrivate                   = 3
)

// processClassType parses a single C++ class definition into our intermediate format.
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

	// Check if this was 'struct' (default public) or 'class' (default private)
	visibility := VsPublic
	if tagUsed, ok := node["tagUsed"].(string); ok && tagUsed == "class" {
		visibility = VsPrivate
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
					ret.DirectInherits = append(ret.DirectInherits, qualType)
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

			if isImplicit, ok := node["isImplicit"].(bool); ok && isImplicit {
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

			if isImplicit, ok := node["isImplicit"].(bool); ok && isImplicit {
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
			methodName, ok := node["name"].(string)
			if !ok {
				return CppClass{}, errors.New("method has no name")
			}

			// If this is a virtual method, we want to allow overriding it even
			// if it is protected
			// But we can only call it if it is public
			if visibility == VsPrivate {
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
			mm.IsProtected = (visibility == VsProtected)

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
func isExplicitlyDeleted(node map[string]interface{}) bool {

	if explicitlyDeleted, ok := node["explicitlyDeleted"].(bool); ok && explicitlyDeleted {
		return true
	}

	if explicitlyDefaulted, ok := node["explicitlyDefaulted"].(string); ok && explicitlyDefaulted == "deleted" {
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
func processEnum(node map[string]interface{}, addNamePrefix string) (CppEnum, error) {
	var ret CppEnum

	// Underlying type
	ret.UnderlyingType = parseSingleTypeString("int")
	if nodefut, ok := node["fixedUnderlyingType"].(map[string]interface{}); ok {
		if nodequal, ok := nodefut["qualType"].(string); ok {
			ret.UnderlyingType = parseSingleTypeString(nodequal)
		}
	}

	// Name
	nodename, ok := node["name"].(string)
	if !ok {
		// An unnamed enum is possible (e.g. qcalendar.h)
		// It defines integer constants just in the current scope
		ret.EnumName = addNamePrefix

	} else {
		ret.EnumName = addNamePrefix + nodename
	}

	// Entries
	inner, ok := node["inner"].([]interface{})
	if !ok {
		// An enum with no entries? We're done
		return ret, nil
	}

	var lastImplicitValue int64 = -1

nextEnumEntry:
	for _, entry := range inner {
		entry, ok := entry.(map[string]interface{})
		if !ok {
			return ret, errors.New("bad inner type")
		}

		kind, ok := entry["kind"].(string)
		if kind == "DeprecatedAttr" || kind == "FullComment" {
			continue nextEnumEntry // skip
		} else if kind == "EnumConstantDecl" {
			// allow
		} else {
			// unknown kind, or maybe !ok
			return ret, fmt.Errorf("unexpected kind %q", kind)
		}

		var cee CppEnumEntry

		entryname, ok := entry["name"].(string)
		if !ok {
			return ret, errors.New("entry without name")
		}

		cee.EntryName = entryname

		// Try to find the enum value
		ei1, ok := entry["inner"].([]interface{})
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

			ei1_0 := ei1_0.(map[string]interface{})
			ei1Kind, ok := ei1_0["kind"].(string)
			if !ok {
				panic("inner with no kind (1)")
			}

			if ei1Kind == "FullComment" {
				continue
			}
			foundValidInner = true

			// Best case: .inner -> kind=ConstantExpr value=xx
			// e.g. qabstractitemmodel
			if ei1Kind == "ConstantExpr" {
				log.Printf("Got ConstantExpr OK")
				if ei1Value, ok := ei1_0["value"].(string); ok {
					cee.EntryValue = ei1Value
					goto afterParse
				}
			}

			// Best case: .inner -> kind=ImplicitCastExpr .inner -> kind=ConstantExpr value=xx
			// e.g. QCalendar (when there is a int typecast)
			if ei1Kind == "ImplicitCastExpr" {
				if ei2, ok := ei1_0["inner"].([]interface{}); ok && len(ei2) > 0 {
					ei2_0 := ei2[0].(map[string]interface{})
					if ei2Kind, ok := ei2_0["kind"].(string); ok && ei2Kind == "ConstantExpr" {
						if ei2Value, ok := ei2_0["value"].(string); ok {
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
func parseMethod(node map[string]interface{}, mm *CppMethod) error {

	if typobj, ok := node["type"].(map[string]interface{}); ok {
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

	if storageClass, ok := node["storageClass"].(string); ok && storageClass == "static" {
		mm.IsStatic = true
	}

	if virtual, ok := node["virtual"].(bool); ok && virtual {
		mm.IsVirtual = true
	}

	if pure, ok := node["pure"].(bool); ok && pure {
		mm.IsPureVirtual = true
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

				// Update the name for the existing nth parameter
				mm.Parameters[paramCounter].ParameterName = parmName

				// If this parameter has any internal AST nodes of its
				// own, assume it means it's an optional parameter
				if _, ok := methodObj["inner"]; ok {
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

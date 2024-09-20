package main

import (
	"regexp"
	"strings"
)

var (
	KnownClassnames map[string]struct{} // Entries of the form QFoo::Bar if it is an inner class
	KnownTypedefs   map[string]CppTypedef
	KnownEnums      map[string]CppEnum
)

func init() {
	KnownClassnames = make(map[string]struct{})
	KnownTypedefs = make(map[string]CppTypedef)
	KnownEnums = make(map[string]CppEnum)
}

type CppParameter struct {
	ParameterName string
	ParameterType string
	Const         bool
	Pointer       bool
	PointerCount  int
	ByRef         bool
	Optional      bool

	QtCppOriginalType *CppParameter // If we rewrote QStringList->QList<String>, this field contains the original QStringList. Otherwise, it's blank
}

func (p *CppParameter) ApplyTypedef(matchedUnderlyingType CppParameter) {
	if p.QtCppOriginalType == nil {
		tmp := *p                  // Copy
		p.QtCppOriginalType = &tmp // Overwrite once only, at the earliest base type
	}
	p.ParameterType = matchedUnderlyingType.ParameterType

	// If this was a pointer to a typedef'd type, or a typedef of a pointer type, we need to preserve that
	p.Const = p.Const || matchedUnderlyingType.Const
	p.Pointer = p.Pointer || matchedUnderlyingType.Pointer
	p.PointerCount += matchedUnderlyingType.PointerCount
	p.ByRef = p.ByRef || matchedUnderlyingType.ByRef
	p.Optional = p.Optional || matchedUnderlyingType.Optional
}

func (p *CppParameter) PointerTo() CppParameter {
	ret := *p // Copy
	ret.Pointer = true
	ret.PointerCount++
	return ret
}

func (p *CppParameter) ConstCast(isConst bool) CppParameter {
	ret := *p // Copy
	ret.Const = isConst
	return ret
}

func (p *CppParameter) GetQtCppType() *CppParameter {
	if p.QtCppOriginalType != nil {
		return p.QtCppOriginalType
	}

	return p
}

func (p CppParameter) QFlagsOf() (CppParameter, bool) {

	if strings.HasPrefix(p.ParameterType, `QFlags<`) {
		ret := parseSingleTypeString(p.ParameterType[7 : len(p.ParameterType)-1])
		ret.ParameterName = p.ParameterName + "_qf"
		return ret, true
	}

	if under := p.QtCppOriginalType; under != nil {
		if strings.HasPrefix(under.ParameterType, `QFlags<`) {
			ret := parseSingleTypeString(under.ParameterType[7 : len(under.ParameterType)-1])
			ret.ParameterName = under.ParameterName + "_qf"
			return ret, true
		}
	}

	return CppParameter{}, false
}

func (p CppParameter) IsFlagType() bool {
	_, ok := p.QFlagsOf()
	return ok
}

func (p CppParameter) QtClassType() bool {

	// Maybe if it's an inner class
	if _, ok := KnownClassnames[p.ParameterType]; ok {
		return true
	}

	if p.ParameterType == "QString" {
		return true
	}

	return false
}

func (p CppParameter) IsKnownEnum() bool {
	_, ok := KnownEnums[p.ParameterType]
	return ok
}

func (p CppParameter) QListOf() (CppParameter, bool) {
	if strings.HasPrefix(p.ParameterType, "QList<") && strings.HasSuffix(p.ParameterType, `>`) {
		ret := parseSingleTypeString(p.ParameterType[6 : len(p.ParameterType)-1])
		ret.ParameterName = p.ParameterName + "_lv"
		return ret, true
	}

	if strings.HasPrefix(p.ParameterType, "QVector<") && strings.HasSuffix(p.ParameterType, `>`) {
		ret := parseSingleTypeString(p.ParameterType[8 : len(p.ParameterType)-1])
		ret.ParameterName = p.ParameterName + "_vv"
		return ret, true
	}

	return CppParameter{}, false
}

func (p CppParameter) QMapOf() bool {
	return strings.HasPrefix(p.ParameterType, `QMap<`) ||
		strings.HasPrefix(p.ParameterType, `QHash<`) // TODO support this
}

func (p CppParameter) QPairOf() bool {
	return strings.HasPrefix(p.ParameterType, `QPair<`) // TODO support this
}

func (p CppParameter) QSetOf() (CppParameter, bool) {
	if strings.HasPrefix(p.ParameterType, `QSet<`) {
		ret := parseSingleTypeString(p.ParameterType[5 : len(p.ParameterType)-1])
		ret.ParameterName = p.ParameterName + "_sv"
		return ret, true
	}

	return CppParameter{}, false
}

func (p CppParameter) IntType() bool {

	if p.IsKnownEnum() {
		return true
	}

	switch p.ParameterType {
	case "int", "unsigned int", "uint",
		"short", "unsigned short", "ushort", "qint16", "quint16",
		"qint8", "quint8",
		"unsigned char", "signed char", "uchar",
		"long", "unsigned long", "ulong", "qint32", "quint32",
		"longlong", "ulonglong", "qlonglong", "qulonglong", "qint64", "quint64", "int64_t", "uint64_t", "long long", "unsigned long long",
		"qintptr", "quintptr", "uintptr_t", "intptr_t",
		"qsizetype", "size_t",
		"QIntegerForSizeof<void *>::Unsigned",
		"QIntegerForSizeof<void *>::Signed",
		"qptrdiff", "ptrdiff_t",
		"double", "float", "qreal":
		return true

	case "char":
		// Only count char as an integer type with cast assertions if it's
		// not possibly a char* string in disguise
		// (However, unsigned chars are always like ints)
		return !p.Pointer

	default:
		return false
	}
}

type CppProperty struct {
	PropertyName string
	PropertyType string
	Visibility   string
}

type CppMethod struct {
	MethodName         string       // C++ method name, unless OverrideMethodName is set, in which case a nice alternative name
	OverrideMethodName string       // C++ method name, present only if we changed the target
	ReturnType         CppParameter // Name not used
	Parameters         []CppParameter
	IsStatic           bool
	IsSignal           bool
	IsConst            bool
	HiddenParams       []CppParameter // Populated if there is an overload with more parameters
	LinuxOnly          bool
}

func (m CppMethod) CppCallTarget() string {
	if m.OverrideMethodName != "" {
		return m.OverrideMethodName
	}
	return m.MethodName
}

func (m *CppMethod) Rename(newName string) {
	if m.OverrideMethodName == "" {
		m.OverrideMethodName = m.MethodName
	} else {
		// If it was already set, we're already a level of overload resolution deep - preserve it
	}

	m.MethodName = newName
}

func IsArgcArgv(params []CppParameter, pos int) bool {
	// Check if the arguments starting at position=pos are the argc/argv pattern.
	// QApplication/QGuiApplication constructors are the only expected example of this.
	return (len(params) > pos+1 &&
		params[pos].ParameterName == "argc" &&
		params[pos].ParameterType == "int" &&
		params[pos].ByRef &&
		params[pos+1].ParameterName == "argv" &&
		params[pos+1].ParameterType == "char") &&
		params[pos+1].Pointer &&
		params[pos+1].PointerCount == 2
}

func IsReceiverMethod(params []CppParameter, pos int) bool {
	// Check if the arguments starting at position=pos are the receiver/member pattern.
	// QMenu->addAction is the main example of this
	return (len(params) > pos+1 &&
		params[pos].ParameterName == "receiver" &&
		params[pos].ParameterType == "QObject" &&
		params[pos].Pointer &&
		params[pos+1].ParameterName == "member" &&
		params[pos+1].ParameterType == "char" &&
		params[pos+1].Pointer)
}

func (nm CppMethod) IsReceiverMethod() bool {
	// Returns true if any of the parameters use the receiever-method pattern
	for i := 0; i < len(nm.Parameters); i++ {
		if IsReceiverMethod(nm.Parameters, i) {
			return true
		}
	}
	return false
}

func (nm CppMethod) SafeMethodName() string {

	tmp := nm.MethodName

	// Strip redundant Qt prefix, we know these are all Qt functions
	if strings.HasPrefix(tmp, "qt_") {
		tmp = tmp[3:]
	}

	// Operator-overload methods have names not representable in binding
	// languages. Replace more specific cases first
	replacer := strings.NewReplacer(

		`==`, `Equal`,
		`!=`, `NotEqual`,
		`>=`, `GreaterOrEqual`,
		`<=`, `LesserOrEqual`,
		`=`, `Assign`,

		`<<`, `ShiftLeft`, // Qt classes use it more for stream functions e.g. in QDataStream
		`>>`, `ShiftRight`,
		`>`, `Greater`,
		`<`, `Lesser`,

		`+`, `Plus`,
		`-`, `Minus`,
		`*`, `Multiply`,
		`/`, `Divide`,
		`%`, `Modulo`,

		`&&`, `LogicalAnd`,
		`||`, `LogicalOr`,
		`!`, `Not`,
		`&`, `BitwiseAnd`,
		`|`, `BitwiseOr`,
		`~`, `BitwiseXor`,
		`^`, `BitwiseNot`,

		`->`, `PointerDereference`,
		`[]`, `Subscript`,
		`()`, `Call`,
	)
	tmp = replacer.Replace(tmp)

	// Also make the first letter uppercase so it becomes public in Go
	tmp = titleCase(tmp)

	// Also replace any underscore_case with CamelCase
	tmp = regexp.MustCompile(`_([a-z])`).ReplaceAllStringFunc(tmp, func(match string) string { return strings.ToUpper(match[1:]) })

	return tmp
}

type CppEnumEntry struct {
	EntryName  string
	EntryValue string
}

type CppEnum struct {
	EnumName       string
	UnderlyingType CppParameter
	Entries        []CppEnumEntry
}

type CppClass struct {
	ClassName string
	Abstract  bool
	Ctors     []CppMethod // only use the parameters
	Inherits  []string    // other class names
	Methods   []CppMethod
	Props     []CppProperty
	CanDelete bool

	ChildTypedefs  []CppTypedef
	ChildClassdefs []CppClass
	ChildEnums     []CppEnum
}

type CppTypedef struct {
	Alias          string
	UnderlyingType CppParameter
}

type CppParsedHeader struct {
	Filename string
	Typedefs []CppTypedef
	Enums    []CppEnum
	Classes  []CppClass
}

func (c CppParsedHeader) Empty() bool {
	return len(c.Typedefs) == 0 &&
		len(c.Classes) == 0
}

func (c *CppParsedHeader) AddContentFrom(other *CppParsedHeader) {
	c.Classes = append(c.Classes, other.Classes...)
	c.Enums = append(c.Enums, other.Enums...)
	c.Typedefs = append(c.Typedefs, other.Typedefs...)
}

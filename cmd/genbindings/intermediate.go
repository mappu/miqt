package main

import (
	"regexp"
	"strings"
)

type CppParameter struct {
	ParameterName string
	ParameterType string
	Const         bool
	Pointer       bool
	ByRef         bool
	Optional      bool
}

func (p CppParameter) QtClassType() bool {
	return (p.ParameterType[0] == 'Q') && p.ParameterType != "QRgb"
}

func (p CppParameter) QListOf() (CppParameter, bool) {
	if strings.HasPrefix(p.ParameterType, "QList<") && strings.HasSuffix(p.ParameterType, `>`) {
		return parseSingleTypeString(p.ParameterType[6 : len(p.ParameterType)-1]), true
	}

	if strings.HasPrefix(p.ParameterType, "QVector<") && strings.HasSuffix(p.ParameterType, `>`) {
		return parseSingleTypeString(p.ParameterType[8 : len(p.ParameterType)-1]), true
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

func (p CppParameter) IntType() bool {
	switch p.ParameterType {
	case "int", "unsigned int", "uint",
		"short", "unsigned short", "ushort", "qint16", "quint16",
		"qint8", "quint8",
		// "char", "uchar", // Don't count char or char* as integer types that need cast assertions
		"long", "unsigned long", "ulong", "qint32", "quint32",
		"longlong", "ulonglong", "qlonglong", "qulonglong", "qint64", "quint64", "int64_t", "uint64_t", "long long", "unsigned long long",
		"QRgb", // unsigned int
		"double", "float", "qreal":
		return true
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
	MethodName         string
	OverrideMethodName string       // Present only if we changed the target
	ReturnType         CppParameter // Name not used
	Parameters         []CppParameter
	IsStatic           bool
	IsSignal           bool
}

func IsArgcArgv(params []CppParameter) bool {
	// QApplication/QGuiApplication constructors are the only expected example of this.
	return (len(params) > 1 &&
		params[0].ParameterName == "argc" &&
		params[0].ParameterType == "int" &&
		params[0].ByRef &&
		params[1].ParameterName == "argv" &&
		params[1].ParameterType == "char **")
}

func (nm CppMethod) SafeMethodName() string {
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

	tmp := replacer.Replace(nm.MethodName)

	// Also make the first letter uppercase so it becomes public in Go
	tmp = titleCase(tmp)

	// Also replace any underscore_case with CamelCase
	tmp = regexp.MustCompile(`_([a-z])`).ReplaceAllStringFunc(tmp, func(match string) string { return strings.ToUpper(match[1:]) })

	return tmp
}

type CppClass struct {
	ClassName string
	Abstract  bool
	Ctors     []CppMethod // only use the parameters
	Inherits  []string    // other class names
	Methods   []CppMethod
	Props     []CppProperty
}

type CppTypedef struct {
	Alias          string
	UnderlyingType string
}

type CppParsedHeader struct {
	Typedefs []CppTypedef
	Classes  []CppClass
}

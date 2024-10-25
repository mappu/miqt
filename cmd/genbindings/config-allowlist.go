package main

import (
	"path/filepath"
	"strings"
)

func InsertTypedefs(qt6 bool) {

	// Seed well-known typedefs
	pp := "qt"
	if qt6 {
		pp = "qt6"
	}

	// QString is deleted from this binding
	KnownTypedefs["QStringList"] = lookupResultTypedef{pp, CppTypedef{"QStringList", parseSingleTypeString("QList<QString>")}}

	// FIXME this isn't picked up automatically because QFile inherits QFileDevice and the name refers to its parent class
	KnownTypedefs["QFile::FileTime"] = lookupResultTypedef{pp, CppTypedef{"QFile::FileTime", parseSingleTypeString("QFileDevice::FileTime")}}

	if !qt6 {
		// n.b. Qt 5 only
		KnownTypedefs["QLineF::IntersectionType"] = lookupResultTypedef{pp, CppTypedef{"QLineF::IntersectionType", parseSingleTypeString("QLineF::IntersectType")}}
	} else {
		// Must be removed for Qt 6
	}

	// Not sure the reason for this one
	KnownTypedefs["QSocketDescriptor::DescriptorType"] = lookupResultTypedef{pp, CppTypedef{"QSocketDescriptor::DescriptorType", parseSingleTypeString("QSocketNotifier::Type")}}

	// QFile doesn't see QFileDevice parent class enum
	KnownTypedefs["QFile::Permissions"] = lookupResultTypedef{pp, CppTypedef{"QFile::Permissions", parseSingleTypeString("QFileDevice::Permissions")}}
	KnownTypedefs["QFileDevice::Permissions"] = lookupResultTypedef{pp, CppTypedef{"QFile::Permissions", parseSingleTypeString("QFlags<QFileDevice::Permission>")}}
	KnownTypedefs["QIODevice::OpenMode"] = lookupResultTypedef{pp, CppTypedef{"QIODevice::OpenMode", parseSingleTypeString("QIODeviceBase::OpenMode")}}

	if qt6 {
		// Qt 6 QVariant helper types - needs investigation
		KnownTypedefs["QVariantHash"] = lookupResultTypedef{"qt6", CppTypedef{"QVariantHash", parseSingleTypeString("QHash<QString,QVariant>")}}
		KnownTypedefs["QVariantList"] = lookupResultTypedef{"qt6", CppTypedef{"QVariantList", parseSingleTypeString("QList<QVariant>")}}
		KnownTypedefs["QVariantMap"] = lookupResultTypedef{"qt6", CppTypedef{"QVariantMap", parseSingleTypeString("QMap<QString,QVariant>")}}

		// Qt 6 renamed the enum to LibraryPath, but left some uses of LibraryLocation with a typedef
		// We don't find the typedef - needs investigation
		// ONLY add this on Qt 6 builds, breaks Qt 5
		KnownTypedefs["QLibraryInfo::LibraryLocation"] = lookupResultTypedef{"qt6", CppTypedef{"QLibraryInfo::LibraryLocation", parseSingleTypeString("QLibraryInfo::LibraryPath")}}

		// Enums

		// QSysInfo.h is being truncated and not finding any content
		KnownEnums["QSysInfo::Endian"] = lookupResultEnum{"qt6", CppEnum{
			EnumName: "QSysInfo::Endian",
			UnderlyingType: CppParameter{
				ParameterType: "int",
			},
		}}
	}

}

func AllowHeader(fullpath string) bool {
	fname := filepath.Base(fullpath)

	if strings.HasSuffix(fname, `_impl.h`) {
		return false // Not meant to be imported
	}

	fname_lc := strings.ToLower(fname)
	if strings.Contains(fname_lc, `opengl`) || strings.Contains(fname_lc, `vulkan`) {
		return false // Too hard
	}

	switch fname {
	case "qatomic_bootstrap.h",
		"qatomic_cxx11.h",
		"qatomic_msvc.h",
		"qgenericatomic.h",             // Clang error
		"qt_windows.h",                 // Clang error
		"qmaccocoaviewcontainer_mac.h", // Needs NSView* headers. TODO allow with darwin build tag
		"qmacnativewidget_mac.h",       // Needs NSView* headers. TODO allow with darwin build tag
		"qstring.h",                    // QString does not exist in this binding
		"qbytearray.h",                 // QByteArray does not exist in this binding
		"qlist.h",                      // QList does not exist in this binding
		"qvector.h",                    // QVector does not exist in this binding
		"qtcoreexports.h",              // Nothing bindable here and has Q_CORE_EXPORT definition issues
		"q20algorithm.h",               // Qt 6 unstable header
		"q20functional.h",              // Qt 6 unstable header
		"q20iterator.h",                // Qt 6 unstable header
		"q23functional.h",              // Qt 6 unstable header
		"____last____":
		return false
	}

	return true
}

func ImportHeaderForClass(className string) bool {
	if className[0] != 'Q' {
		return false
	}

	// TODO this could be implict by checking if files exist in known header paths

	if strings.HasPrefix(className, "QPlatform") {
		// e.g. QPlatformPixmap, QPlatformWindow, QPlatformScreen
		// These classes don't have a <> version to include
		return false
	}

	if strings.HasPrefix(className, "Qsci") {
		// QScintilla - does not produce imports
		return false
	}

	switch className {
	case "QGraphicsEffectSource", // e.g. qgraphicseffect.h
		"QAbstractConcatenable", // qstringbuilder.h
		"QTextEngine",           // qtextlayout.h
		"QText",                 // e.g. qtextcursor.h
		"QVLABaseBase",          // e.g. Qt 6 qvarlengtharray.h
		"____last____":
		return false
	}

	return true
}

func AllowClass(className string) bool {

	if strings.HasSuffix(className, "Private") {
		return false
	}

	if strings.Contains(className, "QPrivateSignal") {
		return false
	}

	if strings.HasPrefix(className, `std::`) {
		return false // Scintilla bindings find some of these
	}

	switch className {
	case
		"QTextStreamManipulator",     // Only seems to contain garbage methods
		"QException",                 // Extends std::exception, too hard
		"QUnhandledException",        // As above (child class)
		"QItemSelection",             // Extends a QList<>, too hard
		"QXmlStreamAttributes",       // Extends a QList<>, too hard
		"QPolygon",                   // Extends a QVector<QPoint> template class, too hard
		"QPolygonF",                  // Extends a QVector<QPoint> template class, too hard
		"QAssociativeIterator",       // Qt 6. Extends a QIterator<>, too hard
		"QAssociativeConstIterator",  // Qt 6. Extends a QIterator<>, too hard
		"QAssociativeIterable",       // Qt 6. Extends a QIterator<>, too hard
		"QSequentialIterator",        // Qt 6. Extends a QIterator<>, too hard
		"QSequentialConstIterator",   // Qt 6. Extends a QIterator<>, too hard
		"QSequentialIterable",        // Qt 6. Extends a QIterator<>, too hard
		"QBrushDataPointerDeleter",   // Qt 6 qbrush.h. Appears in header but cannot be linked
		"QPropertyBindingPrivatePtr", // Qt 6 qpropertyprivate.h. Appears in header but cannot be linked
		"____last____":
		return false
	}

	return true
}

func AllowSignal(mm CppMethod) bool {
	if mm.ReturnType.ParameterType != "void" {
		// This affects how we cast the signal function pointer for connect
		// It would be fixable, but, real signals always have void return types anyway
		return false
	}

	switch mm.MethodName {
	case `metaObject`, `qt_metacast`,
		`clone`: // Qt 6 - qcoreevent.h
		return false
	default:
		return true
	}
}

func AllowMethod(className string, mm CppMethod) error {

	for _, p := range mm.Parameters {
		if strings.HasSuffix(p.ParameterType, "Private") {
			return ErrTooComplex // Skip private type
		}
	}
	if strings.HasSuffix(mm.ReturnType.ParameterType, "Private") {
		return ErrTooComplex // Skip private type
	}

	if mm.IsReceiverMethod() {
		// Non-projectable receiver pattern parameters
		return ErrTooComplex
	}

	return nil // OK, allow
}

// AllowType controls whether to permit binding of a method, if a method uses
// this type in its parameter list or return type.
// Any type not permitted by AllowClass is also not permitted by this method.
func AllowType(p CppParameter, isReturnType bool) error {

	if p.QMapOf() {
		return ErrTooComplex // Example???
	}
	if p.QPairOf() {
		return ErrTooComplex // e.g. QGradientStop
	}
	if t, ok := p.QSetOf(); ok {
		if err := AllowType(t, isReturnType); err != nil {
			return err
		}
	}
	if t, ok := p.QListOf(); ok {
		if err := AllowType(t, isReturnType); err != nil { // e.g. QGradientStops is a QVector<> (OK) of QGradientStop (not OK)
			return err
		}

		// qsciscintilla.h QsciScintilla_Annotate4: no copy ctor for private type QsciStyledText
		// Works fine normally, but not in a list
		if t.ParameterType == "QsciStyledText" {
			return ErrTooComplex
		}
	}
	if !AllowClass(p.ParameterType) {
		return ErrTooComplex // This whole class type has been blocked, not only as a parameter/return type
	}

	if strings.Contains(p.ParameterType, "(*)") { // Function pointer.
		return ErrTooComplex // e.g. QAccessible_InstallFactory
	}
	if strings.HasPrefix(p.ParameterType, "StringResult<") {
		return ErrTooComplex // e.g. qcborstreamreader.h
	}
	if strings.HasPrefix(p.ParameterType, "QScopedPointer<") {
		return ErrTooComplex // e.g. qbrush.h
	}
	if strings.HasPrefix(p.ParameterType, "QExplicitlySharedDataPointer<") {
		return ErrTooComplex // e.g. qpicture.h
	}
	if strings.HasPrefix(p.ParameterType, "QSharedDataPointer<") {
		return ErrTooComplex // e.g. qurlquery.h
	}
	if strings.HasPrefix(p.ParameterType, "QTypedArrayData<") {
		return ErrTooComplex // e.g. qbitarray.h
	}
	if strings.HasPrefix(p.ParameterType, "QGenericMatrix<") {
		return ErrTooComplex // e.g. qmatrix4x4.h
	}
	if strings.HasPrefix(p.ParameterType, "QUrlTwoFlags<") {
		return ErrTooComplex // e.g. qurl.h
	}
	if strings.HasPrefix(p.ParameterType, "FillResult<") {
		return ErrTooComplex // Scintilla
	}
	if strings.HasPrefix(p.ParameterType, "QBindable<") {
		return ErrTooComplex // e.g. Qt 6 qabstractanimation.h
	}
	if strings.HasPrefix(p.ParameterType, "QRgbaFloat<") {
		return ErrTooComplex // e.g. Qt 6 qcolortransform.h
	}
	if strings.HasPrefix(p.ParameterType, "QPointer<") {
		return ErrTooComplex // e.g. Qt 6 qevent.h . It should be possible to support this
	}
	if strings.HasPrefix(p.ParameterType, "EncodedData<") {
		return ErrTooComplex // e.g. Qt 6 qstringconverter.h
	}

	if strings.HasPrefix(p.ParameterType, "std::") {
		// std::initializer           e.g. qcborarray.h
		// std::string                QByteArray->toStdString(). There are QString overloads already
		// std::nullptr_t             Qcborstreamwriter
		// std::chrono::nanoseconds   QDeadlineTimer_RemainingTimeAsDuration
		// std::seed_seq              QRandom
		// std::exception             Scintilla
		return ErrTooComplex
	}
	if strings.Contains(p.ParameterType, `Iterator::value_type`) {
		return ErrTooComplex // e.g. qcbormap
	}
	if strings.Contains(p.ParameterType, `::QPrivate`) {
		return ErrTooComplex // e.g. QAbstractItemModel::QPrivateSignal
	}
	if strings.Contains(p.GetQtCppType().ParameterType, `::DataPtr`) {
		return ErrTooComplex // e.g. QImage::data_ptr()
	}
	if strings.Contains(p.ParameterType, `::DataPointer`) {
		return ErrTooComplex // Qt 6 qbytearray.h. This could probably be made to work
	}
	if strings.HasPrefix(p.ParameterType, `QArrayDataPointer<`) {
		return ErrTooComplex // Qt 6 qbytearray.h. This could probably be made to work
	}

	// Some QFoo constructors take a QFooPrivate
	// QIcon also returns a QIconPrivate
	if p.ParameterType[0] == 'Q' && strings.HasSuffix(p.ParameterType, "Private") {
		return ErrTooComplex
	}
	if strings.HasPrefix(p.ParameterType, "QtPrivate::") {
		return ErrTooComplex // e.g. Qt 6 qbindingstorage.h
	}

	// If any parameters are QString*, skip the method
	// QDebug constructor
	// QXmlStreamWriter constructor
	// QFile::moveToTrash
	// QLockFile::getLockInfo
	// QTextDecoder::toUnicode
	// QTextStream::readLineInto
	// QFileDialog::getOpenFileName selectedFilter* param
	if p.ParameterType == "QString" && p.Pointer && !isReturnType { // Out-parameters
		return ErrTooComplex
	}

	// QBuffer can accept a raw pointer to an internal QByteArray, but that
	// doesn't work when QByteArray is deleted
	// QDataStream
	if p.ParameterType == "QByteArray" && p.Pointer && !isReturnType {
		return ErrTooComplex
	}

	if p.ParameterType == "QFormLayout::ItemRole" && p.Pointer && !isReturnType { // Out-parameters in QFormLayout
		return ErrTooComplex
	}

	if p.Pointer && p.PointerCount >= 2 { // Out-parameters
		if p.ParameterType != "char" {
			return ErrTooComplex // e.g. QGraphicsItem_IsBlockedByModalPanel1
		}
		if p.ParameterType == "char" && p.ParameterName == "xpm" {
			// Array parameters:
			// - QPixmap and QImage ctors from an xpm char*[]
			// TODO support these
			return ErrTooComplex
		}
	}

	switch p.ParameterType {
	case
		"QList<QVariant>",       // e.g. QVariant constructor - this has a deleted copy-constructor so we can't get it over the CABI boundary by value
		"QPolygon", "QPolygonF", // QPolygon extends a template type
		"QGenericMatrix", "QMatrix3x3", // extends a template type
		"QLatin1String", "QStringView", // e.g. QColor constructors and QColor::SetNamedColor() overloads. These are usually optional alternatives to QString
		"QLatin1StringView",               // Qt 6 - used in qanystringview
		"QUtf8StringView",                 // Qt 6 - used in qdebug
		"QStringRef",                      // e.g. QLocale::toLongLong and similar overloads. As above
		"qfloat16",                        // e.g. QDataStream - there is no such half-float type in C or Go
		"char16_t",                        // e.g. QChar() constructor overload, just unnecessary
		"char32_t",                        // e.g. QDebug().operator<< overload, unnecessary
		"wchar_t",                         // e.g. qstringview.h overloads, unnecessary
		"FILE",                            // e.g. qfile.h constructors
		"qInternalCallback",               // e.g. qnamespace.h
		"QGraphicsEffectSource",           // e.g. used by qgraphicseffect.h, but the definition is in ????
		"QXmlStreamEntityDeclarations",    // e.g. qxmlstream.h. The class definition was blacklisted for ???? reason so don't allow it as a parameter either
		"QXmlStreamNamespaceDeclarations", // e.g. qxmlstream.h. As above
		"QXmlStreamNotationDeclarations",  // e.g. qxmlstream.h. As above
		"QXmlStreamAttributes",            // e.g. qxmlstream.h
		"LineLayout::ValidLevel",          // ..
		"QtMsgType",                       // e.g. qdebug.h TODO Defined in qlogging.h, but omitted because it's predefined in qglobal.h, and our clangexec is too agressive
		"QTextStreamFunction",             // e.g. qdebug.h
		"QFactoryInterface",               // qfactoryinterface.h
		"QTextEngine",                     // used by qtextlayout.h, also blocked in ImportHeaderForClass above
		"QVulkanInstance",                 // e.g. qwindow.h. Not tackling vulkan yet
		"QPlatformNativeInterface",        // e.g. QGuiApplication::platformNativeInterface(). Private type, could probably expose as uintptr. n.b. Changes in Qt6
		"QPlatformBackingStore",           // e.g. qbackingstore.h, as below
		"QPlatformMenuBar",                // e.g. qfutureinterface.h, as below
		"QPlatformOffscreenSurface",       // e.g. qoffscreensurface.h, as below
		"QPlatformPixmap",                 // e.g. qpixmap.h. as below
		"QPlatformScreen",                 // e.g. qscreen.h. as below
		"QPlatformWindow",                 // e.g. qwindow.h, as below
		"QPlatformSurface",                // e.g. qsurface.h. as below
		"QPlatformMenu",                   // e.g. QMenu_PlatformMenu. Defined in the QPA, could probably expose as uintptr
		"struct _XDisplay",                // Qt 6 QGuiApplication_platform
		"xcb_connection_t",                // Qt 6 QGuiApplication_platform
		"QTextDocument::ResourceProvider", // Qt 6 typedef for unsupported std::function<QVariant(const QUrl&)>
		"QTransform::Affine",              // Qt 6 qtransform.h - public method returning private type
		"____last____":
		return ErrTooComplex
	}

	// Should be OK
	return nil
}

// LinuxWindowsCompatCheck checks if the parameter is incompatible between the
// generated headers (generated on Linux) with other OSes such as Windows.
// These methods will be blocked on non-Linux OSes.
func LinuxWindowsCompatCheck(p CppParameter) bool {
	if p.GetQtCppType().ParameterType == "Q_PID" {
		return true // int64 on Linux, _PROCESS_INFORMATION* on Windows
	}

	if p.GetQtCppType().ParameterType == "QSocketDescriptor::DescriptorType" {
		return true // uintptr_t-compatible on Linux, void* on Windows
	}
	return false
}

func ApplyQuirks(className string, mm *CppMethod) {
	if className == "QArrayData" && mm.MethodName == "needsDetach" && mm.IsConst {
		mm.BecomesNonConstInVersion = addr("6.7")
	}
}

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

	// Qt 5 WebKit - use of an empty enum (should be possible to support?)
	KnownEnums["QWebPluginFactory::Extension"] = lookupResultEnum{"qt/webkit", CppEnum{
		EnumName: "QWebPluginFactory::Extension",
		UnderlyingType: CppParameter{
			ParameterType: "int",
		},
	}}

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
	}

}

func Widgets_AllowHeader(fullpath string) bool {
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
		"qhash.h",                      // QHash does not exist in this binding
		"qmap.h",                       // QMap does not exist in this binding
		"qtcoreexports.h",              // Nothing bindable here and has Q_CORE_EXPORT definition issues
		"q20algorithm.h",               // Qt 6 unstable header
		"q20functional.h",              // Qt 6 unstable header
		"q20iterator.h",                // Qt 6 unstable header
		"q23functional.h",              // Qt 6 unstable header
		"qguiapplication_platform.h",   // Qt 6 - can be built for X11 but then platform-specific code fails to build on Windows
		"qlogging.h",                   // TODO varargs
		"qstringlist.h",                // handled separately
		"____last____":
		return false
	}

	return true
}

type AllowedPlatformInfo interface {
	GoBuildTag() string
	CxxIf() string
}

type AndroidBlockedPlatform struct{}

func (abp AndroidBlockedPlatform) GoBuildTag() string {
	return `!android`
}

func (abp AndroidBlockedPlatform) CxxIf() string {
	return `! defined(Q_OS_ANDROID)`
}

func HeaderPlatformRestriction(fullpath string) AllowedPlatformInfo {
	fname := filepath.Base(fullpath)

	if fname == `qsharedmemory.h` {
		// Not implemented on Android nor iOS
		// Qt 5: Classes are present but do not work
		// Qt 6: Class definition is not present and our generated subclass fails to compile
		return AndroidBlockedPlatform{}
	}

	// No platform restriction
	return nil
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
		"QAdoptSharedDataTag",   // Qt 6 qshareddata.h
		"QJSPrimitiveNull",      // Qt 6 qjsprimitivevalue - present in Qt 6.4, not in 6.8
		"QJSPrimitiveUndefined", // Qt 6 qjsprimitivevalue - present in Qt 6.4, not in 6.8
		"____last____":
		return false
	}

	return true
}

func AllowClass(className string) bool {

	if strings.HasSuffix(className, "Private") || strings.HasSuffix(className, "PrivateShared") ||
		strings.Contains(className, "Private::") || strings.HasSuffix(className, "PrivateShared::") {
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
		"QTextStreamManipulator", // Only seems to contain garbage methods
		"QException",             // Extends std::exception, too hard
		"QUnhandledException",    // As above (child class)
		// "QItemSelection",             // Extends a QList<>, too hard
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
		"QDeferredDeleteEvent",       // Qt 6. Hidden/undocumented class in Qt 6.4, moved to private header in Qt 6.7. Intended for test use only
		"QQmlV4Function",             // Qt 6. Not part of the interface
		"QWebEngineQuotaRequest",     // Qt 6 QWebEngine: Deprecated in Qt 6.9

		"QUntypedPropertyData::InheritsQUntypedPropertyData", // qpropertyprivate.h . Hidden/undocumented class in Qt 6.4, removed in 6.7
		"QFlag",             // Converted to int
		"QIncompatibleFlag", // Converted to int
		"QAtomicInt",        // Unsupported base type
		"____last____":
		return false
	}

	return true
}

func AllowSignal(mm CppMethod) bool {
	if !mm.ReturnType.Void() {
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

func AllowInheritedParent(className string) bool {
	// QItemSelection extends a QList<>, but we omit that from the inheritance hierarchy
	if strings.HasPrefix(className, `QList<`) {
		return false
	}

	return true
}

func AllowVirtual(mm CppMethod) bool {

	if mm.MethodName == "metaObject" || mm.MethodName == "qt_metacast" {
		return false
	}

	return true // AllowSignal(mm)
}

func AllowVirtualForClass(className string) bool {

	// Allowing the subclassing of QAccessibleWidget compiles fine,
	// but, always gives a linker error:
	//
	//   /usr/lib/go-1.19/pkg/tool/linux_amd64/link: running g++ failed: exit status 1
	//   /usr/bin/ld: /tmp/go-link-1745036494/000362.o: in function `MiqtVirtualQAccessibleWidget::MiqtVirtualQAccessibleWidget(QWidget*)':
	//   undefined reference to `vtable for MiqtVirtualQAccessibleWidget'
	//
	// An undefined vtable usually indicates that the virtual class is missing
	// definitions for some virtual methods, but AFAICT we have complete coverage.
	if className == "QAccessibleWidget" {
		return false
	}

	// Pure virtual method futureInterface() returns an unprojectable template type
	if className == "QFutureWatcherBase" {
		return false
	}

	// Pure virtual dtor (should be possible to support)
	if className == "QObjectData" {
		return false
	}

	if className == "QAccessibleObject" {
		return false // undefined reference to `vtable for MiqtVirtualQAccessibleObject'
	}

	// Pure virtual method registerEventNotifier takes a QWinEventNotifier* on Windows
	// which is platform-specific
	if className == "QAbstractEventDispatcher" {
		return false
	}

	// QScintilla
	// Pure virtuals
	if className == "Scintilla::Internal::Surface" {
		return false
	}
	if className == "Scintilla::Internal::ListBox" {
		return false
	}

	// Qt 5 QMultimedia (needs investigation)
	if className == "QAbstractPlanarVideoBuffer" {
		return false
	}

	// Qt 5 QWebkit: undefined reference to typeinfo
	if className == "QWebNotificationPresenter" {
		return false
	}
	if className == "QWebHapticFeedbackPlayer" {
		return false
	}

	if className == "QSqlResult" {
		return false
	}

	return true
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

	if strings.Contains(mm.MethodName, `QGADGET`) {
		return ErrTooComplex // Skipping method with weird QGADGET behaviour
	}

	if mm.IsReceiverMethod() {
		// Non-projectable receiver pattern parameters
		return ErrTooComplex
	}

	if className == "QBitArray" && mm.MethodName == "operator~" {
		return ErrForwardIncompatible // Present in Qt 5.15 and 6.4, missing in Qt 6.7
	}

	if className == "QTimeZone" && (mm.MethodName == "operator==" || mm.MethodName == "operator!=") {
		return ErrForwardIncompatible // Present in Qt 5.15 and 6.4, missing in Qt 6.7
	}

	if className == "QWaveDecoder" && mm.MethodName == "setIODevice" {
		return ErrTooComplex // Qt 6: Present in header, but no-op method was not included in compiled library
	}

	if className == "QDeadlineTimer" && mm.MethodName == "_q_data" {
		// Qt 6.4: Present in header with "not a public method" comment, not present in Qt 6.6
		// @ref https://github.com/qt/qtbase/blob/v6.4.0/src/corelib/kernel/qdeadlinetimer.h#L156C29-L156C36
		return ErrForwardIncompatible
	}

	if className == "QXmlStreamEntityResolver" && mm.MethodName == "operator=" {
		// Present in Qt 6.7, but marked as =delete by Q_DISABLE_COPY_MOVE in Qt 6.8
		return ErrForwardIncompatible
	}

	if className == "QStringConverterBase" && mm.MethodName == "operator=" {
		// Becomes move-only in Qt 6.8
		// @ref https://github.com/qt/qtbase/commit/eb533c81b8aa55f89605bb1d091afe4df4db763c
		return ErrForwardIncompatible
	}

	if className == "qfloat16" && mm.MethodName == "operator float" {
		// Present in Qt 5 and Qt 6.4, but in 6.5++ the declaration is conditional on QFLOAT16_IS_NATIVE
		// In that case it becomes `operator std::float16_t` or `operator _Float16` depending on your
		// compiler
		// A proper fix here would be to reproject qfloat16 as std::float16_t (?) in all cases
		return ErrTooComplex
	}

	if className == "QHashSeed" && mm.MethodName == "operator unsigned long" {
		// Not present in Qt 5, is present in Qt 6.4 and 6.8, but in the C++
		// header file it is written as `operator size_t()`
		// Clang is early-converting size_t to unsigned long, which is invalid for mingw-w64-x86_64 platforms
		// A proper fix here would be to avoid evaluating typedefs
		return ErrTooComplex
	}

	if className == "QQmlNetworkAccessManagerFactory" && mm.MethodName == "create" {
		// Prevent Qml dependency on Network for now
		return ErrTooComplex
	}

	if className == "QQmlEngine" && mm.MethodName == "networkAccessManager" {
		// Prevent Qml dependency on Network for now
		return ErrTooComplex
	}

	if className == "QJSEngine" && mm.MethodName == "handle" {
		return ErrTooComplex // Not part of the interface
	}

	if mm.MethodName == "qmlAttachedProperties" && mm.IsStatic {
		return ErrTooComplex // Callbacks that the attached object types must provide to QML
	}

	// Skip functions that return ints-by-reference since the ergonomics don't
	// go through the binding
	if mm.ReturnType.IntType() && mm.ReturnType.ByRef {
		return ErrTooComplex // e.g. QSize::rheight()
	}

	return nil // OK, allow
}

func AllowCtor(className string, mm CppMethod) bool {

	if className == `QStringConverterBase` {
		// Both the main ctor and the copy constructor were changed from public to protected between 6.8.1 and 6.8.2
		// @ref https://github.com/qt/qtbase/commit/41679e0b4398c0de38a8107642dc643fe2c3554f
		// @ref https://github.com/mappu/miqt/issues/168
		// Block both ctors from generation
		return false
	}

	// Default allow
	return true
}

// AllowType controls whether to permit binding of a method, if a method uses
// this type in its parameter list or return type.
// Any type not permitted by AllowClass is also not permitted by this method.
func AllowType(p CppParameter, isReturnType bool) error {

	if t, ok := p.QSetOf(); ok {
		if err := AllowType(t, isReturnType); err != nil {
			return err
		}
	}
	if t, _, ok := p.QListOf(); ok {
		if err := AllowType(t, isReturnType); err != nil { // e.g. QGradientStops is a QVector<> (OK) of QGradientStop (not OK)
			return err
		}

		// qsciscintilla.h QsciScintilla_Annotate4: no copy ctor for private type QsciStyledText
		// Works fine normally, but not in a list
		if t.ParameterType == "QsciStyledText" {
			return ErrTooComplex
		}
	}
	if kType, vType, _, ok := p.QMapOf(); ok {
		if err := AllowType(kType, isReturnType); err != nil {
			return err
		}
		if err := AllowType(vType, isReturnType); err != nil {
			return err
		}
		// Additionally, Go maps do not support []byte keys
		// This affects qnetwork qsslconfiguration BackendConfiguration
		if kType.ParameterType == "QByteArray" {
			return ErrTooComplex
		}
	}
	if kType, vType, ok := p.QPairOf(); ok {
		if err := AllowType(kType, isReturnType); err != nil {
			return err
		}
		if err := AllowType(vType, isReturnType); err != nil {
			return err
		}
	}
	if p.QMultiMapOf() {
		return ErrTooComplex // e.g. Qt5 QNetwork qsslcertificate.h has a QMultiMap<QSsl::AlternativeNameEntryType, QString>
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
	if strings.HasPrefix(p.ParameterType, "QQmlListProperty<") {
		return ErrTooComplex // e.g. Qt 5 QWebChannel qmlwebchannel.h . Supporting this will be required for QML in future
	}
	if strings.HasPrefix(p.ParameterType, "QWebEngineCallback<") {
		return ErrTooComplex // Function pointer types in QtWebEngine
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
	if strings.Contains(p.ParameterType, `>::iterator`) ||
		strings.Contains(p.ParameterType, `>::const_iterator`) {
		// qresultstore.h tries to create a
		// NewQtPrivate__ResultIteratorBase2(_mapIterator QMap<int, ResultItem>__const_iterator)
		return ErrTooComplex
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
		"sockaddr",                        // Qt network Qhostaddress. Should be possible to make this work but may be platform-specific
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
		"QPlatformMediaCaptureSession",    // Qt 6 Multimedia qmediacapturesession.h
		"QPlatformMediaRecorder",          // Qt 6 Multimedia qmediarecorder.h
		"QPlatformVideoSink",              // Qt 6 Multimedia qvideosink.h
		"QTextDocument::ResourceProvider", // Qt 6 typedef for unsupported std::function<QVariant(const QUrl&)>
		"QTransform::Affine",              // Qt 6 qtransform.h - public method returning private type
		"QAbstractAudioBuffer",            // Qt 5 Multimedia, this is a private/internal type only
		"QAbstractVideoBuffer",            // Works in Qt 5, but in Qt 6 Multimedia this type is used in qvideoframe.h but is not defined anywhere (it was later added in Qt 6.8)
		"QRhi",                            // Qt 6 unstable types, used in Multimedia
		"QPostEventList",                  // Qt QCoreApplication: private headers required
		"QMetaCallEvent",                  // ..
		"QPostEvent",                      // ..
		"QWebFrameAdapter",                // Qt 5 Webkit: Used by e.g. qwebframe.h but never defined anywhere
		"QWebPageAdapter",                 // ...
		"QQmlWebChannelAttached",          // Qt 5 qqmlwebchannel.h. Need to add QML support for this to work
		"____last____":
		return ErrTooComplex
	}

	// Should be OK
	return nil
}

// ApplyQuirks adds flags to methods that require special handling.
// This is evaluated early, before optional arguments are expanded.
func ApplyQuirks(packageName, className string, mm *CppMethod) {

	if mm.ReturnType.GetQtCppType().ParameterType == "Q_PID" {
		// int64 on Linux, _PROCESS_INFORMATION* on Windows
		mm.RequireCpp = addr("defined(Q_OS_LINUX)")
		mm.RequireGOOS = addr("linux")
	}

	if mm.ReturnType.GetQtCppType().ParameterType == "QSocketDescriptor::DescriptorType" ||
		(len(mm.Parameters) > 0 && mm.Parameters[0].GetQtCppType().ParameterType == "QSocketDescriptor::DescriptorType") {
		// uintptr_t-compatible on Linux, void* on Windows
		mm.RequireCpp = addr("defined(Q_OS_LINUX)")
		mm.RequireGOOS = addr("linux")
	}

	if className == "QArrayData" && mm.MethodName == "needsDetach" && mm.IsConst {
		mm.BecomesNonConstInVersion = addr("6.7")
	}

	if packageName == "qt6" && className == "QObjectData" && mm.MethodName == "dynamicMetaObject" {
		mm.ReturnType.BecomesConstInVersion = addr("6.9")
	}

	// macOS Brew does not have Qt6Network dtls functionality enabled, but we
	// want these functions to exist on other platforms
	// Can't block in Go-side
	if (packageName == "qt6/network" || packageName == "qt/network") &&
		className == "QSslConfiguration" &&
		(mm.MethodName == "dtlsCookieVerificationEnabled" || mm.MethodName == "setDtlsCookieVerificationEnabled" || mm.MethodName == "defaultDtlsConfiguration" || mm.MethodName == "setDefaultDtlsConfiguration") {
		mm.RequireCpp = addr("QT_CONFIG(dtls)")
	}

	if className == "QFileDialog" && mm.MethodName == "saveFileContent" && mm.IsStatic && len(mm.Parameters) > 1 {
		// The prototype was changed from
		// [Qt 5 - 6.6] void QFileDialog::saveFileContent(const QByteArray &fileContent, const QString &fileNameHint = QString())
		// [Qt 6.7]     void QFileDialog::saveFileContent(const QByteArray &fileContent, const QString &fileNameHint, QWidget *parent = nullptr)
		// The 2nd parameter is no longer optional
		// As a compromise, make it non-optional everywhere
		mm.Parameters[1].Optional = false
	}
}

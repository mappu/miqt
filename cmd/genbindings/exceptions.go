package main

import (
	"path/filepath"
	"strings"
)

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
		"qlist.h",                      // QList does not exist in this binding
		"qvector.h":                    // QVector does not exist in this binding
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

	switch className {
	case "QGraphicsEffectSource", // e.g. qgraphicseffect.h
		"QAbstractConcatenable", // qstringbuilder.h
		"QTextEngine",           // qtextlayout.h
		"QText":                 // e.g. qtextcursor.h
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

	switch className {
	case
		"QTextStreamManipulator", // Only seems to contain garbage methods
		"QException",             // Extends std::exception, too hard
		"QUnhandledException",    // As above (child class)
		"QItemSelection",         // Extends a QList<>, too hard
		"QXmlStreamAttributes",   // Extends a QList<>, too hard
		"QPolygon", "QPolygonF":  // Extends a QVector<QPoint> template class, too hard
		return false
	}

	return true
}

func CheckComplexity(p CppParameter, isReturnType bool) error {

	if p.QMapOf() {
		return ErrTooComplex // Example???
	}
	if p.QPairOf() {
		return ErrTooComplex // e.g. QGradientStop
	}
	if p.QSetOf() {
		return ErrTooComplex // e.g. QStateMachine
	}
	if t, ok := p.QListOf(); ok {
		if err := CheckComplexity(t, isReturnType); err != nil { // e.g. QGradientStops is a QVector<> (OK) of QGradientStop (not OK)
			return err
		}
	}

	if strings.Contains(p.ParameterType, "(*)") { // Function pointer.
		return ErrTooComplex // e.g. QAccessible_InstallFactory
	}
	if strings.HasPrefix(p.ParameterType, "StringResult<") {
		return ErrTooComplex // e.g. qcborstreamreader.h
	}
	if strings.HasPrefix(p.ParameterType, "QGenericMatrix<") {
		return ErrTooComplex // e.g. qmatrix4x4.h
	}
	if strings.HasPrefix(p.ParameterType, "QUrlTwoFlags<") {
		return ErrTooComplex // e.g. qurl.h
	}
	if strings.HasPrefix(p.ParameterType, "std::") {
		// std::initializer           e.g. qcborarray.h
		// std::string                QByteArray->toStdString(). There are QString overloads already
		// std::nullptr_t             Qcborstreamwriter
		// std::chrono::nanoseconds   QDeadlineTimer_RemainingTimeAsDuration
		// std::seed_seq              QRandom
		return ErrTooComplex
	}
	if strings.Contains(p.ParameterType, `::reverse_iterator`) || strings.Contains(p.ParameterType, `::const_reverse_iterator`) {
		return ErrTooComplex // e.g. qbytearray.h
	}
	if strings.Contains(p.ParameterType, `Iterator::value_type`) {
		return ErrTooComplex // e.g. qcbormap
	}
	if strings.Contains(p.ParameterType, `::QPrivate`) {
		return ErrTooComplex // e.g. QAbstractItemModel::QPrivateSignal
	}

	// Some QFoo constructors take a QFooPrivate
	if p.ParameterType[0] == 'Q' && strings.HasSuffix(p.ParameterType, "Private") && !isReturnType {
		return ErrTooComplex
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

	if p.IsFlagType() && p.Pointer && !isReturnType {
		return ErrTooComplex // e.g. qformlayout. The cast doesn't survive through a pointer parameter
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
		"QStringRef",                      // e.g. QLocale::toLongLong and similar overloads. As above
		"QGradientStop", "QGradientStops", // QPair<>-related types, but we can't see through the typedef to block based on QPair alone
		"void **",                         // e.g. qobjectdefs.h QMetaObject->Activate()
		"QGraphicsItem **",                // e.g. QGraphicsItem::IsBlockedByModalPanel() overload
		"char *&",                         // e.g. QDataStream.operator<<()
		"qfloat16",                        // e.g. QDataStream - there is no such half-float type in C or Go
		"char16_t",                        // e.g. QChar() constructor overload, just unnecessary
		"char32_t",                        // e.g. QDebug().operator<< overload, unnecessary
		"wchar_t",                         // e.g. qstringview.h overloads, unnecessary
		"QStringView::const_pointer",      // e.g. qstringview.h data()
		"QStringView::const_iterator",     // e.g. qstringview.h
		"QStringView::value_type",         // e.g. qstringview.h
		"FILE",                            // e.g. qfile.h constructors
		"qInternalCallback",               // e.g. qnamespace.h
		"picture_io_handler",              // e.g. QPictureIO::DefineIOHandler callback function
		"QPlatformNativeInterface",        // e.g. QGuiApplication::platformNativeInterface(). Private type, could probably expose as uintptr. n.b. Changes in Qt6
		"QFunctionPointer",                // e.g. QGuiApplication_PlatformFunction
		"QGraphicsEffectSource",           // e.g. used by qgraphicseffect.h, but the definition is in ????
		"QAbstractUndoItem",               // e.g. Defined in qtextdocument.h
		"QTextObjectInterface",            // e.g. qabstracttextdocumentlayout.h
		"QUrl::FormattingOptions",         // e.g. QUrl.h. Typedef for a complex template type
		"QXmlStreamEntityDeclarations",    // e.g. qxmlstream.h. The class definition was blacklisted for ???? reason so don't allow it as a parameter either
		"QXmlStreamNamespaceDeclarations", // e.g. qxmlstream.h. As above
		"QXmlStreamNotationDeclarations",  // e.g. qxmlstream.h. As above
		"QXmlStreamAttributes",            // e.g. qxmlstream.h
		"QVariantMap",                     // e.g. qcbormap.h
		"QVariantHash",                    // e.g. qcbormap.h
		"QtMsgType",                       // e.g. qdebug.h TODO Needs support for enums
		"QTextStreamFunction",             // e.g. qdebug.h
		"QFactoryInterface",               // qfactoryinterface.h
		"QItemSelection",                  // used by qabstractproxymodel.h, also blocked in AllowClass above, class extends a List<T>
		"QTextStreamManipulator",          // used by qdebug.h, also blocked in AllowClass above
		"QException",                      // used by qfutureinterface.h, also blocked in AllowClass above
		"QTextEngine",                     // used by qtextlayout.h, also blocked in ImportHeaderForClass above
		"QVulkanInstance",                 // e.g. qwindow.h. Not tackling vulkan yet
		"QPlatformBackingStore",           // e.g. qbackingstore.h, as below
		"QPlatformMenuBar",                // e.g. qfutureinterface.h, as below
		"QPlatformOffscreenSurface",       // e.g. qoffscreensurface.h, as below
		"QPlatformPixmap",                 // e.g. qpixmap.h. as below
		"QPlatformScreen",                 // e.g. qscreen.h. as below
		"QPlatformWindow",                 // e.g. qwindow.h, as below
		"QPlatformSurface",                // e.g. qsurface.h. as below
		"QPlatformMenu":                   // e.g. QMenu_PlatformMenu. Defined in the QPA, could probably expose as uintptr
		return ErrTooComplex
	}

	if p.ParameterType == "void" && p.Pointer {
		return ErrTooComplex // e.g. qobjectdefs.h QMetaObject->InvokeOnGadget(). TODO represent as uintptr
	}

	// Should be OK
	return nil
}

// LinuxWindowsCompatCheck checks if the parameter is incompatible between the
// generated headers (generated on Linux) with other OSes such as Windows.
// These methods will be blocked on non-Linux OSes.
func LinuxWindowsCompatCheck(p CppParameter) bool {
	if p.TypeAlias == "Q_PID" {
		return true // int64 on Linux, _PROCESS_INFORMATION* on Windows
	}

	if p.ParameterType == "QSocketDescriptor::DescriptorType" {
		return true // uintptr_t-compatible on Linux, void* on Windows
	}
	return false
}

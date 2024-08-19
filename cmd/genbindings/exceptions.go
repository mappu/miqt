package main

import (
	"strings"
)

func AllowHeader(fullpath string) bool {
	return true
}

func AllowDelete(c CppClass) bool {
	switch c.ClassName {
	case "QClipboard",
		"QSessionManager",
		"QTextObject",
		"QTextBlockGroup",
		"QInputMethod":
		return false // The destructor is marked private. TODO grab this from the AST
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
		"QText": // e.g. qtextcursor.h
		return false
	}

	return true
}

func AllowClass(className string) bool {
	if className[0] != 'Q' {
		return false
	}

	if strings.HasSuffix(className, "Private") {
		return false
	}

	switch className {
	case
		"QException",            // Extends std::exception, too hard
		"QItemSelection",        // Extends a QList<>, too hard
		"QXmlStreamAttributes",  // Extends a QList<>, too hard
		"QPolygon", "QPolygonF": // Extends a QVector<QPoint> template class, too hard
		return false
	}

	return true
}

func CheckComplexity(p CppParameter) error {

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
		if err := CheckComplexity(t); err != nil { // e.g. QGradientStops is a QVector<> (OK) of QGradientStop (not OK)
			return err
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
		"void **",                  // e.g. qobjectdefs.h QMetaObject->Activate()
		"QGraphicsItem **",         // e.g. QGraphicsItem::IsBlockedByModalPanel() overload
		"char *&",                  // e.g. QDataStream.operator<<()
		"qfloat16",                 // e.g. QDataStream - there is no such half-float type in C or Go
		"char16_t",                 // e.g. QChar() constructor overload, just unnecessary
		"char32_t",                 // e.g. QDebug().operator<< overload, unnecessary
		"picture_io_handler",       // e.g. QPictureIO::DefineIOHandler callback function
		"QPlatformNativeInterface", // e.g. QGuiApplication::platformNativeInterface(). Private type, could probably expose as uintptr. n.b. Changes in Qt6
		"QFunctionPointer",         // e.g. QGuiApplication_PlatformFunction
		"QGraphicsEffectSource",    // e.g. used by qgraphicseffect.h, but the definition is in ????
		"QAbstractUndoItem",        // e.g. Defined in qtextdocument.h
		"QTextObjectInterface",     // e.g. qabstracttextdocumentlayout.h
		"QPlatformPixmap",          // e.g. qpixmap.h. as below
		"QPlatformScreen",          // e.g. qscreen.h. as below
		"QPlatformSurface",         // e.g. qsurface.h. as below
		"QPlatformMenu":            // e.g. QMenu_PlatformMenu. Defined in the QPA, could probably expose as uintptr
		return ErrTooComplex
	}

	if p.ParameterType == "void" && p.Pointer {
		return ErrTooComplex // e.g. qobjectdefs.h QMetaObject->InvokeOnGadget(). TODO represent as uintptr
	}

	// Should be OK
	return nil
}

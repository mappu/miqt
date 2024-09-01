package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qapplication.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QApplication struct {
	h *C.QApplication
	*QGuiApplication
}

func (this *QApplication) cPointer() *C.QApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func newQApplication(h *C.QApplication) *QApplication {
	if h == nil {
		return nil
	}
	return &QApplication{h: h, QGuiApplication: newQGuiApplication_U(unsafe.Pointer(h))}
}

func newQApplication_U(h unsafe.Pointer) *QApplication {
	return newQApplication((*C.QApplication)(h))
}

// NewQApplication constructs a new QApplication object.
func NewQApplication(args []string) *QApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}
	ret := C.QApplication_new(argc, &argv[0])
	return newQApplication(ret)
}

// NewQApplication2 constructs a new QApplication object.
func NewQApplication2(args []string, param3 int) *QApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}
	ret := C.QApplication_new2(argc, &argv[0], (C.int)(param3))
	return newQApplication(ret)
}

func (this *QApplication) MetaObject() *QMetaObject {
	ret := C.QApplication_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QApplication_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QApplication_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_Style() *QStyle {
	ret := C.QApplication_Style()
	return newQStyle_U(unsafe.Pointer(ret))
}

func QApplication_SetStyle(style *QStyle) {
	C.QApplication_SetStyle(style.cPointer())
}

func QApplication_SetStyleWithStyle(style string) *QStyle {
	style_Cstring := C.CString(style)
	defer C.free(unsafe.Pointer(style_Cstring))
	ret := C.QApplication_SetStyleWithStyle(style_Cstring, C.ulong(len(style)))
	return newQStyle_U(unsafe.Pointer(ret))
}

func QApplication_ColorSpec() int {
	ret := C.QApplication_ColorSpec()
	return (int)(ret)
}

func QApplication_SetColorSpec(colorSpec int) {
	C.QApplication_SetColorSpec((C.int)(colorSpec))
}

func QApplication_Palette(param1 *QWidget) *QPalette {
	ret := C.QApplication_Palette(param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_PaletteWithClassName(className string) *QPalette {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	ret := C.QApplication_PaletteWithClassName(className_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_SetPalette(param1 *QPalette) {
	C.QApplication_SetPalette(param1.cPointer())
}

func QApplication_Font() *QFont {
	ret := C.QApplication_Font()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_FontWithQWidget(param1 *QWidget) *QFont {
	ret := C.QApplication_FontWithQWidget(param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_FontWithClassName(className string) *QFont {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	ret := C.QApplication_FontWithClassName(className_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_SetFont(param1 *QFont) {
	C.QApplication_SetFont(param1.cPointer())
}

func QApplication_FontMetrics() *QFontMetrics {
	ret := C.QApplication_FontMetrics()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFontMetrics(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFontMetrics) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_SetWindowIcon(icon *QIcon) {
	C.QApplication_SetWindowIcon(icon.cPointer())
}

func QApplication_WindowIcon() *QIcon {
	ret := C.QApplication_WindowIcon()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_AllWidgets() []*QWidget {
	var _out **C.QWidget = nil
	var _out_len C.size_t = 0
	C.QApplication_AllWidgets(&_out, &_out_len)
	ret := make([]*QWidget, int(_out_len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQWidget(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_TopLevelWidgets() []*QWidget {
	var _out **C.QWidget = nil
	var _out_len C.size_t = 0
	C.QApplication_TopLevelWidgets(&_out, &_out_len)
	ret := make([]*QWidget, int(_out_len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQWidget(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_Desktop() *QDesktopWidget {
	ret := C.QApplication_Desktop()
	return newQDesktopWidget_U(unsafe.Pointer(ret))
}

func QApplication_ActivePopupWidget() *QWidget {
	ret := C.QApplication_ActivePopupWidget()
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_ActiveModalWidget() *QWidget {
	ret := C.QApplication_ActiveModalWidget()
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_FocusWidget() *QWidget {
	ret := C.QApplication_FocusWidget()
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_ActiveWindow() *QWidget {
	ret := C.QApplication_ActiveWindow()
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_SetActiveWindow(act *QWidget) {
	C.QApplication_SetActiveWindow(act.cPointer())
}

func QApplication_WidgetAt(p *QPoint) *QWidget {
	ret := C.QApplication_WidgetAt(p.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_WidgetAt2(x int, y int) *QWidget {
	ret := C.QApplication_WidgetAt2((C.int)(x), (C.int)(y))
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_TopLevelAt(p *QPoint) *QWidget {
	ret := C.QApplication_TopLevelAt(p.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_TopLevelAt2(x int, y int) *QWidget {
	ret := C.QApplication_TopLevelAt2((C.int)(x), (C.int)(y))
	return newQWidget_U(unsafe.Pointer(ret))
}

func QApplication_Beep() {
	C.QApplication_Beep()
}

func QApplication_Alert(widget *QWidget) {
	C.QApplication_Alert(widget.cPointer())
}

func QApplication_SetCursorFlashTime(cursorFlashTime int) {
	C.QApplication_SetCursorFlashTime((C.int)(cursorFlashTime))
}

func QApplication_CursorFlashTime() int {
	ret := C.QApplication_CursorFlashTime()
	return (int)(ret)
}

func QApplication_SetDoubleClickInterval(doubleClickInterval int) {
	C.QApplication_SetDoubleClickInterval((C.int)(doubleClickInterval))
}

func QApplication_DoubleClickInterval() int {
	ret := C.QApplication_DoubleClickInterval()
	return (int)(ret)
}

func QApplication_SetKeyboardInputInterval(keyboardInputInterval int) {
	C.QApplication_SetKeyboardInputInterval((C.int)(keyboardInputInterval))
}

func QApplication_KeyboardInputInterval() int {
	ret := C.QApplication_KeyboardInputInterval()
	return (int)(ret)
}

func QApplication_SetWheelScrollLines(wheelScrollLines int) {
	C.QApplication_SetWheelScrollLines((C.int)(wheelScrollLines))
}

func QApplication_WheelScrollLines() int {
	ret := C.QApplication_WheelScrollLines()
	return (int)(ret)
}

func QApplication_SetGlobalStrut(globalStrut *QSize) {
	C.QApplication_SetGlobalStrut(globalStrut.cPointer())
}

func QApplication_GlobalStrut() *QSize {
	ret := C.QApplication_GlobalStrut()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QApplication_SetStartDragTime(ms int) {
	C.QApplication_SetStartDragTime((C.int)(ms))
}

func QApplication_StartDragTime() int {
	ret := C.QApplication_StartDragTime()
	return (int)(ret)
}

func QApplication_SetStartDragDistance(l int) {
	C.QApplication_SetStartDragDistance((C.int)(l))
}

func QApplication_StartDragDistance() int {
	ret := C.QApplication_StartDragDistance()
	return (int)(ret)
}

func QApplication_IsEffectEnabled(param1 uintptr) bool {
	ret := C.QApplication_IsEffectEnabled((C.uintptr_t)(param1))
	return (bool)(ret)
}

func QApplication_SetEffectEnabled(param1 uintptr) {
	C.QApplication_SetEffectEnabled((C.uintptr_t)(param1))
}

func QApplication_Exec() int {
	ret := C.QApplication_Exec()
	return (int)(ret)
}

func (this *QApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	ret := C.QApplication_Notify(this.h, param1.cPointer(), param2.cPointer())
	return (bool)(ret)
}

func (this *QApplication) FocusChanged(old *QWidget, now *QWidget) {
	C.QApplication_FocusChanged(this.h, old.cPointer(), now.cPointer())
}

func (this *QApplication) OnFocusChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QApplication_connect_FocusChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QApplication) StyleSheet() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QApplication_StyleSheet(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QApplication) SetStyleSheet(sheet string) {
	sheet_Cstring := C.CString(sheet)
	defer C.free(unsafe.Pointer(sheet_Cstring))
	C.QApplication_SetStyleSheet(this.h, sheet_Cstring, C.ulong(len(sheet)))
}

func (this *QApplication) SetAutoSipEnabled(enabled bool) {
	C.QApplication_SetAutoSipEnabled(this.h, (C.bool)(enabled))
}

func (this *QApplication) AutoSipEnabled() bool {
	ret := C.QApplication_AutoSipEnabled(this.h)
	return (bool)(ret)
}

func QApplication_CloseAllWindows() {
	C.QApplication_CloseAllWindows()
}

func QApplication_AboutQt() {
	C.QApplication_AboutQt()
}

func QApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QApplication_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QApplication_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QApplication_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QApplication_SetPalette2(param1 *QPalette, className string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	C.QApplication_SetPalette2(param1.cPointer(), className_Cstring)
}

func QApplication_SetFont2(param1 *QFont, className string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	C.QApplication_SetFont2(param1.cPointer(), className_Cstring)
}

func QApplication_Alert2(widget *QWidget, duration int) {
	C.QApplication_Alert2(widget.cPointer(), (C.int)(duration))
}

func QApplication_SetEffectEnabled2(param1 uintptr, enable bool) {
	C.QApplication_SetEffectEnabled2((C.uintptr_t)(param1), (C.bool)(enable))
}

func (this *QApplication) Delete() {
	C.QApplication_Delete(this.h)
}

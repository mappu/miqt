package qt

/*

#include "gen_qapplication.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QApplication__ColorSpec int

const (
	QApplication__NormalColor QApplication__ColorSpec = 0
	QApplication__CustomColor QApplication__ColorSpec = 1
	QApplication__ManyColor   QApplication__ColorSpec = 2
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

func (this *QApplication) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQApplication constructs the type using only CGO pointers.
func newQApplication(h *C.QApplication) *QApplication {
	if h == nil {
		return nil
	}
	var outptr_QGuiApplication *C.QGuiApplication = nil
	C.QApplication_virtbase(h, &outptr_QGuiApplication)

	return &QApplication{h: h,
		QGuiApplication: newQGuiApplication(outptr_QGuiApplication)}
}

// UnsafeNewQApplication constructs the type using only unsafe pointers.
func UnsafeNewQApplication(h unsafe.Pointer) *QApplication {
	return newQApplication((*C.QApplication)(h))
}

// NewQApplication constructs a new QApplication object.
func NewQApplication(args []string) *QApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	return newQApplication(C.QApplication_new(argc, &argv[0]))
}

// NewQApplication2 constructs a new QApplication object.
func NewQApplication2(args []string, param3 int) *QApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	return newQApplication(C.QApplication_new2(argc, &argv[0], (C.int)(param3)))
}

func (this *QApplication) MetaObject() *QMetaObject {
	return newQMetaObject(C.QApplication_metaObject(this.h))
}

func (this *QApplication) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QApplication_metacast(this.h, param1_Cstring))
}

func QApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_Style() *QStyle {
	return newQStyle(C.QApplication_style())
}

func QApplication_SetStyle(style *QStyle) {
	C.QApplication_setStyle(style.cPointer())
}

func QApplication_SetStyleWithStyle(style string) *QStyle {
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return newQStyle(C.QApplication_setStyleWithStyle(style_ms))
}

func QApplication_ColorSpec() int {
	return (int)(C.QApplication_colorSpec())
}

func QApplication_SetColorSpec(colorSpec int) {
	C.QApplication_setColorSpec((C.int)(colorSpec))
}

func QApplication_Palette(param1 *QWidget) *QPalette {
	_goptr := newQPalette(C.QApplication_palette(param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_PaletteWithClassName(className string) *QPalette {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	_goptr := newQPalette(C.QApplication_paletteWithClassName(className_Cstring))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetPalette(param1 *QPalette) {
	C.QApplication_setPalette(param1.cPointer())
}

func QApplication_Font() *QFont {
	_goptr := newQFont(C.QApplication_font())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_FontWithQWidget(param1 *QWidget) *QFont {
	_goptr := newQFont(C.QApplication_fontWithQWidget(param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_FontWithClassName(className string) *QFont {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	_goptr := newQFont(C.QApplication_fontWithClassName(className_Cstring))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetFont(param1 *QFont) {
	C.QApplication_setFont(param1.cPointer())
}

func QApplication_FontMetrics() *QFontMetrics {
	_goptr := newQFontMetrics(C.QApplication_fontMetrics())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetWindowIcon(icon *QIcon) {
	C.QApplication_setWindowIcon(icon.cPointer())
}

func QApplication_WindowIcon() *QIcon {
	_goptr := newQIcon(C.QApplication_windowIcon())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_AllWidgets() []*QWidget {
	var _ma C.struct_miqt_array = C.QApplication_allWidgets()
	_ret := make([]*QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWidget(_outCast[i])
	}
	return _ret
}

func QApplication_TopLevelWidgets() []*QWidget {
	var _ma C.struct_miqt_array = C.QApplication_topLevelWidgets()
	_ret := make([]*QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWidget(_outCast[i])
	}
	return _ret
}

func QApplication_Desktop() *QDesktopWidget {
	return newQDesktopWidget(C.QApplication_desktop())
}

func QApplication_ActivePopupWidget() *QWidget {
	return newQWidget(C.QApplication_activePopupWidget())
}

func QApplication_ActiveModalWidget() *QWidget {
	return newQWidget(C.QApplication_activeModalWidget())
}

func QApplication_FocusWidget() *QWidget {
	return newQWidget(C.QApplication_focusWidget())
}

func QApplication_ActiveWindow() *QWidget {
	return newQWidget(C.QApplication_activeWindow())
}

func QApplication_SetActiveWindow(act *QWidget) {
	C.QApplication_setActiveWindow(act.cPointer())
}

func QApplication_WidgetAt(p *QPoint) *QWidget {
	return newQWidget(C.QApplication_widgetAt(p.cPointer()))
}

func QApplication_WidgetAt2(x int, y int) *QWidget {
	return newQWidget(C.QApplication_widgetAt2((C.int)(x), (C.int)(y)))
}

func QApplication_TopLevelAt(p *QPoint) *QWidget {
	return newQWidget(C.QApplication_topLevelAt(p.cPointer()))
}

func QApplication_TopLevelAt2(x int, y int) *QWidget {
	return newQWidget(C.QApplication_topLevelAt2((C.int)(x), (C.int)(y)))
}

func QApplication_Beep() {
	C.QApplication_beep()
}

func QApplication_Alert(widget *QWidget) {
	C.QApplication_alert(widget.cPointer())
}

func QApplication_SetCursorFlashTime(cursorFlashTime int) {
	C.QApplication_setCursorFlashTime((C.int)(cursorFlashTime))
}

func QApplication_CursorFlashTime() int {
	return (int)(C.QApplication_cursorFlashTime())
}

func QApplication_SetDoubleClickInterval(doubleClickInterval int) {
	C.QApplication_setDoubleClickInterval((C.int)(doubleClickInterval))
}

func QApplication_DoubleClickInterval() int {
	return (int)(C.QApplication_doubleClickInterval())
}

func QApplication_SetKeyboardInputInterval(keyboardInputInterval int) {
	C.QApplication_setKeyboardInputInterval((C.int)(keyboardInputInterval))
}

func QApplication_KeyboardInputInterval() int {
	return (int)(C.QApplication_keyboardInputInterval())
}

func QApplication_SetWheelScrollLines(wheelScrollLines int) {
	C.QApplication_setWheelScrollLines((C.int)(wheelScrollLines))
}

func QApplication_WheelScrollLines() int {
	return (int)(C.QApplication_wheelScrollLines())
}

func QApplication_SetGlobalStrut(globalStrut *QSize) {
	C.QApplication_setGlobalStrut(globalStrut.cPointer())
}

func QApplication_GlobalStrut() *QSize {
	_goptr := newQSize(C.QApplication_globalStrut())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetStartDragTime(ms int) {
	C.QApplication_setStartDragTime((C.int)(ms))
}

func QApplication_StartDragTime() int {
	return (int)(C.QApplication_startDragTime())
}

func QApplication_SetStartDragDistance(l int) {
	C.QApplication_setStartDragDistance((C.int)(l))
}

func QApplication_StartDragDistance() int {
	return (int)(C.QApplication_startDragDistance())
}

func QApplication_IsEffectEnabled(param1 UIEffect) bool {
	return (bool)(C.QApplication_isEffectEnabled((C.int)(param1)))
}

func QApplication_SetEffectEnabled(param1 UIEffect) {
	C.QApplication_setEffectEnabled((C.int)(param1))
}

func QApplication_Exec() int {
	return (int)(C.QApplication_exec())
}

func (this *QApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	return (bool)(C.QApplication_notify(this.h, param1.cPointer(), param2.cPointer()))
}

func (this *QApplication) FocusChanged(old *QWidget, now *QWidget) {
	C.QApplication_focusChanged(this.h, old.cPointer(), now.cPointer())
}
func (this *QApplication) OnFocusChanged(slot func(old *QWidget, now *QWidget)) {
	C.QApplication_connect_focusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QApplication_focusChanged
func miqt_exec_callback_QApplication_focusChanged(cb C.intptr_t, old *C.QWidget, now *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(old *QWidget, now *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(old)

	slotval2 := newQWidget(now)

	gofunc(slotval1, slotval2)
}

func (this *QApplication) StyleSheet() string {
	var _ms C.struct_miqt_string = C.QApplication_styleSheet(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QApplication) SetStyleSheet(sheet string) {
	sheet_ms := C.struct_miqt_string{}
	sheet_ms.data = C.CString(sheet)
	sheet_ms.len = C.size_t(len(sheet))
	defer C.free(unsafe.Pointer(sheet_ms.data))
	C.QApplication_setStyleSheet(this.h, sheet_ms)
}

func (this *QApplication) SetAutoSipEnabled(enabled bool) {
	C.QApplication_setAutoSipEnabled(this.h, (C.bool)(enabled))
}

func (this *QApplication) AutoSipEnabled() bool {
	return (bool)(C.QApplication_autoSipEnabled(this.h))
}

func QApplication_CloseAllWindows() {
	C.QApplication_closeAllWindows()
}

func QApplication_AboutQt() {
	C.QApplication_aboutQt()
}

func QApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_SetPalette2(param1 *QPalette, className string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	C.QApplication_setPalette2(param1.cPointer(), className_Cstring)
}

func QApplication_SetFont2(param1 *QFont, className string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	C.QApplication_setFont2(param1.cPointer(), className_Cstring)
}

func QApplication_Alert2(widget *QWidget, duration int) {
	C.QApplication_alert2(widget.cPointer(), (C.int)(duration))
}

func QApplication_SetEffectEnabled2(param1 UIEffect, enable bool) {
	C.QApplication_setEffectEnabled2((C.int)(param1), (C.bool)(enable))
}

func (this *QApplication) callVirtualBase_Notify(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QApplication_virtualbase_notify(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QApplication) Onnotify(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QApplication_override_virtual_notify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_notify
func miqt_exec_callback_QApplication_notify(self *C.QApplication, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QApplication{h: self}).callVirtualBase_Notify, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QApplication) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QApplication_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QApplication) Onevent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QApplication_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_event
func miqt_exec_callback_QApplication_event(self *C.QApplication, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QApplication{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QApplication) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QApplication_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QApplication) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QApplication_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_eventFilter
func miqt_exec_callback_QApplication_eventFilter(self *C.QApplication, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QApplication{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QApplication) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QApplication_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QApplication) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QApplication_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_timerEvent
func miqt_exec_callback_QApplication_timerEvent(self *C.QApplication, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QApplication{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QApplication) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QApplication_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QApplication) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QApplication_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_childEvent
func miqt_exec_callback_QApplication_childEvent(self *C.QApplication, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QApplication{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QApplication) callVirtualBase_CustomEvent(event *QEvent) {

	C.QApplication_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QApplication) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QApplication_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_customEvent
func miqt_exec_callback_QApplication_customEvent(self *C.QApplication, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QApplication{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QApplication) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QApplication_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QApplication) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QApplication_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_connectNotify
func miqt_exec_callback_QApplication_connectNotify(self *C.QApplication, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QApplication{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QApplication) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QApplication_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QApplication) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QApplication_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QApplication_disconnectNotify
func miqt_exec_callback_QApplication_disconnectNotify(self *C.QApplication, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QApplication{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QApplication) Delete() {
	C.QApplication_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

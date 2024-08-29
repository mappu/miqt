package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qguiapplication.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGuiApplication struct {
	h *C.QGuiApplication
	*QCoreApplication
}

func (this *QGuiApplication) cPointer() *C.QGuiApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGuiApplication(h *C.QGuiApplication) *QGuiApplication {
	return &QGuiApplication{h: h, QCoreApplication: newQCoreApplication_U(unsafe.Pointer(h))}
}

func newQGuiApplication_U(h unsafe.Pointer) *QGuiApplication {
	return newQGuiApplication((*C.QGuiApplication)(h))
}

// NewQGuiApplication constructs a new QGuiApplication object.
func NewQGuiApplication(args []string) *QGuiApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}
	ret := C.QGuiApplication_new(argc, &argv[0])
	return newQGuiApplication(ret)
}

// NewQGuiApplication2 constructs a new QGuiApplication object.
func NewQGuiApplication2(args []string, param3 int) *QGuiApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}
	ret := C.QGuiApplication_new2(argc, &argv[0], (C.int)(param3))
	return newQGuiApplication(ret)
}

func (this *QGuiApplication) MetaObject() *QMetaObject {
	ret := C.QGuiApplication_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGuiApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_SetApplicationDisplayName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QGuiApplication_SetApplicationDisplayName(name_Cstring, C.ulong(len(name)))
}

func QGuiApplication_ApplicationDisplayName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_ApplicationDisplayName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_SetDesktopFileName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QGuiApplication_SetDesktopFileName(name_Cstring, C.ulong(len(name)))
}

func QGuiApplication_DesktopFileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_DesktopFileName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_AllWindows() []*QWindow {
	var _out **C.QWindow = nil
	var _out_len C.size_t = 0
	C.QGuiApplication_AllWindows(&_out, &_out_len)
	ret := make([]*QWindow, int(_out_len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_TopLevelWindows() []*QWindow {
	var _out **C.QWindow = nil
	var _out_len C.size_t = 0
	C.QGuiApplication_TopLevelWindows(&_out, &_out_len)
	ret := make([]*QWindow, int(_out_len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_TopLevelAt(pos *QPoint) *QWindow {
	ret := C.QGuiApplication_TopLevelAt(pos.cPointer())
	return newQWindow_U(unsafe.Pointer(ret))
}

func QGuiApplication_SetWindowIcon(icon *QIcon) {
	C.QGuiApplication_SetWindowIcon(icon.cPointer())
}

func QGuiApplication_WindowIcon() *QIcon {
	ret := C.QGuiApplication_WindowIcon()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QGuiApplication_PlatformName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_PlatformName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_ModalWindow() *QWindow {
	ret := C.QGuiApplication_ModalWindow()
	return newQWindow_U(unsafe.Pointer(ret))
}

func QGuiApplication_FocusWindow() *QWindow {
	ret := C.QGuiApplication_FocusWindow()
	return newQWindow_U(unsafe.Pointer(ret))
}

func QGuiApplication_FocusObject() *QObject {
	ret := C.QGuiApplication_FocusObject()
	return newQObject_U(unsafe.Pointer(ret))
}

func QGuiApplication_PrimaryScreen() *QScreen {
	ret := C.QGuiApplication_PrimaryScreen()
	return newQScreen_U(unsafe.Pointer(ret))
}

func QGuiApplication_Screens() []*QScreen {
	var _out **C.QScreen = nil
	var _out_len C.size_t = 0
	C.QGuiApplication_Screens(&_out, &_out_len)
	ret := make([]*QScreen, int(_out_len))
	_outCast := (*[0xffff]*C.QScreen)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQScreen(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_ScreenAt(point *QPoint) *QScreen {
	ret := C.QGuiApplication_ScreenAt(point.cPointer())
	return newQScreen_U(unsafe.Pointer(ret))
}

func (this *QGuiApplication) DevicePixelRatio() float64 {
	ret := C.QGuiApplication_DevicePixelRatio(this.h)
	return (float64)(ret)
}

func QGuiApplication_OverrideCursor() *QCursor {
	ret := C.QGuiApplication_OverrideCursor()
	return newQCursor_U(unsafe.Pointer(ret))
}

func QGuiApplication_SetOverrideCursor(overrideCursor *QCursor) {
	C.QGuiApplication_SetOverrideCursor(overrideCursor.cPointer())
}

func QGuiApplication_ChangeOverrideCursor(param1 *QCursor) {
	C.QGuiApplication_ChangeOverrideCursor(param1.cPointer())
}

func QGuiApplication_RestoreOverrideCursor() {
	C.QGuiApplication_RestoreOverrideCursor()
}

func QGuiApplication_Font() *QFont {
	ret := C.QGuiApplication_Font()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QGuiApplication_SetFont(font *QFont) {
	C.QGuiApplication_SetFont(font.cPointer())
}

func QGuiApplication_Clipboard() *QClipboard {
	ret := C.QGuiApplication_Clipboard()
	return newQClipboard_U(unsafe.Pointer(ret))
}

func QGuiApplication_Palette() *QPalette {
	ret := C.QGuiApplication_Palette()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QGuiApplication_SetPalette(pal *QPalette) {
	C.QGuiApplication_SetPalette(pal.cPointer())
}

func QGuiApplication_KeyboardModifiers() int {
	ret := C.QGuiApplication_KeyboardModifiers()
	return (int)(ret)
}

func QGuiApplication_QueryKeyboardModifiers() int {
	ret := C.QGuiApplication_QueryKeyboardModifiers()
	return (int)(ret)
}

func QGuiApplication_MouseButtons() int {
	ret := C.QGuiApplication_MouseButtons()
	return (int)(ret)
}

func QGuiApplication_SetLayoutDirection(direction uintptr) {
	C.QGuiApplication_SetLayoutDirection((C.uintptr_t)(direction))
}

func QGuiApplication_LayoutDirection() uintptr {
	ret := C.QGuiApplication_LayoutDirection()
	return (uintptr)(ret)
}

func QGuiApplication_IsRightToLeft() bool {
	ret := C.QGuiApplication_IsRightToLeft()
	return (bool)(ret)
}

func QGuiApplication_IsLeftToRight() bool {
	ret := C.QGuiApplication_IsLeftToRight()
	return (bool)(ret)
}

func QGuiApplication_StyleHints() *QStyleHints {
	ret := C.QGuiApplication_StyleHints()
	return newQStyleHints_U(unsafe.Pointer(ret))
}

func QGuiApplication_SetDesktopSettingsAware(on bool) {
	C.QGuiApplication_SetDesktopSettingsAware((C.bool)(on))
}

func QGuiApplication_DesktopSettingsAware() bool {
	ret := C.QGuiApplication_DesktopSettingsAware()
	return (bool)(ret)
}

func QGuiApplication_InputMethod() *QInputMethod {
	ret := C.QGuiApplication_InputMethod()
	return newQInputMethod_U(unsafe.Pointer(ret))
}

func QGuiApplication_SetQuitOnLastWindowClosed(quit bool) {
	C.QGuiApplication_SetQuitOnLastWindowClosed((C.bool)(quit))
}

func QGuiApplication_QuitOnLastWindowClosed() bool {
	ret := C.QGuiApplication_QuitOnLastWindowClosed()
	return (bool)(ret)
}

func QGuiApplication_ApplicationState() uintptr {
	ret := C.QGuiApplication_ApplicationState()
	return (uintptr)(ret)
}

func QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy uintptr) {
	C.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy((C.uintptr_t)(policy))
}

func QGuiApplication_HighDpiScaleFactorRoundingPolicy() uintptr {
	ret := C.QGuiApplication_HighDpiScaleFactorRoundingPolicy()
	return (uintptr)(ret)
}

func QGuiApplication_Exec() int {
	ret := C.QGuiApplication_Exec()
	return (int)(ret)
}

func (this *QGuiApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	ret := C.QGuiApplication_Notify(this.h, param1.cPointer(), param2.cPointer())
	return (bool)(ret)
}

func (this *QGuiApplication) IsSessionRestored() bool {
	ret := C.QGuiApplication_IsSessionRestored(this.h)
	return (bool)(ret)
}

func (this *QGuiApplication) SessionId() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_SessionId(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGuiApplication) SessionKey() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_SessionKey(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGuiApplication) IsSavingSession() bool {
	ret := C.QGuiApplication_IsSavingSession(this.h)
	return (bool)(ret)
}

func QGuiApplication_IsFallbackSessionManagementEnabled() bool {
	ret := C.QGuiApplication_IsFallbackSessionManagementEnabled()
	return (bool)(ret)
}

func QGuiApplication_SetFallbackSessionManagementEnabled(fallbackSessionManagementEnabled bool) {
	C.QGuiApplication_SetFallbackSessionManagementEnabled((C.bool)(fallbackSessionManagementEnabled))
}

func QGuiApplication_Sync() {
	C.QGuiApplication_Sync()
}

func (this *QGuiApplication) FontDatabaseChanged() {
	C.QGuiApplication_FontDatabaseChanged(this.h)
}

func (this *QGuiApplication) OnFontDatabaseChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_FontDatabaseChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) ScreenAdded(screen *QScreen) {
	C.QGuiApplication_ScreenAdded(this.h, screen.cPointer())
}

func (this *QGuiApplication) OnScreenAdded(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_ScreenAdded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) ScreenRemoved(screen *QScreen) {
	C.QGuiApplication_ScreenRemoved(this.h, screen.cPointer())
}

func (this *QGuiApplication) OnScreenRemoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_ScreenRemoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) PrimaryScreenChanged(screen *QScreen) {
	C.QGuiApplication_PrimaryScreenChanged(this.h, screen.cPointer())
}

func (this *QGuiApplication) OnPrimaryScreenChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_PrimaryScreenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) LastWindowClosed() {
	C.QGuiApplication_LastWindowClosed(this.h)
}

func (this *QGuiApplication) OnLastWindowClosed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_LastWindowClosed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) FocusObjectChanged(focusObject *QObject) {
	C.QGuiApplication_FocusObjectChanged(this.h, focusObject.cPointer())
}

func (this *QGuiApplication) OnFocusObjectChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_FocusObjectChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) FocusWindowChanged(focusWindow *QWindow) {
	C.QGuiApplication_FocusWindowChanged(this.h, focusWindow.cPointer())
}

func (this *QGuiApplication) OnFocusWindowChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_FocusWindowChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) ApplicationStateChanged(state uintptr) {
	C.QGuiApplication_ApplicationStateChanged(this.h, (C.uintptr_t)(state))
}

func (this *QGuiApplication) OnApplicationStateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_ApplicationStateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) LayoutDirectionChanged(direction uintptr) {
	C.QGuiApplication_LayoutDirectionChanged(this.h, (C.uintptr_t)(direction))
}

func (this *QGuiApplication) OnLayoutDirectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_LayoutDirectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) CommitDataRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_CommitDataRequest(this.h, sessionManager.cPointer())
}

func (this *QGuiApplication) OnCommitDataRequest(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_CommitDataRequest(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) SaveStateRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_SaveStateRequest(this.h, sessionManager.cPointer())
}

func (this *QGuiApplication) OnSaveStateRequest(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_SaveStateRequest(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) PaletteChanged(pal *QPalette) {
	C.QGuiApplication_PaletteChanged(this.h, pal.cPointer())
}

func (this *QGuiApplication) OnPaletteChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_PaletteChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) ApplicationDisplayNameChanged() {
	C.QGuiApplication_ApplicationDisplayNameChanged(this.h)
}

func (this *QGuiApplication) OnApplicationDisplayNameChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_ApplicationDisplayNameChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGuiApplication) FontChanged(font *QFont) {
	C.QGuiApplication_FontChanged(this.h, font.cPointer())
}

func (this *QGuiApplication) OnFontChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGuiApplication_connect_FontChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGuiApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGuiApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGuiApplication_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGuiApplication) Delete() {
	C.QGuiApplication_Delete(this.h)
}

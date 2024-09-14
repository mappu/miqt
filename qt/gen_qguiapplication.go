package qt

/*

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
	if h == nil {
		return nil
	}
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
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
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
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}
	ret := C.QGuiApplication_new2(argc, &argv[0], (C.int)(param3))
	return newQGuiApplication(ret)
}

func (this *QGuiApplication) MetaObject() *QMetaObject {
	_ret := C.QGuiApplication_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QGuiApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGuiApplication_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGuiApplication_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_SetApplicationDisplayName(name string) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QGuiApplication_SetApplicationDisplayName((*C.struct_miqt_string)(name_ms))
}

func QGuiApplication_ApplicationDisplayName() string {
	var _ms *C.struct_miqt_string = C.QGuiApplication_ApplicationDisplayName()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_SetDesktopFileName(name string) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QGuiApplication_SetDesktopFileName((*C.struct_miqt_string)(name_ms))
}

func QGuiApplication_DesktopFileName() string {
	var _ms *C.struct_miqt_string = C.QGuiApplication_DesktopFileName()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_AllWindows() []*QWindow {
	var _ma *C.struct_miqt_array = C.QGuiApplication_AllWindows()
	_ret := make([]*QWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QGuiApplication_TopLevelWindows() []*QWindow {
	var _ma *C.struct_miqt_array = C.QGuiApplication_TopLevelWindows()
	_ret := make([]*QWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QGuiApplication_TopLevelAt(pos *QPoint) *QWindow {
	_ret := C.QGuiApplication_TopLevelAt(pos.cPointer())
	return newQWindow_U(unsafe.Pointer(_ret))
}

func QGuiApplication_SetWindowIcon(icon *QIcon) {
	C.QGuiApplication_SetWindowIcon(icon.cPointer())
}

func QGuiApplication_WindowIcon() *QIcon {
	_ret := C.QGuiApplication_WindowIcon()
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGuiApplication_PlatformName() string {
	var _ms *C.struct_miqt_string = C.QGuiApplication_PlatformName()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_ModalWindow() *QWindow {
	_ret := C.QGuiApplication_ModalWindow()
	return newQWindow_U(unsafe.Pointer(_ret))
}

func QGuiApplication_FocusWindow() *QWindow {
	_ret := C.QGuiApplication_FocusWindow()
	return newQWindow_U(unsafe.Pointer(_ret))
}

func QGuiApplication_FocusObject() *QObject {
	_ret := C.QGuiApplication_FocusObject()
	return newQObject_U(unsafe.Pointer(_ret))
}

func QGuiApplication_PrimaryScreen() *QScreen {
	_ret := C.QGuiApplication_PrimaryScreen()
	return newQScreen_U(unsafe.Pointer(_ret))
}

func QGuiApplication_Screens() []*QScreen {
	var _ma *C.struct_miqt_array = C.QGuiApplication_Screens()
	_ret := make([]*QScreen, int(_ma.len))
	_outCast := (*[0xffff]*C.QScreen)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQScreen(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QGuiApplication_ScreenAt(point *QPoint) *QScreen {
	_ret := C.QGuiApplication_ScreenAt(point.cPointer())
	return newQScreen_U(unsafe.Pointer(_ret))
}

func (this *QGuiApplication) DevicePixelRatio() float64 {
	_ret := C.QGuiApplication_DevicePixelRatio(this.h)
	return (float64)(_ret)
}

func QGuiApplication_OverrideCursor() *QCursor {
	_ret := C.QGuiApplication_OverrideCursor()
	return newQCursor_U(unsafe.Pointer(_ret))
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
	_ret := C.QGuiApplication_Font()
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGuiApplication_SetFont(font *QFont) {
	C.QGuiApplication_SetFont(font.cPointer())
}

func QGuiApplication_Clipboard() *QClipboard {
	_ret := C.QGuiApplication_Clipboard()
	return newQClipboard_U(unsafe.Pointer(_ret))
}

func QGuiApplication_Palette() *QPalette {
	_ret := C.QGuiApplication_Palette()
	_goptr := newQPalette(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGuiApplication_SetPalette(pal *QPalette) {
	C.QGuiApplication_SetPalette(pal.cPointer())
}

func QGuiApplication_KeyboardModifiers() int {
	_ret := C.QGuiApplication_KeyboardModifiers()
	return (int)(_ret)
}

func QGuiApplication_QueryKeyboardModifiers() int {
	_ret := C.QGuiApplication_QueryKeyboardModifiers()
	return (int)(_ret)
}

func QGuiApplication_MouseButtons() int {
	_ret := C.QGuiApplication_MouseButtons()
	return (int)(_ret)
}

func QGuiApplication_SetLayoutDirection(direction LayoutDirection) {
	C.QGuiApplication_SetLayoutDirection((C.uintptr_t)(direction))
}

func QGuiApplication_LayoutDirection() LayoutDirection {
	_ret := C.QGuiApplication_LayoutDirection()
	return (LayoutDirection)(_ret)
}

func QGuiApplication_IsRightToLeft() bool {
	_ret := C.QGuiApplication_IsRightToLeft()
	return (bool)(_ret)
}

func QGuiApplication_IsLeftToRight() bool {
	_ret := C.QGuiApplication_IsLeftToRight()
	return (bool)(_ret)
}

func QGuiApplication_StyleHints() *QStyleHints {
	_ret := C.QGuiApplication_StyleHints()
	return newQStyleHints_U(unsafe.Pointer(_ret))
}

func QGuiApplication_SetDesktopSettingsAware(on bool) {
	C.QGuiApplication_SetDesktopSettingsAware((C.bool)(on))
}

func QGuiApplication_DesktopSettingsAware() bool {
	_ret := C.QGuiApplication_DesktopSettingsAware()
	return (bool)(_ret)
}

func QGuiApplication_InputMethod() *QInputMethod {
	_ret := C.QGuiApplication_InputMethod()
	return newQInputMethod_U(unsafe.Pointer(_ret))
}

func QGuiApplication_SetQuitOnLastWindowClosed(quit bool) {
	C.QGuiApplication_SetQuitOnLastWindowClosed((C.bool)(quit))
}

func QGuiApplication_QuitOnLastWindowClosed() bool {
	_ret := C.QGuiApplication_QuitOnLastWindowClosed()
	return (bool)(_ret)
}

func QGuiApplication_ApplicationState() ApplicationState {
	_ret := C.QGuiApplication_ApplicationState()
	return (ApplicationState)(_ret)
}

func QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy HighDpiScaleFactorRoundingPolicy) {
	C.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy((C.uintptr_t)(policy))
}

func QGuiApplication_HighDpiScaleFactorRoundingPolicy() HighDpiScaleFactorRoundingPolicy {
	_ret := C.QGuiApplication_HighDpiScaleFactorRoundingPolicy()
	return (HighDpiScaleFactorRoundingPolicy)(_ret)
}

func QGuiApplication_Exec() int {
	_ret := C.QGuiApplication_Exec()
	return (int)(_ret)
}

func (this *QGuiApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	_ret := C.QGuiApplication_Notify(this.h, param1.cPointer(), param2.cPointer())
	return (bool)(_ret)
}

func (this *QGuiApplication) IsSessionRestored() bool {
	_ret := C.QGuiApplication_IsSessionRestored(this.h)
	return (bool)(_ret)
}

func (this *QGuiApplication) SessionId() string {
	var _ms *C.struct_miqt_string = C.QGuiApplication_SessionId(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGuiApplication) SessionKey() string {
	var _ms *C.struct_miqt_string = C.QGuiApplication_SessionKey(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGuiApplication) IsSavingSession() bool {
	_ret := C.QGuiApplication_IsSavingSession(this.h)
	return (bool)(_ret)
}

func QGuiApplication_IsFallbackSessionManagementEnabled() bool {
	_ret := C.QGuiApplication_IsFallbackSessionManagementEnabled()
	return (bool)(_ret)
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
	C.QGuiApplication_connect_FontDatabaseChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_FontDatabaseChanged
func miqt_exec_callback_QGuiApplication_FontDatabaseChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) ScreenAdded(screen *QScreen) {
	C.QGuiApplication_ScreenAdded(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnScreenAdded(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_ScreenAdded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_ScreenAdded
func miqt_exec_callback_QGuiApplication_ScreenAdded(cb *C.void, screen *C.QScreen) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	screen_ret := screen
	slotval1 := newQScreen_U(unsafe.Pointer(screen_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) ScreenRemoved(screen *QScreen) {
	C.QGuiApplication_ScreenRemoved(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnScreenRemoved(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_ScreenRemoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_ScreenRemoved
func miqt_exec_callback_QGuiApplication_ScreenRemoved(cb *C.void, screen *C.QScreen) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	screen_ret := screen
	slotval1 := newQScreen_U(unsafe.Pointer(screen_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) PrimaryScreenChanged(screen *QScreen) {
	C.QGuiApplication_PrimaryScreenChanged(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnPrimaryScreenChanged(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_PrimaryScreenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_PrimaryScreenChanged
func miqt_exec_callback_QGuiApplication_PrimaryScreenChanged(cb *C.void, screen *C.QScreen) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	screen_ret := screen
	slotval1 := newQScreen_U(unsafe.Pointer(screen_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) LastWindowClosed() {
	C.QGuiApplication_LastWindowClosed(this.h)
}
func (this *QGuiApplication) OnLastWindowClosed(slot func()) {
	C.QGuiApplication_connect_LastWindowClosed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_LastWindowClosed
func miqt_exec_callback_QGuiApplication_LastWindowClosed(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) FocusObjectChanged(focusObject *QObject) {
	C.QGuiApplication_FocusObjectChanged(this.h, focusObject.cPointer())
}
func (this *QGuiApplication) OnFocusObjectChanged(slot func(focusObject *QObject)) {
	C.QGuiApplication_connect_FocusObjectChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_FocusObjectChanged
func miqt_exec_callback_QGuiApplication_FocusObjectChanged(cb *C.void, focusObject *C.QObject) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(focusObject *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	focusObject_ret := focusObject
	slotval1 := newQObject_U(unsafe.Pointer(focusObject_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) FocusWindowChanged(focusWindow *QWindow) {
	C.QGuiApplication_FocusWindowChanged(this.h, focusWindow.cPointer())
}
func (this *QGuiApplication) OnFocusWindowChanged(slot func(focusWindow *QWindow)) {
	C.QGuiApplication_connect_FocusWindowChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_FocusWindowChanged
func miqt_exec_callback_QGuiApplication_FocusWindowChanged(cb *C.void, focusWindow *C.QWindow) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(focusWindow *QWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	focusWindow_ret := focusWindow
	slotval1 := newQWindow_U(unsafe.Pointer(focusWindow_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) ApplicationStateChanged(state ApplicationState) {
	C.QGuiApplication_ApplicationStateChanged(this.h, (C.uintptr_t)(state))
}
func (this *QGuiApplication) OnApplicationStateChanged(slot func(state ApplicationState)) {
	C.QGuiApplication_connect_ApplicationStateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_ApplicationStateChanged
func miqt_exec_callback_QGuiApplication_ApplicationStateChanged(cb *C.void, state C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(state ApplicationState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	state_ret := state
	slotval1 := (ApplicationState)(state_ret)

	gofunc(slotval1)
}

func (this *QGuiApplication) LayoutDirectionChanged(direction LayoutDirection) {
	C.QGuiApplication_LayoutDirectionChanged(this.h, (C.uintptr_t)(direction))
}
func (this *QGuiApplication) OnLayoutDirectionChanged(slot func(direction LayoutDirection)) {
	C.QGuiApplication_connect_LayoutDirectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_LayoutDirectionChanged
func miqt_exec_callback_QGuiApplication_LayoutDirectionChanged(cb *C.void, direction C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(direction LayoutDirection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	direction_ret := direction
	slotval1 := (LayoutDirection)(direction_ret)

	gofunc(slotval1)
}

func (this *QGuiApplication) CommitDataRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_CommitDataRequest(this.h, sessionManager.cPointer())
}
func (this *QGuiApplication) OnCommitDataRequest(slot func(sessionManager *QSessionManager)) {
	C.QGuiApplication_connect_CommitDataRequest(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_CommitDataRequest
func miqt_exec_callback_QGuiApplication_CommitDataRequest(cb *C.void, sessionManager *C.QSessionManager) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(sessionManager *QSessionManager))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	sessionManager_ret := sessionManager
	slotval1 := newQSessionManager_U(unsafe.Pointer(sessionManager_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) SaveStateRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_SaveStateRequest(this.h, sessionManager.cPointer())
}
func (this *QGuiApplication) OnSaveStateRequest(slot func(sessionManager *QSessionManager)) {
	C.QGuiApplication_connect_SaveStateRequest(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_SaveStateRequest
func miqt_exec_callback_QGuiApplication_SaveStateRequest(cb *C.void, sessionManager *C.QSessionManager) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(sessionManager *QSessionManager))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	sessionManager_ret := sessionManager
	slotval1 := newQSessionManager_U(unsafe.Pointer(sessionManager_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) PaletteChanged(pal *QPalette) {
	C.QGuiApplication_PaletteChanged(this.h, pal.cPointer())
}
func (this *QGuiApplication) OnPaletteChanged(slot func(pal *QPalette)) {
	C.QGuiApplication_connect_PaletteChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_PaletteChanged
func miqt_exec_callback_QGuiApplication_PaletteChanged(cb *C.void, pal *C.QPalette) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(pal *QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	pal_ret := pal
	slotval1 := newQPalette_U(unsafe.Pointer(pal_ret))

	gofunc(slotval1)
}

func (this *QGuiApplication) ApplicationDisplayNameChanged() {
	C.QGuiApplication_ApplicationDisplayNameChanged(this.h)
}
func (this *QGuiApplication) OnApplicationDisplayNameChanged(slot func()) {
	C.QGuiApplication_connect_ApplicationDisplayNameChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged
func miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) FontChanged(font *QFont) {
	C.QGuiApplication_FontChanged(this.h, font.cPointer())
}
func (this *QGuiApplication) OnFontChanged(slot func(font *QFont)) {
	C.QGuiApplication_connect_FontChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGuiApplication_FontChanged
func miqt_exec_callback_QGuiApplication_FontChanged(cb *C.void, font *C.QFont) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	font_ret := font
	slotval1 := newQFont_U(unsafe.Pointer(font_ret))

	gofunc(slotval1)
}

func QGuiApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGuiApplication_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGuiApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGuiApplication_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGuiApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGuiApplication_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGuiApplication) Delete() {
	C.QGuiApplication_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGuiApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QGuiApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

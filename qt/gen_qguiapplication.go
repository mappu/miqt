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
	h          *C.QGuiApplication
	isSubclass bool
	*QCoreApplication
}

func (this *QGuiApplication) cPointer() *C.QGuiApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGuiApplication) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGuiApplication constructs the type using only CGO pointers.
func newQGuiApplication(h *C.QGuiApplication, h_QCoreApplication *C.QCoreApplication, h_QObject *C.QObject) *QGuiApplication {
	if h == nil {
		return nil
	}
	return &QGuiApplication{h: h,
		QCoreApplication: newQCoreApplication(h_QCoreApplication, h_QObject)}
}

// UnsafeNewQGuiApplication constructs the type using only unsafe pointers.
func UnsafeNewQGuiApplication(h unsafe.Pointer, h_QCoreApplication unsafe.Pointer, h_QObject unsafe.Pointer) *QGuiApplication {
	if h == nil {
		return nil
	}

	return &QGuiApplication{h: (*C.QGuiApplication)(h),
		QCoreApplication: UnsafeNewQCoreApplication(h_QCoreApplication, h_QObject)}
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

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	var outptr_QGuiApplication *C.QGuiApplication = nil
	var outptr_QCoreApplication *C.QCoreApplication = nil
	var outptr_QObject *C.QObject = nil

	C.QGuiApplication_new(argc, &argv[0], &outptr_QGuiApplication, &outptr_QCoreApplication, &outptr_QObject)
	ret := newQGuiApplication(outptr_QGuiApplication, outptr_QCoreApplication, outptr_QObject)
	ret.isSubclass = true
	return ret
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

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	var outptr_QGuiApplication *C.QGuiApplication = nil
	var outptr_QCoreApplication *C.QCoreApplication = nil
	var outptr_QObject *C.QObject = nil

	C.QGuiApplication_new2(argc, &argv[0], (C.int)(param3), &outptr_QGuiApplication, &outptr_QCoreApplication, &outptr_QObject)
	ret := newQGuiApplication(outptr_QGuiApplication, outptr_QCoreApplication, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QGuiApplication) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGuiApplication_MetaObject(this.h)))
}

func (this *QGuiApplication) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGuiApplication_Metacast(this.h, param1_Cstring))
}

func QGuiApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_SetApplicationDisplayName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QGuiApplication_SetApplicationDisplayName(name_ms)
}

func QGuiApplication_ApplicationDisplayName() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_ApplicationDisplayName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_SetDesktopFileName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QGuiApplication_SetDesktopFileName(name_ms)
}

func QGuiApplication_DesktopFileName() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_DesktopFileName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_AllWindows() []*QWindow {
	var _ma C.struct_miqt_array = C.QGuiApplication_AllWindows()
	_ret := make([]*QWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQWindow(unsafe.Pointer(_outCast[i]), nil, nil)
	}
	return _ret
}

func QGuiApplication_TopLevelWindows() []*QWindow {
	var _ma C.struct_miqt_array = C.QGuiApplication_TopLevelWindows()
	_ret := make([]*QWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQWindow(unsafe.Pointer(_outCast[i]), nil, nil)
	}
	return _ret
}

func QGuiApplication_TopLevelAt(pos *QPoint) *QWindow {
	return UnsafeNewQWindow(unsafe.Pointer(C.QGuiApplication_TopLevelAt(pos.cPointer())), nil, nil)
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
	var _ms C.struct_miqt_string = C.QGuiApplication_PlatformName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_ModalWindow() *QWindow {
	return UnsafeNewQWindow(unsafe.Pointer(C.QGuiApplication_ModalWindow()), nil, nil)
}

func QGuiApplication_FocusWindow() *QWindow {
	return UnsafeNewQWindow(unsafe.Pointer(C.QGuiApplication_FocusWindow()), nil, nil)
}

func QGuiApplication_FocusObject() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QGuiApplication_FocusObject()))
}

func QGuiApplication_PrimaryScreen() *QScreen {
	return UnsafeNewQScreen(unsafe.Pointer(C.QGuiApplication_PrimaryScreen()), nil)
}

func QGuiApplication_Screens() []*QScreen {
	var _ma C.struct_miqt_array = C.QGuiApplication_Screens()
	_ret := make([]*QScreen, int(_ma.len))
	_outCast := (*[0xffff]*C.QScreen)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQScreen(unsafe.Pointer(_outCast[i]), nil)
	}
	return _ret
}

func QGuiApplication_ScreenAt(point *QPoint) *QScreen {
	return UnsafeNewQScreen(unsafe.Pointer(C.QGuiApplication_ScreenAt(point.cPointer())), nil)
}

func (this *QGuiApplication) DevicePixelRatio() float64 {
	return (float64)(C.QGuiApplication_DevicePixelRatio(this.h))
}

func QGuiApplication_OverrideCursor() *QCursor {
	return UnsafeNewQCursor(unsafe.Pointer(C.QGuiApplication_OverrideCursor()))
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
	return UnsafeNewQClipboard(unsafe.Pointer(C.QGuiApplication_Clipboard()), nil)
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

func QGuiApplication_KeyboardModifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGuiApplication_KeyboardModifiers())
}

func QGuiApplication_QueryKeyboardModifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGuiApplication_QueryKeyboardModifiers())
}

func QGuiApplication_MouseButtons() MouseButton {
	return (MouseButton)(C.QGuiApplication_MouseButtons())
}

func QGuiApplication_SetLayoutDirection(direction LayoutDirection) {
	C.QGuiApplication_SetLayoutDirection((C.int)(direction))
}

func QGuiApplication_LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QGuiApplication_LayoutDirection())
}

func QGuiApplication_IsRightToLeft() bool {
	return (bool)(C.QGuiApplication_IsRightToLeft())
}

func QGuiApplication_IsLeftToRight() bool {
	return (bool)(C.QGuiApplication_IsLeftToRight())
}

func QGuiApplication_StyleHints() *QStyleHints {
	return UnsafeNewQStyleHints(unsafe.Pointer(C.QGuiApplication_StyleHints()), nil)
}

func QGuiApplication_SetDesktopSettingsAware(on bool) {
	C.QGuiApplication_SetDesktopSettingsAware((C.bool)(on))
}

func QGuiApplication_DesktopSettingsAware() bool {
	return (bool)(C.QGuiApplication_DesktopSettingsAware())
}

func QGuiApplication_InputMethod() *QInputMethod {
	return UnsafeNewQInputMethod(unsafe.Pointer(C.QGuiApplication_InputMethod()), nil)
}

func QGuiApplication_SetQuitOnLastWindowClosed(quit bool) {
	C.QGuiApplication_SetQuitOnLastWindowClosed((C.bool)(quit))
}

func QGuiApplication_QuitOnLastWindowClosed() bool {
	return (bool)(C.QGuiApplication_QuitOnLastWindowClosed())
}

func QGuiApplication_ApplicationState() ApplicationState {
	return (ApplicationState)(C.QGuiApplication_ApplicationState())
}

func QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy HighDpiScaleFactorRoundingPolicy) {
	C.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy((C.int)(policy))
}

func QGuiApplication_HighDpiScaleFactorRoundingPolicy() HighDpiScaleFactorRoundingPolicy {
	return (HighDpiScaleFactorRoundingPolicy)(C.QGuiApplication_HighDpiScaleFactorRoundingPolicy())
}

func QGuiApplication_Exec() int {
	return (int)(C.QGuiApplication_Exec())
}

func (this *QGuiApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	return (bool)(C.QGuiApplication_Notify(this.h, param1.cPointer(), param2.cPointer()))
}

func (this *QGuiApplication) IsSessionRestored() bool {
	return (bool)(C.QGuiApplication_IsSessionRestored(this.h))
}

func (this *QGuiApplication) SessionId() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_SessionId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGuiApplication) SessionKey() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_SessionKey(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGuiApplication) IsSavingSession() bool {
	return (bool)(C.QGuiApplication_IsSavingSession(this.h))
}

func QGuiApplication_IsFallbackSessionManagementEnabled() bool {
	return (bool)(C.QGuiApplication_IsFallbackSessionManagementEnabled())
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
	C.QGuiApplication_connect_FontDatabaseChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FontDatabaseChanged
func miqt_exec_callback_QGuiApplication_FontDatabaseChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) ScreenAdded(screen *QScreen) {
	C.QGuiApplication_ScreenAdded(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnScreenAdded(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_ScreenAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ScreenAdded
func miqt_exec_callback_QGuiApplication_ScreenAdded(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQScreen(unsafe.Pointer(screen), nil)

	gofunc(slotval1)
}

func (this *QGuiApplication) ScreenRemoved(screen *QScreen) {
	C.QGuiApplication_ScreenRemoved(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnScreenRemoved(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_ScreenRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ScreenRemoved
func miqt_exec_callback_QGuiApplication_ScreenRemoved(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQScreen(unsafe.Pointer(screen), nil)

	gofunc(slotval1)
}

func (this *QGuiApplication) PrimaryScreenChanged(screen *QScreen) {
	C.QGuiApplication_PrimaryScreenChanged(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnPrimaryScreenChanged(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_PrimaryScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_PrimaryScreenChanged
func miqt_exec_callback_QGuiApplication_PrimaryScreenChanged(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQScreen(unsafe.Pointer(screen), nil)

	gofunc(slotval1)
}

func (this *QGuiApplication) LastWindowClosed() {
	C.QGuiApplication_LastWindowClosed(this.h)
}
func (this *QGuiApplication) OnLastWindowClosed(slot func()) {
	C.QGuiApplication_connect_LastWindowClosed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_LastWindowClosed
func miqt_exec_callback_QGuiApplication_LastWindowClosed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) FocusObjectChanged(focusObject *QObject) {
	C.QGuiApplication_FocusObjectChanged(this.h, focusObject.cPointer())
}
func (this *QGuiApplication) OnFocusObjectChanged(slot func(focusObject *QObject)) {
	C.QGuiApplication_connect_FocusObjectChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FocusObjectChanged
func miqt_exec_callback_QGuiApplication_FocusObjectChanged(cb C.intptr_t, focusObject *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(focusObject *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(focusObject))

	gofunc(slotval1)
}

func (this *QGuiApplication) FocusWindowChanged(focusWindow *QWindow) {
	C.QGuiApplication_FocusWindowChanged(this.h, focusWindow.cPointer())
}
func (this *QGuiApplication) OnFocusWindowChanged(slot func(focusWindow *QWindow)) {
	C.QGuiApplication_connect_FocusWindowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FocusWindowChanged
func miqt_exec_callback_QGuiApplication_FocusWindowChanged(cb C.intptr_t, focusWindow *C.QWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(focusWindow *QWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWindow(unsafe.Pointer(focusWindow), nil, nil)

	gofunc(slotval1)
}

func (this *QGuiApplication) ApplicationStateChanged(state ApplicationState) {
	C.QGuiApplication_ApplicationStateChanged(this.h, (C.int)(state))
}
func (this *QGuiApplication) OnApplicationStateChanged(slot func(state ApplicationState)) {
	C.QGuiApplication_connect_ApplicationStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ApplicationStateChanged
func miqt_exec_callback_QGuiApplication_ApplicationStateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state ApplicationState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ApplicationState)(state)

	gofunc(slotval1)
}

func (this *QGuiApplication) LayoutDirectionChanged(direction LayoutDirection) {
	C.QGuiApplication_LayoutDirectionChanged(this.h, (C.int)(direction))
}
func (this *QGuiApplication) OnLayoutDirectionChanged(slot func(direction LayoutDirection)) {
	C.QGuiApplication_connect_LayoutDirectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_LayoutDirectionChanged
func miqt_exec_callback_QGuiApplication_LayoutDirectionChanged(cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(direction LayoutDirection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (LayoutDirection)(direction)

	gofunc(slotval1)
}

func (this *QGuiApplication) CommitDataRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_CommitDataRequest(this.h, sessionManager.cPointer())
}
func (this *QGuiApplication) OnCommitDataRequest(slot func(sessionManager *QSessionManager)) {
	C.QGuiApplication_connect_CommitDataRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_CommitDataRequest
func miqt_exec_callback_QGuiApplication_CommitDataRequest(cb C.intptr_t, sessionManager *C.QSessionManager) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sessionManager *QSessionManager))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSessionManager(unsafe.Pointer(sessionManager), nil)

	gofunc(slotval1)
}

func (this *QGuiApplication) SaveStateRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_SaveStateRequest(this.h, sessionManager.cPointer())
}
func (this *QGuiApplication) OnSaveStateRequest(slot func(sessionManager *QSessionManager)) {
	C.QGuiApplication_connect_SaveStateRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_SaveStateRequest
func miqt_exec_callback_QGuiApplication_SaveStateRequest(cb C.intptr_t, sessionManager *C.QSessionManager) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sessionManager *QSessionManager))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSessionManager(unsafe.Pointer(sessionManager), nil)

	gofunc(slotval1)
}

func (this *QGuiApplication) PaletteChanged(pal *QPalette) {
	C.QGuiApplication_PaletteChanged(this.h, pal.cPointer())
}
func (this *QGuiApplication) OnPaletteChanged(slot func(pal *QPalette)) {
	C.QGuiApplication_connect_PaletteChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_PaletteChanged
func miqt_exec_callback_QGuiApplication_PaletteChanged(cb C.intptr_t, pal *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pal *QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPalette(unsafe.Pointer(pal))

	gofunc(slotval1)
}

func (this *QGuiApplication) ApplicationDisplayNameChanged() {
	C.QGuiApplication_ApplicationDisplayNameChanged(this.h)
}
func (this *QGuiApplication) OnApplicationDisplayNameChanged(slot func()) {
	C.QGuiApplication_connect_ApplicationDisplayNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged
func miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) FontChanged(font *QFont) {
	C.QGuiApplication_FontChanged(this.h, font.cPointer())
}
func (this *QGuiApplication) OnFontChanged(slot func(font *QFont)) {
	C.QGuiApplication_connect_FontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FontChanged
func miqt_exec_callback_QGuiApplication_FontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFont(unsafe.Pointer(font))

	gofunc(slotval1)
}

func QGuiApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGuiApplication) callVirtualBase_Notify(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QGuiApplication_virtualbase_Notify(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QGuiApplication) OnNotify(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	C.QGuiApplication_override_virtual_Notify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_Notify
func miqt_exec_callback_QGuiApplication_Notify(self *C.QGuiApplication, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QGuiApplication{h: self}).callVirtualBase_Notify, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGuiApplication) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QGuiApplication_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QGuiApplication) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	C.QGuiApplication_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_Event
func miqt_exec_callback_QGuiApplication_Event(self *C.QGuiApplication, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QGuiApplication{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QGuiApplication) Delete() {
	C.QGuiApplication_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGuiApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QGuiApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

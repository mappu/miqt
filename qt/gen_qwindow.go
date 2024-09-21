package qt

/*

#include "gen_qwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWindow__Visibility int

const (
	QWindow__Hidden              QWindow__Visibility = 0
	QWindow__AutomaticVisibility QWindow__Visibility = 1
	QWindow__Windowed            QWindow__Visibility = 2
	QWindow__Minimized           QWindow__Visibility = 3
	QWindow__Maximized           QWindow__Visibility = 4
	QWindow__FullScreen          QWindow__Visibility = 5
)

type QWindow__AncestorMode int

const (
	QWindow__ExcludeTransients QWindow__AncestorMode = 0
	QWindow__IncludeTransients QWindow__AncestorMode = 1
)

type QWindow struct {
	h *C.QWindow
	*QObject
	*QSurface
}

func (this *QWindow) cPointer() *C.QWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWindow(h *C.QWindow) *QWindow {
	if h == nil {
		return nil
	}
	return &QWindow{h: h, QObject: newQObject_U(unsafe.Pointer(h)), QSurface: newQSurface_U(unsafe.Pointer(h))}
}

func newQWindow_U(h unsafe.Pointer) *QWindow {
	return newQWindow((*C.QWindow)(h))
}

// NewQWindow constructs a new QWindow object.
func NewQWindow() *QWindow {
	ret := C.QWindow_new()
	return newQWindow(ret)
}

// NewQWindow2 constructs a new QWindow object.
func NewQWindow2(parent *QWindow) *QWindow {
	ret := C.QWindow_new2(parent.cPointer())
	return newQWindow(ret)
}

// NewQWindow3 constructs a new QWindow object.
func NewQWindow3(screen *QScreen) *QWindow {
	ret := C.QWindow_new3(screen.cPointer())
	return newQWindow(ret)
}

func (this *QWindow) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QWindow_MetaObject(this.h)))
}

func (this *QWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QWindow_Metacast(this.h, param1_Cstring)
}

func QWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWindow_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QWindow_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWindow) SetSurfaceType(surfaceType QSurface__SurfaceType) {
	C.QWindow_SetSurfaceType(this.h, (C.int)(surfaceType))
}

func (this *QWindow) SurfaceType() QSurface__SurfaceType {
	return (QSurface__SurfaceType)(C.QWindow_SurfaceType(this.h))
}

func (this *QWindow) IsVisible() bool {
	return (bool)(C.QWindow_IsVisible(this.h))
}

func (this *QWindow) Visibility() QWindow__Visibility {
	return (QWindow__Visibility)(C.QWindow_Visibility(this.h))
}

func (this *QWindow) SetVisibility(v QWindow__Visibility) {
	C.QWindow_SetVisibility(this.h, (C.int)(v))
}

func (this *QWindow) Create() {
	C.QWindow_Create(this.h)
}

func (this *QWindow) WinId() uintptr {
	return (uintptr)(C.QWindow_WinId(this.h))
}

func (this *QWindow) Parent(mode QWindow__AncestorMode) *QWindow {
	return newQWindow_U(unsafe.Pointer(C.QWindow_Parent(this.h, (C.int)(mode))))
}

func (this *QWindow) Parent2() *QWindow {
	return newQWindow_U(unsafe.Pointer(C.QWindow_Parent2(this.h)))
}

func (this *QWindow) SetParent(parent *QWindow) {
	C.QWindow_SetParent(this.h, parent.cPointer())
}

func (this *QWindow) IsTopLevel() bool {
	return (bool)(C.QWindow_IsTopLevel(this.h))
}

func (this *QWindow) IsModal() bool {
	return (bool)(C.QWindow_IsModal(this.h))
}

func (this *QWindow) Modality() WindowModality {
	return (WindowModality)(C.QWindow_Modality(this.h))
}

func (this *QWindow) SetModality(modality WindowModality) {
	C.QWindow_SetModality(this.h, (C.int)(modality))
}

func (this *QWindow) SetFormat(format *QSurfaceFormat) {
	C.QWindow_SetFormat(this.h, format.cPointer())
}

func (this *QWindow) Format() *QSurfaceFormat {
	_ret := C.QWindow_Format(this.h)
	_goptr := newQSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) RequestedFormat() *QSurfaceFormat {
	_ret := C.QWindow_RequestedFormat(this.h)
	_goptr := newQSurfaceFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetFlags(flags WindowType) {
	C.QWindow_SetFlags(this.h, (C.int)(flags))
}

func (this *QWindow) Flags() WindowType {
	return (WindowType)(C.QWindow_Flags(this.h))
}

func (this *QWindow) SetFlag(param1 WindowType) {
	C.QWindow_SetFlag(this.h, (C.int)(param1))
}

func (this *QWindow) Type() WindowType {
	return (WindowType)(C.QWindow_Type(this.h))
}

func (this *QWindow) Title() string {
	var _ms *C.struct_miqt_string = C.QWindow_Title(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWindow) SetOpacity(level float64) {
	C.QWindow_SetOpacity(this.h, (C.double)(level))
}

func (this *QWindow) Opacity() float64 {
	return (float64)(C.QWindow_Opacity(this.h))
}

func (this *QWindow) SetMask(region *QRegion) {
	C.QWindow_SetMask(this.h, region.cPointer())
}

func (this *QWindow) Mask() *QRegion {
	_ret := C.QWindow_Mask(this.h)
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) IsActive() bool {
	return (bool)(C.QWindow_IsActive(this.h))
}

func (this *QWindow) ReportContentOrientationChange(orientation ScreenOrientation) {
	C.QWindow_ReportContentOrientationChange(this.h, (C.int)(orientation))
}

func (this *QWindow) ContentOrientation() ScreenOrientation {
	return (ScreenOrientation)(C.QWindow_ContentOrientation(this.h))
}

func (this *QWindow) DevicePixelRatio() float64 {
	return (float64)(C.QWindow_DevicePixelRatio(this.h))
}

func (this *QWindow) WindowState() WindowState {
	return (WindowState)(C.QWindow_WindowState(this.h))
}

func (this *QWindow) WindowStates() WindowState {
	return (WindowState)(C.QWindow_WindowStates(this.h))
}

func (this *QWindow) SetWindowState(state WindowState) {
	C.QWindow_SetWindowState(this.h, (C.int)(state))
}

func (this *QWindow) SetWindowStates(states WindowState) {
	C.QWindow_SetWindowStates(this.h, (C.int)(states))
}

func (this *QWindow) SetTransientParent(parent *QWindow) {
	C.QWindow_SetTransientParent(this.h, parent.cPointer())
}

func (this *QWindow) TransientParent() *QWindow {
	return newQWindow_U(unsafe.Pointer(C.QWindow_TransientParent(this.h)))
}

func (this *QWindow) IsAncestorOf(child *QWindow) bool {
	return (bool)(C.QWindow_IsAncestorOf(this.h, child.cPointer()))
}

func (this *QWindow) IsExposed() bool {
	return (bool)(C.QWindow_IsExposed(this.h))
}

func (this *QWindow) MinimumWidth() int {
	return (int)(C.QWindow_MinimumWidth(this.h))
}

func (this *QWindow) MinimumHeight() int {
	return (int)(C.QWindow_MinimumHeight(this.h))
}

func (this *QWindow) MaximumWidth() int {
	return (int)(C.QWindow_MaximumWidth(this.h))
}

func (this *QWindow) MaximumHeight() int {
	return (int)(C.QWindow_MaximumHeight(this.h))
}

func (this *QWindow) MinimumSize() *QSize {
	_ret := C.QWindow_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) MaximumSize() *QSize {
	_ret := C.QWindow_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) BaseSize() *QSize {
	_ret := C.QWindow_BaseSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SizeIncrement() *QSize {
	_ret := C.QWindow_SizeIncrement(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetMinimumSize(size *QSize) {
	C.QWindow_SetMinimumSize(this.h, size.cPointer())
}

func (this *QWindow) SetMaximumSize(size *QSize) {
	C.QWindow_SetMaximumSize(this.h, size.cPointer())
}

func (this *QWindow) SetBaseSize(size *QSize) {
	C.QWindow_SetBaseSize(this.h, size.cPointer())
}

func (this *QWindow) SetSizeIncrement(size *QSize) {
	C.QWindow_SetSizeIncrement(this.h, size.cPointer())
}

func (this *QWindow) Geometry() *QRect {
	_ret := C.QWindow_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FrameMargins() *QMargins {
	_ret := C.QWindow_FrameMargins(this.h)
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FrameGeometry() *QRect {
	_ret := C.QWindow_FrameGeometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FramePosition() *QPoint {
	_ret := C.QWindow_FramePosition(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetFramePosition(point *QPoint) {
	C.QWindow_SetFramePosition(this.h, point.cPointer())
}

func (this *QWindow) Width() int {
	return (int)(C.QWindow_Width(this.h))
}

func (this *QWindow) Height() int {
	return (int)(C.QWindow_Height(this.h))
}

func (this *QWindow) X() int {
	return (int)(C.QWindow_X(this.h))
}

func (this *QWindow) Y() int {
	return (int)(C.QWindow_Y(this.h))
}

func (this *QWindow) Size() *QSize {
	_ret := C.QWindow_Size(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Position() *QPoint {
	_ret := C.QWindow_Position(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetPosition(pt *QPoint) {
	C.QWindow_SetPosition(this.h, pt.cPointer())
}

func (this *QWindow) SetPosition2(posx int, posy int) {
	C.QWindow_SetPosition2(this.h, (C.int)(posx), (C.int)(posy))
}

func (this *QWindow) Resize(newSize *QSize) {
	C.QWindow_Resize(this.h, newSize.cPointer())
}

func (this *QWindow) Resize2(w int, h int) {
	C.QWindow_Resize2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWindow) SetFilePath(filePath string) {
	filePath_ms := miqt_strdupg(filePath)
	defer C.free(filePath_ms)
	C.QWindow_SetFilePath(this.h, (*C.struct_miqt_string)(filePath_ms))
}

func (this *QWindow) FilePath() string {
	var _ms *C.struct_miqt_string = C.QWindow_FilePath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWindow) SetIcon(icon *QIcon) {
	C.QWindow_SetIcon(this.h, icon.cPointer())
}

func (this *QWindow) Icon() *QIcon {
	_ret := C.QWindow_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Destroy() {
	C.QWindow_Destroy(this.h)
}

func (this *QWindow) SetKeyboardGrabEnabled(grab bool) bool {
	return (bool)(C.QWindow_SetKeyboardGrabEnabled(this.h, (C.bool)(grab)))
}

func (this *QWindow) SetMouseGrabEnabled(grab bool) bool {
	return (bool)(C.QWindow_SetMouseGrabEnabled(this.h, (C.bool)(grab)))
}

func (this *QWindow) Screen() *QScreen {
	return newQScreen_U(unsafe.Pointer(C.QWindow_Screen(this.h)))
}

func (this *QWindow) SetScreen(screen *QScreen) {
	C.QWindow_SetScreen(this.h, screen.cPointer())
}

func (this *QWindow) AccessibleRoot() *QAccessibleInterface {
	return newQAccessibleInterface_U(unsafe.Pointer(C.QWindow_AccessibleRoot(this.h)))
}

func (this *QWindow) FocusObject() *QObject {
	return newQObject_U(unsafe.Pointer(C.QWindow_FocusObject(this.h)))
}

func (this *QWindow) MapToGlobal(pos *QPoint) *QPoint {
	_ret := C.QWindow_MapToGlobal(this.h, pos.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) MapFromGlobal(pos *QPoint) *QPoint {
	_ret := C.QWindow_MapFromGlobal(this.h, pos.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Cursor() *QCursor {
	_ret := C.QWindow_Cursor(this.h)
	_goptr := newQCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetCursor(cursor *QCursor) {
	C.QWindow_SetCursor(this.h, cursor.cPointer())
}

func (this *QWindow) UnsetCursor() {
	C.QWindow_UnsetCursor(this.h)
}

func QWindow_FromWinId(id uintptr) *QWindow {
	return newQWindow_U(unsafe.Pointer(C.QWindow_FromWinId((C.uintptr_t)(id))))
}

func (this *QWindow) RequestActivate() {
	C.QWindow_RequestActivate(this.h)
}

func (this *QWindow) SetVisible(visible bool) {
	C.QWindow_SetVisible(this.h, (C.bool)(visible))
}

func (this *QWindow) Show() {
	C.QWindow_Show(this.h)
}

func (this *QWindow) Hide() {
	C.QWindow_Hide(this.h)
}

func (this *QWindow) ShowMinimized() {
	C.QWindow_ShowMinimized(this.h)
}

func (this *QWindow) ShowMaximized() {
	C.QWindow_ShowMaximized(this.h)
}

func (this *QWindow) ShowFullScreen() {
	C.QWindow_ShowFullScreen(this.h)
}

func (this *QWindow) ShowNormal() {
	C.QWindow_ShowNormal(this.h)
}

func (this *QWindow) Close() bool {
	return (bool)(C.QWindow_Close(this.h))
}

func (this *QWindow) Raise() {
	C.QWindow_Raise(this.h)
}

func (this *QWindow) Lower() {
	C.QWindow_Lower(this.h)
}

func (this *QWindow) StartSystemResize(edges Edge) bool {
	return (bool)(C.QWindow_StartSystemResize(this.h, (C.int)(edges)))
}

func (this *QWindow) StartSystemMove() bool {
	return (bool)(C.QWindow_StartSystemMove(this.h))
}

func (this *QWindow) SetTitle(title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QWindow_SetTitle(this.h, (*C.struct_miqt_string)(title_ms))
}

func (this *QWindow) SetX(arg int) {
	C.QWindow_SetX(this.h, (C.int)(arg))
}

func (this *QWindow) SetY(arg int) {
	C.QWindow_SetY(this.h, (C.int)(arg))
}

func (this *QWindow) SetWidth(arg int) {
	C.QWindow_SetWidth(this.h, (C.int)(arg))
}

func (this *QWindow) SetHeight(arg int) {
	C.QWindow_SetHeight(this.h, (C.int)(arg))
}

func (this *QWindow) SetGeometry(posx int, posy int, w int, h int) {
	C.QWindow_SetGeometry(this.h, (C.int)(posx), (C.int)(posy), (C.int)(w), (C.int)(h))
}

func (this *QWindow) SetGeometryWithRect(rect *QRect) {
	C.QWindow_SetGeometryWithRect(this.h, rect.cPointer())
}

func (this *QWindow) SetMinimumWidth(w int) {
	C.QWindow_SetMinimumWidth(this.h, (C.int)(w))
}

func (this *QWindow) SetMinimumHeight(h int) {
	C.QWindow_SetMinimumHeight(this.h, (C.int)(h))
}

func (this *QWindow) SetMaximumWidth(w int) {
	C.QWindow_SetMaximumWidth(this.h, (C.int)(w))
}

func (this *QWindow) SetMaximumHeight(h int) {
	C.QWindow_SetMaximumHeight(this.h, (C.int)(h))
}

func (this *QWindow) Alert(msec int) {
	C.QWindow_Alert(this.h, (C.int)(msec))
}

func (this *QWindow) RequestUpdate() {
	C.QWindow_RequestUpdate(this.h)
}

func (this *QWindow) ScreenChanged(screen *QScreen) {
	C.QWindow_ScreenChanged(this.h, screen.cPointer())
}
func (this *QWindow) OnScreenChanged(slot func(screen *QScreen)) {
	C.QWindow_connect_ScreenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_ScreenChanged
func miqt_exec_callback_QWindow_ScreenChanged(cb *C.void, screen *C.QScreen) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen_U(unsafe.Pointer(screen))

	gofunc(slotval1)
}

func (this *QWindow) ModalityChanged(modality WindowModality) {
	C.QWindow_ModalityChanged(this.h, (C.int)(modality))
}
func (this *QWindow) OnModalityChanged(slot func(modality WindowModality)) {
	C.QWindow_connect_ModalityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_ModalityChanged
func miqt_exec_callback_QWindow_ModalityChanged(cb *C.void, modality C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(modality WindowModality))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (WindowModality)(modality)

	gofunc(slotval1)
}

func (this *QWindow) WindowStateChanged(windowState WindowState) {
	C.QWindow_WindowStateChanged(this.h, (C.int)(windowState))
}
func (this *QWindow) OnWindowStateChanged(slot func(windowState WindowState)) {
	C.QWindow_connect_WindowStateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_WindowStateChanged
func miqt_exec_callback_QWindow_WindowStateChanged(cb *C.void, windowState C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(windowState WindowState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (WindowState)(windowState)

	gofunc(slotval1)
}

func (this *QWindow) WindowTitleChanged(title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QWindow_WindowTitleChanged(this.h, (*C.struct_miqt_string)(title_ms))
}
func (this *QWindow) OnWindowTitleChanged(slot func(title string)) {
	C.QWindow_connect_WindowTitleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_WindowTitleChanged
func miqt_exec_callback_QWindow_WindowTitleChanged(cb *C.void, title *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(title string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var title_ms *C.struct_miqt_string = title
	title_ret := C.GoStringN(&title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms))
	slotval1 := title_ret

	gofunc(slotval1)
}

func (this *QWindow) XChanged(arg int) {
	C.QWindow_XChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnXChanged(slot func(arg int)) {
	C.QWindow_connect_XChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_XChanged
func miqt_exec_callback_QWindow_XChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) YChanged(arg int) {
	C.QWindow_YChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnYChanged(slot func(arg int)) {
	C.QWindow_connect_YChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_YChanged
func miqt_exec_callback_QWindow_YChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) WidthChanged(arg int) {
	C.QWindow_WidthChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnWidthChanged(slot func(arg int)) {
	C.QWindow_connect_WidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_WidthChanged
func miqt_exec_callback_QWindow_WidthChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) HeightChanged(arg int) {
	C.QWindow_HeightChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnHeightChanged(slot func(arg int)) {
	C.QWindow_connect_HeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_HeightChanged
func miqt_exec_callback_QWindow_HeightChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MinimumWidthChanged(arg int) {
	C.QWindow_MinimumWidthChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMinimumWidthChanged(slot func(arg int)) {
	C.QWindow_connect_MinimumWidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_MinimumWidthChanged
func miqt_exec_callback_QWindow_MinimumWidthChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MinimumHeightChanged(arg int) {
	C.QWindow_MinimumHeightChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMinimumHeightChanged(slot func(arg int)) {
	C.QWindow_connect_MinimumHeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_MinimumHeightChanged
func miqt_exec_callback_QWindow_MinimumHeightChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MaximumWidthChanged(arg int) {
	C.QWindow_MaximumWidthChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMaximumWidthChanged(slot func(arg int)) {
	C.QWindow_connect_MaximumWidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_MaximumWidthChanged
func miqt_exec_callback_QWindow_MaximumWidthChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MaximumHeightChanged(arg int) {
	C.QWindow_MaximumHeightChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMaximumHeightChanged(slot func(arg int)) {
	C.QWindow_connect_MaximumHeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_MaximumHeightChanged
func miqt_exec_callback_QWindow_MaximumHeightChanged(cb *C.void, arg C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) VisibleChanged(arg bool) {
	C.QWindow_VisibleChanged(this.h, (C.bool)(arg))
}
func (this *QWindow) OnVisibleChanged(slot func(arg bool)) {
	C.QWindow_connect_VisibleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_VisibleChanged
func miqt_exec_callback_QWindow_VisibleChanged(cb *C.void, arg C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(arg bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(arg)

	gofunc(slotval1)
}

func (this *QWindow) VisibilityChanged(visibility QWindow__Visibility) {
	C.QWindow_VisibilityChanged(this.h, (C.int)(visibility))
}
func (this *QWindow) OnVisibilityChanged(slot func(visibility QWindow__Visibility)) {
	C.QWindow_connect_VisibilityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_VisibilityChanged
func miqt_exec_callback_QWindow_VisibilityChanged(cb *C.void, visibility C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(visibility QWindow__Visibility))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWindow__Visibility)(visibility)

	gofunc(slotval1)
}

func (this *QWindow) ActiveChanged() {
	C.QWindow_ActiveChanged(this.h)
}
func (this *QWindow) OnActiveChanged(slot func()) {
	C.QWindow_connect_ActiveChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_ActiveChanged
func miqt_exec_callback_QWindow_ActiveChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWindow) ContentOrientationChanged(orientation ScreenOrientation) {
	C.QWindow_ContentOrientationChanged(this.h, (C.int)(orientation))
}
func (this *QWindow) OnContentOrientationChanged(slot func(orientation ScreenOrientation)) {
	C.QWindow_connect_ContentOrientationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_ContentOrientationChanged
func miqt_exec_callback_QWindow_ContentOrientationChanged(cb *C.void, orientation C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(orientation ScreenOrientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ScreenOrientation)(orientation)

	gofunc(slotval1)
}

func (this *QWindow) FocusObjectChanged(object *QObject) {
	C.QWindow_FocusObjectChanged(this.h, object.cPointer())
}
func (this *QWindow) OnFocusObjectChanged(slot func(object *QObject)) {
	C.QWindow_connect_FocusObjectChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_FocusObjectChanged
func miqt_exec_callback_QWindow_FocusObjectChanged(cb *C.void, object *C.QObject) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(object *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject_U(unsafe.Pointer(object))

	gofunc(slotval1)
}

func (this *QWindow) OpacityChanged(opacity float64) {
	C.QWindow_OpacityChanged(this.h, (C.double)(opacity))
}
func (this *QWindow) OnOpacityChanged(slot func(opacity float64)) {
	C.QWindow_connect_OpacityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_OpacityChanged
func miqt_exec_callback_QWindow_OpacityChanged(cb *C.void, opacity C.double) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(opacity float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(opacity)

	gofunc(slotval1)
}

func (this *QWindow) TransientParentChanged(transientParent *QWindow) {
	C.QWindow_TransientParentChanged(this.h, transientParent.cPointer())
}
func (this *QWindow) OnTransientParentChanged(slot func(transientParent *QWindow)) {
	C.QWindow_connect_TransientParentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QWindow_TransientParentChanged
func miqt_exec_callback_QWindow_TransientParentChanged(cb *C.void, transientParent *C.QWindow) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(transientParent *QWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWindow_U(unsafe.Pointer(transientParent))

	gofunc(slotval1)
}

func QWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWindow_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QWindow) SetFlag2(param1 WindowType, on bool) {
	C.QWindow_SetFlag2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QWindow) IsAncestorOf2(child *QWindow, mode QWindow__AncestorMode) bool {
	return (bool)(C.QWindow_IsAncestorOf2(this.h, child.cPointer(), (C.int)(mode)))
}

// Delete this object from C++ memory.
func (this *QWindow) Delete() {
	C.QWindow_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

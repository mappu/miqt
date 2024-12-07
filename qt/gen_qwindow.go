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
	h          *C.QWindow
	isSubclass bool
	*QObject
	*QSurface
}

func (this *QWindow) cPointer() *C.QWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWindow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWindow constructs the type using only CGO pointers.
func newQWindow(h *C.QWindow, h_QObject *C.QObject, h_QSurface *C.QSurface) *QWindow {
	if h == nil {
		return nil
	}
	return &QWindow{h: h,
		QObject:  newQObject(h_QObject),
		QSurface: newQSurface(h_QSurface)}
}

// UnsafeNewQWindow constructs the type using only unsafe pointers.
func UnsafeNewQWindow(h unsafe.Pointer, h_QObject unsafe.Pointer, h_QSurface unsafe.Pointer) *QWindow {
	if h == nil {
		return nil
	}

	return &QWindow{h: (*C.QWindow)(h),
		QObject:  UnsafeNewQObject(h_QObject),
		QSurface: UnsafeNewQSurface(h_QSurface)}
}

// NewQWindow constructs a new QWindow object.
func NewQWindow() *QWindow {
	var outptr_QWindow *C.QWindow = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QSurface *C.QSurface = nil

	C.QWindow_new(&outptr_QWindow, &outptr_QObject, &outptr_QSurface)
	ret := newQWindow(outptr_QWindow, outptr_QObject, outptr_QSurface)
	ret.isSubclass = true
	return ret
}

// NewQWindow2 constructs a new QWindow object.
func NewQWindow2(parent *QWindow) *QWindow {
	var outptr_QWindow *C.QWindow = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QSurface *C.QSurface = nil

	C.QWindow_new2(parent.cPointer(), &outptr_QWindow, &outptr_QObject, &outptr_QSurface)
	ret := newQWindow(outptr_QWindow, outptr_QObject, outptr_QSurface)
	ret.isSubclass = true
	return ret
}

// NewQWindow3 constructs a new QWindow object.
func NewQWindow3(screen *QScreen) *QWindow {
	var outptr_QWindow *C.QWindow = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QSurface *C.QSurface = nil

	C.QWindow_new3(screen.cPointer(), &outptr_QWindow, &outptr_QObject, &outptr_QSurface)
	ret := newQWindow(outptr_QWindow, outptr_QObject, outptr_QSurface)
	ret.isSubclass = true
	return ret
}

func (this *QWindow) MetaObject() *QMetaObject {
	return newQMetaObject(C.QWindow_MetaObject(this.h))
}

func (this *QWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWindow_Metacast(this.h, param1_Cstring))
}

func QWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	return newQWindow(C.QWindow_Parent(this.h, (C.int)(mode)), nil, nil)
}

func (this *QWindow) Parent2() *QWindow {
	return newQWindow(C.QWindow_Parent2(this.h), nil, nil)
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
	_goptr := newQSurfaceFormat(C.QWindow_Format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) RequestedFormat() *QSurfaceFormat {
	_goptr := newQSurfaceFormat(C.QWindow_RequestedFormat(this.h))
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
	var _ms C.struct_miqt_string = C.QWindow_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	_goptr := newQRegion(C.QWindow_Mask(this.h))
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
	return newQWindow(C.QWindow_TransientParent(this.h), nil, nil)
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
	_goptr := newQSize(C.QWindow_MinimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) MaximumSize() *QSize {
	_goptr := newQSize(C.QWindow_MaximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) BaseSize() *QSize {
	_goptr := newQSize(C.QWindow_BaseSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SizeIncrement() *QSize {
	_goptr := newQSize(C.QWindow_SizeIncrement(this.h))
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
	_goptr := newQRect(C.QWindow_Geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FrameMargins() *QMargins {
	_goptr := newQMargins(C.QWindow_FrameMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FrameGeometry() *QRect {
	_goptr := newQRect(C.QWindow_FrameGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FramePosition() *QPoint {
	_goptr := newQPoint(C.QWindow_FramePosition(this.h))
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
	_goptr := newQSize(C.QWindow_Size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Position() *QPoint {
	_goptr := newQPoint(C.QWindow_Position(this.h))
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
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWindow_SetFilePath(this.h, filePath_ms)
}

func (this *QWindow) FilePath() string {
	var _ms C.struct_miqt_string = C.QWindow_FilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWindow) SetIcon(icon *QIcon) {
	C.QWindow_SetIcon(this.h, icon.cPointer())
}

func (this *QWindow) Icon() *QIcon {
	_goptr := newQIcon(C.QWindow_Icon(this.h))
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
	return newQScreen(C.QWindow_Screen(this.h), nil)
}

func (this *QWindow) SetScreen(screen *QScreen) {
	C.QWindow_SetScreen(this.h, screen.cPointer())
}

func (this *QWindow) AccessibleRoot() *QAccessibleInterface {
	return newQAccessibleInterface(C.QWindow_AccessibleRoot(this.h))
}

func (this *QWindow) FocusObject() *QObject {
	return newQObject(C.QWindow_FocusObject(this.h))
}

func (this *QWindow) MapToGlobal(pos *QPoint) *QPoint {
	_goptr := newQPoint(C.QWindow_MapToGlobal(this.h, pos.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) MapFromGlobal(pos *QPoint) *QPoint {
	_goptr := newQPoint(C.QWindow_MapFromGlobal(this.h, pos.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Cursor() *QCursor {
	_goptr := newQCursor(C.QWindow_Cursor(this.h))
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
	return newQWindow(C.QWindow_FromWinId((C.uintptr_t)(id)), nil, nil)
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
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWindow_SetTitle(this.h, title_ms)
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
	C.QWindow_connect_ScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ScreenChanged
func miqt_exec_callback_QWindow_ScreenChanged(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen(screen, nil)

	gofunc(slotval1)
}

func (this *QWindow) ModalityChanged(modality WindowModality) {
	C.QWindow_ModalityChanged(this.h, (C.int)(modality))
}
func (this *QWindow) OnModalityChanged(slot func(modality WindowModality)) {
	C.QWindow_connect_ModalityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ModalityChanged
func miqt_exec_callback_QWindow_ModalityChanged(cb C.intptr_t, modality C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(modality WindowModality))
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
	C.QWindow_connect_WindowStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_WindowStateChanged
func miqt_exec_callback_QWindow_WindowStateChanged(cb C.intptr_t, windowState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(windowState WindowState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (WindowState)(windowState)

	gofunc(slotval1)
}

func (this *QWindow) WindowTitleChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWindow_WindowTitleChanged(this.h, title_ms)
}
func (this *QWindow) OnWindowTitleChanged(slot func(title string)) {
	C.QWindow_connect_WindowTitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_WindowTitleChanged
func miqt_exec_callback_QWindow_WindowTitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(title string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var title_ms C.struct_miqt_string = title
	title_ret := C.GoStringN(title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms.data))
	slotval1 := title_ret

	gofunc(slotval1)
}

func (this *QWindow) XChanged(arg int) {
	C.QWindow_XChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnXChanged(slot func(arg int)) {
	C.QWindow_connect_XChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_XChanged
func miqt_exec_callback_QWindow_XChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_YChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_YChanged
func miqt_exec_callback_QWindow_YChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_WidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_WidthChanged
func miqt_exec_callback_QWindow_WidthChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_HeightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_HeightChanged
func miqt_exec_callback_QWindow_HeightChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_MinimumWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MinimumWidthChanged
func miqt_exec_callback_QWindow_MinimumWidthChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_MinimumHeightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MinimumHeightChanged
func miqt_exec_callback_QWindow_MinimumHeightChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_MaximumWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MaximumWidthChanged
func miqt_exec_callback_QWindow_MaximumWidthChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_MaximumHeightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MaximumHeightChanged
func miqt_exec_callback_QWindow_MaximumHeightChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
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
	C.QWindow_connect_VisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_VisibleChanged
func miqt_exec_callback_QWindow_VisibleChanged(cb C.intptr_t, arg C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg bool))
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
	C.QWindow_connect_VisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_VisibilityChanged
func miqt_exec_callback_QWindow_VisibilityChanged(cb C.intptr_t, visibility C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visibility QWindow__Visibility))
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
	C.QWindow_connect_ActiveChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ActiveChanged
func miqt_exec_callback_QWindow_ActiveChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWindow) ContentOrientationChanged(orientation ScreenOrientation) {
	C.QWindow_ContentOrientationChanged(this.h, (C.int)(orientation))
}
func (this *QWindow) OnContentOrientationChanged(slot func(orientation ScreenOrientation)) {
	C.QWindow_connect_ContentOrientationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ContentOrientationChanged
func miqt_exec_callback_QWindow_ContentOrientationChanged(cb C.intptr_t, orientation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(orientation ScreenOrientation))
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
	C.QWindow_connect_FocusObjectChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_FocusObjectChanged
func miqt_exec_callback_QWindow_FocusObjectChanged(cb C.intptr_t, object *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	gofunc(slotval1)
}

func (this *QWindow) OpacityChanged(opacity float64) {
	C.QWindow_OpacityChanged(this.h, (C.double)(opacity))
}
func (this *QWindow) OnOpacityChanged(slot func(opacity float64)) {
	C.QWindow_connect_OpacityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_OpacityChanged
func miqt_exec_callback_QWindow_OpacityChanged(cb C.intptr_t, opacity C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(opacity float64))
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
	C.QWindow_connect_TransientParentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_TransientParentChanged
func miqt_exec_callback_QWindow_TransientParentChanged(cb C.intptr_t, transientParent *C.QWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(transientParent *QWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWindow(transientParent, nil, nil)

	gofunc(slotval1)
}

func QWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWindow) SetFlag2(param1 WindowType, on bool) {
	C.QWindow_SetFlag2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QWindow) IsAncestorOf2(child *QWindow, mode QWindow__AncestorMode) bool {
	return (bool)(C.QWindow_IsAncestorOf2(this.h, child.cPointer(), (C.int)(mode)))
}

func (this *QWindow) callVirtualBase_SurfaceType() QSurface__SurfaceType {

	return (QSurface__SurfaceType)(C.QWindow_virtualbase_SurfaceType(unsafe.Pointer(this.h)))

}
func (this *QWindow) OnSurfaceType(slot func(super func() QSurface__SurfaceType) QSurface__SurfaceType) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_SurfaceType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_SurfaceType
func miqt_exec_callback_QWindow_SurfaceType(self *C.QWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSurface__SurfaceType) QSurface__SurfaceType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_SurfaceType)

	return (C.int)(virtualReturn)

}

func (this *QWindow) callVirtualBase_Format() *QSurfaceFormat {

	_goptr := newQSurfaceFormat(C.QWindow_virtualbase_Format(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWindow) OnFormat(slot func(super func() *QSurfaceFormat) *QSurfaceFormat) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_Format(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_Format
func miqt_exec_callback_QWindow_Format(self *C.QWindow, cb C.intptr_t) *C.QSurfaceFormat {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSurfaceFormat) *QSurfaceFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_Format)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_Size() *QSize {

	_goptr := newQSize(C.QWindow_virtualbase_Size(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWindow) OnSize(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_Size
func miqt_exec_callback_QWindow_Size(self *C.QWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_Size)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_AccessibleRoot() *QAccessibleInterface {

	return newQAccessibleInterface(C.QWindow_virtualbase_AccessibleRoot(unsafe.Pointer(this.h)))

}
func (this *QWindow) OnAccessibleRoot(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_AccessibleRoot(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_AccessibleRoot
func miqt_exec_callback_QWindow_AccessibleRoot(self *C.QWindow, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_AccessibleRoot)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_FocusObject() *QObject {

	return newQObject(C.QWindow_virtualbase_FocusObject(unsafe.Pointer(this.h)))

}
func (this *QWindow) OnFocusObject(slot func(super func() *QObject) *QObject) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_FocusObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_FocusObject
func miqt_exec_callback_QWindow_FocusObject(self *C.QWindow, cb C.intptr_t) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QObject) *QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_FocusObject)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_ExposeEvent(param1 *QExposeEvent) {

	C.QWindow_virtualbase_ExposeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnExposeEvent(slot func(super func(param1 *QExposeEvent), param1 *QExposeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_ExposeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ExposeEvent
func miqt_exec_callback_QWindow_ExposeEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QExposeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QExposeEvent), param1 *QExposeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQExposeEvent(param1, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_ExposeEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QWindow_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ResizeEvent
func miqt_exec_callback_QWindow_ResizeEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MoveEvent(param1 *QMoveEvent) {

	C.QWindow_virtualbase_MoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMoveEvent(slot func(super func(param1 *QMoveEvent), param1 *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MoveEvent
func miqt_exec_callback_QWindow_MoveEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMoveEvent), param1 *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(param1, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWindow) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QWindow_virtualbase_FocusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_FocusInEvent
func miqt_exec_callback_QWindow_FocusInEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWindow) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QWindow_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_FocusOutEvent
func miqt_exec_callback_QWindow_FocusOutEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QWindow_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ShowEvent
func miqt_exec_callback_QWindow_ShowEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWindow) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QWindow_virtualbase_HideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_HideEvent
func miqt_exec_callback_QWindow_HideEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWindow) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QWindow_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QWindow) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_Event
func miqt_exec_callback_QWindow_Event(self *C.QWindow, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWindow) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QWindow_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_KeyPressEvent
func miqt_exec_callback_QWindow_KeyPressEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWindow) callVirtualBase_KeyReleaseEvent(param1 *QKeyEvent) {

	C.QWindow_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnKeyReleaseEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_KeyReleaseEvent
func miqt_exec_callback_QWindow_KeyReleaseEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MousePressEvent
func miqt_exec_callback_QWindow_MousePressEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MouseReleaseEvent
func miqt_exec_callback_QWindow_MouseReleaseEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MouseDoubleClickEvent
func miqt_exec_callback_QWindow_MouseDoubleClickEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_MouseMoveEvent
func miqt_exec_callback_QWindow_MouseMoveEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWindow) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QWindow_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_WheelEvent
func miqt_exec_callback_QWindow_WheelEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWindow) callVirtualBase_TouchEvent(param1 *QTouchEvent) {

	C.QWindow_virtualbase_TouchEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnTouchEvent(slot func(super func(param1 *QTouchEvent), param1 *QTouchEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_TouchEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_TouchEvent
func miqt_exec_callback_QWindow_TouchEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QTouchEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTouchEvent), param1 *QTouchEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTouchEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_TouchEvent, slotval1)

}

func (this *QWindow) callVirtualBase_TabletEvent(param1 *QTabletEvent) {

	C.QWindow_virtualbase_TabletEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnTabletEvent(slot func(super func(param1 *QTabletEvent), param1 *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_TabletEvent
func miqt_exec_callback_QWindow_TabletEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTabletEvent), param1 *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(param1, nil, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWindow) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWindow_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWindow) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_NativeEvent
func miqt_exec_callback_QWindow_NativeEvent(self *C.QWindow, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWindow) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QWindow_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QWindow) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_EventFilter
func miqt_exec_callback_QWindow_EventFilter(self *C.QWindow, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWindow) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QWindow_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWindow) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_TimerEvent
func miqt_exec_callback_QWindow_TimerEvent(self *C.QWindow, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QWindow_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWindow) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ChildEvent
func miqt_exec_callback_QWindow_ChildEvent(self *C.QWindow, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QWindow{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWindow) callVirtualBase_CustomEvent(event *QEvent) {

	C.QWindow_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWindow) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_CustomEvent
func miqt_exec_callback_QWindow_CustomEvent(self *C.QWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWindow{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QWindow_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWindow) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_ConnectNotify
func miqt_exec_callback_QWindow_ConnectNotify(self *C.QWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWindow{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWindow) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QWindow_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWindow) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QWindow_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_DisconnectNotify
func miqt_exec_callback_QWindow_DisconnectNotify(self *C.QWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWindow{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWindow) Delete() {
	C.QWindow_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

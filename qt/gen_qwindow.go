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

func (this *QWindow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWindow constructs the type using only CGO pointers.
func newQWindow(h *C.QWindow) *QWindow {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QSurface *C.QSurface = nil
	C.QWindow_virtbase(h, &outptr_QObject, &outptr_QSurface)

	return &QWindow{h: h,
		QObject:  newQObject(outptr_QObject),
		QSurface: newQSurface(outptr_QSurface)}
}

// UnsafeNewQWindow constructs the type using only unsafe pointers.
func UnsafeNewQWindow(h unsafe.Pointer) *QWindow {
	return newQWindow((*C.QWindow)(h))
}

// NewQWindow constructs a new QWindow object.
func NewQWindow() *QWindow {

	return newQWindow(C.QWindow_new())
}

// NewQWindow2 constructs a new QWindow object.
func NewQWindow2(parent *QWindow) *QWindow {

	return newQWindow(C.QWindow_new2(parent.cPointer()))
}

// NewQWindow3 constructs a new QWindow object.
func NewQWindow3(screen *QScreen) *QWindow {

	return newQWindow(C.QWindow_new3(screen.cPointer()))
}

func (this *QWindow) MetaObject() *QMetaObject {
	return newQMetaObject(C.QWindow_metaObject(this.h))
}

func (this *QWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWindow_metacast(this.h, param1_Cstring))
}

func QWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWindow) SetSurfaceType(surfaceType QSurface__SurfaceType) {
	C.QWindow_setSurfaceType(this.h, (C.int)(surfaceType))
}

func (this *QWindow) SurfaceType() QSurface__SurfaceType {
	return (QSurface__SurfaceType)(C.QWindow_surfaceType(this.h))
}

func (this *QWindow) IsVisible() bool {
	return (bool)(C.QWindow_isVisible(this.h))
}

func (this *QWindow) Visibility() QWindow__Visibility {
	return (QWindow__Visibility)(C.QWindow_visibility(this.h))
}

func (this *QWindow) SetVisibility(v QWindow__Visibility) {
	C.QWindow_setVisibility(this.h, (C.int)(v))
}

func (this *QWindow) Create() {
	C.QWindow_create(this.h)
}

func (this *QWindow) WinId() uintptr {
	return (uintptr)(C.QWindow_winId(this.h))
}

func (this *QWindow) Parent(mode QWindow__AncestorMode) *QWindow {
	return newQWindow(C.QWindow_parent(this.h, (C.int)(mode)))
}

func (this *QWindow) Parent2() *QWindow {
	return newQWindow(C.QWindow_parent2(this.h))
}

func (this *QWindow) SetParent(parent *QWindow) {
	C.QWindow_setParent(this.h, parent.cPointer())
}

func (this *QWindow) IsTopLevel() bool {
	return (bool)(C.QWindow_isTopLevel(this.h))
}

func (this *QWindow) IsModal() bool {
	return (bool)(C.QWindow_isModal(this.h))
}

func (this *QWindow) Modality() WindowModality {
	return (WindowModality)(C.QWindow_modality(this.h))
}

func (this *QWindow) SetModality(modality WindowModality) {
	C.QWindow_setModality(this.h, (C.int)(modality))
}

func (this *QWindow) SetFormat(format *QSurfaceFormat) {
	C.QWindow_setFormat(this.h, format.cPointer())
}

func (this *QWindow) Format() *QSurfaceFormat {
	_goptr := newQSurfaceFormat(C.QWindow_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) RequestedFormat() *QSurfaceFormat {
	_goptr := newQSurfaceFormat(C.QWindow_requestedFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetFlags(flags WindowType) {
	C.QWindow_setFlags(this.h, (C.int)(flags))
}

func (this *QWindow) Flags() WindowType {
	return (WindowType)(C.QWindow_flags(this.h))
}

func (this *QWindow) SetFlag(param1 WindowType) {
	C.QWindow_setFlag(this.h, (C.int)(param1))
}

func (this *QWindow) Type() WindowType {
	return (WindowType)(C.QWindow_type(this.h))
}

func (this *QWindow) Title() string {
	var _ms C.struct_miqt_string = C.QWindow_title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWindow) SetOpacity(level float64) {
	C.QWindow_setOpacity(this.h, (C.double)(level))
}

func (this *QWindow) Opacity() float64 {
	return (float64)(C.QWindow_opacity(this.h))
}

func (this *QWindow) SetMask(region *QRegion) {
	C.QWindow_setMask(this.h, region.cPointer())
}

func (this *QWindow) Mask() *QRegion {
	_goptr := newQRegion(C.QWindow_mask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) IsActive() bool {
	return (bool)(C.QWindow_isActive(this.h))
}

func (this *QWindow) ReportContentOrientationChange(orientation ScreenOrientation) {
	C.QWindow_reportContentOrientationChange(this.h, (C.int)(orientation))
}

func (this *QWindow) ContentOrientation() ScreenOrientation {
	return (ScreenOrientation)(C.QWindow_contentOrientation(this.h))
}

func (this *QWindow) DevicePixelRatio() float64 {
	return (float64)(C.QWindow_devicePixelRatio(this.h))
}

func (this *QWindow) WindowState() WindowState {
	return (WindowState)(C.QWindow_windowState(this.h))
}

func (this *QWindow) WindowStates() WindowState {
	return (WindowState)(C.QWindow_windowStates(this.h))
}

func (this *QWindow) SetWindowState(state WindowState) {
	C.QWindow_setWindowState(this.h, (C.int)(state))
}

func (this *QWindow) SetWindowStates(states WindowState) {
	C.QWindow_setWindowStates(this.h, (C.int)(states))
}

func (this *QWindow) SetTransientParent(parent *QWindow) {
	C.QWindow_setTransientParent(this.h, parent.cPointer())
}

func (this *QWindow) TransientParent() *QWindow {
	return newQWindow(C.QWindow_transientParent(this.h))
}

func (this *QWindow) IsAncestorOf(child *QWindow) bool {
	return (bool)(C.QWindow_isAncestorOf(this.h, child.cPointer()))
}

func (this *QWindow) IsExposed() bool {
	return (bool)(C.QWindow_isExposed(this.h))
}

func (this *QWindow) MinimumWidth() int {
	return (int)(C.QWindow_minimumWidth(this.h))
}

func (this *QWindow) MinimumHeight() int {
	return (int)(C.QWindow_minimumHeight(this.h))
}

func (this *QWindow) MaximumWidth() int {
	return (int)(C.QWindow_maximumWidth(this.h))
}

func (this *QWindow) MaximumHeight() int {
	return (int)(C.QWindow_maximumHeight(this.h))
}

func (this *QWindow) MinimumSize() *QSize {
	_goptr := newQSize(C.QWindow_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) MaximumSize() *QSize {
	_goptr := newQSize(C.QWindow_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) BaseSize() *QSize {
	_goptr := newQSize(C.QWindow_baseSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SizeIncrement() *QSize {
	_goptr := newQSize(C.QWindow_sizeIncrement(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetMinimumSize(size *QSize) {
	C.QWindow_setMinimumSize(this.h, size.cPointer())
}

func (this *QWindow) SetMaximumSize(size *QSize) {
	C.QWindow_setMaximumSize(this.h, size.cPointer())
}

func (this *QWindow) SetBaseSize(size *QSize) {
	C.QWindow_setBaseSize(this.h, size.cPointer())
}

func (this *QWindow) SetSizeIncrement(size *QSize) {
	C.QWindow_setSizeIncrement(this.h, size.cPointer())
}

func (this *QWindow) Geometry() *QRect {
	_goptr := newQRect(C.QWindow_geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FrameMargins() *QMargins {
	_goptr := newQMargins(C.QWindow_frameMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FrameGeometry() *QRect {
	_goptr := newQRect(C.QWindow_frameGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) FramePosition() *QPoint {
	_goptr := newQPoint(C.QWindow_framePosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetFramePosition(point *QPoint) {
	C.QWindow_setFramePosition(this.h, point.cPointer())
}

func (this *QWindow) Width() int {
	return (int)(C.QWindow_width(this.h))
}

func (this *QWindow) Height() int {
	return (int)(C.QWindow_height(this.h))
}

func (this *QWindow) X() int {
	return (int)(C.QWindow_x(this.h))
}

func (this *QWindow) Y() int {
	return (int)(C.QWindow_y(this.h))
}

func (this *QWindow) Size() *QSize {
	_goptr := newQSize(C.QWindow_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Position() *QPoint {
	_goptr := newQPoint(C.QWindow_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetPosition(pt *QPoint) {
	C.QWindow_setPosition(this.h, pt.cPointer())
}

func (this *QWindow) SetPosition2(posx int, posy int) {
	C.QWindow_setPosition2(this.h, (C.int)(posx), (C.int)(posy))
}

func (this *QWindow) Resize(newSize *QSize) {
	C.QWindow_resize(this.h, newSize.cPointer())
}

func (this *QWindow) Resize2(w int, h int) {
	C.QWindow_resize2(this.h, (C.int)(w), (C.int)(h))
}

func (this *QWindow) SetFilePath(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QWindow_setFilePath(this.h, filePath_ms)
}

func (this *QWindow) FilePath() string {
	var _ms C.struct_miqt_string = C.QWindow_filePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWindow) SetIcon(icon *QIcon) {
	C.QWindow_setIcon(this.h, icon.cPointer())
}

func (this *QWindow) Icon() *QIcon {
	_goptr := newQIcon(C.QWindow_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Destroy() {
	C.QWindow_destroy(this.h)
}

func (this *QWindow) SetKeyboardGrabEnabled(grab bool) bool {
	return (bool)(C.QWindow_setKeyboardGrabEnabled(this.h, (C.bool)(grab)))
}

func (this *QWindow) SetMouseGrabEnabled(grab bool) bool {
	return (bool)(C.QWindow_setMouseGrabEnabled(this.h, (C.bool)(grab)))
}

func (this *QWindow) Screen() *QScreen {
	return newQScreen(C.QWindow_screen(this.h))
}

func (this *QWindow) SetScreen(screen *QScreen) {
	C.QWindow_setScreen(this.h, screen.cPointer())
}

func (this *QWindow) AccessibleRoot() *QAccessibleInterface {
	return newQAccessibleInterface(C.QWindow_accessibleRoot(this.h))
}

func (this *QWindow) FocusObject() *QObject {
	return newQObject(C.QWindow_focusObject(this.h))
}

func (this *QWindow) MapToGlobal(pos *QPoint) *QPoint {
	_goptr := newQPoint(C.QWindow_mapToGlobal(this.h, pos.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) MapFromGlobal(pos *QPoint) *QPoint {
	_goptr := newQPoint(C.QWindow_mapFromGlobal(this.h, pos.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) Cursor() *QCursor {
	_goptr := newQCursor(C.QWindow_cursor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWindow) SetCursor(cursor *QCursor) {
	C.QWindow_setCursor(this.h, cursor.cPointer())
}

func (this *QWindow) UnsetCursor() {
	C.QWindow_unsetCursor(this.h)
}

func QWindow_FromWinId(id uintptr) *QWindow {
	return newQWindow(C.QWindow_fromWinId((C.uintptr_t)(id)))
}

func (this *QWindow) RequestActivate() {
	C.QWindow_requestActivate(this.h)
}

func (this *QWindow) SetVisible(visible bool) {
	C.QWindow_setVisible(this.h, (C.bool)(visible))
}

func (this *QWindow) Show() {
	C.QWindow_show(this.h)
}

func (this *QWindow) Hide() {
	C.QWindow_hide(this.h)
}

func (this *QWindow) ShowMinimized() {
	C.QWindow_showMinimized(this.h)
}

func (this *QWindow) ShowMaximized() {
	C.QWindow_showMaximized(this.h)
}

func (this *QWindow) ShowFullScreen() {
	C.QWindow_showFullScreen(this.h)
}

func (this *QWindow) ShowNormal() {
	C.QWindow_showNormal(this.h)
}

func (this *QWindow) Close() bool {
	return (bool)(C.QWindow_close(this.h))
}

func (this *QWindow) Raise() {
	C.QWindow_raise(this.h)
}

func (this *QWindow) Lower() {
	C.QWindow_lower(this.h)
}

func (this *QWindow) StartSystemResize(edges Edge) bool {
	return (bool)(C.QWindow_startSystemResize(this.h, (C.int)(edges)))
}

func (this *QWindow) StartSystemMove() bool {
	return (bool)(C.QWindow_startSystemMove(this.h))
}

func (this *QWindow) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QWindow_setTitle(this.h, title_ms)
}

func (this *QWindow) SetX(arg int) {
	C.QWindow_setX(this.h, (C.int)(arg))
}

func (this *QWindow) SetY(arg int) {
	C.QWindow_setY(this.h, (C.int)(arg))
}

func (this *QWindow) SetWidth(arg int) {
	C.QWindow_setWidth(this.h, (C.int)(arg))
}

func (this *QWindow) SetHeight(arg int) {
	C.QWindow_setHeight(this.h, (C.int)(arg))
}

func (this *QWindow) SetGeometry(posx int, posy int, w int, h int) {
	C.QWindow_setGeometry(this.h, (C.int)(posx), (C.int)(posy), (C.int)(w), (C.int)(h))
}

func (this *QWindow) SetGeometryWithRect(rect *QRect) {
	C.QWindow_setGeometryWithRect(this.h, rect.cPointer())
}

func (this *QWindow) SetMinimumWidth(w int) {
	C.QWindow_setMinimumWidth(this.h, (C.int)(w))
}

func (this *QWindow) SetMinimumHeight(h int) {
	C.QWindow_setMinimumHeight(this.h, (C.int)(h))
}

func (this *QWindow) SetMaximumWidth(w int) {
	C.QWindow_setMaximumWidth(this.h, (C.int)(w))
}

func (this *QWindow) SetMaximumHeight(h int) {
	C.QWindow_setMaximumHeight(this.h, (C.int)(h))
}

func (this *QWindow) Alert(msec int) {
	C.QWindow_alert(this.h, (C.int)(msec))
}

func (this *QWindow) RequestUpdate() {
	C.QWindow_requestUpdate(this.h)
}

func (this *QWindow) ScreenChanged(screen *QScreen) {
	C.QWindow_screenChanged(this.h, screen.cPointer())
}
func (this *QWindow) OnScreenChanged(slot func(screen *QScreen)) {
	C.QWindow_connect_screenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_screenChanged
func miqt_exec_callback_QWindow_screenChanged(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen(screen)

	gofunc(slotval1)
}

func (this *QWindow) ModalityChanged(modality WindowModality) {
	C.QWindow_modalityChanged(this.h, (C.int)(modality))
}
func (this *QWindow) OnModalityChanged(slot func(modality WindowModality)) {
	C.QWindow_connect_modalityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_modalityChanged
func miqt_exec_callback_QWindow_modalityChanged(cb C.intptr_t, modality C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(modality WindowModality))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (WindowModality)(modality)

	gofunc(slotval1)
}

func (this *QWindow) WindowStateChanged(windowState WindowState) {
	C.QWindow_windowStateChanged(this.h, (C.int)(windowState))
}
func (this *QWindow) OnWindowStateChanged(slot func(windowState WindowState)) {
	C.QWindow_connect_windowStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_windowStateChanged
func miqt_exec_callback_QWindow_windowStateChanged(cb C.intptr_t, windowState C.int) {
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
	C.QWindow_windowTitleChanged(this.h, title_ms)
}
func (this *QWindow) OnWindowTitleChanged(slot func(title string)) {
	C.QWindow_connect_windowTitleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_windowTitleChanged
func miqt_exec_callback_QWindow_windowTitleChanged(cb C.intptr_t, title C.struct_miqt_string) {
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
	C.QWindow_xChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnXChanged(slot func(arg int)) {
	C.QWindow_connect_xChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_xChanged
func miqt_exec_callback_QWindow_xChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) YChanged(arg int) {
	C.QWindow_yChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnYChanged(slot func(arg int)) {
	C.QWindow_connect_yChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_yChanged
func miqt_exec_callback_QWindow_yChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) WidthChanged(arg int) {
	C.QWindow_widthChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnWidthChanged(slot func(arg int)) {
	C.QWindow_connect_widthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_widthChanged
func miqt_exec_callback_QWindow_widthChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) HeightChanged(arg int) {
	C.QWindow_heightChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnHeightChanged(slot func(arg int)) {
	C.QWindow_connect_heightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_heightChanged
func miqt_exec_callback_QWindow_heightChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MinimumWidthChanged(arg int) {
	C.QWindow_minimumWidthChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMinimumWidthChanged(slot func(arg int)) {
	C.QWindow_connect_minimumWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_minimumWidthChanged
func miqt_exec_callback_QWindow_minimumWidthChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MinimumHeightChanged(arg int) {
	C.QWindow_minimumHeightChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMinimumHeightChanged(slot func(arg int)) {
	C.QWindow_connect_minimumHeightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_minimumHeightChanged
func miqt_exec_callback_QWindow_minimumHeightChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MaximumWidthChanged(arg int) {
	C.QWindow_maximumWidthChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMaximumWidthChanged(slot func(arg int)) {
	C.QWindow_connect_maximumWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_maximumWidthChanged
func miqt_exec_callback_QWindow_maximumWidthChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) MaximumHeightChanged(arg int) {
	C.QWindow_maximumHeightChanged(this.h, (C.int)(arg))
}
func (this *QWindow) OnMaximumHeightChanged(slot func(arg int)) {
	C.QWindow_connect_maximumHeightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_maximumHeightChanged
func miqt_exec_callback_QWindow_maximumHeightChanged(cb C.intptr_t, arg C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(arg)

	gofunc(slotval1)
}

func (this *QWindow) VisibleChanged(arg bool) {
	C.QWindow_visibleChanged(this.h, (C.bool)(arg))
}
func (this *QWindow) OnVisibleChanged(slot func(arg bool)) {
	C.QWindow_connect_visibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_visibleChanged
func miqt_exec_callback_QWindow_visibleChanged(cb C.intptr_t, arg C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(arg bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(arg)

	gofunc(slotval1)
}

func (this *QWindow) VisibilityChanged(visibility QWindow__Visibility) {
	C.QWindow_visibilityChanged(this.h, (C.int)(visibility))
}
func (this *QWindow) OnVisibilityChanged(slot func(visibility QWindow__Visibility)) {
	C.QWindow_connect_visibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_visibilityChanged
func miqt_exec_callback_QWindow_visibilityChanged(cb C.intptr_t, visibility C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visibility QWindow__Visibility))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWindow__Visibility)(visibility)

	gofunc(slotval1)
}

func (this *QWindow) ActiveChanged() {
	C.QWindow_activeChanged(this.h)
}
func (this *QWindow) OnActiveChanged(slot func()) {
	C.QWindow_connect_activeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_activeChanged
func miqt_exec_callback_QWindow_activeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWindow) ContentOrientationChanged(orientation ScreenOrientation) {
	C.QWindow_contentOrientationChanged(this.h, (C.int)(orientation))
}
func (this *QWindow) OnContentOrientationChanged(slot func(orientation ScreenOrientation)) {
	C.QWindow_connect_contentOrientationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_contentOrientationChanged
func miqt_exec_callback_QWindow_contentOrientationChanged(cb C.intptr_t, orientation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(orientation ScreenOrientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ScreenOrientation)(orientation)

	gofunc(slotval1)
}

func (this *QWindow) FocusObjectChanged(object *QObject) {
	C.QWindow_focusObjectChanged(this.h, object.cPointer())
}
func (this *QWindow) OnFocusObjectChanged(slot func(object *QObject)) {
	C.QWindow_connect_focusObjectChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_focusObjectChanged
func miqt_exec_callback_QWindow_focusObjectChanged(cb C.intptr_t, object *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	gofunc(slotval1)
}

func (this *QWindow) OpacityChanged(opacity float64) {
	C.QWindow_opacityChanged(this.h, (C.double)(opacity))
}
func (this *QWindow) OnOpacityChanged(slot func(opacity float64)) {
	C.QWindow_connect_opacityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_opacityChanged
func miqt_exec_callback_QWindow_opacityChanged(cb C.intptr_t, opacity C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(opacity float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(opacity)

	gofunc(slotval1)
}

func (this *QWindow) TransientParentChanged(transientParent *QWindow) {
	C.QWindow_transientParentChanged(this.h, transientParent.cPointer())
}
func (this *QWindow) OnTransientParentChanged(slot func(transientParent *QWindow)) {
	C.QWindow_connect_transientParentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWindow_transientParentChanged
func miqt_exec_callback_QWindow_transientParentChanged(cb C.intptr_t, transientParent *C.QWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(transientParent *QWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWindow(transientParent)

	gofunc(slotval1)
}

func QWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWindow_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWindow) SetFlag2(param1 WindowType, on bool) {
	C.QWindow_setFlag2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QWindow) IsAncestorOf2(child *QWindow, mode QWindow__AncestorMode) bool {
	return (bool)(C.QWindow_isAncestorOf2(this.h, child.cPointer(), (C.int)(mode)))
}

// Sender can only be called from a QWindow that was directly constructed.
func (this *QWindow) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QWindow_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWindow that was directly constructed.
func (this *QWindow) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWindow_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWindow that was directly constructed.
func (this *QWindow) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWindow_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWindow that was directly constructed.
func (this *QWindow) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWindow_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QWindow) callVirtualBase_SurfaceType() QSurface__SurfaceType {

	return (QSurface__SurfaceType)(C.QWindow_virtualbase_surfaceType(unsafe.Pointer(this.h)))

}
func (this *QWindow) OnSurfaceType(slot func(super func() QSurface__SurfaceType) QSurface__SurfaceType) {
	ok := C.QWindow_override_virtual_surfaceType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_surfaceType
func miqt_exec_callback_QWindow_surfaceType(self *C.QWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSurface__SurfaceType) QSurface__SurfaceType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_SurfaceType)

	return (C.int)(virtualReturn)

}

func (this *QWindow) callVirtualBase_Format() *QSurfaceFormat {

	_goptr := newQSurfaceFormat(C.QWindow_virtualbase_format(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWindow) OnFormat(slot func(super func() *QSurfaceFormat) *QSurfaceFormat) {
	ok := C.QWindow_override_virtual_format(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_format
func miqt_exec_callback_QWindow_format(self *C.QWindow, cb C.intptr_t) *C.QSurfaceFormat {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSurfaceFormat) *QSurfaceFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_Format)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_Size() *QSize {

	_goptr := newQSize(C.QWindow_virtualbase_size(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWindow) OnSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWindow_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_size
func miqt_exec_callback_QWindow_size(self *C.QWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_Size)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_AccessibleRoot() *QAccessibleInterface {

	return newQAccessibleInterface(C.QWindow_virtualbase_accessibleRoot(unsafe.Pointer(this.h)))

}
func (this *QWindow) OnAccessibleRoot(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QWindow_override_virtual_accessibleRoot(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_accessibleRoot
func miqt_exec_callback_QWindow_accessibleRoot(self *C.QWindow, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_AccessibleRoot)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_FocusObject() *QObject {

	return newQObject(C.QWindow_virtualbase_focusObject(unsafe.Pointer(this.h)))

}
func (this *QWindow) OnFocusObject(slot func(super func() *QObject) *QObject) {
	ok := C.QWindow_override_virtual_focusObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_focusObject
func miqt_exec_callback_QWindow_focusObject(self *C.QWindow, cb C.intptr_t) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QObject) *QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWindow{h: self}).callVirtualBase_FocusObject)

	return virtualReturn.cPointer()

}

func (this *QWindow) callVirtualBase_ExposeEvent(param1 *QExposeEvent) {

	C.QWindow_virtualbase_exposeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnExposeEvent(slot func(super func(param1 *QExposeEvent), param1 *QExposeEvent)) {
	ok := C.QWindow_override_virtual_exposeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_exposeEvent
func miqt_exec_callback_QWindow_exposeEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QExposeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QExposeEvent), param1 *QExposeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQExposeEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_ExposeEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QWindow_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QWindow_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_resizeEvent
func miqt_exec_callback_QWindow_resizeEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MoveEvent(param1 *QMoveEvent) {

	C.QWindow_virtualbase_moveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMoveEvent(slot func(super func(param1 *QMoveEvent), param1 *QMoveEvent)) {
	ok := C.QWindow_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_moveEvent
func miqt_exec_callback_QWindow_moveEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMoveEvent), param1 *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWindow) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QWindow_virtualbase_focusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QWindow_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_focusInEvent
func miqt_exec_callback_QWindow_focusInEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWindow) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QWindow_virtualbase_focusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QWindow_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_focusOutEvent
func miqt_exec_callback_QWindow_focusOutEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QWindow_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QWindow_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_showEvent
func miqt_exec_callback_QWindow_showEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWindow) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QWindow_virtualbase_hideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	ok := C.QWindow_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_hideEvent
func miqt_exec_callback_QWindow_hideEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWindow) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QWindow_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QWindow) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QWindow_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_event
func miqt_exec_callback_QWindow_event(self *C.QWindow, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	C.QWindow_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QWindow_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_keyPressEvent
func miqt_exec_callback_QWindow_keyPressEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWindow) callVirtualBase_KeyReleaseEvent(param1 *QKeyEvent) {

	C.QWindow_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnKeyReleaseEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QWindow_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_keyReleaseEvent
func miqt_exec_callback_QWindow_keyReleaseEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QWindow_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_mousePressEvent
func miqt_exec_callback_QWindow_mousePressEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QWindow_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_mouseReleaseEvent
func miqt_exec_callback_QWindow_mouseReleaseEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QWindow_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_mouseDoubleClickEvent
func miqt_exec_callback_QWindow_mouseDoubleClickEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWindow) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QWindow_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QWindow_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_mouseMoveEvent
func miqt_exec_callback_QWindow_mouseMoveEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWindow) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QWindow_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QWindow_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_wheelEvent
func miqt_exec_callback_QWindow_wheelEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWindow) callVirtualBase_TouchEvent(param1 *QTouchEvent) {

	C.QWindow_virtualbase_touchEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnTouchEvent(slot func(super func(param1 *QTouchEvent), param1 *QTouchEvent)) {
	ok := C.QWindow_override_virtual_touchEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_touchEvent
func miqt_exec_callback_QWindow_touchEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QTouchEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTouchEvent), param1 *QTouchEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTouchEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_TouchEvent, slotval1)

}

func (this *QWindow) callVirtualBase_TabletEvent(param1 *QTabletEvent) {

	C.QWindow_virtualbase_tabletEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QWindow) OnTabletEvent(slot func(super func(param1 *QTabletEvent), param1 *QTabletEvent)) {
	ok := C.QWindow_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_tabletEvent
func miqt_exec_callback_QWindow_tabletEvent(self *C.QWindow, cb C.intptr_t, param1 *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTabletEvent), param1 *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(param1)

	gofunc((&QWindow{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWindow) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWindow_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWindow) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWindow_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_nativeEvent
func miqt_exec_callback_QWindow_nativeEvent(self *C.QWindow, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	return (bool)(C.QWindow_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QWindow) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QWindow_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_eventFilter
func miqt_exec_callback_QWindow_eventFilter(self *C.QWindow, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QWindow_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWindow) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QWindow_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_timerEvent
func miqt_exec_callback_QWindow_timerEvent(self *C.QWindow, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QWindow{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QWindow_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWindow) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QWindow_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_childEvent
func miqt_exec_callback_QWindow_childEvent(self *C.QWindow, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QWindow{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWindow) callVirtualBase_CustomEvent(event *QEvent) {

	C.QWindow_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWindow) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWindow_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_customEvent
func miqt_exec_callback_QWindow_customEvent(self *C.QWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWindow{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWindow) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QWindow_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWindow) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWindow_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_connectNotify
func miqt_exec_callback_QWindow_connectNotify(self *C.QWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWindow{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWindow) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QWindow_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWindow) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWindow_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWindow_disconnectNotify
func miqt_exec_callback_QWindow_disconnectNotify(self *C.QWindow, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QWindow_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

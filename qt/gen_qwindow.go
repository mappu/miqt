package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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
	ret := C.QWindow_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWindow) IsVisible() bool {
	ret := C.QWindow_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QWindow) Create() {
	C.QWindow_Create(this.h)
}

func (this *QWindow) WinId() uintptr {
	ret := C.QWindow_WinId(this.h)
	return (uintptr)(ret)
}

func (this *QWindow) Parent() *QWindow {
	ret := C.QWindow_Parent(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QWindow) SetParent(parent *QWindow) {
	C.QWindow_SetParent(this.h, parent.cPointer())
}

func (this *QWindow) IsTopLevel() bool {
	ret := C.QWindow_IsTopLevel(this.h)
	return (bool)(ret)
}

func (this *QWindow) IsModal() bool {
	ret := C.QWindow_IsModal(this.h)
	return (bool)(ret)
}

func (this *QWindow) SetFormat(format *QSurfaceFormat) {
	C.QWindow_SetFormat(this.h, format.cPointer())
}

func (this *QWindow) Format() *QSurfaceFormat {
	ret := C.QWindow_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSurfaceFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSurfaceFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) RequestedFormat() *QSurfaceFormat {
	ret := C.QWindow_RequestedFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSurfaceFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSurfaceFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) Title() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_Title(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWindow) SetOpacity(level float64) {
	C.QWindow_SetOpacity(this.h, (C.double)(level))
}

func (this *QWindow) Opacity() float64 {
	ret := C.QWindow_Opacity(this.h)
	return (float64)(ret)
}

func (this *QWindow) SetMask(region *QRegion) {
	C.QWindow_SetMask(this.h, region.cPointer())
}

func (this *QWindow) Mask() *QRegion {
	ret := C.QWindow_Mask(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) IsActive() bool {
	ret := C.QWindow_IsActive(this.h)
	return (bool)(ret)
}

func (this *QWindow) DevicePixelRatio() float64 {
	ret := C.QWindow_DevicePixelRatio(this.h)
	return (float64)(ret)
}

func (this *QWindow) SetTransientParent(parent *QWindow) {
	C.QWindow_SetTransientParent(this.h, parent.cPointer())
}

func (this *QWindow) TransientParent() *QWindow {
	ret := C.QWindow_TransientParent(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QWindow) IsExposed() bool {
	ret := C.QWindow_IsExposed(this.h)
	return (bool)(ret)
}

func (this *QWindow) MinimumWidth() int {
	ret := C.QWindow_MinimumWidth(this.h)
	return (int)(ret)
}

func (this *QWindow) MinimumHeight() int {
	ret := C.QWindow_MinimumHeight(this.h)
	return (int)(ret)
}

func (this *QWindow) MaximumWidth() int {
	ret := C.QWindow_MaximumWidth(this.h)
	return (int)(ret)
}

func (this *QWindow) MaximumHeight() int {
	ret := C.QWindow_MaximumHeight(this.h)
	return (int)(ret)
}

func (this *QWindow) MinimumSize() *QSize {
	ret := C.QWindow_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) MaximumSize() *QSize {
	ret := C.QWindow_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) BaseSize() *QSize {
	ret := C.QWindow_BaseSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) SizeIncrement() *QSize {
	ret := C.QWindow_SizeIncrement(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QWindow_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) FrameMargins() *QMargins {
	ret := C.QWindow_FrameMargins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMargins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMargins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) FrameGeometry() *QRect {
	ret := C.QWindow_FrameGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) FramePosition() *QPoint {
	ret := C.QWindow_FramePosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) SetFramePosition(point *QPoint) {
	C.QWindow_SetFramePosition(this.h, point.cPointer())
}

func (this *QWindow) Width() int {
	ret := C.QWindow_Width(this.h)
	return (int)(ret)
}

func (this *QWindow) Height() int {
	ret := C.QWindow_Height(this.h)
	return (int)(ret)
}

func (this *QWindow) X() int {
	ret := C.QWindow_X(this.h)
	return (int)(ret)
}

func (this *QWindow) Y() int {
	ret := C.QWindow_Y(this.h)
	return (int)(ret)
}

func (this *QWindow) Size() *QSize {
	ret := C.QWindow_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) Position() *QPoint {
	ret := C.QWindow_Position(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	filePath_Cstring := C.CString(filePath)
	defer C.free(unsafe.Pointer(filePath_Cstring))
	C.QWindow_SetFilePath(this.h, filePath_Cstring, C.ulong(len(filePath)))
}

func (this *QWindow) FilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_FilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWindow) SetIcon(icon *QIcon) {
	C.QWindow_SetIcon(this.h, icon.cPointer())
}

func (this *QWindow) Icon() *QIcon {
	ret := C.QWindow_Icon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) Destroy() {
	C.QWindow_Destroy(this.h)
}

func (this *QWindow) SetKeyboardGrabEnabled(grab bool) bool {
	ret := C.QWindow_SetKeyboardGrabEnabled(this.h, (C.bool)(grab))
	return (bool)(ret)
}

func (this *QWindow) SetMouseGrabEnabled(grab bool) bool {
	ret := C.QWindow_SetMouseGrabEnabled(this.h, (C.bool)(grab))
	return (bool)(ret)
}

func (this *QWindow) Screen() *QScreen {
	ret := C.QWindow_Screen(this.h)
	return newQScreen_U(unsafe.Pointer(ret))
}

func (this *QWindow) SetScreen(screen *QScreen) {
	C.QWindow_SetScreen(this.h, screen.cPointer())
}

func (this *QWindow) AccessibleRoot() *QAccessibleInterface {
	ret := C.QWindow_AccessibleRoot(this.h)
	return newQAccessibleInterface_U(unsafe.Pointer(ret))
}

func (this *QWindow) FocusObject() *QObject {
	ret := C.QWindow_FocusObject(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QWindow) MapToGlobal(pos *QPoint) *QPoint {
	ret := C.QWindow_MapToGlobal(this.h, pos.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) MapFromGlobal(pos *QPoint) *QPoint {
	ret := C.QWindow_MapFromGlobal(this.h, pos.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) Cursor() *QCursor {
	ret := C.QWindow_Cursor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWindow) SetCursor(cursor *QCursor) {
	C.QWindow_SetCursor(this.h, cursor.cPointer())
}

func (this *QWindow) UnsetCursor() {
	C.QWindow_UnsetCursor(this.h)
}

func QWindow_FromWinId(id uintptr) *QWindow {
	ret := C.QWindow_FromWinId((C.uintptr_t)(id))
	return newQWindow_U(unsafe.Pointer(ret))
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
	ret := C.QWindow_Close(this.h)
	return (bool)(ret)
}

func (this *QWindow) Raise() {
	C.QWindow_Raise(this.h)
}

func (this *QWindow) Lower() {
	C.QWindow_Lower(this.h)
}

func (this *QWindow) StartSystemMove() bool {
	ret := C.QWindow_StartSystemMove(this.h)
	return (bool)(ret)
}

func (this *QWindow) SetTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QWindow_SetTitle(this.h, title_Cstring, C.ulong(len(title)))
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

func (this *QWindow) OnScreenChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_ScreenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) WindowTitleChanged(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QWindow_WindowTitleChanged(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QWindow) OnWindowTitleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_WindowTitleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) XChanged(arg int) {
	C.QWindow_XChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnXChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_XChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) YChanged(arg int) {
	C.QWindow_YChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnYChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_YChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) WidthChanged(arg int) {
	C.QWindow_WidthChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnWidthChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_WidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) HeightChanged(arg int) {
	C.QWindow_HeightChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnHeightChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_HeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) MinimumWidthChanged(arg int) {
	C.QWindow_MinimumWidthChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnMinimumWidthChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_MinimumWidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) MinimumHeightChanged(arg int) {
	C.QWindow_MinimumHeightChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnMinimumHeightChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_MinimumHeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) MaximumWidthChanged(arg int) {
	C.QWindow_MaximumWidthChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnMaximumWidthChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_MaximumWidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) MaximumHeightChanged(arg int) {
	C.QWindow_MaximumHeightChanged(this.h, (C.int)(arg))
}

func (this *QWindow) OnMaximumHeightChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_MaximumHeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) VisibleChanged(arg bool) {
	C.QWindow_VisibleChanged(this.h, (C.bool)(arg))
}

func (this *QWindow) OnVisibleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_VisibleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) ActiveChanged() {
	C.QWindow_ActiveChanged(this.h)
}

func (this *QWindow) OnActiveChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_ActiveChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) FocusObjectChanged(object *QObject) {
	C.QWindow_FocusObjectChanged(this.h, object.cPointer())
}

func (this *QWindow) OnFocusObjectChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_FocusObjectChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) OpacityChanged(opacity float64) {
	C.QWindow_OpacityChanged(this.h, (C.double)(opacity))
}

func (this *QWindow) OnOpacityChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_OpacityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QWindow) TransientParentChanged(transientParent *QWindow) {
	C.QWindow_TransientParentChanged(this.h, transientParent.cPointer())
}

func (this *QWindow) OnTransientParentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QWindow_connect_TransientParentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWindow) Delete() {
	C.QWindow_Delete(this.h)
}

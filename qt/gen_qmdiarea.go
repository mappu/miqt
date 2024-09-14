package qt

/*

#include "gen_qmdiarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMdiArea__AreaOption int

const (
	QMdiArea__AreaOption__DontMaximizeSubWindowOnActivation QMdiArea__AreaOption = 1
)

type QMdiArea__WindowOrder int

const (
	QMdiArea__WindowOrder__CreationOrder          QMdiArea__WindowOrder = 0
	QMdiArea__WindowOrder__StackingOrder          QMdiArea__WindowOrder = 1
	QMdiArea__WindowOrder__ActivationHistoryOrder QMdiArea__WindowOrder = 2
)

type QMdiArea__ViewMode int

const (
	QMdiArea__ViewMode__SubWindowView QMdiArea__ViewMode = 0
	QMdiArea__ViewMode__TabbedView    QMdiArea__ViewMode = 1
)

type QMdiArea struct {
	h *C.QMdiArea
	*QAbstractScrollArea
}

func (this *QMdiArea) cPointer() *C.QMdiArea {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMdiArea(h *C.QMdiArea) *QMdiArea {
	if h == nil {
		return nil
	}
	return &QMdiArea{h: h, QAbstractScrollArea: newQAbstractScrollArea_U(unsafe.Pointer(h))}
}

func newQMdiArea_U(h unsafe.Pointer) *QMdiArea {
	return newQMdiArea((*C.QMdiArea)(h))
}

// NewQMdiArea constructs a new QMdiArea object.
func NewQMdiArea() *QMdiArea {
	ret := C.QMdiArea_new()
	return newQMdiArea(ret)
}

// NewQMdiArea2 constructs a new QMdiArea object.
func NewQMdiArea2(parent *QWidget) *QMdiArea {
	ret := C.QMdiArea_new2(parent.cPointer())
	return newQMdiArea(ret)
}

func (this *QMdiArea) MetaObject() *QMetaObject {
	_ret := C.QMdiArea_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QMdiArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiArea_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiArea_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMdiArea) SizeHint() *QSize {
	_ret := C.QMdiArea_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) MinimumSizeHint() *QSize {
	_ret := C.QMdiArea_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) CurrentSubWindow() *QMdiSubWindow {
	_ret := C.QMdiArea_CurrentSubWindow(this.h)
	return newQMdiSubWindow_U(unsafe.Pointer(_ret))
}

func (this *QMdiArea) ActiveSubWindow() *QMdiSubWindow {
	_ret := C.QMdiArea_ActiveSubWindow(this.h)
	return newQMdiSubWindow_U(unsafe.Pointer(_ret))
}

func (this *QMdiArea) SubWindowList() []*QMdiSubWindow {
	var _ma *C.struct_miqt_array = C.QMdiArea_SubWindowList(this.h)
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQMdiSubWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMdiArea) AddSubWindow(widget *QWidget) *QMdiSubWindow {
	_ret := C.QMdiArea_AddSubWindow(this.h, widget.cPointer())
	return newQMdiSubWindow_U(unsafe.Pointer(_ret))
}

func (this *QMdiArea) RemoveSubWindow(widget *QWidget) {
	C.QMdiArea_RemoveSubWindow(this.h, widget.cPointer())
}

func (this *QMdiArea) Background() *QBrush {
	_ret := C.QMdiArea_Background(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) SetBackground(background *QBrush) {
	C.QMdiArea_SetBackground(this.h, background.cPointer())
}

func (this *QMdiArea) ActivationOrder() QMdiArea__WindowOrder {
	_ret := C.QMdiArea_ActivationOrder(this.h)
	return (QMdiArea__WindowOrder)(_ret)
}

func (this *QMdiArea) SetActivationOrder(order QMdiArea__WindowOrder) {
	C.QMdiArea_SetActivationOrder(this.h, (C.uintptr_t)(order))
}

func (this *QMdiArea) SetOption(option QMdiArea__AreaOption) {
	C.QMdiArea_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QMdiArea) TestOption(opton QMdiArea__AreaOption) bool {
	_ret := C.QMdiArea_TestOption(this.h, (C.uintptr_t)(opton))
	return (bool)(_ret)
}

func (this *QMdiArea) SetViewMode(mode QMdiArea__ViewMode) {
	C.QMdiArea_SetViewMode(this.h, (C.uintptr_t)(mode))
}

func (this *QMdiArea) ViewMode() QMdiArea__ViewMode {
	_ret := C.QMdiArea_ViewMode(this.h)
	return (QMdiArea__ViewMode)(_ret)
}

func (this *QMdiArea) DocumentMode() bool {
	_ret := C.QMdiArea_DocumentMode(this.h)
	return (bool)(_ret)
}

func (this *QMdiArea) SetDocumentMode(enabled bool) {
	C.QMdiArea_SetDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMdiArea) SetTabsClosable(closable bool) {
	C.QMdiArea_SetTabsClosable(this.h, (C.bool)(closable))
}

func (this *QMdiArea) TabsClosable() bool {
	_ret := C.QMdiArea_TabsClosable(this.h)
	return (bool)(_ret)
}

func (this *QMdiArea) SetTabsMovable(movable bool) {
	C.QMdiArea_SetTabsMovable(this.h, (C.bool)(movable))
}

func (this *QMdiArea) TabsMovable() bool {
	_ret := C.QMdiArea_TabsMovable(this.h)
	return (bool)(_ret)
}

func (this *QMdiArea) SetTabShape(shape QTabWidget__TabShape) {
	C.QMdiArea_SetTabShape(this.h, (C.uintptr_t)(shape))
}

func (this *QMdiArea) TabShape() QTabWidget__TabShape {
	_ret := C.QMdiArea_TabShape(this.h)
	return (QTabWidget__TabShape)(_ret)
}

func (this *QMdiArea) SetTabPosition(position QTabWidget__TabPosition) {
	C.QMdiArea_SetTabPosition(this.h, (C.uintptr_t)(position))
}

func (this *QMdiArea) TabPosition() QTabWidget__TabPosition {
	_ret := C.QMdiArea_TabPosition(this.h)
	return (QTabWidget__TabPosition)(_ret)
}

func (this *QMdiArea) SubWindowActivated(param1 *QMdiSubWindow) {
	C.QMdiArea_SubWindowActivated(this.h, param1.cPointer())
}
func (this *QMdiArea) OnSubWindowActivated(slot func(param1 *QMdiSubWindow)) {
	C.QMdiArea_connect_SubWindowActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QMdiArea_SubWindowActivated
func miqt_exec_callback_QMdiArea_SubWindowActivated(cb *C.void, param1 *C.QMdiSubWindow) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 *QMdiSubWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := newQMdiSubWindow_U(unsafe.Pointer(param1_ret))

	gofunc(slotval1)
}

func (this *QMdiArea) SetActiveSubWindow(window *QMdiSubWindow) {
	C.QMdiArea_SetActiveSubWindow(this.h, window.cPointer())
}

func (this *QMdiArea) TileSubWindows() {
	C.QMdiArea_TileSubWindows(this.h)
}

func (this *QMdiArea) CascadeSubWindows() {
	C.QMdiArea_CascadeSubWindows(this.h)
}

func (this *QMdiArea) CloseActiveSubWindow() {
	C.QMdiArea_CloseActiveSubWindow(this.h)
}

func (this *QMdiArea) CloseAllSubWindows() {
	C.QMdiArea_CloseAllSubWindows(this.h)
}

func (this *QMdiArea) ActivateNextSubWindow() {
	C.QMdiArea_ActivateNextSubWindow(this.h)
}

func (this *QMdiArea) ActivatePreviousSubWindow() {
	C.QMdiArea_ActivatePreviousSubWindow(this.h)
}

func QMdiArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiArea_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiArea_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMdiArea) SubWindowList1(order QMdiArea__WindowOrder) []*QMdiSubWindow {
	var _ma *C.struct_miqt_array = C.QMdiArea_SubWindowList1(this.h, (C.uintptr_t)(order))
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQMdiSubWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMdiArea) AddSubWindow2(widget *QWidget, flags int) *QMdiSubWindow {
	_ret := C.QMdiArea_AddSubWindow2(this.h, widget.cPointer(), (C.int)(flags))
	return newQMdiSubWindow_U(unsafe.Pointer(_ret))
}

func (this *QMdiArea) SetOption2(option QMdiArea__AreaOption, on bool) {
	C.QMdiArea_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QMdiArea) Delete() {
	C.QMdiArea_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMdiArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QMdiArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

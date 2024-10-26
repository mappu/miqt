package qt6

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
	QMdiArea__DontMaximizeSubWindowOnActivation QMdiArea__AreaOption = 1
)

type QMdiArea__WindowOrder int

const (
	QMdiArea__CreationOrder          QMdiArea__WindowOrder = 0
	QMdiArea__StackingOrder          QMdiArea__WindowOrder = 1
	QMdiArea__ActivationHistoryOrder QMdiArea__WindowOrder = 2
)

type QMdiArea__ViewMode int

const (
	QMdiArea__SubWindowView QMdiArea__ViewMode = 0
	QMdiArea__TabbedView    QMdiArea__ViewMode = 1
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

func (this *QMdiArea) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMdiArea(h *C.QMdiArea) *QMdiArea {
	if h == nil {
		return nil
	}
	return &QMdiArea{h: h, QAbstractScrollArea: UnsafeNewQAbstractScrollArea(unsafe.Pointer(h))}
}

func UnsafeNewQMdiArea(h unsafe.Pointer) *QMdiArea {
	return newQMdiArea((*C.QMdiArea)(h))
}

// NewQMdiArea constructs a new QMdiArea object.
func NewQMdiArea(parent *QWidget) *QMdiArea {
	ret := C.QMdiArea_new(parent.cPointer())
	return newQMdiArea(ret)
}

// NewQMdiArea2 constructs a new QMdiArea object.
func NewQMdiArea2() *QMdiArea {
	ret := C.QMdiArea_new2()
	return newQMdiArea(ret)
}

func (this *QMdiArea) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMdiArea_MetaObject(this.h)))
}

func (this *QMdiArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMdiArea_Metacast(this.h, param1_Cstring))
}

func QMdiArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_CurrentSubWindow(this.h)))
}

func (this *QMdiArea) ActiveSubWindow() *QMdiSubWindow {
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_ActiveSubWindow(this.h)))
}

func (this *QMdiArea) SubWindowList() []*QMdiSubWindow {
	var _ma *C.struct_miqt_array = C.QMdiArea_SubWindowList(this.h)
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQMdiSubWindow(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMdiArea) AddSubWindow(widget *QWidget) *QMdiSubWindow {
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_AddSubWindow(this.h, widget.cPointer())))
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
	return (QMdiArea__WindowOrder)(C.QMdiArea_ActivationOrder(this.h))
}

func (this *QMdiArea) SetActivationOrder(order QMdiArea__WindowOrder) {
	C.QMdiArea_SetActivationOrder(this.h, (C.int)(order))
}

func (this *QMdiArea) SetOption(option QMdiArea__AreaOption) {
	C.QMdiArea_SetOption(this.h, (C.int)(option))
}

func (this *QMdiArea) TestOption(opton QMdiArea__AreaOption) bool {
	return (bool)(C.QMdiArea_TestOption(this.h, (C.int)(opton)))
}

func (this *QMdiArea) SetViewMode(mode QMdiArea__ViewMode) {
	C.QMdiArea_SetViewMode(this.h, (C.int)(mode))
}

func (this *QMdiArea) ViewMode() QMdiArea__ViewMode {
	return (QMdiArea__ViewMode)(C.QMdiArea_ViewMode(this.h))
}

func (this *QMdiArea) DocumentMode() bool {
	return (bool)(C.QMdiArea_DocumentMode(this.h))
}

func (this *QMdiArea) SetDocumentMode(enabled bool) {
	C.QMdiArea_SetDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMdiArea) SetTabsClosable(closable bool) {
	C.QMdiArea_SetTabsClosable(this.h, (C.bool)(closable))
}

func (this *QMdiArea) TabsClosable() bool {
	return (bool)(C.QMdiArea_TabsClosable(this.h))
}

func (this *QMdiArea) SetTabsMovable(movable bool) {
	C.QMdiArea_SetTabsMovable(this.h, (C.bool)(movable))
}

func (this *QMdiArea) TabsMovable() bool {
	return (bool)(C.QMdiArea_TabsMovable(this.h))
}

func (this *QMdiArea) SetTabShape(shape QTabWidget__TabShape) {
	C.QMdiArea_SetTabShape(this.h, (C.int)(shape))
}

func (this *QMdiArea) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QMdiArea_TabShape(this.h))
}

func (this *QMdiArea) SetTabPosition(position QTabWidget__TabPosition) {
	C.QMdiArea_SetTabPosition(this.h, (C.int)(position))
}

func (this *QMdiArea) TabPosition() QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QMdiArea_TabPosition(this.h))
}

func (this *QMdiArea) SubWindowActivated(param1 *QMdiSubWindow) {
	C.QMdiArea_SubWindowActivated(this.h, param1.cPointer())
}
func (this *QMdiArea) OnSubWindowActivated(slot func(param1 *QMdiSubWindow)) {
	C.QMdiArea_connect_SubWindowActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_SubWindowActivated
func miqt_exec_callback_QMdiArea_SubWindowActivated(cb C.intptr_t, param1 *C.QMdiSubWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QMdiSubWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMdiSubWindow(unsafe.Pointer(param1))

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
	var _ms C.struct_miqt_string = C.QMdiArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiArea) SubWindowList1(order QMdiArea__WindowOrder) []*QMdiSubWindow {
	var _ma *C.struct_miqt_array = C.QMdiArea_SubWindowList1(this.h, (C.int)(order))
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQMdiSubWindow(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMdiArea) AddSubWindow2(widget *QWidget, flags WindowType) *QMdiSubWindow {
	return UnsafeNewQMdiSubWindow(unsafe.Pointer(C.QMdiArea_AddSubWindow2(this.h, widget.cPointer(), (C.int)(flags))))
}

func (this *QMdiArea) SetOption2(option QMdiArea__AreaOption, on bool) {
	C.QMdiArea_SetOption2(this.h, (C.int)(option), (C.bool)(on))
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

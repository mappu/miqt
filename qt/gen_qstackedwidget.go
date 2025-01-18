package qt

/*

#include "gen_qstackedwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStackedWidget struct {
	h *C.QStackedWidget
	*QFrame
}

func (this *QStackedWidget) cPointer() *C.QStackedWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStackedWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStackedWidget constructs the type using only CGO pointers.
func newQStackedWidget(h *C.QStackedWidget) *QStackedWidget {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QStackedWidget_virtbase(h, &outptr_QFrame)

	return &QStackedWidget{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQStackedWidget constructs the type using only unsafe pointers.
func UnsafeNewQStackedWidget(h unsafe.Pointer) *QStackedWidget {
	return newQStackedWidget((*C.QStackedWidget)(h))
}

// NewQStackedWidget constructs a new QStackedWidget object.
func NewQStackedWidget(parent *QWidget) *QStackedWidget {

	return newQStackedWidget(C.QStackedWidget_new(parent.cPointer()))
}

// NewQStackedWidget2 constructs a new QStackedWidget object.
func NewQStackedWidget2() *QStackedWidget {

	return newQStackedWidget(C.QStackedWidget_new2())
}

func (this *QStackedWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStackedWidget_MetaObject(this.h))
}

func (this *QStackedWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStackedWidget_Metacast(this.h, param1_Cstring))
}

func QStackedWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedWidget) AddWidget(w *QWidget) int {
	return (int)(C.QStackedWidget_AddWidget(this.h, w.cPointer()))
}

func (this *QStackedWidget) InsertWidget(index int, w *QWidget) int {
	return (int)(C.QStackedWidget_InsertWidget(this.h, (C.int)(index), w.cPointer()))
}

func (this *QStackedWidget) RemoveWidget(w *QWidget) {
	C.QStackedWidget_RemoveWidget(this.h, w.cPointer())
}

func (this *QStackedWidget) CurrentWidget() *QWidget {
	return newQWidget(C.QStackedWidget_CurrentWidget(this.h))
}

func (this *QStackedWidget) CurrentIndex() int {
	return (int)(C.QStackedWidget_CurrentIndex(this.h))
}

func (this *QStackedWidget) IndexOf(param1 *QWidget) int {
	return (int)(C.QStackedWidget_IndexOf(this.h, param1.cPointer()))
}

func (this *QStackedWidget) Widget(param1 int) *QWidget {
	return newQWidget(C.QStackedWidget_Widget(this.h, (C.int)(param1)))
}

func (this *QStackedWidget) Count() int {
	return (int)(C.QStackedWidget_Count(this.h))
}

func (this *QStackedWidget) SetCurrentIndex(index int) {
	C.QStackedWidget_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QStackedWidget) SetCurrentWidget(w *QWidget) {
	C.QStackedWidget_SetCurrentWidget(this.h, w.cPointer())
}

func (this *QStackedWidget) CurrentChanged(param1 int) {
	C.QStackedWidget_CurrentChanged(this.h, (C.int)(param1))
}
func (this *QStackedWidget) OnCurrentChanged(slot func(param1 int)) {
	C.QStackedWidget_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedWidget_CurrentChanged
func miqt_exec_callback_QStackedWidget_CurrentChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QStackedWidget) WidgetRemoved(index int) {
	C.QStackedWidget_WidgetRemoved(this.h, (C.int)(index))
}
func (this *QStackedWidget) OnWidgetRemoved(slot func(index int)) {
	C.QStackedWidget_connect_WidgetRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedWidget_WidgetRemoved
func miqt_exec_callback_QStackedWidget_WidgetRemoved(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func QStackedWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QStackedWidget_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QStackedWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QStackedWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_Event
func miqt_exec_callback_QStackedWidget_Event(self *C.QStackedWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QStackedWidget_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QStackedWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_SizeHint
func miqt_exec_callback_QStackedWidget_SizeHint(self *C.QStackedWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QStackedWidget) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QStackedWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStackedWidget) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QStackedWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_PaintEvent
func miqt_exec_callback_QStackedWidget_PaintEvent(self *C.QStackedWidget, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QStackedWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStackedWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QStackedWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ChangeEvent
func miqt_exec_callback_QStackedWidget_ChangeEvent(self *C.QStackedWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QStackedWidget) Delete() {
	C.QStackedWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStackedWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QStackedWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qwt

/*

#include "gen_qwt_picker_machine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPickerMachine__SelectionType int

const (
	QwtPickerMachine__NoSelection      QwtPickerMachine__SelectionType = -1
	QwtPickerMachine__PointSelection   QwtPickerMachine__SelectionType = 0
	QwtPickerMachine__RectSelection    QwtPickerMachine__SelectionType = 1
	QwtPickerMachine__PolygonSelection QwtPickerMachine__SelectionType = 2
)

type QwtPickerMachine__Command int

const (
	QwtPickerMachine__Begin  QwtPickerMachine__Command = 0
	QwtPickerMachine__Append QwtPickerMachine__Command = 1
	QwtPickerMachine__Move   QwtPickerMachine__Command = 2
	QwtPickerMachine__Remove QwtPickerMachine__Command = 3
	QwtPickerMachine__End    QwtPickerMachine__Command = 4
)

type QwtPickerMachine struct {
	h *C.QwtPickerMachine
}

func (this *QwtPickerMachine) cPointer() *C.QwtPickerMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerMachine constructs the type using only CGO pointers.
func newQwtPickerMachine(h *C.QwtPickerMachine) *QwtPickerMachine {
	if h == nil {
		return nil
	}

	return &QwtPickerMachine{h: h}
}

// UnsafeNewQwtPickerMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerMachine(h unsafe.Pointer) *QwtPickerMachine {
	return newQwtPickerMachine((*C.QwtPickerMachine)(h))
}

// NewQwtPickerMachine constructs a new QwtPickerMachine object.
func NewQwtPickerMachine(param1 QwtPickerMachine__SelectionType) *QwtPickerMachine {

	return newQwtPickerMachine(C.QwtPickerMachine_new((C.int)(param1)))
}

// NewQwtPickerMachine2 constructs a new QwtPickerMachine object.
func NewQwtPickerMachine2(param1 *QwtPickerMachine) *QwtPickerMachine {

	return newQwtPickerMachine(C.QwtPickerMachine_new2(param1.cPointer()))
}

func (this *QwtPickerMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerMachine) Reset() {
	C.QwtPickerMachine_reset(this.h)
}

func (this *QwtPickerMachine) State() int {
	return (int)(C.QwtPickerMachine_state(this.h))
}

func (this *QwtPickerMachine) SetState(state int) {
	C.QwtPickerMachine_setState(this.h, (C.int)(state))
}

func (this *QwtPickerMachine) SelectionType() QwtPickerMachine__SelectionType {
	return (QwtPickerMachine__SelectionType)(C.QwtPickerMachine_selectionType(this.h))
}
func (this *QwtPickerMachine) OnTransition(slot func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerMachine_transition
func miqt_exec_callback_QwtPickerMachine_transition(self *C.QwtPickerMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc(slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerMachine) Delete() {
	C.QwtPickerMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPickerTrackerMachine struct {
	h *C.QwtPickerTrackerMachine
	*QwtPickerMachine
}

func (this *QwtPickerTrackerMachine) cPointer() *C.QwtPickerTrackerMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerTrackerMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerTrackerMachine constructs the type using only CGO pointers.
func newQwtPickerTrackerMachine(h *C.QwtPickerTrackerMachine) *QwtPickerTrackerMachine {
	if h == nil {
		return nil
	}
	var outptr_QwtPickerMachine *C.QwtPickerMachine = nil
	C.QwtPickerTrackerMachine_virtbase(h, &outptr_QwtPickerMachine)

	return &QwtPickerTrackerMachine{h: h,
		QwtPickerMachine: newQwtPickerMachine(outptr_QwtPickerMachine)}
}

// UnsafeNewQwtPickerTrackerMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerTrackerMachine(h unsafe.Pointer) *QwtPickerTrackerMachine {
	return newQwtPickerTrackerMachine((*C.QwtPickerTrackerMachine)(h))
}

// NewQwtPickerTrackerMachine constructs a new QwtPickerTrackerMachine object.
func NewQwtPickerTrackerMachine() *QwtPickerTrackerMachine {

	return newQwtPickerTrackerMachine(C.QwtPickerTrackerMachine_new())
}

// NewQwtPickerTrackerMachine2 constructs a new QwtPickerTrackerMachine object.
func NewQwtPickerTrackerMachine2(param1 *QwtPickerTrackerMachine) *QwtPickerTrackerMachine {

	return newQwtPickerTrackerMachine(C.QwtPickerTrackerMachine_new2(param1.cPointer()))
}

func (this *QwtPickerTrackerMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerTrackerMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerTrackerMachine) callVirtualBase_Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {

	var _ma C.struct_miqt_array = C.QwtPickerTrackerMachine_virtualbase_transition(unsafe.Pointer(this.h), param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret

}
func (this *QwtPickerTrackerMachine) OnTransition(slot func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerTrackerMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerTrackerMachine_transition
func miqt_exec_callback_QwtPickerTrackerMachine_transition(self *C.QwtPickerTrackerMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPickerTrackerMachine{h: self}).callVirtualBase_Transition, slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerTrackerMachine) Delete() {
	C.QwtPickerTrackerMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerTrackerMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerTrackerMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPickerClickPointMachine struct {
	h *C.QwtPickerClickPointMachine
	*QwtPickerMachine
}

func (this *QwtPickerClickPointMachine) cPointer() *C.QwtPickerClickPointMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerClickPointMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerClickPointMachine constructs the type using only CGO pointers.
func newQwtPickerClickPointMachine(h *C.QwtPickerClickPointMachine) *QwtPickerClickPointMachine {
	if h == nil {
		return nil
	}
	var outptr_QwtPickerMachine *C.QwtPickerMachine = nil
	C.QwtPickerClickPointMachine_virtbase(h, &outptr_QwtPickerMachine)

	return &QwtPickerClickPointMachine{h: h,
		QwtPickerMachine: newQwtPickerMachine(outptr_QwtPickerMachine)}
}

// UnsafeNewQwtPickerClickPointMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerClickPointMachine(h unsafe.Pointer) *QwtPickerClickPointMachine {
	return newQwtPickerClickPointMachine((*C.QwtPickerClickPointMachine)(h))
}

// NewQwtPickerClickPointMachine constructs a new QwtPickerClickPointMachine object.
func NewQwtPickerClickPointMachine() *QwtPickerClickPointMachine {

	return newQwtPickerClickPointMachine(C.QwtPickerClickPointMachine_new())
}

// NewQwtPickerClickPointMachine2 constructs a new QwtPickerClickPointMachine object.
func NewQwtPickerClickPointMachine2(param1 *QwtPickerClickPointMachine) *QwtPickerClickPointMachine {

	return newQwtPickerClickPointMachine(C.QwtPickerClickPointMachine_new2(param1.cPointer()))
}

func (this *QwtPickerClickPointMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerClickPointMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerClickPointMachine) callVirtualBase_Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {

	var _ma C.struct_miqt_array = C.QwtPickerClickPointMachine_virtualbase_transition(unsafe.Pointer(this.h), param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret

}
func (this *QwtPickerClickPointMachine) OnTransition(slot func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerClickPointMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerClickPointMachine_transition
func miqt_exec_callback_QwtPickerClickPointMachine_transition(self *C.QwtPickerClickPointMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPickerClickPointMachine{h: self}).callVirtualBase_Transition, slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerClickPointMachine) Delete() {
	C.QwtPickerClickPointMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerClickPointMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerClickPointMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPickerDragPointMachine struct {
	h *C.QwtPickerDragPointMachine
	*QwtPickerMachine
}

func (this *QwtPickerDragPointMachine) cPointer() *C.QwtPickerDragPointMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerDragPointMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerDragPointMachine constructs the type using only CGO pointers.
func newQwtPickerDragPointMachine(h *C.QwtPickerDragPointMachine) *QwtPickerDragPointMachine {
	if h == nil {
		return nil
	}
	var outptr_QwtPickerMachine *C.QwtPickerMachine = nil
	C.QwtPickerDragPointMachine_virtbase(h, &outptr_QwtPickerMachine)

	return &QwtPickerDragPointMachine{h: h,
		QwtPickerMachine: newQwtPickerMachine(outptr_QwtPickerMachine)}
}

// UnsafeNewQwtPickerDragPointMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerDragPointMachine(h unsafe.Pointer) *QwtPickerDragPointMachine {
	return newQwtPickerDragPointMachine((*C.QwtPickerDragPointMachine)(h))
}

// NewQwtPickerDragPointMachine constructs a new QwtPickerDragPointMachine object.
func NewQwtPickerDragPointMachine() *QwtPickerDragPointMachine {

	return newQwtPickerDragPointMachine(C.QwtPickerDragPointMachine_new())
}

// NewQwtPickerDragPointMachine2 constructs a new QwtPickerDragPointMachine object.
func NewQwtPickerDragPointMachine2(param1 *QwtPickerDragPointMachine) *QwtPickerDragPointMachine {

	return newQwtPickerDragPointMachine(C.QwtPickerDragPointMachine_new2(param1.cPointer()))
}

func (this *QwtPickerDragPointMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerDragPointMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerDragPointMachine) callVirtualBase_Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {

	var _ma C.struct_miqt_array = C.QwtPickerDragPointMachine_virtualbase_transition(unsafe.Pointer(this.h), param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret

}
func (this *QwtPickerDragPointMachine) OnTransition(slot func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerDragPointMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerDragPointMachine_transition
func miqt_exec_callback_QwtPickerDragPointMachine_transition(self *C.QwtPickerDragPointMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPickerDragPointMachine{h: self}).callVirtualBase_Transition, slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerDragPointMachine) Delete() {
	C.QwtPickerDragPointMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerDragPointMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerDragPointMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPickerClickRectMachine struct {
	h *C.QwtPickerClickRectMachine
	*QwtPickerMachine
}

func (this *QwtPickerClickRectMachine) cPointer() *C.QwtPickerClickRectMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerClickRectMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerClickRectMachine constructs the type using only CGO pointers.
func newQwtPickerClickRectMachine(h *C.QwtPickerClickRectMachine) *QwtPickerClickRectMachine {
	if h == nil {
		return nil
	}
	var outptr_QwtPickerMachine *C.QwtPickerMachine = nil
	C.QwtPickerClickRectMachine_virtbase(h, &outptr_QwtPickerMachine)

	return &QwtPickerClickRectMachine{h: h,
		QwtPickerMachine: newQwtPickerMachine(outptr_QwtPickerMachine)}
}

// UnsafeNewQwtPickerClickRectMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerClickRectMachine(h unsafe.Pointer) *QwtPickerClickRectMachine {
	return newQwtPickerClickRectMachine((*C.QwtPickerClickRectMachine)(h))
}

// NewQwtPickerClickRectMachine constructs a new QwtPickerClickRectMachine object.
func NewQwtPickerClickRectMachine() *QwtPickerClickRectMachine {

	return newQwtPickerClickRectMachine(C.QwtPickerClickRectMachine_new())
}

// NewQwtPickerClickRectMachine2 constructs a new QwtPickerClickRectMachine object.
func NewQwtPickerClickRectMachine2(param1 *QwtPickerClickRectMachine) *QwtPickerClickRectMachine {

	return newQwtPickerClickRectMachine(C.QwtPickerClickRectMachine_new2(param1.cPointer()))
}

func (this *QwtPickerClickRectMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerClickRectMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerClickRectMachine) callVirtualBase_Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {

	var _ma C.struct_miqt_array = C.QwtPickerClickRectMachine_virtualbase_transition(unsafe.Pointer(this.h), param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret

}
func (this *QwtPickerClickRectMachine) OnTransition(slot func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerClickRectMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerClickRectMachine_transition
func miqt_exec_callback_QwtPickerClickRectMachine_transition(self *C.QwtPickerClickRectMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPickerClickRectMachine{h: self}).callVirtualBase_Transition, slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerClickRectMachine) Delete() {
	C.QwtPickerClickRectMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerClickRectMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerClickRectMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPickerDragRectMachine struct {
	h *C.QwtPickerDragRectMachine
	*QwtPickerMachine
}

func (this *QwtPickerDragRectMachine) cPointer() *C.QwtPickerDragRectMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerDragRectMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerDragRectMachine constructs the type using only CGO pointers.
func newQwtPickerDragRectMachine(h *C.QwtPickerDragRectMachine) *QwtPickerDragRectMachine {
	if h == nil {
		return nil
	}
	var outptr_QwtPickerMachine *C.QwtPickerMachine = nil
	C.QwtPickerDragRectMachine_virtbase(h, &outptr_QwtPickerMachine)

	return &QwtPickerDragRectMachine{h: h,
		QwtPickerMachine: newQwtPickerMachine(outptr_QwtPickerMachine)}
}

// UnsafeNewQwtPickerDragRectMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerDragRectMachine(h unsafe.Pointer) *QwtPickerDragRectMachine {
	return newQwtPickerDragRectMachine((*C.QwtPickerDragRectMachine)(h))
}

// NewQwtPickerDragRectMachine constructs a new QwtPickerDragRectMachine object.
func NewQwtPickerDragRectMachine() *QwtPickerDragRectMachine {

	return newQwtPickerDragRectMachine(C.QwtPickerDragRectMachine_new())
}

// NewQwtPickerDragRectMachine2 constructs a new QwtPickerDragRectMachine object.
func NewQwtPickerDragRectMachine2(param1 *QwtPickerDragRectMachine) *QwtPickerDragRectMachine {

	return newQwtPickerDragRectMachine(C.QwtPickerDragRectMachine_new2(param1.cPointer()))
}

func (this *QwtPickerDragRectMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerDragRectMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerDragRectMachine) callVirtualBase_Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {

	var _ma C.struct_miqt_array = C.QwtPickerDragRectMachine_virtualbase_transition(unsafe.Pointer(this.h), param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret

}
func (this *QwtPickerDragRectMachine) OnTransition(slot func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerDragRectMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerDragRectMachine_transition
func miqt_exec_callback_QwtPickerDragRectMachine_transition(self *C.QwtPickerDragRectMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPickerDragRectMachine{h: self}).callVirtualBase_Transition, slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerDragRectMachine) Delete() {
	C.QwtPickerDragRectMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerDragRectMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerDragRectMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPickerDragLineMachine struct {
	h *C.QwtPickerDragLineMachine
	*QwtPickerMachine
}

func (this *QwtPickerDragLineMachine) cPointer() *C.QwtPickerDragLineMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerDragLineMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerDragLineMachine constructs the type using only CGO pointers.
func newQwtPickerDragLineMachine(h *C.QwtPickerDragLineMachine) *QwtPickerDragLineMachine {
	if h == nil {
		return nil
	}
	var outptr_QwtPickerMachine *C.QwtPickerMachine = nil
	C.QwtPickerDragLineMachine_virtbase(h, &outptr_QwtPickerMachine)

	return &QwtPickerDragLineMachine{h: h,
		QwtPickerMachine: newQwtPickerMachine(outptr_QwtPickerMachine)}
}

// UnsafeNewQwtPickerDragLineMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerDragLineMachine(h unsafe.Pointer) *QwtPickerDragLineMachine {
	return newQwtPickerDragLineMachine((*C.QwtPickerDragLineMachine)(h))
}

// NewQwtPickerDragLineMachine constructs a new QwtPickerDragLineMachine object.
func NewQwtPickerDragLineMachine() *QwtPickerDragLineMachine {

	return newQwtPickerDragLineMachine(C.QwtPickerDragLineMachine_new())
}

// NewQwtPickerDragLineMachine2 constructs a new QwtPickerDragLineMachine object.
func NewQwtPickerDragLineMachine2(param1 *QwtPickerDragLineMachine) *QwtPickerDragLineMachine {

	return newQwtPickerDragLineMachine(C.QwtPickerDragLineMachine_new2(param1.cPointer()))
}

func (this *QwtPickerDragLineMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerDragLineMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerDragLineMachine) callVirtualBase_Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {

	var _ma C.struct_miqt_array = C.QwtPickerDragLineMachine_virtualbase_transition(unsafe.Pointer(this.h), param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret

}
func (this *QwtPickerDragLineMachine) OnTransition(slot func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerDragLineMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerDragLineMachine_transition
func miqt_exec_callback_QwtPickerDragLineMachine_transition(self *C.QwtPickerDragLineMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPickerDragLineMachine{h: self}).callVirtualBase_Transition, slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerDragLineMachine) Delete() {
	C.QwtPickerDragLineMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerDragLineMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerDragLineMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPickerPolygonMachine struct {
	h *C.QwtPickerPolygonMachine
	*QwtPickerMachine
}

func (this *QwtPickerPolygonMachine) cPointer() *C.QwtPickerPolygonMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPickerPolygonMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPickerPolygonMachine constructs the type using only CGO pointers.
func newQwtPickerPolygonMachine(h *C.QwtPickerPolygonMachine) *QwtPickerPolygonMachine {
	if h == nil {
		return nil
	}
	var outptr_QwtPickerMachine *C.QwtPickerMachine = nil
	C.QwtPickerPolygonMachine_virtbase(h, &outptr_QwtPickerMachine)

	return &QwtPickerPolygonMachine{h: h,
		QwtPickerMachine: newQwtPickerMachine(outptr_QwtPickerMachine)}
}

// UnsafeNewQwtPickerPolygonMachine constructs the type using only unsafe pointers.
func UnsafeNewQwtPickerPolygonMachine(h unsafe.Pointer) *QwtPickerPolygonMachine {
	return newQwtPickerPolygonMachine((*C.QwtPickerPolygonMachine)(h))
}

// NewQwtPickerPolygonMachine constructs a new QwtPickerPolygonMachine object.
func NewQwtPickerPolygonMachine() *QwtPickerPolygonMachine {

	return newQwtPickerPolygonMachine(C.QwtPickerPolygonMachine_new())
}

// NewQwtPickerPolygonMachine2 constructs a new QwtPickerPolygonMachine object.
func NewQwtPickerPolygonMachine2(param1 *QwtPickerPolygonMachine) *QwtPickerPolygonMachine {

	return newQwtPickerPolygonMachine(C.QwtPickerPolygonMachine_new2(param1.cPointer()))
}

func (this *QwtPickerPolygonMachine) Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {
	var _ma C.struct_miqt_array = C.QwtPickerPolygonMachine_transition(this.h, param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret
}

func (this *QwtPickerPolygonMachine) callVirtualBase_Transition(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command {

	var _ma C.struct_miqt_array = C.QwtPickerPolygonMachine_virtualbase_transition(unsafe.Pointer(this.h), param1.cPointer(), (*C.QEvent)(param2.UnsafePointer()))
	_ret := make([]QwtPickerMachine__Command, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QwtPickerMachine__Command)(_outCast[i])
	}
	return _ret

}
func (this *QwtPickerPolygonMachine) OnTransition(slot func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command) {
	ok := C.QwtPickerPolygonMachine_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPickerPolygonMachine_transition
func miqt_exec_callback_QwtPickerPolygonMachine_transition(self *C.QwtPickerPolygonMachine, cb C.intptr_t, param1 *C.QwtEventPattern, param2 *C.QEvent) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command, param1 *QwtEventPattern, param2 *qt.QEvent) []QwtPickerMachine__Command)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern(param1)

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPickerPolygonMachine{h: self}).callVirtualBase_Transition, slotval1, slotval2)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtPickerPolygonMachine) Delete() {
	C.QwtPickerPolygonMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPickerPolygonMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPickerPolygonMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qundogroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QUndoGroup struct {
	h *C.QUndoGroup
	*QObject
}

func (this *QUndoGroup) cPointer() *C.QUndoGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUndoGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUndoGroup constructs the type using only CGO pointers.
func newQUndoGroup(h *C.QUndoGroup) *QUndoGroup {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QUndoGroup_virtbase(h, &outptr_QObject)

	return &QUndoGroup{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQUndoGroup constructs the type using only unsafe pointers.
func UnsafeNewQUndoGroup(h unsafe.Pointer) *QUndoGroup {
	return newQUndoGroup((*C.QUndoGroup)(h))
}

// NewQUndoGroup constructs a new QUndoGroup object.
func NewQUndoGroup() *QUndoGroup {

	return newQUndoGroup(C.QUndoGroup_new())
}

// NewQUndoGroup2 constructs a new QUndoGroup object.
func NewQUndoGroup2(parent *QObject) *QUndoGroup {

	return newQUndoGroup(C.QUndoGroup_new2(parent.cPointer()))
}

func (this *QUndoGroup) MetaObject() *QMetaObject {
	return newQMetaObject(C.QUndoGroup_metaObject(this.h))
}

func (this *QUndoGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUndoGroup_metacast(this.h, param1_Cstring))
}

func QUndoGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoGroup_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) AddStack(stack *QUndoStack) {
	C.QUndoGroup_addStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) RemoveStack(stack *QUndoStack) {
	C.QUndoGroup_removeStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) Stacks() []*QUndoStack {
	var _ma C.struct_miqt_array = C.QUndoGroup_stacks(this.h)
	_ret := make([]*QUndoStack, int(_ma.len))
	_outCast := (*[0xffff]*C.QUndoStack)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQUndoStack(_outCast[i])
	}
	return _ret
}

func (this *QUndoGroup) ActiveStack() *QUndoStack {
	return newQUndoStack(C.QUndoGroup_activeStack(this.h))
}

func (this *QUndoGroup) CreateUndoAction(parent *QObject) *QAction {
	return newQAction(C.QUndoGroup_createUndoAction(this.h, parent.cPointer()))
}

func (this *QUndoGroup) CreateRedoAction(parent *QObject) *QAction {
	return newQAction(C.QUndoGroup_createRedoAction(this.h, parent.cPointer()))
}

func (this *QUndoGroup) CanUndo() bool {
	return (bool)(C.QUndoGroup_canUndo(this.h))
}

func (this *QUndoGroup) CanRedo() bool {
	return (bool)(C.QUndoGroup_canRedo(this.h))
}

func (this *QUndoGroup) UndoText() string {
	var _ms C.struct_miqt_string = C.QUndoGroup_undoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) RedoText() string {
	var _ms C.struct_miqt_string = C.QUndoGroup_redoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) IsClean() bool {
	return (bool)(C.QUndoGroup_isClean(this.h))
}

func (this *QUndoGroup) Undo() {
	C.QUndoGroup_undo(this.h)
}

func (this *QUndoGroup) Redo() {
	C.QUndoGroup_redo(this.h)
}

func (this *QUndoGroup) SetActiveStack(stack *QUndoStack) {
	C.QUndoGroup_setActiveStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) ActiveStackChanged(stack *QUndoStack) {
	C.QUndoGroup_activeStackChanged(this.h, stack.cPointer())
}
func (this *QUndoGroup) OnActiveStackChanged(slot func(stack *QUndoStack)) {
	C.QUndoGroup_connect_activeStackChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_activeStackChanged
func miqt_exec_callback_QUndoGroup_activeStackChanged(cb C.intptr_t, stack *C.QUndoStack) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stack *QUndoStack))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUndoStack(stack)

	gofunc(slotval1)
}

func (this *QUndoGroup) IndexChanged(idx int) {
	C.QUndoGroup_indexChanged(this.h, (C.int)(idx))
}
func (this *QUndoGroup) OnIndexChanged(slot func(idx int)) {
	C.QUndoGroup_connect_indexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_indexChanged
func miqt_exec_callback_QUndoGroup_indexChanged(cb C.intptr_t, idx C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(idx int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(idx)

	gofunc(slotval1)
}

func (this *QUndoGroup) CleanChanged(clean bool) {
	C.QUndoGroup_cleanChanged(this.h, (C.bool)(clean))
}
func (this *QUndoGroup) OnCleanChanged(slot func(clean bool)) {
	C.QUndoGroup_connect_cleanChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_cleanChanged
func miqt_exec_callback_QUndoGroup_cleanChanged(cb C.intptr_t, clean C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clean bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clean)

	gofunc(slotval1)
}

func (this *QUndoGroup) CanUndoChanged(canUndo bool) {
	C.QUndoGroup_canUndoChanged(this.h, (C.bool)(canUndo))
}
func (this *QUndoGroup) OnCanUndoChanged(slot func(canUndo bool)) {
	C.QUndoGroup_connect_canUndoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_canUndoChanged
func miqt_exec_callback_QUndoGroup_canUndoChanged(cb C.intptr_t, canUndo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canUndo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canUndo)

	gofunc(slotval1)
}

func (this *QUndoGroup) CanRedoChanged(canRedo bool) {
	C.QUndoGroup_canRedoChanged(this.h, (C.bool)(canRedo))
}
func (this *QUndoGroup) OnCanRedoChanged(slot func(canRedo bool)) {
	C.QUndoGroup_connect_canRedoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_canRedoChanged
func miqt_exec_callback_QUndoGroup_canRedoChanged(cb C.intptr_t, canRedo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canRedo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canRedo)

	gofunc(slotval1)
}

func (this *QUndoGroup) UndoTextChanged(undoText string) {
	undoText_ms := C.struct_miqt_string{}
	undoText_ms.data = C.CString(undoText)
	undoText_ms.len = C.size_t(len(undoText))
	defer C.free(unsafe.Pointer(undoText_ms.data))
	C.QUndoGroup_undoTextChanged(this.h, undoText_ms)
}
func (this *QUndoGroup) OnUndoTextChanged(slot func(undoText string)) {
	C.QUndoGroup_connect_undoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_undoTextChanged
func miqt_exec_callback_QUndoGroup_undoTextChanged(cb C.intptr_t, undoText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(undoText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var undoText_ms C.struct_miqt_string = undoText
	undoText_ret := C.GoStringN(undoText_ms.data, C.int(int64(undoText_ms.len)))
	C.free(unsafe.Pointer(undoText_ms.data))
	slotval1 := undoText_ret

	gofunc(slotval1)
}

func (this *QUndoGroup) RedoTextChanged(redoText string) {
	redoText_ms := C.struct_miqt_string{}
	redoText_ms.data = C.CString(redoText)
	redoText_ms.len = C.size_t(len(redoText))
	defer C.free(unsafe.Pointer(redoText_ms.data))
	C.QUndoGroup_redoTextChanged(this.h, redoText_ms)
}
func (this *QUndoGroup) OnRedoTextChanged(slot func(redoText string)) {
	C.QUndoGroup_connect_redoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_redoTextChanged
func miqt_exec_callback_QUndoGroup_redoTextChanged(cb C.intptr_t, redoText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(redoText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var redoText_ms C.struct_miqt_string = redoText
	redoText_ret := C.GoStringN(redoText_ms.data, C.int(int64(redoText_ms.len)))
	C.free(unsafe.Pointer(redoText_ms.data))
	slotval1 := redoText_ret

	gofunc(slotval1)
}

func QUndoGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoGroup_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoGroup_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) CreateUndoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return newQAction(C.QUndoGroup_createUndoAction2(this.h, parent.cPointer(), prefix_ms))
}

func (this *QUndoGroup) CreateRedoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return newQAction(C.QUndoGroup_createRedoAction2(this.h, parent.cPointer(), prefix_ms))
}

func (this *QUndoGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QUndoGroup_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QUndoGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QUndoGroup_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoGroup_event
func miqt_exec_callback_QUndoGroup_event(self *C.QUndoGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QUndoGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoGroup) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QUndoGroup_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QUndoGroup) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QUndoGroup_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoGroup_eventFilter
func miqt_exec_callback_QUndoGroup_eventFilter(self *C.QUndoGroup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QUndoGroup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QUndoGroup) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QUndoGroup_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoGroup) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QUndoGroup_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoGroup_timerEvent
func miqt_exec_callback_QUndoGroup_timerEvent(self *C.QUndoGroup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QUndoGroup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QUndoGroup) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QUndoGroup_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoGroup) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QUndoGroup_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoGroup_childEvent
func miqt_exec_callback_QUndoGroup_childEvent(self *C.QUndoGroup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QUndoGroup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QUndoGroup) callVirtualBase_CustomEvent(event *QEvent) {

	C.QUndoGroup_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoGroup) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QUndoGroup_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoGroup_customEvent
func miqt_exec_callback_QUndoGroup_customEvent(self *C.QUndoGroup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QUndoGroup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QUndoGroup) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QUndoGroup_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QUndoGroup) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QUndoGroup_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoGroup_connectNotify
func miqt_exec_callback_QUndoGroup_connectNotify(self *C.QUndoGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QUndoGroup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QUndoGroup) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QUndoGroup_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QUndoGroup) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QUndoGroup_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoGroup_disconnectNotify
func miqt_exec_callback_QUndoGroup_disconnectNotify(self *C.QUndoGroup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QUndoGroup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QUndoGroup) Delete() {
	C.QUndoGroup_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

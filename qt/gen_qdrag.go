package qt

/*

#include "gen_qdrag.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDrag struct {
	h *C.QDrag
	*QObject
}

func (this *QDrag) cPointer() *C.QDrag {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDrag) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDrag constructs the type using only CGO pointers.
func newQDrag(h *C.QDrag) *QDrag {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDrag_virtbase(h, &outptr_QObject)

	return &QDrag{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQDrag constructs the type using only unsafe pointers.
func UnsafeNewQDrag(h unsafe.Pointer) *QDrag {
	return newQDrag((*C.QDrag)(h))
}

// NewQDrag constructs a new QDrag object.
func NewQDrag(dragSource *QObject) *QDrag {

	return newQDrag(C.QDrag_new(dragSource.cPointer()))
}

func (this *QDrag) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDrag_metaObject(this.h))
}

func (this *QDrag) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDrag_metacast(this.h, param1_Cstring))
}

func QDrag_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDrag) SetMimeData(data *QMimeData) {
	C.QDrag_setMimeData(this.h, data.cPointer())
}

func (this *QDrag) MimeData() *QMimeData {
	return newQMimeData(C.QDrag_mimeData(this.h))
}

func (this *QDrag) SetPixmap(pixmap *QPixmap) {
	C.QDrag_setPixmap(this.h, pixmap.cPointer())
}

func (this *QDrag) Pixmap() *QPixmap {
	_goptr := newQPixmap(C.QDrag_pixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) SetHotSpot(hotspot *QPoint) {
	C.QDrag_setHotSpot(this.h, hotspot.cPointer())
}

func (this *QDrag) HotSpot() *QPoint {
	_goptr := newQPoint(C.QDrag_hotSpot(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) Source() *QObject {
	return newQObject(C.QDrag_source(this.h))
}

func (this *QDrag) Target() *QObject {
	return newQObject(C.QDrag_target(this.h))
}

func (this *QDrag) Start() DropAction {
	return (DropAction)(C.QDrag_start(this.h))
}

func (this *QDrag) Exec() DropAction {
	return (DropAction)(C.QDrag_exec(this.h))
}

func (this *QDrag) Exec2(supportedActions DropAction, defaultAction DropAction) DropAction {
	return (DropAction)(C.QDrag_exec2(this.h, (C.int)(supportedActions), (C.int)(defaultAction)))
}

func (this *QDrag) SetDragCursor(cursor *QPixmap, action DropAction) {
	C.QDrag_setDragCursor(this.h, cursor.cPointer(), (C.int)(action))
}

func (this *QDrag) DragCursor(action DropAction) *QPixmap {
	_goptr := newQPixmap(C.QDrag_dragCursor(this.h, (C.int)(action)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) SupportedActions() DropAction {
	return (DropAction)(C.QDrag_supportedActions(this.h))
}

func (this *QDrag) DefaultAction() DropAction {
	return (DropAction)(C.QDrag_defaultAction(this.h))
}

func QDrag_Cancel() {
	C.QDrag_cancel()
}

func (this *QDrag) ActionChanged(action DropAction) {
	C.QDrag_actionChanged(this.h, (C.int)(action))
}
func (this *QDrag) OnActionChanged(slot func(action DropAction)) {
	C.QDrag_connect_actionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_actionChanged
func miqt_exec_callback_QDrag_actionChanged(cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(action)

	gofunc(slotval1)
}

func (this *QDrag) TargetChanged(newTarget *QObject) {
	C.QDrag_targetChanged(this.h, newTarget.cPointer())
}
func (this *QDrag) OnTargetChanged(slot func(newTarget *QObject)) {
	C.QDrag_connect_targetChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_targetChanged
func miqt_exec_callback_QDrag_targetChanged(cb C.intptr_t, newTarget *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newTarget *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(newTarget)

	gofunc(slotval1)
}

func QDrag_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDrag) Start1(supportedActions DropAction) DropAction {
	return (DropAction)(C.QDrag_start1(this.h, (C.int)(supportedActions)))
}

func (this *QDrag) Exec1(supportedActions DropAction) DropAction {
	return (DropAction)(C.QDrag_exec1(this.h, (C.int)(supportedActions)))
}

// Sender can only be called from a QDrag that was directly constructed.
func (this *QDrag) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QDrag_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDrag that was directly constructed.
func (this *QDrag) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDrag_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDrag that was directly constructed.
func (this *QDrag) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDrag_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDrag that was directly constructed.
func (this *QDrag) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDrag_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDrag) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDrag_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDrag) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDrag_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDrag_event
func miqt_exec_callback_QDrag_event(self *C.QDrag, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDrag{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDrag) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDrag_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDrag) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDrag_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDrag_eventFilter
func miqt_exec_callback_QDrag_eventFilter(self *C.QDrag, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDrag{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDrag) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDrag_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDrag) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDrag_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDrag_timerEvent
func miqt_exec_callback_QDrag_timerEvent(self *C.QDrag, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDrag{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDrag) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDrag_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDrag) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDrag_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDrag_childEvent
func miqt_exec_callback_QDrag_childEvent(self *C.QDrag, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDrag{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDrag) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDrag_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDrag) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDrag_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDrag_customEvent
func miqt_exec_callback_QDrag_customEvent(self *C.QDrag, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDrag{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDrag) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDrag_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDrag) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDrag_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDrag_connectNotify
func miqt_exec_callback_QDrag_connectNotify(self *C.QDrag, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDrag{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDrag) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDrag_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDrag) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDrag_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDrag_disconnectNotify
func miqt_exec_callback_QDrag_disconnectNotify(self *C.QDrag, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDrag{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDrag) Delete() {
	C.QDrag_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDrag) GoGC() {
	runtime.SetFinalizer(this, func(this *QDrag) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

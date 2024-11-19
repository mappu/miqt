package qt6

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
	h          *C.QDrag
	isSubclass bool
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
func newQDrag(h *C.QDrag, h_QObject *C.QObject) *QDrag {
	if h == nil {
		return nil
	}
	return &QDrag{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQDrag constructs the type using only unsafe pointers.
func UnsafeNewQDrag(h unsafe.Pointer, h_QObject unsafe.Pointer) *QDrag {
	if h == nil {
		return nil
	}

	return &QDrag{h: (*C.QDrag)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQDrag constructs a new QDrag object.
func NewQDrag(dragSource *QObject) *QDrag {
	var outptr_QDrag *C.QDrag = nil
	var outptr_QObject *C.QObject = nil

	C.QDrag_new(dragSource.cPointer(), &outptr_QDrag, &outptr_QObject)
	ret := newQDrag(outptr_QDrag, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QDrag) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDrag_MetaObject(this.h)))
}

func (this *QDrag) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDrag_Metacast(this.h, param1_Cstring))
}

func QDrag_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDrag) SetMimeData(data *QMimeData) {
	C.QDrag_SetMimeData(this.h, data.cPointer())
}

func (this *QDrag) MimeData() *QMimeData {
	return UnsafeNewQMimeData(unsafe.Pointer(C.QDrag_MimeData(this.h)), nil)
}

func (this *QDrag) SetPixmap(pixmap *QPixmap) {
	C.QDrag_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QDrag) Pixmap() *QPixmap {
	_ret := C.QDrag_Pixmap(this.h)
	_goptr := newQPixmap(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) SetHotSpot(hotspot *QPoint) {
	C.QDrag_SetHotSpot(this.h, hotspot.cPointer())
}

func (this *QDrag) HotSpot() *QPoint {
	_ret := C.QDrag_HotSpot(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) Source() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QDrag_Source(this.h)))
}

func (this *QDrag) Target() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QDrag_Target(this.h)))
}

func (this *QDrag) Exec() DropAction {
	return (DropAction)(C.QDrag_Exec(this.h))
}

func (this *QDrag) Exec2(supportedActions DropAction, defaultAction DropAction) DropAction {
	return (DropAction)(C.QDrag_Exec2(this.h, (C.int)(supportedActions), (C.int)(defaultAction)))
}

func (this *QDrag) SetDragCursor(cursor *QPixmap, action DropAction) {
	C.QDrag_SetDragCursor(this.h, cursor.cPointer(), (C.int)(action))
}

func (this *QDrag) DragCursor(action DropAction) *QPixmap {
	_ret := C.QDrag_DragCursor(this.h, (C.int)(action))
	_goptr := newQPixmap(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDrag) SupportedActions() DropAction {
	return (DropAction)(C.QDrag_SupportedActions(this.h))
}

func (this *QDrag) DefaultAction() DropAction {
	return (DropAction)(C.QDrag_DefaultAction(this.h))
}

func QDrag_Cancel() {
	C.QDrag_Cancel()
}

func (this *QDrag) ActionChanged(action DropAction) {
	C.QDrag_ActionChanged(this.h, (C.int)(action))
}
func (this *QDrag) OnActionChanged(slot func(action DropAction)) {
	C.QDrag_connect_ActionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_ActionChanged
func miqt_exec_callback_QDrag_ActionChanged(cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(action DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(action)

	gofunc(slotval1)
}

func (this *QDrag) TargetChanged(newTarget *QObject) {
	C.QDrag_TargetChanged(this.h, newTarget.cPointer())
}
func (this *QDrag) OnTargetChanged(slot func(newTarget *QObject)) {
	C.QDrag_connect_TargetChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_TargetChanged
func miqt_exec_callback_QDrag_TargetChanged(cb C.intptr_t, newTarget *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newTarget *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(newTarget))

	gofunc(slotval1)
}

func QDrag_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDrag_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDrag_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDrag) Exec1(supportedActions DropAction) DropAction {
	return (DropAction)(C.QDrag_Exec1(this.h, (C.int)(supportedActions)))
}

func (this *QDrag) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDrag_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDrag) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QDrag_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_Event
func miqt_exec_callback_QDrag_Event(self *C.QDrag, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDrag{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDrag) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDrag_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDrag) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QDrag_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_EventFilter
func miqt_exec_callback_QDrag_EventFilter(self *C.QDrag, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDrag{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDrag) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDrag_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDrag) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QDrag_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_TimerEvent
func miqt_exec_callback_QDrag_TimerEvent(self *C.QDrag, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QDrag{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDrag) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDrag_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDrag) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QDrag_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_ChildEvent
func miqt_exec_callback_QDrag_ChildEvent(self *C.QDrag, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QDrag{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDrag) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDrag_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDrag) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QDrag_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_CustomEvent
func miqt_exec_callback_QDrag_CustomEvent(self *C.QDrag, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDrag{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDrag) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDrag_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDrag) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QDrag_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_ConnectNotify
func miqt_exec_callback_QDrag_ConnectNotify(self *C.QDrag, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDrag{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDrag) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDrag_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDrag) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QDrag_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDrag_DisconnectNotify
func miqt_exec_callback_QDrag_DisconnectNotify(self *C.QDrag, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDrag{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDrag) Delete() {
	C.QDrag_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDrag) GoGC() {
	runtime.SetFinalizer(this, func(this *QDrag) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

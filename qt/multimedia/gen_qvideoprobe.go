package multimedia

/*

#include "gen_qvideoprobe.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoProbe struct {
	h          *C.QVideoProbe
	isSubclass bool
	*qt.QObject
}

func (this *QVideoProbe) cPointer() *C.QVideoProbe {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoProbe) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoProbe constructs the type using only CGO pointers.
func newQVideoProbe(h *C.QVideoProbe, h_QObject *C.QObject) *QVideoProbe {
	if h == nil {
		return nil
	}
	return &QVideoProbe{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQVideoProbe constructs the type using only unsafe pointers.
func UnsafeNewQVideoProbe(h unsafe.Pointer, h_QObject unsafe.Pointer) *QVideoProbe {
	if h == nil {
		return nil
	}

	return &QVideoProbe{h: (*C.QVideoProbe)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQVideoProbe constructs a new QVideoProbe object.
func NewQVideoProbe() *QVideoProbe {
	var outptr_QVideoProbe *C.QVideoProbe = nil
	var outptr_QObject *C.QObject = nil

	C.QVideoProbe_new(&outptr_QVideoProbe, &outptr_QObject)
	ret := newQVideoProbe(outptr_QVideoProbe, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQVideoProbe2 constructs a new QVideoProbe object.
func NewQVideoProbe2(parent *qt.QObject) *QVideoProbe {
	var outptr_QVideoProbe *C.QVideoProbe = nil
	var outptr_QObject *C.QObject = nil

	C.QVideoProbe_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QVideoProbe, &outptr_QObject)
	ret := newQVideoProbe(outptr_QVideoProbe, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QVideoProbe) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoProbe_MetaObject(this.h)))
}

func (this *QVideoProbe) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoProbe_Metacast(this.h, param1_Cstring))
}

func QVideoProbe_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoProbe) SetSource(source *QMediaObject) bool {
	return (bool)(C.QVideoProbe_SetSource(this.h, source.cPointer()))
}

func (this *QVideoProbe) SetSourceWithSource(source *QMediaRecorder) bool {
	return (bool)(C.QVideoProbe_SetSourceWithSource(this.h, source.cPointer()))
}

func (this *QVideoProbe) IsActive() bool {
	return (bool)(C.QVideoProbe_IsActive(this.h))
}

func (this *QVideoProbe) VideoFrameProbed(frame *QVideoFrame) {
	C.QVideoProbe_VideoFrameProbed(this.h, frame.cPointer())
}
func (this *QVideoProbe) OnVideoFrameProbed(slot func(frame *QVideoFrame)) {
	C.QVideoProbe_connect_VideoFrameProbed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_VideoFrameProbed
func miqt_exec_callback_QVideoProbe_VideoFrameProbed(cb C.intptr_t, frame *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVideoFrame(unsafe.Pointer(frame))

	gofunc(slotval1)
}

func (this *QVideoProbe) Flush() {
	C.QVideoProbe_Flush(this.h)
}
func (this *QVideoProbe) OnFlush(slot func()) {
	C.QVideoProbe_connect_Flush(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_Flush
func miqt_exec_callback_QVideoProbe_Flush(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVideoProbe_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoProbe) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QVideoProbe_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVideoProbe) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	C.QVideoProbe_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_Event
func miqt_exec_callback_QVideoProbe_Event(self *C.QVideoProbe, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVideoProbe{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVideoProbe) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QVideoProbe_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVideoProbe) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	C.QVideoProbe_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_EventFilter
func miqt_exec_callback_QVideoProbe_EventFilter(self *C.QVideoProbe, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVideoProbe{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVideoProbe) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QVideoProbe_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVideoProbe) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	C.QVideoProbe_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_TimerEvent
func miqt_exec_callback_QVideoProbe_TimerEvent(self *C.QVideoProbe, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QVideoProbe{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVideoProbe) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QVideoProbe_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVideoProbe) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	C.QVideoProbe_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_ChildEvent
func miqt_exec_callback_QVideoProbe_ChildEvent(self *C.QVideoProbe, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QVideoProbe{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVideoProbe) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QVideoProbe_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVideoProbe) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	C.QVideoProbe_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_CustomEvent
func miqt_exec_callback_QVideoProbe_CustomEvent(self *C.QVideoProbe, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVideoProbe{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVideoProbe) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QVideoProbe_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVideoProbe) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QVideoProbe_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_ConnectNotify
func miqt_exec_callback_QVideoProbe_ConnectNotify(self *C.QVideoProbe, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVideoProbe{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVideoProbe) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QVideoProbe_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVideoProbe) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QVideoProbe_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_DisconnectNotify
func miqt_exec_callback_QVideoProbe_DisconnectNotify(self *C.QVideoProbe, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVideoProbe{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QVideoProbe) Delete() {
	C.QVideoProbe_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoProbe) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoProbe) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

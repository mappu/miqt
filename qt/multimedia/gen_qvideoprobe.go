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
	h *C.QVideoProbe
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
func newQVideoProbe(h *C.QVideoProbe) *QVideoProbe {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QVideoProbe_virtbase(h, &outptr_QObject)

	return &QVideoProbe{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQVideoProbe constructs the type using only unsafe pointers.
func UnsafeNewQVideoProbe(h unsafe.Pointer) *QVideoProbe {
	return newQVideoProbe((*C.QVideoProbe)(h))
}

// NewQVideoProbe constructs a new QVideoProbe object.
func NewQVideoProbe() *QVideoProbe {

	return newQVideoProbe(C.QVideoProbe_new())
}

// NewQVideoProbe2 constructs a new QVideoProbe object.
func NewQVideoProbe2(parent *qt.QObject) *QVideoProbe {

	return newQVideoProbe(C.QVideoProbe_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QVideoProbe) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoProbe_metaObject(this.h)))
}

func (this *QVideoProbe) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoProbe_metacast(this.h, param1_Cstring))
}

func QVideoProbe_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoProbe) SetSource(source *QMediaObject) bool {
	return (bool)(C.QVideoProbe_setSource(this.h, source.cPointer()))
}

func (this *QVideoProbe) SetSourceWithSource(source *QMediaRecorder) bool {
	return (bool)(C.QVideoProbe_setSourceWithSource(this.h, source.cPointer()))
}

func (this *QVideoProbe) IsActive() bool {
	return (bool)(C.QVideoProbe_isActive(this.h))
}

func (this *QVideoProbe) VideoFrameProbed(frame *QVideoFrame) {
	C.QVideoProbe_videoFrameProbed(this.h, frame.cPointer())
}
func (this *QVideoProbe) OnVideoFrameProbed(slot func(frame *QVideoFrame)) {
	C.QVideoProbe_connect_videoFrameProbed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_videoFrameProbed
func miqt_exec_callback_QVideoProbe_videoFrameProbed(cb C.intptr_t, frame *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frame *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVideoFrame(frame)

	gofunc(slotval1)
}

func (this *QVideoProbe) Flush() {
	C.QVideoProbe_flush(this.h)
}
func (this *QVideoProbe) OnFlush(slot func()) {
	C.QVideoProbe_connect_flush(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoProbe_flush
func miqt_exec_callback_QVideoProbe_flush(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QVideoProbe_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoProbe_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoProbe_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QVideoProbe that was directly constructed.
func (this *QVideoProbe) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QVideoProbe_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QVideoProbe that was directly constructed.
func (this *QVideoProbe) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVideoProbe_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QVideoProbe that was directly constructed.
func (this *QVideoProbe) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVideoProbe_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QVideoProbe that was directly constructed.
func (this *QVideoProbe) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QVideoProbe_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QVideoProbe) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QVideoProbe_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVideoProbe) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QVideoProbe_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoProbe_event
func miqt_exec_callback_QVideoProbe_event(self *C.QVideoProbe, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QVideoProbe_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVideoProbe) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QVideoProbe_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoProbe_eventFilter
func miqt_exec_callback_QVideoProbe_eventFilter(self *C.QVideoProbe, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QVideoProbe_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVideoProbe) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QVideoProbe_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoProbe_timerEvent
func miqt_exec_callback_QVideoProbe_timerEvent(self *C.QVideoProbe, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QVideoProbe{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVideoProbe) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QVideoProbe_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVideoProbe) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QVideoProbe_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoProbe_childEvent
func miqt_exec_callback_QVideoProbe_childEvent(self *C.QVideoProbe, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QVideoProbe{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVideoProbe) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QVideoProbe_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVideoProbe) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QVideoProbe_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoProbe_customEvent
func miqt_exec_callback_QVideoProbe_customEvent(self *C.QVideoProbe, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVideoProbe{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVideoProbe) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QVideoProbe_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVideoProbe) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QVideoProbe_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoProbe_connectNotify
func miqt_exec_callback_QVideoProbe_connectNotify(self *C.QVideoProbe, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVideoProbe{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVideoProbe) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QVideoProbe_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVideoProbe) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QVideoProbe_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoProbe_disconnectNotify
func miqt_exec_callback_QVideoProbe_disconnectNotify(self *C.QVideoProbe, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QVideoProbe_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoProbe) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoProbe) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

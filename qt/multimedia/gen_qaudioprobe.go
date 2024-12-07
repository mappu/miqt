package multimedia

/*

#include "gen_qaudioprobe.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioProbe struct {
	h          *C.QAudioProbe
	isSubclass bool
	*qt.QObject
}

func (this *QAudioProbe) cPointer() *C.QAudioProbe {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioProbe) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioProbe constructs the type using only CGO pointers.
func newQAudioProbe(h *C.QAudioProbe, h_QObject *C.QObject) *QAudioProbe {
	if h == nil {
		return nil
	}
	return &QAudioProbe{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAudioProbe constructs the type using only unsafe pointers.
func UnsafeNewQAudioProbe(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAudioProbe {
	if h == nil {
		return nil
	}

	return &QAudioProbe{h: (*C.QAudioProbe)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQAudioProbe constructs a new QAudioProbe object.
func NewQAudioProbe() *QAudioProbe {
	var outptr_QAudioProbe *C.QAudioProbe = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioProbe_new(&outptr_QAudioProbe, &outptr_QObject)
	ret := newQAudioProbe(outptr_QAudioProbe, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAudioProbe2 constructs a new QAudioProbe object.
func NewQAudioProbe2(parent *qt.QObject) *QAudioProbe {
	var outptr_QAudioProbe *C.QAudioProbe = nil
	var outptr_QObject *C.QObject = nil

	C.QAudioProbe_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QAudioProbe, &outptr_QObject)
	ret := newQAudioProbe(outptr_QAudioProbe, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAudioProbe) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioProbe_MetaObject(this.h)))
}

func (this *QAudioProbe) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioProbe_Metacast(this.h, param1_Cstring))
}

func QAudioProbe_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioProbe) SetSource(source *QMediaObject) bool {
	return (bool)(C.QAudioProbe_SetSource(this.h, source.cPointer()))
}

func (this *QAudioProbe) SetSourceWithSource(source *QMediaRecorder) bool {
	return (bool)(C.QAudioProbe_SetSourceWithSource(this.h, source.cPointer()))
}

func (this *QAudioProbe) IsActive() bool {
	return (bool)(C.QAudioProbe_IsActive(this.h))
}

func (this *QAudioProbe) AudioBufferProbed(buffer *QAudioBuffer) {
	C.QAudioProbe_AudioBufferProbed(this.h, buffer.cPointer())
}
func (this *QAudioProbe) OnAudioBufferProbed(slot func(buffer *QAudioBuffer)) {
	C.QAudioProbe_connect_AudioBufferProbed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_AudioBufferProbed
func miqt_exec_callback_QAudioProbe_AudioBufferProbed(cb C.intptr_t, buffer *C.QAudioBuffer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(buffer *QAudioBuffer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAudioBuffer(buffer)

	gofunc(slotval1)
}

func (this *QAudioProbe) Flush() {
	C.QAudioProbe_Flush(this.h)
}
func (this *QAudioProbe) OnFlush(slot func()) {
	C.QAudioProbe_connect_Flush(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_Flush
func miqt_exec_callback_QAudioProbe_Flush(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAudioProbe_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioProbe_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioProbe_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioProbe) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAudioProbe_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioProbe) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioProbe_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_Event
func miqt_exec_callback_QAudioProbe_Event(self *C.QAudioProbe, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioProbe{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioProbe) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QAudioProbe_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioProbe) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioProbe_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_EventFilter
func miqt_exec_callback_QAudioProbe_EventFilter(self *C.QAudioProbe, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioProbe{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioProbe) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAudioProbe_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioProbe) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioProbe_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_TimerEvent
func miqt_exec_callback_QAudioProbe_TimerEvent(self *C.QAudioProbe, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioProbe{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioProbe) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAudioProbe_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioProbe) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioProbe_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_ChildEvent
func miqt_exec_callback_QAudioProbe_ChildEvent(self *C.QAudioProbe, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioProbe{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioProbe) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAudioProbe_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioProbe) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioProbe_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_CustomEvent
func miqt_exec_callback_QAudioProbe_CustomEvent(self *C.QAudioProbe, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioProbe{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioProbe) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAudioProbe_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioProbe) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioProbe_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_ConnectNotify
func miqt_exec_callback_QAudioProbe_ConnectNotify(self *C.QAudioProbe, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioProbe{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioProbe) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAudioProbe_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioProbe) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAudioProbe_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioProbe_DisconnectNotify
func miqt_exec_callback_QAudioProbe_DisconnectNotify(self *C.QAudioProbe, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioProbe{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioProbe) Delete() {
	C.QAudioProbe_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioProbe) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioProbe) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

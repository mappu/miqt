package multimedia

/*

#include "gen_qabstractvideofilter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoFilterRunnable__RunFlag int

const (
	QVideoFilterRunnable__LastInChain QVideoFilterRunnable__RunFlag = 1
)

type QVideoFilterRunnable struct {
	h          *C.QVideoFilterRunnable
	isSubclass bool
}

func (this *QVideoFilterRunnable) cPointer() *C.QVideoFilterRunnable {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoFilterRunnable) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoFilterRunnable constructs the type using only CGO pointers.
func newQVideoFilterRunnable(h *C.QVideoFilterRunnable) *QVideoFilterRunnable {
	if h == nil {
		return nil
	}
	return &QVideoFilterRunnable{h: h}
}

// UnsafeNewQVideoFilterRunnable constructs the type using only unsafe pointers.
func UnsafeNewQVideoFilterRunnable(h unsafe.Pointer) *QVideoFilterRunnable {
	if h == nil {
		return nil
	}

	return &QVideoFilterRunnable{h: (*C.QVideoFilterRunnable)(h)}
}

func (this *QVideoFilterRunnable) Run(input *QVideoFrame, surfaceFormat *QVideoSurfaceFormat, flags QVideoFilterRunnable__RunFlag) *QVideoFrame {
	_ret := C.QVideoFilterRunnable_Run(this.h, input.cPointer(), surfaceFormat.cPointer(), (C.int)(flags))
	_goptr := newQVideoFrame(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFilterRunnable) OperatorAssign(param1 *QVideoFilterRunnable) {
	C.QVideoFilterRunnable_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QVideoFilterRunnable) Delete() {
	C.QVideoFilterRunnable_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoFilterRunnable) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoFilterRunnable) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractVideoFilter struct {
	h          *C.QAbstractVideoFilter
	isSubclass bool
	*qt.QObject
}

func (this *QAbstractVideoFilter) cPointer() *C.QAbstractVideoFilter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractVideoFilter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractVideoFilter constructs the type using only CGO pointers.
func newQAbstractVideoFilter(h *C.QAbstractVideoFilter, h_QObject *C.QObject) *QAbstractVideoFilter {
	if h == nil {
		return nil
	}
	return &QAbstractVideoFilter{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQAbstractVideoFilter constructs the type using only unsafe pointers.
func UnsafeNewQAbstractVideoFilter(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractVideoFilter {
	if h == nil {
		return nil
	}

	return &QAbstractVideoFilter{h: (*C.QAbstractVideoFilter)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQAbstractVideoFilter constructs a new QAbstractVideoFilter object.
func NewQAbstractVideoFilter() *QAbstractVideoFilter {
	var outptr_QAbstractVideoFilter *C.QAbstractVideoFilter = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractVideoFilter_new(&outptr_QAbstractVideoFilter, &outptr_QObject)
	ret := newQAbstractVideoFilter(outptr_QAbstractVideoFilter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAbstractVideoFilter2 constructs a new QAbstractVideoFilter object.
func NewQAbstractVideoFilter2(parent *qt.QObject) *QAbstractVideoFilter {
	var outptr_QAbstractVideoFilter *C.QAbstractVideoFilter = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractVideoFilter_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QAbstractVideoFilter, &outptr_QObject)
	ret := newQAbstractVideoFilter(outptr_QAbstractVideoFilter, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractVideoFilter) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractVideoFilter_MetaObject(this.h)))
}

func (this *QAbstractVideoFilter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractVideoFilter_Metacast(this.h, param1_Cstring))
}

func QAbstractVideoFilter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractVideoFilter) IsActive() bool {
	return (bool)(C.QAbstractVideoFilter_IsActive(this.h))
}

func (this *QAbstractVideoFilter) SetActive(v bool) {
	C.QAbstractVideoFilter_SetActive(this.h, (C.bool)(v))
}

func (this *QAbstractVideoFilter) CreateFilterRunnable() *QVideoFilterRunnable {
	return UnsafeNewQVideoFilterRunnable(unsafe.Pointer(C.QAbstractVideoFilter_CreateFilterRunnable(this.h)))
}

func (this *QAbstractVideoFilter) ActiveChanged() {
	C.QAbstractVideoFilter_ActiveChanged(this.h)
}
func (this *QAbstractVideoFilter) OnActiveChanged(slot func()) {
	C.QAbstractVideoFilter_connect_ActiveChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_ActiveChanged
func miqt_exec_callback_QAbstractVideoFilter_ActiveChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QAbstractVideoFilter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractVideoFilter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractVideoFilter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAbstractVideoFilter) OnCreateFilterRunnable(slot func() *QVideoFilterRunnable) {
	C.QAbstractVideoFilter_override_virtual_CreateFilterRunnable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_CreateFilterRunnable
func miqt_exec_callback_QAbstractVideoFilter_CreateFilterRunnable(self *C.QAbstractVideoFilter, cb C.intptr_t) *C.QVideoFilterRunnable {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QVideoFilterRunnable)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

func (this *QAbstractVideoFilter) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAbstractVideoFilter_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractVideoFilter) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	C.QAbstractVideoFilter_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_Event
func miqt_exec_callback_QAbstractVideoFilter_Event(self *C.QAbstractVideoFilter, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractVideoFilter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoFilter) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QAbstractVideoFilter_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAbstractVideoFilter) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	C.QAbstractVideoFilter_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_EventFilter
func miqt_exec_callback_QAbstractVideoFilter_EventFilter(self *C.QAbstractVideoFilter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractVideoFilter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractVideoFilter) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAbstractVideoFilter_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoFilter) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	C.QAbstractVideoFilter_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_TimerEvent
func miqt_exec_callback_QAbstractVideoFilter_TimerEvent(self *C.QAbstractVideoFilter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractVideoFilter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractVideoFilter) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAbstractVideoFilter_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoFilter) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	C.QAbstractVideoFilter_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_ChildEvent
func miqt_exec_callback_QAbstractVideoFilter_ChildEvent(self *C.QAbstractVideoFilter, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractVideoFilter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractVideoFilter) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAbstractVideoFilter_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAbstractVideoFilter) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	C.QAbstractVideoFilter_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_CustomEvent
func miqt_exec_callback_QAbstractVideoFilter_CustomEvent(self *C.QAbstractVideoFilter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractVideoFilter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractVideoFilter) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractVideoFilter_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractVideoFilter) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QAbstractVideoFilter_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_ConnectNotify
func miqt_exec_callback_QAbstractVideoFilter_ConnectNotify(self *C.QAbstractVideoFilter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractVideoFilter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractVideoFilter) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAbstractVideoFilter_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAbstractVideoFilter) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QAbstractVideoFilter_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractVideoFilter_DisconnectNotify
func miqt_exec_callback_QAbstractVideoFilter_DisconnectNotify(self *C.QAbstractVideoFilter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractVideoFilter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractVideoFilter) Delete() {
	C.QAbstractVideoFilter_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractVideoFilter) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractVideoFilter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

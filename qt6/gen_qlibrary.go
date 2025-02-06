package qt6

/*

#include "gen_qlibrary.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLibrary__LoadHint int

const (
	QLibrary__ResolveAllSymbolsHint     QLibrary__LoadHint = 1
	QLibrary__ExportExternalSymbolsHint QLibrary__LoadHint = 2
	QLibrary__LoadArchiveMemberHint     QLibrary__LoadHint = 4
	QLibrary__PreventUnloadHint         QLibrary__LoadHint = 8
	QLibrary__DeepBindHint              QLibrary__LoadHint = 16
)

type QLibrary struct {
	h *C.QLibrary
	*QObject
}

func (this *QLibrary) cPointer() *C.QLibrary {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLibrary) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLibrary constructs the type using only CGO pointers.
func newQLibrary(h *C.QLibrary) *QLibrary {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QLibrary_virtbase(h, &outptr_QObject)

	return &QLibrary{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQLibrary constructs the type using only unsafe pointers.
func UnsafeNewQLibrary(h unsafe.Pointer) *QLibrary {
	return newQLibrary((*C.QLibrary)(h))
}

// NewQLibrary constructs a new QLibrary object.
func NewQLibrary() *QLibrary {

	return newQLibrary(C.QLibrary_new())
}

// NewQLibrary2 constructs a new QLibrary object.
func NewQLibrary2(fileName string) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQLibrary(C.QLibrary_new2(fileName_ms))
}

// NewQLibrary3 constructs a new QLibrary object.
func NewQLibrary3(fileName string, verNum int) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQLibrary(C.QLibrary_new3(fileName_ms, (C.int)(verNum)))
}

// NewQLibrary4 constructs a new QLibrary object.
func NewQLibrary4(fileName string, version string) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))

	return newQLibrary(C.QLibrary_new4(fileName_ms, version_ms))
}

// NewQLibrary5 constructs a new QLibrary object.
func NewQLibrary5(parent *QObject) *QLibrary {

	return newQLibrary(C.QLibrary_new5(parent.cPointer()))
}

// NewQLibrary6 constructs a new QLibrary object.
func NewQLibrary6(fileName string, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQLibrary(C.QLibrary_new6(fileName_ms, parent.cPointer()))
}

// NewQLibrary7 constructs a new QLibrary object.
func NewQLibrary7(fileName string, verNum int, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQLibrary(C.QLibrary_new7(fileName_ms, (C.int)(verNum), parent.cPointer()))
}

// NewQLibrary8 constructs a new QLibrary object.
func NewQLibrary8(fileName string, version string, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))

	return newQLibrary(C.QLibrary_new8(fileName_ms, version_ms, parent.cPointer()))
}

func (this *QLibrary) MetaObject() *QMetaObject {
	return newQMetaObject(C.QLibrary_metaObject(this.h))
}

func (this *QLibrary) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLibrary_metacast(this.h, param1_Cstring))
}

func QLibrary_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) Load() bool {
	return (bool)(C.QLibrary_load(this.h))
}

func (this *QLibrary) Unload() bool {
	return (bool)(C.QLibrary_unload(this.h))
}

func (this *QLibrary) IsLoaded() bool {
	return (bool)(C.QLibrary_isLoaded(this.h))
}

func QLibrary_IsLibrary(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QLibrary_isLibrary(fileName_ms))
}

func (this *QLibrary) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QLibrary_setFileName(this.h, fileName_ms)
}

func (this *QLibrary) FileName() string {
	var _ms C.struct_miqt_string = C.QLibrary_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) SetFileNameAndVersion(fileName string, verNum int) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QLibrary_setFileNameAndVersion(this.h, fileName_ms, (C.int)(verNum))
}

func (this *QLibrary) SetFileNameAndVersion2(fileName string, version string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	version_ms := C.struct_miqt_string{}
	version_ms.data = C.CString(version)
	version_ms.len = C.size_t(len(version))
	defer C.free(unsafe.Pointer(version_ms.data))
	C.QLibrary_setFileNameAndVersion2(this.h, fileName_ms, version_ms)
}

func (this *QLibrary) ErrorString() string {
	var _ms C.struct_miqt_string = C.QLibrary_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) SetLoadHints(hints QLibrary__LoadHint) {
	C.QLibrary_setLoadHints(this.h, (C.int)(hints))
}

func (this *QLibrary) LoadHints() QLibrary__LoadHint {
	return (QLibrary__LoadHint)(C.QLibrary_loadHints(this.h))
}

func QLibrary_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibrary_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QLibrary that was directly constructed.
func (this *QLibrary) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QLibrary_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QLibrary that was directly constructed.
func (this *QLibrary) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLibrary_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QLibrary that was directly constructed.
func (this *QLibrary) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLibrary_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QLibrary that was directly constructed.
func (this *QLibrary) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLibrary_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QLibrary) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QLibrary_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QLibrary) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QLibrary_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLibrary_event
func miqt_exec_callback_QLibrary_event(self *C.QLibrary, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QLibrary{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLibrary) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QLibrary_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QLibrary) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QLibrary_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLibrary_eventFilter
func miqt_exec_callback_QLibrary_eventFilter(self *C.QLibrary, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QLibrary{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLibrary) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QLibrary_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLibrary) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QLibrary_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLibrary_timerEvent
func miqt_exec_callback_QLibrary_timerEvent(self *C.QLibrary, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QLibrary{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLibrary) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QLibrary_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLibrary) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QLibrary_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLibrary_childEvent
func miqt_exec_callback_QLibrary_childEvent(self *C.QLibrary, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QLibrary{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLibrary) callVirtualBase_CustomEvent(event *QEvent) {

	C.QLibrary_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLibrary) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLibrary_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLibrary_customEvent
func miqt_exec_callback_QLibrary_customEvent(self *C.QLibrary, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLibrary{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLibrary) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QLibrary_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLibrary) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLibrary_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLibrary_connectNotify
func miqt_exec_callback_QLibrary_connectNotify(self *C.QLibrary, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLibrary{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLibrary) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QLibrary_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLibrary) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLibrary_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLibrary_disconnectNotify
func miqt_exec_callback_QLibrary_disconnectNotify(self *C.QLibrary, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLibrary{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLibrary) Delete() {
	C.QLibrary_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLibrary) GoGC() {
	runtime.SetFinalizer(this, func(this *QLibrary) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

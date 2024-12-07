package qt

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
	h          *C.QLibrary
	isSubclass bool
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
func newQLibrary(h *C.QLibrary, h_QObject *C.QObject) *QLibrary {
	if h == nil {
		return nil
	}
	return &QLibrary{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQLibrary constructs the type using only unsafe pointers.
func UnsafeNewQLibrary(h unsafe.Pointer, h_QObject unsafe.Pointer) *QLibrary {
	if h == nil {
		return nil
	}

	return &QLibrary{h: (*C.QLibrary)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQLibrary constructs a new QLibrary object.
func NewQLibrary() *QLibrary {
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new(&outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQLibrary2 constructs a new QLibrary object.
func NewQLibrary2(fileName string) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new2(fileName_ms, &outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQLibrary3 constructs a new QLibrary object.
func NewQLibrary3(fileName string, verNum int) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new3(fileName_ms, (C.int)(verNum), &outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new4(fileName_ms, version_ms, &outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQLibrary5 constructs a new QLibrary object.
func NewQLibrary5(parent *QObject) *QLibrary {
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new5(parent.cPointer(), &outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQLibrary6 constructs a new QLibrary object.
func NewQLibrary6(fileName string, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new6(fileName_ms, parent.cPointer(), &outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQLibrary7 constructs a new QLibrary object.
func NewQLibrary7(fileName string, verNum int, parent *QObject) *QLibrary {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new7(fileName_ms, (C.int)(verNum), parent.cPointer(), &outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	var outptr_QLibrary *C.QLibrary = nil
	var outptr_QObject *C.QObject = nil

	C.QLibrary_new8(fileName_ms, version_ms, parent.cPointer(), &outptr_QLibrary, &outptr_QObject)
	ret := newQLibrary(outptr_QLibrary, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QLibrary) MetaObject() *QMetaObject {
	return newQMetaObject(C.QLibrary_MetaObject(this.h))
}

func (this *QLibrary) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLibrary_Metacast(this.h, param1_Cstring))
}

func QLibrary_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibrary_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) Load() bool {
	return (bool)(C.QLibrary_Load(this.h))
}

func (this *QLibrary) Unload() bool {
	return (bool)(C.QLibrary_Unload(this.h))
}

func (this *QLibrary) IsLoaded() bool {
	return (bool)(C.QLibrary_IsLoaded(this.h))
}

func QLibrary_IsLibrary(fileName string) bool {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (bool)(C.QLibrary_IsLibrary(fileName_ms))
}

func (this *QLibrary) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QLibrary_SetFileName(this.h, fileName_ms)
}

func (this *QLibrary) FileName() string {
	var _ms C.struct_miqt_string = C.QLibrary_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) SetFileNameAndVersion(fileName string, verNum int) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QLibrary_SetFileNameAndVersion(this.h, fileName_ms, (C.int)(verNum))
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
	C.QLibrary_SetFileNameAndVersion2(this.h, fileName_ms, version_ms)
}

func (this *QLibrary) ErrorString() string {
	var _ms C.struct_miqt_string = C.QLibrary_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) SetLoadHints(hints QLibrary__LoadHint) {
	C.QLibrary_SetLoadHints(this.h, (C.int)(hints))
}

func (this *QLibrary) LoadHints() QLibrary__LoadHint {
	return (QLibrary__LoadHint)(C.QLibrary_LoadHints(this.h))
}

func QLibrary_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibrary_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibrary_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibrary_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLibrary_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLibrary) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QLibrary_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QLibrary) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLibrary_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLibrary_Event
func miqt_exec_callback_QLibrary_Event(self *C.QLibrary, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QLibrary_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QLibrary) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLibrary_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLibrary_EventFilter
func miqt_exec_callback_QLibrary_EventFilter(self *C.QLibrary, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QLibrary_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLibrary) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLibrary_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLibrary_TimerEvent
func miqt_exec_callback_QLibrary_TimerEvent(self *C.QLibrary, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QLibrary{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLibrary) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QLibrary_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLibrary) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLibrary_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLibrary_ChildEvent
func miqt_exec_callback_QLibrary_ChildEvent(self *C.QLibrary, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QLibrary{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLibrary) callVirtualBase_CustomEvent(event *QEvent) {

	C.QLibrary_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLibrary) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLibrary_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLibrary_CustomEvent
func miqt_exec_callback_QLibrary_CustomEvent(self *C.QLibrary, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLibrary{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLibrary) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QLibrary_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLibrary) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLibrary_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLibrary_ConnectNotify
func miqt_exec_callback_QLibrary_ConnectNotify(self *C.QLibrary, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLibrary{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLibrary) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QLibrary_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLibrary) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLibrary_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLibrary_DisconnectNotify
func miqt_exec_callback_QLibrary_DisconnectNotify(self *C.QLibrary, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QLibrary_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLibrary) GoGC() {
	runtime.SetFinalizer(this, func(this *QLibrary) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qpointingdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPointingDevice__PointerType int

const (
	QPointingDevice__Unknown         QPointingDevice__PointerType = 0
	QPointingDevice__Generic         QPointingDevice__PointerType = 1
	QPointingDevice__Finger          QPointingDevice__PointerType = 2
	QPointingDevice__Pen             QPointingDevice__PointerType = 4
	QPointingDevice__Eraser          QPointingDevice__PointerType = 8
	QPointingDevice__Cursor          QPointingDevice__PointerType = 16
	QPointingDevice__AllPointerTypes QPointingDevice__PointerType = 32767
)

type QPointingDevice__GrabTransition int

const (
	QPointingDevice__GrabPassive         QPointingDevice__GrabTransition = 1
	QPointingDevice__UngrabPassive       QPointingDevice__GrabTransition = 2
	QPointingDevice__CancelGrabPassive   QPointingDevice__GrabTransition = 3
	QPointingDevice__OverrideGrabPassive QPointingDevice__GrabTransition = 4
	QPointingDevice__GrabExclusive       QPointingDevice__GrabTransition = 16
	QPointingDevice__UngrabExclusive     QPointingDevice__GrabTransition = 32
	QPointingDevice__CancelGrabExclusive QPointingDevice__GrabTransition = 48
)

type QPointingDeviceUniqueId struct {
	h *C.QPointingDeviceUniqueId
}

func (this *QPointingDeviceUniqueId) cPointer() *C.QPointingDeviceUniqueId {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPointingDeviceUniqueId) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPointingDeviceUniqueId constructs the type using only CGO pointers.
func newQPointingDeviceUniqueId(h *C.QPointingDeviceUniqueId) *QPointingDeviceUniqueId {
	if h == nil {
		return nil
	}

	return &QPointingDeviceUniqueId{h: h}
}

// UnsafeNewQPointingDeviceUniqueId constructs the type using only unsafe pointers.
func UnsafeNewQPointingDeviceUniqueId(h unsafe.Pointer) *QPointingDeviceUniqueId {
	return newQPointingDeviceUniqueId((*C.QPointingDeviceUniqueId)(h))
}

// NewQPointingDeviceUniqueId constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId() *QPointingDeviceUniqueId {

	return newQPointingDeviceUniqueId(C.QPointingDeviceUniqueId_new())
}

// NewQPointingDeviceUniqueId2 constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId2(param1 *QPointingDeviceUniqueId) *QPointingDeviceUniqueId {

	return newQPointingDeviceUniqueId(C.QPointingDeviceUniqueId_new2(param1.cPointer()))
}

func QPointingDeviceUniqueId_FromNumericId(id int64) *QPointingDeviceUniqueId {
	_goptr := newQPointingDeviceUniqueId(C.QPointingDeviceUniqueId_fromNumericId((C.longlong)(id)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPointingDeviceUniqueId) IsValid() bool {
	return (bool)(C.QPointingDeviceUniqueId_isValid(this.h))
}

func (this *QPointingDeviceUniqueId) NumericId() int64 {
	return (int64)(C.QPointingDeviceUniqueId_numericId(this.h))
}

// Delete this object from C++ memory.
func (this *QPointingDeviceUniqueId) Delete() {
	C.QPointingDeviceUniqueId_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPointingDeviceUniqueId) GoGC() {
	runtime.SetFinalizer(this, func(this *QPointingDeviceUniqueId) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPointingDevice struct {
	h *C.QPointingDevice
	*QInputDevice
}

func (this *QPointingDevice) cPointer() *C.QPointingDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPointingDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPointingDevice constructs the type using only CGO pointers.
func newQPointingDevice(h *C.QPointingDevice) *QPointingDevice {
	if h == nil {
		return nil
	}
	var outptr_QInputDevice *C.QInputDevice = nil
	C.QPointingDevice_virtbase(h, &outptr_QInputDevice)

	return &QPointingDevice{h: h,
		QInputDevice: newQInputDevice(outptr_QInputDevice)}
}

// UnsafeNewQPointingDevice constructs the type using only unsafe pointers.
func UnsafeNewQPointingDevice(h unsafe.Pointer) *QPointingDevice {
	return newQPointingDevice((*C.QPointingDevice)(h))
}

// NewQPointingDevice constructs a new QPointingDevice object.
func NewQPointingDevice() *QPointingDevice {

	return newQPointingDevice(C.QPointingDevice_new())
}

// NewQPointingDevice2 constructs a new QPointingDevice object.
func NewQPointingDevice2(name string, systemId int64, devType QInputDevice__DeviceType, pType QPointingDevice__PointerType, caps QInputDevice__Capability, maxPoints int, buttonCount int) *QPointingDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQPointingDevice(C.QPointingDevice_new2(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount)))
}

// NewQPointingDevice3 constructs a new QPointingDevice object.
func NewQPointingDevice3(parent *QObject) *QPointingDevice {

	return newQPointingDevice(C.QPointingDevice_new3(parent.cPointer()))
}

// NewQPointingDevice4 constructs a new QPointingDevice object.
func NewQPointingDevice4(name string, systemId int64, devType QInputDevice__DeviceType, pType QPointingDevice__PointerType, caps QInputDevice__Capability, maxPoints int, buttonCount int, seatName string) *QPointingDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))

	return newQPointingDevice(C.QPointingDevice_new4(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount), seatName_ms))
}

// NewQPointingDevice5 constructs a new QPointingDevice object.
func NewQPointingDevice5(name string, systemId int64, devType QInputDevice__DeviceType, pType QPointingDevice__PointerType, caps QInputDevice__Capability, maxPoints int, buttonCount int, seatName string, uniqueId QPointingDeviceUniqueId) *QPointingDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))

	return newQPointingDevice(C.QPointingDevice_new5(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount), seatName_ms, uniqueId.cPointer()))
}

// NewQPointingDevice6 constructs a new QPointingDevice object.
func NewQPointingDevice6(name string, systemId int64, devType QInputDevice__DeviceType, pType QPointingDevice__PointerType, caps QInputDevice__Capability, maxPoints int, buttonCount int, seatName string, uniqueId QPointingDeviceUniqueId, parent *QObject) *QPointingDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))

	return newQPointingDevice(C.QPointingDevice_new6(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount), seatName_ms, uniqueId.cPointer(), parent.cPointer()))
}

func (this *QPointingDevice) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPointingDevice_metaObject(this.h))
}

func (this *QPointingDevice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPointingDevice_metacast(this.h, param1_Cstring))
}

func QPointingDevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPointingDevice_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPointingDevice) SetType(devType QInputDevice__DeviceType) {
	C.QPointingDevice_setType(this.h, (C.int)(devType))
}

func (this *QPointingDevice) SetCapabilities(caps QInputDevice__Capability) {
	C.QPointingDevice_setCapabilities(this.h, (C.int)(caps))
}

func (this *QPointingDevice) SetMaximumTouchPoints(c int) {
	C.QPointingDevice_setMaximumTouchPoints(this.h, (C.int)(c))
}

func (this *QPointingDevice) PointerType() QPointingDevice__PointerType {
	return (QPointingDevice__PointerType)(C.QPointingDevice_pointerType(this.h))
}

func (this *QPointingDevice) MaximumPoints() int {
	return (int)(C.QPointingDevice_maximumPoints(this.h))
}

func (this *QPointingDevice) ButtonCount() int {
	return (int)(C.QPointingDevice_buttonCount(this.h))
}

func (this *QPointingDevice) UniqueId() *QPointingDeviceUniqueId {
	_goptr := newQPointingDeviceUniqueId(C.QPointingDevice_uniqueId(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPointingDevice_PrimaryPointingDevice() *QPointingDevice {
	return newQPointingDevice(C.QPointingDevice_primaryPointingDevice())
}

func (this *QPointingDevice) OperatorEqual(other *QPointingDevice) bool {
	return (bool)(C.QPointingDevice_operatorEqual(this.h, other.cPointer()))
}

func (this *QPointingDevice) GrabChanged(grabber *QObject, transition QPointingDevice__GrabTransition, event *QPointerEvent, point *QEventPoint) {
	C.QPointingDevice_grabChanged(this.h, grabber.cPointer(), (C.int)(transition), event.cPointer(), point.cPointer())
}
func (this *QPointingDevice) OnGrabChanged(slot func(grabber *QObject, transition QPointingDevice__GrabTransition, event *QPointerEvent, point *QEventPoint)) {
	C.QPointingDevice_connect_grabChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPointingDevice_grabChanged
func miqt_exec_callback_QPointingDevice_grabChanged(cb C.intptr_t, grabber *C.QObject, transition C.int, event *C.QPointerEvent, point *C.QEventPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(grabber *QObject, transition QPointingDevice__GrabTransition, event *QPointerEvent, point *QEventPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(grabber)

	slotval2 := (QPointingDevice__GrabTransition)(transition)

	slotval3 := newQPointerEvent(event)

	slotval4 := newQEventPoint(point)

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func QPointingDevice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPointingDevice_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPointingDevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPointingDevice_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPointingDevice_PrimaryPointingDevice1(seatName string) *QPointingDevice {
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))
	return newQPointingDevice(C.QPointingDevice_primaryPointingDevice1(seatName_ms))
}

func (this *QPointingDevice) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPointingDevice_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPointingDevice) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPointingDevice_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointingDevice_event
func miqt_exec_callback_QPointingDevice_event(self *C.QPointingDevice, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPointingDevice{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPointingDevice) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPointingDevice_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPointingDevice) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPointingDevice_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointingDevice_eventFilter
func miqt_exec_callback_QPointingDevice_eventFilter(self *C.QPointingDevice, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPointingDevice{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPointingDevice) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPointingDevice_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPointingDevice) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPointingDevice_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointingDevice_timerEvent
func miqt_exec_callback_QPointingDevice_timerEvent(self *C.QPointingDevice, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPointingDevice{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPointingDevice) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPointingDevice_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPointingDevice) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPointingDevice_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointingDevice_childEvent
func miqt_exec_callback_QPointingDevice_childEvent(self *C.QPointingDevice, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPointingDevice{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPointingDevice) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPointingDevice_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPointingDevice) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPointingDevice_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointingDevice_customEvent
func miqt_exec_callback_QPointingDevice_customEvent(self *C.QPointingDevice, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPointingDevice{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPointingDevice) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPointingDevice_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPointingDevice) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPointingDevice_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointingDevice_connectNotify
func miqt_exec_callback_QPointingDevice_connectNotify(self *C.QPointingDevice, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPointingDevice{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPointingDevice) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPointingDevice_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPointingDevice) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPointingDevice_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPointingDevice_disconnectNotify
func miqt_exec_callback_QPointingDevice_disconnectNotify(self *C.QPointingDevice, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPointingDevice{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPointingDevice) Delete() {
	C.QPointingDevice_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPointingDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QPointingDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

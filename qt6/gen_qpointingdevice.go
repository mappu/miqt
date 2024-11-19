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
	h          *C.QPointingDeviceUniqueId
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QPointingDeviceUniqueId{h: (*C.QPointingDeviceUniqueId)(h)}
}

// NewQPointingDeviceUniqueId constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId() *QPointingDeviceUniqueId {
	var outptr_QPointingDeviceUniqueId *C.QPointingDeviceUniqueId = nil

	C.QPointingDeviceUniqueId_new(&outptr_QPointingDeviceUniqueId)
	ret := newQPointingDeviceUniqueId(outptr_QPointingDeviceUniqueId)
	ret.isSubclass = true
	return ret
}

// NewQPointingDeviceUniqueId2 constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId2(param1 *QPointingDeviceUniqueId) *QPointingDeviceUniqueId {
	var outptr_QPointingDeviceUniqueId *C.QPointingDeviceUniqueId = nil

	C.QPointingDeviceUniqueId_new2(param1.cPointer(), &outptr_QPointingDeviceUniqueId)
	ret := newQPointingDeviceUniqueId(outptr_QPointingDeviceUniqueId)
	ret.isSubclass = true
	return ret
}

func QPointingDeviceUniqueId_FromNumericId(id int64) *QPointingDeviceUniqueId {
	_ret := C.QPointingDeviceUniqueId_FromNumericId((C.longlong)(id))
	_goptr := newQPointingDeviceUniqueId(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPointingDeviceUniqueId) IsValid() bool {
	return (bool)(C.QPointingDeviceUniqueId_IsValid(this.h))
}

func (this *QPointingDeviceUniqueId) NumericId() int64 {
	return (int64)(C.QPointingDeviceUniqueId_NumericId(this.h))
}

// Delete this object from C++ memory.
func (this *QPointingDeviceUniqueId) Delete() {
	C.QPointingDeviceUniqueId_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QPointingDevice
	isSubclass bool
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
func newQPointingDevice(h *C.QPointingDevice, h_QInputDevice *C.QInputDevice, h_QObject *C.QObject) *QPointingDevice {
	if h == nil {
		return nil
	}
	return &QPointingDevice{h: h,
		QInputDevice: newQInputDevice(h_QInputDevice, h_QObject)}
}

// UnsafeNewQPointingDevice constructs the type using only unsafe pointers.
func UnsafeNewQPointingDevice(h unsafe.Pointer, h_QInputDevice unsafe.Pointer, h_QObject unsafe.Pointer) *QPointingDevice {
	if h == nil {
		return nil
	}

	return &QPointingDevice{h: (*C.QPointingDevice)(h),
		QInputDevice: UnsafeNewQInputDevice(h_QInputDevice, h_QObject)}
}

// NewQPointingDevice constructs a new QPointingDevice object.
func NewQPointingDevice() *QPointingDevice {
	var outptr_QPointingDevice *C.QPointingDevice = nil
	var outptr_QInputDevice *C.QInputDevice = nil
	var outptr_QObject *C.QObject = nil

	C.QPointingDevice_new(&outptr_QPointingDevice, &outptr_QInputDevice, &outptr_QObject)
	ret := newQPointingDevice(outptr_QPointingDevice, outptr_QInputDevice, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQPointingDevice2 constructs a new QPointingDevice object.
func NewQPointingDevice2(name string, systemId int64, devType QInputDevice__DeviceType, pType QPointingDevice__PointerType, caps QInputDevice__Capability, maxPoints int, buttonCount int) *QPointingDevice {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var outptr_QPointingDevice *C.QPointingDevice = nil
	var outptr_QInputDevice *C.QInputDevice = nil
	var outptr_QObject *C.QObject = nil

	C.QPointingDevice_new2(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount), &outptr_QPointingDevice, &outptr_QInputDevice, &outptr_QObject)
	ret := newQPointingDevice(outptr_QPointingDevice, outptr_QInputDevice, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQPointingDevice3 constructs a new QPointingDevice object.
func NewQPointingDevice3(parent *QObject) *QPointingDevice {
	var outptr_QPointingDevice *C.QPointingDevice = nil
	var outptr_QInputDevice *C.QInputDevice = nil
	var outptr_QObject *C.QObject = nil

	C.QPointingDevice_new3(parent.cPointer(), &outptr_QPointingDevice, &outptr_QInputDevice, &outptr_QObject)
	ret := newQPointingDevice(outptr_QPointingDevice, outptr_QInputDevice, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	var outptr_QPointingDevice *C.QPointingDevice = nil
	var outptr_QInputDevice *C.QInputDevice = nil
	var outptr_QObject *C.QObject = nil

	C.QPointingDevice_new4(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount), seatName_ms, &outptr_QPointingDevice, &outptr_QInputDevice, &outptr_QObject)
	ret := newQPointingDevice(outptr_QPointingDevice, outptr_QInputDevice, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	var outptr_QPointingDevice *C.QPointingDevice = nil
	var outptr_QInputDevice *C.QInputDevice = nil
	var outptr_QObject *C.QObject = nil

	C.QPointingDevice_new5(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount), seatName_ms, uniqueId.cPointer(), &outptr_QPointingDevice, &outptr_QInputDevice, &outptr_QObject)
	ret := newQPointingDevice(outptr_QPointingDevice, outptr_QInputDevice, outptr_QObject)
	ret.isSubclass = true
	return ret
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
	var outptr_QPointingDevice *C.QPointingDevice = nil
	var outptr_QInputDevice *C.QInputDevice = nil
	var outptr_QObject *C.QObject = nil

	C.QPointingDevice_new6(name_ms, (C.longlong)(systemId), (C.int)(devType), (C.int)(pType), (C.int)(caps), (C.int)(maxPoints), (C.int)(buttonCount), seatName_ms, uniqueId.cPointer(), parent.cPointer(), &outptr_QPointingDevice, &outptr_QInputDevice, &outptr_QObject)
	ret := newQPointingDevice(outptr_QPointingDevice, outptr_QInputDevice, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QPointingDevice) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPointingDevice_MetaObject(this.h)))
}

func (this *QPointingDevice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPointingDevice_Metacast(this.h, param1_Cstring))
}

func QPointingDevice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPointingDevice_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPointingDevice) SetType(devType QInputDevice__DeviceType) {
	C.QPointingDevice_SetType(this.h, (C.int)(devType))
}

func (this *QPointingDevice) SetCapabilities(caps QInputDevice__Capability) {
	C.QPointingDevice_SetCapabilities(this.h, (C.int)(caps))
}

func (this *QPointingDevice) SetMaximumTouchPoints(c int) {
	C.QPointingDevice_SetMaximumTouchPoints(this.h, (C.int)(c))
}

func (this *QPointingDevice) PointerType() QPointingDevice__PointerType {
	return (QPointingDevice__PointerType)(C.QPointingDevice_PointerType(this.h))
}

func (this *QPointingDevice) MaximumPoints() int {
	return (int)(C.QPointingDevice_MaximumPoints(this.h))
}

func (this *QPointingDevice) ButtonCount() int {
	return (int)(C.QPointingDevice_ButtonCount(this.h))
}

func (this *QPointingDevice) UniqueId() *QPointingDeviceUniqueId {
	_ret := C.QPointingDevice_UniqueId(this.h)
	_goptr := newQPointingDeviceUniqueId(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPointingDevice_PrimaryPointingDevice() *QPointingDevice {
	return UnsafeNewQPointingDevice(unsafe.Pointer(C.QPointingDevice_PrimaryPointingDevice()), nil, nil)
}

func (this *QPointingDevice) OperatorEqual(other *QPointingDevice) bool {
	return (bool)(C.QPointingDevice_OperatorEqual(this.h, other.cPointer()))
}

func (this *QPointingDevice) GrabChanged(grabber *QObject, transition QPointingDevice__GrabTransition, event *QPointerEvent, point *QEventPoint) {
	C.QPointingDevice_GrabChanged(this.h, grabber.cPointer(), (C.int)(transition), event.cPointer(), point.cPointer())
}
func (this *QPointingDevice) OnGrabChanged(slot func(grabber *QObject, transition QPointingDevice__GrabTransition, event *QPointerEvent, point *QEventPoint)) {
	C.QPointingDevice_connect_GrabChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPointingDevice_GrabChanged
func miqt_exec_callback_QPointingDevice_GrabChanged(cb C.intptr_t, grabber *C.QObject, transition C.int, event *C.QPointerEvent, point *C.QEventPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(grabber *QObject, transition QPointingDevice__GrabTransition, event *QPointerEvent, point *QEventPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(grabber))
	slotval2 := (QPointingDevice__GrabTransition)(transition)

	slotval3 := UnsafeNewQPointerEvent(unsafe.Pointer(event), nil, nil)
	slotval4 := UnsafeNewQEventPoint(unsafe.Pointer(point))

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func QPointingDevice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPointingDevice_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPointingDevice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPointingDevice_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPointingDevice_PrimaryPointingDevice1(seatName string) *QPointingDevice {
	seatName_ms := C.struct_miqt_string{}
	seatName_ms.data = C.CString(seatName)
	seatName_ms.len = C.size_t(len(seatName))
	defer C.free(unsafe.Pointer(seatName_ms.data))
	return UnsafeNewQPointingDevice(unsafe.Pointer(C.QPointingDevice_PrimaryPointingDevice1(seatName_ms)), nil, nil)
}

// Delete this object from C++ memory.
func (this *QPointingDevice) Delete() {
	C.QPointingDevice_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPointingDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QPointingDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

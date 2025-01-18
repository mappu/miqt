package network

/*

#include "gen_qnetworkconfiguration.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QNetworkConfiguration__Type int

const (
	QNetworkConfiguration__InternetAccessPoint QNetworkConfiguration__Type = 0
	QNetworkConfiguration__ServiceNetwork      QNetworkConfiguration__Type = 1
	QNetworkConfiguration__UserChoice          QNetworkConfiguration__Type = 2
	QNetworkConfiguration__Invalid             QNetworkConfiguration__Type = 3
)

type QNetworkConfiguration__Purpose int

const (
	QNetworkConfiguration__UnknownPurpose         QNetworkConfiguration__Purpose = 0
	QNetworkConfiguration__PublicPurpose          QNetworkConfiguration__Purpose = 1
	QNetworkConfiguration__PrivatePurpose         QNetworkConfiguration__Purpose = 2
	QNetworkConfiguration__ServiceSpecificPurpose QNetworkConfiguration__Purpose = 3
)

type QNetworkConfiguration__StateFlag int

const (
	QNetworkConfiguration__Undefined  QNetworkConfiguration__StateFlag = 1
	QNetworkConfiguration__Defined    QNetworkConfiguration__StateFlag = 2
	QNetworkConfiguration__Discovered QNetworkConfiguration__StateFlag = 6
	QNetworkConfiguration__Active     QNetworkConfiguration__StateFlag = 14
)

type QNetworkConfiguration__BearerType int

const (
	QNetworkConfiguration__BearerUnknown   QNetworkConfiguration__BearerType = 0
	QNetworkConfiguration__BearerEthernet  QNetworkConfiguration__BearerType = 1
	QNetworkConfiguration__BearerWLAN      QNetworkConfiguration__BearerType = 2
	QNetworkConfiguration__Bearer2G        QNetworkConfiguration__BearerType = 3
	QNetworkConfiguration__BearerCDMA2000  QNetworkConfiguration__BearerType = 4
	QNetworkConfiguration__BearerWCDMA     QNetworkConfiguration__BearerType = 5
	QNetworkConfiguration__BearerHSPA      QNetworkConfiguration__BearerType = 6
	QNetworkConfiguration__BearerBluetooth QNetworkConfiguration__BearerType = 7
	QNetworkConfiguration__BearerWiMAX     QNetworkConfiguration__BearerType = 8
	QNetworkConfiguration__BearerEVDO      QNetworkConfiguration__BearerType = 9
	QNetworkConfiguration__BearerLTE       QNetworkConfiguration__BearerType = 10
	QNetworkConfiguration__Bearer3G        QNetworkConfiguration__BearerType = 11
	QNetworkConfiguration__Bearer4G        QNetworkConfiguration__BearerType = 12
)

type QNetworkConfiguration struct {
	h          *C.QNetworkConfiguration
	isSubclass bool
}

func (this *QNetworkConfiguration) cPointer() *C.QNetworkConfiguration {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkConfiguration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkConfiguration constructs the type using only CGO pointers.
func newQNetworkConfiguration(h *C.QNetworkConfiguration) *QNetworkConfiguration {
	if h == nil {
		return nil
	}

	return &QNetworkConfiguration{h: h}
}

// UnsafeNewQNetworkConfiguration constructs the type using only unsafe pointers.
func UnsafeNewQNetworkConfiguration(h unsafe.Pointer) *QNetworkConfiguration {
	return newQNetworkConfiguration((*C.QNetworkConfiguration)(h))
}

// NewQNetworkConfiguration constructs a new QNetworkConfiguration object.
func NewQNetworkConfiguration() *QNetworkConfiguration {

	ret := newQNetworkConfiguration(C.QNetworkConfiguration_new())
	ret.isSubclass = true
	return ret
}

// NewQNetworkConfiguration2 constructs a new QNetworkConfiguration object.
func NewQNetworkConfiguration2(other *QNetworkConfiguration) *QNetworkConfiguration {

	ret := newQNetworkConfiguration(C.QNetworkConfiguration_new2(other.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QNetworkConfiguration) OperatorAssign(other *QNetworkConfiguration) {
	C.QNetworkConfiguration_OperatorAssign(this.h, other.cPointer())
}

func (this *QNetworkConfiguration) Swap(other *QNetworkConfiguration) {
	C.QNetworkConfiguration_Swap(this.h, other.cPointer())
}

func (this *QNetworkConfiguration) OperatorEqual(other *QNetworkConfiguration) bool {
	return (bool)(C.QNetworkConfiguration_OperatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkConfiguration) OperatorNotEqual(other *QNetworkConfiguration) bool {
	return (bool)(C.QNetworkConfiguration_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkConfiguration) State() QNetworkConfiguration__StateFlag {
	return (QNetworkConfiguration__StateFlag)(C.QNetworkConfiguration_State(this.h))
}

func (this *QNetworkConfiguration) Type() QNetworkConfiguration__Type {
	return (QNetworkConfiguration__Type)(C.QNetworkConfiguration_Type(this.h))
}

func (this *QNetworkConfiguration) Purpose() QNetworkConfiguration__Purpose {
	return (QNetworkConfiguration__Purpose)(C.QNetworkConfiguration_Purpose(this.h))
}

func (this *QNetworkConfiguration) BearerType() QNetworkConfiguration__BearerType {
	return (QNetworkConfiguration__BearerType)(C.QNetworkConfiguration_BearerType(this.h))
}

func (this *QNetworkConfiguration) BearerTypeFamily() QNetworkConfiguration__BearerType {
	return (QNetworkConfiguration__BearerType)(C.QNetworkConfiguration_BearerTypeFamily(this.h))
}

func (this *QNetworkConfiguration) BearerTypeName() string {
	var _ms C.struct_miqt_string = C.QNetworkConfiguration_BearerTypeName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfiguration) Identifier() string {
	var _ms C.struct_miqt_string = C.QNetworkConfiguration_Identifier(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfiguration) IsRoamingAvailable() bool {
	return (bool)(C.QNetworkConfiguration_IsRoamingAvailable(this.h))
}

func (this *QNetworkConfiguration) Children() []QNetworkConfiguration {
	var _ma C.struct_miqt_array = C.QNetworkConfiguration_Children(this.h)
	_ret := make([]QNetworkConfiguration, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkConfiguration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkConfiguration(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkConfiguration) Name() string {
	var _ms C.struct_miqt_string = C.QNetworkConfiguration_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfiguration) IsValid() bool {
	return (bool)(C.QNetworkConfiguration_IsValid(this.h))
}

func (this *QNetworkConfiguration) ConnectTimeout() int {
	return (int)(C.QNetworkConfiguration_ConnectTimeout(this.h))
}

func (this *QNetworkConfiguration) SetConnectTimeout(timeout int) bool {
	return (bool)(C.QNetworkConfiguration_SetConnectTimeout(this.h, (C.int)(timeout)))
}

// Delete this object from C++ memory.
func (this *QNetworkConfiguration) Delete() {
	C.QNetworkConfiguration_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkConfiguration) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkConfiguration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

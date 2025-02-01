package network

/*

#include "gen_qhostaddress.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHostAddress__SpecialAddress int

const (
	QHostAddress__Null          QHostAddress__SpecialAddress = 0
	QHostAddress__Broadcast     QHostAddress__SpecialAddress = 1
	QHostAddress__LocalHost     QHostAddress__SpecialAddress = 2
	QHostAddress__LocalHostIPv6 QHostAddress__SpecialAddress = 3
	QHostAddress__Any           QHostAddress__SpecialAddress = 4
	QHostAddress__AnyIPv6       QHostAddress__SpecialAddress = 5
	QHostAddress__AnyIPv4       QHostAddress__SpecialAddress = 6
)

type QHostAddress__ConversionModeFlag int

const (
	QHostAddress__ConvertV4MappedToIPv4     QHostAddress__ConversionModeFlag = 1
	QHostAddress__ConvertV4CompatToIPv4     QHostAddress__ConversionModeFlag = 2
	QHostAddress__ConvertUnspecifiedAddress QHostAddress__ConversionModeFlag = 4
	QHostAddress__ConvertLocalHost          QHostAddress__ConversionModeFlag = 8
	QHostAddress__TolerantConversion        QHostAddress__ConversionModeFlag = 255
	QHostAddress__StrictConversion          QHostAddress__ConversionModeFlag = 0
)

type QIPv6Address struct {
	h *C.QIPv6Address
}

func (this *QIPv6Address) cPointer() *C.QIPv6Address {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIPv6Address) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIPv6Address constructs the type using only CGO pointers.
func newQIPv6Address(h *C.QIPv6Address) *QIPv6Address {
	if h == nil {
		return nil
	}

	return &QIPv6Address{h: h}
}

// UnsafeNewQIPv6Address constructs the type using only unsafe pointers.
func UnsafeNewQIPv6Address(h unsafe.Pointer) *QIPv6Address {
	return newQIPv6Address((*C.QIPv6Address)(h))
}

func (this *QIPv6Address) OperatorSubscript(index int) byte {
	return (byte)(C.QIPv6Address_operatorSubscript(this.h, (C.int)(index)))
}

// Delete this object from C++ memory.
func (this *QIPv6Address) Delete() {
	C.QIPv6Address_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIPv6Address) GoGC() {
	runtime.SetFinalizer(this, func(this *QIPv6Address) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHostAddress struct {
	h *C.QHostAddress
}

func (this *QHostAddress) cPointer() *C.QHostAddress {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHostAddress) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHostAddress constructs the type using only CGO pointers.
func newQHostAddress(h *C.QHostAddress) *QHostAddress {
	if h == nil {
		return nil
	}

	return &QHostAddress{h: h}
}

// UnsafeNewQHostAddress constructs the type using only unsafe pointers.
func UnsafeNewQHostAddress(h unsafe.Pointer) *QHostAddress {
	return newQHostAddress((*C.QHostAddress)(h))
}

// NewQHostAddress constructs a new QHostAddress object.
func NewQHostAddress() *QHostAddress {

	return newQHostAddress(C.QHostAddress_new())
}

// NewQHostAddress2 constructs a new QHostAddress object.
func NewQHostAddress2(ip4Addr uint) *QHostAddress {

	return newQHostAddress(C.QHostAddress_new2((C.uint)(ip4Addr)))
}

// NewQHostAddress3 constructs a new QHostAddress object.
func NewQHostAddress3(ip6Addr *byte) *QHostAddress {

	return newQHostAddress(C.QHostAddress_new3((*C.uchar)(unsafe.Pointer(ip6Addr))))
}

// NewQHostAddress4 constructs a new QHostAddress object.
func NewQHostAddress4(ip6Addr *QIPv6Address) *QHostAddress {

	return newQHostAddress(C.QHostAddress_new4(ip6Addr.cPointer()))
}

// NewQHostAddress5 constructs a new QHostAddress object.
func NewQHostAddress5(address string) *QHostAddress {
	address_ms := C.struct_miqt_string{}
	address_ms.data = C.CString(address)
	address_ms.len = C.size_t(len(address))
	defer C.free(unsafe.Pointer(address_ms.data))

	return newQHostAddress(C.QHostAddress_new5(address_ms))
}

// NewQHostAddress6 constructs a new QHostAddress object.
func NewQHostAddress6(copyVal *QHostAddress) *QHostAddress {

	return newQHostAddress(C.QHostAddress_new6(copyVal.cPointer()))
}

// NewQHostAddress7 constructs a new QHostAddress object.
func NewQHostAddress7(address QHostAddress__SpecialAddress) *QHostAddress {

	return newQHostAddress(C.QHostAddress_new7((C.int)(address)))
}

func (this *QHostAddress) OperatorAssign(other *QHostAddress) {
	C.QHostAddress_operatorAssign(this.h, other.cPointer())
}

func (this *QHostAddress) OperatorAssignWithAddress(address QHostAddress__SpecialAddress) {
	C.QHostAddress_operatorAssignWithAddress(this.h, (C.int)(address))
}

func (this *QHostAddress) Swap(other *QHostAddress) {
	C.QHostAddress_swap(this.h, other.cPointer())
}

func (this *QHostAddress) SetAddress(ip4Addr uint) {
	C.QHostAddress_setAddress(this.h, (C.uint)(ip4Addr))
}

func (this *QHostAddress) SetAddressWithIp6Addr(ip6Addr *byte) {
	C.QHostAddress_setAddressWithIp6Addr(this.h, (*C.uchar)(unsafe.Pointer(ip6Addr)))
}

func (this *QHostAddress) SetAddress2(ip6Addr *QIPv6Address) {
	C.QHostAddress_setAddress2(this.h, ip6Addr.cPointer())
}

func (this *QHostAddress) SetAddress3(address string) bool {
	address_ms := C.struct_miqt_string{}
	address_ms.data = C.CString(address)
	address_ms.len = C.size_t(len(address))
	defer C.free(unsafe.Pointer(address_ms.data))
	return (bool)(C.QHostAddress_setAddress3(this.h, address_ms))
}

func (this *QHostAddress) SetAddress4(address QHostAddress__SpecialAddress) {
	C.QHostAddress_setAddress4(this.h, (C.int)(address))
}

func (this *QHostAddress) Protocol() QAbstractSocket__NetworkLayerProtocol {
	return (QAbstractSocket__NetworkLayerProtocol)(C.QHostAddress_protocol(this.h))
}

func (this *QHostAddress) ToIPv4Address() uint {
	return (uint)(C.QHostAddress_toIPv4Address(this.h))
}

func (this *QHostAddress) ToIPv6Address() *QIPv6Address {
	_goptr := newQIPv6Address(C.QHostAddress_toIPv6Address(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHostAddress) ToString() string {
	var _ms C.struct_miqt_string = C.QHostAddress_toString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostAddress) ScopeId() string {
	var _ms C.struct_miqt_string = C.QHostAddress_scopeId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostAddress) SetScopeId(id string) {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	C.QHostAddress_setScopeId(this.h, id_ms)
}

func (this *QHostAddress) IsEqual(address *QHostAddress) bool {
	return (bool)(C.QHostAddress_isEqual(this.h, address.cPointer()))
}

func (this *QHostAddress) OperatorEqual(address *QHostAddress) bool {
	return (bool)(C.QHostAddress_operatorEqual(this.h, address.cPointer()))
}

func (this *QHostAddress) OperatorEqualWithAddress(address QHostAddress__SpecialAddress) bool {
	return (bool)(C.QHostAddress_operatorEqualWithAddress(this.h, (C.int)(address)))
}

func (this *QHostAddress) OperatorNotEqual(address *QHostAddress) bool {
	return (bool)(C.QHostAddress_operatorNotEqual(this.h, address.cPointer()))
}

func (this *QHostAddress) OperatorNotEqualWithAddress(address QHostAddress__SpecialAddress) bool {
	return (bool)(C.QHostAddress_operatorNotEqualWithAddress(this.h, (C.int)(address)))
}

func (this *QHostAddress) IsNull() bool {
	return (bool)(C.QHostAddress_isNull(this.h))
}

func (this *QHostAddress) Clear() {
	C.QHostAddress_clear(this.h)
}

func (this *QHostAddress) IsInSubnet(subnet *QHostAddress, netmask int) bool {
	return (bool)(C.QHostAddress_isInSubnet(this.h, subnet.cPointer(), (C.int)(netmask)))
}

func (this *QHostAddress) IsInSubnetWithSubnet(subnet struct {
	First  QHostAddress
	Second int
}) bool {
	subnet_First_CArray := (*[0xffff]*C.QHostAddress)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(subnet_First_CArray))
	subnet_Second_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8)))
	defer C.free(unsafe.Pointer(subnet_Second_CArray))
	subnet_First_CArray[0] = subnet.First.cPointer()
	subnet_Second_CArray[0] = (C.int)(subnet.Second)
	subnet_pair := C.struct_miqt_map{
		len:    1,
		keys:   unsafe.Pointer(subnet_First_CArray),
		values: unsafe.Pointer(subnet_Second_CArray),
	}
	return (bool)(C.QHostAddress_isInSubnetWithSubnet(this.h, subnet_pair))
}

func (this *QHostAddress) IsLoopback() bool {
	return (bool)(C.QHostAddress_isLoopback(this.h))
}

func (this *QHostAddress) IsGlobal() bool {
	return (bool)(C.QHostAddress_isGlobal(this.h))
}

func (this *QHostAddress) IsLinkLocal() bool {
	return (bool)(C.QHostAddress_isLinkLocal(this.h))
}

func (this *QHostAddress) IsSiteLocal() bool {
	return (bool)(C.QHostAddress_isSiteLocal(this.h))
}

func (this *QHostAddress) IsUniqueLocalUnicast() bool {
	return (bool)(C.QHostAddress_isUniqueLocalUnicast(this.h))
}

func (this *QHostAddress) IsMulticast() bool {
	return (bool)(C.QHostAddress_isMulticast(this.h))
}

func (this *QHostAddress) IsBroadcast() bool {
	return (bool)(C.QHostAddress_isBroadcast(this.h))
}

func QHostAddress_ParseSubnet(subnet string) struct {
	First  QHostAddress
	Second int
} {
	subnet_ms := C.struct_miqt_string{}
	subnet_ms.data = C.CString(subnet)
	subnet_ms.len = C.size_t(len(subnet))
	defer C.free(unsafe.Pointer(subnet_ms.data))
	var _mm C.struct_miqt_map = C.QHostAddress_parseSubnet(subnet_ms)
	_First_CArray := (*[0xffff]*C.QHostAddress)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_first_goptr := newQHostAddress(_First_CArray[0])
	_first_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_entry_First := *_first_goptr

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  QHostAddress
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QHostAddress) ToIPv4Address1(ok *bool) uint {
	return (uint)(C.QHostAddress_toIPv4Address1(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QHostAddress) IsEqual2(address *QHostAddress, mode QHostAddress__ConversionModeFlag) bool {
	return (bool)(C.QHostAddress_isEqual2(this.h, address.cPointer(), (C.int)(mode)))
}

// Delete this object from C++ memory.
func (this *QHostAddress) Delete() {
	C.QHostAddress_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHostAddress) GoGC() {
	runtime.SetFinalizer(this, func(this *QHostAddress) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

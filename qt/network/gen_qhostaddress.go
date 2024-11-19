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
	h          *C.QIPv6Address
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QIPv6Address{h: (*C.QIPv6Address)(h)}
}

func (this *QIPv6Address) OperatorSubscript(index int) byte {
	return (byte)(C.QIPv6Address_OperatorSubscript(this.h, (C.int)(index)))
}

// Delete this object from C++ memory.
func (this *QIPv6Address) Delete() {
	C.QIPv6Address_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QHostAddress
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QHostAddress{h: (*C.QHostAddress)(h)}
}

// NewQHostAddress constructs a new QHostAddress object.
func NewQHostAddress() *QHostAddress {
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new(&outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

// NewQHostAddress2 constructs a new QHostAddress object.
func NewQHostAddress2(ip4Addr uint) *QHostAddress {
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new2((C.uint)(ip4Addr), &outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

// NewQHostAddress3 constructs a new QHostAddress object.
func NewQHostAddress3(ip6Addr *byte) *QHostAddress {
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new3((*C.uchar)(unsafe.Pointer(ip6Addr)), &outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

// NewQHostAddress4 constructs a new QHostAddress object.
func NewQHostAddress4(ip6Addr *byte) *QHostAddress {
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new4((*C.uchar)(unsafe.Pointer(ip6Addr)), &outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

// NewQHostAddress5 constructs a new QHostAddress object.
func NewQHostAddress5(ip6Addr *QIPv6Address) *QHostAddress {
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new5(ip6Addr.cPointer(), &outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

// NewQHostAddress6 constructs a new QHostAddress object.
func NewQHostAddress6(address string) *QHostAddress {
	address_ms := C.struct_miqt_string{}
	address_ms.data = C.CString(address)
	address_ms.len = C.size_t(len(address))
	defer C.free(unsafe.Pointer(address_ms.data))
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new6(address_ms, &outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

// NewQHostAddress7 constructs a new QHostAddress object.
func NewQHostAddress7(copyVal *QHostAddress) *QHostAddress {
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new7(copyVal.cPointer(), &outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

// NewQHostAddress8 constructs a new QHostAddress object.
func NewQHostAddress8(address QHostAddress__SpecialAddress) *QHostAddress {
	var outptr_QHostAddress *C.QHostAddress = nil

	C.QHostAddress_new8((C.int)(address), &outptr_QHostAddress)
	ret := newQHostAddress(outptr_QHostAddress)
	ret.isSubclass = true
	return ret
}

func (this *QHostAddress) OperatorAssign(other *QHostAddress) {
	C.QHostAddress_OperatorAssign(this.h, other.cPointer())
}

func (this *QHostAddress) OperatorAssignWithAddress(address string) {
	address_ms := C.struct_miqt_string{}
	address_ms.data = C.CString(address)
	address_ms.len = C.size_t(len(address))
	defer C.free(unsafe.Pointer(address_ms.data))
	C.QHostAddress_OperatorAssignWithAddress(this.h, address_ms)
}

func (this *QHostAddress) OperatorAssign2(address QHostAddress__SpecialAddress) {
	C.QHostAddress_OperatorAssign2(this.h, (C.int)(address))
}

func (this *QHostAddress) Swap(other *QHostAddress) {
	C.QHostAddress_Swap(this.h, other.cPointer())
}

func (this *QHostAddress) SetAddress(ip4Addr uint) {
	C.QHostAddress_SetAddress(this.h, (C.uint)(ip4Addr))
}

func (this *QHostAddress) SetAddressWithIp6Addr(ip6Addr *byte) {
	C.QHostAddress_SetAddressWithIp6Addr(this.h, (*C.uchar)(unsafe.Pointer(ip6Addr)))
}

func (this *QHostAddress) SetAddress2(ip6Addr *byte) {
	C.QHostAddress_SetAddress2(this.h, (*C.uchar)(unsafe.Pointer(ip6Addr)))
}

func (this *QHostAddress) SetAddress3(ip6Addr *QIPv6Address) {
	C.QHostAddress_SetAddress3(this.h, ip6Addr.cPointer())
}

func (this *QHostAddress) SetAddress4(address string) bool {
	address_ms := C.struct_miqt_string{}
	address_ms.data = C.CString(address)
	address_ms.len = C.size_t(len(address))
	defer C.free(unsafe.Pointer(address_ms.data))
	return (bool)(C.QHostAddress_SetAddress4(this.h, address_ms))
}

func (this *QHostAddress) SetAddress5(address QHostAddress__SpecialAddress) {
	C.QHostAddress_SetAddress5(this.h, (C.int)(address))
}

func (this *QHostAddress) Protocol() QAbstractSocket__NetworkLayerProtocol {
	return (QAbstractSocket__NetworkLayerProtocol)(C.QHostAddress_Protocol(this.h))
}

func (this *QHostAddress) ToIPv4Address() uint {
	return (uint)(C.QHostAddress_ToIPv4Address(this.h))
}

func (this *QHostAddress) ToIPv4AddressWithOk(ok *bool) uint {
	return (uint)(C.QHostAddress_ToIPv4AddressWithOk(this.h, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QHostAddress) ToIPv6Address() *QIPv6Address {
	_ret := C.QHostAddress_ToIPv6Address(this.h)
	_goptr := newQIPv6Address(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHostAddress) ToString() string {
	var _ms C.struct_miqt_string = C.QHostAddress_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostAddress) ScopeId() string {
	var _ms C.struct_miqt_string = C.QHostAddress_ScopeId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHostAddress) SetScopeId(id string) {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	C.QHostAddress_SetScopeId(this.h, id_ms)
}

func (this *QHostAddress) IsEqual(address *QHostAddress) bool {
	return (bool)(C.QHostAddress_IsEqual(this.h, address.cPointer()))
}

func (this *QHostAddress) OperatorEqual(address *QHostAddress) bool {
	return (bool)(C.QHostAddress_OperatorEqual(this.h, address.cPointer()))
}

func (this *QHostAddress) OperatorEqualWithAddress(address QHostAddress__SpecialAddress) bool {
	return (bool)(C.QHostAddress_OperatorEqualWithAddress(this.h, (C.int)(address)))
}

func (this *QHostAddress) OperatorNotEqual(address *QHostAddress) bool {
	return (bool)(C.QHostAddress_OperatorNotEqual(this.h, address.cPointer()))
}

func (this *QHostAddress) OperatorNotEqualWithAddress(address QHostAddress__SpecialAddress) bool {
	return (bool)(C.QHostAddress_OperatorNotEqualWithAddress(this.h, (C.int)(address)))
}

func (this *QHostAddress) IsNull() bool {
	return (bool)(C.QHostAddress_IsNull(this.h))
}

func (this *QHostAddress) Clear() {
	C.QHostAddress_Clear(this.h)
}

func (this *QHostAddress) IsInSubnet(subnet *QHostAddress, netmask int) bool {
	return (bool)(C.QHostAddress_IsInSubnet(this.h, subnet.cPointer(), (C.int)(netmask)))
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
	return (bool)(C.QHostAddress_IsInSubnetWithSubnet(this.h, subnet_pair))
}

func (this *QHostAddress) IsLoopback() bool {
	return (bool)(C.QHostAddress_IsLoopback(this.h))
}

func (this *QHostAddress) IsGlobal() bool {
	return (bool)(C.QHostAddress_IsGlobal(this.h))
}

func (this *QHostAddress) IsLinkLocal() bool {
	return (bool)(C.QHostAddress_IsLinkLocal(this.h))
}

func (this *QHostAddress) IsSiteLocal() bool {
	return (bool)(C.QHostAddress_IsSiteLocal(this.h))
}

func (this *QHostAddress) IsUniqueLocalUnicast() bool {
	return (bool)(C.QHostAddress_IsUniqueLocalUnicast(this.h))
}

func (this *QHostAddress) IsMulticast() bool {
	return (bool)(C.QHostAddress_IsMulticast(this.h))
}

func (this *QHostAddress) IsBroadcast() bool {
	return (bool)(C.QHostAddress_IsBroadcast(this.h))
}

func QHostAddress_ParseSubnet(subnet string) struct {
	First  QHostAddress
	Second int
} {
	subnet_ms := C.struct_miqt_string{}
	subnet_ms.data = C.CString(subnet)
	subnet_ms.len = C.size_t(len(subnet))
	defer C.free(unsafe.Pointer(subnet_ms.data))
	var _mm C.struct_miqt_map = C.QHostAddress_ParseSubnet(subnet_ms)
	_First_CArray := (*[0xffff]*C.QHostAddress)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_first_ret := _First_CArray[0]
	_first_goptr := newQHostAddress(_first_ret)
	_first_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_entry_First := *_first_goptr

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  QHostAddress
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QHostAddress) IsEqual2(address *QHostAddress, mode QHostAddress__ConversionModeFlag) bool {
	return (bool)(C.QHostAddress_IsEqual2(this.h, address.cPointer(), (C.int)(mode)))
}

// Delete this object from C++ memory.
func (this *QHostAddress) Delete() {
	C.QHostAddress_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHostAddress) GoGC() {
	runtime.SetFinalizer(this, func(this *QHostAddress) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

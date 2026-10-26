package network

/*

#include "gen_qnetworkinterface.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QNetworkAddressEntry__DnsEligibilityStatus int8

const (
	QNetworkAddressEntry__DnsEligibilityUnknown QNetworkAddressEntry__DnsEligibilityStatus = -1
	QNetworkAddressEntry__DnsIneligible         QNetworkAddressEntry__DnsEligibilityStatus = 0
	QNetworkAddressEntry__DnsEligible           QNetworkAddressEntry__DnsEligibilityStatus = 1
)

type QNetworkInterface__InterfaceFlag int

const (
	QNetworkInterface__IsUp           QNetworkInterface__InterfaceFlag = 1
	QNetworkInterface__IsRunning      QNetworkInterface__InterfaceFlag = 2
	QNetworkInterface__CanBroadcast   QNetworkInterface__InterfaceFlag = 4
	QNetworkInterface__IsLoopBack     QNetworkInterface__InterfaceFlag = 8
	QNetworkInterface__IsPointToPoint QNetworkInterface__InterfaceFlag = 16
	QNetworkInterface__CanMulticast   QNetworkInterface__InterfaceFlag = 32
)

type QNetworkInterface__InterfaceType int

const (
	QNetworkInterface__Loopback   QNetworkInterface__InterfaceType = 1
	QNetworkInterface__Virtual    QNetworkInterface__InterfaceType = 2
	QNetworkInterface__Ethernet   QNetworkInterface__InterfaceType = 3
	QNetworkInterface__Slip       QNetworkInterface__InterfaceType = 4
	QNetworkInterface__CanBus     QNetworkInterface__InterfaceType = 5
	QNetworkInterface__Ppp        QNetworkInterface__InterfaceType = 6
	QNetworkInterface__Fddi       QNetworkInterface__InterfaceType = 7
	QNetworkInterface__Wifi       QNetworkInterface__InterfaceType = 8
	QNetworkInterface__Ieee80211  QNetworkInterface__InterfaceType = 8
	QNetworkInterface__Phonet     QNetworkInterface__InterfaceType = 9
	QNetworkInterface__Ieee802154 QNetworkInterface__InterfaceType = 10
	QNetworkInterface__SixLoWPAN  QNetworkInterface__InterfaceType = 11
	QNetworkInterface__Ieee80216  QNetworkInterface__InterfaceType = 12
	QNetworkInterface__Ieee1394   QNetworkInterface__InterfaceType = 13
	QNetworkInterface__Unknown    QNetworkInterface__InterfaceType = 0
)

type QNetworkAddressEntry struct {
	h  *C.QNetworkAddressEntry
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QNetworkAddressEntry) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QNetworkAddressEntry) cPointer() *C.QNetworkAddressEntry {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkAddressEntry) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkAddressEntry constructs the type using only CGO pointers.
func newQNetworkAddressEntry(h *C.QNetworkAddressEntry) *QNetworkAddressEntry {
	if h == nil {
		return nil
	}

	return &QNetworkAddressEntry{h: h}
}

// UnsafeNewQNetworkAddressEntry constructs the type using only unsafe pointers.
func UnsafeNewQNetworkAddressEntry(h unsafe.Pointer) *QNetworkAddressEntry {
	return newQNetworkAddressEntry((*C.QNetworkAddressEntry)(h))
}

// NewQNetworkAddressEntry constructs a new QNetworkAddressEntry object.
func NewQNetworkAddressEntry() *QNetworkAddressEntry {

	return newQNetworkAddressEntry(C.QNetworkAddressEntry_new())
}

// NewQNetworkAddressEntry2 constructs a new QNetworkAddressEntry object.
func NewQNetworkAddressEntry2(other *QNetworkAddressEntry) *QNetworkAddressEntry {
	defer runtime.KeepAlive(other)

	return newQNetworkAddressEntry(C.QNetworkAddressEntry_new2(other.cPointer()))
}

func (this *QNetworkAddressEntry) OperatorAssign(other *QNetworkAddressEntry) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkAddressEntry_operatorAssign(this.h, other.cPointer())
}

func (this *QNetworkAddressEntry) Swap(other *QNetworkAddressEntry) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkAddressEntry_swap(this.h, other.cPointer())
}

func (this *QNetworkAddressEntry) OperatorEqual(other *QNetworkAddressEntry) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QNetworkAddressEntry_operatorEqual(this.h, other.cPointer()))
}

func (this *QNetworkAddressEntry) OperatorNotEqual(other *QNetworkAddressEntry) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QNetworkAddressEntry_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QNetworkAddressEntry) DnsEligibility() QNetworkAddressEntry__DnsEligibilityStatus {
	defer runtime.KeepAlive(this)
	return (QNetworkAddressEntry__DnsEligibilityStatus)(C.QNetworkAddressEntry_dnsEligibility(this.h))
}

func (this *QNetworkAddressEntry) SetDnsEligibility(status QNetworkAddressEntry__DnsEligibilityStatus) {
	defer runtime.KeepAlive(this)
	C.QNetworkAddressEntry_setDnsEligibility(this.h, (C.int8_t)(status))
}

func (this *QNetworkAddressEntry) Ip() *QHostAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQHostAddress(C.QNetworkAddressEntry_ip(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAddressEntry) SetIp(newIp *QHostAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(newIp)
	C.QNetworkAddressEntry_setIp(this.h, newIp.cPointer())
}

func (this *QNetworkAddressEntry) Netmask() *QHostAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQHostAddress(C.QNetworkAddressEntry_netmask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAddressEntry) SetNetmask(newNetmask *QHostAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(newNetmask)
	C.QNetworkAddressEntry_setNetmask(this.h, newNetmask.cPointer())
}

func (this *QNetworkAddressEntry) PrefixLength() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QNetworkAddressEntry_prefixLength(this.h))
}

func (this *QNetworkAddressEntry) SetPrefixLength(length int) {
	defer runtime.KeepAlive(this)
	C.QNetworkAddressEntry_setPrefixLength(this.h, (C.int)(length))
}

func (this *QNetworkAddressEntry) Broadcast() *QHostAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQHostAddress(C.QNetworkAddressEntry_broadcast(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAddressEntry) SetBroadcast(newBroadcast *QHostAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(newBroadcast)
	C.QNetworkAddressEntry_setBroadcast(this.h, newBroadcast.cPointer())
}

func (this *QNetworkAddressEntry) IsLifetimeKnown() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkAddressEntry_isLifetimeKnown(this.h))
}

func (this *QNetworkAddressEntry) PreferredLifetime() *qt6.QDeadlineTimer {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQDeadlineTimer(unsafe.Pointer(C.QNetworkAddressEntry_preferredLifetime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAddressEntry) ValidityLifetime() *qt6.QDeadlineTimer {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQDeadlineTimer(unsafe.Pointer(C.QNetworkAddressEntry_validityLifetime(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkAddressEntry) SetAddressLifetime(preferred qt6.QDeadlineTimer, validity qt6.QDeadlineTimer) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(preferred)
	defer runtime.KeepAlive(validity)
	C.QNetworkAddressEntry_setAddressLifetime(this.h, (*C.QDeadlineTimer)(preferred.UnsafePointer()), (*C.QDeadlineTimer)(validity.UnsafePointer()))
}

func (this *QNetworkAddressEntry) ClearAddressLifetime() {
	defer runtime.KeepAlive(this)
	C.QNetworkAddressEntry_clearAddressLifetime(this.h)
}

func (this *QNetworkAddressEntry) IsPermanent() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkAddressEntry_isPermanent(this.h))
}

func (this *QNetworkAddressEntry) IsTemporary() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkAddressEntry_isTemporary(this.h))
}

// Delete this object from C++ memory.
func (this *QNetworkAddressEntry) Delete() {
	C.QNetworkAddressEntry_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QNetworkAddressEntry) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QNetworkAddressEntry_delete((*C.QNetworkAddressEntry)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QNetworkInterface struct {
	h  *C.QNetworkInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QNetworkInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QNetworkInterface) cPointer() *C.QNetworkInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkInterface constructs the type using only CGO pointers.
func newQNetworkInterface(h *C.QNetworkInterface) *QNetworkInterface {
	if h == nil {
		return nil
	}

	return &QNetworkInterface{h: h}
}

// UnsafeNewQNetworkInterface constructs the type using only unsafe pointers.
func UnsafeNewQNetworkInterface(h unsafe.Pointer) *QNetworkInterface {
	return newQNetworkInterface((*C.QNetworkInterface)(h))
}

// NewQNetworkInterface constructs a new QNetworkInterface object.
func NewQNetworkInterface() *QNetworkInterface {

	return newQNetworkInterface(C.QNetworkInterface_new())
}

// NewQNetworkInterface2 constructs a new QNetworkInterface object.
func NewQNetworkInterface2(other *QNetworkInterface) *QNetworkInterface {
	defer runtime.KeepAlive(other)

	return newQNetworkInterface(C.QNetworkInterface_new2(other.cPointer()))
}

func (this *QNetworkInterface) OperatorAssign(other *QNetworkInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkInterface_operatorAssign(this.h, other.cPointer())
}

func (this *QNetworkInterface) Swap(other *QNetworkInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QNetworkInterface_swap(this.h, other.cPointer())
}

func (this *QNetworkInterface) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QNetworkInterface_isValid(this.h))
}

func (this *QNetworkInterface) Index() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QNetworkInterface_index(this.h))
}

func (this *QNetworkInterface) MaximumTransmissionUnit() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QNetworkInterface_maximumTransmissionUnit(this.h))
}

func (this *QNetworkInterface) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QNetworkInterface_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkInterface) HumanReadableName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QNetworkInterface_humanReadableName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkInterface) Flags() QNetworkInterface__InterfaceFlag {
	defer runtime.KeepAlive(this)
	return (QNetworkInterface__InterfaceFlag)(C.QNetworkInterface_flags(this.h))
}

func (this *QNetworkInterface) Type() QNetworkInterface__InterfaceType {
	defer runtime.KeepAlive(this)
	return (QNetworkInterface__InterfaceType)(C.QNetworkInterface_type(this.h))
}

func (this *QNetworkInterface) HardwareAddress() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QNetworkInterface_hardwareAddress(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkInterface) AddressEntries() []QNetworkAddressEntry {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QNetworkInterface_addressEntries(this.h)
	_ret := make([]QNetworkAddressEntry, int(_ma.len))
	_outCast := unsafe.Slice((**C.QNetworkAddressEntry)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkAddressEntry(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QNetworkInterface_InterfaceIndexFromName(name string) int {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (int)(C.QNetworkInterface_interfaceIndexFromName(name_ms))
}

func QNetworkInterface_InterfaceFromName(name string) *QNetworkInterface {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQNetworkInterface(C.QNetworkInterface_interfaceFromName(name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QNetworkInterface_InterfaceFromIndex(index int) *QNetworkInterface {
	_goptr := newQNetworkInterface(C.QNetworkInterface_interfaceFromIndex((C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QNetworkInterface_InterfaceNameFromIndex(index int) string {
	var _ms C.struct_miqt_string = C.QNetworkInterface_interfaceNameFromIndex((C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkInterface_AllInterfaces() []QNetworkInterface {
	var _ma C.struct_miqt_array = C.QNetworkInterface_allInterfaces()
	_ret := make([]QNetworkInterface, int(_ma.len))
	_outCast := unsafe.Slice((**C.QNetworkInterface)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkInterface(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QNetworkInterface_AllAddresses() []QHostAddress {
	var _ma C.struct_miqt_array = C.QNetworkInterface_allAddresses()
	_ret := make([]QHostAddress, int(_ma.len))
	_outCast := unsafe.Slice((**C.QHostAddress)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQHostAddress(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QNetworkInterface) Delete() {
	C.QNetworkInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QNetworkInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QNetworkInterface_delete((*C.QNetworkInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

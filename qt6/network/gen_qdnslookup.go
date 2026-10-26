package network

/*

#include "gen_qdnslookup.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDnsLookup__Error int

const (
	QDnsLookup__NoError                 QDnsLookup__Error = 0
	QDnsLookup__ResolverError           QDnsLookup__Error = 1
	QDnsLookup__OperationCancelledError QDnsLookup__Error = 2
	QDnsLookup__InvalidRequestError     QDnsLookup__Error = 3
	QDnsLookup__InvalidReplyError       QDnsLookup__Error = 4
	QDnsLookup__ServerFailureError      QDnsLookup__Error = 5
	QDnsLookup__ServerRefusedError      QDnsLookup__Error = 6
	QDnsLookup__NotFoundError           QDnsLookup__Error = 7
)

type QDnsLookup__Type int

const (
	QDnsLookup__A     QDnsLookup__Type = 1
	QDnsLookup__AAAA  QDnsLookup__Type = 28
	QDnsLookup__ANY   QDnsLookup__Type = 255
	QDnsLookup__CNAME QDnsLookup__Type = 5
	QDnsLookup__MX    QDnsLookup__Type = 15
	QDnsLookup__NS    QDnsLookup__Type = 2
	QDnsLookup__PTR   QDnsLookup__Type = 12
	QDnsLookup__SRV   QDnsLookup__Type = 33
	QDnsLookup__TXT   QDnsLookup__Type = 16
)

type QDnsDomainNameRecord struct {
	h  *C.QDnsDomainNameRecord
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDnsDomainNameRecord) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDnsDomainNameRecord) cPointer() *C.QDnsDomainNameRecord {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDnsDomainNameRecord) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDnsDomainNameRecord constructs the type using only CGO pointers.
func newQDnsDomainNameRecord(h *C.QDnsDomainNameRecord) *QDnsDomainNameRecord {
	if h == nil {
		return nil
	}

	return &QDnsDomainNameRecord{h: h}
}

// UnsafeNewQDnsDomainNameRecord constructs the type using only unsafe pointers.
func UnsafeNewQDnsDomainNameRecord(h unsafe.Pointer) *QDnsDomainNameRecord {
	return newQDnsDomainNameRecord((*C.QDnsDomainNameRecord)(h))
}

// NewQDnsDomainNameRecord constructs a new QDnsDomainNameRecord object.
func NewQDnsDomainNameRecord() *QDnsDomainNameRecord {

	return newQDnsDomainNameRecord(C.QDnsDomainNameRecord_new())
}

// NewQDnsDomainNameRecord2 constructs a new QDnsDomainNameRecord object.
func NewQDnsDomainNameRecord2(other *QDnsDomainNameRecord) *QDnsDomainNameRecord {
	defer runtime.KeepAlive(other)

	return newQDnsDomainNameRecord(C.QDnsDomainNameRecord_new2(other.cPointer()))
}

func (this *QDnsDomainNameRecord) OperatorAssign(other *QDnsDomainNameRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsDomainNameRecord_operatorAssign(this.h, other.cPointer())
}

func (this *QDnsDomainNameRecord) Swap(other *QDnsDomainNameRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsDomainNameRecord_swap(this.h, other.cPointer())
}

func (this *QDnsDomainNameRecord) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsDomainNameRecord_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsDomainNameRecord) TimeToLive() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QDnsDomainNameRecord_timeToLive(this.h))
}

func (this *QDnsDomainNameRecord) Value() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsDomainNameRecord_value(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDnsDomainNameRecord) Delete() {
	C.QDnsDomainNameRecord_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDnsDomainNameRecord) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDnsDomainNameRecord_delete((*C.QDnsDomainNameRecord)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDnsHostAddressRecord struct {
	h  *C.QDnsHostAddressRecord
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDnsHostAddressRecord) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDnsHostAddressRecord) cPointer() *C.QDnsHostAddressRecord {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDnsHostAddressRecord) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDnsHostAddressRecord constructs the type using only CGO pointers.
func newQDnsHostAddressRecord(h *C.QDnsHostAddressRecord) *QDnsHostAddressRecord {
	if h == nil {
		return nil
	}

	return &QDnsHostAddressRecord{h: h}
}

// UnsafeNewQDnsHostAddressRecord constructs the type using only unsafe pointers.
func UnsafeNewQDnsHostAddressRecord(h unsafe.Pointer) *QDnsHostAddressRecord {
	return newQDnsHostAddressRecord((*C.QDnsHostAddressRecord)(h))
}

// NewQDnsHostAddressRecord constructs a new QDnsHostAddressRecord object.
func NewQDnsHostAddressRecord() *QDnsHostAddressRecord {

	return newQDnsHostAddressRecord(C.QDnsHostAddressRecord_new())
}

// NewQDnsHostAddressRecord2 constructs a new QDnsHostAddressRecord object.
func NewQDnsHostAddressRecord2(other *QDnsHostAddressRecord) *QDnsHostAddressRecord {
	defer runtime.KeepAlive(other)

	return newQDnsHostAddressRecord(C.QDnsHostAddressRecord_new2(other.cPointer()))
}

func (this *QDnsHostAddressRecord) OperatorAssign(other *QDnsHostAddressRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsHostAddressRecord_operatorAssign(this.h, other.cPointer())
}

func (this *QDnsHostAddressRecord) Swap(other *QDnsHostAddressRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsHostAddressRecord_swap(this.h, other.cPointer())
}

func (this *QDnsHostAddressRecord) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsHostAddressRecord_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsHostAddressRecord) TimeToLive() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QDnsHostAddressRecord_timeToLive(this.h))
}

func (this *QDnsHostAddressRecord) Value() *QHostAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQHostAddress(C.QDnsHostAddressRecord_value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDnsHostAddressRecord) Delete() {
	C.QDnsHostAddressRecord_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDnsHostAddressRecord) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDnsHostAddressRecord_delete((*C.QDnsHostAddressRecord)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDnsMailExchangeRecord struct {
	h  *C.QDnsMailExchangeRecord
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDnsMailExchangeRecord) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDnsMailExchangeRecord) cPointer() *C.QDnsMailExchangeRecord {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDnsMailExchangeRecord) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDnsMailExchangeRecord constructs the type using only CGO pointers.
func newQDnsMailExchangeRecord(h *C.QDnsMailExchangeRecord) *QDnsMailExchangeRecord {
	if h == nil {
		return nil
	}

	return &QDnsMailExchangeRecord{h: h}
}

// UnsafeNewQDnsMailExchangeRecord constructs the type using only unsafe pointers.
func UnsafeNewQDnsMailExchangeRecord(h unsafe.Pointer) *QDnsMailExchangeRecord {
	return newQDnsMailExchangeRecord((*C.QDnsMailExchangeRecord)(h))
}

// NewQDnsMailExchangeRecord constructs a new QDnsMailExchangeRecord object.
func NewQDnsMailExchangeRecord() *QDnsMailExchangeRecord {

	return newQDnsMailExchangeRecord(C.QDnsMailExchangeRecord_new())
}

// NewQDnsMailExchangeRecord2 constructs a new QDnsMailExchangeRecord object.
func NewQDnsMailExchangeRecord2(other *QDnsMailExchangeRecord) *QDnsMailExchangeRecord {
	defer runtime.KeepAlive(other)

	return newQDnsMailExchangeRecord(C.QDnsMailExchangeRecord_new2(other.cPointer()))
}

func (this *QDnsMailExchangeRecord) OperatorAssign(other *QDnsMailExchangeRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsMailExchangeRecord_operatorAssign(this.h, other.cPointer())
}

func (this *QDnsMailExchangeRecord) Swap(other *QDnsMailExchangeRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsMailExchangeRecord_swap(this.h, other.cPointer())
}

func (this *QDnsMailExchangeRecord) Exchange() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsMailExchangeRecord_exchange(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsMailExchangeRecord) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsMailExchangeRecord_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsMailExchangeRecord) Preference() uint16 {
	defer runtime.KeepAlive(this)
	return (uint16)(C.QDnsMailExchangeRecord_preference(this.h))
}

func (this *QDnsMailExchangeRecord) TimeToLive() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QDnsMailExchangeRecord_timeToLive(this.h))
}

// Delete this object from C++ memory.
func (this *QDnsMailExchangeRecord) Delete() {
	C.QDnsMailExchangeRecord_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDnsMailExchangeRecord) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDnsMailExchangeRecord_delete((*C.QDnsMailExchangeRecord)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDnsServiceRecord struct {
	h  *C.QDnsServiceRecord
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDnsServiceRecord) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDnsServiceRecord) cPointer() *C.QDnsServiceRecord {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDnsServiceRecord) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDnsServiceRecord constructs the type using only CGO pointers.
func newQDnsServiceRecord(h *C.QDnsServiceRecord) *QDnsServiceRecord {
	if h == nil {
		return nil
	}

	return &QDnsServiceRecord{h: h}
}

// UnsafeNewQDnsServiceRecord constructs the type using only unsafe pointers.
func UnsafeNewQDnsServiceRecord(h unsafe.Pointer) *QDnsServiceRecord {
	return newQDnsServiceRecord((*C.QDnsServiceRecord)(h))
}

// NewQDnsServiceRecord constructs a new QDnsServiceRecord object.
func NewQDnsServiceRecord() *QDnsServiceRecord {

	return newQDnsServiceRecord(C.QDnsServiceRecord_new())
}

// NewQDnsServiceRecord2 constructs a new QDnsServiceRecord object.
func NewQDnsServiceRecord2(other *QDnsServiceRecord) *QDnsServiceRecord {
	defer runtime.KeepAlive(other)

	return newQDnsServiceRecord(C.QDnsServiceRecord_new2(other.cPointer()))
}

func (this *QDnsServiceRecord) OperatorAssign(other *QDnsServiceRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsServiceRecord_operatorAssign(this.h, other.cPointer())
}

func (this *QDnsServiceRecord) Swap(other *QDnsServiceRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsServiceRecord_swap(this.h, other.cPointer())
}

func (this *QDnsServiceRecord) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsServiceRecord_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsServiceRecord) Port() uint16 {
	defer runtime.KeepAlive(this)
	return (uint16)(C.QDnsServiceRecord_port(this.h))
}

func (this *QDnsServiceRecord) Priority() uint16 {
	defer runtime.KeepAlive(this)
	return (uint16)(C.QDnsServiceRecord_priority(this.h))
}

func (this *QDnsServiceRecord) Target() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsServiceRecord_target(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsServiceRecord) TimeToLive() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QDnsServiceRecord_timeToLive(this.h))
}

func (this *QDnsServiceRecord) Weight() uint16 {
	defer runtime.KeepAlive(this)
	return (uint16)(C.QDnsServiceRecord_weight(this.h))
}

// Delete this object from C++ memory.
func (this *QDnsServiceRecord) Delete() {
	C.QDnsServiceRecord_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDnsServiceRecord) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDnsServiceRecord_delete((*C.QDnsServiceRecord)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDnsTextRecord struct {
	h  *C.QDnsTextRecord
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDnsTextRecord) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDnsTextRecord) cPointer() *C.QDnsTextRecord {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDnsTextRecord) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDnsTextRecord constructs the type using only CGO pointers.
func newQDnsTextRecord(h *C.QDnsTextRecord) *QDnsTextRecord {
	if h == nil {
		return nil
	}

	return &QDnsTextRecord{h: h}
}

// UnsafeNewQDnsTextRecord constructs the type using only unsafe pointers.
func UnsafeNewQDnsTextRecord(h unsafe.Pointer) *QDnsTextRecord {
	return newQDnsTextRecord((*C.QDnsTextRecord)(h))
}

// NewQDnsTextRecord constructs a new QDnsTextRecord object.
func NewQDnsTextRecord() *QDnsTextRecord {

	return newQDnsTextRecord(C.QDnsTextRecord_new())
}

// NewQDnsTextRecord2 constructs a new QDnsTextRecord object.
func NewQDnsTextRecord2(other *QDnsTextRecord) *QDnsTextRecord {
	defer runtime.KeepAlive(other)

	return newQDnsTextRecord(C.QDnsTextRecord_new2(other.cPointer()))
}

func (this *QDnsTextRecord) OperatorAssign(other *QDnsTextRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsTextRecord_operatorAssign(this.h, other.cPointer())
}

func (this *QDnsTextRecord) Swap(other *QDnsTextRecord) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QDnsTextRecord_swap(this.h, other.cPointer())
}

func (this *QDnsTextRecord) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsTextRecord_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsTextRecord) TimeToLive() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QDnsTextRecord_timeToLive(this.h))
}

func (this *QDnsTextRecord) Values() [][]byte {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsTextRecord_values(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QDnsTextRecord) Delete() {
	C.QDnsTextRecord_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDnsTextRecord) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDnsTextRecord_delete((*C.QDnsTextRecord)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDnsLookup struct {
	h  *C.QDnsLookup
	gc *[1]unsafe.Pointer
	*qt6.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDnsLookup) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDnsLookup) cPointer() *C.QDnsLookup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDnsLookup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDnsLookup constructs the type using only CGO pointers.
func newQDnsLookup(h *C.QDnsLookup) *QDnsLookup {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDnsLookup_virtbase(h, &outptr_QObject)

	return &QDnsLookup{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDnsLookup constructs the type using only unsafe pointers.
func UnsafeNewQDnsLookup(h unsafe.Pointer) *QDnsLookup {
	return newQDnsLookup((*C.QDnsLookup)(h))
}

// NewQDnsLookup constructs a new QDnsLookup object.
func NewQDnsLookup() *QDnsLookup {

	return newQDnsLookup(C.QDnsLookup_new())
}

// NewQDnsLookup2 constructs a new QDnsLookup object.
func NewQDnsLookup2(typeVal QDnsLookup__Type, name string) *QDnsLookup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQDnsLookup(C.QDnsLookup_new2((C.int)(typeVal), name_ms))
}

// NewQDnsLookup3 constructs a new QDnsLookup object.
func NewQDnsLookup3(typeVal QDnsLookup__Type, name string, nameserver *QHostAddress) *QDnsLookup {
	defer runtime.KeepAlive(nameserver)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQDnsLookup(C.QDnsLookup_new3((C.int)(typeVal), name_ms, nameserver.cPointer()))
}

// NewQDnsLookup4 constructs a new QDnsLookup object.
func NewQDnsLookup4(parent *qt6.QObject) *QDnsLookup {
	defer runtime.KeepAlive(parent)

	return newQDnsLookup(C.QDnsLookup_new4((*C.QObject)(parent.UnsafePointer())))
}

// NewQDnsLookup5 constructs a new QDnsLookup object.
func NewQDnsLookup5(typeVal QDnsLookup__Type, name string, parent *qt6.QObject) *QDnsLookup {
	defer runtime.KeepAlive(parent)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQDnsLookup(C.QDnsLookup_new5((C.int)(typeVal), name_ms, (*C.QObject)(parent.UnsafePointer())))
}

// NewQDnsLookup6 constructs a new QDnsLookup object.
func NewQDnsLookup6(typeVal QDnsLookup__Type, name string, nameserver *QHostAddress, parent *qt6.QObject) *QDnsLookup {
	defer runtime.KeepAlive(nameserver)
	defer runtime.KeepAlive(parent)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQDnsLookup(C.QDnsLookup_new6((C.int)(typeVal), name_ms, nameserver.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QDnsLookup) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDnsLookup_metaObject(this.h)))
}

func (this *QDnsLookup) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDnsLookup_metacast(this.h, param1_Cstring))
}

func QDnsLookup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsLookup) Error() QDnsLookup__Error {
	defer runtime.KeepAlive(this)
	return (QDnsLookup__Error)(C.QDnsLookup_error(this.h))
}

func (this *QDnsLookup) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsLookup_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsLookup) IsFinished() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDnsLookup_isFinished(this.h))
}

func (this *QDnsLookup) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDnsLookup_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsLookup) SetName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDnsLookup_setName(this.h, name_ms)
}

func (this *QDnsLookup) Type() QDnsLookup__Type {
	defer runtime.KeepAlive(this)
	return (QDnsLookup__Type)(C.QDnsLookup_type(this.h))
}

func (this *QDnsLookup) SetType(typeVal QDnsLookup__Type) {
	defer runtime.KeepAlive(this)
	C.QDnsLookup_setType(this.h, (C.int)(typeVal))
}

func (this *QDnsLookup) Nameserver() *QHostAddress {
	defer runtime.KeepAlive(this)
	_goptr := newQHostAddress(C.QDnsLookup_nameserver(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDnsLookup) SetNameserver(nameserver *QHostAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(nameserver)
	C.QDnsLookup_setNameserver(this.h, nameserver.cPointer())
}

func (this *QDnsLookup) CanonicalNameRecords() []QDnsDomainNameRecord {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsLookup_canonicalNameRecords(this.h)
	_ret := make([]QDnsDomainNameRecord, int(_ma.len))
	_outCast := unsafe.Slice((**C.QDnsDomainNameRecord)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsDomainNameRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) HostAddressRecords() []QDnsHostAddressRecord {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsLookup_hostAddressRecords(this.h)
	_ret := make([]QDnsHostAddressRecord, int(_ma.len))
	_outCast := unsafe.Slice((**C.QDnsHostAddressRecord)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsHostAddressRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) MailExchangeRecords() []QDnsMailExchangeRecord {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsLookup_mailExchangeRecords(this.h)
	_ret := make([]QDnsMailExchangeRecord, int(_ma.len))
	_outCast := unsafe.Slice((**C.QDnsMailExchangeRecord)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsMailExchangeRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) NameServerRecords() []QDnsDomainNameRecord {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsLookup_nameServerRecords(this.h)
	_ret := make([]QDnsDomainNameRecord, int(_ma.len))
	_outCast := unsafe.Slice((**C.QDnsDomainNameRecord)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsDomainNameRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) PointerRecords() []QDnsDomainNameRecord {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsLookup_pointerRecords(this.h)
	_ret := make([]QDnsDomainNameRecord, int(_ma.len))
	_outCast := unsafe.Slice((**C.QDnsDomainNameRecord)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsDomainNameRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) ServiceRecords() []QDnsServiceRecord {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsLookup_serviceRecords(this.h)
	_ret := make([]QDnsServiceRecord, int(_ma.len))
	_outCast := unsafe.Slice((**C.QDnsServiceRecord)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsServiceRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) TextRecords() []QDnsTextRecord {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QDnsLookup_textRecords(this.h)
	_ret := make([]QDnsTextRecord, int(_ma.len))
	_outCast := unsafe.Slice((**C.QDnsTextRecord)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsTextRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) Abort() {
	defer runtime.KeepAlive(this)
	C.QDnsLookup_abort(this.h)
}

func (this *QDnsLookup) Lookup() {
	defer runtime.KeepAlive(this)
	C.QDnsLookup_lookup(this.h)
}

func (this *QDnsLookup) Finished() {
	defer runtime.KeepAlive(this)
	C.QDnsLookup_finished(this.h)
}
func (this *QDnsLookup) OnFinished(slot func()) {
	C.QDnsLookup_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_finished
func miqt_exec_callback_QDnsLookup_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDnsLookup) NameChanged(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDnsLookup_nameChanged(this.h, name_ms)
}
func (this *QDnsLookup) OnNameChanged(slot func(name string)) {
	C.QDnsLookup_connect_nameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_nameChanged
func miqt_exec_callback_QDnsLookup_nameChanged(cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc(slotval1)
}

func (this *QDnsLookup) TypeChanged(typeVal QDnsLookup__Type) {
	defer runtime.KeepAlive(this)
	C.QDnsLookup_typeChanged(this.h, (C.int)(typeVal))
}
func (this *QDnsLookup) OnTypeChanged(slot func(typeVal QDnsLookup__Type)) {
	C.QDnsLookup_connect_typeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_typeChanged
func miqt_exec_callback_QDnsLookup_typeChanged(cb C.intptr_t, typeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal QDnsLookup__Type))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDnsLookup__Type)(typeVal)

	gofunc(slotval1)
}

func (this *QDnsLookup) NameserverChanged(nameserver *QHostAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(nameserver)
	C.QDnsLookup_nameserverChanged(this.h, nameserver.cPointer())
}
func (this *QDnsLookup) OnNameserverChanged(slot func(nameserver *QHostAddress)) {
	C.QDnsLookup_connect_nameserverChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_nameserverChanged
func miqt_exec_callback_QDnsLookup_nameserverChanged(cb C.intptr_t, nameserver *C.QHostAddress) {
	gofunc, ok := cgo.Handle(cb).Value().(func(nameserver *QHostAddress))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHostAddress(nameserver)

	gofunc(slotval1)
}

func QDnsLookup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDnsLookup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDnsLookup that was directly constructed.
func (this *QDnsLookup) Sender() *qt6.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDnsLookup_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDnsLookup that was directly constructed.
func (this *QDnsLookup) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDnsLookup_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDnsLookup that was directly constructed.
func (this *QDnsLookup) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDnsLookup_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDnsLookup that was directly constructed.
func (this *QDnsLookup) IsSignalConnected(signal *qt6.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDnsLookup_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDnsLookup) callVirtualBase_Event(event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QDnsLookup_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDnsLookup) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDnsLookup_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_event
func miqt_exec_callback_QDnsLookup_event(self *C.QDnsLookup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDnsLookup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDnsLookup) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QDnsLookup_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDnsLookup) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDnsLookup_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_eventFilter
func miqt_exec_callback_QDnsLookup_eventFilter(self *C.QDnsLookup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDnsLookup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDnsLookup) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QDnsLookup_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDnsLookup) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDnsLookup_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_timerEvent
func miqt_exec_callback_QDnsLookup_timerEvent(self *C.QDnsLookup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDnsLookup) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QDnsLookup_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDnsLookup) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDnsLookup_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_childEvent
func miqt_exec_callback_QDnsLookup_childEvent(self *C.QDnsLookup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDnsLookup) callVirtualBase_CustomEvent(event *qt6.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QDnsLookup_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDnsLookup) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDnsLookup_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_customEvent
func miqt_exec_callback_QDnsLookup_customEvent(self *C.QDnsLookup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDnsLookup) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QDnsLookup_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDnsLookup) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDnsLookup_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_connectNotify
func miqt_exec_callback_QDnsLookup_connectNotify(self *C.QDnsLookup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDnsLookup) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QDnsLookup_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDnsLookup) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDnsLookup_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_disconnectNotify
func miqt_exec_callback_QDnsLookup_disconnectNotify(self *C.QDnsLookup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDnsLookup) Delete() {
	C.QDnsLookup_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDnsLookup) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDnsLookup_delete((*C.QDnsLookup)(gc[0]))
	})
	this.miqtSetGC(gc)
}

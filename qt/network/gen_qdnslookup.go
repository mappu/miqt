package network

/*

#include "gen_qdnslookup.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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
	h *C.QDnsDomainNameRecord
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

	return newQDnsDomainNameRecord(C.QDnsDomainNameRecord_new2(other.cPointer()))
}

func (this *QDnsDomainNameRecord) OperatorAssign(other *QDnsDomainNameRecord) {
	C.QDnsDomainNameRecord_OperatorAssign(this.h, other.cPointer())
}

func (this *QDnsDomainNameRecord) Swap(other *QDnsDomainNameRecord) {
	C.QDnsDomainNameRecord_Swap(this.h, other.cPointer())
}

func (this *QDnsDomainNameRecord) Name() string {
	var _ms C.struct_miqt_string = C.QDnsDomainNameRecord_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsDomainNameRecord) TimeToLive() uint {
	return (uint)(C.QDnsDomainNameRecord_TimeToLive(this.h))
}

func (this *QDnsDomainNameRecord) Value() string {
	var _ms C.struct_miqt_string = C.QDnsDomainNameRecord_Value(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDnsDomainNameRecord) Delete() {
	C.QDnsDomainNameRecord_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDnsDomainNameRecord) GoGC() {
	runtime.SetFinalizer(this, func(this *QDnsDomainNameRecord) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDnsHostAddressRecord struct {
	h *C.QDnsHostAddressRecord
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

	return newQDnsHostAddressRecord(C.QDnsHostAddressRecord_new2(other.cPointer()))
}

func (this *QDnsHostAddressRecord) OperatorAssign(other *QDnsHostAddressRecord) {
	C.QDnsHostAddressRecord_OperatorAssign(this.h, other.cPointer())
}

func (this *QDnsHostAddressRecord) Swap(other *QDnsHostAddressRecord) {
	C.QDnsHostAddressRecord_Swap(this.h, other.cPointer())
}

func (this *QDnsHostAddressRecord) Name() string {
	var _ms C.struct_miqt_string = C.QDnsHostAddressRecord_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsHostAddressRecord) TimeToLive() uint {
	return (uint)(C.QDnsHostAddressRecord_TimeToLive(this.h))
}

func (this *QDnsHostAddressRecord) Value() *QHostAddress {
	_goptr := newQHostAddress(C.QDnsHostAddressRecord_Value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDnsHostAddressRecord) Delete() {
	C.QDnsHostAddressRecord_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDnsHostAddressRecord) GoGC() {
	runtime.SetFinalizer(this, func(this *QDnsHostAddressRecord) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDnsMailExchangeRecord struct {
	h *C.QDnsMailExchangeRecord
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

	return newQDnsMailExchangeRecord(C.QDnsMailExchangeRecord_new2(other.cPointer()))
}

func (this *QDnsMailExchangeRecord) OperatorAssign(other *QDnsMailExchangeRecord) {
	C.QDnsMailExchangeRecord_OperatorAssign(this.h, other.cPointer())
}

func (this *QDnsMailExchangeRecord) Swap(other *QDnsMailExchangeRecord) {
	C.QDnsMailExchangeRecord_Swap(this.h, other.cPointer())
}

func (this *QDnsMailExchangeRecord) Exchange() string {
	var _ms C.struct_miqt_string = C.QDnsMailExchangeRecord_Exchange(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsMailExchangeRecord) Name() string {
	var _ms C.struct_miqt_string = C.QDnsMailExchangeRecord_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsMailExchangeRecord) Preference() uint16 {
	return (uint16)(C.QDnsMailExchangeRecord_Preference(this.h))
}

func (this *QDnsMailExchangeRecord) TimeToLive() uint {
	return (uint)(C.QDnsMailExchangeRecord_TimeToLive(this.h))
}

// Delete this object from C++ memory.
func (this *QDnsMailExchangeRecord) Delete() {
	C.QDnsMailExchangeRecord_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDnsMailExchangeRecord) GoGC() {
	runtime.SetFinalizer(this, func(this *QDnsMailExchangeRecord) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDnsServiceRecord struct {
	h *C.QDnsServiceRecord
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

	return newQDnsServiceRecord(C.QDnsServiceRecord_new2(other.cPointer()))
}

func (this *QDnsServiceRecord) OperatorAssign(other *QDnsServiceRecord) {
	C.QDnsServiceRecord_OperatorAssign(this.h, other.cPointer())
}

func (this *QDnsServiceRecord) Swap(other *QDnsServiceRecord) {
	C.QDnsServiceRecord_Swap(this.h, other.cPointer())
}

func (this *QDnsServiceRecord) Name() string {
	var _ms C.struct_miqt_string = C.QDnsServiceRecord_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsServiceRecord) Port() uint16 {
	return (uint16)(C.QDnsServiceRecord_Port(this.h))
}

func (this *QDnsServiceRecord) Priority() uint16 {
	return (uint16)(C.QDnsServiceRecord_Priority(this.h))
}

func (this *QDnsServiceRecord) Target() string {
	var _ms C.struct_miqt_string = C.QDnsServiceRecord_Target(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsServiceRecord) TimeToLive() uint {
	return (uint)(C.QDnsServiceRecord_TimeToLive(this.h))
}

func (this *QDnsServiceRecord) Weight() uint16 {
	return (uint16)(C.QDnsServiceRecord_Weight(this.h))
}

// Delete this object from C++ memory.
func (this *QDnsServiceRecord) Delete() {
	C.QDnsServiceRecord_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDnsServiceRecord) GoGC() {
	runtime.SetFinalizer(this, func(this *QDnsServiceRecord) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDnsTextRecord struct {
	h *C.QDnsTextRecord
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

	return newQDnsTextRecord(C.QDnsTextRecord_new2(other.cPointer()))
}

func (this *QDnsTextRecord) OperatorAssign(other *QDnsTextRecord) {
	C.QDnsTextRecord_OperatorAssign(this.h, other.cPointer())
}

func (this *QDnsTextRecord) Swap(other *QDnsTextRecord) {
	C.QDnsTextRecord_Swap(this.h, other.cPointer())
}

func (this *QDnsTextRecord) Name() string {
	var _ms C.struct_miqt_string = C.QDnsTextRecord_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsTextRecord) TimeToLive() uint {
	return (uint)(C.QDnsTextRecord_TimeToLive(this.h))
}

func (this *QDnsTextRecord) Values() [][]byte {
	var _ma C.struct_miqt_array = C.QDnsTextRecord_Values(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
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
	C.QDnsTextRecord_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDnsTextRecord) GoGC() {
	runtime.SetFinalizer(this, func(this *QDnsTextRecord) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDnsLookup struct {
	h *C.QDnsLookup
	*qt.QObject
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
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
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
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQDnsLookup(C.QDnsLookup_new3((C.int)(typeVal), name_ms, nameserver.cPointer()))
}

// NewQDnsLookup4 constructs a new QDnsLookup object.
func NewQDnsLookup4(parent *qt.QObject) *QDnsLookup {

	return newQDnsLookup(C.QDnsLookup_new4((*C.QObject)(parent.UnsafePointer())))
}

// NewQDnsLookup5 constructs a new QDnsLookup object.
func NewQDnsLookup5(typeVal QDnsLookup__Type, name string, parent *qt.QObject) *QDnsLookup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQDnsLookup(C.QDnsLookup_new5((C.int)(typeVal), name_ms, (*C.QObject)(parent.UnsafePointer())))
}

// NewQDnsLookup6 constructs a new QDnsLookup object.
func NewQDnsLookup6(typeVal QDnsLookup__Type, name string, nameserver *QHostAddress, parent *qt.QObject) *QDnsLookup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newQDnsLookup(C.QDnsLookup_new6((C.int)(typeVal), name_ms, nameserver.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QDnsLookup) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDnsLookup_MetaObject(this.h)))
}

func (this *QDnsLookup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDnsLookup_Metacast(this.h, param1_Cstring))
}

func QDnsLookup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDnsLookup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsLookup) Error() QDnsLookup__Error {
	return (QDnsLookup__Error)(C.QDnsLookup_Error(this.h))
}

func (this *QDnsLookup) ErrorString() string {
	var _ms C.struct_miqt_string = C.QDnsLookup_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsLookup) IsFinished() bool {
	return (bool)(C.QDnsLookup_IsFinished(this.h))
}

func (this *QDnsLookup) Name() string {
	var _ms C.struct_miqt_string = C.QDnsLookup_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsLookup) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDnsLookup_SetName(this.h, name_ms)
}

func (this *QDnsLookup) Type() QDnsLookup__Type {
	return (QDnsLookup__Type)(C.QDnsLookup_Type(this.h))
}

func (this *QDnsLookup) SetType(typeVal QDnsLookup__Type) {
	C.QDnsLookup_SetType(this.h, (C.int)(typeVal))
}

func (this *QDnsLookup) Nameserver() *QHostAddress {
	_goptr := newQHostAddress(C.QDnsLookup_Nameserver(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDnsLookup) SetNameserver(nameserver *QHostAddress) {
	C.QDnsLookup_SetNameserver(this.h, nameserver.cPointer())
}

func (this *QDnsLookup) CanonicalNameRecords() []QDnsDomainNameRecord {
	var _ma C.struct_miqt_array = C.QDnsLookup_CanonicalNameRecords(this.h)
	_ret := make([]QDnsDomainNameRecord, int(_ma.len))
	_outCast := (*[0xffff]*C.QDnsDomainNameRecord)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsDomainNameRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) HostAddressRecords() []QDnsHostAddressRecord {
	var _ma C.struct_miqt_array = C.QDnsLookup_HostAddressRecords(this.h)
	_ret := make([]QDnsHostAddressRecord, int(_ma.len))
	_outCast := (*[0xffff]*C.QDnsHostAddressRecord)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsHostAddressRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) MailExchangeRecords() []QDnsMailExchangeRecord {
	var _ma C.struct_miqt_array = C.QDnsLookup_MailExchangeRecords(this.h)
	_ret := make([]QDnsMailExchangeRecord, int(_ma.len))
	_outCast := (*[0xffff]*C.QDnsMailExchangeRecord)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsMailExchangeRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) NameServerRecords() []QDnsDomainNameRecord {
	var _ma C.struct_miqt_array = C.QDnsLookup_NameServerRecords(this.h)
	_ret := make([]QDnsDomainNameRecord, int(_ma.len))
	_outCast := (*[0xffff]*C.QDnsDomainNameRecord)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsDomainNameRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) PointerRecords() []QDnsDomainNameRecord {
	var _ma C.struct_miqt_array = C.QDnsLookup_PointerRecords(this.h)
	_ret := make([]QDnsDomainNameRecord, int(_ma.len))
	_outCast := (*[0xffff]*C.QDnsDomainNameRecord)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsDomainNameRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) ServiceRecords() []QDnsServiceRecord {
	var _ma C.struct_miqt_array = C.QDnsLookup_ServiceRecords(this.h)
	_ret := make([]QDnsServiceRecord, int(_ma.len))
	_outCast := (*[0xffff]*C.QDnsServiceRecord)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsServiceRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) TextRecords() []QDnsTextRecord {
	var _ma C.struct_miqt_array = C.QDnsLookup_TextRecords(this.h)
	_ret := make([]QDnsTextRecord, int(_ma.len))
	_outCast := (*[0xffff]*C.QDnsTextRecord)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQDnsTextRecord(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDnsLookup) Abort() {
	C.QDnsLookup_Abort(this.h)
}

func (this *QDnsLookup) Lookup() {
	C.QDnsLookup_Lookup(this.h)
}

func (this *QDnsLookup) Finished() {
	C.QDnsLookup_Finished(this.h)
}
func (this *QDnsLookup) OnFinished(slot func()) {
	C.QDnsLookup_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_Finished
func miqt_exec_callback_QDnsLookup_Finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDnsLookup) NameChanged(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDnsLookup_NameChanged(this.h, name_ms)
}
func (this *QDnsLookup) OnNameChanged(slot func(name string)) {
	C.QDnsLookup_connect_NameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_NameChanged
func miqt_exec_callback_QDnsLookup_NameChanged(cb C.intptr_t, name C.struct_miqt_string) {
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
	C.QDnsLookup_TypeChanged(this.h, (C.int)(typeVal))
}
func (this *QDnsLookup) OnTypeChanged(slot func(typeVal QDnsLookup__Type)) {
	C.QDnsLookup_connect_TypeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_TypeChanged
func miqt_exec_callback_QDnsLookup_TypeChanged(cb C.intptr_t, typeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(typeVal QDnsLookup__Type))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDnsLookup__Type)(typeVal)

	gofunc(slotval1)
}

func (this *QDnsLookup) NameserverChanged(nameserver *QHostAddress) {
	C.QDnsLookup_NameserverChanged(this.h, nameserver.cPointer())
}
func (this *QDnsLookup) OnNameserverChanged(slot func(nameserver *QHostAddress)) {
	C.QDnsLookup_connect_NameserverChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDnsLookup_NameserverChanged
func miqt_exec_callback_QDnsLookup_NameserverChanged(cb C.intptr_t, nameserver *C.QHostAddress) {
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
	var _ms C.struct_miqt_string = C.QDnsLookup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDnsLookup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDnsLookup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDnsLookup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDnsLookup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDnsLookup) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QDnsLookup_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDnsLookup) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QDnsLookup_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_Event
func miqt_exec_callback_QDnsLookup_Event(self *C.QDnsLookup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDnsLookup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDnsLookup) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QDnsLookup_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDnsLookup) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QDnsLookup_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_EventFilter
func miqt_exec_callback_QDnsLookup_EventFilter(self *C.QDnsLookup, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDnsLookup{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDnsLookup) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QDnsLookup_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDnsLookup) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QDnsLookup_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_TimerEvent
func miqt_exec_callback_QDnsLookup_TimerEvent(self *C.QDnsLookup, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDnsLookup) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QDnsLookup_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDnsLookup) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QDnsLookup_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_ChildEvent
func miqt_exec_callback_QDnsLookup_ChildEvent(self *C.QDnsLookup, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDnsLookup) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QDnsLookup_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDnsLookup) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QDnsLookup_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_CustomEvent
func miqt_exec_callback_QDnsLookup_CustomEvent(self *C.QDnsLookup, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDnsLookup) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QDnsLookup_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDnsLookup) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDnsLookup_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_ConnectNotify
func miqt_exec_callback_QDnsLookup_ConnectNotify(self *C.QDnsLookup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDnsLookup) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QDnsLookup_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDnsLookup) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDnsLookup_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDnsLookup_DisconnectNotify
func miqt_exec_callback_QDnsLookup_DisconnectNotify(self *C.QDnsLookup, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDnsLookup{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDnsLookup) Delete() {
	C.QDnsLookup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDnsLookup) GoGC() {
	runtime.SetFinalizer(this, func(this *QDnsLookup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

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

func newQDnsDomainNameRecord(h *C.QDnsDomainNameRecord) *QDnsDomainNameRecord {
	if h == nil {
		return nil
	}
	return &QDnsDomainNameRecord{h: h}
}

func UnsafeNewQDnsDomainNameRecord(h unsafe.Pointer) *QDnsDomainNameRecord {
	return newQDnsDomainNameRecord((*C.QDnsDomainNameRecord)(h))
}

// NewQDnsDomainNameRecord constructs a new QDnsDomainNameRecord object.
func NewQDnsDomainNameRecord() *QDnsDomainNameRecord {
	ret := C.QDnsDomainNameRecord_new()
	return newQDnsDomainNameRecord(ret)
}

// NewQDnsDomainNameRecord2 constructs a new QDnsDomainNameRecord object.
func NewQDnsDomainNameRecord2(other *QDnsDomainNameRecord) *QDnsDomainNameRecord {
	ret := C.QDnsDomainNameRecord_new2(other.cPointer())
	return newQDnsDomainNameRecord(ret)
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

func newQDnsHostAddressRecord(h *C.QDnsHostAddressRecord) *QDnsHostAddressRecord {
	if h == nil {
		return nil
	}
	return &QDnsHostAddressRecord{h: h}
}

func UnsafeNewQDnsHostAddressRecord(h unsafe.Pointer) *QDnsHostAddressRecord {
	return newQDnsHostAddressRecord((*C.QDnsHostAddressRecord)(h))
}

// NewQDnsHostAddressRecord constructs a new QDnsHostAddressRecord object.
func NewQDnsHostAddressRecord() *QDnsHostAddressRecord {
	ret := C.QDnsHostAddressRecord_new()
	return newQDnsHostAddressRecord(ret)
}

// NewQDnsHostAddressRecord2 constructs a new QDnsHostAddressRecord object.
func NewQDnsHostAddressRecord2(other *QDnsHostAddressRecord) *QDnsHostAddressRecord {
	ret := C.QDnsHostAddressRecord_new2(other.cPointer())
	return newQDnsHostAddressRecord(ret)
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
	_ret := C.QDnsHostAddressRecord_Value(this.h)
	_goptr := newQHostAddress(_ret)
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

func newQDnsMailExchangeRecord(h *C.QDnsMailExchangeRecord) *QDnsMailExchangeRecord {
	if h == nil {
		return nil
	}
	return &QDnsMailExchangeRecord{h: h}
}

func UnsafeNewQDnsMailExchangeRecord(h unsafe.Pointer) *QDnsMailExchangeRecord {
	return newQDnsMailExchangeRecord((*C.QDnsMailExchangeRecord)(h))
}

// NewQDnsMailExchangeRecord constructs a new QDnsMailExchangeRecord object.
func NewQDnsMailExchangeRecord() *QDnsMailExchangeRecord {
	ret := C.QDnsMailExchangeRecord_new()
	return newQDnsMailExchangeRecord(ret)
}

// NewQDnsMailExchangeRecord2 constructs a new QDnsMailExchangeRecord object.
func NewQDnsMailExchangeRecord2(other *QDnsMailExchangeRecord) *QDnsMailExchangeRecord {
	ret := C.QDnsMailExchangeRecord_new2(other.cPointer())
	return newQDnsMailExchangeRecord(ret)
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

func newQDnsServiceRecord(h *C.QDnsServiceRecord) *QDnsServiceRecord {
	if h == nil {
		return nil
	}
	return &QDnsServiceRecord{h: h}
}

func UnsafeNewQDnsServiceRecord(h unsafe.Pointer) *QDnsServiceRecord {
	return newQDnsServiceRecord((*C.QDnsServiceRecord)(h))
}

// NewQDnsServiceRecord constructs a new QDnsServiceRecord object.
func NewQDnsServiceRecord() *QDnsServiceRecord {
	ret := C.QDnsServiceRecord_new()
	return newQDnsServiceRecord(ret)
}

// NewQDnsServiceRecord2 constructs a new QDnsServiceRecord object.
func NewQDnsServiceRecord2(other *QDnsServiceRecord) *QDnsServiceRecord {
	ret := C.QDnsServiceRecord_new2(other.cPointer())
	return newQDnsServiceRecord(ret)
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

func newQDnsTextRecord(h *C.QDnsTextRecord) *QDnsTextRecord {
	if h == nil {
		return nil
	}
	return &QDnsTextRecord{h: h}
}

func UnsafeNewQDnsTextRecord(h unsafe.Pointer) *QDnsTextRecord {
	return newQDnsTextRecord((*C.QDnsTextRecord)(h))
}

// NewQDnsTextRecord constructs a new QDnsTextRecord object.
func NewQDnsTextRecord() *QDnsTextRecord {
	ret := C.QDnsTextRecord_new()
	return newQDnsTextRecord(ret)
}

// NewQDnsTextRecord2 constructs a new QDnsTextRecord object.
func NewQDnsTextRecord2(other *QDnsTextRecord) *QDnsTextRecord {
	ret := C.QDnsTextRecord_new2(other.cPointer())
	return newQDnsTextRecord(ret)
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

func newQDnsLookup(h *C.QDnsLookup) *QDnsLookup {
	if h == nil {
		return nil
	}
	return &QDnsLookup{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQDnsLookup(h unsafe.Pointer) *QDnsLookup {
	return newQDnsLookup((*C.QDnsLookup)(h))
}

// NewQDnsLookup constructs a new QDnsLookup object.
func NewQDnsLookup() *QDnsLookup {
	ret := C.QDnsLookup_new()
	return newQDnsLookup(ret)
}

// NewQDnsLookup2 constructs a new QDnsLookup object.
func NewQDnsLookup2(typeVal QDnsLookup__Type, name string) *QDnsLookup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QDnsLookup_new2((C.int)(typeVal), name_ms)
	return newQDnsLookup(ret)
}

// NewQDnsLookup3 constructs a new QDnsLookup object.
func NewQDnsLookup3(typeVal QDnsLookup__Type, name string, nameserver *QHostAddress) *QDnsLookup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QDnsLookup_new3((C.int)(typeVal), name_ms, nameserver.cPointer())
	return newQDnsLookup(ret)
}

// NewQDnsLookup4 constructs a new QDnsLookup object.
func NewQDnsLookup4(parent *qt.QObject) *QDnsLookup {
	ret := C.QDnsLookup_new4((*C.QObject)(parent.UnsafePointer()))
	return newQDnsLookup(ret)
}

// NewQDnsLookup5 constructs a new QDnsLookup object.
func NewQDnsLookup5(typeVal QDnsLookup__Type, name string, parent *qt.QObject) *QDnsLookup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QDnsLookup_new5((C.int)(typeVal), name_ms, (*C.QObject)(parent.UnsafePointer()))
	return newQDnsLookup(ret)
}

// NewQDnsLookup6 constructs a new QDnsLookup object.
func NewQDnsLookup6(typeVal QDnsLookup__Type, name string, nameserver *QHostAddress, parent *qt.QObject) *QDnsLookup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	ret := C.QDnsLookup_new6((C.int)(typeVal), name_ms, nameserver.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQDnsLookup(ret)
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
	_ret := C.QDnsLookup_Nameserver(this.h)
	_goptr := newQHostAddress(_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQDnsDomainNameRecord(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQDnsHostAddressRecord(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQDnsMailExchangeRecord(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQDnsDomainNameRecord(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQDnsDomainNameRecord(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQDnsServiceRecord(_lv_ret)
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
		_lv_ret := _outCast[i]
		_lv_goptr := newQDnsTextRecord(_lv_ret)
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
	slotval1 := UnsafeNewQHostAddress(unsafe.Pointer(nameserver))

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

package qt

/*

#include "gen_quuid.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QUuid__Variant int

const (
	QUuid__VarUnknown QUuid__Variant = -1
	QUuid__NCS        QUuid__Variant = 0
	QUuid__DCE        QUuid__Variant = 2
	QUuid__Microsoft  QUuid__Variant = 6
	QUuid__Reserved   QUuid__Variant = 7
)

type QUuid__Version int

const (
	QUuid__VerUnknown    QUuid__Version = -1
	QUuid__Time          QUuid__Version = 1
	QUuid__EmbeddedPOSIX QUuid__Version = 2
	QUuid__Md5           QUuid__Version = 3
	QUuid__Name          QUuid__Version = 3
	QUuid__Random        QUuid__Version = 4
	QUuid__Sha1          QUuid__Version = 5
)

type QUuid__StringFormat int

const (
	QUuid__WithBraces    QUuid__StringFormat = 0
	QUuid__WithoutBraces QUuid__StringFormat = 1
	QUuid__Id128         QUuid__StringFormat = 3
)

type QUuid struct {
	h          *C.QUuid
	isSubclass bool
}

func (this *QUuid) cPointer() *C.QUuid {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUuid) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUuid constructs the type using only CGO pointers.
func newQUuid(h *C.QUuid) *QUuid {
	if h == nil {
		return nil
	}

	return &QUuid{h: h}
}

// UnsafeNewQUuid constructs the type using only unsafe pointers.
func UnsafeNewQUuid(h unsafe.Pointer) *QUuid {
	return newQUuid((*C.QUuid)(h))
}

// NewQUuid constructs a new QUuid object.
func NewQUuid() *QUuid {

	ret := newQUuid(C.QUuid_new())
	ret.isSubclass = true
	return ret
}

// NewQUuid2 constructs a new QUuid object.
func NewQUuid2(l uint, w1 uint16, w2 uint16, b1 byte, b2 byte, b3 byte, b4 byte, b5 byte, b6 byte, b7 byte, b8 byte) *QUuid {

	ret := newQUuid(C.QUuid_new2((C.uint)(l), (C.uint16_t)(w1), (C.uint16_t)(w2), (C.uchar)(b1), (C.uchar)(b2), (C.uchar)(b3), (C.uchar)(b4), (C.uchar)(b5), (C.uchar)(b6), (C.uchar)(b7), (C.uchar)(b8)))
	ret.isSubclass = true
	return ret
}

// NewQUuid3 constructs a new QUuid object.
func NewQUuid3(param1 string) *QUuid {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	ret := newQUuid(C.QUuid_new3(param1_ms))
	ret.isSubclass = true
	return ret
}

// NewQUuid4 constructs a new QUuid object.
func NewQUuid4(param1 string) *QUuid {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))

	ret := newQUuid(C.QUuid_new4(param1_Cstring))
	ret.isSubclass = true
	return ret
}

// NewQUuid5 constructs a new QUuid object.
func NewQUuid5(param1 []byte) *QUuid {
	param1_alias := C.struct_miqt_string{}
	param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	param1_alias.len = C.size_t(len(param1))

	ret := newQUuid(C.QUuid_new5(param1_alias))
	ret.isSubclass = true
	return ret
}

// NewQUuid6 constructs a new QUuid object.
func NewQUuid6(param1 *QUuid) *QUuid {

	ret := newQUuid(C.QUuid_new6(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QUuid) ToString() string {
	var _ms C.struct_miqt_string = C.QUuid_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUuid) ToStringWithMode(mode QUuid__StringFormat) string {
	var _ms C.struct_miqt_string = C.QUuid_ToStringWithMode(this.h, (C.int)(mode))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUuid) ToByteArray() []byte {
	var _bytearray C.struct_miqt_string = C.QUuid_ToByteArray(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QUuid) ToByteArrayWithMode(mode QUuid__StringFormat) []byte {
	var _bytearray C.struct_miqt_string = C.QUuid_ToByteArrayWithMode(this.h, (C.int)(mode))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QUuid) ToRfc4122() []byte {
	var _bytearray C.struct_miqt_string = C.QUuid_ToRfc4122(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QUuid_FromRfc4122(param1 []byte) *QUuid {
	param1_alias := C.struct_miqt_string{}
	param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	param1_alias.len = C.size_t(len(param1))
	_goptr := newQUuid(C.QUuid_FromRfc4122(param1_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUuid) IsNull() bool {
	return (bool)(C.QUuid_IsNull(this.h))
}

func (this *QUuid) OperatorEqual(orig *QUuid) bool {
	return (bool)(C.QUuid_OperatorEqual(this.h, orig.cPointer()))
}

func (this *QUuid) OperatorNotEqual(orig *QUuid) bool {
	return (bool)(C.QUuid_OperatorNotEqual(this.h, orig.cPointer()))
}

func (this *QUuid) OperatorLesser(other *QUuid) bool {
	return (bool)(C.QUuid_OperatorLesser(this.h, other.cPointer()))
}

func (this *QUuid) OperatorGreater(other *QUuid) bool {
	return (bool)(C.QUuid_OperatorGreater(this.h, other.cPointer()))
}

func QUuid_CreateUuid() *QUuid {
	_goptr := newQUuid(C.QUuid_CreateUuid())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV3(ns *QUuid, baseData []byte) *QUuid {
	baseData_alias := C.struct_miqt_string{}
	baseData_alias.data = (*C.char)(unsafe.Pointer(&baseData[0]))
	baseData_alias.len = C.size_t(len(baseData))
	_goptr := newQUuid(C.QUuid_CreateUuidV3(ns.cPointer(), baseData_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV5(ns *QUuid, baseData []byte) *QUuid {
	baseData_alias := C.struct_miqt_string{}
	baseData_alias.data = (*C.char)(unsafe.Pointer(&baseData[0]))
	baseData_alias.len = C.size_t(len(baseData))
	_goptr := newQUuid(C.QUuid_CreateUuidV5(ns.cPointer(), baseData_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV32(ns *QUuid, baseData string) *QUuid {
	baseData_ms := C.struct_miqt_string{}
	baseData_ms.data = C.CString(baseData)
	baseData_ms.len = C.size_t(len(baseData))
	defer C.free(unsafe.Pointer(baseData_ms.data))
	_goptr := newQUuid(C.QUuid_CreateUuidV32(ns.cPointer(), baseData_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV52(ns *QUuid, baseData string) *QUuid {
	baseData_ms := C.struct_miqt_string{}
	baseData_ms.data = C.CString(baseData)
	baseData_ms.len = C.size_t(len(baseData))
	defer C.free(unsafe.Pointer(baseData_ms.data))
	_goptr := newQUuid(C.QUuid_CreateUuidV52(ns.cPointer(), baseData_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUuid) Variant() QUuid__Variant {
	return (QUuid__Variant)(C.QUuid_Variant(this.h))
}

func (this *QUuid) Version() QUuid__Version {
	return (QUuid__Version)(C.QUuid_Version(this.h))
}

// Delete this object from C++ memory.
func (this *QUuid) Delete() {
	C.QUuid_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUuid) GoGC() {
	runtime.SetFinalizer(this, func(this *QUuid) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

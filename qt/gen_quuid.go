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
	QUuid__Variant__VarUnknown QUuid__Variant = -1
	QUuid__Variant__NCS        QUuid__Variant = 0
	QUuid__Variant__DCE        QUuid__Variant = 2
	QUuid__Variant__Microsoft  QUuid__Variant = 6
	QUuid__Variant__Reserved   QUuid__Variant = 7
)

type QUuid__Version int

const (
	QUuid__Version__VerUnknown    QUuid__Version = -1
	QUuid__Version__Time          QUuid__Version = 1
	QUuid__Version__EmbeddedPOSIX QUuid__Version = 2
	QUuid__Version__Md5           QUuid__Version = 3
	QUuid__Version__Name          QUuid__Version = 3
	QUuid__Version__Random        QUuid__Version = 4
	QUuid__Version__Sha1          QUuid__Version = 5
)

type QUuid__StringFormat int

const (
	QUuid__StringFormat__WithBraces    QUuid__StringFormat = 0
	QUuid__StringFormat__WithoutBraces QUuid__StringFormat = 1
	QUuid__StringFormat__Id128         QUuid__StringFormat = 3
)

type QUuid struct {
	h *C.QUuid
}

func (this *QUuid) cPointer() *C.QUuid {
	if this == nil {
		return nil
	}
	return this.h
}

func newQUuid(h *C.QUuid) *QUuid {
	if h == nil {
		return nil
	}
	return &QUuid{h: h}
}

func newQUuid_U(h unsafe.Pointer) *QUuid {
	return newQUuid((*C.QUuid)(h))
}

// NewQUuid constructs a new QUuid object.
func NewQUuid() *QUuid {
	ret := C.QUuid_new()
	return newQUuid(ret)
}

// NewQUuid2 constructs a new QUuid object.
func NewQUuid2(l uint, w1 uint16, w2 uint16, b1 byte, b2 byte, b3 byte, b4 byte, b5 byte, b6 byte, b7 byte, b8 byte) *QUuid {
	ret := C.QUuid_new2((C.uint)(l), (C.uint16_t)(w1), (C.uint16_t)(w2), (C.uchar)(b1), (C.uchar)(b2), (C.uchar)(b3), (C.uchar)(b4), (C.uchar)(b5), (C.uchar)(b6), (C.uchar)(b7), (C.uchar)(b8))
	return newQUuid(ret)
}

// NewQUuid3 constructs a new QUuid object.
func NewQUuid3(param1 string) *QUuid {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	ret := C.QUuid_new3((*C.struct_miqt_string)(param1_ms))
	return newQUuid(ret)
}

// NewQUuid4 constructs a new QUuid object.
func NewQUuid4(param1 string) *QUuid {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUuid_new4(param1_Cstring)
	return newQUuid(ret)
}

// NewQUuid5 constructs a new QUuid object.
func NewQUuid5(param1 *QByteArray) *QUuid {
	ret := C.QUuid_new5(param1.cPointer())
	return newQUuid(ret)
}

// NewQUuid6 constructs a new QUuid object.
func NewQUuid6(param1 *QUuid) *QUuid {
	ret := C.QUuid_new6(param1.cPointer())
	return newQUuid(ret)
}

func (this *QUuid) ToString() string {
	var _ms *C.struct_miqt_string = C.QUuid_ToString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUuid) ToStringWithMode(mode QUuid__StringFormat) string {
	var _ms *C.struct_miqt_string = C.QUuid_ToStringWithMode(this.h, (C.uintptr_t)(mode))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUuid) ToByteArray() *QByteArray {
	_ret := C.QUuid_ToByteArray(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUuid) ToByteArrayWithMode(mode QUuid__StringFormat) *QByteArray {
	_ret := C.QUuid_ToByteArrayWithMode(this.h, (C.uintptr_t)(mode))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUuid) ToRfc4122() *QByteArray {
	_ret := C.QUuid_ToRfc4122(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_FromRfc4122(param1 *QByteArray) *QUuid {
	_ret := C.QUuid_FromRfc4122(param1.cPointer())
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUuid) IsNull() bool {
	_ret := C.QUuid_IsNull(this.h)
	return (bool)(_ret)
}

func (this *QUuid) OperatorEqual(orig *QUuid) bool {
	_ret := C.QUuid_OperatorEqual(this.h, orig.cPointer())
	return (bool)(_ret)
}

func (this *QUuid) OperatorNotEqual(orig *QUuid) bool {
	_ret := C.QUuid_OperatorNotEqual(this.h, orig.cPointer())
	return (bool)(_ret)
}

func (this *QUuid) OperatorLesser(other *QUuid) bool {
	_ret := C.QUuid_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QUuid) OperatorGreater(other *QUuid) bool {
	_ret := C.QUuid_OperatorGreater(this.h, other.cPointer())
	return (bool)(_ret)
}

func QUuid_CreateUuid() *QUuid {
	_ret := C.QUuid_CreateUuid()
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV3(ns *QUuid, baseData *QByteArray) *QUuid {
	_ret := C.QUuid_CreateUuidV3(ns.cPointer(), baseData.cPointer())
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV5(ns *QUuid, baseData *QByteArray) *QUuid {
	_ret := C.QUuid_CreateUuidV5(ns.cPointer(), baseData.cPointer())
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV32(ns *QUuid, baseData string) *QUuid {
	baseData_ms := miqt_strdupg(baseData)
	defer C.free(baseData_ms)
	_ret := C.QUuid_CreateUuidV32(ns.cPointer(), (*C.struct_miqt_string)(baseData_ms))
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUuid_CreateUuidV52(ns *QUuid, baseData string) *QUuid {
	baseData_ms := miqt_strdupg(baseData)
	defer C.free(baseData_ms)
	_ret := C.QUuid_CreateUuidV52(ns.cPointer(), (*C.struct_miqt_string)(baseData_ms))
	_goptr := newQUuid(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUuid) Variant() QUuid__Variant {
	_ret := C.QUuid_Variant(this.h)
	return (QUuid__Variant)(_ret)
}

func (this *QUuid) Version() QUuid__Version {
	_ret := C.QUuid_Version(this.h)
	return (QUuid__Version)(_ret)
}

// Delete this object from C++ memory.
func (this *QUuid) Delete() {
	C.QUuid_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUuid) GoGC() {
	runtime.SetFinalizer(this, func(this *QUuid) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_quuid.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUuid_new3(param1_Cstring, C.ulong(len(param1)))
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUuid_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUuid) ToStringWithMode(mode uintptr) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUuid_ToStringWithMode(this.h, (C.uintptr_t)(mode), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUuid) ToByteArray() *QByteArray {
	ret := C.QUuid_ToByteArray(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUuid) ToByteArrayWithMode(mode uintptr) *QByteArray {
	ret := C.QUuid_ToByteArrayWithMode(this.h, (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUuid) ToRfc4122() *QByteArray {
	ret := C.QUuid_ToRfc4122(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUuid_FromRfc4122(param1 *QByteArray) *QUuid {
	ret := C.QUuid_FromRfc4122(param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUuid) IsNull() bool {
	ret := C.QUuid_IsNull(this.h)
	return (bool)(ret)
}

func (this *QUuid) OperatorEqual(orig *QUuid) bool {
	ret := C.QUuid_OperatorEqual(this.h, orig.cPointer())
	return (bool)(ret)
}

func (this *QUuid) OperatorNotEqual(orig *QUuid) bool {
	ret := C.QUuid_OperatorNotEqual(this.h, orig.cPointer())
	return (bool)(ret)
}

func (this *QUuid) OperatorLesser(other *QUuid) bool {
	ret := C.QUuid_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QUuid) OperatorGreater(other *QUuid) bool {
	ret := C.QUuid_OperatorGreater(this.h, other.cPointer())
	return (bool)(ret)
}

func QUuid_CreateUuid() *QUuid {
	ret := C.QUuid_CreateUuid()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUuid_CreateUuidV3(ns *QUuid, baseData *QByteArray) *QUuid {
	ret := C.QUuid_CreateUuidV3(ns.cPointer(), baseData.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUuid_CreateUuidV5(ns *QUuid, baseData *QByteArray) *QUuid {
	ret := C.QUuid_CreateUuidV5(ns.cPointer(), baseData.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUuid_CreateUuidV32(ns *QUuid, baseData string) *QUuid {
	baseData_Cstring := C.CString(baseData)
	defer C.free(unsafe.Pointer(baseData_Cstring))
	ret := C.QUuid_CreateUuidV32(ns.cPointer(), baseData_Cstring, C.ulong(len(baseData)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUuid_CreateUuidV52(ns *QUuid, baseData string) *QUuid {
	baseData_Cstring := C.CString(baseData)
	defer C.free(unsafe.Pointer(baseData_Cstring))
	ret := C.QUuid_CreateUuidV52(ns.cPointer(), baseData_Cstring, C.ulong(len(baseData)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUuid(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUuid) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUuid) Variant() uintptr {
	ret := C.QUuid_Variant(this.h)
	return (uintptr)(ret)
}

func (this *QUuid) Version() uintptr {
	ret := C.QUuid_Version(this.h)
	return (uintptr)(ret)
}

func (this *QUuid) Delete() {
	C.QUuid_Delete(this.h)
}

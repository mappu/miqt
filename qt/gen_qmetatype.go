package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmetatype.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QMetaType struct {
	h *C.QMetaType
}

func (this *QMetaType) cPointer() *C.QMetaType {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMetaType(h *C.QMetaType) *QMetaType {
	return &QMetaType{h: h}
}

func newQMetaType_U(h unsafe.Pointer) *QMetaType {
	return newQMetaType((*C.QMetaType)(h))
}

// NewQMetaType constructs a new QMetaType object.
func NewQMetaType() *QMetaType {
	ret := C.QMetaType_new()
	return newQMetaType(ret)
}

// NewQMetaType2 constructs a new QMetaType object.
func NewQMetaType2(typeVal int) *QMetaType {
	ret := C.QMetaType_new2((C.int)(typeVal))
	return newQMetaType(ret)
}

func QMetaType_UnregisterType(typeVal int) bool {
	ret := C.QMetaType_UnregisterType((C.int)(typeVal))
	return (bool)(ret)
}

func QMetaType_RegisterTypedef(typeName string, aliasId int) int {
	typeName_Cstring := C.CString(typeName)
	defer C.free(unsafe.Pointer(typeName_Cstring))
	ret := C.QMetaType_RegisterTypedef(typeName_Cstring, (C.int)(aliasId))
	return (int)(ret)
}

func QMetaType_Type(typeName string) int {
	typeName_Cstring := C.CString(typeName)
	defer C.free(unsafe.Pointer(typeName_Cstring))
	ret := C.QMetaType_Type(typeName_Cstring)
	return (int)(ret)
}

func QMetaType_TypeName(typeVal int) unsafe.Pointer {
	ret := C.QMetaType_TypeName((C.int)(typeVal))
	return (unsafe.Pointer)(ret)
}

func QMetaType_SizeOf(typeVal int) int {
	ret := C.QMetaType_SizeOf((C.int)(typeVal))
	return (int)(ret)
}

func QMetaType_MetaObjectForType(typeVal int) *QMetaObject {
	ret := C.QMetaType_MetaObjectForType((C.int)(typeVal))
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMetaType_IsRegistered(typeVal int) bool {
	ret := C.QMetaType_IsRegistered((C.int)(typeVal))
	return (bool)(ret)
}

func (this *QMetaType) IsValid() bool {
	ret := C.QMetaType_IsValid(this.h)
	return (bool)(ret)
}

func (this *QMetaType) IsRegistered2() bool {
	ret := C.QMetaType_IsRegistered2(this.h)
	return (bool)(ret)
}

func (this *QMetaType) Id() int {
	ret := C.QMetaType_Id(this.h)
	return (int)(ret)
}

func (this *QMetaType) SizeOf2() int {
	ret := C.QMetaType_SizeOf2(this.h)
	return (int)(ret)
}

func (this *QMetaType) MetaObject() *QMetaObject {
	ret := C.QMetaType_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMetaType_HasRegisteredComparators(typeId int) bool {
	ret := C.QMetaType_HasRegisteredComparators((C.int)(typeId))
	return (bool)(ret)
}

func QMetaType_HasRegisteredDebugStreamOperator(typeId int) bool {
	ret := C.QMetaType_HasRegisteredDebugStreamOperator((C.int)(typeId))
	return (bool)(ret)
}

func QMetaType_HasRegisteredConverterFunction(fromTypeId int, toTypeId int) bool {
	ret := C.QMetaType_HasRegisteredConverterFunction((C.int)(fromTypeId), (C.int)(toTypeId))
	return (bool)(ret)
}

func (this *QMetaType) Delete() {
	C.QMetaType_Delete(this.h)
}

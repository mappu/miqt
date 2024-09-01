package qt

/*

#include "gen_qmetatype.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QtPrivate__AbstractDebugStreamFunction struct {
	h *C.QtPrivate__AbstractDebugStreamFunction
}

func (this *QtPrivate__AbstractDebugStreamFunction) cPointer() *C.QtPrivate__AbstractDebugStreamFunction {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__AbstractDebugStreamFunction(h *C.QtPrivate__AbstractDebugStreamFunction) *QtPrivate__AbstractDebugStreamFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__AbstractDebugStreamFunction{h: h}
}

func newQtPrivate__AbstractDebugStreamFunction_U(h unsafe.Pointer) *QtPrivate__AbstractDebugStreamFunction {
	return newQtPrivate__AbstractDebugStreamFunction((*C.QtPrivate__AbstractDebugStreamFunction)(h))
}

// NewQtPrivate__AbstractDebugStreamFunction constructs a new QtPrivate::AbstractDebugStreamFunction object.
func NewQtPrivate__AbstractDebugStreamFunction() *QtPrivate__AbstractDebugStreamFunction {
	ret := C.QtPrivate__AbstractDebugStreamFunction_new()
	return newQtPrivate__AbstractDebugStreamFunction(ret)
}

func (this *QtPrivate__AbstractDebugStreamFunction) Delete() {
	C.QtPrivate__AbstractDebugStreamFunction_Delete(this.h)
}

type QtPrivate__AbstractComparatorFunction struct {
	h *C.QtPrivate__AbstractComparatorFunction
}

func (this *QtPrivate__AbstractComparatorFunction) cPointer() *C.QtPrivate__AbstractComparatorFunction {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__AbstractComparatorFunction(h *C.QtPrivate__AbstractComparatorFunction) *QtPrivate__AbstractComparatorFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__AbstractComparatorFunction{h: h}
}

func newQtPrivate__AbstractComparatorFunction_U(h unsafe.Pointer) *QtPrivate__AbstractComparatorFunction {
	return newQtPrivate__AbstractComparatorFunction((*C.QtPrivate__AbstractComparatorFunction)(h))
}

// NewQtPrivate__AbstractComparatorFunction constructs a new QtPrivate::AbstractComparatorFunction object.
func NewQtPrivate__AbstractComparatorFunction() *QtPrivate__AbstractComparatorFunction {
	ret := C.QtPrivate__AbstractComparatorFunction_new()
	return newQtPrivate__AbstractComparatorFunction(ret)
}

func (this *QtPrivate__AbstractComparatorFunction) Delete() {
	C.QtPrivate__AbstractComparatorFunction_Delete(this.h)
}

type QtPrivate__AbstractConverterFunction struct {
	h *C.QtPrivate__AbstractConverterFunction
}

func (this *QtPrivate__AbstractConverterFunction) cPointer() *C.QtPrivate__AbstractConverterFunction {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtPrivate__AbstractConverterFunction(h *C.QtPrivate__AbstractConverterFunction) *QtPrivate__AbstractConverterFunction {
	if h == nil {
		return nil
	}
	return &QtPrivate__AbstractConverterFunction{h: h}
}

func newQtPrivate__AbstractConverterFunction_U(h unsafe.Pointer) *QtPrivate__AbstractConverterFunction {
	return newQtPrivate__AbstractConverterFunction((*C.QtPrivate__AbstractConverterFunction)(h))
}

// NewQtPrivate__AbstractConverterFunction constructs a new QtPrivate::AbstractConverterFunction object.
func NewQtPrivate__AbstractConverterFunction() *QtPrivate__AbstractConverterFunction {
	ret := C.QtPrivate__AbstractConverterFunction_new()
	return newQtPrivate__AbstractConverterFunction(ret)
}

func (this *QtPrivate__AbstractConverterFunction) Delete() {
	C.QtPrivate__AbstractConverterFunction_Delete(this.h)
}

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
	if h == nil {
		return nil
	}
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

func QMetaType_RegisterNormalizedTypedef(normalizedTypeName *QByteArray, aliasId int) int {
	ret := C.QMetaType_RegisterNormalizedTypedef(normalizedTypeName.cPointer(), (C.int)(aliasId))
	return (int)(ret)
}

func QMetaType_Type(typeName string) int {
	typeName_Cstring := C.CString(typeName)
	defer C.free(unsafe.Pointer(typeName_Cstring))
	ret := C.QMetaType_Type(typeName_Cstring)
	return (int)(ret)
}

func QMetaType_TypeWithTypeName(typeName *QByteArray) int {
	ret := C.QMetaType_TypeWithTypeName(typeName.cPointer())
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

func QMetaType_TypeFlags(typeVal int) int {
	ret := C.QMetaType_TypeFlags((C.int)(typeVal))
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

func (this *QMetaType) Flags() int {
	ret := C.QMetaType_Flags(this.h)
	return (int)(ret)
}

func (this *QMetaType) MetaObject() *QMetaObject {
	ret := C.QMetaType_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QMetaType) Name() *QByteArray {
	ret := C.QMetaType_Name(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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

type QtMetaTypePrivate__VariantData struct {
	h *C.QtMetaTypePrivate__VariantData
}

func (this *QtMetaTypePrivate__VariantData) cPointer() *C.QtMetaTypePrivate__VariantData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtMetaTypePrivate__VariantData(h *C.QtMetaTypePrivate__VariantData) *QtMetaTypePrivate__VariantData {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__VariantData{h: h}
}

func newQtMetaTypePrivate__VariantData_U(h unsafe.Pointer) *QtMetaTypePrivate__VariantData {
	return newQtMetaTypePrivate__VariantData((*C.QtMetaTypePrivate__VariantData)(h))
}

// NewQtMetaTypePrivate__VariantData constructs a new QtMetaTypePrivate::VariantData object.
func NewQtMetaTypePrivate__VariantData(other *QtMetaTypePrivate__VariantData) *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__VariantData_new(other.cPointer())
	return newQtMetaTypePrivate__VariantData(ret)
}

func (this *QtMetaTypePrivate__VariantData) Delete() {
	C.QtMetaTypePrivate__VariantData_Delete(this.h)
}

type QtMetaTypePrivate__VectorBoolElements struct {
	h *C.QtMetaTypePrivate__VectorBoolElements
}

func (this *QtMetaTypePrivate__VectorBoolElements) cPointer() *C.QtMetaTypePrivate__VectorBoolElements {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtMetaTypePrivate__VectorBoolElements(h *C.QtMetaTypePrivate__VectorBoolElements) *QtMetaTypePrivate__VectorBoolElements {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__VectorBoolElements{h: h}
}

func newQtMetaTypePrivate__VectorBoolElements_U(h unsafe.Pointer) *QtMetaTypePrivate__VectorBoolElements {
	return newQtMetaTypePrivate__VectorBoolElements((*C.QtMetaTypePrivate__VectorBoolElements)(h))
}

func (this *QtMetaTypePrivate__VectorBoolElements) Delete() {
	C.QtMetaTypePrivate__VectorBoolElements_Delete(this.h)
}

type QtMetaTypePrivate__QSequentialIterableImpl struct {
	h *C.QtMetaTypePrivate__QSequentialIterableImpl
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) cPointer() *C.QtMetaTypePrivate__QSequentialIterableImpl {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtMetaTypePrivate__QSequentialIterableImpl(h *C.QtMetaTypePrivate__QSequentialIterableImpl) *QtMetaTypePrivate__QSequentialIterableImpl {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__QSequentialIterableImpl{h: h}
}

func newQtMetaTypePrivate__QSequentialIterableImpl_U(h unsafe.Pointer) *QtMetaTypePrivate__QSequentialIterableImpl {
	return newQtMetaTypePrivate__QSequentialIterableImpl((*C.QtMetaTypePrivate__QSequentialIterableImpl)(h))
}

// NewQtMetaTypePrivate__QSequentialIterableImpl constructs a new QtMetaTypePrivate::QSequentialIterableImpl object.
func NewQtMetaTypePrivate__QSequentialIterableImpl() *QtMetaTypePrivate__QSequentialIterableImpl {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_new()
	return newQtMetaTypePrivate__QSequentialIterableImpl(ret)
}

// NewQtMetaTypePrivate__QSequentialIterableImpl2 constructs a new QtMetaTypePrivate::QSequentialIterableImpl object.
func NewQtMetaTypePrivate__QSequentialIterableImpl2(param1 *QtMetaTypePrivate__QSequentialIterableImpl) *QtMetaTypePrivate__QSequentialIterableImpl {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_new2(param1.cPointer())
	return newQtMetaTypePrivate__QSequentialIterableImpl(ret)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) IteratorCapabilities() uintptr {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_IteratorCapabilities(this.h)
	return (uintptr)(ret)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Revision() uint {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_Revision(this.h)
	return (uint)(ret)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) ContainerCapabilities() uint {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_ContainerCapabilities(this.h)
	return (uint)(ret)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) MoveToBegin() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_MoveToBegin(this.h)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) MoveToEnd() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_MoveToEnd(this.h)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Equal(other *QtMetaTypePrivate__QSequentialIterableImpl) bool {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_Equal(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) GetCurrent() *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_GetCurrent(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtMetaTypePrivate__VariantData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtMetaTypePrivate__VariantData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) At(idx int) *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_At(this.h, (C.int)(idx))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtMetaTypePrivate__VariantData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtMetaTypePrivate__VariantData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Size() int {
	ret := C.QtMetaTypePrivate__QSequentialIterableImpl_Size(this.h)
	return (int)(ret)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) DestroyIter() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_DestroyIter(this.h)
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Copy(other *QtMetaTypePrivate__QSequentialIterableImpl) {
	C.QtMetaTypePrivate__QSequentialIterableImpl_Copy(this.h, other.cPointer())
}

func (this *QtMetaTypePrivate__QSequentialIterableImpl) Delete() {
	C.QtMetaTypePrivate__QSequentialIterableImpl_Delete(this.h)
}

type QtMetaTypePrivate__QAssociativeIterableImpl struct {
	h *C.QtMetaTypePrivate__QAssociativeIterableImpl
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) cPointer() *C.QtMetaTypePrivate__QAssociativeIterableImpl {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtMetaTypePrivate__QAssociativeIterableImpl(h *C.QtMetaTypePrivate__QAssociativeIterableImpl) *QtMetaTypePrivate__QAssociativeIterableImpl {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__QAssociativeIterableImpl{h: h}
}

func newQtMetaTypePrivate__QAssociativeIterableImpl_U(h unsafe.Pointer) *QtMetaTypePrivate__QAssociativeIterableImpl {
	return newQtMetaTypePrivate__QAssociativeIterableImpl((*C.QtMetaTypePrivate__QAssociativeIterableImpl)(h))
}

// NewQtMetaTypePrivate__QAssociativeIterableImpl constructs a new QtMetaTypePrivate::QAssociativeIterableImpl object.
func NewQtMetaTypePrivate__QAssociativeIterableImpl() *QtMetaTypePrivate__QAssociativeIterableImpl {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_new()
	return newQtMetaTypePrivate__QAssociativeIterableImpl(ret)
}

// NewQtMetaTypePrivate__QAssociativeIterableImpl2 constructs a new QtMetaTypePrivate::QAssociativeIterableImpl object.
func NewQtMetaTypePrivate__QAssociativeIterableImpl2(param1 *QtMetaTypePrivate__QAssociativeIterableImpl) *QtMetaTypePrivate__QAssociativeIterableImpl {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_new2(param1.cPointer())
	return newQtMetaTypePrivate__QAssociativeIterableImpl(ret)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Begin() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Begin(this.h)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) End() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_End(this.h)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Equal(other *QtMetaTypePrivate__QAssociativeIterableImpl) bool {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_Equal(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) DestroyIter() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_DestroyIter(this.h)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) GetCurrentKey() *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_GetCurrentKey(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtMetaTypePrivate__VariantData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtMetaTypePrivate__VariantData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) GetCurrentValue() *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_GetCurrentValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtMetaTypePrivate__VariantData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtMetaTypePrivate__VariantData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Find(key *QtMetaTypePrivate__VariantData) {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Find(this.h, key.cPointer())
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Size() int {
	ret := C.QtMetaTypePrivate__QAssociativeIterableImpl_Size(this.h)
	return (int)(ret)
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Copy(other *QtMetaTypePrivate__QAssociativeIterableImpl) {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Copy(this.h, other.cPointer())
}

func (this *QtMetaTypePrivate__QAssociativeIterableImpl) Delete() {
	C.QtMetaTypePrivate__QAssociativeIterableImpl_Delete(this.h)
}

type QtMetaTypePrivate__QPairVariantInterfaceImpl struct {
	h *C.QtMetaTypePrivate__QPairVariantInterfaceImpl
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) cPointer() *C.QtMetaTypePrivate__QPairVariantInterfaceImpl {
	if this == nil {
		return nil
	}
	return this.h
}

func newQtMetaTypePrivate__QPairVariantInterfaceImpl(h *C.QtMetaTypePrivate__QPairVariantInterfaceImpl) *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	if h == nil {
		return nil
	}
	return &QtMetaTypePrivate__QPairVariantInterfaceImpl{h: h}
}

func newQtMetaTypePrivate__QPairVariantInterfaceImpl_U(h unsafe.Pointer) *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	return newQtMetaTypePrivate__QPairVariantInterfaceImpl((*C.QtMetaTypePrivate__QPairVariantInterfaceImpl)(h))
}

// NewQtMetaTypePrivate__QPairVariantInterfaceImpl constructs a new QtMetaTypePrivate::QPairVariantInterfaceImpl object.
func NewQtMetaTypePrivate__QPairVariantInterfaceImpl() *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_new()
	return newQtMetaTypePrivate__QPairVariantInterfaceImpl(ret)
}

// NewQtMetaTypePrivate__QPairVariantInterfaceImpl2 constructs a new QtMetaTypePrivate::QPairVariantInterfaceImpl object.
func NewQtMetaTypePrivate__QPairVariantInterfaceImpl2(param1 *QtMetaTypePrivate__QPairVariantInterfaceImpl) *QtMetaTypePrivate__QPairVariantInterfaceImpl {
	ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_new2(param1.cPointer())
	return newQtMetaTypePrivate__QPairVariantInterfaceImpl(ret)
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) First() *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_First(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtMetaTypePrivate__VariantData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtMetaTypePrivate__VariantData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) Second() *QtMetaTypePrivate__VariantData {
	ret := C.QtMetaTypePrivate__QPairVariantInterfaceImpl_Second(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQtMetaTypePrivate__VariantData(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QtMetaTypePrivate__VariantData) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QtMetaTypePrivate__QPairVariantInterfaceImpl) Delete() {
	C.QtMetaTypePrivate__QPairVariantInterfaceImpl_Delete(this.h)
}

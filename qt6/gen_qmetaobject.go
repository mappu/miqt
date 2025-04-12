package qt6

/*

#include "gen_qmetaobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMetaMethod__Access int

const (
	QMetaMethod__Private   QMetaMethod__Access = 0
	QMetaMethod__Protected QMetaMethod__Access = 1
	QMetaMethod__Public    QMetaMethod__Access = 2
)

type QMetaMethod__MethodType int

const (
	QMetaMethod__Method      QMetaMethod__MethodType = 0
	QMetaMethod__Signal      QMetaMethod__MethodType = 1
	QMetaMethod__Slot        QMetaMethod__MethodType = 2
	QMetaMethod__Constructor QMetaMethod__MethodType = 3
)

type QMetaMethod__Attributes int

const (
	QMetaMethod__Compatibility QMetaMethod__Attributes = 1
	QMetaMethod__Cloned        QMetaMethod__Attributes = 2
	QMetaMethod__Scriptable    QMetaMethod__Attributes = 4
)

type QMetaMethod struct {
	h *C.QMetaMethod
}

func (this *QMetaMethod) cPointer() *C.QMetaMethod {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaMethod) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaMethod constructs the type using only CGO pointers.
func newQMetaMethod(h *C.QMetaMethod) *QMetaMethod {
	if h == nil {
		return nil
	}

	return &QMetaMethod{h: h}
}

// UnsafeNewQMetaMethod constructs the type using only unsafe pointers.
func UnsafeNewQMetaMethod(h unsafe.Pointer) *QMetaMethod {
	return newQMetaMethod((*C.QMetaMethod)(h))
}

// NewQMetaMethod constructs a new QMetaMethod object.
func NewQMetaMethod() *QMetaMethod {

	return newQMetaMethod(C.QMetaMethod_new())
}

// NewQMetaMethod2 constructs a new QMetaMethod object.
func NewQMetaMethod2(param1 *QMetaMethod) *QMetaMethod {

	return newQMetaMethod(C.QMetaMethod_new2(param1.cPointer()))
}

func (this *QMetaMethod) MethodSignature() []byte {
	var _bytearray C.struct_miqt_string = C.QMetaMethod_methodSignature(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) Name() []byte {
	var _bytearray C.struct_miqt_string = C.QMetaMethod_name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) TypeName() string {
	_ret := C.QMetaMethod_typeName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaMethod) ReturnType() int {
	return (int)(C.QMetaMethod_returnType(this.h))
}

func (this *QMetaMethod) ReturnMetaType() *QMetaType {
	_goptr := newQMetaType(C.QMetaMethod_returnMetaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaMethod) ParameterCount() int {
	return (int)(C.QMetaMethod_parameterCount(this.h))
}

func (this *QMetaMethod) ParameterType(index int) int {
	return (int)(C.QMetaMethod_parameterType(this.h, (C.int)(index)))
}

func (this *QMetaMethod) ParameterMetaType(index int) *QMetaType {
	_goptr := newQMetaType(C.QMetaMethod_parameterMetaType(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaMethod) GetParameterTypes(types *int) {
	C.QMetaMethod_getParameterTypes(this.h, (*C.int)(unsafe.Pointer(types)))
}

func (this *QMetaMethod) ParameterTypes() [][]byte {
	var _ma C.struct_miqt_array = C.QMetaMethod_parameterTypes(this.h)
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

func (this *QMetaMethod) ParameterTypeName(index int) []byte {
	var _bytearray C.struct_miqt_string = C.QMetaMethod_parameterTypeName(this.h, (C.int)(index))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) ParameterNames() [][]byte {
	var _ma C.struct_miqt_array = C.QMetaMethod_parameterNames(this.h)
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

func (this *QMetaMethod) Tag() string {
	_ret := C.QMetaMethod_tag(this.h)
	return C.GoString(_ret)
}

func (this *QMetaMethod) Access() QMetaMethod__Access {
	return (QMetaMethod__Access)(C.QMetaMethod_access(this.h))
}

func (this *QMetaMethod) MethodType() QMetaMethod__MethodType {
	return (QMetaMethod__MethodType)(C.QMetaMethod_methodType(this.h))
}

func (this *QMetaMethod) Attributes() int {
	return (int)(C.QMetaMethod_attributes(this.h))
}

func (this *QMetaMethod) MethodIndex() int {
	return (int)(C.QMetaMethod_methodIndex(this.h))
}

func (this *QMetaMethod) RelativeMethodIndex() int {
	return (int)(C.QMetaMethod_relativeMethodIndex(this.h))
}

func (this *QMetaMethod) Revision() int {
	return (int)(C.QMetaMethod_revision(this.h))
}

func (this *QMetaMethod) IsConst() bool {
	return (bool)(C.QMetaMethod_isConst(this.h))
}

func (this *QMetaMethod) EnclosingMetaObject() *QMetaObject {
	return newQMetaObject(C.QMetaMethod_enclosingMetaObject(this.h))
}

func (this *QMetaMethod) Invoke(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument) bool {
	return (bool)(C.QMetaMethod_invoke(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer()))
}

func (this *QMetaMethod) Invoke2(object *QObject, returnValue QGenericReturnArgument) bool {
	return (bool)(C.QMetaMethod_invoke2(this.h, object.cPointer(), returnValue.cPointer()))
}

func (this *QMetaMethod) Invoke3(object *QObject, connectionType ConnectionType) bool {
	return (bool)(C.QMetaMethod_invoke3(this.h, object.cPointer(), (C.int)(connectionType)))
}

func (this *QMetaMethod) InvokeWithObject(object *QObject) bool {
	return (bool)(C.QMetaMethod_invokeWithObject(this.h, object.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget(gadget unsafe.Pointer, returnValue QGenericReturnArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget(this.h, gadget, returnValue.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadgetWithGadget(gadget unsafe.Pointer) bool {
	return (bool)(C.QMetaMethod_invokeOnGadgetWithGadget(this.h, gadget))
}

func (this *QMetaMethod) IsValid() bool {
	return (bool)(C.QMetaMethod_isValid(this.h))
}

func (this *QMetaMethod) Invoke4(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke4(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke5(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke5(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke6(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke6(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke7(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke7(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke8(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke8(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke9(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke9(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke10(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke10(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke11(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke11(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke12(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke12(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke13(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke13(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke14(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke14(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke15(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke15(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke16(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke16(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke17(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke17(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke18(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke18(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke19(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke19(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke20(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke20(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke21(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke21(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke22(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke22(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke23(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke23(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke24(object *QObject, connectionType ConnectionType, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke24(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer()))
}

func (this *QMetaMethod) Invoke25(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke25(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke26(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke26(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke27(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke27(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke28(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke28(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke29(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke29(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke30(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke30(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke31(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke31(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke32(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke32(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke33(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke33(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke34(object *QObject, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke34(this.h, object.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke35(object *QObject, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke35(this.h, object.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke36(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke36(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke37(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke37(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke38(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke38(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke39(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke39(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke40(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke40(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke41(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke41(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke42(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke42(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke43(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invoke43(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget2(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget2(this.h, gadget, returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget3(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget3(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget4(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget4(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget5(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget5(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget6(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget6(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget7(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget7(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget8(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget8(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget9(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget9(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget10(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget10(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget11(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget11(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget12(gadget unsafe.Pointer, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget12(this.h, gadget, val0.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget13(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget13(this.h, gadget, val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget14(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget14(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget15(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget15(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget16(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget16(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget17(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget17(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget18(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget18(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget19(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget19(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget20(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget20(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget21(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_invokeOnGadget21(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

// Delete this object from C++ memory.
func (this *QMetaMethod) Delete() {
	C.QMetaMethod_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaMethod) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaMethod) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMetaEnum struct {
	h *C.QMetaEnum
}

func (this *QMetaEnum) cPointer() *C.QMetaEnum {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaEnum) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaEnum constructs the type using only CGO pointers.
func newQMetaEnum(h *C.QMetaEnum) *QMetaEnum {
	if h == nil {
		return nil
	}

	return &QMetaEnum{h: h}
}

// UnsafeNewQMetaEnum constructs the type using only unsafe pointers.
func UnsafeNewQMetaEnum(h unsafe.Pointer) *QMetaEnum {
	return newQMetaEnum((*C.QMetaEnum)(h))
}

// NewQMetaEnum constructs a new QMetaEnum object.
func NewQMetaEnum() *QMetaEnum {

	return newQMetaEnum(C.QMetaEnum_new())
}

// NewQMetaEnum2 constructs a new QMetaEnum object.
func NewQMetaEnum2(param1 *QMetaEnum) *QMetaEnum {

	return newQMetaEnum(C.QMetaEnum_new2(param1.cPointer()))
}

func (this *QMetaEnum) Name() string {
	_ret := C.QMetaEnum_name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) EnumName() string {
	_ret := C.QMetaEnum_enumName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) IsFlag() bool {
	return (bool)(C.QMetaEnum_isFlag(this.h))
}

func (this *QMetaEnum) IsScoped() bool {
	return (bool)(C.QMetaEnum_isScoped(this.h))
}

func (this *QMetaEnum) KeyCount() int {
	return (int)(C.QMetaEnum_keyCount(this.h))
}

func (this *QMetaEnum) Key(index int) string {
	_ret := C.QMetaEnum_key(this.h, (C.int)(index))
	return C.GoString(_ret)
}

func (this *QMetaEnum) Value(index int) int {
	return (int)(C.QMetaEnum_value(this.h, (C.int)(index)))
}

func (this *QMetaEnum) Scope() string {
	_ret := C.QMetaEnum_scope(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) KeyToValue(key string) int {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	return (int)(C.QMetaEnum_keyToValue(this.h, key_Cstring))
}

func (this *QMetaEnum) ValueToKey(value int) string {
	_ret := C.QMetaEnum_valueToKey(this.h, (C.int)(value))
	return C.GoString(_ret)
}

func (this *QMetaEnum) KeysToValue(keys string) int {
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	return (int)(C.QMetaEnum_keysToValue(this.h, keys_Cstring))
}

func (this *QMetaEnum) ValueToKeys(value int) []byte {
	var _bytearray C.struct_miqt_string = C.QMetaEnum_valueToKeys(this.h, (C.int)(value))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaEnum) EnclosingMetaObject() *QMetaObject {
	return newQMetaObject(C.QMetaEnum_enclosingMetaObject(this.h))
}

func (this *QMetaEnum) IsValid() bool {
	return (bool)(C.QMetaEnum_isValid(this.h))
}

func (this *QMetaEnum) KeyToValue2(key string, ok *bool) int {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	return (int)(C.QMetaEnum_keyToValue2(this.h, key_Cstring, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QMetaEnum) KeysToValue2(keys string, ok *bool) int {
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	return (int)(C.QMetaEnum_keysToValue2(this.h, keys_Cstring, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QMetaEnum) Delete() {
	C.QMetaEnum_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaEnum) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaEnum) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMetaProperty struct {
	h *C.QMetaProperty
}

func (this *QMetaProperty) cPointer() *C.QMetaProperty {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaProperty) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaProperty constructs the type using only CGO pointers.
func newQMetaProperty(h *C.QMetaProperty) *QMetaProperty {
	if h == nil {
		return nil
	}

	return &QMetaProperty{h: h}
}

// UnsafeNewQMetaProperty constructs the type using only unsafe pointers.
func UnsafeNewQMetaProperty(h unsafe.Pointer) *QMetaProperty {
	return newQMetaProperty((*C.QMetaProperty)(h))
}

// NewQMetaProperty constructs a new QMetaProperty object.
func NewQMetaProperty() *QMetaProperty {

	return newQMetaProperty(C.QMetaProperty_new())
}

func (this *QMetaProperty) Name() string {
	_ret := C.QMetaProperty_name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaProperty) TypeName() string {
	_ret := C.QMetaProperty_typeName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaProperty) Type() QVariant__Type {
	return (QVariant__Type)(C.QMetaProperty_type(this.h))
}

func (this *QMetaProperty) UserType() int {
	return (int)(C.QMetaProperty_userType(this.h))
}

func (this *QMetaProperty) TypeId() int {
	return (int)(C.QMetaProperty_typeId(this.h))
}

func (this *QMetaProperty) MetaType() *QMetaType {
	_goptr := newQMetaType(C.QMetaProperty_metaType(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) PropertyIndex() int {
	return (int)(C.QMetaProperty_propertyIndex(this.h))
}

func (this *QMetaProperty) RelativePropertyIndex() int {
	return (int)(C.QMetaProperty_relativePropertyIndex(this.h))
}

func (this *QMetaProperty) IsReadable() bool {
	return (bool)(C.QMetaProperty_isReadable(this.h))
}

func (this *QMetaProperty) IsWritable() bool {
	return (bool)(C.QMetaProperty_isWritable(this.h))
}

func (this *QMetaProperty) IsResettable() bool {
	return (bool)(C.QMetaProperty_isResettable(this.h))
}

func (this *QMetaProperty) IsDesignable() bool {
	return (bool)(C.QMetaProperty_isDesignable(this.h))
}

func (this *QMetaProperty) IsScriptable() bool {
	return (bool)(C.QMetaProperty_isScriptable(this.h))
}

func (this *QMetaProperty) IsStored() bool {
	return (bool)(C.QMetaProperty_isStored(this.h))
}

func (this *QMetaProperty) IsUser() bool {
	return (bool)(C.QMetaProperty_isUser(this.h))
}

func (this *QMetaProperty) IsConstant() bool {
	return (bool)(C.QMetaProperty_isConstant(this.h))
}

func (this *QMetaProperty) IsFinal() bool {
	return (bool)(C.QMetaProperty_isFinal(this.h))
}

func (this *QMetaProperty) IsRequired() bool {
	return (bool)(C.QMetaProperty_isRequired(this.h))
}

func (this *QMetaProperty) IsBindable() bool {
	return (bool)(C.QMetaProperty_isBindable(this.h))
}

func (this *QMetaProperty) IsFlagType() bool {
	return (bool)(C.QMetaProperty_isFlagType(this.h))
}

func (this *QMetaProperty) IsEnumType() bool {
	return (bool)(C.QMetaProperty_isEnumType(this.h))
}

func (this *QMetaProperty) Enumerator() *QMetaEnum {
	_goptr := newQMetaEnum(C.QMetaProperty_enumerator(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) HasNotifySignal() bool {
	return (bool)(C.QMetaProperty_hasNotifySignal(this.h))
}

func (this *QMetaProperty) NotifySignal() *QMetaMethod {
	_goptr := newQMetaMethod(C.QMetaProperty_notifySignal(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) NotifySignalIndex() int {
	return (int)(C.QMetaProperty_notifySignalIndex(this.h))
}

func (this *QMetaProperty) Revision() int {
	return (int)(C.QMetaProperty_revision(this.h))
}

func (this *QMetaProperty) Read(obj *QObject) *QVariant {
	_goptr := newQVariant(C.QMetaProperty_read(this.h, obj.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) Write(obj *QObject, value *QVariant) bool {
	return (bool)(C.QMetaProperty_write(this.h, obj.cPointer(), value.cPointer()))
}

func (this *QMetaProperty) Reset(obj *QObject) bool {
	return (bool)(C.QMetaProperty_reset(this.h, obj.cPointer()))
}

func (this *QMetaProperty) Bindable(object *QObject) *QUntypedBindable {
	_goptr := newQUntypedBindable(C.QMetaProperty_bindable(this.h, object.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) ReadOnGadget(gadget unsafe.Pointer) *QVariant {
	_goptr := newQVariant(C.QMetaProperty_readOnGadget(this.h, gadget))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) WriteOnGadget(gadget unsafe.Pointer, value *QVariant) bool {
	return (bool)(C.QMetaProperty_writeOnGadget(this.h, gadget, value.cPointer()))
}

func (this *QMetaProperty) ResetOnGadget(gadget unsafe.Pointer) bool {
	return (bool)(C.QMetaProperty_resetOnGadget(this.h, gadget))
}

func (this *QMetaProperty) HasStdCppSet() bool {
	return (bool)(C.QMetaProperty_hasStdCppSet(this.h))
}

func (this *QMetaProperty) IsAlias() bool {
	return (bool)(C.QMetaProperty_isAlias(this.h))
}

func (this *QMetaProperty) IsValid() bool {
	return (bool)(C.QMetaProperty_isValid(this.h))
}

func (this *QMetaProperty) EnclosingMetaObject() *QMetaObject {
	return newQMetaObject(C.QMetaProperty_enclosingMetaObject(this.h))
}

// Delete this object from C++ memory.
func (this *QMetaProperty) Delete() {
	C.QMetaProperty_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaProperty) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaProperty) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMetaClassInfo struct {
	h *C.QMetaClassInfo
}

func (this *QMetaClassInfo) cPointer() *C.QMetaClassInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMetaClassInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaClassInfo constructs the type using only CGO pointers.
func newQMetaClassInfo(h *C.QMetaClassInfo) *QMetaClassInfo {
	if h == nil {
		return nil
	}

	return &QMetaClassInfo{h: h}
}

// UnsafeNewQMetaClassInfo constructs the type using only unsafe pointers.
func UnsafeNewQMetaClassInfo(h unsafe.Pointer) *QMetaClassInfo {
	return newQMetaClassInfo((*C.QMetaClassInfo)(h))
}

// NewQMetaClassInfo constructs a new QMetaClassInfo object.
func NewQMetaClassInfo() *QMetaClassInfo {

	return newQMetaClassInfo(C.QMetaClassInfo_new())
}

func (this *QMetaClassInfo) Name() string {
	_ret := C.QMetaClassInfo_name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaClassInfo) Value() string {
	_ret := C.QMetaClassInfo_value(this.h)
	return C.GoString(_ret)
}

func (this *QMetaClassInfo) EnclosingMetaObject() *QMetaObject {
	return newQMetaObject(C.QMetaClassInfo_enclosingMetaObject(this.h))
}

// Delete this object from C++ memory.
func (this *QMetaClassInfo) Delete() {
	C.QMetaClassInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaClassInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaClassInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

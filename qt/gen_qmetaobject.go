package qt

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
	h  *C.QMetaMethod
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMetaMethod) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQMetaMethod(C.QMetaMethod_new2(param1.cPointer()))
}

func (this *QMetaMethod) MethodSignature() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QMetaMethod_methodSignature(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) Name() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QMetaMethod_name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) TypeName() string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaMethod_typeName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaMethod) ReturnType() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaMethod_returnType(this.h))
}

func (this *QMetaMethod) ParameterCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaMethod_parameterCount(this.h))
}

func (this *QMetaMethod) ParameterType(index int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaMethod_parameterType(this.h, (C.int)(index)))
}

func (this *QMetaMethod) GetParameterTypes(types *int) {
	defer runtime.KeepAlive(this)
	C.QMetaMethod_getParameterTypes(this.h, (*C.int)(unsafe.Pointer(types)))
}

func (this *QMetaMethod) ParameterTypes() [][]byte {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QMetaMethod_parameterTypes(this.h)
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

func (this *QMetaMethod) ParameterNames() [][]byte {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QMetaMethod_parameterNames(this.h)
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

func (this *QMetaMethod) Tag() string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaMethod_tag(this.h)
	return C.GoString(_ret)
}

func (this *QMetaMethod) Access() QMetaMethod__Access {
	defer runtime.KeepAlive(this)
	return (QMetaMethod__Access)(C.QMetaMethod_access(this.h))
}

func (this *QMetaMethod) MethodType() QMetaMethod__MethodType {
	defer runtime.KeepAlive(this)
	return (QMetaMethod__MethodType)(C.QMetaMethod_methodType(this.h))
}

func (this *QMetaMethod) Attributes() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaMethod_attributes(this.h))
}

func (this *QMetaMethod) MethodIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaMethod_methodIndex(this.h))
}

func (this *QMetaMethod) Revision() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaMethod_revision(this.h))
}

func (this *QMetaMethod) EnclosingMetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QMetaMethod_enclosingMetaObject(this.h))
}

func (this *QMetaMethod) Invoke(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	return (bool)(C.QMetaMethod_invoke(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer()))
}

func (this *QMetaMethod) Invoke2(object *QObject, returnValue QGenericReturnArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	return (bool)(C.QMetaMethod_invoke2(this.h, object.cPointer(), returnValue.cPointer()))
}

func (this *QMetaMethod) Invoke3(object *QObject, connectionType ConnectionType) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaMethod_invoke3(this.h, object.cPointer(), (C.int)(connectionType)))
}

func (this *QMetaMethod) InvokeWithObject(object *QObject) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaMethod_invokeWithObject(this.h, object.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget(gadget unsafe.Pointer, returnValue QGenericReturnArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	return (bool)(C.QMetaMethod_invokeOnGadget(this.h, gadget, returnValue.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadgetWithGadget(gadget unsafe.Pointer) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaMethod_invokeOnGadgetWithGadget(this.h, gadget))
}

func (this *QMetaMethod) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaMethod_isValid(this.h))
}

func (this *QMetaMethod) Invoke4(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	return (bool)(C.QMetaMethod_invoke4(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke5(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	return (bool)(C.QMetaMethod_invoke5(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke6(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	return (bool)(C.QMetaMethod_invoke6(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke7(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	return (bool)(C.QMetaMethod_invoke7(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke8(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	return (bool)(C.QMetaMethod_invoke8(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke9(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	return (bool)(C.QMetaMethod_invoke9(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke10(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	return (bool)(C.QMetaMethod_invoke10(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke11(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	return (bool)(C.QMetaMethod_invoke11(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke12(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	return (bool)(C.QMetaMethod_invoke12(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke13(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	defer runtime.KeepAlive(val9)
	return (bool)(C.QMetaMethod_invoke13(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke14(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	return (bool)(C.QMetaMethod_invoke14(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke15(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	return (bool)(C.QMetaMethod_invoke15(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke16(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	return (bool)(C.QMetaMethod_invoke16(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke17(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	return (bool)(C.QMetaMethod_invoke17(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke18(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	return (bool)(C.QMetaMethod_invoke18(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke19(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	return (bool)(C.QMetaMethod_invoke19(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke20(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	return (bool)(C.QMetaMethod_invoke20(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke21(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	return (bool)(C.QMetaMethod_invoke21(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke22(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	return (bool)(C.QMetaMethod_invoke22(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke23(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	defer runtime.KeepAlive(val9)
	return (bool)(C.QMetaMethod_invoke23(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke24(object *QObject, connectionType ConnectionType, val0 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	return (bool)(C.QMetaMethod_invoke24(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer()))
}

func (this *QMetaMethod) Invoke25(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	return (bool)(C.QMetaMethod_invoke25(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke26(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	return (bool)(C.QMetaMethod_invoke26(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke27(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	return (bool)(C.QMetaMethod_invoke27(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke28(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	return (bool)(C.QMetaMethod_invoke28(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke29(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	return (bool)(C.QMetaMethod_invoke29(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke30(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	return (bool)(C.QMetaMethod_invoke30(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke31(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	return (bool)(C.QMetaMethod_invoke31(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke32(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	return (bool)(C.QMetaMethod_invoke32(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke33(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	defer runtime.KeepAlive(val9)
	return (bool)(C.QMetaMethod_invoke33(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke34(object *QObject, val0 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	return (bool)(C.QMetaMethod_invoke34(this.h, object.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke35(object *QObject, val0 QGenericArgument, val1 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	return (bool)(C.QMetaMethod_invoke35(this.h, object.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke36(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	return (bool)(C.QMetaMethod_invoke36(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke37(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	return (bool)(C.QMetaMethod_invoke37(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke38(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	return (bool)(C.QMetaMethod_invoke38(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke39(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	return (bool)(C.QMetaMethod_invoke39(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke40(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	return (bool)(C.QMetaMethod_invoke40(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke41(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	return (bool)(C.QMetaMethod_invoke41(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke42(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	return (bool)(C.QMetaMethod_invoke42(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke43(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	defer runtime.KeepAlive(val9)
	return (bool)(C.QMetaMethod_invoke43(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget2(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	return (bool)(C.QMetaMethod_invokeOnGadget2(this.h, gadget, returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget3(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	return (bool)(C.QMetaMethod_invokeOnGadget3(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget4(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	return (bool)(C.QMetaMethod_invokeOnGadget4(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget5(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	return (bool)(C.QMetaMethod_invokeOnGadget5(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget6(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	return (bool)(C.QMetaMethod_invokeOnGadget6(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget7(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	return (bool)(C.QMetaMethod_invokeOnGadget7(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget8(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	return (bool)(C.QMetaMethod_invokeOnGadget8(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget9(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	return (bool)(C.QMetaMethod_invokeOnGadget9(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget10(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	return (bool)(C.QMetaMethod_invokeOnGadget10(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget11(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(returnValue)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	defer runtime.KeepAlive(val9)
	return (bool)(C.QMetaMethod_invokeOnGadget11(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget12(gadget unsafe.Pointer, val0 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	return (bool)(C.QMetaMethod_invokeOnGadget12(this.h, gadget, val0.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget13(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	return (bool)(C.QMetaMethod_invokeOnGadget13(this.h, gadget, val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget14(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	return (bool)(C.QMetaMethod_invokeOnGadget14(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget15(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	return (bool)(C.QMetaMethod_invokeOnGadget15(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget16(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	return (bool)(C.QMetaMethod_invokeOnGadget16(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget17(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	return (bool)(C.QMetaMethod_invokeOnGadget17(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget18(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	return (bool)(C.QMetaMethod_invokeOnGadget18(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget19(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	return (bool)(C.QMetaMethod_invokeOnGadget19(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget20(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	return (bool)(C.QMetaMethod_invokeOnGadget20(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget21(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(val0)
	defer runtime.KeepAlive(val1)
	defer runtime.KeepAlive(val2)
	defer runtime.KeepAlive(val3)
	defer runtime.KeepAlive(val4)
	defer runtime.KeepAlive(val5)
	defer runtime.KeepAlive(val6)
	defer runtime.KeepAlive(val7)
	defer runtime.KeepAlive(val8)
	defer runtime.KeepAlive(val9)
	return (bool)(C.QMetaMethod_invokeOnGadget21(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

// Delete this object from C++ memory.
func (this *QMetaMethod) Delete() {
	C.QMetaMethod_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMetaMethod) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMetaMethod_delete((*C.QMetaMethod)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMetaEnum struct {
	h  *C.QMetaEnum
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMetaEnum) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(param1)

	return newQMetaEnum(C.QMetaEnum_new2(param1.cPointer()))
}

func (this *QMetaEnum) Name() string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaEnum_name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) EnumName() string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaEnum_enumName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) IsFlag() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaEnum_isFlag(this.h))
}

func (this *QMetaEnum) IsScoped() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaEnum_isScoped(this.h))
}

func (this *QMetaEnum) KeyCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaEnum_keyCount(this.h))
}

func (this *QMetaEnum) Key(index int) string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaEnum_key(this.h, (C.int)(index))
	return C.GoString(_ret)
}

func (this *QMetaEnum) Value(index int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaEnum_value(this.h, (C.int)(index)))
}

func (this *QMetaEnum) Scope() string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaEnum_scope(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) KeyToValue(key string) int {
	defer runtime.KeepAlive(this)
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	return (int)(C.QMetaEnum_keyToValue(this.h, key_Cstring))
}

func (this *QMetaEnum) ValueToKey(value int) string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaEnum_valueToKey(this.h, (C.int)(value))
	return C.GoString(_ret)
}

func (this *QMetaEnum) KeysToValue(keys string) int {
	defer runtime.KeepAlive(this)
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	return (int)(C.QMetaEnum_keysToValue(this.h, keys_Cstring))
}

func (this *QMetaEnum) ValueToKeys(value int) []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QMetaEnum_valueToKeys(this.h, (C.int)(value))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaEnum) EnclosingMetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QMetaEnum_enclosingMetaObject(this.h))
}

func (this *QMetaEnum) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaEnum_isValid(this.h))
}

func (this *QMetaEnum) KeyToValue2(key string, ok *bool) int {
	defer runtime.KeepAlive(this)
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	return (int)(C.QMetaEnum_keyToValue2(this.h, key_Cstring, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QMetaEnum) KeysToValue2(keys string, ok *bool) int {
	defer runtime.KeepAlive(this)
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	return (int)(C.QMetaEnum_keysToValue2(this.h, keys_Cstring, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QMetaEnum) Delete() {
	C.QMetaEnum_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMetaEnum) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMetaEnum_delete((*C.QMetaEnum)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMetaProperty struct {
	h  *C.QMetaProperty
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMetaProperty) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
	_ret := C.QMetaProperty_name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaProperty) TypeName() string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaProperty_typeName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaProperty) Type() QVariant__Type {
	defer runtime.KeepAlive(this)
	return (QVariant__Type)(C.QMetaProperty_type(this.h))
}

func (this *QMetaProperty) UserType() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaProperty_userType(this.h))
}

func (this *QMetaProperty) PropertyIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaProperty_propertyIndex(this.h))
}

func (this *QMetaProperty) RelativePropertyIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaProperty_relativePropertyIndex(this.h))
}

func (this *QMetaProperty) IsReadable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isReadable(this.h))
}

func (this *QMetaProperty) IsWritable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isWritable(this.h))
}

func (this *QMetaProperty) IsResettable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isResettable(this.h))
}

func (this *QMetaProperty) IsDesignable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isDesignable(this.h))
}

func (this *QMetaProperty) IsScriptable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isScriptable(this.h))
}

func (this *QMetaProperty) IsStored() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isStored(this.h))
}

func (this *QMetaProperty) IsEditable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isEditable(this.h))
}

func (this *QMetaProperty) IsUser() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isUser(this.h))
}

func (this *QMetaProperty) IsConstant() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isConstant(this.h))
}

func (this *QMetaProperty) IsFinal() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isFinal(this.h))
}

func (this *QMetaProperty) IsRequired() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isRequired(this.h))
}

func (this *QMetaProperty) IsFlagType() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isFlagType(this.h))
}

func (this *QMetaProperty) IsEnumType() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isEnumType(this.h))
}

func (this *QMetaProperty) Enumerator() *QMetaEnum {
	defer runtime.KeepAlive(this)
	_goptr := newQMetaEnum(C.QMetaProperty_enumerator(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) HasNotifySignal() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_hasNotifySignal(this.h))
}

func (this *QMetaProperty) NotifySignal() *QMetaMethod {
	defer runtime.KeepAlive(this)
	_goptr := newQMetaMethod(C.QMetaProperty_notifySignal(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) NotifySignalIndex() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaProperty_notifySignalIndex(this.h))
}

func (this *QMetaProperty) Revision() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMetaProperty_revision(this.h))
}

func (this *QMetaProperty) Read(obj *QObject) *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QMetaProperty_read(this.h, obj.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) Write(obj *QObject, value *QVariant) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	return (bool)(C.QMetaProperty_write(this.h, obj.cPointer(), value.cPointer()))
}

func (this *QMetaProperty) Reset(obj *QObject) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_reset(this.h, obj.cPointer()))
}

func (this *QMetaProperty) ReadOnGadget(gadget unsafe.Pointer) *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QMetaProperty_readOnGadget(this.h, gadget))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) WriteOnGadget(gadget unsafe.Pointer, value *QVariant) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	return (bool)(C.QMetaProperty_writeOnGadget(this.h, gadget, value.cPointer()))
}

func (this *QMetaProperty) ResetOnGadget(gadget unsafe.Pointer) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_resetOnGadget(this.h, gadget))
}

func (this *QMetaProperty) HasStdCppSet() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_hasStdCppSet(this.h))
}

func (this *QMetaProperty) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isValid(this.h))
}

func (this *QMetaProperty) EnclosingMetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QMetaProperty_enclosingMetaObject(this.h))
}

func (this *QMetaProperty) IsDesignableWithObj(obj *QObject) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isDesignableWithObj(this.h, obj.cPointer()))
}

func (this *QMetaProperty) IsScriptableWithObj(obj *QObject) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isScriptableWithObj(this.h, obj.cPointer()))
}

func (this *QMetaProperty) IsStoredWithObj(obj *QObject) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isStoredWithObj(this.h, obj.cPointer()))
}

func (this *QMetaProperty) IsEditableWithObj(obj *QObject) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isEditableWithObj(this.h, obj.cPointer()))
}

func (this *QMetaProperty) IsUserWithObj(obj *QObject) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QMetaProperty_isUserWithObj(this.h, obj.cPointer()))
}

// Delete this object from C++ memory.
func (this *QMetaProperty) Delete() {
	C.QMetaProperty_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMetaProperty) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMetaProperty_delete((*C.QMetaProperty)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMetaClassInfo struct {
	h  *C.QMetaClassInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMetaClassInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(this)
	_ret := C.QMetaClassInfo_name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaClassInfo) Value() string {
	defer runtime.KeepAlive(this)
	_ret := C.QMetaClassInfo_value(this.h)
	return C.GoString(_ret)
}

func (this *QMetaClassInfo) EnclosingMetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QMetaClassInfo_enclosingMetaObject(this.h))
}

// Delete this object from C++ memory.
func (this *QMetaClassInfo) Delete() {
	C.QMetaClassInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMetaClassInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMetaClassInfo_delete((*C.QMetaClassInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}

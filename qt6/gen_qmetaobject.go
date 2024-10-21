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

func newQMetaMethod(h *C.QMetaMethod) *QMetaMethod {
	if h == nil {
		return nil
	}
	return &QMetaMethod{h: h}
}

func UnsafeNewQMetaMethod(h unsafe.Pointer) *QMetaMethod {
	return newQMetaMethod((*C.QMetaMethod)(h))
}

// NewQMetaMethod constructs a new QMetaMethod object.
func NewQMetaMethod() *QMetaMethod {
	ret := C.QMetaMethod_new()
	return newQMetaMethod(ret)
}

// NewQMetaMethod2 constructs a new QMetaMethod object.
func NewQMetaMethod2(param1 *QMetaMethod) *QMetaMethod {
	ret := C.QMetaMethod_new2(param1.cPointer())
	return newQMetaMethod(ret)
}

func (this *QMetaMethod) MethodSignature() []byte {
	var _bytearray C.struct_miqt_string = C.QMetaMethod_MethodSignature(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) Name() []byte {
	var _bytearray C.struct_miqt_string = C.QMetaMethod_Name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) TypeName() string {
	_ret := C.QMetaMethod_TypeName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaMethod) ReturnType() int {
	return (int)(C.QMetaMethod_ReturnType(this.h))
}

func (this *QMetaMethod) ReturnMetaType() *QMetaType {
	_ret := C.QMetaMethod_ReturnMetaType(this.h)
	_goptr := newQMetaType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaMethod) ParameterCount() int {
	return (int)(C.QMetaMethod_ParameterCount(this.h))
}

func (this *QMetaMethod) ParameterType(index int) int {
	return (int)(C.QMetaMethod_ParameterType(this.h, (C.int)(index)))
}

func (this *QMetaMethod) ParameterMetaType(index int) *QMetaType {
	_ret := C.QMetaMethod_ParameterMetaType(this.h, (C.int)(index))
	_goptr := newQMetaType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaMethod) GetParameterTypes(types *int) {
	C.QMetaMethod_GetParameterTypes(this.h, (*C.int)(unsafe.Pointer(types)))
}

func (this *QMetaMethod) ParameterTypes() [][]byte {
	var _ma *C.struct_miqt_array = C.QMetaMethod_ParameterTypes(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMetaMethod) ParameterTypeName(index int) []byte {
	var _bytearray C.struct_miqt_string = C.QMetaMethod_ParameterTypeName(this.h, (C.int)(index))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaMethod) ParameterNames() [][]byte {
	var _ma *C.struct_miqt_array = C.QMetaMethod_ParameterNames(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMetaMethod) Tag() string {
	_ret := C.QMetaMethod_Tag(this.h)
	return C.GoString(_ret)
}

func (this *QMetaMethod) Access() QMetaMethod__Access {
	return (QMetaMethod__Access)(C.QMetaMethod_Access(this.h))
}

func (this *QMetaMethod) MethodType() QMetaMethod__MethodType {
	return (QMetaMethod__MethodType)(C.QMetaMethod_MethodType(this.h))
}

func (this *QMetaMethod) Attributes() int {
	return (int)(C.QMetaMethod_Attributes(this.h))
}

func (this *QMetaMethod) MethodIndex() int {
	return (int)(C.QMetaMethod_MethodIndex(this.h))
}

func (this *QMetaMethod) RelativeMethodIndex() int {
	return (int)(C.QMetaMethod_RelativeMethodIndex(this.h))
}

func (this *QMetaMethod) Revision() int {
	return (int)(C.QMetaMethod_Revision(this.h))
}

func (this *QMetaMethod) IsConst() bool {
	return (bool)(C.QMetaMethod_IsConst(this.h))
}

func (this *QMetaMethod) EnclosingMetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMetaMethod_EnclosingMetaObject(this.h)))
}

func (this *QMetaMethod) Invoke(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument) bool {
	return (bool)(C.QMetaMethod_Invoke(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer()))
}

func (this *QMetaMethod) Invoke2(object *QObject, returnValue QGenericReturnArgument) bool {
	return (bool)(C.QMetaMethod_Invoke2(this.h, object.cPointer(), returnValue.cPointer()))
}

func (this *QMetaMethod) Invoke3(object *QObject, connectionType ConnectionType) bool {
	return (bool)(C.QMetaMethod_Invoke3(this.h, object.cPointer(), (C.int)(connectionType)))
}

func (this *QMetaMethod) InvokeWithObject(object *QObject) bool {
	return (bool)(C.QMetaMethod_InvokeWithObject(this.h, object.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget(gadget unsafe.Pointer, returnValue QGenericReturnArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget(this.h, gadget, returnValue.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadgetWithGadget(gadget unsafe.Pointer) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadgetWithGadget(this.h, gadget))
}

func (this *QMetaMethod) IsValid() bool {
	return (bool)(C.QMetaMethod_IsValid(this.h))
}

func (this *QMetaMethod) Invoke4(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke4(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke5(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke5(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke6(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke6(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke7(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke7(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke8(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke8(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke9(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke9(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke10(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke10(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke11(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke11(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke12(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke12(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke13(object *QObject, connectionType ConnectionType, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke13(this.h, object.cPointer(), (C.int)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke32(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke32(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke42(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke42(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke52(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke52(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke62(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke62(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke72(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke72(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke82(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke82(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke92(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke92(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke102(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke102(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke112(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke112(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke122(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke122(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke33(object *QObject, connectionType ConnectionType, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke33(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer()))
}

func (this *QMetaMethod) Invoke43(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke43(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke53(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke53(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke63(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke63(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke73(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke73(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke83(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke83(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke93(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke93(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke103(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke103(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke113(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke113(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke123(object *QObject, connectionType ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke123(this.h, object.cPointer(), (C.int)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) Invoke22(object *QObject, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke22(this.h, object.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) Invoke34(object *QObject, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke34(this.h, object.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) Invoke44(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke44(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) Invoke54(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke54(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) Invoke64(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke64(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) Invoke74(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke74(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) Invoke84(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke84(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) Invoke94(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke94(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) Invoke104(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke104(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) Invoke114(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_Invoke114(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget3(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget3(this.h, gadget, returnValue.cPointer(), val0.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget4(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget4(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget5(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget5(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget6(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget6(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget7(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget7(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget8(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget8(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget9(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget9(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget10(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget10(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget11(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget11(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget12(gadget unsafe.Pointer, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget12(this.h, gadget, returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget2(gadget unsafe.Pointer, val0 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget2(this.h, gadget, val0.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget32(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget32(this.h, gadget, val0.cPointer(), val1.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget42(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget42(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget52(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget52(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget62(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget62(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget72(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget72(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget82(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget82(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget92(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget92(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget102(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget102(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaMethod) InvokeOnGadget112(gadget unsafe.Pointer, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	return (bool)(C.QMetaMethod_InvokeOnGadget112(this.h, gadget, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

// Delete this object from C++ memory.
func (this *QMetaMethod) Delete() {
	C.QMetaMethod_Delete(this.h)
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

func newQMetaEnum(h *C.QMetaEnum) *QMetaEnum {
	if h == nil {
		return nil
	}
	return &QMetaEnum{h: h}
}

func UnsafeNewQMetaEnum(h unsafe.Pointer) *QMetaEnum {
	return newQMetaEnum((*C.QMetaEnum)(h))
}

// NewQMetaEnum constructs a new QMetaEnum object.
func NewQMetaEnum() *QMetaEnum {
	ret := C.QMetaEnum_new()
	return newQMetaEnum(ret)
}

// NewQMetaEnum2 constructs a new QMetaEnum object.
func NewQMetaEnum2(param1 *QMetaEnum) *QMetaEnum {
	ret := C.QMetaEnum_new2(param1.cPointer())
	return newQMetaEnum(ret)
}

func (this *QMetaEnum) Name() string {
	_ret := C.QMetaEnum_Name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) EnumName() string {
	_ret := C.QMetaEnum_EnumName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) IsFlag() bool {
	return (bool)(C.QMetaEnum_IsFlag(this.h))
}

func (this *QMetaEnum) IsScoped() bool {
	return (bool)(C.QMetaEnum_IsScoped(this.h))
}

func (this *QMetaEnum) KeyCount() int {
	return (int)(C.QMetaEnum_KeyCount(this.h))
}

func (this *QMetaEnum) Key(index int) string {
	_ret := C.QMetaEnum_Key(this.h, (C.int)(index))
	return C.GoString(_ret)
}

func (this *QMetaEnum) Value(index int) int {
	return (int)(C.QMetaEnum_Value(this.h, (C.int)(index)))
}

func (this *QMetaEnum) Scope() string {
	_ret := C.QMetaEnum_Scope(this.h)
	return C.GoString(_ret)
}

func (this *QMetaEnum) KeyToValue(key string) int {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	return (int)(C.QMetaEnum_KeyToValue(this.h, key_Cstring))
}

func (this *QMetaEnum) ValueToKey(value int) string {
	_ret := C.QMetaEnum_ValueToKey(this.h, (C.int)(value))
	return C.GoString(_ret)
}

func (this *QMetaEnum) KeysToValue(keys string) int {
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	return (int)(C.QMetaEnum_KeysToValue(this.h, keys_Cstring))
}

func (this *QMetaEnum) ValueToKeys(value int) []byte {
	var _bytearray C.struct_miqt_string = C.QMetaEnum_ValueToKeys(this.h, (C.int)(value))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMetaEnum) EnclosingMetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMetaEnum_EnclosingMetaObject(this.h)))
}

func (this *QMetaEnum) IsValid() bool {
	return (bool)(C.QMetaEnum_IsValid(this.h))
}

func (this *QMetaEnum) KeyToValue2(key string, ok *bool) int {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	return (int)(C.QMetaEnum_KeyToValue2(this.h, key_Cstring, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QMetaEnum) KeysToValue2(keys string, ok *bool) int {
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	return (int)(C.QMetaEnum_KeysToValue2(this.h, keys_Cstring, (*C.bool)(unsafe.Pointer(ok))))
}

// Delete this object from C++ memory.
func (this *QMetaEnum) Delete() {
	C.QMetaEnum_Delete(this.h)
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

func newQMetaProperty(h *C.QMetaProperty) *QMetaProperty {
	if h == nil {
		return nil
	}
	return &QMetaProperty{h: h}
}

func UnsafeNewQMetaProperty(h unsafe.Pointer) *QMetaProperty {
	return newQMetaProperty((*C.QMetaProperty)(h))
}

// NewQMetaProperty constructs a new QMetaProperty object.
func NewQMetaProperty() *QMetaProperty {
	ret := C.QMetaProperty_new()
	return newQMetaProperty(ret)
}

func (this *QMetaProperty) Name() string {
	_ret := C.QMetaProperty_Name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaProperty) TypeName() string {
	_ret := C.QMetaProperty_TypeName(this.h)
	return C.GoString(_ret)
}

func (this *QMetaProperty) Type() QVariant__Type {
	return (QVariant__Type)(C.QMetaProperty_Type(this.h))
}

func (this *QMetaProperty) UserType() int {
	return (int)(C.QMetaProperty_UserType(this.h))
}

func (this *QMetaProperty) TypeId() int {
	return (int)(C.QMetaProperty_TypeId(this.h))
}

func (this *QMetaProperty) MetaType() *QMetaType {
	_ret := C.QMetaProperty_MetaType(this.h)
	_goptr := newQMetaType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) PropertyIndex() int {
	return (int)(C.QMetaProperty_PropertyIndex(this.h))
}

func (this *QMetaProperty) RelativePropertyIndex() int {
	return (int)(C.QMetaProperty_RelativePropertyIndex(this.h))
}

func (this *QMetaProperty) IsReadable() bool {
	return (bool)(C.QMetaProperty_IsReadable(this.h))
}

func (this *QMetaProperty) IsWritable() bool {
	return (bool)(C.QMetaProperty_IsWritable(this.h))
}

func (this *QMetaProperty) IsResettable() bool {
	return (bool)(C.QMetaProperty_IsResettable(this.h))
}

func (this *QMetaProperty) IsDesignable() bool {
	return (bool)(C.QMetaProperty_IsDesignable(this.h))
}

func (this *QMetaProperty) IsScriptable() bool {
	return (bool)(C.QMetaProperty_IsScriptable(this.h))
}

func (this *QMetaProperty) IsStored() bool {
	return (bool)(C.QMetaProperty_IsStored(this.h))
}

func (this *QMetaProperty) IsUser() bool {
	return (bool)(C.QMetaProperty_IsUser(this.h))
}

func (this *QMetaProperty) IsConstant() bool {
	return (bool)(C.QMetaProperty_IsConstant(this.h))
}

func (this *QMetaProperty) IsFinal() bool {
	return (bool)(C.QMetaProperty_IsFinal(this.h))
}

func (this *QMetaProperty) IsRequired() bool {
	return (bool)(C.QMetaProperty_IsRequired(this.h))
}

func (this *QMetaProperty) IsBindable() bool {
	return (bool)(C.QMetaProperty_IsBindable(this.h))
}

func (this *QMetaProperty) IsFlagType() bool {
	return (bool)(C.QMetaProperty_IsFlagType(this.h))
}

func (this *QMetaProperty) IsEnumType() bool {
	return (bool)(C.QMetaProperty_IsEnumType(this.h))
}

func (this *QMetaProperty) Enumerator() *QMetaEnum {
	_ret := C.QMetaProperty_Enumerator(this.h)
	_goptr := newQMetaEnum(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) HasNotifySignal() bool {
	return (bool)(C.QMetaProperty_HasNotifySignal(this.h))
}

func (this *QMetaProperty) NotifySignal() *QMetaMethod {
	_ret := C.QMetaProperty_NotifySignal(this.h)
	_goptr := newQMetaMethod(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) NotifySignalIndex() int {
	return (int)(C.QMetaProperty_NotifySignalIndex(this.h))
}

func (this *QMetaProperty) Revision() int {
	return (int)(C.QMetaProperty_Revision(this.h))
}

func (this *QMetaProperty) Read(obj *QObject) *QVariant {
	_ret := C.QMetaProperty_Read(this.h, obj.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) Write(obj *QObject, value *QVariant) bool {
	return (bool)(C.QMetaProperty_Write(this.h, obj.cPointer(), value.cPointer()))
}

func (this *QMetaProperty) Reset(obj *QObject) bool {
	return (bool)(C.QMetaProperty_Reset(this.h, obj.cPointer()))
}

func (this *QMetaProperty) Bindable(object *QObject) *QUntypedBindable {
	_ret := C.QMetaProperty_Bindable(this.h, object.cPointer())
	_goptr := newQUntypedBindable(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) ReadOnGadget(gadget unsafe.Pointer) *QVariant {
	_ret := C.QMetaProperty_ReadOnGadget(this.h, gadget)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaProperty) WriteOnGadget(gadget unsafe.Pointer, value *QVariant) bool {
	return (bool)(C.QMetaProperty_WriteOnGadget(this.h, gadget, value.cPointer()))
}

func (this *QMetaProperty) ResetOnGadget(gadget unsafe.Pointer) bool {
	return (bool)(C.QMetaProperty_ResetOnGadget(this.h, gadget))
}

func (this *QMetaProperty) HasStdCppSet() bool {
	return (bool)(C.QMetaProperty_HasStdCppSet(this.h))
}

func (this *QMetaProperty) IsAlias() bool {
	return (bool)(C.QMetaProperty_IsAlias(this.h))
}

func (this *QMetaProperty) IsValid() bool {
	return (bool)(C.QMetaProperty_IsValid(this.h))
}

func (this *QMetaProperty) EnclosingMetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMetaProperty_EnclosingMetaObject(this.h)))
}

// Delete this object from C++ memory.
func (this *QMetaProperty) Delete() {
	C.QMetaProperty_Delete(this.h)
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

func newQMetaClassInfo(h *C.QMetaClassInfo) *QMetaClassInfo {
	if h == nil {
		return nil
	}
	return &QMetaClassInfo{h: h}
}

func UnsafeNewQMetaClassInfo(h unsafe.Pointer) *QMetaClassInfo {
	return newQMetaClassInfo((*C.QMetaClassInfo)(h))
}

// NewQMetaClassInfo constructs a new QMetaClassInfo object.
func NewQMetaClassInfo() *QMetaClassInfo {
	ret := C.QMetaClassInfo_new()
	return newQMetaClassInfo(ret)
}

func (this *QMetaClassInfo) Name() string {
	_ret := C.QMetaClassInfo_Name(this.h)
	return C.GoString(_ret)
}

func (this *QMetaClassInfo) Value() string {
	_ret := C.QMetaClassInfo_Value(this.h)
	return C.GoString(_ret)
}

func (this *QMetaClassInfo) EnclosingMetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMetaClassInfo_EnclosingMetaObject(this.h)))
}

// Delete this object from C++ memory.
func (this *QMetaClassInfo) Delete() {
	C.QMetaClassInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaClassInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaClassInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

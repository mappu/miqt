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

type QMetaMethod struct {
	h *C.QMetaMethod
}

func (this *QMetaMethod) cPointer() *C.QMetaMethod {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMetaMethod(h *C.QMetaMethod) *QMetaMethod {
	if h == nil {
		return nil
	}
	return &QMetaMethod{h: h}
}

func newQMetaMethod_U(h unsafe.Pointer) *QMetaMethod {
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

func (this *QMetaMethod) MethodSignature() *QByteArray {
	ret := C.QMetaMethod_MethodSignature(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaMethod) Name() *QByteArray {
	ret := C.QMetaMethod_Name(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaMethod) TypeName() unsafe.Pointer {
	ret := C.QMetaMethod_TypeName(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaMethod) ReturnType() int {
	ret := C.QMetaMethod_ReturnType(this.h)
	return (int)(ret)
}

func (this *QMetaMethod) ParameterCount() int {
	ret := C.QMetaMethod_ParameterCount(this.h)
	return (int)(ret)
}

func (this *QMetaMethod) ParameterType(index int) int {
	ret := C.QMetaMethod_ParameterType(this.h, (C.int)(index))
	return (int)(ret)
}

func (this *QMetaMethod) GetParameterTypes(types *int) {
	C.QMetaMethod_GetParameterTypes(this.h, (*C.int)(unsafe.Pointer(types)))
}

func (this *QMetaMethod) ParameterTypes() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QMetaMethod_ParameterTypes(this.h, &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMetaMethod) ParameterNames() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QMetaMethod_ParameterNames(this.h, &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMetaMethod) Tag() unsafe.Pointer {
	ret := C.QMetaMethod_Tag(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaMethod) Access() uintptr {
	ret := C.QMetaMethod_Access(this.h)
	return (uintptr)(ret)
}

func (this *QMetaMethod) MethodType() uintptr {
	ret := C.QMetaMethod_MethodType(this.h)
	return (uintptr)(ret)
}

func (this *QMetaMethod) Attributes() int {
	ret := C.QMetaMethod_Attributes(this.h)
	return (int)(ret)
}

func (this *QMetaMethod) MethodIndex() int {
	ret := C.QMetaMethod_MethodIndex(this.h)
	return (int)(ret)
}

func (this *QMetaMethod) Revision() int {
	ret := C.QMetaMethod_Revision(this.h)
	return (int)(ret)
}

func (this *QMetaMethod) EnclosingMetaObject() *QMetaObject {
	ret := C.QMetaMethod_EnclosingMetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QMetaMethod) Invoke(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument) bool {
	ret := C.QMetaMethod_Invoke(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke2(object *QObject, returnValue QGenericReturnArgument) bool {
	ret := C.QMetaMethod_Invoke2(this.h, object.cPointer(), returnValue.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke3(object *QObject, connectionType uintptr) bool {
	ret := C.QMetaMethod_Invoke3(this.h, object.cPointer(), (C.uintptr_t)(connectionType))
	return (bool)(ret)
}

func (this *QMetaMethod) InvokeWithObject(object *QObject) bool {
	ret := C.QMetaMethod_InvokeWithObject(this.h, object.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) IsValid() bool {
	ret := C.QMetaMethod_IsValid(this.h)
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke4(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke4(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke5(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke5(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke6(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke6(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke7(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke7(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke8(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke8(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke9(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke9(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke10(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke10(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke11(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke11(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke12(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke12(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke13(object *QObject, connectionType uintptr, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke13(this.h, object.cPointer(), (C.uintptr_t)(connectionType), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke32(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke32(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke42(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke42(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke52(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke52(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke62(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke62(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke72(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke72(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke82(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke82(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke92(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke92(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke102(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke102(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke112(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke112(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke122(object *QObject, returnValue QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke122(this.h, object.cPointer(), returnValue.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke33(object *QObject, connectionType uintptr, val0 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke33(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke43(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke43(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke53(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke53(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke63(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke63(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke73(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke73(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke83(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke83(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke93(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke93(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke103(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke103(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke113(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke113(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke123(object *QObject, connectionType uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke123(this.h, object.cPointer(), (C.uintptr_t)(connectionType), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke22(object *QObject, val0 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke22(this.h, object.cPointer(), val0.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke34(object *QObject, val0 QGenericArgument, val1 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke34(this.h, object.cPointer(), val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke44(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke44(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke54(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke54(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke64(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke64(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke74(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke74(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke84(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke84(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke94(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke94(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke104(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke104(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Invoke114(object *QObject, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	ret := C.QMetaMethod_Invoke114(this.h, object.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func (this *QMetaMethod) Delete() {
	C.QMetaMethod_Delete(this.h)
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

func newQMetaEnum(h *C.QMetaEnum) *QMetaEnum {
	if h == nil {
		return nil
	}
	return &QMetaEnum{h: h}
}

func newQMetaEnum_U(h unsafe.Pointer) *QMetaEnum {
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

func (this *QMetaEnum) Name() unsafe.Pointer {
	ret := C.QMetaEnum_Name(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaEnum) EnumName() unsafe.Pointer {
	ret := C.QMetaEnum_EnumName(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaEnum) IsFlag() bool {
	ret := C.QMetaEnum_IsFlag(this.h)
	return (bool)(ret)
}

func (this *QMetaEnum) IsScoped() bool {
	ret := C.QMetaEnum_IsScoped(this.h)
	return (bool)(ret)
}

func (this *QMetaEnum) KeyCount() int {
	ret := C.QMetaEnum_KeyCount(this.h)
	return (int)(ret)
}

func (this *QMetaEnum) Key(index int) unsafe.Pointer {
	ret := C.QMetaEnum_Key(this.h, (C.int)(index))
	return (unsafe.Pointer)(ret)
}

func (this *QMetaEnum) Value(index int) int {
	ret := C.QMetaEnum_Value(this.h, (C.int)(index))
	return (int)(ret)
}

func (this *QMetaEnum) Scope() unsafe.Pointer {
	ret := C.QMetaEnum_Scope(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaEnum) KeyToValue(key string) int {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QMetaEnum_KeyToValue(this.h, key_Cstring)
	return (int)(ret)
}

func (this *QMetaEnum) ValueToKey(value int) unsafe.Pointer {
	ret := C.QMetaEnum_ValueToKey(this.h, (C.int)(value))
	return (unsafe.Pointer)(ret)
}

func (this *QMetaEnum) KeysToValue(keys string) int {
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	ret := C.QMetaEnum_KeysToValue(this.h, keys_Cstring)
	return (int)(ret)
}

func (this *QMetaEnum) ValueToKeys(value int) *QByteArray {
	ret := C.QMetaEnum_ValueToKeys(this.h, (C.int)(value))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaEnum) EnclosingMetaObject() *QMetaObject {
	ret := C.QMetaEnum_EnclosingMetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QMetaEnum) IsValid() bool {
	ret := C.QMetaEnum_IsValid(this.h)
	return (bool)(ret)
}

func (this *QMetaEnum) KeyToValue2(key string, ok *bool) int {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QMetaEnum_KeyToValue2(this.h, key_Cstring, (*C.bool)(unsafe.Pointer(ok)))
	return (int)(ret)
}

func (this *QMetaEnum) KeysToValue2(keys string, ok *bool) int {
	keys_Cstring := C.CString(keys)
	defer C.free(unsafe.Pointer(keys_Cstring))
	ret := C.QMetaEnum_KeysToValue2(this.h, keys_Cstring, (*C.bool)(unsafe.Pointer(ok)))
	return (int)(ret)
}

func (this *QMetaEnum) Delete() {
	C.QMetaEnum_Delete(this.h)
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

func newQMetaProperty(h *C.QMetaProperty) *QMetaProperty {
	if h == nil {
		return nil
	}
	return &QMetaProperty{h: h}
}

func newQMetaProperty_U(h unsafe.Pointer) *QMetaProperty {
	return newQMetaProperty((*C.QMetaProperty)(h))
}

// NewQMetaProperty constructs a new QMetaProperty object.
func NewQMetaProperty() *QMetaProperty {
	ret := C.QMetaProperty_new()
	return newQMetaProperty(ret)
}

func (this *QMetaProperty) Name() unsafe.Pointer {
	ret := C.QMetaProperty_Name(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaProperty) TypeName() unsafe.Pointer {
	ret := C.QMetaProperty_TypeName(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaProperty) Type() uintptr {
	ret := C.QMetaProperty_Type(this.h)
	return (uintptr)(ret)
}

func (this *QMetaProperty) UserType() int {
	ret := C.QMetaProperty_UserType(this.h)
	return (int)(ret)
}

func (this *QMetaProperty) PropertyIndex() int {
	ret := C.QMetaProperty_PropertyIndex(this.h)
	return (int)(ret)
}

func (this *QMetaProperty) RelativePropertyIndex() int {
	ret := C.QMetaProperty_RelativePropertyIndex(this.h)
	return (int)(ret)
}

func (this *QMetaProperty) IsReadable() bool {
	ret := C.QMetaProperty_IsReadable(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsWritable() bool {
	ret := C.QMetaProperty_IsWritable(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsResettable() bool {
	ret := C.QMetaProperty_IsResettable(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsDesignable() bool {
	ret := C.QMetaProperty_IsDesignable(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsScriptable() bool {
	ret := C.QMetaProperty_IsScriptable(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsStored() bool {
	ret := C.QMetaProperty_IsStored(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsEditable() bool {
	ret := C.QMetaProperty_IsEditable(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsUser() bool {
	ret := C.QMetaProperty_IsUser(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsConstant() bool {
	ret := C.QMetaProperty_IsConstant(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsFinal() bool {
	ret := C.QMetaProperty_IsFinal(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsRequired() bool {
	ret := C.QMetaProperty_IsRequired(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsFlagType() bool {
	ret := C.QMetaProperty_IsFlagType(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsEnumType() bool {
	ret := C.QMetaProperty_IsEnumType(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) Enumerator() *QMetaEnum {
	ret := C.QMetaProperty_Enumerator(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaEnum(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaEnum) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaProperty) HasNotifySignal() bool {
	ret := C.QMetaProperty_HasNotifySignal(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) NotifySignal() *QMetaMethod {
	ret := C.QMetaProperty_NotifySignal(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaMethod(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaMethod) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaProperty) NotifySignalIndex() int {
	ret := C.QMetaProperty_NotifySignalIndex(this.h)
	return (int)(ret)
}

func (this *QMetaProperty) Revision() int {
	ret := C.QMetaProperty_Revision(this.h)
	return (int)(ret)
}

func (this *QMetaProperty) Read(obj *QObject) *QVariant {
	ret := C.QMetaProperty_Read(this.h, obj.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaProperty) Write(obj *QObject, value *QVariant) bool {
	ret := C.QMetaProperty_Write(this.h, obj.cPointer(), value.cPointer())
	return (bool)(ret)
}

func (this *QMetaProperty) Reset(obj *QObject) bool {
	ret := C.QMetaProperty_Reset(this.h, obj.cPointer())
	return (bool)(ret)
}

func (this *QMetaProperty) HasStdCppSet() bool {
	ret := C.QMetaProperty_HasStdCppSet(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) IsValid() bool {
	ret := C.QMetaProperty_IsValid(this.h)
	return (bool)(ret)
}

func (this *QMetaProperty) EnclosingMetaObject() *QMetaObject {
	ret := C.QMetaProperty_EnclosingMetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QMetaProperty) IsDesignable1(obj *QObject) bool {
	ret := C.QMetaProperty_IsDesignable1(this.h, obj.cPointer())
	return (bool)(ret)
}

func (this *QMetaProperty) IsScriptable1(obj *QObject) bool {
	ret := C.QMetaProperty_IsScriptable1(this.h, obj.cPointer())
	return (bool)(ret)
}

func (this *QMetaProperty) IsStored1(obj *QObject) bool {
	ret := C.QMetaProperty_IsStored1(this.h, obj.cPointer())
	return (bool)(ret)
}

func (this *QMetaProperty) IsEditable1(obj *QObject) bool {
	ret := C.QMetaProperty_IsEditable1(this.h, obj.cPointer())
	return (bool)(ret)
}

func (this *QMetaProperty) IsUser1(obj *QObject) bool {
	ret := C.QMetaProperty_IsUser1(this.h, obj.cPointer())
	return (bool)(ret)
}

func (this *QMetaProperty) Delete() {
	C.QMetaProperty_Delete(this.h)
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

func newQMetaClassInfo(h *C.QMetaClassInfo) *QMetaClassInfo {
	if h == nil {
		return nil
	}
	return &QMetaClassInfo{h: h}
}

func newQMetaClassInfo_U(h unsafe.Pointer) *QMetaClassInfo {
	return newQMetaClassInfo((*C.QMetaClassInfo)(h))
}

// NewQMetaClassInfo constructs a new QMetaClassInfo object.
func NewQMetaClassInfo() *QMetaClassInfo {
	ret := C.QMetaClassInfo_new()
	return newQMetaClassInfo(ret)
}

func (this *QMetaClassInfo) Name() unsafe.Pointer {
	ret := C.QMetaClassInfo_Name(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaClassInfo) Value() unsafe.Pointer {
	ret := C.QMetaClassInfo_Value(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaClassInfo) EnclosingMetaObject() *QMetaObject {
	ret := C.QMetaClassInfo_EnclosingMetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QMetaClassInfo) Delete() {
	C.QMetaClassInfo_Delete(this.h)
}

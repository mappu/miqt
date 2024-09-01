package qt

/*

#include "gen_qobjectdefs.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGenericArgument struct {
	h *C.QGenericArgument
}

func (this *QGenericArgument) cPointer() *C.QGenericArgument {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGenericArgument(h *C.QGenericArgument) *QGenericArgument {
	if h == nil {
		return nil
	}
	return &QGenericArgument{h: h}
}

func newQGenericArgument_U(h unsafe.Pointer) *QGenericArgument {
	return newQGenericArgument((*C.QGenericArgument)(h))
}

// NewQGenericArgument constructs a new QGenericArgument object.
func NewQGenericArgument() *QGenericArgument {
	ret := C.QGenericArgument_new()
	return newQGenericArgument(ret)
}

// NewQGenericArgument2 constructs a new QGenericArgument object.
func NewQGenericArgument2(param1 *QGenericArgument) *QGenericArgument {
	ret := C.QGenericArgument_new2(param1.cPointer())
	return newQGenericArgument(ret)
}

// NewQGenericArgument3 constructs a new QGenericArgument object.
func NewQGenericArgument3(aName string) *QGenericArgument {
	aName_Cstring := C.CString(aName)
	defer C.free(unsafe.Pointer(aName_Cstring))
	ret := C.QGenericArgument_new3(aName_Cstring)
	return newQGenericArgument(ret)
}

func (this *QGenericArgument) Name() unsafe.Pointer {
	ret := C.QGenericArgument_Name(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QGenericArgument) Delete() {
	C.QGenericArgument_Delete(this.h)
}

type QGenericReturnArgument struct {
	h *C.QGenericReturnArgument
	*QGenericArgument
}

func (this *QGenericReturnArgument) cPointer() *C.QGenericReturnArgument {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGenericReturnArgument(h *C.QGenericReturnArgument) *QGenericReturnArgument {
	if h == nil {
		return nil
	}
	return &QGenericReturnArgument{h: h, QGenericArgument: newQGenericArgument_U(unsafe.Pointer(h))}
}

func newQGenericReturnArgument_U(h unsafe.Pointer) *QGenericReturnArgument {
	return newQGenericReturnArgument((*C.QGenericReturnArgument)(h))
}

// NewQGenericReturnArgument constructs a new QGenericReturnArgument object.
func NewQGenericReturnArgument() *QGenericReturnArgument {
	ret := C.QGenericReturnArgument_new()
	return newQGenericReturnArgument(ret)
}

// NewQGenericReturnArgument2 constructs a new QGenericReturnArgument object.
func NewQGenericReturnArgument2(param1 *QGenericReturnArgument) *QGenericReturnArgument {
	ret := C.QGenericReturnArgument_new2(param1.cPointer())
	return newQGenericReturnArgument(ret)
}

// NewQGenericReturnArgument3 constructs a new QGenericReturnArgument object.
func NewQGenericReturnArgument3(aName string) *QGenericReturnArgument {
	aName_Cstring := C.CString(aName)
	defer C.free(unsafe.Pointer(aName_Cstring))
	ret := C.QGenericReturnArgument_new3(aName_Cstring)
	return newQGenericReturnArgument(ret)
}

func (this *QGenericReturnArgument) Delete() {
	C.QGenericReturnArgument_Delete(this.h)
}

type QMetaObject struct {
	h *C.QMetaObject
}

func (this *QMetaObject) cPointer() *C.QMetaObject {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMetaObject(h *C.QMetaObject) *QMetaObject {
	if h == nil {
		return nil
	}
	return &QMetaObject{h: h}
}

func newQMetaObject_U(h unsafe.Pointer) *QMetaObject {
	return newQMetaObject((*C.QMetaObject)(h))
}

// NewQMetaObject constructs a new QMetaObject object.
func NewQMetaObject() *QMetaObject {
	ret := C.QMetaObject_new()
	return newQMetaObject(ret)
}

// NewQMetaObject2 constructs a new QMetaObject object.
func NewQMetaObject2(param1 *QMetaObject) *QMetaObject {
	ret := C.QMetaObject_new2(param1.cPointer())
	return newQMetaObject(ret)
}

func (this *QMetaObject) ClassName() unsafe.Pointer {
	ret := C.QMetaObject_ClassName(this.h)
	return (unsafe.Pointer)(ret)
}

func (this *QMetaObject) SuperClass() *QMetaObject {
	ret := C.QMetaObject_SuperClass(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) Inherits(metaObject *QMetaObject) bool {
	ret := C.QMetaObject_Inherits(this.h, metaObject.cPointer())
	return (bool)(ret)
}

func (this *QMetaObject) Cast(obj *QObject) *QObject {
	ret := C.QMetaObject_Cast(this.h, obj.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) CastWithObj(obj *QObject) *QObject {
	ret := C.QMetaObject_CastWithObj(this.h, obj.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) Tr(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMetaObject_Tr(this.h, s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMetaObject) MethodOffset() int {
	ret := C.QMetaObject_MethodOffset(this.h)
	return (int)(ret)
}

func (this *QMetaObject) EnumeratorOffset() int {
	ret := C.QMetaObject_EnumeratorOffset(this.h)
	return (int)(ret)
}

func (this *QMetaObject) PropertyOffset() int {
	ret := C.QMetaObject_PropertyOffset(this.h)
	return (int)(ret)
}

func (this *QMetaObject) ClassInfoOffset() int {
	ret := C.QMetaObject_ClassInfoOffset(this.h)
	return (int)(ret)
}

func (this *QMetaObject) ConstructorCount() int {
	ret := C.QMetaObject_ConstructorCount(this.h)
	return (int)(ret)
}

func (this *QMetaObject) MethodCount() int {
	ret := C.QMetaObject_MethodCount(this.h)
	return (int)(ret)
}

func (this *QMetaObject) EnumeratorCount() int {
	ret := C.QMetaObject_EnumeratorCount(this.h)
	return (int)(ret)
}

func (this *QMetaObject) PropertyCount() int {
	ret := C.QMetaObject_PropertyCount(this.h)
	return (int)(ret)
}

func (this *QMetaObject) ClassInfoCount() int {
	ret := C.QMetaObject_ClassInfoCount(this.h)
	return (int)(ret)
}

func (this *QMetaObject) IndexOfConstructor(constructor string) int {
	constructor_Cstring := C.CString(constructor)
	defer C.free(unsafe.Pointer(constructor_Cstring))
	ret := C.QMetaObject_IndexOfConstructor(this.h, constructor_Cstring)
	return (int)(ret)
}

func (this *QMetaObject) IndexOfMethod(method string) int {
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	ret := C.QMetaObject_IndexOfMethod(this.h, method_Cstring)
	return (int)(ret)
}

func (this *QMetaObject) IndexOfSignal(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	ret := C.QMetaObject_IndexOfSignal(this.h, signal_Cstring)
	return (int)(ret)
}

func (this *QMetaObject) IndexOfSlot(slot string) int {
	slot_Cstring := C.CString(slot)
	defer C.free(unsafe.Pointer(slot_Cstring))
	ret := C.QMetaObject_IndexOfSlot(this.h, slot_Cstring)
	return (int)(ret)
}

func (this *QMetaObject) IndexOfEnumerator(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QMetaObject_IndexOfEnumerator(this.h, name_Cstring)
	return (int)(ret)
}

func (this *QMetaObject) IndexOfProperty(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QMetaObject_IndexOfProperty(this.h, name_Cstring)
	return (int)(ret)
}

func (this *QMetaObject) IndexOfClassInfo(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QMetaObject_IndexOfClassInfo(this.h, name_Cstring)
	return (int)(ret)
}

func (this *QMetaObject) Constructor(index int) *QMetaMethod {
	ret := C.QMetaObject_Constructor(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaMethod(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaMethod) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaObject) Method(index int) *QMetaMethod {
	ret := C.QMetaObject_Method(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaMethod(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaMethod) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaObject) Enumerator(index int) *QMetaEnum {
	ret := C.QMetaObject_Enumerator(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaEnum(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaEnum) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaObject) Property(index int) *QMetaProperty {
	ret := C.QMetaObject_Property(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaProperty(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaProperty) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaObject) ClassInfo(index int) *QMetaClassInfo {
	ret := C.QMetaObject_ClassInfo(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaClassInfo(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaClassInfo) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMetaObject) UserProperty() *QMetaProperty {
	ret := C.QMetaObject_UserProperty(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaProperty(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaProperty) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QMetaObject_CheckConnectArgs(signal string, method string) bool {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	ret := C.QMetaObject_CheckConnectArgs(signal_Cstring, method_Cstring)
	return (bool)(ret)
}

func QMetaObject_CheckConnectArgs2(signal *QMetaMethod, method *QMetaMethod) bool {
	ret := C.QMetaObject_CheckConnectArgs2(signal.cPointer(), method.cPointer())
	return (bool)(ret)
}

func QMetaObject_NormalizedSignature(method string) *QByteArray {
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	ret := C.QMetaObject_NormalizedSignature(method_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QMetaObject_NormalizedType(typeVal string) *QByteArray {
	typeVal_Cstring := C.CString(typeVal)
	defer C.free(unsafe.Pointer(typeVal_Cstring))
	ret := C.QMetaObject_NormalizedType(typeVal_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QMetaObject_Connect(sender *QObject, signal_index int, receiver *QObject, method_index int) *QMetaObject__Connection {
	ret := C.QMetaObject_Connect(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaObject__Connection(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaObject__Connection) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QMetaObject_Disconnect(sender *QObject, signal_index int, receiver *QObject, method_index int) bool {
	ret := C.QMetaObject_Disconnect(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index))
	return (bool)(ret)
}

func QMetaObject_DisconnectOne(sender *QObject, signal_index int, receiver *QObject, method_index int) bool {
	ret := C.QMetaObject_DisconnectOne(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index))
	return (bool)(ret)
}

func QMetaObject_ConnectSlotsByName(o *QObject) {
	C.QMetaObject_ConnectSlotsByName(o.cPointer())
}

func QMetaObject_InvokeMethod(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod2(obj *QObject, member string, retVal QGenericReturnArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod2(obj.cPointer(), member_Cstring, retVal.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod3(obj *QObject, member string, typeVal uintptr) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod3(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal))
	return (bool)(ret)
}

func QMetaObject_InvokeMethod4(obj *QObject, member string) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod4(obj.cPointer(), member_Cstring)
	return (bool)(ret)
}

func (this *QMetaObject) NewInstance() *QObject {
	ret := C.QMetaObject_NewInstance(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMetaObject_Tr3(this.h, s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMetaObject_Connect5(sender *QObject, signal_index int, receiver *QObject, method_index int, typeVal int) *QMetaObject__Connection {
	ret := C.QMetaObject_Connect5(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index), (C.int)(typeVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaObject__Connection(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaObject__Connection) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QMetaObject_Connect6(sender *QObject, signal_index int, receiver *QObject, method_index int, typeVal int, types *int) *QMetaObject__Connection {
	ret := C.QMetaObject_Connect6(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index), (C.int)(typeVal), (*C.int)(unsafe.Pointer(types)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaObject__Connection(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaObject__Connection) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QMetaObject_InvokeMethod5(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod5(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod6(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod6(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod7(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod7(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod8(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod8(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod9(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod9(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod10(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod10(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod11(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod11(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod12(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod12(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod13(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod13(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod14(obj *QObject, member string, param3 uintptr, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod14(obj.cPointer(), member_Cstring, (C.uintptr_t)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod42(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod42(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod52(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod52(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod62(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod62(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod72(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod72(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod82(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod82(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod92(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod92(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod102(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod102(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod112(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod112(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod122(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod122(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod132(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod132(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod43(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod43(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod53(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod53(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod63(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod63(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod73(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod73(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod83(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod83(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod93(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod93(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod103(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod103(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod113(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod113(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod123(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod123(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod133(obj *QObject, member string, typeVal uintptr, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod133(obj.cPointer(), member_Cstring, (C.uintptr_t)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod32(obj *QObject, member string, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod32(obj.cPointer(), member_Cstring, val0.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod44(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod44(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod54(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod54(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod64(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod64(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod74(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod74(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod84(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod84(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod94(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod94(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod104(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod104(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod114(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod114(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return (bool)(ret)
}

func QMetaObject_InvokeMethod124(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QMetaObject_InvokeMethod124(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return (bool)(ret)
}

func (this *QMetaObject) NewInstance1(val0 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance1(this.h, val0.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance2(val0 QGenericArgument, val1 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance2(this.h, val0.cPointer(), val1.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance3(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance3(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance4(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance4(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance5(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance5(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance6(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance6(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance7(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance7(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance8(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance8(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance9(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance9(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) NewInstance10(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) *QObject {
	ret := C.QMetaObject_NewInstance10(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer())
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject) Delete() {
	C.QMetaObject_Delete(this.h)
}

type QMetaObject__Connection struct {
	h *C.QMetaObject__Connection
}

func (this *QMetaObject__Connection) cPointer() *C.QMetaObject__Connection {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMetaObject__Connection(h *C.QMetaObject__Connection) *QMetaObject__Connection {
	if h == nil {
		return nil
	}
	return &QMetaObject__Connection{h: h}
}

func newQMetaObject__Connection_U(h unsafe.Pointer) *QMetaObject__Connection {
	return newQMetaObject__Connection((*C.QMetaObject__Connection)(h))
}

// NewQMetaObject__Connection constructs a new QMetaObject::Connection object.
func NewQMetaObject__Connection() *QMetaObject__Connection {
	ret := C.QMetaObject__Connection_new()
	return newQMetaObject__Connection(ret)
}

// NewQMetaObject__Connection2 constructs a new QMetaObject::Connection object.
func NewQMetaObject__Connection2(other *QMetaObject__Connection) *QMetaObject__Connection {
	ret := C.QMetaObject__Connection_new2(other.cPointer())
	return newQMetaObject__Connection(ret)
}

func (this *QMetaObject__Connection) Delete() {
	C.QMetaObject__Connection_Delete(this.h)
}

type QMetaObject__SuperData struct {
	h *C.QMetaObject__SuperData
}

func (this *QMetaObject__SuperData) cPointer() *C.QMetaObject__SuperData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMetaObject__SuperData(h *C.QMetaObject__SuperData) *QMetaObject__SuperData {
	if h == nil {
		return nil
	}
	return &QMetaObject__SuperData{h: h}
}

func newQMetaObject__SuperData_U(h unsafe.Pointer) *QMetaObject__SuperData {
	return newQMetaObject__SuperData((*C.QMetaObject__SuperData)(h))
}

// NewQMetaObject__SuperData constructs a new QMetaObject::SuperData object.
func NewQMetaObject__SuperData() *QMetaObject__SuperData {
	ret := C.QMetaObject__SuperData_new()
	return newQMetaObject__SuperData(ret)
}

// NewQMetaObject__SuperData2 constructs a new QMetaObject::SuperData object.
func NewQMetaObject__SuperData2(mo *QMetaObject) *QMetaObject__SuperData {
	ret := C.QMetaObject__SuperData_new2(mo.cPointer())
	return newQMetaObject__SuperData(ret)
}

// NewQMetaObject__SuperData3 constructs a new QMetaObject::SuperData object.
func NewQMetaObject__SuperData3(param1 *QMetaObject__SuperData) *QMetaObject__SuperData {
	ret := C.QMetaObject__SuperData_new3(param1.cPointer())
	return newQMetaObject__SuperData(ret)
}

func (this *QMetaObject__SuperData) OperatorMinusGreater() *QMetaObject {
	ret := C.QMetaObject__SuperData_OperatorMinusGreater(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QMetaObject__SuperData) Delete() {
	C.QMetaObject__SuperData_Delete(this.h)
}

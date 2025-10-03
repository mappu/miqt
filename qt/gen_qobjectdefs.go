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

type QMetaObject__Call int

const (
	QMetaObject__InvokeMetaMethod               QMetaObject__Call = 0
	QMetaObject__ReadProperty                   QMetaObject__Call = 1
	QMetaObject__WriteProperty                  QMetaObject__Call = 2
	QMetaObject__ResetProperty                  QMetaObject__Call = 3
	QMetaObject__QueryPropertyDesignable        QMetaObject__Call = 4
	QMetaObject__QueryPropertyScriptable        QMetaObject__Call = 5
	QMetaObject__QueryPropertyStored            QMetaObject__Call = 6
	QMetaObject__QueryPropertyEditable          QMetaObject__Call = 7
	QMetaObject__QueryPropertyUser              QMetaObject__Call = 8
	QMetaObject__CreateInstance                 QMetaObject__Call = 9
	QMetaObject__IndexOfMethod                  QMetaObject__Call = 10
	QMetaObject__RegisterPropertyMetaType       QMetaObject__Call = 11
	QMetaObject__RegisterMethodArgumentMetaType QMetaObject__Call = 12
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

func (this *QGenericArgument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGenericArgument constructs the type using only CGO pointers.
func newQGenericArgument(h *C.QGenericArgument) *QGenericArgument {
	if h == nil {
		return nil
	}

	return &QGenericArgument{h: h}
}

// UnsafeNewQGenericArgument constructs the type using only unsafe pointers.
func UnsafeNewQGenericArgument(h unsafe.Pointer) *QGenericArgument {
	return newQGenericArgument((*C.QGenericArgument)(h))
}

// NewQGenericArgument constructs a new QGenericArgument object.
func NewQGenericArgument() *QGenericArgument {

	return newQGenericArgument(C.QGenericArgument_new())
}

// NewQGenericArgument2 constructs a new QGenericArgument object.
func NewQGenericArgument2(param1 *QGenericArgument) *QGenericArgument {

	return newQGenericArgument(C.QGenericArgument_new2(param1.cPointer()))
}

// NewQGenericArgument3 constructs a new QGenericArgument object.
func NewQGenericArgument3(aName string) *QGenericArgument {
	aName_Cstring := C.CString(aName)
	defer C.free(unsafe.Pointer(aName_Cstring))

	return newQGenericArgument(C.QGenericArgument_new3(aName_Cstring))
}

// NewQGenericArgument4 constructs a new QGenericArgument object.
func NewQGenericArgument4(aName string, aData unsafe.Pointer) *QGenericArgument {
	aName_Cstring := C.CString(aName)
	defer C.free(unsafe.Pointer(aName_Cstring))

	return newQGenericArgument(C.QGenericArgument_new4(aName_Cstring, aData))
}

func (this *QGenericArgument) Data() unsafe.Pointer {
	return (unsafe.Pointer)(C.QGenericArgument_data(this.h))
}

func (this *QGenericArgument) Name() string {
	_ret := C.QGenericArgument_name(this.h)
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QGenericArgument) Delete() {
	C.QGenericArgument_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGenericArgument) GoGC() {
	runtime.SetFinalizer(this, func(this *QGenericArgument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QGenericReturnArgument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGenericReturnArgument constructs the type using only CGO pointers.
func newQGenericReturnArgument(h *C.QGenericReturnArgument) *QGenericReturnArgument {
	if h == nil {
		return nil
	}
	var outptr_QGenericArgument *C.QGenericArgument = nil
	C.QGenericReturnArgument_virtbase(h, &outptr_QGenericArgument)

	return &QGenericReturnArgument{h: h,
		QGenericArgument: newQGenericArgument(outptr_QGenericArgument)}
}

// UnsafeNewQGenericReturnArgument constructs the type using only unsafe pointers.
func UnsafeNewQGenericReturnArgument(h unsafe.Pointer) *QGenericReturnArgument {
	return newQGenericReturnArgument((*C.QGenericReturnArgument)(h))
}

// NewQGenericReturnArgument constructs a new QGenericReturnArgument object.
func NewQGenericReturnArgument() *QGenericReturnArgument {

	return newQGenericReturnArgument(C.QGenericReturnArgument_new())
}

// NewQGenericReturnArgument2 constructs a new QGenericReturnArgument object.
func NewQGenericReturnArgument2(param1 *QGenericReturnArgument) *QGenericReturnArgument {

	return newQGenericReturnArgument(C.QGenericReturnArgument_new2(param1.cPointer()))
}

// NewQGenericReturnArgument3 constructs a new QGenericReturnArgument object.
func NewQGenericReturnArgument3(aName string) *QGenericReturnArgument {
	aName_Cstring := C.CString(aName)
	defer C.free(unsafe.Pointer(aName_Cstring))

	return newQGenericReturnArgument(C.QGenericReturnArgument_new3(aName_Cstring))
}

// NewQGenericReturnArgument4 constructs a new QGenericReturnArgument object.
func NewQGenericReturnArgument4(aName string, aData unsafe.Pointer) *QGenericReturnArgument {
	aName_Cstring := C.CString(aName)
	defer C.free(unsafe.Pointer(aName_Cstring))

	return newQGenericReturnArgument(C.QGenericReturnArgument_new4(aName_Cstring, aData))
}

// Delete this object from C++ memory.
func (this *QGenericReturnArgument) Delete() {
	C.QGenericReturnArgument_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGenericReturnArgument) GoGC() {
	runtime.SetFinalizer(this, func(this *QGenericReturnArgument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QMetaObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaObject constructs the type using only CGO pointers.
func newQMetaObject(h *C.QMetaObject) *QMetaObject {
	if h == nil {
		return nil
	}

	return &QMetaObject{h: h}
}

// UnsafeNewQMetaObject constructs the type using only unsafe pointers.
func UnsafeNewQMetaObject(h unsafe.Pointer) *QMetaObject {
	return newQMetaObject((*C.QMetaObject)(h))
}

// NewQMetaObject constructs a new QMetaObject object.
func NewQMetaObject() *QMetaObject {

	return newQMetaObject(C.QMetaObject_new())
}

// NewQMetaObject2 constructs a new QMetaObject object.
func NewQMetaObject2(param1 *QMetaObject) *QMetaObject {

	return newQMetaObject(C.QMetaObject_new2(param1.cPointer()))
}

func (this *QMetaObject) ClassName() string {
	_ret := C.QMetaObject_className(this.h)
	return C.GoString(_ret)
}

func (this *QMetaObject) SuperClass() *QMetaObject {
	return newQMetaObject(C.QMetaObject_superClass(this.h))
}

func (this *QMetaObject) Inherits(metaObject *QMetaObject) bool {
	return (bool)(C.QMetaObject_inherits(this.h, metaObject.cPointer()))
}

func (this *QMetaObject) Cast(obj *QObject) *QObject {
	return newQObject(C.QMetaObject_cast(this.h, obj.cPointer()))
}

func (this *QMetaObject) CastWithObj(obj *QObject) *QObject {
	return newQObject(C.QMetaObject_castWithObj(this.h, obj.cPointer()))
}

func (this *QMetaObject) Tr(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMetaObject_tr(this.h, s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMetaObject) MethodOffset() int {
	return (int)(C.QMetaObject_methodOffset(this.h))
}

func (this *QMetaObject) EnumeratorOffset() int {
	return (int)(C.QMetaObject_enumeratorOffset(this.h))
}

func (this *QMetaObject) PropertyOffset() int {
	return (int)(C.QMetaObject_propertyOffset(this.h))
}

func (this *QMetaObject) ClassInfoOffset() int {
	return (int)(C.QMetaObject_classInfoOffset(this.h))
}

func (this *QMetaObject) ConstructorCount() int {
	return (int)(C.QMetaObject_constructorCount(this.h))
}

func (this *QMetaObject) MethodCount() int {
	return (int)(C.QMetaObject_methodCount(this.h))
}

func (this *QMetaObject) EnumeratorCount() int {
	return (int)(C.QMetaObject_enumeratorCount(this.h))
}

func (this *QMetaObject) PropertyCount() int {
	return (int)(C.QMetaObject_propertyCount(this.h))
}

func (this *QMetaObject) ClassInfoCount() int {
	return (int)(C.QMetaObject_classInfoCount(this.h))
}

func (this *QMetaObject) IndexOfConstructor(constructor string) int {
	constructor_Cstring := C.CString(constructor)
	defer C.free(unsafe.Pointer(constructor_Cstring))
	return (int)(C.QMetaObject_indexOfConstructor(this.h, constructor_Cstring))
}

func (this *QMetaObject) IndexOfMethod(method string) int {
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	return (int)(C.QMetaObject_indexOfMethod(this.h, method_Cstring))
}

func (this *QMetaObject) IndexOfSignal(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	return (int)(C.QMetaObject_indexOfSignal(this.h, signal_Cstring))
}

func (this *QMetaObject) IndexOfSlot(slot string) int {
	slot_Cstring := C.CString(slot)
	defer C.free(unsafe.Pointer(slot_Cstring))
	return (int)(C.QMetaObject_indexOfSlot(this.h, slot_Cstring))
}

func (this *QMetaObject) IndexOfEnumerator(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return (int)(C.QMetaObject_indexOfEnumerator(this.h, name_Cstring))
}

func (this *QMetaObject) IndexOfProperty(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return (int)(C.QMetaObject_indexOfProperty(this.h, name_Cstring))
}

func (this *QMetaObject) IndexOfClassInfo(name string) int {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return (int)(C.QMetaObject_indexOfClassInfo(this.h, name_Cstring))
}

func (this *QMetaObject) Constructor(index int) *QMetaMethod {
	_goptr := newQMetaMethod(C.QMetaObject_constructor(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaObject) Method(index int) *QMetaMethod {
	_goptr := newQMetaMethod(C.QMetaObject_method(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaObject) Enumerator(index int) *QMetaEnum {
	_goptr := newQMetaEnum(C.QMetaObject_enumerator(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaObject) Property(index int) *QMetaProperty {
	_goptr := newQMetaProperty(C.QMetaObject_property(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaObject) ClassInfo(index int) *QMetaClassInfo {
	_goptr := newQMetaClassInfo(C.QMetaObject_classInfo(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMetaObject) UserProperty() *QMetaProperty {
	_goptr := newQMetaProperty(C.QMetaObject_userProperty(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMetaObject_CheckConnectArgs(signal string, method string) bool {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	return (bool)(C.QMetaObject_checkConnectArgs(signal_Cstring, method_Cstring))
}

func QMetaObject_CheckConnectArgs2(signal *QMetaMethod, method *QMetaMethod) bool {
	return (bool)(C.QMetaObject_checkConnectArgs2(signal.cPointer(), method.cPointer()))
}

func QMetaObject_NormalizedSignature(method string) []byte {
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	var _bytearray C.struct_miqt_string = C.QMetaObject_normalizedSignature(method_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QMetaObject_NormalizedType(typeVal string) []byte {
	typeVal_Cstring := C.CString(typeVal)
	defer C.free(unsafe.Pointer(typeVal_Cstring))
	var _bytearray C.struct_miqt_string = C.QMetaObject_normalizedType(typeVal_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QMetaObject_Connect(sender *QObject, signal_index int, receiver *QObject, method_index int) *QMetaObject__Connection {
	_goptr := newQMetaObject__Connection(C.QMetaObject_connect(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMetaObject_Disconnect(sender *QObject, signal_index int, receiver *QObject, method_index int) bool {
	return (bool)(C.QMetaObject_disconnect(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index)))
}

func QMetaObject_DisconnectOne(sender *QObject, signal_index int, receiver *QObject, method_index int) bool {
	return (bool)(C.QMetaObject_disconnectOne(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index)))
}

func QMetaObject_ConnectSlotsByName(o *QObject) {
	C.QMetaObject_connectSlotsByName(o.cPointer())
}

func QMetaObject_InvokeMethod(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer()))
}

func QMetaObject_InvokeMethod2(obj *QObject, member string, retVal QGenericReturnArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod2(obj.cPointer(), member_Cstring, retVal.cPointer()))
}

func QMetaObject_InvokeMethod3(obj *QObject, member string, typeVal ConnectionType) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod3(obj.cPointer(), member_Cstring, (C.int)(typeVal)))
}

func QMetaObject_InvokeMethod4(obj *QObject, member string) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod4(obj.cPointer(), member_Cstring))
}

func (this *QMetaObject) NewInstance() *QObject {
	return newQObject(C.QMetaObject_newInstance(this.h))
}

func (this *QMetaObject) OperatorAssign(param1 *QMetaObject) {
	C.QMetaObject_operatorAssign(this.h, param1.cPointer())
}

func (this *QMetaObject) Tr2(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMetaObject_tr2(this.h, s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMetaObject_Connect2(sender *QObject, signal_index int, receiver *QObject, method_index int, typeVal int) *QMetaObject__Connection {
	_goptr := newQMetaObject__Connection(C.QMetaObject_connect2(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index), (C.int)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMetaObject_Connect3(sender *QObject, signal_index int, receiver *QObject, method_index int, typeVal int, types *int) *QMetaObject__Connection {
	_goptr := newQMetaObject__Connection(C.QMetaObject_connect3(sender.cPointer(), (C.int)(signal_index), receiver.cPointer(), (C.int)(method_index), (C.int)(typeVal), (*C.int)(unsafe.Pointer(types))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QMetaObject_InvokeMethod5(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod5(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer()))
}

func QMetaObject_InvokeMethod6(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod6(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer()))
}

func QMetaObject_InvokeMethod7(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod7(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func QMetaObject_InvokeMethod8(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod8(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func QMetaObject_InvokeMethod9(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod9(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func QMetaObject_InvokeMethod10(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod10(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func QMetaObject_InvokeMethod11(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod11(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func QMetaObject_InvokeMethod12(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod12(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func QMetaObject_InvokeMethod13(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod13(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func QMetaObject_InvokeMethod14(obj *QObject, member string, param3 ConnectionType, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod14(obj.cPointer(), member_Cstring, (C.int)(param3), retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func QMetaObject_InvokeMethod15(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod15(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer()))
}

func QMetaObject_InvokeMethod16(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod16(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer()))
}

func QMetaObject_InvokeMethod17(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod17(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func QMetaObject_InvokeMethod18(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod18(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func QMetaObject_InvokeMethod19(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod19(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func QMetaObject_InvokeMethod20(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod20(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func QMetaObject_InvokeMethod21(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod21(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func QMetaObject_InvokeMethod22(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod22(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func QMetaObject_InvokeMethod23(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod23(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func QMetaObject_InvokeMethod24(obj *QObject, member string, retVal QGenericReturnArgument, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod24(obj.cPointer(), member_Cstring, retVal.cPointer(), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func QMetaObject_InvokeMethod25(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod25(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer()))
}

func QMetaObject_InvokeMethod26(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod26(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer()))
}

func QMetaObject_InvokeMethod27(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod27(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func QMetaObject_InvokeMethod28(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod28(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func QMetaObject_InvokeMethod29(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod29(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func QMetaObject_InvokeMethod30(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod30(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func QMetaObject_InvokeMethod31(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod31(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func QMetaObject_InvokeMethod32(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod32(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func QMetaObject_InvokeMethod33(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod33(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func QMetaObject_InvokeMethod34(obj *QObject, member string, typeVal ConnectionType, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod34(obj.cPointer(), member_Cstring, (C.int)(typeVal), val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func QMetaObject_InvokeMethod35(obj *QObject, member string, val0 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod35(obj.cPointer(), member_Cstring, val0.cPointer()))
}

func QMetaObject_InvokeMethod36(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod36(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer()))
}

func QMetaObject_InvokeMethod37(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod37(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func QMetaObject_InvokeMethod38(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod38(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func QMetaObject_InvokeMethod39(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod39(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func QMetaObject_InvokeMethod40(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod40(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func QMetaObject_InvokeMethod41(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod41(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func QMetaObject_InvokeMethod42(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod42(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func QMetaObject_InvokeMethod43(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod43(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func QMetaObject_InvokeMethod44(obj *QObject, member string, val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) bool {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	return (bool)(C.QMetaObject_invokeMethod44(obj.cPointer(), member_Cstring, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

func (this *QMetaObject) NewInstanceWithVal0(val0 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstanceWithVal0(this.h, val0.cPointer()))
}

func (this *QMetaObject) NewInstance2(val0 QGenericArgument, val1 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance2(this.h, val0.cPointer(), val1.cPointer()))
}

func (this *QMetaObject) NewInstance3(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance3(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer()))
}

func (this *QMetaObject) NewInstance4(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance4(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer()))
}

func (this *QMetaObject) NewInstance5(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance5(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer()))
}

func (this *QMetaObject) NewInstance6(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance6(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer()))
}

func (this *QMetaObject) NewInstance7(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance7(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer()))
}

func (this *QMetaObject) NewInstance8(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance8(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer()))
}

func (this *QMetaObject) NewInstance9(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance9(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer()))
}

func (this *QMetaObject) NewInstance10(val0 QGenericArgument, val1 QGenericArgument, val2 QGenericArgument, val3 QGenericArgument, val4 QGenericArgument, val5 QGenericArgument, val6 QGenericArgument, val7 QGenericArgument, val8 QGenericArgument, val9 QGenericArgument) *QObject {
	return newQObject(C.QMetaObject_newInstance10(this.h, val0.cPointer(), val1.cPointer(), val2.cPointer(), val3.cPointer(), val4.cPointer(), val5.cPointer(), val6.cPointer(), val7.cPointer(), val8.cPointer(), val9.cPointer()))
}

// Delete this object from C++ memory.
func (this *QMetaObject) Delete() {
	C.QMetaObject_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QMetaObject__Connection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaObject__Connection constructs the type using only CGO pointers.
func newQMetaObject__Connection(h *C.QMetaObject__Connection) *QMetaObject__Connection {
	if h == nil {
		return nil
	}

	return &QMetaObject__Connection{h: h}
}

// UnsafeNewQMetaObject__Connection constructs the type using only unsafe pointers.
func UnsafeNewQMetaObject__Connection(h unsafe.Pointer) *QMetaObject__Connection {
	return newQMetaObject__Connection((*C.QMetaObject__Connection)(h))
}

// NewQMetaObject__Connection constructs a new QMetaObject::Connection object.
func NewQMetaObject__Connection() *QMetaObject__Connection {

	return newQMetaObject__Connection(C.QMetaObject__Connection_new())
}

// NewQMetaObject__Connection2 constructs a new QMetaObject::Connection object.
func NewQMetaObject__Connection2(other *QMetaObject__Connection) *QMetaObject__Connection {

	return newQMetaObject__Connection(C.QMetaObject__Connection_new2(other.cPointer()))
}

func (this *QMetaObject__Connection) OperatorAssign(other *QMetaObject__Connection) {
	C.QMetaObject__Connection_operatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QMetaObject__Connection) Delete() {
	C.QMetaObject__Connection_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaObject__Connection) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaObject__Connection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QMetaObject__SuperData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMetaObject__SuperData constructs the type using only CGO pointers.
func newQMetaObject__SuperData(h *C.QMetaObject__SuperData) *QMetaObject__SuperData {
	if h == nil {
		return nil
	}

	return &QMetaObject__SuperData{h: h}
}

// UnsafeNewQMetaObject__SuperData constructs the type using only unsafe pointers.
func UnsafeNewQMetaObject__SuperData(h unsafe.Pointer) *QMetaObject__SuperData {
	return newQMetaObject__SuperData((*C.QMetaObject__SuperData)(h))
}

// NewQMetaObject__SuperData constructs a new QMetaObject::SuperData object.
func NewQMetaObject__SuperData() *QMetaObject__SuperData {

	return newQMetaObject__SuperData(C.QMetaObject__SuperData_new())
}

// NewQMetaObject__SuperData2 constructs a new QMetaObject::SuperData object.
func NewQMetaObject__SuperData2(mo *QMetaObject) *QMetaObject__SuperData {

	return newQMetaObject__SuperData(C.QMetaObject__SuperData_new2(mo.cPointer()))
}

// NewQMetaObject__SuperData3 constructs a new QMetaObject::SuperData object.
func NewQMetaObject__SuperData3(param1 *QMetaObject__SuperData) *QMetaObject__SuperData {

	return newQMetaObject__SuperData(C.QMetaObject__SuperData_new3(param1.cPointer()))
}

func (this *QMetaObject__SuperData) OperatorMinusGreater() *QMetaObject {
	return newQMetaObject(C.QMetaObject__SuperData_operatorMinusGreater(this.h))
}

func (this *QMetaObject__SuperData) ToConstQMetaObjectMultiply() *QMetaObject {
	return newQMetaObject(C.QMetaObject__SuperData_ToConstQMetaObjectMultiply(this.h))
}

func (this *QMetaObject__SuperData) OperatorAssign(param1 *QMetaObject__SuperData) {
	C.QMetaObject__SuperData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMetaObject__SuperData) Delete() {
	C.QMetaObject__SuperData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMetaObject__SuperData) GoGC() {
	runtime.SetFinalizer(this, func(this *QMetaObject__SuperData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

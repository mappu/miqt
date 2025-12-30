package scxml

/*

#include "gen_qscxmldatamodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScxmlDataModel struct {
	h *C.QScxmlDataModel
	*qt6.QObject
}

func (this *QScxmlDataModel) cPointer() *C.QScxmlDataModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlDataModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlDataModel constructs the type using only CGO pointers.
func newQScxmlDataModel(h *C.QScxmlDataModel) *QScxmlDataModel {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScxmlDataModel_virtbase(h, &outptr_QObject)

	return &QScxmlDataModel{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQScxmlDataModel constructs the type using only unsafe pointers.
func UnsafeNewQScxmlDataModel(h unsafe.Pointer) *QScxmlDataModel {
	return newQScxmlDataModel((*C.QScxmlDataModel)(h))
}

// NewQScxmlDataModel constructs a new QScxmlDataModel object.
func NewQScxmlDataModel() *QScxmlDataModel {

	return newQScxmlDataModel(C.QScxmlDataModel_new())
}

// NewQScxmlDataModel2 constructs a new QScxmlDataModel object.
func NewQScxmlDataModel2(parent *qt6.QObject) *QScxmlDataModel {

	return newQScxmlDataModel(C.QScxmlDataModel_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QScxmlDataModel) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScxmlDataModel_metaObject(this.h)))
}

func (this *QScxmlDataModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScxmlDataModel_metacast(this.h, param1_Cstring))
}

func QScxmlDataModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlDataModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlDataModel_CreateScxmlDataModel(pluginKey string) *QScxmlDataModel {
	pluginKey_ms := C.struct_miqt_string{}
	pluginKey_ms.data = C.CString(pluginKey)
	pluginKey_ms.len = C.size_t(len(pluginKey))
	defer C.free(unsafe.Pointer(pluginKey_ms.data))
	return newQScxmlDataModel(C.QScxmlDataModel_createScxmlDataModel(pluginKey_ms))
}

func (this *QScxmlDataModel) SetStateMachine(stateMachine *QScxmlStateMachine) {
	C.QScxmlDataModel_setStateMachine(this.h, stateMachine.cPointer())
}

func (this *QScxmlDataModel) StateMachine() *QScxmlStateMachine {
	return newQScxmlStateMachine(C.QScxmlDataModel_stateMachine(this.h))
}

func (this *QScxmlDataModel) Setup(initialDataValues map[string]qt6.QVariant) bool {
	initialDataValues_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(initialDataValues))))
	defer C.free(unsafe.Pointer(initialDataValues_Keys_CArray))
	initialDataValues_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(initialDataValues))))
	defer C.free(unsafe.Pointer(initialDataValues_Values_CArray))
	initialDataValues_ctr := 0
	for initialDataValues_k, initialDataValues_v := range initialDataValues {
		initialDataValues_k_ms := C.struct_miqt_string{}
		initialDataValues_k_ms.data = C.CString(initialDataValues_k)
		initialDataValues_k_ms.len = C.size_t(len(initialDataValues_k))
		defer C.free(unsafe.Pointer(initialDataValues_k_ms.data))
		initialDataValues_Keys_CArray[initialDataValues_ctr] = initialDataValues_k_ms
		initialDataValues_Values_CArray[initialDataValues_ctr] = (*C.QVariant)(initialDataValues_v.UnsafePointer())
		initialDataValues_ctr++
	}
	initialDataValues_mm := C.struct_miqt_map{
		len:    C.size_t(len(initialDataValues)),
		keys:   unsafe.Pointer(initialDataValues_Keys_CArray),
		values: unsafe.Pointer(initialDataValues_Values_CArray),
	}
	return (bool)(C.QScxmlDataModel_setup(this.h, initialDataValues_mm))
}

func (this *QScxmlDataModel) EvaluateToString(id int, ok *bool) string {
	var _ms C.struct_miqt_string = C.QScxmlDataModel_evaluateToString(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlDataModel) EvaluateToBool(id int, ok *bool) bool {
	return (bool)(C.QScxmlDataModel_evaluateToBool(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QScxmlDataModel) EvaluateToVariant(id int, ok *bool) *qt6.QVariant {
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QScxmlDataModel_evaluateToVariant(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlDataModel) EvaluateToVoid(id int, ok *bool) {
	C.QScxmlDataModel_evaluateToVoid(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))
}

func (this *QScxmlDataModel) EvaluateAssignment(id int, ok *bool) {
	C.QScxmlDataModel_evaluateAssignment(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))
}

func (this *QScxmlDataModel) EvaluateInitialization(id int, ok *bool) {
	C.QScxmlDataModel_evaluateInitialization(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))
}

func (this *QScxmlDataModel) EvaluateForeach(id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody) {
	C.QScxmlDataModel_evaluateForeach(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)), body.cPointer())
}

func (this *QScxmlDataModel) SetScxmlEvent(event *QScxmlEvent) {
	C.QScxmlDataModel_setScxmlEvent(this.h, event.cPointer())
}

func (this *QScxmlDataModel) ScxmlProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QScxmlDataModel_scxmlProperty(this.h, name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlDataModel) HasScxmlProperty(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QScxmlDataModel_hasScxmlProperty(this.h, name_ms))
}

func (this *QScxmlDataModel) SetScxmlProperty(name string, value *qt6.QVariant, context string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	context_ms := C.struct_miqt_string{}
	context_ms.data = C.CString(context)
	context_ms.len = C.size_t(len(context))
	defer C.free(unsafe.Pointer(context_ms.data))
	return (bool)(C.QScxmlDataModel_setScxmlProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()), context_ms))
}

func (this *QScxmlDataModel) StateMachineChanged(stateMachine *QScxmlStateMachine) {
	C.QScxmlDataModel_stateMachineChanged(this.h, stateMachine.cPointer())
}
func (this *QScxmlDataModel) OnStateMachineChanged(slot func(stateMachine *QScxmlStateMachine)) {
	C.QScxmlDataModel_connect_stateMachineChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlDataModel_stateMachineChanged
func miqt_exec_callback_QScxmlDataModel_stateMachineChanged(cb C.intptr_t, stateMachine *C.QScxmlStateMachine) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stateMachine *QScxmlStateMachine))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlStateMachine(stateMachine)

	gofunc(slotval1)
}

func QScxmlDataModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlDataModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlDataModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlDataModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScxmlDataModel that was directly constructed.
func (this *QScxmlDataModel) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScxmlDataModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScxmlDataModel that was directly constructed.
func (this *QScxmlDataModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlDataModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScxmlDataModel that was directly constructed.
func (this *QScxmlDataModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlDataModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScxmlDataModel that was directly constructed.
func (this *QScxmlDataModel) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScxmlDataModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QScxmlDataModel) OnSetup(slot func(initialDataValues map[string]qt6.QVariant) bool) {
	ok := C.QScxmlDataModel_override_virtual_setup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_setup
func miqt_exec_callback_QScxmlDataModel_setup(self *C.QScxmlDataModel, cb C.intptr_t, initialDataValues C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(initialDataValues map[string]qt6.QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var initialDataValues_mm C.struct_miqt_map = initialDataValues
	initialDataValues_ret := make(map[string]qt6.QVariant, int(initialDataValues_mm.len))
	initialDataValues_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(initialDataValues_mm.keys))
	initialDataValues_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(initialDataValues_mm.values))
	for i := 0; i < int(initialDataValues_mm.len); i++ {
		var initialDataValues_mapkey_ms C.struct_miqt_string = initialDataValues_Keys[i]
		initialDataValues_mapkey_ret := C.GoStringN(initialDataValues_mapkey_ms.data, C.int(int64(initialDataValues_mapkey_ms.len)))
		C.free(unsafe.Pointer(initialDataValues_mapkey_ms.data))
		initialDataValues_entry_Key := initialDataValues_mapkey_ret
		initialDataValues_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(initialDataValues_Values[i]))
		initialDataValues_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		initialDataValues_entry_Value := *initialDataValues_mapval_goptr

		initialDataValues_ret[initialDataValues_entry_Key] = initialDataValues_entry_Value
	}
	slotval1 := initialDataValues_ret

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QScxmlDataModel) OnEvaluateToString(slot func(id int, ok *bool) string) {
	ok := C.QScxmlDataModel_override_virtual_evaluateToString(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_evaluateToString
func miqt_exec_callback_QScxmlDataModel_evaluateToString(self *C.QScxmlDataModel, cb C.intptr_t, id C.int, ok *C.bool) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	virtualReturn := gofunc(slotval1, slotval2)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QScxmlDataModel) OnEvaluateToBool(slot func(id int, ok *bool) bool) {
	ok := C.QScxmlDataModel_override_virtual_evaluateToBool(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_evaluateToBool
func miqt_exec_callback_QScxmlDataModel_evaluateToBool(self *C.QScxmlDataModel, cb C.intptr_t, id C.int, ok *C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.bool)(virtualReturn)

}
func (this *QScxmlDataModel) OnEvaluateToVariant(slot func(id int, ok *bool) *qt6.QVariant) {
	ok := C.QScxmlDataModel_override_virtual_evaluateToVariant(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_evaluateToVariant
func miqt_exec_callback_QScxmlDataModel_evaluateToVariant(self *C.QScxmlDataModel, cb C.intptr_t, id C.int, ok *C.bool) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	virtualReturn := gofunc(slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}
func (this *QScxmlDataModel) OnEvaluateToVoid(slot func(id int, ok *bool)) {
	ok := C.QScxmlDataModel_override_virtual_evaluateToVoid(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_evaluateToVoid
func miqt_exec_callback_QScxmlDataModel_evaluateToVoid(self *C.QScxmlDataModel, cb C.intptr_t, id C.int, ok *C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	gofunc(slotval1, slotval2)

}
func (this *QScxmlDataModel) OnEvaluateAssignment(slot func(id int, ok *bool)) {
	ok := C.QScxmlDataModel_override_virtual_evaluateAssignment(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_evaluateAssignment
func miqt_exec_callback_QScxmlDataModel_evaluateAssignment(self *C.QScxmlDataModel, cb C.intptr_t, id C.int, ok *C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	gofunc(slotval1, slotval2)

}
func (this *QScxmlDataModel) OnEvaluateInitialization(slot func(id int, ok *bool)) {
	ok := C.QScxmlDataModel_override_virtual_evaluateInitialization(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_evaluateInitialization
func miqt_exec_callback_QScxmlDataModel_evaluateInitialization(self *C.QScxmlDataModel, cb C.intptr_t, id C.int, ok *C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	gofunc(slotval1, slotval2)

}
func (this *QScxmlDataModel) OnEvaluateForeach(slot func(id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody)) {
	ok := C.QScxmlDataModel_override_virtual_evaluateForeach(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_evaluateForeach
func miqt_exec_callback_QScxmlDataModel_evaluateForeach(self *C.QScxmlDataModel, cb C.intptr_t, id C.int, ok *C.bool, body *C.QScxmlDataModel__ForeachLoopBody) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	slotval3 := newQScxmlDataModel__ForeachLoopBody(body)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QScxmlDataModel) OnSetScxmlEvent(slot func(event *QScxmlEvent)) {
	ok := C.QScxmlDataModel_override_virtual_setScxmlEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_setScxmlEvent
func miqt_exec_callback_QScxmlDataModel_setScxmlEvent(self *C.QScxmlDataModel, cb C.intptr_t, event *C.QScxmlEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(event *QScxmlEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlEvent(event)

	gofunc(slotval1)

}
func (this *QScxmlDataModel) OnScxmlProperty(slot func(name string) *qt6.QVariant) {
	ok := C.QScxmlDataModel_override_virtual_scxmlProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_scxmlProperty
func miqt_exec_callback_QScxmlDataModel_scxmlProperty(self *C.QScxmlDataModel, cb C.intptr_t, name C.struct_miqt_string) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc(slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}
func (this *QScxmlDataModel) OnHasScxmlProperty(slot func(name string) bool) {
	ok := C.QScxmlDataModel_override_virtual_hasScxmlProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_hasScxmlProperty
func miqt_exec_callback_QScxmlDataModel_hasScxmlProperty(self *C.QScxmlDataModel, cb C.intptr_t, name C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QScxmlDataModel) OnSetScxmlProperty(slot func(name string, value *qt6.QVariant, context string) bool) {
	ok := C.QScxmlDataModel_override_virtual_setScxmlProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_setScxmlProperty
func miqt_exec_callback_QScxmlDataModel_setScxmlProperty(self *C.QScxmlDataModel, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant, context C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, value *qt6.QVariant, context string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	var context_ms C.struct_miqt_string = context
	context_ret := C.GoStringN(context_ms.data, C.int(int64(context_ms.len)))
	C.free(unsafe.Pointer(context_ms.data))
	slotval3 := context_ret

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlDataModel) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScxmlDataModel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlDataModel) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScxmlDataModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_event
func miqt_exec_callback_QScxmlDataModel_event(self *C.QScxmlDataModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlDataModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlDataModel) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScxmlDataModel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlDataModel) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScxmlDataModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_eventFilter
func miqt_exec_callback_QScxmlDataModel_eventFilter(self *C.QScxmlDataModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlDataModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlDataModel) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScxmlDataModel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScxmlDataModel) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScxmlDataModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_timerEvent
func miqt_exec_callback_QScxmlDataModel_timerEvent(self *C.QScxmlDataModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScxmlDataModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScxmlDataModel) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScxmlDataModel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScxmlDataModel) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScxmlDataModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_childEvent
func miqt_exec_callback_QScxmlDataModel_childEvent(self *C.QScxmlDataModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScxmlDataModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScxmlDataModel) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScxmlDataModel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScxmlDataModel) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScxmlDataModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_customEvent
func miqt_exec_callback_QScxmlDataModel_customEvent(self *C.QScxmlDataModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScxmlDataModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScxmlDataModel) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlDataModel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlDataModel) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlDataModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_connectNotify
func miqt_exec_callback_QScxmlDataModel_connectNotify(self *C.QScxmlDataModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlDataModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScxmlDataModel) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlDataModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlDataModel) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlDataModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel_disconnectNotify
func miqt_exec_callback_QScxmlDataModel_disconnectNotify(self *C.QScxmlDataModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlDataModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScxmlDataModel) Delete() {
	C.QScxmlDataModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlDataModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlDataModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlDataModel__ForeachLoopBody struct {
	h *C.QScxmlDataModel__ForeachLoopBody
}

func (this *QScxmlDataModel__ForeachLoopBody) cPointer() *C.QScxmlDataModel__ForeachLoopBody {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlDataModel__ForeachLoopBody) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlDataModel__ForeachLoopBody constructs the type using only CGO pointers.
func newQScxmlDataModel__ForeachLoopBody(h *C.QScxmlDataModel__ForeachLoopBody) *QScxmlDataModel__ForeachLoopBody {
	if h == nil {
		return nil
	}

	return &QScxmlDataModel__ForeachLoopBody{h: h}
}

// UnsafeNewQScxmlDataModel__ForeachLoopBody constructs the type using only unsafe pointers.
func UnsafeNewQScxmlDataModel__ForeachLoopBody(h unsafe.Pointer) *QScxmlDataModel__ForeachLoopBody {
	return newQScxmlDataModel__ForeachLoopBody((*C.QScxmlDataModel__ForeachLoopBody)(h))
}

// NewQScxmlDataModel__ForeachLoopBody constructs a new QScxmlDataModel::ForeachLoopBody object.
func NewQScxmlDataModel__ForeachLoopBody() *QScxmlDataModel__ForeachLoopBody {

	return newQScxmlDataModel__ForeachLoopBody(C.QScxmlDataModel__ForeachLoopBody_new())
}

func (this *QScxmlDataModel__ForeachLoopBody) Run(ok *bool) {
	C.QScxmlDataModel__ForeachLoopBody_run(this.h, (*C.bool)(unsafe.Pointer(ok)))
}
func (this *QScxmlDataModel__ForeachLoopBody) OnRun(slot func(ok *bool)) {
	ok := C.QScxmlDataModel__ForeachLoopBody_override_virtual_run(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlDataModel__ForeachLoopBody_run
func miqt_exec_callback_QScxmlDataModel__ForeachLoopBody_run(self *C.QScxmlDataModel__ForeachLoopBody, cb C.intptr_t, ok *C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ok *bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*bool)(unsafe.Pointer(ok))

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *QScxmlDataModel__ForeachLoopBody) Delete() {
	C.QScxmlDataModel__ForeachLoopBody_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlDataModel__ForeachLoopBody) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlDataModel__ForeachLoopBody) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

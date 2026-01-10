package scxml

/*

#include "gen_qscxmlcppdatamodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScxmlCppDataModel struct {
	h *C.QScxmlCppDataModel
	*QScxmlDataModel
}

func (this *QScxmlCppDataModel) cPointer() *C.QScxmlCppDataModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlCppDataModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlCppDataModel constructs the type using only CGO pointers.
func newQScxmlCppDataModel(h *C.QScxmlCppDataModel) *QScxmlCppDataModel {
	if h == nil {
		return nil
	}
	var outptr_QScxmlDataModel *C.QScxmlDataModel = nil
	C.QScxmlCppDataModel_virtbase(h, &outptr_QScxmlDataModel)

	return &QScxmlCppDataModel{h: h,
		QScxmlDataModel: newQScxmlDataModel(outptr_QScxmlDataModel)}
}

// UnsafeNewQScxmlCppDataModel constructs the type using only unsafe pointers.
func UnsafeNewQScxmlCppDataModel(h unsafe.Pointer) *QScxmlCppDataModel {
	return newQScxmlCppDataModel((*C.QScxmlCppDataModel)(h))
}

// NewQScxmlCppDataModel constructs a new QScxmlCppDataModel object.
func NewQScxmlCppDataModel() *QScxmlCppDataModel {

	return newQScxmlCppDataModel(C.QScxmlCppDataModel_new())
}

// NewQScxmlCppDataModel2 constructs a new QScxmlCppDataModel object.
func NewQScxmlCppDataModel2(parent *qt6.QObject) *QScxmlCppDataModel {

	return newQScxmlCppDataModel(C.QScxmlCppDataModel_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QScxmlCppDataModel) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScxmlCppDataModel_metaObject(this.h)))
}

func (this *QScxmlCppDataModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScxmlCppDataModel_metacast(this.h, param1_Cstring))
}

func QScxmlCppDataModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlCppDataModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlCppDataModel) Setup(initialDataValues map[string]qt6.QVariant) bool {
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
	return (bool)(C.QScxmlCppDataModel_setup(this.h, initialDataValues_mm))
}

func (this *QScxmlCppDataModel) EvaluateAssignment(id int, ok *bool) {
	C.QScxmlCppDataModel_evaluateAssignment(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))
}

func (this *QScxmlCppDataModel) EvaluateInitialization(id int, ok *bool) {
	C.QScxmlCppDataModel_evaluateInitialization(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))
}

func (this *QScxmlCppDataModel) EvaluateForeach(id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody) {
	C.QScxmlCppDataModel_evaluateForeach(this.h, (C.int)(id), (*C.bool)(unsafe.Pointer(ok)), body.cPointer())
}

func (this *QScxmlCppDataModel) SetScxmlEvent(scxmlEvent *QScxmlEvent) {
	C.QScxmlCppDataModel_setScxmlEvent(this.h, scxmlEvent.cPointer())
}

func (this *QScxmlCppDataModel) ScxmlEvent() *QScxmlEvent {
	return newQScxmlEvent(C.QScxmlCppDataModel_scxmlEvent(this.h))
}

func (this *QScxmlCppDataModel) ScxmlProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QScxmlCppDataModel_scxmlProperty(this.h, name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlCppDataModel) HasScxmlProperty(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QScxmlCppDataModel_hasScxmlProperty(this.h, name_ms))
}

func (this *QScxmlCppDataModel) SetScxmlProperty(name string, value *qt6.QVariant, context string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	context_ms := C.struct_miqt_string{}
	context_ms.data = C.CString(context)
	context_ms.len = C.size_t(len(context))
	defer C.free(unsafe.Pointer(context_ms.data))
	return (bool)(C.QScxmlCppDataModel_setScxmlProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()), context_ms))
}

func (this *QScxmlCppDataModel) InState(stateName string) bool {
	stateName_ms := C.struct_miqt_string{}
	stateName_ms.data = C.CString(stateName)
	stateName_ms.len = C.size_t(len(stateName))
	defer C.free(unsafe.Pointer(stateName_ms.data))
	return (bool)(C.QScxmlCppDataModel_inState(this.h, stateName_ms))
}

func QScxmlCppDataModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlCppDataModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlCppDataModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlCppDataModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QScxmlCppDataModel that was directly constructed.
func (this *QScxmlCppDataModel) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QScxmlCppDataModel_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QScxmlCppDataModel that was directly constructed.
func (this *QScxmlCppDataModel) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlCppDataModel_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QScxmlCppDataModel that was directly constructed.
func (this *QScxmlCppDataModel) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QScxmlCppDataModel_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QScxmlCppDataModel that was directly constructed.
func (this *QScxmlCppDataModel) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QScxmlCppDataModel_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QScxmlCppDataModel) callVirtualBase_Setup(initialDataValues map[string]qt6.QVariant) bool {
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

	return (bool)(C.QScxmlCppDataModel_virtualbase_setup(unsafe.Pointer(this.h), initialDataValues_mm))

}
func (this *QScxmlCppDataModel) OnSetup(slot func(super func(initialDataValues map[string]qt6.QVariant) bool, initialDataValues map[string]qt6.QVariant) bool) {
	ok := C.QScxmlCppDataModel_override_virtual_setup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_setup
func miqt_exec_callback_QScxmlCppDataModel_setup(self *C.QScxmlCppDataModel, cb C.intptr_t, initialDataValues C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(initialDataValues map[string]qt6.QVariant) bool, initialDataValues map[string]qt6.QVariant) bool)
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

	virtualReturn := gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_Setup, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlCppDataModel) callVirtualBase_EvaluateAssignment(id int, ok *bool) {

	C.QScxmlCppDataModel_virtualbase_evaluateAssignment(unsafe.Pointer(this.h), (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))

}
func (this *QScxmlCppDataModel) OnEvaluateAssignment(slot func(super func(id int, ok *bool), id int, ok *bool)) {
	ok := C.QScxmlCppDataModel_override_virtual_evaluateAssignment(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_evaluateAssignment
func miqt_exec_callback_QScxmlCppDataModel_evaluateAssignment(self *C.QScxmlCppDataModel, cb C.intptr_t, id C.int, ok *C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id int, ok *bool), id int, ok *bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_EvaluateAssignment, slotval1, slotval2)

}

func (this *QScxmlCppDataModel) callVirtualBase_EvaluateInitialization(id int, ok *bool) {

	C.QScxmlCppDataModel_virtualbase_evaluateInitialization(unsafe.Pointer(this.h), (C.int)(id), (*C.bool)(unsafe.Pointer(ok)))

}
func (this *QScxmlCppDataModel) OnEvaluateInitialization(slot func(super func(id int, ok *bool), id int, ok *bool)) {
	ok := C.QScxmlCppDataModel_override_virtual_evaluateInitialization(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_evaluateInitialization
func miqt_exec_callback_QScxmlCppDataModel_evaluateInitialization(self *C.QScxmlCppDataModel, cb C.intptr_t, id C.int, ok *C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id int, ok *bool), id int, ok *bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_EvaluateInitialization, slotval1, slotval2)

}

func (this *QScxmlCppDataModel) callVirtualBase_EvaluateForeach(id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody) {

	C.QScxmlCppDataModel_virtualbase_evaluateForeach(unsafe.Pointer(this.h), (C.int)(id), (*C.bool)(unsafe.Pointer(ok)), body.cPointer())

}
func (this *QScxmlCppDataModel) OnEvaluateForeach(slot func(super func(id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody), id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody)) {
	ok := C.QScxmlCppDataModel_override_virtual_evaluateForeach(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_evaluateForeach
func miqt_exec_callback_QScxmlCppDataModel_evaluateForeach(self *C.QScxmlCppDataModel, cb C.intptr_t, id C.int, ok *C.bool, body *C.QScxmlDataModel__ForeachLoopBody) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody), id int, ok *bool, body *QScxmlDataModel__ForeachLoopBody))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	slotval3 := newQScxmlDataModel__ForeachLoopBody(body)

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_EvaluateForeach, slotval1, slotval2, slotval3)

}

func (this *QScxmlCppDataModel) callVirtualBase_SetScxmlEvent(scxmlEvent *QScxmlEvent) {

	C.QScxmlCppDataModel_virtualbase_setScxmlEvent(unsafe.Pointer(this.h), scxmlEvent.cPointer())

}
func (this *QScxmlCppDataModel) OnSetScxmlEvent(slot func(super func(scxmlEvent *QScxmlEvent), scxmlEvent *QScxmlEvent)) {
	ok := C.QScxmlCppDataModel_override_virtual_setScxmlEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_setScxmlEvent
func miqt_exec_callback_QScxmlCppDataModel_setScxmlEvent(self *C.QScxmlCppDataModel, cb C.intptr_t, scxmlEvent *C.QScxmlEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(scxmlEvent *QScxmlEvent), scxmlEvent *QScxmlEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlEvent(scxmlEvent)

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_SetScxmlEvent, slotval1)

}

func (this *QScxmlCppDataModel) callVirtualBase_ScxmlProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QScxmlCppDataModel_virtualbase_scxmlProperty(unsafe.Pointer(this.h), name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QScxmlCppDataModel) OnScxmlProperty(slot func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant) {
	ok := C.QScxmlCppDataModel_override_virtual_scxmlProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_scxmlProperty
func miqt_exec_callback_QScxmlCppDataModel_scxmlProperty(self *C.QScxmlCppDataModel, cb C.intptr_t, name C.struct_miqt_string) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_ScxmlProperty, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QScxmlCppDataModel) callVirtualBase_HasScxmlProperty(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return (bool)(C.QScxmlCppDataModel_virtualbase_hasScxmlProperty(unsafe.Pointer(this.h), name_ms))

}
func (this *QScxmlCppDataModel) OnHasScxmlProperty(slot func(super func(name string) bool, name string) bool) {
	ok := C.QScxmlCppDataModel_override_virtual_hasScxmlProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_hasScxmlProperty
func miqt_exec_callback_QScxmlCppDataModel_hasScxmlProperty(self *C.QScxmlCppDataModel, cb C.intptr_t, name C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string) bool, name string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_HasScxmlProperty, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlCppDataModel) callVirtualBase_SetScxmlProperty(name string, value *qt6.QVariant, context string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	context_ms := C.struct_miqt_string{}
	context_ms.data = C.CString(context)
	context_ms.len = C.size_t(len(context))
	defer C.free(unsafe.Pointer(context_ms.data))

	return (bool)(C.QScxmlCppDataModel_virtualbase_setScxmlProperty(unsafe.Pointer(this.h), name_ms, (*C.QVariant)(value.UnsafePointer()), context_ms))

}
func (this *QScxmlCppDataModel) OnSetScxmlProperty(slot func(super func(name string, value *qt6.QVariant, context string) bool, name string, value *qt6.QVariant, context string) bool) {
	ok := C.QScxmlCppDataModel_override_virtual_setScxmlProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_setScxmlProperty
func miqt_exec_callback_QScxmlCppDataModel_setScxmlProperty(self *C.QScxmlCppDataModel, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant, context C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string, value *qt6.QVariant, context string) bool, name string, value *qt6.QVariant, context string) bool)
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

	virtualReturn := gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_SetScxmlProperty, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}
func (this *QScxmlCppDataModel) OnEvaluateToString(slot func(id int, ok *bool) string) {
	ok := C.QScxmlCppDataModel_override_virtual_evaluateToString(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_evaluateToString
func miqt_exec_callback_QScxmlCppDataModel_evaluateToString(self *C.QScxmlCppDataModel, cb C.intptr_t, id C.int, ok *C.bool) C.struct_miqt_string {
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
func (this *QScxmlCppDataModel) OnEvaluateToBool(slot func(id int, ok *bool) bool) {
	ok := C.QScxmlCppDataModel_override_virtual_evaluateToBool(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_evaluateToBool
func miqt_exec_callback_QScxmlCppDataModel_evaluateToBool(self *C.QScxmlCppDataModel, cb C.intptr_t, id C.int, ok *C.bool) C.bool {
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
func (this *QScxmlCppDataModel) OnEvaluateToVariant(slot func(id int, ok *bool) *qt6.QVariant) {
	ok := C.QScxmlCppDataModel_override_virtual_evaluateToVariant(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_evaluateToVariant
func miqt_exec_callback_QScxmlCppDataModel_evaluateToVariant(self *C.QScxmlCppDataModel, cb C.intptr_t, id C.int, ok *C.bool) *C.QVariant {
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
func (this *QScxmlCppDataModel) OnEvaluateToVoid(slot func(id int, ok *bool)) {
	ok := C.QScxmlCppDataModel_override_virtual_evaluateToVoid(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_evaluateToVoid
func miqt_exec_callback_QScxmlCppDataModel_evaluateToVoid(self *C.QScxmlCppDataModel, cb C.intptr_t, id C.int, ok *C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, ok *bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (*bool)(unsafe.Pointer(ok))

	gofunc(slotval1, slotval2)

}

func (this *QScxmlCppDataModel) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QScxmlCppDataModel_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlCppDataModel) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QScxmlCppDataModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_event
func miqt_exec_callback_QScxmlCppDataModel_event(self *C.QScxmlCppDataModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlCppDataModel) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QScxmlCppDataModel_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScxmlCppDataModel) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QScxmlCppDataModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_eventFilter
func miqt_exec_callback_QScxmlCppDataModel_eventFilter(self *C.QScxmlCppDataModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScxmlCppDataModel) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QScxmlCppDataModel_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScxmlCppDataModel) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QScxmlCppDataModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_timerEvent
func miqt_exec_callback_QScxmlCppDataModel_timerEvent(self *C.QScxmlCppDataModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScxmlCppDataModel) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QScxmlCppDataModel_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScxmlCppDataModel) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QScxmlCppDataModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_childEvent
func miqt_exec_callback_QScxmlCppDataModel_childEvent(self *C.QScxmlCppDataModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScxmlCppDataModel) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QScxmlCppDataModel_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScxmlCppDataModel) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QScxmlCppDataModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_customEvent
func miqt_exec_callback_QScxmlCppDataModel_customEvent(self *C.QScxmlCppDataModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScxmlCppDataModel) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlCppDataModel_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlCppDataModel) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlCppDataModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_connectNotify
func miqt_exec_callback_QScxmlCppDataModel_connectNotify(self *C.QScxmlCppDataModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScxmlCppDataModel) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QScxmlCppDataModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScxmlCppDataModel) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QScxmlCppDataModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScxmlCppDataModel_disconnectNotify
func miqt_exec_callback_QScxmlCppDataModel_disconnectNotify(self *C.QScxmlCppDataModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScxmlCppDataModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScxmlCppDataModel) Delete() {
	C.QScxmlCppDataModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlCppDataModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlCppDataModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

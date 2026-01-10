package scxml

/*

#include "gen_qscxmlstatemachine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScxmlStateMachine struct {
	h *C.QScxmlStateMachine
	*qt6.QObject
}

func (this *QScxmlStateMachine) cPointer() *C.QScxmlStateMachine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlStateMachine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlStateMachine constructs the type using only CGO pointers.
func newQScxmlStateMachine(h *C.QScxmlStateMachine) *QScxmlStateMachine {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScxmlStateMachine_virtbase(h, &outptr_QObject)

	return &QScxmlStateMachine{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQScxmlStateMachine constructs the type using only unsafe pointers.
func UnsafeNewQScxmlStateMachine(h unsafe.Pointer) *QScxmlStateMachine {
	return newQScxmlStateMachine((*C.QScxmlStateMachine)(h))
}

func (this *QScxmlStateMachine) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QScxmlStateMachine_metaObject(this.h)))
}

func (this *QScxmlStateMachine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScxmlStateMachine_metacast(this.h, param1_Cstring))
}

func QScxmlStateMachine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlStateMachine_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlStateMachine_FromFile(fileName string) *QScxmlStateMachine {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return newQScxmlStateMachine(C.QScxmlStateMachine_fromFile(fileName_ms))
}

func QScxmlStateMachine_FromData(data *qt6.QIODevice) *QScxmlStateMachine {
	return newQScxmlStateMachine(C.QScxmlStateMachine_fromData((*C.QIODevice)(data.UnsafePointer())))
}

func (this *QScxmlStateMachine) ParseErrors() []QScxmlError {
	var _ma C.struct_miqt_array = C.QScxmlStateMachine_parseErrors(this.h)
	_ret := make([]QScxmlError, int(_ma.len))
	_outCast := (*[0xffff]*C.QScxmlError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQScxmlError(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QScxmlStateMachine) SessionId() string {
	var _ms C.struct_miqt_string = C.QScxmlStateMachine_sessionId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlStateMachine) IsInvoked() bool {
	return (bool)(C.QScxmlStateMachine_isInvoked(this.h))
}

func (this *QScxmlStateMachine) IsInitialized() bool {
	return (bool)(C.QScxmlStateMachine_isInitialized(this.h))
}

func (this *QScxmlStateMachine) SetDataModel(model *QScxmlDataModel) {
	C.QScxmlStateMachine_setDataModel(this.h, model.cPointer())
}

func (this *QScxmlStateMachine) DataModel() *QScxmlDataModel {
	return newQScxmlDataModel(C.QScxmlStateMachine_dataModel(this.h))
}

func (this *QScxmlStateMachine) SetLoader(loader *QScxmlCompiler__Loader) {
	C.QScxmlStateMachine_setLoader(this.h, loader.cPointer())
}

func (this *QScxmlStateMachine) Loader() *QScxmlCompiler__Loader {
	return newQScxmlCompiler__Loader(C.QScxmlStateMachine_loader(this.h))
}

func (this *QScxmlStateMachine) IsRunning() bool {
	return (bool)(C.QScxmlStateMachine_isRunning(this.h))
}

func (this *QScxmlStateMachine) SetRunning(running bool) {
	C.QScxmlStateMachine_setRunning(this.h, (C.bool)(running))
}

func (this *QScxmlStateMachine) InitialValues() map[string]qt6.QVariant {
	var _mm C.struct_miqt_map = C.QScxmlStateMachine_initialValues(this.h)
	_ret := make(map[string]qt6.QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		var _mapkey_ms C.struct_miqt_string = _Keys[i]
		_mapkey_ret := C.GoStringN(_mapkey_ms.data, C.int(int64(_mapkey_ms.len)))
		C.free(unsafe.Pointer(_mapkey_ms.data))
		_entry_Key := _mapkey_ret
		_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_Values[i]))
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QScxmlStateMachine) SetInitialValues(initialValues map[string]qt6.QVariant) {
	initialValues_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(initialValues))))
	defer C.free(unsafe.Pointer(initialValues_Keys_CArray))
	initialValues_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(initialValues))))
	defer C.free(unsafe.Pointer(initialValues_Values_CArray))
	initialValues_ctr := 0
	for initialValues_k, initialValues_v := range initialValues {
		initialValues_k_ms := C.struct_miqt_string{}
		initialValues_k_ms.data = C.CString(initialValues_k)
		initialValues_k_ms.len = C.size_t(len(initialValues_k))
		defer C.free(unsafe.Pointer(initialValues_k_ms.data))
		initialValues_Keys_CArray[initialValues_ctr] = initialValues_k_ms
		initialValues_Values_CArray[initialValues_ctr] = (*C.QVariant)(initialValues_v.UnsafePointer())
		initialValues_ctr++
	}
	initialValues_mm := C.struct_miqt_map{
		len:    C.size_t(len(initialValues)),
		keys:   unsafe.Pointer(initialValues_Keys_CArray),
		values: unsafe.Pointer(initialValues_Values_CArray),
	}
	C.QScxmlStateMachine_setInitialValues(this.h, initialValues_mm)
}

func (this *QScxmlStateMachine) Name() string {
	var _ms C.struct_miqt_string = C.QScxmlStateMachine_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlStateMachine) StateNames() []string {
	var _ma C.struct_miqt_array = C.QScxmlStateMachine_stateNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QScxmlStateMachine) ActiveStateNames() []string {
	var _ma C.struct_miqt_array = C.QScxmlStateMachine_activeStateNames(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QScxmlStateMachine) IsActive(scxmlStateName string) bool {
	scxmlStateName_ms := C.struct_miqt_string{}
	scxmlStateName_ms.data = C.CString(scxmlStateName)
	scxmlStateName_ms.len = C.size_t(len(scxmlStateName))
	defer C.free(unsafe.Pointer(scxmlStateName_ms.data))
	return (bool)(C.QScxmlStateMachine_isActive(this.h, scxmlStateName_ms))
}

func (this *QScxmlStateMachine) ConnectToState(scxmlStateName string, receiver *qt6.QObject, method string) *qt6.QMetaObject__Connection {
	scxmlStateName_ms := C.struct_miqt_string{}
	scxmlStateName_ms.data = C.CString(scxmlStateName)
	scxmlStateName_ms.len = C.size_t(len(scxmlStateName))
	defer C.free(unsafe.Pointer(scxmlStateName_ms.data))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	_goptr := qt6.UnsafeNewQMetaObject__Connection(unsafe.Pointer(C.QScxmlStateMachine_connectToState(this.h, scxmlStateName_ms, (*C.QObject)(receiver.UnsafePointer()), method_Cstring)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlStateMachine) ConnectToEvent(scxmlEventSpec string, receiver *qt6.QObject, method string) *qt6.QMetaObject__Connection {
	scxmlEventSpec_ms := C.struct_miqt_string{}
	scxmlEventSpec_ms.data = C.CString(scxmlEventSpec)
	scxmlEventSpec_ms.len = C.size_t(len(scxmlEventSpec))
	defer C.free(unsafe.Pointer(scxmlEventSpec_ms.data))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	_goptr := qt6.UnsafeNewQMetaObject__Connection(unsafe.Pointer(C.QScxmlStateMachine_connectToEvent(this.h, scxmlEventSpec_ms, (*C.QObject)(receiver.UnsafePointer()), method_Cstring)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlStateMachine) SubmitEvent(event *QScxmlEvent) {
	C.QScxmlStateMachine_submitEvent(this.h, event.cPointer())
}

func (this *QScxmlStateMachine) SubmitEventWithEventName(eventName string) {
	eventName_ms := C.struct_miqt_string{}
	eventName_ms.data = C.CString(eventName)
	eventName_ms.len = C.size_t(len(eventName))
	defer C.free(unsafe.Pointer(eventName_ms.data))
	C.QScxmlStateMachine_submitEventWithEventName(this.h, eventName_ms)
}

func (this *QScxmlStateMachine) SubmitEvent2(eventName string, data *qt6.QVariant) {
	eventName_ms := C.struct_miqt_string{}
	eventName_ms.data = C.CString(eventName)
	eventName_ms.len = C.size_t(len(eventName))
	defer C.free(unsafe.Pointer(eventName_ms.data))
	C.QScxmlStateMachine_submitEvent2(this.h, eventName_ms, (*C.QVariant)(data.UnsafePointer()))
}

func (this *QScxmlStateMachine) CancelDelayedEvent(sendId string) {
	sendId_ms := C.struct_miqt_string{}
	sendId_ms.data = C.CString(sendId)
	sendId_ms.len = C.size_t(len(sendId))
	defer C.free(unsafe.Pointer(sendId_ms.data))
	C.QScxmlStateMachine_cancelDelayedEvent(this.h, sendId_ms)
}

func (this *QScxmlStateMachine) IsDispatchableTarget(target string) bool {
	target_ms := C.struct_miqt_string{}
	target_ms.data = C.CString(target)
	target_ms.len = C.size_t(len(target))
	defer C.free(unsafe.Pointer(target_ms.data))
	return (bool)(C.QScxmlStateMachine_isDispatchableTarget(this.h, target_ms))
}

func (this *QScxmlStateMachine) InvokedServices() []*QScxmlInvokableService {
	var _ma C.struct_miqt_array = C.QScxmlStateMachine_invokedServices(this.h)
	_ret := make([]*QScxmlInvokableService, int(_ma.len))
	_outCast := (*[0xffff]*C.QScxmlInvokableService)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQScxmlInvokableService(_outCast[i])
	}
	return _ret
}

func (this *QScxmlStateMachine) TableData() *QScxmlTableData {
	return newQScxmlTableData(C.QScxmlStateMachine_tableData(this.h))
}

func (this *QScxmlStateMachine) SetTableData(tableData *QScxmlTableData) {
	C.QScxmlStateMachine_setTableData(this.h, tableData.cPointer())
}

func (this *QScxmlStateMachine) RunningChanged(running bool) {
	C.QScxmlStateMachine_runningChanged(this.h, (C.bool)(running))
}
func (this *QScxmlStateMachine) OnRunningChanged(slot func(running bool)) {
	C.QScxmlStateMachine_connect_runningChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_runningChanged
func miqt_exec_callback_QScxmlStateMachine_runningChanged(cb C.intptr_t, running C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(running bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(running)

	gofunc(slotval1)
}

func (this *QScxmlStateMachine) InvokedServicesChanged(invokedServices []*QScxmlInvokableService) {
	invokedServices_CArray := (*[0xffff]*C.QScxmlInvokableService)(C.malloc(C.size_t(8 * len(invokedServices))))
	defer C.free(unsafe.Pointer(invokedServices_CArray))
	for i := range invokedServices {
		invokedServices_CArray[i] = invokedServices[i].cPointer()
	}
	invokedServices_ma := C.struct_miqt_array{len: C.size_t(len(invokedServices)), data: unsafe.Pointer(invokedServices_CArray)}
	C.QScxmlStateMachine_invokedServicesChanged(this.h, invokedServices_ma)
}
func (this *QScxmlStateMachine) OnInvokedServicesChanged(slot func(invokedServices []*QScxmlInvokableService)) {
	C.QScxmlStateMachine_connect_invokedServicesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_invokedServicesChanged
func miqt_exec_callback_QScxmlStateMachine_invokedServicesChanged(cb C.intptr_t, invokedServices C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(invokedServices []*QScxmlInvokableService))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var invokedServices_ma C.struct_miqt_array = invokedServices
	invokedServices_ret := make([]*QScxmlInvokableService, int(invokedServices_ma.len))
	invokedServices_outCast := (*[0xffff]*C.QScxmlInvokableService)(unsafe.Pointer(invokedServices_ma.data)) // hey ya
	for i := 0; i < int(invokedServices_ma.len); i++ {
		invokedServices_ret[i] = newQScxmlInvokableService(invokedServices_outCast[i])
	}
	slotval1 := invokedServices_ret

	gofunc(slotval1)
}

func (this *QScxmlStateMachine) Log(label string, msg string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))
	C.QScxmlStateMachine_log(this.h, label_ms, msg_ms)
}
func (this *QScxmlStateMachine) OnLog(slot func(label string, msg string)) {
	C.QScxmlStateMachine_connect_log(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_log
func miqt_exec_callback_QScxmlStateMachine_log(cb C.intptr_t, label C.struct_miqt_string, msg C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(label string, msg string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var label_ms C.struct_miqt_string = label
	label_ret := C.GoStringN(label_ms.data, C.int(int64(label_ms.len)))
	C.free(unsafe.Pointer(label_ms.data))
	slotval1 := label_ret
	var msg_ms C.struct_miqt_string = msg
	msg_ret := C.GoStringN(msg_ms.data, C.int(int64(msg_ms.len)))
	C.free(unsafe.Pointer(msg_ms.data))
	slotval2 := msg_ret

	gofunc(slotval1, slotval2)
}

func (this *QScxmlStateMachine) ReachedStableState() {
	C.QScxmlStateMachine_reachedStableState(this.h)
}
func (this *QScxmlStateMachine) OnReachedStableState(slot func()) {
	C.QScxmlStateMachine_connect_reachedStableState(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_reachedStableState
func miqt_exec_callback_QScxmlStateMachine_reachedStableState(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QScxmlStateMachine) Finished() {
	C.QScxmlStateMachine_finished(this.h)
}
func (this *QScxmlStateMachine) OnFinished(slot func()) {
	C.QScxmlStateMachine_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_finished
func miqt_exec_callback_QScxmlStateMachine_finished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QScxmlStateMachine) DataModelChanged(model *QScxmlDataModel) {
	C.QScxmlStateMachine_dataModelChanged(this.h, model.cPointer())
}
func (this *QScxmlStateMachine) OnDataModelChanged(slot func(model *QScxmlDataModel)) {
	C.QScxmlStateMachine_connect_dataModelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_dataModelChanged
func miqt_exec_callback_QScxmlStateMachine_dataModelChanged(cb C.intptr_t, model *C.QScxmlDataModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(model *QScxmlDataModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlDataModel(model)

	gofunc(slotval1)
}

func (this *QScxmlStateMachine) InitialValuesChanged(initialValues map[string]qt6.QVariant) {
	initialValues_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(initialValues))))
	defer C.free(unsafe.Pointer(initialValues_Keys_CArray))
	initialValues_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(initialValues))))
	defer C.free(unsafe.Pointer(initialValues_Values_CArray))
	initialValues_ctr := 0
	for initialValues_k, initialValues_v := range initialValues {
		initialValues_k_ms := C.struct_miqt_string{}
		initialValues_k_ms.data = C.CString(initialValues_k)
		initialValues_k_ms.len = C.size_t(len(initialValues_k))
		defer C.free(unsafe.Pointer(initialValues_k_ms.data))
		initialValues_Keys_CArray[initialValues_ctr] = initialValues_k_ms
		initialValues_Values_CArray[initialValues_ctr] = (*C.QVariant)(initialValues_v.UnsafePointer())
		initialValues_ctr++
	}
	initialValues_mm := C.struct_miqt_map{
		len:    C.size_t(len(initialValues)),
		keys:   unsafe.Pointer(initialValues_Keys_CArray),
		values: unsafe.Pointer(initialValues_Values_CArray),
	}
	C.QScxmlStateMachine_initialValuesChanged(this.h, initialValues_mm)
}
func (this *QScxmlStateMachine) OnInitialValuesChanged(slot func(initialValues map[string]qt6.QVariant)) {
	C.QScxmlStateMachine_connect_initialValuesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_initialValuesChanged
func miqt_exec_callback_QScxmlStateMachine_initialValuesChanged(cb C.intptr_t, initialValues C.struct_miqt_map) {
	gofunc, ok := cgo.Handle(cb).Value().(func(initialValues map[string]qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var initialValues_mm C.struct_miqt_map = initialValues
	initialValues_ret := make(map[string]qt6.QVariant, int(initialValues_mm.len))
	initialValues_Keys := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(initialValues_mm.keys))
	initialValues_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(initialValues_mm.values))
	for i := 0; i < int(initialValues_mm.len); i++ {
		var initialValues_mapkey_ms C.struct_miqt_string = initialValues_Keys[i]
		initialValues_mapkey_ret := C.GoStringN(initialValues_mapkey_ms.data, C.int(int64(initialValues_mapkey_ms.len)))
		C.free(unsafe.Pointer(initialValues_mapkey_ms.data))
		initialValues_entry_Key := initialValues_mapkey_ret
		initialValues_mapval_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(initialValues_Values[i]))
		initialValues_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		initialValues_entry_Value := *initialValues_mapval_goptr

		initialValues_ret[initialValues_entry_Key] = initialValues_entry_Value
	}
	slotval1 := initialValues_ret

	gofunc(slotval1)
}

func (this *QScxmlStateMachine) InitializedChanged(initialized bool) {
	C.QScxmlStateMachine_initializedChanged(this.h, (C.bool)(initialized))
}
func (this *QScxmlStateMachine) OnInitializedChanged(slot func(initialized bool)) {
	C.QScxmlStateMachine_connect_initializedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_initializedChanged
func miqt_exec_callback_QScxmlStateMachine_initializedChanged(cb C.intptr_t, initialized C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(initialized bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(initialized)

	gofunc(slotval1)
}

func (this *QScxmlStateMachine) LoaderChanged(loader *QScxmlCompiler__Loader) {
	C.QScxmlStateMachine_loaderChanged(this.h, loader.cPointer())
}
func (this *QScxmlStateMachine) OnLoaderChanged(slot func(loader *QScxmlCompiler__Loader)) {
	C.QScxmlStateMachine_connect_loaderChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_loaderChanged
func miqt_exec_callback_QScxmlStateMachine_loaderChanged(cb C.intptr_t, loader *C.QScxmlCompiler__Loader) {
	gofunc, ok := cgo.Handle(cb).Value().(func(loader *QScxmlCompiler__Loader))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlCompiler__Loader(loader)

	gofunc(slotval1)
}

func (this *QScxmlStateMachine) TableDataChanged(tableData *QScxmlTableData) {
	C.QScxmlStateMachine_tableDataChanged(this.h, tableData.cPointer())
}
func (this *QScxmlStateMachine) OnTableDataChanged(slot func(tableData *QScxmlTableData)) {
	C.QScxmlStateMachine_connect_tableDataChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScxmlStateMachine_tableDataChanged
func miqt_exec_callback_QScxmlStateMachine_tableDataChanged(cb C.intptr_t, tableData *C.QScxmlTableData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tableData *QScxmlTableData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScxmlTableData(tableData)

	gofunc(slotval1)
}

func (this *QScxmlStateMachine) Start() {
	C.QScxmlStateMachine_start(this.h)
}

func (this *QScxmlStateMachine) Stop() {
	C.QScxmlStateMachine_stop(this.h)
}

func (this *QScxmlStateMachine) Init() bool {
	return (bool)(C.QScxmlStateMachine_init(this.h))
}

func QScxmlStateMachine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlStateMachine_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlStateMachine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScxmlStateMachine_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScxmlStateMachine_FromData2(data *qt6.QIODevice, fileName string) *QScxmlStateMachine {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return newQScxmlStateMachine(C.QScxmlStateMachine_fromData2((*C.QIODevice)(data.UnsafePointer()), fileName_ms))
}

func (this *QScxmlStateMachine) StateNamesWithCompress(compress bool) []string {
	var _ma C.struct_miqt_array = C.QScxmlStateMachine_stateNamesWithCompress(this.h, (C.bool)(compress))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QScxmlStateMachine) ActiveStateNamesWithCompress(compress bool) []string {
	var _ma C.struct_miqt_array = C.QScxmlStateMachine_activeStateNamesWithCompress(this.h, (C.bool)(compress))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QScxmlStateMachine) ConnectToState2(scxmlStateName string, receiver *qt6.QObject, method string, typeVal qt6.ConnectionType) *qt6.QMetaObject__Connection {
	scxmlStateName_ms := C.struct_miqt_string{}
	scxmlStateName_ms.data = C.CString(scxmlStateName)
	scxmlStateName_ms.len = C.size_t(len(scxmlStateName))
	defer C.free(unsafe.Pointer(scxmlStateName_ms.data))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	_goptr := qt6.UnsafeNewQMetaObject__Connection(unsafe.Pointer(C.QScxmlStateMachine_connectToState2(this.h, scxmlStateName_ms, (*C.QObject)(receiver.UnsafePointer()), method_Cstring, (C.int)(typeVal))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScxmlStateMachine) ConnectToEvent2(scxmlEventSpec string, receiver *qt6.QObject, method string, typeVal qt6.ConnectionType) *qt6.QMetaObject__Connection {
	scxmlEventSpec_ms := C.struct_miqt_string{}
	scxmlEventSpec_ms.data = C.CString(scxmlEventSpec)
	scxmlEventSpec_ms.len = C.size_t(len(scxmlEventSpec))
	defer C.free(unsafe.Pointer(scxmlEventSpec_ms.data))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	_goptr := qt6.UnsafeNewQMetaObject__Connection(unsafe.Pointer(C.QScxmlStateMachine_connectToEvent2(this.h, scxmlEventSpec_ms, (*C.QObject)(receiver.UnsafePointer()), method_Cstring, (C.int)(typeVal))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QScxmlStateMachine) Delete() {
	C.QScxmlStateMachine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlStateMachine) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlStateMachine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

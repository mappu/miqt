package qml

/*

#include "gen_qjsengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QJSEngine__ObjectOwnership int

const (
	QJSEngine__CppOwnership        QJSEngine__ObjectOwnership = 0
	QJSEngine__JavaScriptOwnership QJSEngine__ObjectOwnership = 1
)

type QJSEngine__Extension int

const (
	QJSEngine__TranslationExtension       QJSEngine__Extension = 1
	QJSEngine__ConsoleExtension           QJSEngine__Extension = 2
	QJSEngine__GarbageCollectionExtension QJSEngine__Extension = 4
)

type QJSEngine struct {
	h *C.QJSEngine
	*qt6.QObject
}

func (this *QJSEngine) cPointer() *C.QJSEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QJSEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQJSEngine constructs the type using only CGO pointers.
func newQJSEngine(h *C.QJSEngine) *QJSEngine {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QJSEngine_virtbase(h, &outptr_QObject)

	return &QJSEngine{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQJSEngine constructs the type using only unsafe pointers.
func UnsafeNewQJSEngine(h unsafe.Pointer) *QJSEngine {
	return newQJSEngine((*C.QJSEngine)(h))
}

// NewQJSEngine constructs a new QJSEngine object.
func NewQJSEngine() *QJSEngine {

	return newQJSEngine(C.QJSEngine_new())
}

// NewQJSEngine2 constructs a new QJSEngine object.
func NewQJSEngine2(parent *qt6.QObject) *QJSEngine {

	return newQJSEngine(C.QJSEngine_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QJSEngine) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QJSEngine_metaObject(this.h)))
}

func (this *QJSEngine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QJSEngine_metacast(this.h, param1_Cstring))
}

func QJSEngine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QJSEngine_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSEngine) GlobalObject() *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_globalObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) Evaluate(program string) *QJSValue {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	_goptr := newQJSValue(C.QJSEngine_evaluate(this.h, program_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) ImportModule(fileName string) *QJSValue {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQJSValue(C.QJSEngine_importModule(this.h, fileName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) RegisterModule(moduleName string, value *QJSValue) bool {
	moduleName_ms := C.struct_miqt_string{}
	moduleName_ms.data = C.CString(moduleName)
	moduleName_ms.len = C.size_t(len(moduleName))
	defer C.free(unsafe.Pointer(moduleName_ms.data))
	return (bool)(C.QJSEngine_registerModule(this.h, moduleName_ms, value.cPointer()))
}

func (this *QJSEngine) NewObject() *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_newObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) NewSymbol(name string) *QJSValue {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQJSValue(C.QJSEngine_newSymbol(this.h, name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) NewArray() *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_newArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) NewQObject(object *qt6.QObject) *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_newQObject(this.h, (*C.QObject)(object.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) NewQMetaObject(metaObject *qt6.QMetaObject) *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_newQMetaObject(this.h, (*C.QMetaObject)(metaObject.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) NewErrorObject(errorType QJSValue__ErrorType) *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_newErrorObject(this.h, (C.int)(errorType)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) CollectGarbage() {
	C.QJSEngine_collectGarbage(this.h)
}

func QJSEngine_SetObjectOwnership(param1 *qt6.QObject, param2 QJSEngine__ObjectOwnership) {
	C.QJSEngine_setObjectOwnership((*C.QObject)(param1.UnsafePointer()), (C.int)(param2))
}

func QJSEngine_ObjectOwnership(param1 *qt6.QObject) QJSEngine__ObjectOwnership {
	return (QJSEngine__ObjectOwnership)(C.QJSEngine_objectOwnership((*C.QObject)(param1.UnsafePointer())))
}

func (this *QJSEngine) InstallExtensions(extensions QJSEngine__Extension) {
	C.QJSEngine_installExtensions(this.h, (C.int)(extensions))
}

func (this *QJSEngine) SetInterrupted(interrupted bool) {
	C.QJSEngine_setInterrupted(this.h, (C.bool)(interrupted))
}

func (this *QJSEngine) IsInterrupted() bool {
	return (bool)(C.QJSEngine_isInterrupted(this.h))
}

func (this *QJSEngine) ThrowError(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QJSEngine_throwError(this.h, message_ms)
}

func (this *QJSEngine) ThrowErrorWithErrorType(errorType QJSValue__ErrorType) {
	C.QJSEngine_throwErrorWithErrorType(this.h, (C.int)(errorType))
}

func (this *QJSEngine) ThrowErrorWithError(error *QJSValue) {
	C.QJSEngine_throwErrorWithError(this.h, error.cPointer())
}

func (this *QJSEngine) HasError() bool {
	return (bool)(C.QJSEngine_hasError(this.h))
}

func (this *QJSEngine) CatchError() *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_catchError(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) UiLanguage() string {
	var _ms C.struct_miqt_string = C.QJSEngine_uiLanguage(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSEngine) SetUiLanguage(language string) {
	language_ms := C.struct_miqt_string{}
	language_ms.data = C.CString(language)
	language_ms.len = C.size_t(len(language))
	defer C.free(unsafe.Pointer(language_ms.data))
	C.QJSEngine_setUiLanguage(this.h, language_ms)
}

func (this *QJSEngine) UiLanguageChanged() {
	C.QJSEngine_uiLanguageChanged(this.h)
}
func (this *QJSEngine) OnUiLanguageChanged(slot func()) {
	C.QJSEngine_connect_uiLanguageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QJSEngine_uiLanguageChanged
func miqt_exec_callback_QJSEngine_uiLanguageChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QJSEngine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QJSEngine_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QJSEngine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QJSEngine_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QJSEngine) Evaluate2(program string, fileName string) *QJSValue {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQJSValue(C.QJSEngine_evaluate2(this.h, program_ms, fileName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) Evaluate3(program string, fileName string, lineNumber int) *QJSValue {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQJSValue(C.QJSEngine_evaluate3(this.h, program_ms, fileName_ms, (C.int)(lineNumber)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) Evaluate4(program string, fileName string, lineNumber int, exceptionStackTrace []string) *QJSValue {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	exceptionStackTrace_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(exceptionStackTrace))))
	defer C.free(unsafe.Pointer(exceptionStackTrace_CArray))
	for i := range exceptionStackTrace {
		exceptionStackTrace_i_ms := C.struct_miqt_string{}
		exceptionStackTrace_i_ms.data = C.CString(exceptionStackTrace[i])
		exceptionStackTrace_i_ms.len = C.size_t(len(exceptionStackTrace[i]))
		defer C.free(unsafe.Pointer(exceptionStackTrace_i_ms.data))
		exceptionStackTrace_CArray[i] = exceptionStackTrace_i_ms
	}
	exceptionStackTrace_ma := C.struct_miqt_array{len: C.size_t(len(exceptionStackTrace)), data: unsafe.Pointer(exceptionStackTrace_CArray)}
	_goptr := newQJSValue(C.QJSEngine_evaluate4(this.h, program_ms, fileName_ms, (C.int)(lineNumber), exceptionStackTrace_ma))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) NewArray1(length uint) *QJSValue {
	_goptr := newQJSValue(C.QJSEngine_newArray1(this.h, (C.uint)(length)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) NewErrorObject2(errorType QJSValue__ErrorType, message string) *QJSValue {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	_goptr := newQJSValue(C.QJSEngine_newErrorObject2(this.h, (C.int)(errorType), message_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QJSEngine) InstallExtensions2(extensions QJSEngine__Extension, object *QJSValue) {
	C.QJSEngine_installExtensions2(this.h, (C.int)(extensions), object.cPointer())
}

func (this *QJSEngine) ThrowError2(errorType QJSValue__ErrorType, message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QJSEngine_throwError2(this.h, (C.int)(errorType), message_ms)
}

// Sender can only be called from a QJSEngine that was directly constructed.
func (this *QJSEngine) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QJSEngine_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QJSEngine that was directly constructed.
func (this *QJSEngine) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QJSEngine_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QJSEngine that was directly constructed.
func (this *QJSEngine) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QJSEngine_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QJSEngine that was directly constructed.
func (this *QJSEngine) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QJSEngine_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QJSEngine) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QJSEngine_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QJSEngine) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QJSEngine_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QJSEngine_event
func miqt_exec_callback_QJSEngine_event(self *C.QJSEngine, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QJSEngine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QJSEngine) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QJSEngine_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QJSEngine) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QJSEngine_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QJSEngine_eventFilter
func miqt_exec_callback_QJSEngine_eventFilter(self *C.QJSEngine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QJSEngine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QJSEngine) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QJSEngine_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QJSEngine) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QJSEngine_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QJSEngine_timerEvent
func miqt_exec_callback_QJSEngine_timerEvent(self *C.QJSEngine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QJSEngine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QJSEngine) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QJSEngine_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QJSEngine) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QJSEngine_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QJSEngine_childEvent
func miqt_exec_callback_QJSEngine_childEvent(self *C.QJSEngine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QJSEngine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QJSEngine) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QJSEngine_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QJSEngine) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QJSEngine_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QJSEngine_customEvent
func miqt_exec_callback_QJSEngine_customEvent(self *C.QJSEngine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QJSEngine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QJSEngine) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QJSEngine_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QJSEngine) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QJSEngine_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QJSEngine_connectNotify
func miqt_exec_callback_QJSEngine_connectNotify(self *C.QJSEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QJSEngine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QJSEngine) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QJSEngine_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QJSEngine) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QJSEngine_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QJSEngine_disconnectNotify
func miqt_exec_callback_QJSEngine_disconnectNotify(self *C.QJSEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QJSEngine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QJSEngine) Delete() {
	C.QJSEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QJSEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QJSEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

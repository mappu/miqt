package script

/*

#include "gen_qscriptengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScriptSyntaxCheckResult__State int

const (
	QScriptSyntaxCheckResult__Error        QScriptSyntaxCheckResult__State = 0
	QScriptSyntaxCheckResult__Intermediate QScriptSyntaxCheckResult__State = 1
	QScriptSyntaxCheckResult__Valid        QScriptSyntaxCheckResult__State = 2
)

type QScriptEngine__ValueOwnership int

const (
	QScriptEngine__QtOwnership     QScriptEngine__ValueOwnership = 0
	QScriptEngine__ScriptOwnership QScriptEngine__ValueOwnership = 1
	QScriptEngine__AutoOwnership   QScriptEngine__ValueOwnership = 2
)

type QScriptEngine__QObjectWrapOption int

const (
	QScriptEngine__ExcludeChildObjects         QScriptEngine__QObjectWrapOption = 1
	QScriptEngine__ExcludeSuperClassMethods    QScriptEngine__QObjectWrapOption = 2
	QScriptEngine__ExcludeSuperClassProperties QScriptEngine__QObjectWrapOption = 4
	QScriptEngine__ExcludeSuperClassContents   QScriptEngine__QObjectWrapOption = 6
	QScriptEngine__SkipMethodsInEnumeration    QScriptEngine__QObjectWrapOption = 8
	QScriptEngine__ExcludeDeleteLater          QScriptEngine__QObjectWrapOption = 16
	QScriptEngine__ExcludeSlots                QScriptEngine__QObjectWrapOption = 32
	QScriptEngine__AutoCreateDynamicProperties QScriptEngine__QObjectWrapOption = 256
	QScriptEngine__PreferExistingWrapperObject QScriptEngine__QObjectWrapOption = 512
)

type QScriptSyntaxCheckResult struct {
	h *C.QScriptSyntaxCheckResult
}

func (this *QScriptSyntaxCheckResult) cPointer() *C.QScriptSyntaxCheckResult {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptSyntaxCheckResult) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptSyntaxCheckResult constructs the type using only CGO pointers.
func newQScriptSyntaxCheckResult(h *C.QScriptSyntaxCheckResult) *QScriptSyntaxCheckResult {
	if h == nil {
		return nil
	}

	return &QScriptSyntaxCheckResult{h: h}
}

// UnsafeNewQScriptSyntaxCheckResult constructs the type using only unsafe pointers.
func UnsafeNewQScriptSyntaxCheckResult(h unsafe.Pointer) *QScriptSyntaxCheckResult {
	return newQScriptSyntaxCheckResult((*C.QScriptSyntaxCheckResult)(h))
}

// NewQScriptSyntaxCheckResult constructs a new QScriptSyntaxCheckResult object.
func NewQScriptSyntaxCheckResult(other *QScriptSyntaxCheckResult) *QScriptSyntaxCheckResult {

	return newQScriptSyntaxCheckResult(C.QScriptSyntaxCheckResult_new(other.cPointer()))
}

func (this *QScriptSyntaxCheckResult) State() QScriptSyntaxCheckResult__State {
	return (QScriptSyntaxCheckResult__State)(C.QScriptSyntaxCheckResult_state(this.h))
}

func (this *QScriptSyntaxCheckResult) ErrorLineNumber() int {
	return (int)(C.QScriptSyntaxCheckResult_errorLineNumber(this.h))
}

func (this *QScriptSyntaxCheckResult) ErrorColumnNumber() int {
	return (int)(C.QScriptSyntaxCheckResult_errorColumnNumber(this.h))
}

func (this *QScriptSyntaxCheckResult) ErrorMessage() string {
	var _ms C.struct_miqt_string = C.QScriptSyntaxCheckResult_errorMessage(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptSyntaxCheckResult) OperatorAssign(other *QScriptSyntaxCheckResult) {
	C.QScriptSyntaxCheckResult_operatorAssign(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QScriptSyntaxCheckResult) Delete() {
	C.QScriptSyntaxCheckResult_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptSyntaxCheckResult) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptSyntaxCheckResult) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScriptEngine struct {
	h *C.QScriptEngine
	*qt.QObject
}

func (this *QScriptEngine) cPointer() *C.QScriptEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptEngine constructs the type using only CGO pointers.
func newQScriptEngine(h *C.QScriptEngine) *QScriptEngine {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScriptEngine_virtbase(h, &outptr_QObject)

	return &QScriptEngine{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQScriptEngine constructs the type using only unsafe pointers.
func UnsafeNewQScriptEngine(h unsafe.Pointer) *QScriptEngine {
	return newQScriptEngine((*C.QScriptEngine)(h))
}

// NewQScriptEngine constructs a new QScriptEngine object.
func NewQScriptEngine() *QScriptEngine {

	return newQScriptEngine(C.QScriptEngine_new())
}

// NewQScriptEngine2 constructs a new QScriptEngine object.
func NewQScriptEngine2(parent *qt.QObject) *QScriptEngine {

	return newQScriptEngine(C.QScriptEngine_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QScriptEngine) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QScriptEngine_metaObject(this.h)))
}

func (this *QScriptEngine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScriptEngine_metacast(this.h, param1_Cstring))
}

func QScriptEngine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScriptEngine_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptEngine_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScriptEngine_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptEngine) GlobalObject() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_globalObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) SetGlobalObject(object *QScriptValue) {
	C.QScriptEngine_setGlobalObject(this.h, object.cPointer())
}

func (this *QScriptEngine) CurrentContext() *QScriptContext {
	return newQScriptContext(C.QScriptEngine_currentContext(this.h))
}

func (this *QScriptEngine) PushContext() *QScriptContext {
	return newQScriptContext(C.QScriptEngine_pushContext(this.h))
}

func (this *QScriptEngine) PopContext() {
	C.QScriptEngine_popContext(this.h)
}

func (this *QScriptEngine) CanEvaluate(program string) bool {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	return (bool)(C.QScriptEngine_canEvaluate(this.h, program_ms))
}

func QScriptEngine_CheckSyntax(program string) *QScriptSyntaxCheckResult {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	_goptr := newQScriptSyntaxCheckResult(C.QScriptEngine_checkSyntax(program_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) Evaluate(program string) *QScriptValue {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	_goptr := newQScriptValue(C.QScriptEngine_evaluate(this.h, program_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) EvaluateWithProgram(program *QScriptProgram) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_evaluateWithProgram(this.h, program.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) IsEvaluating() bool {
	return (bool)(C.QScriptEngine_isEvaluating(this.h))
}

func (this *QScriptEngine) AbortEvaluation() {
	C.QScriptEngine_abortEvaluation(this.h)
}

func (this *QScriptEngine) HasUncaughtException() bool {
	return (bool)(C.QScriptEngine_hasUncaughtException(this.h))
}

func (this *QScriptEngine) UncaughtException() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_uncaughtException(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) UncaughtExceptionLineNumber() int {
	return (int)(C.QScriptEngine_uncaughtExceptionLineNumber(this.h))
}

func (this *QScriptEngine) UncaughtExceptionBacktrace() []string {
	var _ma C.struct_miqt_array = C.QScriptEngine_uncaughtExceptionBacktrace(this.h)
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

func (this *QScriptEngine) ClearExceptions() {
	C.QScriptEngine_clearExceptions(this.h)
}

func (this *QScriptEngine) NullValue() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_nullValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) UndefinedValue() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_undefinedValue(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewVariant(value *qt.QVariant) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newVariant(this.h, (*C.QVariant)(value.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewVariant2(object *QScriptValue, value *qt.QVariant) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newVariant2(this.h, object.cPointer(), (*C.QVariant)(value.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewRegExp(regexp *qt.QRegExp) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newRegExp(this.h, (*C.QRegExp)(regexp.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewObject() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewObjectWithScriptClass(scriptClass *QScriptClass) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newObjectWithScriptClass(this.h, scriptClass.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewArray() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newArray(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewRegExp2(pattern string, flags string) *QScriptValue {
	pattern_ms := C.struct_miqt_string{}
	pattern_ms.data = C.CString(pattern)
	pattern_ms.len = C.size_t(len(pattern))
	defer C.free(unsafe.Pointer(pattern_ms.data))
	flags_ms := C.struct_miqt_string{}
	flags_ms.data = C.CString(flags)
	flags_ms.len = C.size_t(len(flags))
	defer C.free(unsafe.Pointer(flags_ms.data))
	_goptr := newQScriptValue(C.QScriptEngine_newRegExp2(this.h, pattern_ms, flags_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewDate(value float64) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newDate(this.h, (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewDateWithValue(value *qt.QDateTime) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newDateWithValue(this.h, (*C.QDateTime)(value.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewActivationObject() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newActivationObject(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQObject(object *qt.QObject) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQObject(this.h, (*C.QObject)(object.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQObject2(scriptObject *QScriptValue, qtObject *qt.QObject) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQObject2(this.h, scriptObject.cPointer(), (*C.QObject)(qtObject.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQMetaObject(metaObject *qt.QMetaObject) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQMetaObject(this.h, (*C.QMetaObject)(metaObject.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) DefaultPrototype(metaTypeId int) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_defaultPrototype(this.h, (C.int)(metaTypeId)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) SetDefaultPrototype(metaTypeId int, prototype *QScriptValue) {
	C.QScriptEngine_setDefaultPrototype(this.h, (C.int)(metaTypeId), prototype.cPointer())
}

func (this *QScriptEngine) InstallTranslatorFunctions() {
	C.QScriptEngine_installTranslatorFunctions(this.h)
}

func (this *QScriptEngine) ImportExtension(extension string) *QScriptValue {
	extension_ms := C.struct_miqt_string{}
	extension_ms.data = C.CString(extension)
	extension_ms.len = C.size_t(len(extension))
	defer C.free(unsafe.Pointer(extension_ms.data))
	_goptr := newQScriptValue(C.QScriptEngine_importExtension(this.h, extension_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) AvailableExtensions() []string {
	var _ma C.struct_miqt_array = C.QScriptEngine_availableExtensions(this.h)
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

func (this *QScriptEngine) ImportedExtensions() []string {
	var _ma C.struct_miqt_array = C.QScriptEngine_importedExtensions(this.h)
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

func (this *QScriptEngine) CollectGarbage() {
	C.QScriptEngine_collectGarbage(this.h)
}

func (this *QScriptEngine) ReportAdditionalMemoryCost(size int) {
	C.QScriptEngine_reportAdditionalMemoryCost(this.h, (C.int)(size))
}

func (this *QScriptEngine) SetProcessEventsInterval(interval int) {
	C.QScriptEngine_setProcessEventsInterval(this.h, (C.int)(interval))
}

func (this *QScriptEngine) ProcessEventsInterval() int {
	return (int)(C.QScriptEngine_processEventsInterval(this.h))
}

func (this *QScriptEngine) SetAgent(agent *QScriptEngineAgent) {
	C.QScriptEngine_setAgent(this.h, agent.cPointer())
}

func (this *QScriptEngine) Agent() *QScriptEngineAgent {
	return newQScriptEngineAgent(C.QScriptEngine_agent(this.h))
}

func (this *QScriptEngine) ToStringHandle(str string) *QScriptString {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQScriptString(C.QScriptEngine_toStringHandle(this.h, str_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) ToObject(value *QScriptValue) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_toObject(this.h, value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) ObjectById(id int64) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_objectById(this.h, (C.longlong)(id)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) SignalHandlerException(exception *QScriptValue) {
	C.QScriptEngine_signalHandlerException(this.h, exception.cPointer())
}
func (this *QScriptEngine) OnSignalHandlerException(slot func(exception *QScriptValue)) {
	C.QScriptEngine_connect_signalHandlerException(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScriptEngine_signalHandlerException
func miqt_exec_callback_QScriptEngine_signalHandlerException(cb C.intptr_t, exception *C.QScriptValue) {
	gofunc, ok := cgo.Handle(cb).Value().(func(exception *QScriptValue))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScriptValue(exception)

	gofunc(slotval1)
}

func QScriptEngine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptEngine_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptEngine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptEngine_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptEngine_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptEngine_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptEngine_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptEngine_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptEngine) Evaluate2(program string, fileName string) *QScriptValue {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQScriptValue(C.QScriptEngine_evaluate2(this.h, program_ms, fileName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) Evaluate3(program string, fileName string, lineNumber int) *QScriptValue {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQScriptValue(C.QScriptEngine_evaluate3(this.h, program_ms, fileName_ms, (C.int)(lineNumber)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) AbortEvaluation1(result *QScriptValue) {
	C.QScriptEngine_abortEvaluation1(this.h, result.cPointer())
}

func (this *QScriptEngine) NewObject2(scriptClass *QScriptClass, data *QScriptValue) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newObject2(this.h, scriptClass.cPointer(), data.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewArray1(length uint) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newArray1(this.h, (C.uint)(length)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQObject22(object *qt.QObject, ownership QScriptEngine__ValueOwnership) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQObject22(this.h, (*C.QObject)(object.UnsafePointer()), (C.int)(ownership)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQObject3(object *qt.QObject, ownership QScriptEngine__ValueOwnership, options *QScriptEngine__QObjectWrapOption) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQObject3(this.h, (*C.QObject)(object.UnsafePointer()), (C.int)(ownership), (*C.int)(unsafe.Pointer(options))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQObject32(scriptObject *QScriptValue, qtObject *qt.QObject, ownership QScriptEngine__ValueOwnership) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQObject32(this.h, scriptObject.cPointer(), (*C.QObject)(qtObject.UnsafePointer()), (C.int)(ownership)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQObject4(scriptObject *QScriptValue, qtObject *qt.QObject, ownership QScriptEngine__ValueOwnership, options *QScriptEngine__QObjectWrapOption) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQObject4(this.h, scriptObject.cPointer(), (*C.QObject)(qtObject.UnsafePointer()), (C.int)(ownership), (*C.int)(unsafe.Pointer(options))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) NewQMetaObject2(metaObject *qt.QMetaObject, ctor *QScriptValue) *QScriptValue {
	_goptr := newQScriptValue(C.QScriptEngine_newQMetaObject2(this.h, (*C.QMetaObject)(metaObject.UnsafePointer()), ctor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptEngine) InstallTranslatorFunctions1(object *QScriptValue) {
	C.QScriptEngine_installTranslatorFunctions1(this.h, object.cPointer())
}

func (this *QScriptEngine) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QScriptEngine_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScriptEngine) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QScriptEngine_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptEngine_event
func miqt_exec_callback_QScriptEngine_event(self *C.QScriptEngine, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScriptEngine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScriptEngine) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QScriptEngine_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScriptEngine) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QScriptEngine_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptEngine_eventFilter
func miqt_exec_callback_QScriptEngine_eventFilter(self *C.QScriptEngine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScriptEngine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScriptEngine) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QScriptEngine_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScriptEngine) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QScriptEngine_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptEngine_timerEvent
func miqt_exec_callback_QScriptEngine_timerEvent(self *C.QScriptEngine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScriptEngine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScriptEngine) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QScriptEngine_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScriptEngine) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QScriptEngine_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptEngine_childEvent
func miqt_exec_callback_QScriptEngine_childEvent(self *C.QScriptEngine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScriptEngine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScriptEngine) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QScriptEngine_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScriptEngine) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QScriptEngine_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptEngine_customEvent
func miqt_exec_callback_QScriptEngine_customEvent(self *C.QScriptEngine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScriptEngine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScriptEngine) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QScriptEngine_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScriptEngine) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QScriptEngine_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptEngine_connectNotify
func miqt_exec_callback_QScriptEngine_connectNotify(self *C.QScriptEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScriptEngine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScriptEngine) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QScriptEngine_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScriptEngine) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QScriptEngine_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptEngine_disconnectNotify
func miqt_exec_callback_QScriptEngine_disconnectNotify(self *C.QScriptEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScriptEngine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScriptEngine) Delete() {
	C.QScriptEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

/*

#include "gen_qprocess.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QProcessEnvironment__Initialization int

const (
	QProcessEnvironment__InheritFromParent QProcessEnvironment__Initialization = 0
)

type QProcess__ProcessError int

const (
	QProcess__FailedToStart QProcess__ProcessError = 0
	QProcess__Crashed       QProcess__ProcessError = 1
	QProcess__Timedout      QProcess__ProcessError = 2
	QProcess__ReadError     QProcess__ProcessError = 3
	QProcess__WriteError    QProcess__ProcessError = 4
	QProcess__UnknownError  QProcess__ProcessError = 5
)

type QProcess__ProcessState int

const (
	QProcess__NotRunning QProcess__ProcessState = 0
	QProcess__Starting   QProcess__ProcessState = 1
	QProcess__Running    QProcess__ProcessState = 2
)

type QProcess__ProcessChannel int

const (
	QProcess__StandardOutput QProcess__ProcessChannel = 0
	QProcess__StandardError  QProcess__ProcessChannel = 1
)

type QProcess__ProcessChannelMode int

const (
	QProcess__SeparateChannels       QProcess__ProcessChannelMode = 0
	QProcess__MergedChannels         QProcess__ProcessChannelMode = 1
	QProcess__ForwardedChannels      QProcess__ProcessChannelMode = 2
	QProcess__ForwardedOutputChannel QProcess__ProcessChannelMode = 3
	QProcess__ForwardedErrorChannel  QProcess__ProcessChannelMode = 4
)

type QProcess__InputChannelMode int

const (
	QProcess__ManagedInputChannel   QProcess__InputChannelMode = 0
	QProcess__ForwardedInputChannel QProcess__InputChannelMode = 1
)

type QProcess__ExitStatus int

const (
	QProcess__NormalExit QProcess__ExitStatus = 0
	QProcess__CrashExit  QProcess__ExitStatus = 1
)

type QProcessEnvironment struct {
	h *C.QProcessEnvironment
}

func (this *QProcessEnvironment) cPointer() *C.QProcessEnvironment {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QProcessEnvironment) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQProcessEnvironment(h *C.QProcessEnvironment) *QProcessEnvironment {
	if h == nil {
		return nil
	}
	return &QProcessEnvironment{h: h}
}

func UnsafeNewQProcessEnvironment(h unsafe.Pointer) *QProcessEnvironment {
	return newQProcessEnvironment((*C.QProcessEnvironment)(h))
}

// NewQProcessEnvironment constructs a new QProcessEnvironment object.
func NewQProcessEnvironment() *QProcessEnvironment {
	ret := C.QProcessEnvironment_new()
	return newQProcessEnvironment(ret)
}

// NewQProcessEnvironment2 constructs a new QProcessEnvironment object.
func NewQProcessEnvironment2(param1 QProcessEnvironment__Initialization) *QProcessEnvironment {
	ret := C.QProcessEnvironment_new2((C.int)(param1))
	return newQProcessEnvironment(ret)
}

// NewQProcessEnvironment3 constructs a new QProcessEnvironment object.
func NewQProcessEnvironment3(other *QProcessEnvironment) *QProcessEnvironment {
	ret := C.QProcessEnvironment_new3(other.cPointer())
	return newQProcessEnvironment(ret)
}

func (this *QProcessEnvironment) OperatorAssign(other *QProcessEnvironment) {
	C.QProcessEnvironment_OperatorAssign(this.h, other.cPointer())
}

func (this *QProcessEnvironment) Swap(other *QProcessEnvironment) {
	C.QProcessEnvironment_Swap(this.h, other.cPointer())
}

func (this *QProcessEnvironment) OperatorEqual(other *QProcessEnvironment) bool {
	return (bool)(C.QProcessEnvironment_OperatorEqual(this.h, other.cPointer()))
}

func (this *QProcessEnvironment) OperatorNotEqual(other *QProcessEnvironment) bool {
	return (bool)(C.QProcessEnvironment_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QProcessEnvironment) IsEmpty() bool {
	return (bool)(C.QProcessEnvironment_IsEmpty(this.h))
}

func (this *QProcessEnvironment) InheritsFromParent() bool {
	return (bool)(C.QProcessEnvironment_InheritsFromParent(this.h))
}

func (this *QProcessEnvironment) Clear() {
	C.QProcessEnvironment_Clear(this.h)
}

func (this *QProcessEnvironment) Contains(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QProcessEnvironment_Contains(this.h, name_ms))
}

func (this *QProcessEnvironment) Insert(name string, value string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	value_ms := C.struct_miqt_string{}
	value_ms.data = C.CString(value)
	value_ms.len = C.size_t(len(value))
	defer C.free(unsafe.Pointer(value_ms.data))
	C.QProcessEnvironment_Insert(this.h, name_ms, value_ms)
}

func (this *QProcessEnvironment) Remove(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QProcessEnvironment_Remove(this.h, name_ms)
}

func (this *QProcessEnvironment) Value(name string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QProcessEnvironment_Value(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcessEnvironment) ToStringList() []string {
	var _ma C.struct_miqt_array = C.QProcessEnvironment_ToStringList(this.h)
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

func (this *QProcessEnvironment) Keys() []string {
	var _ma C.struct_miqt_array = C.QProcessEnvironment_Keys(this.h)
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

func (this *QProcessEnvironment) InsertWithQProcessEnvironment(e *QProcessEnvironment) {
	C.QProcessEnvironment_InsertWithQProcessEnvironment(this.h, e.cPointer())
}

func QProcessEnvironment_SystemEnvironment() *QProcessEnvironment {
	_ret := C.QProcessEnvironment_SystemEnvironment()
	_goptr := newQProcessEnvironment(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProcessEnvironment) Value2(name string, defaultValue string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.QProcessEnvironment_Value2(this.h, name_ms, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QProcessEnvironment) Delete() {
	C.QProcessEnvironment_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProcessEnvironment) GoGC() {
	runtime.SetFinalizer(this, func(this *QProcessEnvironment) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QProcess struct {
	h *C.QProcess
	*QIODevice
}

func (this *QProcess) cPointer() *C.QProcess {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QProcess) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQProcess(h *C.QProcess) *QProcess {
	if h == nil {
		return nil
	}
	return &QProcess{h: h, QIODevice: UnsafeNewQIODevice(unsafe.Pointer(h))}
}

func UnsafeNewQProcess(h unsafe.Pointer) *QProcess {
	return newQProcess((*C.QProcess)(h))
}

// NewQProcess constructs a new QProcess object.
func NewQProcess() *QProcess {
	ret := C.QProcess_new()
	return newQProcess(ret)
}

// NewQProcess2 constructs a new QProcess object.
func NewQProcess2(parent *QObject) *QProcess {
	ret := C.QProcess_new2(parent.cPointer())
	return newQProcess(ret)
}

func (this *QProcess) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QProcess_MetaObject(this.h)))
}

func (this *QProcess) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QProcess_Metacast(this.h, param1_Cstring))
}

func QProcess_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) Start(program string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	C.QProcess_Start(this.h, program_ms)
}

func (this *QProcess) Start2() {
	C.QProcess_Start2(this.h)
}

func (this *QProcess) StartCommand(command string) {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	C.QProcess_StartCommand(this.h, command_ms)
}

func (this *QProcess) StartDetached() bool {
	return (bool)(C.QProcess_StartDetached(this.h))
}

func (this *QProcess) Open() bool {
	return (bool)(C.QProcess_Open(this.h))
}

func (this *QProcess) Program() string {
	var _ms C.struct_miqt_string = C.QProcess_Program(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) SetProgram(program string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	C.QProcess_SetProgram(this.h, program_ms)
}

func (this *QProcess) Arguments() []string {
	var _ma C.struct_miqt_array = C.QProcess_Arguments(this.h)
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

func (this *QProcess) SetArguments(arguments []string) {
	arguments_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := C.struct_miqt_string{}
		arguments_i_ms.data = C.CString(arguments[i])
		arguments_i_ms.len = C.size_t(len(arguments[i]))
		defer C.free(unsafe.Pointer(arguments_i_ms.data))
		arguments_CArray[i] = arguments_i_ms
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	C.QProcess_SetArguments(this.h, arguments_ma)
}

func (this *QProcess) ProcessChannelMode() QProcess__ProcessChannelMode {
	return (QProcess__ProcessChannelMode)(C.QProcess_ProcessChannelMode(this.h))
}

func (this *QProcess) SetProcessChannelMode(mode QProcess__ProcessChannelMode) {
	C.QProcess_SetProcessChannelMode(this.h, (C.int)(mode))
}

func (this *QProcess) InputChannelMode() QProcess__InputChannelMode {
	return (QProcess__InputChannelMode)(C.QProcess_InputChannelMode(this.h))
}

func (this *QProcess) SetInputChannelMode(mode QProcess__InputChannelMode) {
	C.QProcess_SetInputChannelMode(this.h, (C.int)(mode))
}

func (this *QProcess) ReadChannel() QProcess__ProcessChannel {
	return (QProcess__ProcessChannel)(C.QProcess_ReadChannel(this.h))
}

func (this *QProcess) SetReadChannel(channel QProcess__ProcessChannel) {
	C.QProcess_SetReadChannel(this.h, (C.int)(channel))
}

func (this *QProcess) CloseReadChannel(channel QProcess__ProcessChannel) {
	C.QProcess_CloseReadChannel(this.h, (C.int)(channel))
}

func (this *QProcess) CloseWriteChannel() {
	C.QProcess_CloseWriteChannel(this.h)
}

func (this *QProcess) SetStandardInputFile(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_SetStandardInputFile(this.h, fileName_ms)
}

func (this *QProcess) SetStandardOutputFile(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_SetStandardOutputFile(this.h, fileName_ms)
}

func (this *QProcess) SetStandardErrorFile(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_SetStandardErrorFile(this.h, fileName_ms)
}

func (this *QProcess) SetStandardOutputProcess(destination *QProcess) {
	C.QProcess_SetStandardOutputProcess(this.h, destination.cPointer())
}

func (this *QProcess) WorkingDirectory() string {
	var _ms C.struct_miqt_string = C.QProcess_WorkingDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) SetWorkingDirectory(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QProcess_SetWorkingDirectory(this.h, dir_ms)
}

func (this *QProcess) SetEnvironment(environment []string) {
	environment_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(environment))))
	defer C.free(unsafe.Pointer(environment_CArray))
	for i := range environment {
		environment_i_ms := C.struct_miqt_string{}
		environment_i_ms.data = C.CString(environment[i])
		environment_i_ms.len = C.size_t(len(environment[i]))
		defer C.free(unsafe.Pointer(environment_i_ms.data))
		environment_CArray[i] = environment_i_ms
	}
	environment_ma := C.struct_miqt_array{len: C.size_t(len(environment)), data: unsafe.Pointer(environment_CArray)}
	C.QProcess_SetEnvironment(this.h, environment_ma)
}

func (this *QProcess) Environment() []string {
	var _ma C.struct_miqt_array = C.QProcess_Environment(this.h)
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

func (this *QProcess) SetProcessEnvironment(environment *QProcessEnvironment) {
	C.QProcess_SetProcessEnvironment(this.h, environment.cPointer())
}

func (this *QProcess) ProcessEnvironment() *QProcessEnvironment {
	_ret := C.QProcess_ProcessEnvironment(this.h)
	_goptr := newQProcessEnvironment(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProcess) Error() QProcess__ProcessError {
	return (QProcess__ProcessError)(C.QProcess_Error(this.h))
}

func (this *QProcess) State() QProcess__ProcessState {
	return (QProcess__ProcessState)(C.QProcess_State(this.h))
}

func (this *QProcess) ProcessId() int64 {
	return (int64)(C.QProcess_ProcessId(this.h))
}

func (this *QProcess) WaitForStarted() bool {
	return (bool)(C.QProcess_WaitForStarted(this.h))
}

func (this *QProcess) WaitForReadyRead() bool {
	return (bool)(C.QProcess_WaitForReadyRead(this.h))
}

func (this *QProcess) WaitForBytesWritten() bool {
	return (bool)(C.QProcess_WaitForBytesWritten(this.h))
}

func (this *QProcess) WaitForFinished() bool {
	return (bool)(C.QProcess_WaitForFinished(this.h))
}

func (this *QProcess) ReadAllStandardOutput() []byte {
	var _bytearray C.struct_miqt_string = C.QProcess_ReadAllStandardOutput(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QProcess) ReadAllStandardError() []byte {
	var _bytearray C.struct_miqt_string = C.QProcess_ReadAllStandardError(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QProcess) ExitCode() int {
	return (int)(C.QProcess_ExitCode(this.h))
}

func (this *QProcess) ExitStatus() QProcess__ExitStatus {
	return (QProcess__ExitStatus)(C.QProcess_ExitStatus(this.h))
}

func (this *QProcess) BytesToWrite() int64 {
	return (int64)(C.QProcess_BytesToWrite(this.h))
}

func (this *QProcess) IsSequential() bool {
	return (bool)(C.QProcess_IsSequential(this.h))
}

func (this *QProcess) Close() {
	C.QProcess_Close(this.h)
}

func QProcess_Execute(program string) int {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	return (int)(C.QProcess_Execute(program_ms))
}

func QProcess_StartDetachedWithProgram(program string) bool {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	return (bool)(C.QProcess_StartDetachedWithProgram(program_ms))
}

func QProcess_SystemEnvironment() []string {
	var _ma C.struct_miqt_array = C.QProcess_SystemEnvironment()
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

func QProcess_NullDevice() string {
	var _ms C.struct_miqt_string = C.QProcess_NullDevice()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) Terminate() {
	C.QProcess_Terminate(this.h)
}

func (this *QProcess) Kill() {
	C.QProcess_Kill(this.h)
}

func (this *QProcess) Finished(exitCode int) {
	C.QProcess_Finished(this.h, (C.int)(exitCode))
}
func (this *QProcess) OnFinished(slot func(exitCode int)) {
	C.QProcess_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Finished
func miqt_exec_callback_QProcess_Finished(cb C.intptr_t, exitCode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(exitCode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(exitCode)

	gofunc(slotval1)
}

func (this *QProcess) ErrorOccurred(error QProcess__ProcessError) {
	C.QProcess_ErrorOccurred(this.h, (C.int)(error))
}
func (this *QProcess) OnErrorOccurred(slot func(error QProcess__ProcessError)) {
	C.QProcess_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_ErrorOccurred
func miqt_exec_callback_QProcess_ErrorOccurred(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QProcess__ProcessError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QProcess__ProcessError)(error)

	gofunc(slotval1)
}

func QProcess_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProcess_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) Start22(program string, arguments []string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	arguments_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := C.struct_miqt_string{}
		arguments_i_ms.data = C.CString(arguments[i])
		arguments_i_ms.len = C.size_t(len(arguments[i]))
		defer C.free(unsafe.Pointer(arguments_i_ms.data))
		arguments_CArray[i] = arguments_i_ms
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	C.QProcess_Start22(this.h, program_ms, arguments_ma)
}

func (this *QProcess) Start3(program string, arguments []string, mode QIODeviceBase__OpenModeFlag) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	arguments_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := C.struct_miqt_string{}
		arguments_i_ms.data = C.CString(arguments[i])
		arguments_i_ms.len = C.size_t(len(arguments[i]))
		defer C.free(unsafe.Pointer(arguments_i_ms.data))
		arguments_CArray[i] = arguments_i_ms
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	C.QProcess_Start3(this.h, program_ms, arguments_ma, (C.int)(mode))
}

func (this *QProcess) Start1(mode QIODeviceBase__OpenModeFlag) {
	C.QProcess_Start1(this.h, (C.int)(mode))
}

func (this *QProcess) StartCommand2(command string, mode QIODeviceBase__OpenModeFlag) {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	C.QProcess_StartCommand2(this.h, command_ms, (C.int)(mode))
}

func (this *QProcess) StartDetached1(pid *int64) bool {
	return (bool)(C.QProcess_StartDetached1(this.h, (*C.longlong)(unsafe.Pointer(pid))))
}

func (this *QProcess) Open1(mode QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QProcess_Open1(this.h, (C.int)(mode)))
}

func (this *QProcess) SetStandardOutputFile2(fileName string, mode QIODeviceBase__OpenModeFlag) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_SetStandardOutputFile2(this.h, fileName_ms, (C.int)(mode))
}

func (this *QProcess) SetStandardErrorFile2(fileName string, mode QIODeviceBase__OpenModeFlag) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_SetStandardErrorFile2(this.h, fileName_ms, (C.int)(mode))
}

func (this *QProcess) WaitForStarted1(msecs int) bool {
	return (bool)(C.QProcess_WaitForStarted1(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForReadyRead1(msecs int) bool {
	return (bool)(C.QProcess_WaitForReadyRead1(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForBytesWritten1(msecs int) bool {
	return (bool)(C.QProcess_WaitForBytesWritten1(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForFinished1(msecs int) bool {
	return (bool)(C.QProcess_WaitForFinished1(this.h, (C.int)(msecs)))
}

func QProcess_Execute2(program string, arguments []string) int {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	arguments_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := C.struct_miqt_string{}
		arguments_i_ms.data = C.CString(arguments[i])
		arguments_i_ms.len = C.size_t(len(arguments[i]))
		defer C.free(unsafe.Pointer(arguments_i_ms.data))
		arguments_CArray[i] = arguments_i_ms
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	return (int)(C.QProcess_Execute2(program_ms, arguments_ma))
}

func QProcess_StartDetached2(program string, arguments []string) bool {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	arguments_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := C.struct_miqt_string{}
		arguments_i_ms.data = C.CString(arguments[i])
		arguments_i_ms.len = C.size_t(len(arguments[i]))
		defer C.free(unsafe.Pointer(arguments_i_ms.data))
		arguments_CArray[i] = arguments_i_ms
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	return (bool)(C.QProcess_StartDetached2(program_ms, arguments_ma))
}

func QProcess_StartDetached3(program string, arguments []string, workingDirectory string) bool {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	arguments_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := C.struct_miqt_string{}
		arguments_i_ms.data = C.CString(arguments[i])
		arguments_i_ms.len = C.size_t(len(arguments[i]))
		defer C.free(unsafe.Pointer(arguments_i_ms.data))
		arguments_CArray[i] = arguments_i_ms
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	workingDirectory_ms := C.struct_miqt_string{}
	workingDirectory_ms.data = C.CString(workingDirectory)
	workingDirectory_ms.len = C.size_t(len(workingDirectory))
	defer C.free(unsafe.Pointer(workingDirectory_ms.data))
	return (bool)(C.QProcess_StartDetached3(program_ms, arguments_ma, workingDirectory_ms))
}

func QProcess_StartDetached4(program string, arguments []string, workingDirectory string, pid *int64) bool {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	arguments_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := C.struct_miqt_string{}
		arguments_i_ms.data = C.CString(arguments[i])
		arguments_i_ms.len = C.size_t(len(arguments[i]))
		defer C.free(unsafe.Pointer(arguments_i_ms.data))
		arguments_CArray[i] = arguments_i_ms
	}
	arguments_ma := C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	workingDirectory_ms := C.struct_miqt_string{}
	workingDirectory_ms.data = C.CString(workingDirectory)
	workingDirectory_ms.len = C.size_t(len(workingDirectory))
	defer C.free(unsafe.Pointer(workingDirectory_ms.data))
	return (bool)(C.QProcess_StartDetached4(program_ms, arguments_ma, workingDirectory_ms, (*C.longlong)(unsafe.Pointer(pid))))
}

func (this *QProcess) Finished2(exitCode int, exitStatus QProcess__ExitStatus) {
	C.QProcess_Finished2(this.h, (C.int)(exitCode), (C.int)(exitStatus))
}
func (this *QProcess) OnFinished2(slot func(exitCode int, exitStatus QProcess__ExitStatus)) {
	C.QProcess_connect_Finished2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Finished2
func miqt_exec_callback_QProcess_Finished2(cb C.intptr_t, exitCode C.int, exitStatus C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(exitCode int, exitStatus QProcess__ExitStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(exitCode)

	slotval2 := (QProcess__ExitStatus)(exitStatus)

	gofunc(slotval1, slotval2)
}

// Delete this object from C++ memory.
func (this *QProcess) Delete() {
	C.QProcess_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProcess) GoGC() {
	runtime.SetFinalizer(this, func(this *QProcess) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

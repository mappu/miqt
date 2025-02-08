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

// newQProcessEnvironment constructs the type using only CGO pointers.
func newQProcessEnvironment(h *C.QProcessEnvironment) *QProcessEnvironment {
	if h == nil {
		return nil
	}

	return &QProcessEnvironment{h: h}
}

// UnsafeNewQProcessEnvironment constructs the type using only unsafe pointers.
func UnsafeNewQProcessEnvironment(h unsafe.Pointer) *QProcessEnvironment {
	return newQProcessEnvironment((*C.QProcessEnvironment)(h))
}

// NewQProcessEnvironment constructs a new QProcessEnvironment object.
func NewQProcessEnvironment() *QProcessEnvironment {

	return newQProcessEnvironment(C.QProcessEnvironment_new())
}

// NewQProcessEnvironment2 constructs a new QProcessEnvironment object.
func NewQProcessEnvironment2(param1 QProcessEnvironment__Initialization) *QProcessEnvironment {

	return newQProcessEnvironment(C.QProcessEnvironment_new2((C.int)(param1)))
}

// NewQProcessEnvironment3 constructs a new QProcessEnvironment object.
func NewQProcessEnvironment3(other *QProcessEnvironment) *QProcessEnvironment {

	return newQProcessEnvironment(C.QProcessEnvironment_new3(other.cPointer()))
}

func (this *QProcessEnvironment) OperatorAssign(other *QProcessEnvironment) {
	C.QProcessEnvironment_operatorAssign(this.h, other.cPointer())
}

func (this *QProcessEnvironment) Swap(other *QProcessEnvironment) {
	C.QProcessEnvironment_swap(this.h, other.cPointer())
}

func (this *QProcessEnvironment) OperatorEqual(other *QProcessEnvironment) bool {
	return (bool)(C.QProcessEnvironment_operatorEqual(this.h, other.cPointer()))
}

func (this *QProcessEnvironment) OperatorNotEqual(other *QProcessEnvironment) bool {
	return (bool)(C.QProcessEnvironment_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QProcessEnvironment) IsEmpty() bool {
	return (bool)(C.QProcessEnvironment_isEmpty(this.h))
}

func (this *QProcessEnvironment) InheritsFromParent() bool {
	return (bool)(C.QProcessEnvironment_inheritsFromParent(this.h))
}

func (this *QProcessEnvironment) Clear() {
	C.QProcessEnvironment_clear(this.h)
}

func (this *QProcessEnvironment) Contains(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QProcessEnvironment_contains(this.h, name_ms))
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
	C.QProcessEnvironment_insert(this.h, name_ms, value_ms)
}

func (this *QProcessEnvironment) Remove(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QProcessEnvironment_remove(this.h, name_ms)
}

func (this *QProcessEnvironment) Value(name string) string {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var _ms C.struct_miqt_string = C.QProcessEnvironment_value(this.h, name_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcessEnvironment) ToStringList() []string {
	var _ma C.struct_miqt_array = C.QProcessEnvironment_toStringList(this.h)
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
	var _ma C.struct_miqt_array = C.QProcessEnvironment_keys(this.h)
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
	C.QProcessEnvironment_insertWithQProcessEnvironment(this.h, e.cPointer())
}

func QProcessEnvironment_SystemEnvironment() *QProcessEnvironment {
	_goptr := newQProcessEnvironment(C.QProcessEnvironment_systemEnvironment())
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
	var _ms C.struct_miqt_string = C.QProcessEnvironment_value2(this.h, name_ms, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QProcessEnvironment) Delete() {
	C.QProcessEnvironment_delete(this.h)
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

// newQProcess constructs the type using only CGO pointers.
func newQProcess(h *C.QProcess) *QProcess {
	if h == nil {
		return nil
	}
	var outptr_QIODevice *C.QIODevice = nil
	C.QProcess_virtbase(h, &outptr_QIODevice)

	return &QProcess{h: h,
		QIODevice: newQIODevice(outptr_QIODevice)}
}

// UnsafeNewQProcess constructs the type using only unsafe pointers.
func UnsafeNewQProcess(h unsafe.Pointer) *QProcess {
	return newQProcess((*C.QProcess)(h))
}

// NewQProcess constructs a new QProcess object.
func NewQProcess() *QProcess {

	return newQProcess(C.QProcess_new())
}

// NewQProcess2 constructs a new QProcess object.
func NewQProcess2(parent *QObject) *QProcess {

	return newQProcess(C.QProcess_new2(parent.cPointer()))
}

func (this *QProcess) MetaObject() *QMetaObject {
	return newQMetaObject(C.QProcess_metaObject(this.h))
}

func (this *QProcess) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QProcess_metacast(this.h, param1_Cstring))
}

func QProcess_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) Start(program string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	C.QProcess_start(this.h, program_ms)
}

func (this *QProcess) Start2() {
	C.QProcess_start2(this.h)
}

func (this *QProcess) StartCommand(command string) {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	C.QProcess_startCommand(this.h, command_ms)
}

func (this *QProcess) StartDetached() bool {
	return (bool)(C.QProcess_startDetached(this.h))
}

func (this *QProcess) Open(mode QIODeviceBase__OpenModeFlag) bool {
	return (bool)(C.QProcess_open(this.h, (C.int)(mode)))
}

func (this *QProcess) Program() string {
	var _ms C.struct_miqt_string = C.QProcess_program(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) SetProgram(program string) {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	C.QProcess_setProgram(this.h, program_ms)
}

func (this *QProcess) Arguments() []string {
	var _ma C.struct_miqt_array = C.QProcess_arguments(this.h)
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
	C.QProcess_setArguments(this.h, arguments_ma)
}

func (this *QProcess) ProcessChannelMode() QProcess__ProcessChannelMode {
	return (QProcess__ProcessChannelMode)(C.QProcess_processChannelMode(this.h))
}

func (this *QProcess) SetProcessChannelMode(mode QProcess__ProcessChannelMode) {
	C.QProcess_setProcessChannelMode(this.h, (C.int)(mode))
}

func (this *QProcess) InputChannelMode() QProcess__InputChannelMode {
	return (QProcess__InputChannelMode)(C.QProcess_inputChannelMode(this.h))
}

func (this *QProcess) SetInputChannelMode(mode QProcess__InputChannelMode) {
	C.QProcess_setInputChannelMode(this.h, (C.int)(mode))
}

func (this *QProcess) ReadChannel() QProcess__ProcessChannel {
	return (QProcess__ProcessChannel)(C.QProcess_readChannel(this.h))
}

func (this *QProcess) SetReadChannel(channel QProcess__ProcessChannel) {
	C.QProcess_setReadChannel(this.h, (C.int)(channel))
}

func (this *QProcess) CloseReadChannel(channel QProcess__ProcessChannel) {
	C.QProcess_closeReadChannel(this.h, (C.int)(channel))
}

func (this *QProcess) CloseWriteChannel() {
	C.QProcess_closeWriteChannel(this.h)
}

func (this *QProcess) SetStandardInputFile(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_setStandardInputFile(this.h, fileName_ms)
}

func (this *QProcess) SetStandardOutputFile(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_setStandardOutputFile(this.h, fileName_ms)
}

func (this *QProcess) SetStandardErrorFile(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_setStandardErrorFile(this.h, fileName_ms)
}

func (this *QProcess) SetStandardOutputProcess(destination *QProcess) {
	C.QProcess_setStandardOutputProcess(this.h, destination.cPointer())
}

func (this *QProcess) WorkingDirectory() string {
	var _ms C.struct_miqt_string = C.QProcess_workingDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) SetWorkingDirectory(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QProcess_setWorkingDirectory(this.h, dir_ms)
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
	C.QProcess_setEnvironment(this.h, environment_ma)
}

func (this *QProcess) Environment() []string {
	var _ma C.struct_miqt_array = C.QProcess_environment(this.h)
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
	C.QProcess_setProcessEnvironment(this.h, environment.cPointer())
}

func (this *QProcess) ProcessEnvironment() *QProcessEnvironment {
	_goptr := newQProcessEnvironment(C.QProcess_processEnvironment(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProcess) Error() QProcess__ProcessError {
	return (QProcess__ProcessError)(C.QProcess_error(this.h))
}

func (this *QProcess) State() QProcess__ProcessState {
	return (QProcess__ProcessState)(C.QProcess_state(this.h))
}

func (this *QProcess) ProcessId() int64 {
	return (int64)(C.QProcess_processId(this.h))
}

func (this *QProcess) WaitForStarted() bool {
	return (bool)(C.QProcess_waitForStarted(this.h))
}

func (this *QProcess) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QProcess_waitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QProcess_waitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForFinished() bool {
	return (bool)(C.QProcess_waitForFinished(this.h))
}

func (this *QProcess) ReadAllStandardOutput() []byte {
	var _bytearray C.struct_miqt_string = C.QProcess_readAllStandardOutput(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QProcess) ReadAllStandardError() []byte {
	var _bytearray C.struct_miqt_string = C.QProcess_readAllStandardError(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QProcess) ExitCode() int {
	return (int)(C.QProcess_exitCode(this.h))
}

func (this *QProcess) ExitStatus() QProcess__ExitStatus {
	return (QProcess__ExitStatus)(C.QProcess_exitStatus(this.h))
}

func (this *QProcess) BytesToWrite() int64 {
	return (int64)(C.QProcess_bytesToWrite(this.h))
}

func (this *QProcess) IsSequential() bool {
	return (bool)(C.QProcess_isSequential(this.h))
}

func (this *QProcess) Close() {
	C.QProcess_close(this.h)
}

func QProcess_Execute(program string) int {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	return (int)(C.QProcess_execute(program_ms))
}

func QProcess_StartDetachedWithProgram(program string) bool {
	program_ms := C.struct_miqt_string{}
	program_ms.data = C.CString(program)
	program_ms.len = C.size_t(len(program))
	defer C.free(unsafe.Pointer(program_ms.data))
	return (bool)(C.QProcess_startDetachedWithProgram(program_ms))
}

func QProcess_SystemEnvironment() []string {
	var _ma C.struct_miqt_array = C.QProcess_systemEnvironment()
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
	var _ms C.struct_miqt_string = C.QProcess_nullDevice()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) Terminate() {
	C.QProcess_terminate(this.h)
}

func (this *QProcess) Kill() {
	C.QProcess_kill(this.h)
}

func (this *QProcess) Finished(exitCode int) {
	C.QProcess_finished(this.h, (C.int)(exitCode))
}
func (this *QProcess) OnFinished(slot func(exitCode int)) {
	C.QProcess_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_finished
func miqt_exec_callback_QProcess_finished(cb C.intptr_t, exitCode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(exitCode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(exitCode)

	gofunc(slotval1)
}

func (this *QProcess) ErrorOccurred(error QProcess__ProcessError) {
	C.QProcess_errorOccurred(this.h, (C.int)(error))
}
func (this *QProcess) OnErrorOccurred(slot func(error QProcess__ProcessError)) {
	C.QProcess_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_errorOccurred
func miqt_exec_callback_QProcess_errorOccurred(cb C.intptr_t, error C.int) {
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
	var _ms C.struct_miqt_string = C.QProcess_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProcess_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_tr3(s_Cstring, c_Cstring, (C.int)(n))
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
	C.QProcess_start22(this.h, program_ms, arguments_ma)
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
	C.QProcess_start3(this.h, program_ms, arguments_ma, (C.int)(mode))
}

func (this *QProcess) Start1(mode QIODeviceBase__OpenModeFlag) {
	C.QProcess_start1(this.h, (C.int)(mode))
}

func (this *QProcess) StartCommand2(command string, mode QIODeviceBase__OpenModeFlag) {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	C.QProcess_startCommand2(this.h, command_ms, (C.int)(mode))
}

func (this *QProcess) StartDetached1(pid *int64) bool {
	return (bool)(C.QProcess_startDetached1(this.h, (*C.longlong)(unsafe.Pointer(pid))))
}

func (this *QProcess) SetStandardOutputFile2(fileName string, mode QIODeviceBase__OpenModeFlag) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_setStandardOutputFile2(this.h, fileName_ms, (C.int)(mode))
}

func (this *QProcess) SetStandardErrorFile2(fileName string, mode QIODeviceBase__OpenModeFlag) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_setStandardErrorFile2(this.h, fileName_ms, (C.int)(mode))
}

func (this *QProcess) WaitForStarted1(msecs int) bool {
	return (bool)(C.QProcess_waitForStarted1(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForFinished1(msecs int) bool {
	return (bool)(C.QProcess_waitForFinished1(this.h, (C.int)(msecs)))
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
	return (int)(C.QProcess_execute2(program_ms, arguments_ma))
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
	return (bool)(C.QProcess_startDetached2(program_ms, arguments_ma))
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
	return (bool)(C.QProcess_startDetached3(program_ms, arguments_ma, workingDirectory_ms))
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
	return (bool)(C.QProcess_startDetached4(program_ms, arguments_ma, workingDirectory_ms, (*C.longlong)(unsafe.Pointer(pid))))
}

func (this *QProcess) Finished2(exitCode int, exitStatus QProcess__ExitStatus) {
	C.QProcess_finished2(this.h, (C.int)(exitCode), (C.int)(exitStatus))
}
func (this *QProcess) OnFinished2(slot func(exitCode int, exitStatus QProcess__ExitStatus)) {
	C.QProcess_connect_finished2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_finished2
func miqt_exec_callback_QProcess_finished2(cb C.intptr_t, exitCode C.int, exitStatus C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(exitCode int, exitStatus QProcess__ExitStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(exitCode)

	slotval2 := (QProcess__ExitStatus)(exitStatus)

	gofunc(slotval1, slotval2)
}

// SetProcessState can only be called from a QProcess that was directly constructed.
func (this *QProcess) SetProcessState(state QProcess__ProcessState) {

	var _dynamic_cast_ok C.bool = false
	C.QProcess_protectedbase_setProcessState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOpenMode can only be called from a QProcess that was directly constructed.
func (this *QProcess) SetOpenMode(openMode QIODeviceBase__OpenModeFlag) {

	var _dynamic_cast_ok C.bool = false
	C.QProcess_protectedbase_setOpenMode(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(openMode))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetErrorString can only be called from a QProcess that was directly constructed.
func (this *QProcess) SetErrorString(errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))

	var _dynamic_cast_ok C.bool = false
	C.QProcess_protectedbase_setErrorString(&_dynamic_cast_ok, unsafe.Pointer(this.h), errorString_ms)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QProcess that was directly constructed.
func (this *QProcess) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QProcess_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QProcess that was directly constructed.
func (this *QProcess) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QProcess_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QProcess that was directly constructed.
func (this *QProcess) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QProcess_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QProcess that was directly constructed.
func (this *QProcess) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QProcess_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QProcess) callVirtualBase_Open(mode QIODeviceBase__OpenModeFlag) bool {

	return (bool)(C.QProcess_virtualbase_open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QProcess) OnOpen(slot func(super func(mode QIODeviceBase__OpenModeFlag) bool, mode QIODeviceBase__OpenModeFlag) bool) {
	ok := C.QProcess_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_open
func miqt_exec_callback_QProcess_open(self *C.QProcess, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QIODeviceBase__OpenModeFlag) bool, mode QIODeviceBase__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODeviceBase__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QProcess_virtualbase_waitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QProcess) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QProcess_override_virtual_waitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_waitForReadyRead
func miqt_exec_callback_QProcess_waitForReadyRead(self *C.QProcess, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QProcess_virtualbase_waitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QProcess) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QProcess_override_virtual_waitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_waitForBytesWritten
func miqt_exec_callback_QProcess_waitForBytesWritten(self *C.QProcess, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QProcess_virtualbase_bytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QProcess_override_virtual_bytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_bytesToWrite
func miqt_exec_callback_QProcess_bytesToWrite(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_IsSequential() bool {

	return (bool)(C.QProcess_virtualbase_isSequential(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QProcess_override_virtual_isSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_isSequential
func miqt_exec_callback_QProcess_isSequential(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Close() {

	C.QProcess_virtualbase_close(unsafe.Pointer(this.h))

}
func (this *QProcess) OnClose(slot func(super func())) {
	ok := C.QProcess_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_close
func miqt_exec_callback_QProcess_close(self *C.QProcess, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProcess{h: self}).callVirtualBase_Close)

}

func (this *QProcess) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QProcess_virtualbase_readData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QProcess) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QProcess_override_virtual_readData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_readData
func miqt_exec_callback_QProcess_readData(self *C.QProcess, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_WriteData(data string, lenVal int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QProcess_virtualbase_writeData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QProcess) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	ok := C.QProcess_override_virtual_writeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_writeData
func miqt_exec_callback_QProcess_writeData(self *C.QProcess, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(lenVal)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Pos() int64 {

	return (int64)(C.QProcess_virtualbase_pos(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnPos(slot func(super func() int64) int64) {
	ok := C.QProcess_override_virtual_pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_pos
func miqt_exec_callback_QProcess_pos(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Size() int64 {

	return (int64)(C.QProcess_virtualbase_size(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnSize(slot func(super func() int64) int64) {
	ok := C.QProcess_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_size
func miqt_exec_callback_QProcess_size(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QProcess_virtualbase_seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QProcess) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QProcess_override_virtual_seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_seek
func miqt_exec_callback_QProcess_seek(self *C.QProcess, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_AtEnd() bool {

	return (bool)(C.QProcess_virtualbase_atEnd(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QProcess_override_virtual_atEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_atEnd
func miqt_exec_callback_QProcess_atEnd(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Reset() bool {

	return (bool)(C.QProcess_virtualbase_reset(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnReset(slot func(super func() bool) bool) {
	ok := C.QProcess_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_reset
func miqt_exec_callback_QProcess_reset(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QProcess_virtualbase_bytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QProcess_override_virtual_bytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_bytesAvailable
func miqt_exec_callback_QProcess_bytesAvailable(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QProcess_virtualbase_canReadLine(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QProcess_override_virtual_canReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_canReadLine
func miqt_exec_callback_QProcess_canReadLine(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QProcess_virtualbase_readLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QProcess) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QProcess_override_virtual_readLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_readLineData
func miqt_exec_callback_QProcess_readLineData(self *C.QProcess, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_SkipData(maxSize int64) int64 {

	return (int64)(C.QProcess_virtualbase_skipData(unsafe.Pointer(this.h), (C.longlong)(maxSize)))

}
func (this *QProcess) OnSkipData(slot func(super func(maxSize int64) int64, maxSize int64) int64) {
	ok := C.QProcess_override_virtual_skipData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_skipData
func miqt_exec_callback_QProcess_skipData(self *C.QProcess, cb C.intptr_t, maxSize C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxSize int64) int64, maxSize int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(maxSize)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_SkipData, slotval1)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QProcess_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QProcess) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QProcess_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_event
func miqt_exec_callback_QProcess_event(self *C.QProcess, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QProcess_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QProcess) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QProcess_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_eventFilter
func miqt_exec_callback_QProcess_eventFilter(self *C.QProcess, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QProcess_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProcess) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QProcess_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_timerEvent
func miqt_exec_callback_QProcess_timerEvent(self *C.QProcess, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QProcess{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QProcess) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QProcess_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProcess) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QProcess_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_childEvent
func miqt_exec_callback_QProcess_childEvent(self *C.QProcess, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QProcess{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QProcess) callVirtualBase_CustomEvent(event *QEvent) {

	C.QProcess_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QProcess) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QProcess_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_customEvent
func miqt_exec_callback_QProcess_customEvent(self *C.QProcess, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QProcess{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QProcess) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QProcess_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProcess) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProcess_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_connectNotify
func miqt_exec_callback_QProcess_connectNotify(self *C.QProcess, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QProcess{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QProcess) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QProcess_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QProcess) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QProcess_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QProcess_disconnectNotify
func miqt_exec_callback_QProcess_disconnectNotify(self *C.QProcess, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QProcess{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QProcess) Delete() {
	C.QProcess_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProcess) GoGC() {
	runtime.SetFinalizer(this, func(this *QProcess) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

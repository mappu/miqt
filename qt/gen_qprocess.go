package qt

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

func newQProcessEnvironment(h *C.QProcessEnvironment) *QProcessEnvironment {
	if h == nil {
		return nil
	}
	return &QProcessEnvironment{h: h}
}

func newQProcessEnvironment_U(h unsafe.Pointer) *QProcessEnvironment {
	return newQProcessEnvironment((*C.QProcessEnvironment)(h))
}

// NewQProcessEnvironment constructs a new QProcessEnvironment object.
func NewQProcessEnvironment() *QProcessEnvironment {
	ret := C.QProcessEnvironment_new()
	return newQProcessEnvironment(ret)
}

// NewQProcessEnvironment2 constructs a new QProcessEnvironment object.
func NewQProcessEnvironment2(other *QProcessEnvironment) *QProcessEnvironment {
	ret := C.QProcessEnvironment_new2(other.cPointer())
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

func (this *QProcessEnvironment) Clear() {
	C.QProcessEnvironment_Clear(this.h)
}

func (this *QProcessEnvironment) Contains(name string) bool {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	return (bool)(C.QProcessEnvironment_Contains(this.h, (*C.struct_miqt_string)(name_ms)))
}

func (this *QProcessEnvironment) Insert(name string, value string) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	value_ms := miqt_strdupg(value)
	defer C.free(value_ms)
	C.QProcessEnvironment_Insert(this.h, (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(value_ms))
}

func (this *QProcessEnvironment) Remove(name string) {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	C.QProcessEnvironment_Remove(this.h, (*C.struct_miqt_string)(name_ms))
}

func (this *QProcessEnvironment) Value(name string) string {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	var _ms *C.struct_miqt_string = C.QProcessEnvironment_Value(this.h, (*C.struct_miqt_string)(name_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProcessEnvironment) ToStringList() []string {
	var _ma *C.struct_miqt_array = C.QProcessEnvironment_ToStringList(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QProcessEnvironment) Keys() []string {
	var _ma *C.struct_miqt_array = C.QProcessEnvironment_Keys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
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
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	defaultValue_ms := miqt_strdupg(defaultValue)
	defer C.free(defaultValue_ms)
	var _ms *C.struct_miqt_string = C.QProcessEnvironment_Value2(this.h, (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(defaultValue_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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

func newQProcess(h *C.QProcess) *QProcess {
	if h == nil {
		return nil
	}
	return &QProcess{h: h, QIODevice: newQIODevice_U(unsafe.Pointer(h))}
}

func newQProcess_U(h unsafe.Pointer) *QProcess {
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
	return newQMetaObject_U(unsafe.Pointer(C.QProcess_MetaObject(this.h)))
}

func QProcess_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QProcess_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProcess_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QProcess_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProcess) Start(program string, arguments []string) {
	program_ms := miqt_strdupg(program)
	defer C.free(program_ms)
	// For the C ABI, malloc a C array of raw pointers
	arguments_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := miqt_strdupg(arguments[i])
		defer C.free(arguments_i_ms)
		arguments_CArray[i] = (*C.struct_miqt_string)(arguments_i_ms)
	}
	arguments_ma := &C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(arguments_ma))
	C.QProcess_Start(this.h, (*C.struct_miqt_string)(program_ms), arguments_ma)
}

func (this *QProcess) StartWithCommand(command string) {
	command_ms := miqt_strdupg(command)
	defer C.free(command_ms)
	C.QProcess_StartWithCommand(this.h, (*C.struct_miqt_string)(command_ms))
}

func (this *QProcess) Start2() {
	C.QProcess_Start2(this.h)
}

func (this *QProcess) StartDetached() bool {
	return (bool)(C.QProcess_StartDetached(this.h))
}

func (this *QProcess) Open() bool {
	return (bool)(C.QProcess_Open(this.h))
}

func (this *QProcess) Program() string {
	var _ms *C.struct_miqt_string = C.QProcess_Program(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProcess) SetProgram(program string) {
	program_ms := miqt_strdupg(program)
	defer C.free(program_ms)
	C.QProcess_SetProgram(this.h, (*C.struct_miqt_string)(program_ms))
}

func (this *QProcess) Arguments() []string {
	var _ma *C.struct_miqt_array = C.QProcess_Arguments(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QProcess) SetArguments(arguments []string) {
	// For the C ABI, malloc a C array of raw pointers
	arguments_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := miqt_strdupg(arguments[i])
		defer C.free(arguments_i_ms)
		arguments_CArray[i] = (*C.struct_miqt_string)(arguments_i_ms)
	}
	arguments_ma := &C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(arguments_ma))
	C.QProcess_SetArguments(this.h, arguments_ma)
}

func (this *QProcess) ReadChannelMode() QProcess__ProcessChannelMode {
	return (QProcess__ProcessChannelMode)(C.QProcess_ReadChannelMode(this.h))
}

func (this *QProcess) SetReadChannelMode(mode QProcess__ProcessChannelMode) {
	C.QProcess_SetReadChannelMode(this.h, (C.int)(mode))
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
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QProcess_SetStandardInputFile(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QProcess) SetStandardOutputFile(fileName string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QProcess_SetStandardOutputFile(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QProcess) SetStandardErrorFile(fileName string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QProcess_SetStandardErrorFile(this.h, (*C.struct_miqt_string)(fileName_ms))
}

func (this *QProcess) SetStandardOutputProcess(destination *QProcess) {
	C.QProcess_SetStandardOutputProcess(this.h, destination.cPointer())
}

func (this *QProcess) WorkingDirectory() string {
	var _ms *C.struct_miqt_string = C.QProcess_WorkingDirectory(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProcess) SetWorkingDirectory(dir string) {
	dir_ms := miqt_strdupg(dir)
	defer C.free(dir_ms)
	C.QProcess_SetWorkingDirectory(this.h, (*C.struct_miqt_string)(dir_ms))
}

func (this *QProcess) SetEnvironment(environment []string) {
	// For the C ABI, malloc a C array of raw pointers
	environment_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(environment))))
	defer C.free(unsafe.Pointer(environment_CArray))
	for i := range environment {
		environment_i_ms := miqt_strdupg(environment[i])
		defer C.free(environment_i_ms)
		environment_CArray[i] = (*C.struct_miqt_string)(environment_i_ms)
	}
	environment_ma := &C.struct_miqt_array{len: C.size_t(len(environment)), data: unsafe.Pointer(environment_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(environment_ma))
	C.QProcess_SetEnvironment(this.h, environment_ma)
}

func (this *QProcess) Environment() []string {
	var _ma *C.struct_miqt_array = C.QProcess_Environment(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
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

func (this *QProcess) Pid() int64 {
	if runtime.GOOS != "linux" {
		panic("Unsupported OS")
	}

	return (int64)(C.QProcess_Pid(this.h))
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

func (this *QProcess) ReadAllStandardOutput() *QByteArray {
	_ret := C.QProcess_ReadAllStandardOutput(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProcess) ReadAllStandardError() *QByteArray {
	_ret := C.QProcess_ReadAllStandardError(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProcess) ExitCode() int {
	return (int)(C.QProcess_ExitCode(this.h))
}

func (this *QProcess) ExitStatus() QProcess__ExitStatus {
	return (QProcess__ExitStatus)(C.QProcess_ExitStatus(this.h))
}

func (this *QProcess) BytesAvailable() int64 {
	return (int64)(C.QProcess_BytesAvailable(this.h))
}

func (this *QProcess) BytesToWrite() int64 {
	return (int64)(C.QProcess_BytesToWrite(this.h))
}

func (this *QProcess) IsSequential() bool {
	return (bool)(C.QProcess_IsSequential(this.h))
}

func (this *QProcess) CanReadLine() bool {
	return (bool)(C.QProcess_CanReadLine(this.h))
}

func (this *QProcess) Close() {
	C.QProcess_Close(this.h)
}

func (this *QProcess) AtEnd() bool {
	return (bool)(C.QProcess_AtEnd(this.h))
}

func QProcess_Execute(program string, arguments []string) int {
	program_ms := miqt_strdupg(program)
	defer C.free(program_ms)
	// For the C ABI, malloc a C array of raw pointers
	arguments_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := miqt_strdupg(arguments[i])
		defer C.free(arguments_i_ms)
		arguments_CArray[i] = (*C.struct_miqt_string)(arguments_i_ms)
	}
	arguments_ma := &C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(arguments_ma))
	return (int)(C.QProcess_Execute((*C.struct_miqt_string)(program_ms), arguments_ma))
}

func QProcess_ExecuteWithCommand(command string) int {
	command_ms := miqt_strdupg(command)
	defer C.free(command_ms)
	return (int)(C.QProcess_ExecuteWithCommand((*C.struct_miqt_string)(command_ms)))
}

func QProcess_StartDetached2(program string, arguments []string, workingDirectory string) bool {
	program_ms := miqt_strdupg(program)
	defer C.free(program_ms)
	// For the C ABI, malloc a C array of raw pointers
	arguments_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := miqt_strdupg(arguments[i])
		defer C.free(arguments_i_ms)
		arguments_CArray[i] = (*C.struct_miqt_string)(arguments_i_ms)
	}
	arguments_ma := &C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(arguments_ma))
	workingDirectory_ms := miqt_strdupg(workingDirectory)
	defer C.free(workingDirectory_ms)
	return (bool)(C.QProcess_StartDetached2((*C.struct_miqt_string)(program_ms), arguments_ma, (*C.struct_miqt_string)(workingDirectory_ms)))
}

func QProcess_StartDetached3(program string, arguments []string) bool {
	program_ms := miqt_strdupg(program)
	defer C.free(program_ms)
	// For the C ABI, malloc a C array of raw pointers
	arguments_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := miqt_strdupg(arguments[i])
		defer C.free(arguments_i_ms)
		arguments_CArray[i] = (*C.struct_miqt_string)(arguments_i_ms)
	}
	arguments_ma := &C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(arguments_ma))
	return (bool)(C.QProcess_StartDetached3((*C.struct_miqt_string)(program_ms), arguments_ma))
}

func QProcess_StartDetachedWithCommand(command string) bool {
	command_ms := miqt_strdupg(command)
	defer C.free(command_ms)
	return (bool)(C.QProcess_StartDetachedWithCommand((*C.struct_miqt_string)(command_ms)))
}

func QProcess_SystemEnvironment() []string {
	var _ma *C.struct_miqt_array = C.QProcess_SystemEnvironment()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QProcess_NullDevice() string {
	var _ms *C.struct_miqt_string = C.QProcess_NullDevice()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	C.QProcess_connect_Finished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QProcess_Finished
func miqt_exec_callback_QProcess_Finished(cb *C.void, exitCode C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(exitCode int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(exitCode)

	gofunc(slotval1)
}

func (this *QProcess) Finished2(exitCode int, exitStatus QProcess__ExitStatus) {
	C.QProcess_Finished2(this.h, (C.int)(exitCode), (C.int)(exitStatus))
}
func (this *QProcess) OnFinished2(slot func(exitCode int, exitStatus QProcess__ExitStatus)) {
	C.QProcess_connect_Finished2(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QProcess_Finished2
func miqt_exec_callback_QProcess_Finished2(cb *C.void, exitCode C.int, exitStatus C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(exitCode int, exitStatus QProcess__ExitStatus))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(exitCode)

	slotval2 := (QProcess__ExitStatus)(exitStatus)

	gofunc(slotval1, slotval2)
}

func (this *QProcess) ErrorWithError(error QProcess__ProcessError) {
	C.QProcess_ErrorWithError(this.h, (C.int)(error))
}
func (this *QProcess) OnErrorWithError(slot func(error QProcess__ProcessError)) {
	C.QProcess_connect_ErrorWithError(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QProcess_ErrorWithError
func miqt_exec_callback_QProcess_ErrorWithError(cb *C.void, error C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(error QProcess__ProcessError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QProcess__ProcessError)(error)

	gofunc(slotval1)
}

func (this *QProcess) ErrorOccurred(error QProcess__ProcessError) {
	C.QProcess_ErrorOccurred(this.h, (C.int)(error))
}
func (this *QProcess) OnErrorOccurred(slot func(error QProcess__ProcessError)) {
	C.QProcess_connect_ErrorOccurred(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QProcess_ErrorOccurred
func miqt_exec_callback_QProcess_ErrorOccurred(cb *C.void, error C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(error QProcess__ProcessError))
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
	var _ms *C.struct_miqt_string = C.QProcess_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProcess_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QProcess_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProcess_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QProcess_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QProcess_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QProcess_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QProcess) Start3(program string, arguments []string, mode QIODevice__OpenModeFlag) {
	program_ms := miqt_strdupg(program)
	defer C.free(program_ms)
	// For the C ABI, malloc a C array of raw pointers
	arguments_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := miqt_strdupg(arguments[i])
		defer C.free(arguments_i_ms)
		arguments_CArray[i] = (*C.struct_miqt_string)(arguments_i_ms)
	}
	arguments_ma := &C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(arguments_ma))
	C.QProcess_Start3(this.h, (*C.struct_miqt_string)(program_ms), arguments_ma, (C.int)(mode))
}

func (this *QProcess) Start22(command string, mode QIODevice__OpenModeFlag) {
	command_ms := miqt_strdupg(command)
	defer C.free(command_ms)
	C.QProcess_Start22(this.h, (*C.struct_miqt_string)(command_ms), (C.int)(mode))
}

func (this *QProcess) Start1(mode QIODevice__OpenModeFlag) {
	C.QProcess_Start1(this.h, (C.int)(mode))
}

func (this *QProcess) StartDetached1(pid *int64) bool {
	return (bool)(C.QProcess_StartDetached1(this.h, (*C.longlong)(unsafe.Pointer(pid))))
}

func (this *QProcess) Open1(mode QIODevice__OpenModeFlag) bool {
	return (bool)(C.QProcess_Open1(this.h, (C.int)(mode)))
}

func (this *QProcess) SetStandardOutputFile2(fileName string, mode QIODevice__OpenModeFlag) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QProcess_SetStandardOutputFile2(this.h, (*C.struct_miqt_string)(fileName_ms), (C.int)(mode))
}

func (this *QProcess) SetStandardErrorFile2(fileName string, mode QIODevice__OpenModeFlag) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QProcess_SetStandardErrorFile2(this.h, (*C.struct_miqt_string)(fileName_ms), (C.int)(mode))
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

func QProcess_StartDetached4(program string, arguments []string, workingDirectory string, pid *int64) bool {
	program_ms := miqt_strdupg(program)
	defer C.free(program_ms)
	// For the C ABI, malloc a C array of raw pointers
	arguments_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	for i := range arguments {
		arguments_i_ms := miqt_strdupg(arguments[i])
		defer C.free(arguments_i_ms)
		arguments_CArray[i] = (*C.struct_miqt_string)(arguments_i_ms)
	}
	arguments_ma := &C.struct_miqt_array{len: C.size_t(len(arguments)), data: unsafe.Pointer(arguments_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(arguments_ma))
	workingDirectory_ms := miqt_strdupg(workingDirectory)
	defer C.free(workingDirectory_ms)
	return (bool)(C.QProcess_StartDetached4((*C.struct_miqt_string)(program_ms), arguments_ma, (*C.struct_miqt_string)(workingDirectory_ms), (*C.longlong)(unsafe.Pointer(pid))))
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

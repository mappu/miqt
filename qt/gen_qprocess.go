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
	h          *C.QProcessEnvironment
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QProcessEnvironment{h: (*C.QProcessEnvironment)(h)}
}

// NewQProcessEnvironment constructs a new QProcessEnvironment object.
func NewQProcessEnvironment() *QProcessEnvironment {
	var outptr_QProcessEnvironment *C.QProcessEnvironment = nil

	C.QProcessEnvironment_new(&outptr_QProcessEnvironment)
	ret := newQProcessEnvironment(outptr_QProcessEnvironment)
	ret.isSubclass = true
	return ret
}

// NewQProcessEnvironment2 constructs a new QProcessEnvironment object.
func NewQProcessEnvironment2(other *QProcessEnvironment) *QProcessEnvironment {
	var outptr_QProcessEnvironment *C.QProcessEnvironment = nil

	C.QProcessEnvironment_new2(other.cPointer(), &outptr_QProcessEnvironment)
	ret := newQProcessEnvironment(outptr_QProcessEnvironment)
	ret.isSubclass = true
	return ret
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
	C.QProcessEnvironment_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QProcess
	isSubclass bool
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
func newQProcess(h *C.QProcess, h_QIODevice *C.QIODevice, h_QObject *C.QObject) *QProcess {
	if h == nil {
		return nil
	}
	return &QProcess{h: h,
		QIODevice: newQIODevice(h_QIODevice, h_QObject)}
}

// UnsafeNewQProcess constructs the type using only unsafe pointers.
func UnsafeNewQProcess(h unsafe.Pointer, h_QIODevice unsafe.Pointer, h_QObject unsafe.Pointer) *QProcess {
	if h == nil {
		return nil
	}

	return &QProcess{h: (*C.QProcess)(h),
		QIODevice: UnsafeNewQIODevice(h_QIODevice, h_QObject)}
}

// NewQProcess constructs a new QProcess object.
func NewQProcess() *QProcess {
	var outptr_QProcess *C.QProcess = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil

	C.QProcess_new(&outptr_QProcess, &outptr_QIODevice, &outptr_QObject)
	ret := newQProcess(outptr_QProcess, outptr_QIODevice, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQProcess2 constructs a new QProcess object.
func NewQProcess2(parent *QObject) *QProcess {
	var outptr_QProcess *C.QProcess = nil
	var outptr_QIODevice *C.QIODevice = nil
	var outptr_QObject *C.QObject = nil

	C.QProcess_new2(parent.cPointer(), &outptr_QProcess, &outptr_QIODevice, &outptr_QObject)
	ret := newQProcess(outptr_QProcess, outptr_QIODevice, outptr_QObject)
	ret.isSubclass = true
	return ret
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

func QProcess_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) Start(program string, arguments []string) {
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
	C.QProcess_Start(this.h, program_ms, arguments_ma)
}

func (this *QProcess) StartWithCommand(command string) {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	C.QProcess_StartWithCommand(this.h, command_ms)
}

func (this *QProcess) Start2() {
	C.QProcess_Start2(this.h)
}

func (this *QProcess) StartDetached() bool {
	return (bool)(C.QProcess_StartDetached(this.h))
}

func (this *QProcess) Open(mode QIODevice__OpenModeFlag) bool {
	return (bool)(C.QProcess_Open(this.h, (C.int)(mode)))
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

func (this *QProcess) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QProcess_WaitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QProcess_WaitForBytesWritten(this.h, (C.int)(msecs)))
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
	return (int)(C.QProcess_Execute(program_ms, arguments_ma))
}

func QProcess_ExecuteWithCommand(command string) int {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	return (int)(C.QProcess_ExecuteWithCommand(command_ms))
}

func QProcess_StartDetached2(program string, arguments []string, workingDirectory string) bool {
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
	return (bool)(C.QProcess_StartDetached2(program_ms, arguments_ma, workingDirectory_ms))
}

func QProcess_StartDetached3(program string, arguments []string) bool {
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
	return (bool)(C.QProcess_StartDetached3(program_ms, arguments_ma))
}

func QProcess_StartDetachedWithCommand(command string) bool {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	return (bool)(C.QProcess_StartDetachedWithCommand(command_ms))
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

func (this *QProcess) ErrorWithError(error QProcess__ProcessError) {
	C.QProcess_ErrorWithError(this.h, (C.int)(error))
}
func (this *QProcess) OnErrorWithError(slot func(error QProcess__ProcessError)) {
	C.QProcess_connect_ErrorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_ErrorWithError
func miqt_exec_callback_QProcess_ErrorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QProcess__ProcessError))
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

func QProcess_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProcess_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProcess_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProcess) Start3(program string, arguments []string, mode QIODevice__OpenModeFlag) {
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

func (this *QProcess) Start22(command string, mode QIODevice__OpenModeFlag) {
	command_ms := C.struct_miqt_string{}
	command_ms.data = C.CString(command)
	command_ms.len = C.size_t(len(command))
	defer C.free(unsafe.Pointer(command_ms.data))
	C.QProcess_Start22(this.h, command_ms, (C.int)(mode))
}

func (this *QProcess) Start1(mode QIODevice__OpenModeFlag) {
	C.QProcess_Start1(this.h, (C.int)(mode))
}

func (this *QProcess) StartDetached1(pid *int64) bool {
	return (bool)(C.QProcess_StartDetached1(this.h, (*C.longlong)(unsafe.Pointer(pid))))
}

func (this *QProcess) SetStandardOutputFile2(fileName string, mode QIODevice__OpenModeFlag) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_SetStandardOutputFile2(this.h, fileName_ms, (C.int)(mode))
}

func (this *QProcess) SetStandardErrorFile2(fileName string, mode QIODevice__OpenModeFlag) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QProcess_SetStandardErrorFile2(this.h, fileName_ms, (C.int)(mode))
}

func (this *QProcess) WaitForStarted1(msecs int) bool {
	return (bool)(C.QProcess_WaitForStarted1(this.h, (C.int)(msecs)))
}

func (this *QProcess) WaitForFinished1(msecs int) bool {
	return (bool)(C.QProcess_WaitForFinished1(this.h, (C.int)(msecs)))
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

func (this *QProcess) callVirtualBase_Open(mode QIODevice__OpenModeFlag) bool {

	return (bool)(C.QProcess_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(mode)))

}
func (this *QProcess) OnOpen(slot func(super func(mode QIODevice__OpenModeFlag) bool, mode QIODevice__OpenModeFlag) bool) {
	C.QProcess_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Open
func miqt_exec_callback_QProcess_Open(self *C.QProcess, cb C.intptr_t, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QIODevice__OpenModeFlag) bool, mode QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIODevice__OpenModeFlag)(mode)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QProcess_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QProcess) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	C.QProcess_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_WaitForReadyRead
func miqt_exec_callback_QProcess_WaitForReadyRead(self *C.QProcess, cb C.intptr_t, msecs C.int) C.bool {
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

	return (bool)(C.QProcess_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QProcess) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	C.QProcess_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_WaitForBytesWritten
func miqt_exec_callback_QProcess_WaitForBytesWritten(self *C.QProcess, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QProcess_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnBytesAvailable(slot func(super func() int64) int64) {
	C.QProcess_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_BytesAvailable
func miqt_exec_callback_QProcess_BytesAvailable(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QProcess_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnBytesToWrite(slot func(super func() int64) int64) {
	C.QProcess_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_BytesToWrite
func miqt_exec_callback_QProcess_BytesToWrite(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_IsSequential() bool {

	return (bool)(C.QProcess_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnIsSequential(slot func(super func() bool) bool) {
	C.QProcess_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_IsSequential
func miqt_exec_callback_QProcess_IsSequential(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QProcess_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnCanReadLine(slot func(super func() bool) bool) {
	C.QProcess_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_CanReadLine
func miqt_exec_callback_QProcess_CanReadLine(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Close() {

	C.QProcess_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QProcess) OnClose(slot func(super func())) {
	C.QProcess_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Close
func miqt_exec_callback_QProcess_Close(self *C.QProcess, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProcess{h: self}).callVirtualBase_Close)

}

func (this *QProcess) callVirtualBase_AtEnd() bool {

	return (bool)(C.QProcess_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnAtEnd(slot func(super func() bool) bool) {
	C.QProcess_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_AtEnd
func miqt_exec_callback_QProcess_AtEnd(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_SetupChildProcess() {

	C.QProcess_virtualbase_SetupChildProcess(unsafe.Pointer(this.h))

}
func (this *QProcess) OnSetupChildProcess(slot func(super func())) {
	C.QProcess_override_virtual_SetupChildProcess(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_SetupChildProcess
func miqt_exec_callback_QProcess_SetupChildProcess(self *C.QProcess, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QProcess{h: self}).callVirtualBase_SetupChildProcess)

}

func (this *QProcess) callVirtualBase_ReadData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QProcess_virtualbase_ReadData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QProcess) OnReadData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	C.QProcess_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_ReadData
func miqt_exec_callback_QProcess_ReadData(self *C.QProcess, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

	return (int64)(C.QProcess_virtualbase_WriteData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(lenVal)))

}
func (this *QProcess) OnWriteData(slot func(super func(data string, lenVal int64) int64, data string, lenVal int64) int64) {
	C.QProcess_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_WriteData
func miqt_exec_callback_QProcess_WriteData(self *C.QProcess, cb C.intptr_t, data *C.const_char, lenVal C.longlong) C.longlong {
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

	return (int64)(C.QProcess_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnPos(slot func(super func() int64) int64) {
	C.QProcess_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Pos
func miqt_exec_callback_QProcess_Pos(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Size() int64 {

	return (int64)(C.QProcess_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnSize(slot func(super func() int64) int64) {
	C.QProcess_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Size
func miqt_exec_callback_QProcess_Size(self *C.QProcess, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QProcess_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QProcess) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	C.QProcess_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Seek
func miqt_exec_callback_QProcess_Seek(self *C.QProcess, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_Reset() bool {

	return (bool)(C.QProcess_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QProcess) OnReset(slot func(super func() bool) bool) {
	C.QProcess_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_Reset
func miqt_exec_callback_QProcess_Reset(self *C.QProcess, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QProcess{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QProcess) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QProcess_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QProcess) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	C.QProcess_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProcess_ReadLineData
func miqt_exec_callback_QProcess_ReadLineData(self *C.QProcess, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
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

// Delete this object from C++ memory.
func (this *QProcess) Delete() {
	C.QProcess_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProcess) GoGC() {
	runtime.SetFinalizer(this, func(this *QProcess) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

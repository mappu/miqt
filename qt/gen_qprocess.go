package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qprocess.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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
	ret := C.QProcessEnvironment_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QProcessEnvironment) OperatorNotEqual(other *QProcessEnvironment) bool {
	ret := C.QProcessEnvironment_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QProcessEnvironment) IsEmpty() bool {
	ret := C.QProcessEnvironment_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QProcessEnvironment) Clear() {
	C.QProcessEnvironment_Clear(this.h)
}

func (this *QProcessEnvironment) Contains(name string) bool {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QProcessEnvironment_Contains(this.h, name_Cstring, C.ulong(len(name)))
	return (bool)(ret)
}

func (this *QProcessEnvironment) Insert(name string, value string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.QProcessEnvironment_Insert(this.h, name_Cstring, C.ulong(len(name)), value_Cstring, C.ulong(len(value)))
}

func (this *QProcessEnvironment) Remove(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QProcessEnvironment_Remove(this.h, name_Cstring, C.ulong(len(name)))
}

func (this *QProcessEnvironment) Value(name string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcessEnvironment_Value(this.h, name_Cstring, C.ulong(len(name)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcessEnvironment) ToStringList() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QProcessEnvironment_ToStringList(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcessEnvironment) Keys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QProcessEnvironment_Keys(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcessEnvironment) InsertWithQProcessEnvironment(e *QProcessEnvironment) {
	C.QProcessEnvironment_InsertWithQProcessEnvironment(this.h, e.cPointer())
}

func QProcessEnvironment_SystemEnvironment() *QProcessEnvironment {
	ret := C.QProcessEnvironment_SystemEnvironment()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQProcessEnvironment(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QProcessEnvironment) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProcessEnvironment) Value2(name string, defaultValue string) string {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	defaultValue_Cstring := C.CString(defaultValue)
	defer C.free(unsafe.Pointer(defaultValue_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcessEnvironment_Value2(this.h, name_Cstring, C.ulong(len(name)), defaultValue_Cstring, C.ulong(len(defaultValue)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcessEnvironment) Delete() {
	C.QProcessEnvironment_Delete(this.h)
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
	ret := C.QProcess_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QProcess_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProcess_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcess) StartDetached() bool {
	ret := C.QProcess_StartDetached(this.h)
	return (bool)(ret)
}

func (this *QProcess) Program() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_Program(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcess) SetProgram(program string) {
	program_Cstring := C.CString(program)
	defer C.free(unsafe.Pointer(program_Cstring))
	C.QProcess_SetProgram(this.h, program_Cstring, C.ulong(len(program)))
}

func (this *QProcess) Arguments() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QProcess_Arguments(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcess) SetArguments(arguments []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	arguments_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(arguments))))
	arguments_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	defer C.free(unsafe.Pointer(arguments_Lengths))
	for i := range arguments {
		single_cstring := C.CString(arguments[i])
		defer C.free(unsafe.Pointer(single_cstring))
		arguments_CArray[i] = single_cstring
		arguments_Lengths[i] = (C.size_t)(len(arguments[i]))
	}
	C.QProcess_SetArguments(this.h, &arguments_CArray[0], &arguments_Lengths[0], C.ulong(len(arguments)))
}

func (this *QProcess) CloseWriteChannel() {
	C.QProcess_CloseWriteChannel(this.h)
}

func (this *QProcess) SetStandardInputFile(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QProcess_SetStandardInputFile(this.h, fileName_Cstring, C.ulong(len(fileName)))
}

func (this *QProcess) SetStandardOutputProcess(destination *QProcess) {
	C.QProcess_SetStandardOutputProcess(this.h, destination.cPointer())
}

func (this *QProcess) WorkingDirectory() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_WorkingDirectory(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcess) SetWorkingDirectory(dir string) {
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	C.QProcess_SetWorkingDirectory(this.h, dir_Cstring, C.ulong(len(dir)))
}

func (this *QProcess) SetEnvironment(environment []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	environment_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(environment))))
	environment_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(environment))))
	defer C.free(unsafe.Pointer(environment_CArray))
	defer C.free(unsafe.Pointer(environment_Lengths))
	for i := range environment {
		single_cstring := C.CString(environment[i])
		defer C.free(unsafe.Pointer(single_cstring))
		environment_CArray[i] = single_cstring
		environment_Lengths[i] = (C.size_t)(len(environment[i]))
	}
	C.QProcess_SetEnvironment(this.h, &environment_CArray[0], &environment_Lengths[0], C.ulong(len(environment)))
}

func (this *QProcess) Environment() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QProcess_Environment(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcess) SetProcessEnvironment(environment *QProcessEnvironment) {
	C.QProcess_SetProcessEnvironment(this.h, environment.cPointer())
}

func (this *QProcess) ProcessEnvironment() *QProcessEnvironment {
	ret := C.QProcess_ProcessEnvironment(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQProcessEnvironment(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QProcessEnvironment) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProcess) Pid() uintptr {
	ret := C.QProcess_Pid(this.h)
	return (uintptr)(ret)
}

func (this *QProcess) ProcessId() int64 {
	ret := C.QProcess_ProcessId(this.h)
	return (int64)(ret)
}

func (this *QProcess) WaitForStarted() bool {
	ret := C.QProcess_WaitForStarted(this.h)
	return (bool)(ret)
}

func (this *QProcess) WaitForReadyRead() bool {
	ret := C.QProcess_WaitForReadyRead(this.h)
	return (bool)(ret)
}

func (this *QProcess) WaitForBytesWritten() bool {
	ret := C.QProcess_WaitForBytesWritten(this.h)
	return (bool)(ret)
}

func (this *QProcess) WaitForFinished() bool {
	ret := C.QProcess_WaitForFinished(this.h)
	return (bool)(ret)
}

func (this *QProcess) ReadAllStandardOutput() *QByteArray {
	ret := C.QProcess_ReadAllStandardOutput(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProcess) ReadAllStandardError() *QByteArray {
	ret := C.QProcess_ReadAllStandardError(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProcess) ExitCode() int {
	ret := C.QProcess_ExitCode(this.h)
	return (int)(ret)
}

func (this *QProcess) BytesAvailable() int64 {
	ret := C.QProcess_BytesAvailable(this.h)
	return (int64)(ret)
}

func (this *QProcess) BytesToWrite() int64 {
	ret := C.QProcess_BytesToWrite(this.h)
	return (int64)(ret)
}

func (this *QProcess) IsSequential() bool {
	ret := C.QProcess_IsSequential(this.h)
	return (bool)(ret)
}

func (this *QProcess) CanReadLine() bool {
	ret := C.QProcess_CanReadLine(this.h)
	return (bool)(ret)
}

func (this *QProcess) Close() {
	C.QProcess_Close(this.h)
}

func (this *QProcess) AtEnd() bool {
	ret := C.QProcess_AtEnd(this.h)
	return (bool)(ret)
}

func QProcess_Execute(program string, arguments []string) int {
	program_Cstring := C.CString(program)
	defer C.free(unsafe.Pointer(program_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	arguments_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(arguments))))
	arguments_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	defer C.free(unsafe.Pointer(arguments_Lengths))
	for i := range arguments {
		single_cstring := C.CString(arguments[i])
		defer C.free(unsafe.Pointer(single_cstring))
		arguments_CArray[i] = single_cstring
		arguments_Lengths[i] = (C.size_t)(len(arguments[i]))
	}
	ret := C.QProcess_Execute(program_Cstring, C.ulong(len(program)), &arguments_CArray[0], &arguments_Lengths[0], C.ulong(len(arguments)))
	return (int)(ret)
}

func QProcess_ExecuteWithCommand(command string) int {
	command_Cstring := C.CString(command)
	defer C.free(unsafe.Pointer(command_Cstring))
	ret := C.QProcess_ExecuteWithCommand(command_Cstring, C.ulong(len(command)))
	return (int)(ret)
}

func QProcess_StartDetached2(program string, arguments []string, workingDirectory string) bool {
	program_Cstring := C.CString(program)
	defer C.free(unsafe.Pointer(program_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	arguments_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(arguments))))
	arguments_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	defer C.free(unsafe.Pointer(arguments_Lengths))
	for i := range arguments {
		single_cstring := C.CString(arguments[i])
		defer C.free(unsafe.Pointer(single_cstring))
		arguments_CArray[i] = single_cstring
		arguments_Lengths[i] = (C.size_t)(len(arguments[i]))
	}
	workingDirectory_Cstring := C.CString(workingDirectory)
	defer C.free(unsafe.Pointer(workingDirectory_Cstring))
	ret := C.QProcess_StartDetached2(program_Cstring, C.ulong(len(program)), &arguments_CArray[0], &arguments_Lengths[0], C.ulong(len(arguments)), workingDirectory_Cstring, C.ulong(len(workingDirectory)))
	return (bool)(ret)
}

func QProcess_StartDetached3(program string, arguments []string) bool {
	program_Cstring := C.CString(program)
	defer C.free(unsafe.Pointer(program_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	arguments_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(arguments))))
	arguments_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	defer C.free(unsafe.Pointer(arguments_Lengths))
	for i := range arguments {
		single_cstring := C.CString(arguments[i])
		defer C.free(unsafe.Pointer(single_cstring))
		arguments_CArray[i] = single_cstring
		arguments_Lengths[i] = (C.size_t)(len(arguments[i]))
	}
	ret := C.QProcess_StartDetached3(program_Cstring, C.ulong(len(program)), &arguments_CArray[0], &arguments_Lengths[0], C.ulong(len(arguments)))
	return (bool)(ret)
}

func QProcess_StartDetachedWithCommand(command string) bool {
	command_Cstring := C.CString(command)
	defer C.free(unsafe.Pointer(command_Cstring))
	ret := C.QProcess_StartDetachedWithCommand(command_Cstring, C.ulong(len(command)))
	return (bool)(ret)
}

func QProcess_SystemEnvironment() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QProcess_SystemEnvironment(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProcess_NullDevice() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_NullDevice(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
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

func (this *QProcess) OnFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QProcess_connect_Finished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QProcess_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProcess_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProcess_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProcess_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProcess_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProcess) StartDetached1(pid *int64) bool {
	ret := C.QProcess_StartDetached1(this.h, (*C.int64_t)(unsafe.Pointer(pid)))
	return (bool)(ret)
}

func (this *QProcess) WaitForStarted1(msecs int) bool {
	ret := C.QProcess_WaitForStarted1(this.h, (C.int)(msecs))
	return (bool)(ret)
}

func (this *QProcess) WaitForReadyRead1(msecs int) bool {
	ret := C.QProcess_WaitForReadyRead1(this.h, (C.int)(msecs))
	return (bool)(ret)
}

func (this *QProcess) WaitForBytesWritten1(msecs int) bool {
	ret := C.QProcess_WaitForBytesWritten1(this.h, (C.int)(msecs))
	return (bool)(ret)
}

func (this *QProcess) WaitForFinished1(msecs int) bool {
	ret := C.QProcess_WaitForFinished1(this.h, (C.int)(msecs))
	return (bool)(ret)
}

func QProcess_StartDetached4(program string, arguments []string, workingDirectory string, pid *int64) bool {
	program_Cstring := C.CString(program)
	defer C.free(unsafe.Pointer(program_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	arguments_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(arguments))))
	arguments_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(arguments))))
	defer C.free(unsafe.Pointer(arguments_CArray))
	defer C.free(unsafe.Pointer(arguments_Lengths))
	for i := range arguments {
		single_cstring := C.CString(arguments[i])
		defer C.free(unsafe.Pointer(single_cstring))
		arguments_CArray[i] = single_cstring
		arguments_Lengths[i] = (C.size_t)(len(arguments[i]))
	}
	workingDirectory_Cstring := C.CString(workingDirectory)
	defer C.free(unsafe.Pointer(workingDirectory_Cstring))
	ret := C.QProcess_StartDetached4(program_Cstring, C.ulong(len(program)), &arguments_CArray[0], &arguments_Lengths[0], C.ulong(len(arguments)), workingDirectory_Cstring, C.ulong(len(workingDirectory)), (*C.int64_t)(unsafe.Pointer(pid)))
	return (bool)(ret)
}

func (this *QProcess) Delete() {
	C.QProcess_Delete(this.h)
}

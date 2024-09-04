package qt

/*

#include "gen_qsessionmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QSessionManager__RestartHint int

const (
	QSessionManager__RestartHint__RestartIfRunning   QSessionManager__RestartHint = 0
	QSessionManager__RestartHint__RestartAnyway      QSessionManager__RestartHint = 1
	QSessionManager__RestartHint__RestartImmediately QSessionManager__RestartHint = 2
	QSessionManager__RestartHint__RestartNever       QSessionManager__RestartHint = 3
)

type QSessionManager struct {
	h *C.QSessionManager
	*QObject
}

func (this *QSessionManager) cPointer() *C.QSessionManager {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSessionManager(h *C.QSessionManager) *QSessionManager {
	if h == nil {
		return nil
	}
	return &QSessionManager{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSessionManager_U(h unsafe.Pointer) *QSessionManager {
	return newQSessionManager((*C.QSessionManager)(h))
}

func (this *QSessionManager) MetaObject() *QMetaObject {
	ret := C.QSessionManager_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSessionManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSessionManager_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSessionManager) SessionId() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_SessionId(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSessionManager) SessionKey() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_SessionKey(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSessionManager) AllowsInteraction() bool {
	ret := C.QSessionManager_AllowsInteraction(this.h)
	return (bool)(ret)
}

func (this *QSessionManager) AllowsErrorInteraction() bool {
	ret := C.QSessionManager_AllowsErrorInteraction(this.h)
	return (bool)(ret)
}

func (this *QSessionManager) Release() {
	C.QSessionManager_Release(this.h)
}

func (this *QSessionManager) Cancel() {
	C.QSessionManager_Cancel(this.h)
}

func (this *QSessionManager) SetRestartHint(restartHint QSessionManager__RestartHint) {
	C.QSessionManager_SetRestartHint(this.h, (C.uintptr_t)(restartHint))
}

func (this *QSessionManager) RestartHint() QSessionManager__RestartHint {
	ret := C.QSessionManager_RestartHint(this.h)
	return (QSessionManager__RestartHint)(ret)
}

func (this *QSessionManager) SetRestartCommand(restartCommand []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	restartCommand_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(restartCommand))))
	restartCommand_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(restartCommand))))
	defer C.free(unsafe.Pointer(restartCommand_CArray))
	defer C.free(unsafe.Pointer(restartCommand_Lengths))
	for i := range restartCommand {
		single_cstring := C.CString(restartCommand[i])
		defer C.free(unsafe.Pointer(single_cstring))
		restartCommand_CArray[i] = single_cstring
		restartCommand_Lengths[i] = (C.uint64_t)(len(restartCommand[i]))
	}
	C.QSessionManager_SetRestartCommand(this.h, &restartCommand_CArray[0], &restartCommand_Lengths[0], C.size_t(len(restartCommand)))
}

func (this *QSessionManager) RestartCommand() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QSessionManager_RestartCommand(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSessionManager) SetDiscardCommand(discardCommand []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	discardCommand_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(discardCommand))))
	discardCommand_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(discardCommand))))
	defer C.free(unsafe.Pointer(discardCommand_CArray))
	defer C.free(unsafe.Pointer(discardCommand_Lengths))
	for i := range discardCommand {
		single_cstring := C.CString(discardCommand[i])
		defer C.free(unsafe.Pointer(single_cstring))
		discardCommand_CArray[i] = single_cstring
		discardCommand_Lengths[i] = (C.uint64_t)(len(discardCommand[i]))
	}
	C.QSessionManager_SetDiscardCommand(this.h, &discardCommand_CArray[0], &discardCommand_Lengths[0], C.size_t(len(discardCommand)))
}

func (this *QSessionManager) DiscardCommand() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QSessionManager_DiscardCommand(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSessionManager) SetManagerProperty(name string, value string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	value_Cstring := C.CString(value)
	defer C.free(unsafe.Pointer(value_Cstring))
	C.QSessionManager_SetManagerProperty(this.h, name_Cstring, C.size_t(len(name)), value_Cstring, C.size_t(len(value)))
}

func (this *QSessionManager) SetManagerProperty2(name string, value []string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	value_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(value))))
	value_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(value))))
	defer C.free(unsafe.Pointer(value_CArray))
	defer C.free(unsafe.Pointer(value_Lengths))
	for i := range value {
		single_cstring := C.CString(value[i])
		defer C.free(unsafe.Pointer(single_cstring))
		value_CArray[i] = single_cstring
		value_Lengths[i] = (C.uint64_t)(len(value[i]))
	}
	C.QSessionManager_SetManagerProperty2(this.h, name_Cstring, C.size_t(len(name)), &value_CArray[0], &value_Lengths[0], C.size_t(len(value)))
}

func (this *QSessionManager) IsPhase2() bool {
	ret := C.QSessionManager_IsPhase2(this.h)
	return (bool)(ret)
}

func (this *QSessionManager) RequestPhase2() {
	C.QSessionManager_RequestPhase2(this.h)
}

func QSessionManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSessionManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSessionManager_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSessionManager_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSessionManager_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

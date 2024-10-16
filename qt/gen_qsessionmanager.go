package qt

/*

#include "gen_qsessionmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"unsafe"
)

type QSessionManager__RestartHint int

const (
	QSessionManager__RestartIfRunning   QSessionManager__RestartHint = 0
	QSessionManager__RestartAnyway      QSessionManager__RestartHint = 1
	QSessionManager__RestartImmediately QSessionManager__RestartHint = 2
	QSessionManager__RestartNever       QSessionManager__RestartHint = 3
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

func (this *QSessionManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSessionManager(h *C.QSessionManager) *QSessionManager {
	if h == nil {
		return nil
	}
	return &QSessionManager{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQSessionManager(h unsafe.Pointer) *QSessionManager {
	return newQSessionManager((*C.QSessionManager)(h))
}

func (this *QSessionManager) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSessionManager_MetaObject(this.h)))
}

func (this *QSessionManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSessionManager_Metacast(this.h, param1_Cstring)
}

func QSessionManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSessionManager_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSessionManager_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSessionManager_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSessionManager) SessionId() string {
	var _ms *C.struct_miqt_string = C.QSessionManager_SessionId(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSessionManager) SessionKey() string {
	var _ms *C.struct_miqt_string = C.QSessionManager_SessionKey(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSessionManager) AllowsInteraction() bool {
	return (bool)(C.QSessionManager_AllowsInteraction(this.h))
}

func (this *QSessionManager) AllowsErrorInteraction() bool {
	return (bool)(C.QSessionManager_AllowsErrorInteraction(this.h))
}

func (this *QSessionManager) Release() {
	C.QSessionManager_Release(this.h)
}

func (this *QSessionManager) Cancel() {
	C.QSessionManager_Cancel(this.h)
}

func (this *QSessionManager) SetRestartHint(restartHint QSessionManager__RestartHint) {
	C.QSessionManager_SetRestartHint(this.h, (C.int)(restartHint))
}

func (this *QSessionManager) RestartHint() QSessionManager__RestartHint {
	return (QSessionManager__RestartHint)(C.QSessionManager_RestartHint(this.h))
}

func (this *QSessionManager) SetRestartCommand(restartCommand []string) {
	// For the C ABI, malloc a C array of raw pointers
	restartCommand_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(restartCommand))))
	defer C.free(unsafe.Pointer(restartCommand_CArray))
	for i := range restartCommand {
		restartCommand_i_ms := libmiqt.Strdupg(restartCommand[i])
		defer C.free(restartCommand_i_ms)
		restartCommand_CArray[i] = (*C.struct_miqt_string)(restartCommand_i_ms)
	}
	restartCommand_ma := &C.struct_miqt_array{len: C.size_t(len(restartCommand)), data: unsafe.Pointer(restartCommand_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(restartCommand_ma))
	C.QSessionManager_SetRestartCommand(this.h, restartCommand_ma)
}

func (this *QSessionManager) RestartCommand() []string {
	var _ma *C.struct_miqt_array = C.QSessionManager_RestartCommand(this.h)
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

func (this *QSessionManager) SetDiscardCommand(discardCommand []string) {
	// For the C ABI, malloc a C array of raw pointers
	discardCommand_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(discardCommand))))
	defer C.free(unsafe.Pointer(discardCommand_CArray))
	for i := range discardCommand {
		discardCommand_i_ms := libmiqt.Strdupg(discardCommand[i])
		defer C.free(discardCommand_i_ms)
		discardCommand_CArray[i] = (*C.struct_miqt_string)(discardCommand_i_ms)
	}
	discardCommand_ma := &C.struct_miqt_array{len: C.size_t(len(discardCommand)), data: unsafe.Pointer(discardCommand_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(discardCommand_ma))
	C.QSessionManager_SetDiscardCommand(this.h, discardCommand_ma)
}

func (this *QSessionManager) DiscardCommand() []string {
	var _ma *C.struct_miqt_array = C.QSessionManager_DiscardCommand(this.h)
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

func (this *QSessionManager) SetManagerProperty(name string, value string) {
	name_ms := libmiqt.Strdupg(name)
	defer C.free(name_ms)
	value_ms := libmiqt.Strdupg(value)
	defer C.free(value_ms)
	C.QSessionManager_SetManagerProperty(this.h, (*C.struct_miqt_string)(name_ms), (*C.struct_miqt_string)(value_ms))
}

func (this *QSessionManager) SetManagerProperty2(name string, value []string) {
	name_ms := libmiqt.Strdupg(name)
	defer C.free(name_ms)
	// For the C ABI, malloc a C array of raw pointers
	value_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(value))))
	defer C.free(unsafe.Pointer(value_CArray))
	for i := range value {
		value_i_ms := libmiqt.Strdupg(value[i])
		defer C.free(value_i_ms)
		value_CArray[i] = (*C.struct_miqt_string)(value_i_ms)
	}
	value_ma := &C.struct_miqt_array{len: C.size_t(len(value)), data: unsafe.Pointer(value_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(value_ma))
	C.QSessionManager_SetManagerProperty2(this.h, (*C.struct_miqt_string)(name_ms), value_ma)
}

func (this *QSessionManager) IsPhase2() bool {
	return (bool)(C.QSessionManager_IsPhase2(this.h))
}

func (this *QSessionManager) RequestPhase2() {
	C.QSessionManager_RequestPhase2(this.h)
}

func QSessionManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSessionManager_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSessionManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSessionManager_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSessionManager_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSessionManager_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSessionManager_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSessionManager_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

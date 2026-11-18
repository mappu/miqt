package qt6

/*

#include "gen_qglobal.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QtPrivate__Deprecated_t int

func QRoundWithDouble(d float64) int {
	return (int)(C.miqt_QRoundWithDouble((C.double)(d)))
}

func QRoundWithFloat(f float32) int {
	return (int)(C.miqt_QRoundWithFloat((C.float)(f)))
}

func QRound64WithDouble(d float64) int64 {
	return (int64)(C.miqt_QRound64WithDouble((C.double)(d)))
}

func QRound64WithFloat(f float32) int64 {
	return (int64)(C.miqt_QRound64WithFloat((C.float)(f)))
}

func Noop2() {
	C.miqt_Noop2()
}

func QTerminate2() {
	C.miqt_QTerminate2()
}

func ErrorStringWithErrorCode(errorCode int) string {
	var _ms C.struct_miqt_string = C.miqt_ErrorStringWithErrorCode((C.int)(errorCode))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Assert2(assertion string, file string, line int) {
	assertion_Cstring := C.CString(assertion)
	defer C.free(unsafe.Pointer(assertion_Cstring))
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	C.miqt_Assert2(assertion_Cstring, file_Cstring, (C.int)(line))
}

func AssertX2(where string, what string, file string, line int) {
	where_Cstring := C.CString(where)
	defer C.free(unsafe.Pointer(where_Cstring))
	what_Cstring := C.CString(what)
	defer C.free(unsafe.Pointer(what_Cstring))
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	C.miqt_AssertX2(where_Cstring, what_Cstring, file_Cstring, (C.int)(line))
}

func CheckPointer2(param1 string, param2 int) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.miqt_CheckPointer2(param1_Cstring, (C.int)(param2))
}

func QBadAlloc2() {
	C.miqt_QBadAlloc2()
}

func QFuzzyCompare3(p1 float64, p2 float64) bool {
	return (bool)(C.miqt_QFuzzyCompare3((C.double)(p1), (C.double)(p2)))
}

func QFuzzyCompare4(p1 float32, p2 float32) bool {
	return (bool)(C.miqt_QFuzzyCompare4((C.float)(p1), (C.float)(p2)))
}

func QFuzzyIsNullWithDouble(d float64) bool {
	return (bool)(C.miqt_QFuzzyIsNullWithDouble((C.double)(d)))
}

func QFuzzyIsNullWithFloat(f float32) bool {
	return (bool)(C.miqt_QFuzzyIsNullWithFloat((C.float)(f)))
}

func QIsNullWithDouble(d float64) bool {
	return (bool)(C.miqt_QIsNullWithDouble((C.double)(d)))
}

func QIsNullWithFloat(f float32) bool {
	return (bool)(C.miqt_QIsNullWithFloat((C.float)(f)))
}

func QMallocAligned2(size uint64, alignment uint64) unsafe.Pointer {
	return (unsafe.Pointer)(C.miqt_QMallocAligned2((C.size_t)(size), (C.size_t)(alignment)))
}

func QReallocAligned2(ptr unsafe.Pointer, size uint64, oldsize uint64, alignment uint64) unsafe.Pointer {
	return (unsafe.Pointer)(C.miqt_QReallocAligned2(ptr, (C.size_t)(size), (C.size_t)(oldsize), (C.size_t)(alignment)))
}

func QFreeAlignedWithPtr(ptr unsafe.Pointer) {
	C.miqt_QFreeAlignedWithPtr(ptr)
}

func QtTrId2(id string, n int) string {
	id_Cstring := C.CString(id)
	defer C.free(unsafe.Pointer(id_Cstring))
	var _ms C.struct_miqt_string = C.miqt_QtTrId2(id_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QgetenvWithVarName(varName string) []byte {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	var _bytearray C.struct_miqt_string = C.miqt_QgetenvWithVarName(varName_Cstring)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QEnvironmentVariableWithVarName(varName string) string {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	var _ms C.struct_miqt_string = C.miqt_QEnvironmentVariableWithVarName(varName_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QEnvironmentVariable2(varName string, defaultValue string) string {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	defaultValue_ms := C.struct_miqt_string{}
	defaultValue_ms.data = C.CString(defaultValue)
	defaultValue_ms.len = C.size_t(len(defaultValue))
	defer C.free(unsafe.Pointer(defaultValue_ms.data))
	var _ms C.struct_miqt_string = C.miqt_QEnvironmentVariable2(varName_Cstring, defaultValue_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func Qputenv2(varName string, value []byte) bool {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	value_alias := C.struct_miqt_string{}
	if len(value) > 0 {
		value_alias.data = (*C.char)(unsafe.Pointer(&value[0]))
	} else {
		value_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	value_alias.len = C.size_t(len(value))
	return (bool)(C.miqt_Qputenv2(varName_Cstring, value_alias))
}

func QunsetenvWithVarName(varName string) bool {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	return (bool)(C.miqt_QunsetenvWithVarName(varName_Cstring))
}

func QEnvironmentVariableIsEmptyWithVarName(varName string) bool {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	return (bool)(C.miqt_QEnvironmentVariableIsEmptyWithVarName(varName_Cstring))
}

func QEnvironmentVariableIsSetWithVarName(varName string) bool {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	return (bool)(C.miqt_QEnvironmentVariableIsSetWithVarName(varName_Cstring))
}

func QEnvironmentVariableIntValue2(varName string, ok *bool) int {
	varName_Cstring := C.CString(varName)
	defer C.free(unsafe.Pointer(varName_Cstring))
	return (int)(C.miqt_QEnvironmentVariableIntValue2(varName_Cstring, (*C.bool)(unsafe.Pointer(ok))))
}

func QIntCastWithDouble(f float64) int {
	return (int)(C.miqt_QIntCastWithDouble((C.double)(f)))
}

func QIntCastWithFloat(f float32) int {
	return (int)(C.miqt_QIntCastWithFloat((C.float)(f)))
}

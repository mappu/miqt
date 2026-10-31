package qt6

/*

#include "gen_qbytearrayalgorithms.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

func QstrdupWithChar(param1 string) string {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	_ret := C.miqt_QstrdupWithChar(param1_Cstring)
	return C.GoString(_ret)
}

func QstrlenWithStr(str string) uint64 {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (uint64)(C.miqt_QstrlenWithStr(str_Cstring))
}

func Qstrnlen2(str string, maxlen uint64) uint64 {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	return (uint64)(C.miqt_Qstrnlen2(str_Cstring, (C.size_t)(maxlen)))
}

func Qstrcpy2(dst string, src string) string {
	dst_Cstring := C.CString(dst)
	defer C.free(unsafe.Pointer(dst_Cstring))
	src_Cstring := C.CString(src)
	defer C.free(unsafe.Pointer(src_Cstring))
	_ret := C.miqt_Qstrcpy2(dst_Cstring, src_Cstring)
	return C.GoString(_ret)
}

func Qstrncpy2(dst string, src string, lenVal uint64) string {
	dst_Cstring := C.CString(dst)
	defer C.free(unsafe.Pointer(dst_Cstring))
	src_Cstring := C.CString(src)
	defer C.free(unsafe.Pointer(src_Cstring))
	_ret := C.miqt_Qstrncpy2(dst_Cstring, src_Cstring, (C.size_t)(lenVal))
	return C.GoString(_ret)
}

func Qstrcmp2(str1 string, str2 string) int {
	str1_Cstring := C.CString(str1)
	defer C.free(unsafe.Pointer(str1_Cstring))
	str2_Cstring := C.CString(str2)
	defer C.free(unsafe.Pointer(str2_Cstring))
	return (int)(C.miqt_Qstrcmp2(str1_Cstring, str2_Cstring))
}

func Qstrncmp2(str1 string, str2 string, lenVal uint64) int {
	str1_Cstring := C.CString(str1)
	defer C.free(unsafe.Pointer(str1_Cstring))
	str2_Cstring := C.CString(str2)
	defer C.free(unsafe.Pointer(str2_Cstring))
	return (int)(C.miqt_Qstrncmp2(str1_Cstring, str2_Cstring, (C.size_t)(lenVal)))
}

func Qstricmp2(param1 string, param2 string) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	param2_Cstring := C.CString(param2)
	defer C.free(unsafe.Pointer(param2_Cstring))
	return (int)(C.miqt_Qstricmp2(param1_Cstring, param2_Cstring))
}

func Qstrnicmp2(param1 string, param2 string, lenVal uint64) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	param2_Cstring := C.CString(param2)
	defer C.free(unsafe.Pointer(param2_Cstring))
	return (int)(C.miqt_Qstrnicmp2(param1_Cstring, param2_Cstring, (C.size_t)(lenVal)))
}

func Qstrnicmp3(param1 string, param2 int64, param3 string, param4 int64) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	param3_Cstring := C.CString(param3)
	defer C.free(unsafe.Pointer(param3_Cstring))
	return (int)(C.miqt_Qstrnicmp3(param1_Cstring, (C.ptrdiff_t)(param2), param3_Cstring, (C.ptrdiff_t)(param4)))
}

func QChecksum2(data QByteArrayView, standard ChecksumType) uint16 {
	defer runtime.KeepAlive(data)
	return (uint16)(C.miqt_QChecksum2(data.cPointer(), (C.int)(standard)))
}

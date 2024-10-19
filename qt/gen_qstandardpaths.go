package qt

/*

#include "gen_qstandardpaths.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStandardPaths__StandardLocation int

const (
	QStandardPaths__DesktopLocation       QStandardPaths__StandardLocation = 0
	QStandardPaths__DocumentsLocation     QStandardPaths__StandardLocation = 1
	QStandardPaths__FontsLocation         QStandardPaths__StandardLocation = 2
	QStandardPaths__ApplicationsLocation  QStandardPaths__StandardLocation = 3
	QStandardPaths__MusicLocation         QStandardPaths__StandardLocation = 4
	QStandardPaths__MoviesLocation        QStandardPaths__StandardLocation = 5
	QStandardPaths__PicturesLocation      QStandardPaths__StandardLocation = 6
	QStandardPaths__TempLocation          QStandardPaths__StandardLocation = 7
	QStandardPaths__HomeLocation          QStandardPaths__StandardLocation = 8
	QStandardPaths__DataLocation          QStandardPaths__StandardLocation = 9
	QStandardPaths__CacheLocation         QStandardPaths__StandardLocation = 10
	QStandardPaths__GenericDataLocation   QStandardPaths__StandardLocation = 11
	QStandardPaths__RuntimeLocation       QStandardPaths__StandardLocation = 12
	QStandardPaths__ConfigLocation        QStandardPaths__StandardLocation = 13
	QStandardPaths__DownloadLocation      QStandardPaths__StandardLocation = 14
	QStandardPaths__GenericCacheLocation  QStandardPaths__StandardLocation = 15
	QStandardPaths__GenericConfigLocation QStandardPaths__StandardLocation = 16
	QStandardPaths__AppDataLocation       QStandardPaths__StandardLocation = 17
	QStandardPaths__AppConfigLocation     QStandardPaths__StandardLocation = 18
	QStandardPaths__AppLocalDataLocation  QStandardPaths__StandardLocation = 9
)

type QStandardPaths__LocateOption int

const (
	QStandardPaths__LocateFile      QStandardPaths__LocateOption = 0
	QStandardPaths__LocateDirectory QStandardPaths__LocateOption = 1
)

type QStandardPaths struct {
	h *C.QStandardPaths
}

func (this *QStandardPaths) cPointer() *C.QStandardPaths {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStandardPaths) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQStandardPaths(h *C.QStandardPaths) *QStandardPaths {
	if h == nil {
		return nil
	}
	return &QStandardPaths{h: h}
}

func UnsafeNewQStandardPaths(h unsafe.Pointer) *QStandardPaths {
	return newQStandardPaths((*C.QStandardPaths)(h))
}

func QStandardPaths_WritableLocation(typeVal QStandardPaths__StandardLocation) string {
	var _ms C.struct_miqt_string = C.QStandardPaths_WritableLocation((C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardPaths_StandardLocations(typeVal QStandardPaths__StandardLocation) []string {
	var _ma *C.struct_miqt_array = C.QStandardPaths_StandardLocations((C.int)(typeVal))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QStandardPaths_Locate(typeVal QStandardPaths__StandardLocation, fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QStandardPaths_Locate((C.int)(typeVal), fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardPaths_LocateAll(typeVal QStandardPaths__StandardLocation, fileName string) []string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ma *C.struct_miqt_array = C.QStandardPaths_LocateAll((C.int)(typeVal), fileName_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QStandardPaths_DisplayName(typeVal QStandardPaths__StandardLocation) string {
	var _ms C.struct_miqt_string = C.QStandardPaths_DisplayName((C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardPaths_FindExecutable(executableName string) string {
	executableName_ms := C.struct_miqt_string{}
	executableName_ms.data = C.CString(executableName)
	executableName_ms.len = C.size_t(len(executableName))
	defer C.free(unsafe.Pointer(executableName_ms.data))
	var _ms C.struct_miqt_string = C.QStandardPaths_FindExecutable(executableName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardPaths_EnableTestMode(testMode bool) {
	C.QStandardPaths_EnableTestMode((C.bool)(testMode))
}

func QStandardPaths_SetTestModeEnabled(testMode bool) {
	C.QStandardPaths_SetTestModeEnabled((C.bool)(testMode))
}

func QStandardPaths_IsTestModeEnabled() bool {
	return (bool)(C.QStandardPaths_IsTestModeEnabled())
}

func QStandardPaths_Locate3(typeVal QStandardPaths__StandardLocation, fileName string, options QStandardPaths__LocateOption) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QStandardPaths_Locate3((C.int)(typeVal), fileName_ms, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardPaths_LocateAll3(typeVal QStandardPaths__StandardLocation, fileName string, options QStandardPaths__LocateOption) []string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ma *C.struct_miqt_array = C.QStandardPaths_LocateAll3((C.int)(typeVal), fileName_ms, (C.int)(options))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QStandardPaths_FindExecutable2(executableName string, paths []string) string {
	executableName_ms := C.struct_miqt_string{}
	executableName_ms.data = C.CString(executableName)
	executableName_ms.len = C.size_t(len(executableName))
	defer C.free(unsafe.Pointer(executableName_ms.data))
	// For the C ABI, malloc a C array of structs
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := &C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(paths_ma))
	var _ms C.struct_miqt_string = C.QStandardPaths_FindExecutable2(executableName_ms, paths_ma)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

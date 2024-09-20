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
	QStandardPaths__StandardLocation__DesktopLocation       QStandardPaths__StandardLocation = 0
	QStandardPaths__StandardLocation__DocumentsLocation     QStandardPaths__StandardLocation = 1
	QStandardPaths__StandardLocation__FontsLocation         QStandardPaths__StandardLocation = 2
	QStandardPaths__StandardLocation__ApplicationsLocation  QStandardPaths__StandardLocation = 3
	QStandardPaths__StandardLocation__MusicLocation         QStandardPaths__StandardLocation = 4
	QStandardPaths__StandardLocation__MoviesLocation        QStandardPaths__StandardLocation = 5
	QStandardPaths__StandardLocation__PicturesLocation      QStandardPaths__StandardLocation = 6
	QStandardPaths__StandardLocation__TempLocation          QStandardPaths__StandardLocation = 7
	QStandardPaths__StandardLocation__HomeLocation          QStandardPaths__StandardLocation = 8
	QStandardPaths__StandardLocation__DataLocation          QStandardPaths__StandardLocation = 9
	QStandardPaths__StandardLocation__CacheLocation         QStandardPaths__StandardLocation = 10
	QStandardPaths__StandardLocation__GenericDataLocation   QStandardPaths__StandardLocation = 11
	QStandardPaths__StandardLocation__RuntimeLocation       QStandardPaths__StandardLocation = 12
	QStandardPaths__StandardLocation__ConfigLocation        QStandardPaths__StandardLocation = 13
	QStandardPaths__StandardLocation__DownloadLocation      QStandardPaths__StandardLocation = 14
	QStandardPaths__StandardLocation__GenericCacheLocation  QStandardPaths__StandardLocation = 15
	QStandardPaths__StandardLocation__GenericConfigLocation QStandardPaths__StandardLocation = 16
	QStandardPaths__StandardLocation__AppDataLocation       QStandardPaths__StandardLocation = 17
	QStandardPaths__StandardLocation__AppConfigLocation     QStandardPaths__StandardLocation = 18
	QStandardPaths__StandardLocation__AppLocalDataLocation  QStandardPaths__StandardLocation = 9
)

type QStandardPaths__LocateOption int

const (
	QStandardPaths__LocateOption__LocateFile      QStandardPaths__LocateOption = 0
	QStandardPaths__LocateOption__LocateDirectory QStandardPaths__LocateOption = 1
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

func newQStandardPaths(h *C.QStandardPaths) *QStandardPaths {
	if h == nil {
		return nil
	}
	return &QStandardPaths{h: h}
}

func newQStandardPaths_U(h unsafe.Pointer) *QStandardPaths {
	return newQStandardPaths((*C.QStandardPaths)(h))
}

func QStandardPaths_WritableLocation(typeVal QStandardPaths__StandardLocation) string {
	var _ms *C.struct_miqt_string = C.QStandardPaths_WritableLocation((C.int)(typeVal))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardPaths_StandardLocations(typeVal QStandardPaths__StandardLocation) []string {
	var _ma *C.struct_miqt_array = C.QStandardPaths_StandardLocations((C.int)(typeVal))
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

func QStandardPaths_Locate(typeVal QStandardPaths__StandardLocation, fileName string) string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QStandardPaths_Locate((C.int)(typeVal), (*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardPaths_LocateAll(typeVal QStandardPaths__StandardLocation, fileName string) []string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ma *C.struct_miqt_array = C.QStandardPaths_LocateAll((C.int)(typeVal), (*C.struct_miqt_string)(fileName_ms))
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

func QStandardPaths_DisplayName(typeVal QStandardPaths__StandardLocation) string {
	var _ms *C.struct_miqt_string = C.QStandardPaths_DisplayName((C.int)(typeVal))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardPaths_FindExecutable(executableName string) string {
	executableName_ms := miqt_strdupg(executableName)
	defer C.free(executableName_ms)
	var _ms *C.struct_miqt_string = C.QStandardPaths_FindExecutable((*C.struct_miqt_string)(executableName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QStandardPaths_Locate3((C.int)(typeVal), (*C.struct_miqt_string)(fileName_ms), (C.int)(options))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardPaths_LocateAll3(typeVal QStandardPaths__StandardLocation, fileName string, options QStandardPaths__LocateOption) []string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ma *C.struct_miqt_array = C.QStandardPaths_LocateAll3((C.int)(typeVal), (*C.struct_miqt_string)(fileName_ms), (C.int)(options))
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

func QStandardPaths_FindExecutable2(executableName string, paths []string) string {
	executableName_ms := miqt_strdupg(executableName)
	defer C.free(executableName_ms)
	// For the C ABI, malloc a C array of raw pointers
	paths_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := miqt_strdupg(paths[i])
		defer C.free(paths_i_ms)
		paths_CArray[i] = (*C.struct_miqt_string)(paths_i_ms)
	}
	paths_ma := &C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(paths_ma))
	var _ms *C.struct_miqt_string = C.QStandardPaths_FindExecutable2((*C.struct_miqt_string)(executableName_ms), paths_ma)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

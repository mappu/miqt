package qt

/*

#include "gen_qstandardpaths.h"
#include <stdlib.h>

*/
import "C"

import (
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStandardPaths_WritableLocation((C.uintptr_t)(typeVal), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_StandardLocations(typeVal QStandardPaths__StandardLocation) []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QStandardPaths_StandardLocations((C.uintptr_t)(typeVal), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_Locate(typeVal QStandardPaths__StandardLocation, fileName string) string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStandardPaths_Locate((C.uintptr_t)(typeVal), fileName_Cstring, C.size_t(len(fileName)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_LocateAll(typeVal QStandardPaths__StandardLocation, fileName string) []string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QStandardPaths_LocateAll((C.uintptr_t)(typeVal), fileName_Cstring, C.size_t(len(fileName)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_DisplayName(typeVal QStandardPaths__StandardLocation) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStandardPaths_DisplayName((C.uintptr_t)(typeVal), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_FindExecutable(executableName string) string {
	executableName_Cstring := C.CString(executableName)
	defer C.free(unsafe.Pointer(executableName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStandardPaths_FindExecutable(executableName_Cstring, C.size_t(len(executableName)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_EnableTestMode(testMode bool) {
	C.QStandardPaths_EnableTestMode((C.bool)(testMode))
}

func QStandardPaths_SetTestModeEnabled(testMode bool) {
	C.QStandardPaths_SetTestModeEnabled((C.bool)(testMode))
}

func QStandardPaths_IsTestModeEnabled() bool {
	ret := C.QStandardPaths_IsTestModeEnabled()
	return (bool)(ret)
}

func QStandardPaths_Locate3(typeVal QStandardPaths__StandardLocation, fileName string, options int) string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStandardPaths_Locate3((C.uintptr_t)(typeVal), fileName_Cstring, C.size_t(len(fileName)), (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_LocateAll3(typeVal QStandardPaths__StandardLocation, fileName string, options int) []string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QStandardPaths_LocateAll3((C.uintptr_t)(typeVal), fileName_Cstring, C.size_t(len(fileName)), (C.int)(options), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStandardPaths_FindExecutable2(executableName string, paths []string) string {
	executableName_Cstring := C.CString(executableName)
	defer C.free(unsafe.Pointer(executableName_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	paths_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(paths))))
	paths_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	defer C.free(unsafe.Pointer(paths_Lengths))
	for i := range paths {
		single_cstring := C.CString(paths[i])
		defer C.free(unsafe.Pointer(single_cstring))
		paths_CArray[i] = single_cstring
		paths_Lengths[i] = (C.uint64_t)(len(paths[i]))
	}
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStandardPaths_FindExecutable2(executableName_Cstring, C.size_t(len(executableName)), &paths_CArray[0], &paths_Lengths[0], C.size_t(len(paths)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

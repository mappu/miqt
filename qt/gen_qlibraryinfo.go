package qt

/*

#include "gen_qlibraryinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLibraryInfo__LibraryLocation int

const (
	QLibraryInfo__LibraryLocation__PrefixPath             QLibraryInfo__LibraryLocation = 0
	QLibraryInfo__LibraryLocation__DocumentationPath      QLibraryInfo__LibraryLocation = 1
	QLibraryInfo__LibraryLocation__HeadersPath            QLibraryInfo__LibraryLocation = 2
	QLibraryInfo__LibraryLocation__LibrariesPath          QLibraryInfo__LibraryLocation = 3
	QLibraryInfo__LibraryLocation__LibraryExecutablesPath QLibraryInfo__LibraryLocation = 4
	QLibraryInfo__LibraryLocation__BinariesPath           QLibraryInfo__LibraryLocation = 5
	QLibraryInfo__LibraryLocation__PluginsPath            QLibraryInfo__LibraryLocation = 6
	QLibraryInfo__LibraryLocation__ImportsPath            QLibraryInfo__LibraryLocation = 7
	QLibraryInfo__LibraryLocation__Qml2ImportsPath        QLibraryInfo__LibraryLocation = 8
	QLibraryInfo__LibraryLocation__ArchDataPath           QLibraryInfo__LibraryLocation = 9
	QLibraryInfo__LibraryLocation__DataPath               QLibraryInfo__LibraryLocation = 10
	QLibraryInfo__LibraryLocation__TranslationsPath       QLibraryInfo__LibraryLocation = 11
	QLibraryInfo__LibraryLocation__ExamplesPath           QLibraryInfo__LibraryLocation = 12
	QLibraryInfo__LibraryLocation__TestsPath              QLibraryInfo__LibraryLocation = 13
	QLibraryInfo__LibraryLocation__SettingsPath           QLibraryInfo__LibraryLocation = 100
)

type QLibraryInfo struct {
	h *C.QLibraryInfo
}

func (this *QLibraryInfo) cPointer() *C.QLibraryInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLibraryInfo(h *C.QLibraryInfo) *QLibraryInfo {
	if h == nil {
		return nil
	}
	return &QLibraryInfo{h: h}
}

func newQLibraryInfo_U(h unsafe.Pointer) *QLibraryInfo {
	return newQLibraryInfo((*C.QLibraryInfo)(h))
}

func QLibraryInfo_Licensee() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibraryInfo_Licensee(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibraryInfo_LicensedProducts() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibraryInfo_LicensedProducts(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibraryInfo_BuildDate() *QDate {
	ret := C.QLibraryInfo_BuildDate()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQDate(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QDate) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QLibraryInfo_Build() unsafe.Pointer {
	ret := C.QLibraryInfo_Build()
	return (unsafe.Pointer)(ret)
}

func QLibraryInfo_IsDebugBuild() bool {
	ret := C.QLibraryInfo_IsDebugBuild()
	return (bool)(ret)
}

func QLibraryInfo_Version() *QVersionNumber {
	ret := C.QLibraryInfo_Version()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVersionNumber(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVersionNumber) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QLibraryInfo_Location(param1 QLibraryInfo__LibraryLocation) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLibraryInfo_Location((C.uintptr_t)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLibraryInfo_PlatformPluginArguments(platformName string) []string {
	platformName_Cstring := C.CString(platformName)
	defer C.free(unsafe.Pointer(platformName_Cstring))
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QLibraryInfo_PlatformPluginArguments(platformName_Cstring, C.size_t(len(platformName)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLibraryInfo) Delete() {
	C.QLibraryInfo_Delete(this.h)
}

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
	var _ms *C.struct_miqt_string = C.QLibraryInfo_Licensee()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLibraryInfo_LicensedProducts() string {
	var _ms *C.struct_miqt_string = C.QLibraryInfo_LicensedProducts()
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLibraryInfo_BuildDate() *QDate {
	_ret := C.QLibraryInfo_BuildDate()
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLibraryInfo_Build() unsafe.Pointer {
	_ret := C.QLibraryInfo_Build()
	return (unsafe.Pointer)(_ret)
}

func QLibraryInfo_IsDebugBuild() bool {
	return (bool)(C.QLibraryInfo_IsDebugBuild())
}

func QLibraryInfo_Version() *QVersionNumber {
	_ret := C.QLibraryInfo_Version()
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLibraryInfo_Location(param1 QLibraryInfo__LibraryLocation) string {
	var _ms *C.struct_miqt_string = C.QLibraryInfo_Location((C.int)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLibraryInfo_PlatformPluginArguments(platformName string) []string {
	platformName_ms := miqt_strdupg(platformName)
	defer C.free(platformName_ms)
	var _ma *C.struct_miqt_array = C.QLibraryInfo_PlatformPluginArguments((*C.struct_miqt_string)(platformName_ms))
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

// Delete this object from C++ memory.
func (this *QLibraryInfo) Delete() {
	C.QLibraryInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLibraryInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QLibraryInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

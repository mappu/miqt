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
	QLibraryInfo__PrefixPath             QLibraryInfo__LibraryLocation = 0
	QLibraryInfo__DocumentationPath      QLibraryInfo__LibraryLocation = 1
	QLibraryInfo__HeadersPath            QLibraryInfo__LibraryLocation = 2
	QLibraryInfo__LibrariesPath          QLibraryInfo__LibraryLocation = 3
	QLibraryInfo__LibraryExecutablesPath QLibraryInfo__LibraryLocation = 4
	QLibraryInfo__BinariesPath           QLibraryInfo__LibraryLocation = 5
	QLibraryInfo__PluginsPath            QLibraryInfo__LibraryLocation = 6
	QLibraryInfo__ImportsPath            QLibraryInfo__LibraryLocation = 7
	QLibraryInfo__Qml2ImportsPath        QLibraryInfo__LibraryLocation = 8
	QLibraryInfo__ArchDataPath           QLibraryInfo__LibraryLocation = 9
	QLibraryInfo__DataPath               QLibraryInfo__LibraryLocation = 10
	QLibraryInfo__TranslationsPath       QLibraryInfo__LibraryLocation = 11
	QLibraryInfo__ExamplesPath           QLibraryInfo__LibraryLocation = 12
	QLibraryInfo__TestsPath              QLibraryInfo__LibraryLocation = 13
	QLibraryInfo__SettingsPath           QLibraryInfo__LibraryLocation = 100
)

type QLibraryInfo struct {
	h          *C.QLibraryInfo
	isSubclass bool
}

func (this *QLibraryInfo) cPointer() *C.QLibraryInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLibraryInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLibraryInfo constructs the type using only CGO pointers.
func newQLibraryInfo(h *C.QLibraryInfo) *QLibraryInfo {
	if h == nil {
		return nil
	}
	return &QLibraryInfo{h: h}
}

// UnsafeNewQLibraryInfo constructs the type using only unsafe pointers.
func UnsafeNewQLibraryInfo(h unsafe.Pointer) *QLibraryInfo {
	if h == nil {
		return nil
	}

	return &QLibraryInfo{h: (*C.QLibraryInfo)(h)}
}

func QLibraryInfo_Licensee() string {
	var _ms C.struct_miqt_string = C.QLibraryInfo_Licensee()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibraryInfo_LicensedProducts() string {
	var _ms C.struct_miqt_string = C.QLibraryInfo_LicensedProducts()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibraryInfo_BuildDate() *QDate {
	_goptr := newQDate(C.QLibraryInfo_BuildDate())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLibraryInfo_Build() string {
	_ret := C.QLibraryInfo_Build()
	return C.GoString(_ret)
}

func QLibraryInfo_IsDebugBuild() bool {
	return (bool)(C.QLibraryInfo_IsDebugBuild())
}

func QLibraryInfo_Version() *QVersionNumber {
	_goptr := newQVersionNumber(C.QLibraryInfo_Version())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLibraryInfo_Location(param1 QLibraryInfo__LibraryLocation) string {
	var _ms C.struct_miqt_string = C.QLibraryInfo_Location((C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLibraryInfo_PlatformPluginArguments(platformName string) []string {
	platformName_ms := C.struct_miqt_string{}
	platformName_ms.data = C.CString(platformName)
	platformName_ms.len = C.size_t(len(platformName))
	defer C.free(unsafe.Pointer(platformName_ms.data))
	var _ma C.struct_miqt_array = C.QLibraryInfo_PlatformPluginArguments(platformName_ms)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QLibraryInfo) Delete() {
	C.QLibraryInfo_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLibraryInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QLibraryInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

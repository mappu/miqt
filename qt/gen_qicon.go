package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qicon.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QIcon struct {
	h *C.QIcon
}

func (this *QIcon) cPointer() *C.QIcon {
	if this == nil {
		return nil
	}
	return this.h
}

func newQIcon(h *C.QIcon) *QIcon {
	return &QIcon{h: h}
}

func newQIcon_U(h unsafe.Pointer) *QIcon {
	return newQIcon((*C.QIcon)(h))
}

// NewQIcon constructs a new QIcon object.
func NewQIcon() *QIcon {
	ret := C.QIcon_new()
	return newQIcon(ret)
}

// NewQIcon2 constructs a new QIcon object.
func NewQIcon2(pixmap *QPixmap) *QIcon {
	ret := C.QIcon_new2(pixmap.cPointer())
	return newQIcon(ret)
}

// NewQIcon3 constructs a new QIcon object.
func NewQIcon3(other *QIcon) *QIcon {
	ret := C.QIcon_new3(other.cPointer())
	return newQIcon(ret)
}

// NewQIcon4 constructs a new QIcon object.
func NewQIcon4(fileName string) *QIcon {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QIcon_new4(fileName_Cstring, C.ulong(len(fileName)))
	return newQIcon(ret)
}

// NewQIcon5 constructs a new QIcon object.
func NewQIcon5(engine *QIconEngine) *QIcon {
	ret := C.QIcon_new5(engine.cPointer())
	return newQIcon(ret)
}

func (this *QIcon) OperatorAssign(other *QIcon) {
	C.QIcon_OperatorAssign(this.h, other.cPointer())
}

func (this *QIcon) Swap(other *QIcon) {
	C.QIcon_Swap(this.h, other.cPointer())
}

func (this *QIcon) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIcon_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIcon) IsNull() bool {
	ret := C.QIcon_IsNull(this.h)
	return (bool)(ret)
}

func (this *QIcon) IsDetached() bool {
	ret := C.QIcon_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QIcon) Detach() {
	C.QIcon_Detach(this.h)
}

func (this *QIcon) CacheKey() int64 {
	ret := C.QIcon_CacheKey(this.h)
	return (int64)(ret)
}

func (this *QIcon) SetIsMask(isMask bool) {
	C.QIcon_SetIsMask(this.h, (C.bool)(isMask))
}

func (this *QIcon) IsMask() bool {
	ret := C.QIcon_IsMask(this.h)
	return (bool)(ret)
}

func QIcon_FromTheme(name string) *QIcon {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QIcon_FromTheme(name_Cstring, C.ulong(len(name)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QIcon_FromTheme2(name string, fallback *QIcon) *QIcon {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QIcon_FromTheme2(name_Cstring, C.ulong(len(name)), fallback.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QIcon_HasThemeIcon(name string) bool {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QIcon_HasThemeIcon(name_Cstring, C.ulong(len(name)))
	return (bool)(ret)
}

func QIcon_ThemeSearchPaths() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QIcon_ThemeSearchPaths(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIcon_SetThemeSearchPaths(searchpath []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	searchpath_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(searchpath))))
	searchpath_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(searchpath))))
	defer C.free(unsafe.Pointer(searchpath_CArray))
	defer C.free(unsafe.Pointer(searchpath_Lengths))
	for i := range searchpath {
		single_cstring := C.CString(searchpath[i])
		defer C.free(unsafe.Pointer(single_cstring))
		searchpath_CArray[i] = single_cstring
		searchpath_Lengths[i] = (C.size_t)(len(searchpath[i]))
	}
	C.QIcon_SetThemeSearchPaths(&searchpath_CArray[0], &searchpath_Lengths[0], C.ulong(len(searchpath)))
}

func QIcon_FallbackSearchPaths() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QIcon_FallbackSearchPaths(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIcon_SetFallbackSearchPaths(paths []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	paths_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(paths))))
	paths_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	defer C.free(unsafe.Pointer(paths_Lengths))
	for i := range paths {
		single_cstring := C.CString(paths[i])
		defer C.free(unsafe.Pointer(single_cstring))
		paths_CArray[i] = single_cstring
		paths_Lengths[i] = (C.size_t)(len(paths[i]))
	}
	C.QIcon_SetFallbackSearchPaths(&paths_CArray[0], &paths_Lengths[0], C.ulong(len(paths)))
}

func QIcon_ThemeName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIcon_ThemeName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIcon_SetThemeName(path string) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QIcon_SetThemeName(path_Cstring, C.ulong(len(path)))
}

func QIcon_FallbackThemeName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIcon_FallbackThemeName(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QIcon_SetFallbackThemeName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QIcon_SetFallbackThemeName(name_Cstring, C.ulong(len(name)))
}

func (this *QIcon) Delete() {
	C.QIcon_Delete(this.h)
}

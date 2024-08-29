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

func (this *QIcon) Pixmap(size *QSize) *QPixmap {
	ret := C.QIcon_Pixmap(this.h, size.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap2(w int, h int) *QPixmap {
	ret := C.QIcon_Pixmap2(this.h, (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) PixmapWithExtent(extent int) *QPixmap {
	ret := C.QIcon_PixmapWithExtent(this.h, (C.int)(extent))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap3(window *QWindow, size *QSize) *QPixmap {
	ret := C.QIcon_Pixmap3(this.h, window.cPointer(), size.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) ActualSize(size *QSize) *QSize {
	ret := C.QIcon_ActualSize(this.h, size.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) ActualSize2(window *QWindow, size *QSize) *QSize {
	ret := C.QIcon_ActualSize2(this.h, window.cPointer(), size.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIcon_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIcon) Paint(painter *QPainter, rect *QRect) {
	C.QIcon_Paint(this.h, painter.cPointer(), rect.cPointer())
}

func (this *QIcon) Paint2(painter *QPainter, x int, y int, w int, h int) {
	C.QIcon_Paint2(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
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

func (this *QIcon) AddPixmap(pixmap *QPixmap) {
	C.QIcon_AddPixmap(this.h, pixmap.cPointer())
}

func (this *QIcon) AddFile(fileName string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QIcon_AddFile(this.h, fileName_Cstring, C.ulong(len(fileName)))
}

func (this *QIcon) AvailableSizes() []QSize {
	var _out **C.QSize = nil
	var _out_len C.size_t = 0
	C.QIcon_AvailableSizes(this.h, &_out, &_out_len)
	ret := make([]QSize, int(_out_len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQSize(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
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

func (this *QIcon) Pixmap22(size *QSize, mode uintptr) *QPixmap {
	ret := C.QIcon_Pixmap22(this.h, size.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap32(size *QSize, mode uintptr, state uintptr) *QPixmap {
	ret := C.QIcon_Pixmap32(this.h, size.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(state))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap33(w int, h int, mode uintptr) *QPixmap {
	ret := C.QIcon_Pixmap33(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap4(w int, h int, mode uintptr, state uintptr) *QPixmap {
	ret := C.QIcon_Pixmap4(this.h, (C.int)(w), (C.int)(h), (C.uintptr_t)(mode), (C.uintptr_t)(state))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap23(extent int, mode uintptr) *QPixmap {
	ret := C.QIcon_Pixmap23(this.h, (C.int)(extent), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap34(extent int, mode uintptr, state uintptr) *QPixmap {
	ret := C.QIcon_Pixmap34(this.h, (C.int)(extent), (C.uintptr_t)(mode), (C.uintptr_t)(state))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap35(window *QWindow, size *QSize, mode uintptr) *QPixmap {
	ret := C.QIcon_Pixmap35(this.h, window.cPointer(), size.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Pixmap42(window *QWindow, size *QSize, mode uintptr, state uintptr) *QPixmap {
	ret := C.QIcon_Pixmap42(this.h, window.cPointer(), size.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(state))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) ActualSize22(size *QSize, mode uintptr) *QSize {
	ret := C.QIcon_ActualSize22(this.h, size.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) ActualSize3(size *QSize, mode uintptr, state uintptr) *QSize {
	ret := C.QIcon_ActualSize3(this.h, size.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(state))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) ActualSize32(window *QWindow, size *QSize, mode uintptr) *QSize {
	ret := C.QIcon_ActualSize32(this.h, window.cPointer(), size.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) ActualSize4(window *QWindow, size *QSize, mode uintptr, state uintptr) *QSize {
	ret := C.QIcon_ActualSize4(this.h, window.cPointer(), size.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(state))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QIcon) Paint3(painter *QPainter, rect *QRect, alignment int) {
	C.QIcon_Paint3(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment))
}

func (this *QIcon) Paint4(painter *QPainter, rect *QRect, alignment int, mode uintptr) {
	C.QIcon_Paint4(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), (C.uintptr_t)(mode))
}

func (this *QIcon) Paint5(painter *QPainter, rect *QRect, alignment int, mode uintptr, state uintptr) {
	C.QIcon_Paint5(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), (C.uintptr_t)(mode), (C.uintptr_t)(state))
}

func (this *QIcon) Paint6(painter *QPainter, x int, y int, w int, h int, alignment int) {
	C.QIcon_Paint6(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(alignment))
}

func (this *QIcon) Paint7(painter *QPainter, x int, y int, w int, h int, alignment int, mode uintptr) {
	C.QIcon_Paint7(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(alignment), (C.uintptr_t)(mode))
}

func (this *QIcon) Paint8(painter *QPainter, x int, y int, w int, h int, alignment int, mode uintptr, state uintptr) {
	C.QIcon_Paint8(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(alignment), (C.uintptr_t)(mode), (C.uintptr_t)(state))
}

func (this *QIcon) AddPixmap2(pixmap *QPixmap, mode uintptr) {
	C.QIcon_AddPixmap2(this.h, pixmap.cPointer(), (C.uintptr_t)(mode))
}

func (this *QIcon) AddPixmap3(pixmap *QPixmap, mode uintptr, state uintptr) {
	C.QIcon_AddPixmap3(this.h, pixmap.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(state))
}

func (this *QIcon) AddFile2(fileName string, size *QSize) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QIcon_AddFile2(this.h, fileName_Cstring, C.ulong(len(fileName)), size.cPointer())
}

func (this *QIcon) AddFile3(fileName string, size *QSize, mode uintptr) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QIcon_AddFile3(this.h, fileName_Cstring, C.ulong(len(fileName)), size.cPointer(), (C.uintptr_t)(mode))
}

func (this *QIcon) AddFile4(fileName string, size *QSize, mode uintptr, state uintptr) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QIcon_AddFile4(this.h, fileName_Cstring, C.ulong(len(fileName)), size.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(state))
}

func (this *QIcon) AvailableSizes1(mode uintptr) []QSize {
	var _out **C.QSize = nil
	var _out_len C.size_t = 0
	C.QIcon_AvailableSizes1(this.h, (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]QSize, int(_out_len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQSize(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIcon) AvailableSizes2(mode uintptr, state uintptr) []QSize {
	var _out **C.QSize = nil
	var _out_len C.size_t = 0
	C.QIcon_AvailableSizes2(this.h, (C.uintptr_t)(mode), (C.uintptr_t)(state), &_out, &_out_len)
	ret := make([]QSize, int(_out_len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQSize(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIcon) Delete() {
	C.QIcon_Delete(this.h)
}

package qt6

/*

#include "gen_qicon.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QIcon__Mode int

const (
	QIcon__Normal   QIcon__Mode = 0
	QIcon__Disabled QIcon__Mode = 1
	QIcon__Active   QIcon__Mode = 2
	QIcon__Selected QIcon__Mode = 3
)

type QIcon__State int

const (
	QIcon__On  QIcon__State = 0
	QIcon__Off QIcon__State = 1
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

func (this *QIcon) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQIcon(h *C.QIcon) *QIcon {
	if h == nil {
		return nil
	}
	return &QIcon{h: h}
}

func UnsafeNewQIcon(h unsafe.Pointer) *QIcon {
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
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QIcon_new4(fileName_ms)
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
	_ret := C.QIcon_Pixmap(this.h, size.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap2(w int, h int) *QPixmap {
	_ret := C.QIcon_Pixmap2(this.h, (C.int)(w), (C.int)(h))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) PixmapWithExtent(extent int) *QPixmap {
	_ret := C.QIcon_PixmapWithExtent(this.h, (C.int)(extent))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap3(size *QSize, devicePixelRatio float64) *QPixmap {
	_ret := C.QIcon_Pixmap3(this.h, size.cPointer(), (C.double)(devicePixelRatio))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap4(window *QWindow, size *QSize) *QPixmap {
	_ret := C.QIcon_Pixmap4(this.h, window.cPointer(), size.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) ActualSize(size *QSize) *QSize {
	_ret := C.QIcon_ActualSize(this.h, size.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) ActualSize2(window *QWindow, size *QSize) *QSize {
	_ret := C.QIcon_ActualSize2(this.h, window.cPointer(), size.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Name() string {
	var _ms C.struct_miqt_string = C.QIcon_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QIcon) Paint(painter *QPainter, rect *QRect) {
	C.QIcon_Paint(this.h, painter.cPointer(), rect.cPointer())
}

func (this *QIcon) Paint2(painter *QPainter, x int, y int, w int, h int) {
	C.QIcon_Paint2(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QIcon) IsNull() bool {
	return (bool)(C.QIcon_IsNull(this.h))
}

func (this *QIcon) IsDetached() bool {
	return (bool)(C.QIcon_IsDetached(this.h))
}

func (this *QIcon) Detach() {
	C.QIcon_Detach(this.h)
}

func (this *QIcon) CacheKey() int64 {
	return (int64)(C.QIcon_CacheKey(this.h))
}

func (this *QIcon) AddPixmap(pixmap *QPixmap) {
	C.QIcon_AddPixmap(this.h, pixmap.cPointer())
}

func (this *QIcon) AddFile(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QIcon_AddFile(this.h, fileName_ms)
}

func (this *QIcon) AvailableSizes() []QSize {
	var _ma *C.struct_miqt_array = C.QIcon_AvailableSizes(this.h)
	_ret := make([]QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQSize(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QIcon) SetIsMask(isMask bool) {
	C.QIcon_SetIsMask(this.h, (C.bool)(isMask))
}

func (this *QIcon) IsMask() bool {
	return (bool)(C.QIcon_IsMask(this.h))
}

func QIcon_FromTheme(name string) *QIcon {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_ret := C.QIcon_FromTheme(name_ms)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QIcon_FromTheme2(name string, fallback *QIcon) *QIcon {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_ret := C.QIcon_FromTheme2(name_ms, fallback.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QIcon_HasThemeIcon(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QIcon_HasThemeIcon(name_ms))
}

func QIcon_ThemeSearchPaths() []string {
	var _ma *C.struct_miqt_array = C.QIcon_ThemeSearchPaths()
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

func QIcon_SetThemeSearchPaths(searchpath []string) {
	// For the C ABI, malloc a C array of structs
	searchpath_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(searchpath))))
	defer C.free(unsafe.Pointer(searchpath_CArray))
	for i := range searchpath {
		searchpath_i_ms := C.struct_miqt_string{}
		searchpath_i_ms.data = C.CString(searchpath[i])
		searchpath_i_ms.len = C.size_t(len(searchpath[i]))
		defer C.free(unsafe.Pointer(searchpath_i_ms.data))
		searchpath_CArray[i] = searchpath_i_ms
	}
	searchpath_ma := &C.struct_miqt_array{len: C.size_t(len(searchpath)), data: unsafe.Pointer(searchpath_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(searchpath_ma))
	C.QIcon_SetThemeSearchPaths(searchpath_ma)
}

func QIcon_FallbackSearchPaths() []string {
	var _ma *C.struct_miqt_array = C.QIcon_FallbackSearchPaths()
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

func QIcon_SetFallbackSearchPaths(paths []string) {
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
	C.QIcon_SetFallbackSearchPaths(paths_ma)
}

func QIcon_ThemeName() string {
	var _ms C.struct_miqt_string = C.QIcon_ThemeName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIcon_SetThemeName(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QIcon_SetThemeName(path_ms)
}

func QIcon_FallbackThemeName() string {
	var _ms C.struct_miqt_string = C.QIcon_FallbackThemeName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QIcon_SetFallbackThemeName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QIcon_SetFallbackThemeName(name_ms)
}

func (this *QIcon) Pixmap22(size *QSize, mode QIcon__Mode) *QPixmap {
	_ret := C.QIcon_Pixmap22(this.h, size.cPointer(), (C.int)(mode))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap32(size *QSize, mode QIcon__Mode, state QIcon__State) *QPixmap {
	_ret := C.QIcon_Pixmap32(this.h, size.cPointer(), (C.int)(mode), (C.int)(state))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap33(w int, h int, mode QIcon__Mode) *QPixmap {
	_ret := C.QIcon_Pixmap33(this.h, (C.int)(w), (C.int)(h), (C.int)(mode))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap42(w int, h int, mode QIcon__Mode, state QIcon__State) *QPixmap {
	_ret := C.QIcon_Pixmap42(this.h, (C.int)(w), (C.int)(h), (C.int)(mode), (C.int)(state))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap23(extent int, mode QIcon__Mode) *QPixmap {
	_ret := C.QIcon_Pixmap23(this.h, (C.int)(extent), (C.int)(mode))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap34(extent int, mode QIcon__Mode, state QIcon__State) *QPixmap {
	_ret := C.QIcon_Pixmap34(this.h, (C.int)(extent), (C.int)(mode), (C.int)(state))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap35(size *QSize, devicePixelRatio float64, mode QIcon__Mode) *QPixmap {
	_ret := C.QIcon_Pixmap35(this.h, size.cPointer(), (C.double)(devicePixelRatio), (C.int)(mode))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap43(size *QSize, devicePixelRatio float64, mode QIcon__Mode, state QIcon__State) *QPixmap {
	_ret := C.QIcon_Pixmap43(this.h, size.cPointer(), (C.double)(devicePixelRatio), (C.int)(mode), (C.int)(state))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap36(window *QWindow, size *QSize, mode QIcon__Mode) *QPixmap {
	_ret := C.QIcon_Pixmap36(this.h, window.cPointer(), size.cPointer(), (C.int)(mode))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Pixmap44(window *QWindow, size *QSize, mode QIcon__Mode, state QIcon__State) *QPixmap {
	_ret := C.QIcon_Pixmap44(this.h, window.cPointer(), size.cPointer(), (C.int)(mode), (C.int)(state))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) ActualSize22(size *QSize, mode QIcon__Mode) *QSize {
	_ret := C.QIcon_ActualSize22(this.h, size.cPointer(), (C.int)(mode))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) ActualSize3(size *QSize, mode QIcon__Mode, state QIcon__State) *QSize {
	_ret := C.QIcon_ActualSize3(this.h, size.cPointer(), (C.int)(mode), (C.int)(state))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) ActualSize32(window *QWindow, size *QSize, mode QIcon__Mode) *QSize {
	_ret := C.QIcon_ActualSize32(this.h, window.cPointer(), size.cPointer(), (C.int)(mode))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) ActualSize4(window *QWindow, size *QSize, mode QIcon__Mode, state QIcon__State) *QSize {
	_ret := C.QIcon_ActualSize4(this.h, window.cPointer(), size.cPointer(), (C.int)(mode), (C.int)(state))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QIcon) Paint3(painter *QPainter, rect *QRect, alignment AlignmentFlag) {
	C.QIcon_Paint3(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment))
}

func (this *QIcon) Paint4(painter *QPainter, rect *QRect, alignment AlignmentFlag, mode QIcon__Mode) {
	C.QIcon_Paint4(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), (C.int)(mode))
}

func (this *QIcon) Paint5(painter *QPainter, rect *QRect, alignment AlignmentFlag, mode QIcon__Mode, state QIcon__State) {
	C.QIcon_Paint5(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), (C.int)(mode), (C.int)(state))
}

func (this *QIcon) Paint6(painter *QPainter, x int, y int, w int, h int, alignment AlignmentFlag) {
	C.QIcon_Paint6(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(alignment))
}

func (this *QIcon) Paint7(painter *QPainter, x int, y int, w int, h int, alignment AlignmentFlag, mode QIcon__Mode) {
	C.QIcon_Paint7(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(alignment), (C.int)(mode))
}

func (this *QIcon) Paint8(painter *QPainter, x int, y int, w int, h int, alignment AlignmentFlag, mode QIcon__Mode, state QIcon__State) {
	C.QIcon_Paint8(this.h, painter.cPointer(), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(alignment), (C.int)(mode), (C.int)(state))
}

func (this *QIcon) AddPixmap2(pixmap *QPixmap, mode QIcon__Mode) {
	C.QIcon_AddPixmap2(this.h, pixmap.cPointer(), (C.int)(mode))
}

func (this *QIcon) AddPixmap3(pixmap *QPixmap, mode QIcon__Mode, state QIcon__State) {
	C.QIcon_AddPixmap3(this.h, pixmap.cPointer(), (C.int)(mode), (C.int)(state))
}

func (this *QIcon) AddFile2(fileName string, size *QSize) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QIcon_AddFile2(this.h, fileName_ms, size.cPointer())
}

func (this *QIcon) AddFile3(fileName string, size *QSize, mode QIcon__Mode) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QIcon_AddFile3(this.h, fileName_ms, size.cPointer(), (C.int)(mode))
}

func (this *QIcon) AddFile4(fileName string, size *QSize, mode QIcon__Mode, state QIcon__State) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QIcon_AddFile4(this.h, fileName_ms, size.cPointer(), (C.int)(mode), (C.int)(state))
}

func (this *QIcon) AvailableSizes1(mode QIcon__Mode) []QSize {
	var _ma *C.struct_miqt_array = C.QIcon_AvailableSizes1(this.h, (C.int)(mode))
	_ret := make([]QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQSize(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QIcon) AvailableSizes2(mode QIcon__Mode, state QIcon__State) []QSize {
	var _ma *C.struct_miqt_array = C.QIcon_AvailableSizes2(this.h, (C.int)(mode), (C.int)(state))
	_ret := make([]QSize, int(_ma.len))
	_outCast := (*[0xffff]*C.QSize)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQSize(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

// Delete this object from C++ memory.
func (this *QIcon) Delete() {
	C.QIcon_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIcon) GoGC() {
	runtime.SetFinalizer(this, func(this *QIcon) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

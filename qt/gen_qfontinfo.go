package qt

/*

#include "gen_qfontinfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFontInfo struct {
	h  *C.QFontInfo
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QFontInfo) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QFontInfo) cPointer() *C.QFontInfo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFontInfo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFontInfo constructs the type using only CGO pointers.
func newQFontInfo(h *C.QFontInfo) *QFontInfo {
	if h == nil {
		return nil
	}

	return &QFontInfo{h: h}
}

// UnsafeNewQFontInfo constructs the type using only unsafe pointers.
func UnsafeNewQFontInfo(h unsafe.Pointer) *QFontInfo {
	return newQFontInfo((*C.QFontInfo)(h))
}

// NewQFontInfo constructs a new QFontInfo object.
func NewQFontInfo(param1 *QFont) *QFontInfo {
	defer runtime.KeepAlive(param1)

	return newQFontInfo(C.QFontInfo_new(param1.cPointer()))
}

// NewQFontInfo2 constructs a new QFontInfo object.
func NewQFontInfo2(param1 *QFontInfo) *QFontInfo {
	defer runtime.KeepAlive(param1)

	return newQFontInfo(C.QFontInfo_new2(param1.cPointer()))
}

func (this *QFontInfo) OperatorAssign(param1 *QFontInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QFontInfo_operatorAssign(this.h, param1.cPointer())
}

func (this *QFontInfo) Swap(other *QFontInfo) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QFontInfo_swap(this.h, other.cPointer())
}

func (this *QFontInfo) Family() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QFontInfo_family(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontInfo) StyleName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QFontInfo_styleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontInfo) PixelSize() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFontInfo_pixelSize(this.h))
}

func (this *QFontInfo) PointSize() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFontInfo_pointSize(this.h))
}

func (this *QFontInfo) PointSizeF() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QFontInfo_pointSizeF(this.h))
}

func (this *QFontInfo) Italic() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_italic(this.h))
}

func (this *QFontInfo) Style() QFont__Style {
	defer runtime.KeepAlive(this)
	return (QFont__Style)(C.QFontInfo_style(this.h))
}

func (this *QFontInfo) Weight() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QFontInfo_weight(this.h))
}

func (this *QFontInfo) Bold() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_bold(this.h))
}

func (this *QFontInfo) Underline() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_underline(this.h))
}

func (this *QFontInfo) Overline() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_overline(this.h))
}

func (this *QFontInfo) StrikeOut() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_strikeOut(this.h))
}

func (this *QFontInfo) FixedPitch() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_fixedPitch(this.h))
}

func (this *QFontInfo) StyleHint() QFont__StyleHint {
	defer runtime.KeepAlive(this)
	return (QFont__StyleHint)(C.QFontInfo_styleHint(this.h))
}

func (this *QFontInfo) RawMode() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_rawMode(this.h))
}

func (this *QFontInfo) ExactMatch() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFontInfo_exactMatch(this.h))
}

// Delete this object from C++ memory.
func (this *QFontInfo) Delete() {
	C.QFontInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QFontInfo) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QFontInfo_delete((*C.QFontInfo)(gc[0]))
	})
	this.miqtSetGC(gc)
}

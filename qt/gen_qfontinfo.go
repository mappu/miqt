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
	h *C.QFontInfo
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

	return newQFontInfo(C.QFontInfo_new(param1.cPointer()))
}

// NewQFontInfo2 constructs a new QFontInfo object.
func NewQFontInfo2(param1 *QFontInfo) *QFontInfo {

	return newQFontInfo(C.QFontInfo_new2(param1.cPointer()))
}

func (this *QFontInfo) OperatorAssign(param1 *QFontInfo) {
	C.QFontInfo_operatorAssign(this.h, param1.cPointer())
}

func (this *QFontInfo) Swap(other *QFontInfo) {
	C.QFontInfo_swap(this.h, other.cPointer())
}

func (this *QFontInfo) Family() string {
	var _ms C.struct_miqt_string = C.QFontInfo_family(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontInfo) StyleName() string {
	var _ms C.struct_miqt_string = C.QFontInfo_styleName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontInfo) PixelSize() int {
	return (int)(C.QFontInfo_pixelSize(this.h))
}

func (this *QFontInfo) PointSize() int {
	return (int)(C.QFontInfo_pointSize(this.h))
}

func (this *QFontInfo) PointSizeF() float64 {
	return (float64)(C.QFontInfo_pointSizeF(this.h))
}

func (this *QFontInfo) Italic() bool {
	return (bool)(C.QFontInfo_italic(this.h))
}

func (this *QFontInfo) Style() QFont__Style {
	return (QFont__Style)(C.QFontInfo_style(this.h))
}

func (this *QFontInfo) Weight() int {
	return (int)(C.QFontInfo_weight(this.h))
}

func (this *QFontInfo) Bold() bool {
	return (bool)(C.QFontInfo_bold(this.h))
}

func (this *QFontInfo) Underline() bool {
	return (bool)(C.QFontInfo_underline(this.h))
}

func (this *QFontInfo) Overline() bool {
	return (bool)(C.QFontInfo_overline(this.h))
}

func (this *QFontInfo) StrikeOut() bool {
	return (bool)(C.QFontInfo_strikeOut(this.h))
}

func (this *QFontInfo) FixedPitch() bool {
	return (bool)(C.QFontInfo_fixedPitch(this.h))
}

func (this *QFontInfo) StyleHint() QFont__StyleHint {
	return (QFont__StyleHint)(C.QFontInfo_styleHint(this.h))
}

func (this *QFontInfo) RawMode() bool {
	return (bool)(C.QFontInfo_rawMode(this.h))
}

func (this *QFontInfo) ExactMatch() bool {
	return (bool)(C.QFontInfo_exactMatch(this.h))
}

// Delete this object from C++ memory.
func (this *QFontInfo) Delete() {
	C.QFontInfo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

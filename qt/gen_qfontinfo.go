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

func newQFontInfo(h *C.QFontInfo) *QFontInfo {
	if h == nil {
		return nil
	}
	return &QFontInfo{h: h}
}

func newQFontInfo_U(h unsafe.Pointer) *QFontInfo {
	return newQFontInfo((*C.QFontInfo)(h))
}

// NewQFontInfo constructs a new QFontInfo object.
func NewQFontInfo(param1 *QFont) *QFontInfo {
	ret := C.QFontInfo_new(param1.cPointer())
	return newQFontInfo(ret)
}

// NewQFontInfo2 constructs a new QFontInfo object.
func NewQFontInfo2(param1 *QFontInfo) *QFontInfo {
	ret := C.QFontInfo_new2(param1.cPointer())
	return newQFontInfo(ret)
}

func (this *QFontInfo) OperatorAssign(param1 *QFontInfo) {
	C.QFontInfo_OperatorAssign(this.h, param1.cPointer())
}

func (this *QFontInfo) Swap(other *QFontInfo) {
	C.QFontInfo_Swap(this.h, other.cPointer())
}

func (this *QFontInfo) Family() string {
	var _ms *C.struct_miqt_string = C.QFontInfo_Family(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFontInfo) StyleName() string {
	var _ms *C.struct_miqt_string = C.QFontInfo_StyleName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFontInfo) PixelSize() int {
	return (int)(C.QFontInfo_PixelSize(this.h))
}

func (this *QFontInfo) PointSize() int {
	return (int)(C.QFontInfo_PointSize(this.h))
}

func (this *QFontInfo) PointSizeF() float64 {
	return (float64)(C.QFontInfo_PointSizeF(this.h))
}

func (this *QFontInfo) Italic() bool {
	return (bool)(C.QFontInfo_Italic(this.h))
}

func (this *QFontInfo) Style() QFont__Style {
	return (QFont__Style)(C.QFontInfo_Style(this.h))
}

func (this *QFontInfo) Weight() int {
	return (int)(C.QFontInfo_Weight(this.h))
}

func (this *QFontInfo) Bold() bool {
	return (bool)(C.QFontInfo_Bold(this.h))
}

func (this *QFontInfo) Underline() bool {
	return (bool)(C.QFontInfo_Underline(this.h))
}

func (this *QFontInfo) Overline() bool {
	return (bool)(C.QFontInfo_Overline(this.h))
}

func (this *QFontInfo) StrikeOut() bool {
	return (bool)(C.QFontInfo_StrikeOut(this.h))
}

func (this *QFontInfo) FixedPitch() bool {
	return (bool)(C.QFontInfo_FixedPitch(this.h))
}

func (this *QFontInfo) StyleHint() QFont__StyleHint {
	return (QFont__StyleHint)(C.QFontInfo_StyleHint(this.h))
}

func (this *QFontInfo) RawMode() bool {
	return (bool)(C.QFontInfo_RawMode(this.h))
}

func (this *QFontInfo) ExactMatch() bool {
	return (bool)(C.QFontInfo_ExactMatch(this.h))
}

// Delete this object from C++ memory.
func (this *QFontInfo) Delete() {
	C.QFontInfo_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontInfo) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontInfo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

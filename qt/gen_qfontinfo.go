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
	_ret := C.QFontInfo_PixelSize(this.h)
	return (int)(_ret)
}

func (this *QFontInfo) PointSize() int {
	_ret := C.QFontInfo_PointSize(this.h)
	return (int)(_ret)
}

func (this *QFontInfo) PointSizeF() float64 {
	_ret := C.QFontInfo_PointSizeF(this.h)
	return (float64)(_ret)
}

func (this *QFontInfo) Italic() bool {
	_ret := C.QFontInfo_Italic(this.h)
	return (bool)(_ret)
}

func (this *QFontInfo) Style() QFont__Style {
	_ret := C.QFontInfo_Style(this.h)
	return (QFont__Style)(_ret)
}

func (this *QFontInfo) Weight() int {
	_ret := C.QFontInfo_Weight(this.h)
	return (int)(_ret)
}

func (this *QFontInfo) Bold() bool {
	_ret := C.QFontInfo_Bold(this.h)
	return (bool)(_ret)
}

func (this *QFontInfo) Underline() bool {
	_ret := C.QFontInfo_Underline(this.h)
	return (bool)(_ret)
}

func (this *QFontInfo) Overline() bool {
	_ret := C.QFontInfo_Overline(this.h)
	return (bool)(_ret)
}

func (this *QFontInfo) StrikeOut() bool {
	_ret := C.QFontInfo_StrikeOut(this.h)
	return (bool)(_ret)
}

func (this *QFontInfo) FixedPitch() bool {
	_ret := C.QFontInfo_FixedPitch(this.h)
	return (bool)(_ret)
}

func (this *QFontInfo) StyleHint() QFont__StyleHint {
	_ret := C.QFontInfo_StyleHint(this.h)
	return (QFont__StyleHint)(_ret)
}

func (this *QFontInfo) RawMode() bool {
	_ret := C.QFontInfo_RawMode(this.h)
	return (bool)(_ret)
}

func (this *QFontInfo) ExactMatch() bool {
	_ret := C.QFontInfo_ExactMatch(this.h)
	return (bool)(_ret)
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

package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qfontinfo.h"
#include <stdlib.h>

*/
import "C"

import (
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontInfo_Family(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontInfo) StyleName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontInfo_StyleName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontInfo) PixelSize() int {
	ret := C.QFontInfo_PixelSize(this.h)
	return (int)(ret)
}

func (this *QFontInfo) PointSize() int {
	ret := C.QFontInfo_PointSize(this.h)
	return (int)(ret)
}

func (this *QFontInfo) PointSizeF() float64 {
	ret := C.QFontInfo_PointSizeF(this.h)
	return (float64)(ret)
}

func (this *QFontInfo) Italic() bool {
	ret := C.QFontInfo_Italic(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) Weight() int {
	ret := C.QFontInfo_Weight(this.h)
	return (int)(ret)
}

func (this *QFontInfo) Bold() bool {
	ret := C.QFontInfo_Bold(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) Underline() bool {
	ret := C.QFontInfo_Underline(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) Overline() bool {
	ret := C.QFontInfo_Overline(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) StrikeOut() bool {
	ret := C.QFontInfo_StrikeOut(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) FixedPitch() bool {
	ret := C.QFontInfo_FixedPitch(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) RawMode() bool {
	ret := C.QFontInfo_RawMode(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) ExactMatch() bool {
	ret := C.QFontInfo_ExactMatch(this.h)
	return (bool)(ret)
}

func (this *QFontInfo) Delete() {
	C.QFontInfo_Delete(this.h)
}

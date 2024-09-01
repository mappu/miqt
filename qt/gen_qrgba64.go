package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qrgba64.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRgba64 struct {
	h *C.QRgba64
}

func (this *QRgba64) cPointer() *C.QRgba64 {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRgba64(h *C.QRgba64) *QRgba64 {
	if h == nil {
		return nil
	}
	return &QRgba64{h: h}
}

func newQRgba64_U(h unsafe.Pointer) *QRgba64 {
	return newQRgba64((*C.QRgba64)(h))
}

// NewQRgba64 constructs a new QRgba64 object.
func NewQRgba64() *QRgba64 {
	ret := C.QRgba64_new()
	return newQRgba64(ret)
}

// NewQRgba642 constructs a new QRgba64 object.
func NewQRgba642(param1 *QRgba64) *QRgba64 {
	ret := C.QRgba64_new2(param1.cPointer())
	return newQRgba64(ret)
}

func QRgba64_FromRgba64(c uint64) *QRgba64 {
	ret := C.QRgba64_FromRgba64((C.ulonglong)(c))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRgba64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRgba64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QRgba64_FromRgba642(red uint16, green uint16, blue uint16, alpha uint16) *QRgba64 {
	ret := C.QRgba64_FromRgba642((C.uint16_t)(red), (C.uint16_t)(green), (C.uint16_t)(blue), (C.uint16_t)(alpha))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRgba64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRgba64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QRgba64_FromRgba(red byte, green byte, blue byte, alpha byte) *QRgba64 {
	ret := C.QRgba64_FromRgba((C.uchar)(red), (C.uchar)(green), (C.uchar)(blue), (C.uchar)(alpha))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRgba64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRgba64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QRgba64_FromArgb32(rgb uint) *QRgba64 {
	ret := C.QRgba64_FromArgb32((C.uint)(rgb))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRgba64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRgba64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRgba64) IsOpaque() bool {
	ret := C.QRgba64_IsOpaque(this.h)
	return (bool)(ret)
}

func (this *QRgba64) IsTransparent() bool {
	ret := C.QRgba64_IsTransparent(this.h)
	return (bool)(ret)
}

func (this *QRgba64) Red() uint16 {
	ret := C.QRgba64_Red(this.h)
	return (uint16)(ret)
}

func (this *QRgba64) Green() uint16 {
	ret := C.QRgba64_Green(this.h)
	return (uint16)(ret)
}

func (this *QRgba64) Blue() uint16 {
	ret := C.QRgba64_Blue(this.h)
	return (uint16)(ret)
}

func (this *QRgba64) Alpha() uint16 {
	ret := C.QRgba64_Alpha(this.h)
	return (uint16)(ret)
}

func (this *QRgba64) SetRed(_red uint16) {
	C.QRgba64_SetRed(this.h, (C.uint16_t)(_red))
}

func (this *QRgba64) SetGreen(_green uint16) {
	C.QRgba64_SetGreen(this.h, (C.uint16_t)(_green))
}

func (this *QRgba64) SetBlue(_blue uint16) {
	C.QRgba64_SetBlue(this.h, (C.uint16_t)(_blue))
}

func (this *QRgba64) SetAlpha(_alpha uint16) {
	C.QRgba64_SetAlpha(this.h, (C.uint16_t)(_alpha))
}

func (this *QRgba64) Red8() byte {
	ret := C.QRgba64_Red8(this.h)
	return (byte)(ret)
}

func (this *QRgba64) Green8() byte {
	ret := C.QRgba64_Green8(this.h)
	return (byte)(ret)
}

func (this *QRgba64) Blue8() byte {
	ret := C.QRgba64_Blue8(this.h)
	return (byte)(ret)
}

func (this *QRgba64) Alpha8() byte {
	ret := C.QRgba64_Alpha8(this.h)
	return (byte)(ret)
}

func (this *QRgba64) ToArgb32() uint {
	ret := C.QRgba64_ToArgb32(this.h)
	return (uint)(ret)
}

func (this *QRgba64) ToRgb16() uint16 {
	ret := C.QRgba64_ToRgb16(this.h)
	return (uint16)(ret)
}

func (this *QRgba64) Premultiplied() *QRgba64 {
	ret := C.QRgba64_Premultiplied(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRgba64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRgba64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRgba64) Unpremultiplied() *QRgba64 {
	ret := C.QRgba64_Unpremultiplied(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRgba64(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRgba64) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRgba64) OperatorAssign(_rgba uint64) {
	C.QRgba64_OperatorAssign(this.h, (C.ulonglong)(_rgba))
}

func (this *QRgba64) Delete() {
	C.QRgba64_Delete(this.h)
}

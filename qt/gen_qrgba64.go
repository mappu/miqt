package qt

/*

#include "gen_qrgba64.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRgba64 struct {
	h          *C.QRgba64
	isSubclass bool
}

func (this *QRgba64) cPointer() *C.QRgba64 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRgba64) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRgba64 constructs the type using only CGO pointers.
func newQRgba64(h *C.QRgba64) *QRgba64 {
	if h == nil {
		return nil
	}
	return &QRgba64{h: h}
}

// UnsafeNewQRgba64 constructs the type using only unsafe pointers.
func UnsafeNewQRgba64(h unsafe.Pointer) *QRgba64 {
	if h == nil {
		return nil
	}

	return &QRgba64{h: (*C.QRgba64)(h)}
}

// NewQRgba64 constructs a new QRgba64 object.
func NewQRgba64() *QRgba64 {
	var outptr_QRgba64 *C.QRgba64 = nil

	C.QRgba64_new(&outptr_QRgba64)
	ret := newQRgba64(outptr_QRgba64)
	ret.isSubclass = true
	return ret
}

// NewQRgba642 constructs a new QRgba64 object.
func NewQRgba642(param1 *QRgba64) *QRgba64 {
	var outptr_QRgba64 *C.QRgba64 = nil

	C.QRgba64_new2(param1.cPointer(), &outptr_QRgba64)
	ret := newQRgba64(outptr_QRgba64)
	ret.isSubclass = true
	return ret
}

func QRgba64_FromRgba64(c uint64) *QRgba64 {
	_ret := C.QRgba64_FromRgba64((C.ulonglong)(c))
	_goptr := newQRgba64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QRgba64_FromRgba642(red uint16, green uint16, blue uint16, alpha uint16) *QRgba64 {
	_ret := C.QRgba64_FromRgba642((C.uint16_t)(red), (C.uint16_t)(green), (C.uint16_t)(blue), (C.uint16_t)(alpha))
	_goptr := newQRgba64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QRgba64_FromRgba(red byte, green byte, blue byte, alpha byte) *QRgba64 {
	_ret := C.QRgba64_FromRgba((C.uchar)(red), (C.uchar)(green), (C.uchar)(blue), (C.uchar)(alpha))
	_goptr := newQRgba64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QRgba64_FromArgb32(rgb uint) *QRgba64 {
	_ret := C.QRgba64_FromArgb32((C.uint)(rgb))
	_goptr := newQRgba64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRgba64) IsOpaque() bool {
	return (bool)(C.QRgba64_IsOpaque(this.h))
}

func (this *QRgba64) IsTransparent() bool {
	return (bool)(C.QRgba64_IsTransparent(this.h))
}

func (this *QRgba64) Red() uint16 {
	return (uint16)(C.QRgba64_Red(this.h))
}

func (this *QRgba64) Green() uint16 {
	return (uint16)(C.QRgba64_Green(this.h))
}

func (this *QRgba64) Blue() uint16 {
	return (uint16)(C.QRgba64_Blue(this.h))
}

func (this *QRgba64) Alpha() uint16 {
	return (uint16)(C.QRgba64_Alpha(this.h))
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
	return (byte)(C.QRgba64_Red8(this.h))
}

func (this *QRgba64) Green8() byte {
	return (byte)(C.QRgba64_Green8(this.h))
}

func (this *QRgba64) Blue8() byte {
	return (byte)(C.QRgba64_Blue8(this.h))
}

func (this *QRgba64) Alpha8() byte {
	return (byte)(C.QRgba64_Alpha8(this.h))
}

func (this *QRgba64) ToArgb32() uint {
	return (uint)(C.QRgba64_ToArgb32(this.h))
}

func (this *QRgba64) ToRgb16() uint16 {
	return (uint16)(C.QRgba64_ToRgb16(this.h))
}

func (this *QRgba64) Premultiplied() *QRgba64 {
	_ret := C.QRgba64_Premultiplied(this.h)
	_goptr := newQRgba64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRgba64) Unpremultiplied() *QRgba64 {
	_ret := C.QRgba64_Unpremultiplied(this.h)
	_goptr := newQRgba64(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRgba64) OperatorAssign(_rgba uint64) {
	C.QRgba64_OperatorAssign(this.h, (C.ulonglong)(_rgba))
}

// Delete this object from C++ memory.
func (this *QRgba64) Delete() {
	C.QRgba64_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRgba64) GoGC() {
	runtime.SetFinalizer(this, func(this *QRgba64) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

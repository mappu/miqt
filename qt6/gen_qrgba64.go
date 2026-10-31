package qt6

/*

#include "gen_qrgba64.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"unsafe"
)

// QRgba64 is a plain Go struct with the same memory layout as the
// Qt class. The zero value is not always the same as the default constructor;
// use NewQRgba64().
type QRgba64 struct {
	rgba uint64
}

func (this *QRgba64) cPointer() *C.QRgba64 {
	return (*C.QRgba64)(unsafe.Pointer(this))
}

func (this *QRgba64) UnsafePointer() unsafe.Pointer {
	return unsafe.Pointer(this)
}

// newQRgba64 views C++ memory as this type, without copying it.
func newQRgba64(h *C.QRgba64) *QRgba64 {
	return (*QRgba64)(unsafe.Pointer(h))
}

// UnsafeNewQRgba64 views C++ memory as this type, without copying it.
func UnsafeNewQRgba64(h unsafe.Pointer) *QRgba64 {
	return (*QRgba64)(h)
}

// NewQRgba64 constructs a new QRgba64 object.
func NewQRgba64() QRgba64 {

	return libmiqt.ValueCast[QRgba64](C.QRgba64_new())
}

// NewQRgba642 constructs a new QRgba64 object.
func NewQRgba642(param1 QRgba64) QRgba64 {

	return libmiqt.ValueCast[QRgba64](C.QRgba64_new2(libmiqt.ValueCast[C.struct_miqt_qrgba64](param1)))
}

func QRgba64_FromRgba64(c uint64) QRgba64 {
	return libmiqt.ValueCast[QRgba64](C.QRgba64_fromRgba64((C.ulonglong)(c)))
}

func QRgba64_FromRgba642(red uint16, green uint16, blue uint16, alpha uint16) QRgba64 {
	return libmiqt.ValueCast[QRgba64](C.QRgba64_fromRgba642((C.ushort)(red), (C.ushort)(green), (C.ushort)(blue), (C.ushort)(alpha)))
}

func QRgba64_FromRgba(red byte, green byte, blue byte, alpha byte) QRgba64 {
	return libmiqt.ValueCast[QRgba64](C.QRgba64_fromRgba((C.uchar)(red), (C.uchar)(green), (C.uchar)(blue), (C.uchar)(alpha)))
}

func QRgba64_FromArgb32(rgb uint) QRgba64 {
	return libmiqt.ValueCast[QRgba64](C.QRgba64_fromArgb32((C.uint)(rgb)))
}

func (this QRgba64) IsOpaque() bool {
	return (bool)(C.QRgba64_isOpaque(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) IsTransparent() bool {
	return (bool)(C.QRgba64_isTransparent(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Red() uint16 {
	return (uint16)(C.QRgba64_red(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Green() uint16 {
	return (uint16)(C.QRgba64_green(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Blue() uint16 {
	return (uint16)(C.QRgba64_blue(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Alpha() uint16 {
	return (uint16)(C.QRgba64_alpha(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this *QRgba64) SetRed(_red uint16) {
	C.QRgba64_setRed(this.cPointer(), (C.ushort)(_red))
}

func (this *QRgba64) SetGreen(_green uint16) {
	C.QRgba64_setGreen(this.cPointer(), (C.ushort)(_green))
}

func (this *QRgba64) SetBlue(_blue uint16) {
	C.QRgba64_setBlue(this.cPointer(), (C.ushort)(_blue))
}

func (this *QRgba64) SetAlpha(_alpha uint16) {
	C.QRgba64_setAlpha(this.cPointer(), (C.ushort)(_alpha))
}

func (this QRgba64) Red8() byte {
	return (byte)(C.QRgba64_red8(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Green8() byte {
	return (byte)(C.QRgba64_green8(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Blue8() byte {
	return (byte)(C.QRgba64_blue8(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Alpha8() byte {
	return (byte)(C.QRgba64_alpha8(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) ToArgb32() uint {
	return (uint)(C.QRgba64_toArgb32(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) ToRgb16() uint16 {
	return (uint16)(C.QRgba64_toRgb16(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Premultiplied() QRgba64 {
	return libmiqt.ValueCast[QRgba64](C.QRgba64_premultiplied(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) Unpremultiplied() QRgba64 {
	return libmiqt.ValueCast[QRgba64](C.QRgba64_unpremultiplied(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this QRgba64) ToUnsignedLongLong() uint64 {
	return (uint64)(C.QRgba64_ToUnsignedLongLong(libmiqt.ValueCast[C.struct_miqt_qrgba64](this)))
}

func (this *QRgba64) OperatorAssign(_rgba uint64) {
	C.QRgba64_operatorAssign(this.cPointer(), (C.ulonglong)(_rgba))
}

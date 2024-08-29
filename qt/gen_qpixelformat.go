package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpixelformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QPixelFormat struct {
	h *C.QPixelFormat
}

func (this *QPixelFormat) cPointer() *C.QPixelFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPixelFormat(h *C.QPixelFormat) *QPixelFormat {
	return &QPixelFormat{h: h}
}

func newQPixelFormat_U(h unsafe.Pointer) *QPixelFormat {
	return newQPixelFormat((*C.QPixelFormat)(h))
}

// NewQPixelFormat constructs a new QPixelFormat object.
func NewQPixelFormat() *QPixelFormat {
	ret := C.QPixelFormat_new()
	return newQPixelFormat(ret)
}

// NewQPixelFormat2 constructs a new QPixelFormat object.
func NewQPixelFormat2(colorModel uintptr, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage uintptr, alphaPosition uintptr, premultiplied uintptr, typeInterpretation uintptr) *QPixelFormat {
	ret := C.QPixelFormat_new2((C.uintptr_t)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.uintptr_t)(alphaUsage), (C.uintptr_t)(alphaPosition), (C.uintptr_t)(premultiplied), (C.uintptr_t)(typeInterpretation))
	return newQPixelFormat(ret)
}

// NewQPixelFormat3 constructs a new QPixelFormat object.
func NewQPixelFormat3(param1 *QPixelFormat) *QPixelFormat {
	ret := C.QPixelFormat_new3(param1.cPointer())
	return newQPixelFormat(ret)
}

// NewQPixelFormat4 constructs a new QPixelFormat object.
func NewQPixelFormat4(colorModel uintptr, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage uintptr, alphaPosition uintptr, premultiplied uintptr, typeInterpretation uintptr, byteOrder uintptr) *QPixelFormat {
	ret := C.QPixelFormat_new4((C.uintptr_t)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.uintptr_t)(alphaUsage), (C.uintptr_t)(alphaPosition), (C.uintptr_t)(premultiplied), (C.uintptr_t)(typeInterpretation), (C.uintptr_t)(byteOrder))
	return newQPixelFormat(ret)
}

// NewQPixelFormat5 constructs a new QPixelFormat object.
func NewQPixelFormat5(colorModel uintptr, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage uintptr, alphaPosition uintptr, premultiplied uintptr, typeInterpretation uintptr, byteOrder uintptr, subEnum byte) *QPixelFormat {
	ret := C.QPixelFormat_new5((C.uintptr_t)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.uintptr_t)(alphaUsage), (C.uintptr_t)(alphaPosition), (C.uintptr_t)(premultiplied), (C.uintptr_t)(typeInterpretation), (C.uintptr_t)(byteOrder), (C.uchar)(subEnum))
	return newQPixelFormat(ret)
}

func (this *QPixelFormat) ColorModel() uintptr {
	ret := C.QPixelFormat_ColorModel(this.h)
	return (uintptr)(ret)
}

func (this *QPixelFormat) ChannelCount() byte {
	ret := C.QPixelFormat_ChannelCount(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) RedSize() byte {
	ret := C.QPixelFormat_RedSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) GreenSize() byte {
	ret := C.QPixelFormat_GreenSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BlueSize() byte {
	ret := C.QPixelFormat_BlueSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) CyanSize() byte {
	ret := C.QPixelFormat_CyanSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) MagentaSize() byte {
	ret := C.QPixelFormat_MagentaSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) YellowSize() byte {
	ret := C.QPixelFormat_YellowSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BlackSize() byte {
	ret := C.QPixelFormat_BlackSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) HueSize() byte {
	ret := C.QPixelFormat_HueSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) SaturationSize() byte {
	ret := C.QPixelFormat_SaturationSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) LightnessSize() byte {
	ret := C.QPixelFormat_LightnessSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BrightnessSize() byte {
	ret := C.QPixelFormat_BrightnessSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) AlphaSize() byte {
	ret := C.QPixelFormat_AlphaSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BitsPerPixel() byte {
	ret := C.QPixelFormat_BitsPerPixel(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) AlphaUsage() uintptr {
	ret := C.QPixelFormat_AlphaUsage(this.h)
	return (uintptr)(ret)
}

func (this *QPixelFormat) AlphaPosition() uintptr {
	ret := C.QPixelFormat_AlphaPosition(this.h)
	return (uintptr)(ret)
}

func (this *QPixelFormat) Premultiplied() uintptr {
	ret := C.QPixelFormat_Premultiplied(this.h)
	return (uintptr)(ret)
}

func (this *QPixelFormat) TypeInterpretation() uintptr {
	ret := C.QPixelFormat_TypeInterpretation(this.h)
	return (uintptr)(ret)
}

func (this *QPixelFormat) ByteOrder() uintptr {
	ret := C.QPixelFormat_ByteOrder(this.h)
	return (uintptr)(ret)
}

func (this *QPixelFormat) YuvLayout() uintptr {
	ret := C.QPixelFormat_YuvLayout(this.h)
	return (uintptr)(ret)
}

func (this *QPixelFormat) SubEnum() byte {
	ret := C.QPixelFormat_SubEnum(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) Delete() {
	C.QPixelFormat_Delete(this.h)
}

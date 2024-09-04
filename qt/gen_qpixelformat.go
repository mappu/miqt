package qt

/*

#include "gen_qpixelformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QPixelFormat__ColorModel int

const (
	QPixelFormat__ColorModel__RGB       QPixelFormat__ColorModel = 0
	QPixelFormat__ColorModel__BGR       QPixelFormat__ColorModel = 1
	QPixelFormat__ColorModel__Indexed   QPixelFormat__ColorModel = 2
	QPixelFormat__ColorModel__Grayscale QPixelFormat__ColorModel = 3
	QPixelFormat__ColorModel__CMYK      QPixelFormat__ColorModel = 4
	QPixelFormat__ColorModel__HSL       QPixelFormat__ColorModel = 5
	QPixelFormat__ColorModel__HSV       QPixelFormat__ColorModel = 6
	QPixelFormat__ColorModel__YUV       QPixelFormat__ColorModel = 7
	QPixelFormat__ColorModel__Alpha     QPixelFormat__ColorModel = 8
)

type QPixelFormat__AlphaUsage int

const (
	QPixelFormat__AlphaUsage__UsesAlpha    QPixelFormat__AlphaUsage = 0
	QPixelFormat__AlphaUsage__IgnoresAlpha QPixelFormat__AlphaUsage = 1
)

type QPixelFormat__AlphaPosition int

const (
	QPixelFormat__AlphaPosition__AtBeginning QPixelFormat__AlphaPosition = 0
	QPixelFormat__AlphaPosition__AtEnd       QPixelFormat__AlphaPosition = 1
)

type QPixelFormat__AlphaPremultiplied int

const (
	QPixelFormat__AlphaPremultiplied__NotPremultiplied QPixelFormat__AlphaPremultiplied = 0
	QPixelFormat__AlphaPremultiplied__Premultiplied    QPixelFormat__AlphaPremultiplied = 1
)

type QPixelFormat__TypeInterpretation int

const (
	QPixelFormat__TypeInterpretation__UnsignedInteger QPixelFormat__TypeInterpretation = 0
	QPixelFormat__TypeInterpretation__UnsignedShort   QPixelFormat__TypeInterpretation = 1
	QPixelFormat__TypeInterpretation__UnsignedByte    QPixelFormat__TypeInterpretation = 2
	QPixelFormat__TypeInterpretation__FloatingPoint   QPixelFormat__TypeInterpretation = 3
)

type QPixelFormat__YUVLayout int

const (
	QPixelFormat__YUVLayout__YUV444   QPixelFormat__YUVLayout = 0
	QPixelFormat__YUVLayout__YUV422   QPixelFormat__YUVLayout = 1
	QPixelFormat__YUVLayout__YUV411   QPixelFormat__YUVLayout = 2
	QPixelFormat__YUVLayout__YUV420P  QPixelFormat__YUVLayout = 3
	QPixelFormat__YUVLayout__YUV420SP QPixelFormat__YUVLayout = 4
	QPixelFormat__YUVLayout__YV12     QPixelFormat__YUVLayout = 5
	QPixelFormat__YUVLayout__UYVY     QPixelFormat__YUVLayout = 6
	QPixelFormat__YUVLayout__YUYV     QPixelFormat__YUVLayout = 7
	QPixelFormat__YUVLayout__NV12     QPixelFormat__YUVLayout = 8
	QPixelFormat__YUVLayout__NV21     QPixelFormat__YUVLayout = 9
	QPixelFormat__YUVLayout__IMC1     QPixelFormat__YUVLayout = 10
	QPixelFormat__YUVLayout__IMC2     QPixelFormat__YUVLayout = 11
	QPixelFormat__YUVLayout__IMC3     QPixelFormat__YUVLayout = 12
	QPixelFormat__YUVLayout__IMC4     QPixelFormat__YUVLayout = 13
	QPixelFormat__YUVLayout__Y8       QPixelFormat__YUVLayout = 14
	QPixelFormat__YUVLayout__Y16      QPixelFormat__YUVLayout = 15
)

type QPixelFormat__ByteOrder int

const (
	QPixelFormat__ByteOrder__LittleEndian        QPixelFormat__ByteOrder = 0
	QPixelFormat__ByteOrder__BigEndian           QPixelFormat__ByteOrder = 1
	QPixelFormat__ByteOrder__CurrentSystemEndian QPixelFormat__ByteOrder = 2
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
	if h == nil {
		return nil
	}
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
func NewQPixelFormat2(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation) *QPixelFormat {
	ret := C.QPixelFormat_new2((C.uintptr_t)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.uintptr_t)(alphaUsage), (C.uintptr_t)(alphaPosition), (C.uintptr_t)(premultiplied), (C.uintptr_t)(typeInterpretation))
	return newQPixelFormat(ret)
}

// NewQPixelFormat3 constructs a new QPixelFormat object.
func NewQPixelFormat3(param1 *QPixelFormat) *QPixelFormat {
	ret := C.QPixelFormat_new3(param1.cPointer())
	return newQPixelFormat(ret)
}

// NewQPixelFormat4 constructs a new QPixelFormat object.
func NewQPixelFormat4(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation, byteOrder QPixelFormat__ByteOrder) *QPixelFormat {
	ret := C.QPixelFormat_new4((C.uintptr_t)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.uintptr_t)(alphaUsage), (C.uintptr_t)(alphaPosition), (C.uintptr_t)(premultiplied), (C.uintptr_t)(typeInterpretation), (C.uintptr_t)(byteOrder))
	return newQPixelFormat(ret)
}

// NewQPixelFormat5 constructs a new QPixelFormat object.
func NewQPixelFormat5(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation, byteOrder QPixelFormat__ByteOrder, subEnum byte) *QPixelFormat {
	ret := C.QPixelFormat_new5((C.uintptr_t)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.uintptr_t)(alphaUsage), (C.uintptr_t)(alphaPosition), (C.uintptr_t)(premultiplied), (C.uintptr_t)(typeInterpretation), (C.uintptr_t)(byteOrder), (C.uchar)(subEnum))
	return newQPixelFormat(ret)
}

func (this *QPixelFormat) ColorModel() QPixelFormat__ColorModel {
	ret := C.QPixelFormat_ColorModel(this.h)
	return (QPixelFormat__ColorModel)(ret)
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

func (this *QPixelFormat) AlphaUsage() QPixelFormat__AlphaUsage {
	ret := C.QPixelFormat_AlphaUsage(this.h)
	return (QPixelFormat__AlphaUsage)(ret)
}

func (this *QPixelFormat) AlphaPosition() QPixelFormat__AlphaPosition {
	ret := C.QPixelFormat_AlphaPosition(this.h)
	return (QPixelFormat__AlphaPosition)(ret)
}

func (this *QPixelFormat) Premultiplied() QPixelFormat__AlphaPremultiplied {
	ret := C.QPixelFormat_Premultiplied(this.h)
	return (QPixelFormat__AlphaPremultiplied)(ret)
}

func (this *QPixelFormat) TypeInterpretation() QPixelFormat__TypeInterpretation {
	ret := C.QPixelFormat_TypeInterpretation(this.h)
	return (QPixelFormat__TypeInterpretation)(ret)
}

func (this *QPixelFormat) ByteOrder() QPixelFormat__ByteOrder {
	ret := C.QPixelFormat_ByteOrder(this.h)
	return (QPixelFormat__ByteOrder)(ret)
}

func (this *QPixelFormat) YuvLayout() QPixelFormat__YUVLayout {
	ret := C.QPixelFormat_YuvLayout(this.h)
	return (QPixelFormat__YUVLayout)(ret)
}

func (this *QPixelFormat) SubEnum() byte {
	ret := C.QPixelFormat_SubEnum(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) Delete() {
	C.QPixelFormat_Delete(this.h)
}

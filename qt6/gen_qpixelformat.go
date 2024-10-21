package qt6

/*

#include "gen_qpixelformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPixelFormat__ColorModel int

const (
	QPixelFormat__RGB       QPixelFormat__ColorModel = 0
	QPixelFormat__BGR       QPixelFormat__ColorModel = 1
	QPixelFormat__Indexed   QPixelFormat__ColorModel = 2
	QPixelFormat__Grayscale QPixelFormat__ColorModel = 3
	QPixelFormat__CMYK      QPixelFormat__ColorModel = 4
	QPixelFormat__HSL       QPixelFormat__ColorModel = 5
	QPixelFormat__HSV       QPixelFormat__ColorModel = 6
	QPixelFormat__YUV       QPixelFormat__ColorModel = 7
	QPixelFormat__Alpha     QPixelFormat__ColorModel = 8
)

type QPixelFormat__AlphaUsage int

const (
	QPixelFormat__UsesAlpha    QPixelFormat__AlphaUsage = 0
	QPixelFormat__IgnoresAlpha QPixelFormat__AlphaUsage = 1
)

type QPixelFormat__AlphaPosition int

const (
	QPixelFormat__AtBeginning QPixelFormat__AlphaPosition = 0
	QPixelFormat__AtEnd       QPixelFormat__AlphaPosition = 1
)

type QPixelFormat__AlphaPremultiplied int

const (
	QPixelFormat__NotPremultiplied QPixelFormat__AlphaPremultiplied = 0
	QPixelFormat__Premultiplied    QPixelFormat__AlphaPremultiplied = 1
)

type QPixelFormat__TypeInterpretation int

const (
	QPixelFormat__UnsignedInteger QPixelFormat__TypeInterpretation = 0
	QPixelFormat__UnsignedShort   QPixelFormat__TypeInterpretation = 1
	QPixelFormat__UnsignedByte    QPixelFormat__TypeInterpretation = 2
	QPixelFormat__FloatingPoint   QPixelFormat__TypeInterpretation = 3
)

type QPixelFormat__YUVLayout int

const (
	QPixelFormat__YUV444   QPixelFormat__YUVLayout = 0
	QPixelFormat__YUV422   QPixelFormat__YUVLayout = 1
	QPixelFormat__YUV411   QPixelFormat__YUVLayout = 2
	QPixelFormat__YUV420P  QPixelFormat__YUVLayout = 3
	QPixelFormat__YUV420SP QPixelFormat__YUVLayout = 4
	QPixelFormat__YV12     QPixelFormat__YUVLayout = 5
	QPixelFormat__UYVY     QPixelFormat__YUVLayout = 6
	QPixelFormat__YUYV     QPixelFormat__YUVLayout = 7
	QPixelFormat__NV12     QPixelFormat__YUVLayout = 8
	QPixelFormat__NV21     QPixelFormat__YUVLayout = 9
	QPixelFormat__IMC1     QPixelFormat__YUVLayout = 10
	QPixelFormat__IMC2     QPixelFormat__YUVLayout = 11
	QPixelFormat__IMC3     QPixelFormat__YUVLayout = 12
	QPixelFormat__IMC4     QPixelFormat__YUVLayout = 13
	QPixelFormat__Y8       QPixelFormat__YUVLayout = 14
	QPixelFormat__Y16      QPixelFormat__YUVLayout = 15
)

type QPixelFormat__ByteOrder int

const (
	QPixelFormat__LittleEndian        QPixelFormat__ByteOrder = 0
	QPixelFormat__BigEndian           QPixelFormat__ByteOrder = 1
	QPixelFormat__CurrentSystemEndian QPixelFormat__ByteOrder = 2
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

func (this *QPixelFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPixelFormat(h *C.QPixelFormat) *QPixelFormat {
	if h == nil {
		return nil
	}
	return &QPixelFormat{h: h}
}

func UnsafeNewQPixelFormat(h unsafe.Pointer) *QPixelFormat {
	return newQPixelFormat((*C.QPixelFormat)(h))
}

// NewQPixelFormat constructs a new QPixelFormat object.
func NewQPixelFormat() *QPixelFormat {
	ret := C.QPixelFormat_new()
	return newQPixelFormat(ret)
}

// NewQPixelFormat2 constructs a new QPixelFormat object.
func NewQPixelFormat2(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation) *QPixelFormat {
	ret := C.QPixelFormat_new2((C.int)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.int)(alphaUsage), (C.int)(alphaPosition), (C.int)(premultiplied), (C.int)(typeInterpretation))
	return newQPixelFormat(ret)
}

// NewQPixelFormat3 constructs a new QPixelFormat object.
func NewQPixelFormat3(param1 *QPixelFormat) *QPixelFormat {
	ret := C.QPixelFormat_new3(param1.cPointer())
	return newQPixelFormat(ret)
}

// NewQPixelFormat4 constructs a new QPixelFormat object.
func NewQPixelFormat4(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation, byteOrder QPixelFormat__ByteOrder) *QPixelFormat {
	ret := C.QPixelFormat_new4((C.int)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.int)(alphaUsage), (C.int)(alphaPosition), (C.int)(premultiplied), (C.int)(typeInterpretation), (C.int)(byteOrder))
	return newQPixelFormat(ret)
}

// NewQPixelFormat5 constructs a new QPixelFormat object.
func NewQPixelFormat5(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation, byteOrder QPixelFormat__ByteOrder, subEnum byte) *QPixelFormat {
	ret := C.QPixelFormat_new5((C.int)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.int)(alphaUsage), (C.int)(alphaPosition), (C.int)(premultiplied), (C.int)(typeInterpretation), (C.int)(byteOrder), (C.uchar)(subEnum))
	return newQPixelFormat(ret)
}

func (this *QPixelFormat) ColorModel() QPixelFormat__ColorModel {
	return (QPixelFormat__ColorModel)(C.QPixelFormat_ColorModel(this.h))
}

func (this *QPixelFormat) ChannelCount() byte {
	return (byte)(C.QPixelFormat_ChannelCount(this.h))
}

func (this *QPixelFormat) RedSize() byte {
	return (byte)(C.QPixelFormat_RedSize(this.h))
}

func (this *QPixelFormat) GreenSize() byte {
	return (byte)(C.QPixelFormat_GreenSize(this.h))
}

func (this *QPixelFormat) BlueSize() byte {
	return (byte)(C.QPixelFormat_BlueSize(this.h))
}

func (this *QPixelFormat) CyanSize() byte {
	return (byte)(C.QPixelFormat_CyanSize(this.h))
}

func (this *QPixelFormat) MagentaSize() byte {
	return (byte)(C.QPixelFormat_MagentaSize(this.h))
}

func (this *QPixelFormat) YellowSize() byte {
	return (byte)(C.QPixelFormat_YellowSize(this.h))
}

func (this *QPixelFormat) BlackSize() byte {
	return (byte)(C.QPixelFormat_BlackSize(this.h))
}

func (this *QPixelFormat) HueSize() byte {
	return (byte)(C.QPixelFormat_HueSize(this.h))
}

func (this *QPixelFormat) SaturationSize() byte {
	return (byte)(C.QPixelFormat_SaturationSize(this.h))
}

func (this *QPixelFormat) LightnessSize() byte {
	return (byte)(C.QPixelFormat_LightnessSize(this.h))
}

func (this *QPixelFormat) BrightnessSize() byte {
	return (byte)(C.QPixelFormat_BrightnessSize(this.h))
}

func (this *QPixelFormat) AlphaSize() byte {
	return (byte)(C.QPixelFormat_AlphaSize(this.h))
}

func (this *QPixelFormat) BitsPerPixel() byte {
	return (byte)(C.QPixelFormat_BitsPerPixel(this.h))
}

func (this *QPixelFormat) AlphaUsage() QPixelFormat__AlphaUsage {
	return (QPixelFormat__AlphaUsage)(C.QPixelFormat_AlphaUsage(this.h))
}

func (this *QPixelFormat) AlphaPosition() QPixelFormat__AlphaPosition {
	return (QPixelFormat__AlphaPosition)(C.QPixelFormat_AlphaPosition(this.h))
}

func (this *QPixelFormat) Premultiplied() QPixelFormat__AlphaPremultiplied {
	return (QPixelFormat__AlphaPremultiplied)(C.QPixelFormat_Premultiplied(this.h))
}

func (this *QPixelFormat) TypeInterpretation() QPixelFormat__TypeInterpretation {
	return (QPixelFormat__TypeInterpretation)(C.QPixelFormat_TypeInterpretation(this.h))
}

func (this *QPixelFormat) ByteOrder() QPixelFormat__ByteOrder {
	return (QPixelFormat__ByteOrder)(C.QPixelFormat_ByteOrder(this.h))
}

func (this *QPixelFormat) YuvLayout() QPixelFormat__YUVLayout {
	return (QPixelFormat__YUVLayout)(C.QPixelFormat_YuvLayout(this.h))
}

func (this *QPixelFormat) SubEnum() byte {
	return (byte)(C.QPixelFormat_SubEnum(this.h))
}

// Delete this object from C++ memory.
func (this *QPixelFormat) Delete() {
	C.QPixelFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPixelFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QPixelFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt

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
	h  *C.QPixelFormat
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPixelFormat) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// newQPixelFormat constructs the type using only CGO pointers.
func newQPixelFormat(h *C.QPixelFormat) *QPixelFormat {
	if h == nil {
		return nil
	}

	return &QPixelFormat{h: h}
}

// UnsafeNewQPixelFormat constructs the type using only unsafe pointers.
func UnsafeNewQPixelFormat(h unsafe.Pointer) *QPixelFormat {
	return newQPixelFormat((*C.QPixelFormat)(h))
}

// NewQPixelFormat constructs a new QPixelFormat object.
func NewQPixelFormat() *QPixelFormat {

	return newQPixelFormat(C.QPixelFormat_new())
}

// NewQPixelFormat2 constructs a new QPixelFormat object.
func NewQPixelFormat2(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation) *QPixelFormat {

	return newQPixelFormat(C.QPixelFormat_new2((C.int)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.int)(alphaUsage), (C.int)(alphaPosition), (C.int)(premultiplied), (C.int)(typeInterpretation)))
}

// NewQPixelFormat3 constructs a new QPixelFormat object.
func NewQPixelFormat3(param1 *QPixelFormat) *QPixelFormat {
	defer runtime.KeepAlive(param1)

	return newQPixelFormat(C.QPixelFormat_new3(param1.cPointer()))
}

// NewQPixelFormat4 constructs a new QPixelFormat object.
func NewQPixelFormat4(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation, byteOrder QPixelFormat__ByteOrder) *QPixelFormat {

	return newQPixelFormat(C.QPixelFormat_new4((C.int)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.int)(alphaUsage), (C.int)(alphaPosition), (C.int)(premultiplied), (C.int)(typeInterpretation), (C.int)(byteOrder)))
}

// NewQPixelFormat5 constructs a new QPixelFormat object.
func NewQPixelFormat5(colorModel QPixelFormat__ColorModel, firstSize byte, secondSize byte, thirdSize byte, fourthSize byte, fifthSize byte, alphaSize byte, alphaUsage QPixelFormat__AlphaUsage, alphaPosition QPixelFormat__AlphaPosition, premultiplied QPixelFormat__AlphaPremultiplied, typeInterpretation QPixelFormat__TypeInterpretation, byteOrder QPixelFormat__ByteOrder, subEnum byte) *QPixelFormat {

	return newQPixelFormat(C.QPixelFormat_new5((C.int)(colorModel), (C.uchar)(firstSize), (C.uchar)(secondSize), (C.uchar)(thirdSize), (C.uchar)(fourthSize), (C.uchar)(fifthSize), (C.uchar)(alphaSize), (C.int)(alphaUsage), (C.int)(alphaPosition), (C.int)(premultiplied), (C.int)(typeInterpretation), (C.int)(byteOrder), (C.uchar)(subEnum)))
}

func (this *QPixelFormat) ColorModel() QPixelFormat__ColorModel {
	defer runtime.KeepAlive(this)
	return (QPixelFormat__ColorModel)(C.QPixelFormat_colorModel(this.h))
}

func (this *QPixelFormat) ChannelCount() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_channelCount(this.h))
}

func (this *QPixelFormat) RedSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_redSize(this.h))
}

func (this *QPixelFormat) GreenSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_greenSize(this.h))
}

func (this *QPixelFormat) BlueSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_blueSize(this.h))
}

func (this *QPixelFormat) CyanSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_cyanSize(this.h))
}

func (this *QPixelFormat) MagentaSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_magentaSize(this.h))
}

func (this *QPixelFormat) YellowSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_yellowSize(this.h))
}

func (this *QPixelFormat) BlackSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_blackSize(this.h))
}

func (this *QPixelFormat) HueSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_hueSize(this.h))
}

func (this *QPixelFormat) SaturationSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_saturationSize(this.h))
}

func (this *QPixelFormat) LightnessSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_lightnessSize(this.h))
}

func (this *QPixelFormat) BrightnessSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_brightnessSize(this.h))
}

func (this *QPixelFormat) AlphaSize() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_alphaSize(this.h))
}

func (this *QPixelFormat) BitsPerPixel() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_bitsPerPixel(this.h))
}

func (this *QPixelFormat) AlphaUsage() QPixelFormat__AlphaUsage {
	defer runtime.KeepAlive(this)
	return (QPixelFormat__AlphaUsage)(C.QPixelFormat_alphaUsage(this.h))
}

func (this *QPixelFormat) AlphaPosition() QPixelFormat__AlphaPosition {
	defer runtime.KeepAlive(this)
	return (QPixelFormat__AlphaPosition)(C.QPixelFormat_alphaPosition(this.h))
}

func (this *QPixelFormat) Premultiplied() QPixelFormat__AlphaPremultiplied {
	defer runtime.KeepAlive(this)
	return (QPixelFormat__AlphaPremultiplied)(C.QPixelFormat_premultiplied(this.h))
}

func (this *QPixelFormat) TypeInterpretation() QPixelFormat__TypeInterpretation {
	defer runtime.KeepAlive(this)
	return (QPixelFormat__TypeInterpretation)(C.QPixelFormat_typeInterpretation(this.h))
}

func (this *QPixelFormat) ByteOrder() QPixelFormat__ByteOrder {
	defer runtime.KeepAlive(this)
	return (QPixelFormat__ByteOrder)(C.QPixelFormat_byteOrder(this.h))
}

func (this *QPixelFormat) YuvLayout() QPixelFormat__YUVLayout {
	defer runtime.KeepAlive(this)
	return (QPixelFormat__YUVLayout)(C.QPixelFormat_yuvLayout(this.h))
}

func (this *QPixelFormat) SubEnum() byte {
	defer runtime.KeepAlive(this)
	return (byte)(C.QPixelFormat_subEnum(this.h))
}

// Delete this object from C++ memory.
func (this *QPixelFormat) Delete() {
	C.QPixelFormat_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPixelFormat) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPixelFormat_delete((*C.QPixelFormat)(gc[0]))
	})
	this.miqtSetGC(gc)
}

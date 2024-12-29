package multimedia

/*

#include "gen_qvideoframeformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QVideoFrameFormat__PixelFormat int

const (
	QVideoFrameFormat__Format_Invalid                QVideoFrameFormat__PixelFormat = 0
	QVideoFrameFormat__Format_ARGB8888               QVideoFrameFormat__PixelFormat = 1
	QVideoFrameFormat__Format_ARGB8888_Premultiplied QVideoFrameFormat__PixelFormat = 2
	QVideoFrameFormat__Format_XRGB8888               QVideoFrameFormat__PixelFormat = 3
	QVideoFrameFormat__Format_BGRA8888               QVideoFrameFormat__PixelFormat = 4
	QVideoFrameFormat__Format_BGRA8888_Premultiplied QVideoFrameFormat__PixelFormat = 5
	QVideoFrameFormat__Format_BGRX8888               QVideoFrameFormat__PixelFormat = 6
	QVideoFrameFormat__Format_ABGR8888               QVideoFrameFormat__PixelFormat = 7
	QVideoFrameFormat__Format_XBGR8888               QVideoFrameFormat__PixelFormat = 8
	QVideoFrameFormat__Format_RGBA8888               QVideoFrameFormat__PixelFormat = 9
	QVideoFrameFormat__Format_RGBX8888               QVideoFrameFormat__PixelFormat = 10
	QVideoFrameFormat__Format_AYUV                   QVideoFrameFormat__PixelFormat = 11
	QVideoFrameFormat__Format_AYUV_Premultiplied     QVideoFrameFormat__PixelFormat = 12
	QVideoFrameFormat__Format_YUV420P                QVideoFrameFormat__PixelFormat = 13
	QVideoFrameFormat__Format_YUV422P                QVideoFrameFormat__PixelFormat = 14
	QVideoFrameFormat__Format_YV12                   QVideoFrameFormat__PixelFormat = 15
	QVideoFrameFormat__Format_UYVY                   QVideoFrameFormat__PixelFormat = 16
	QVideoFrameFormat__Format_YUYV                   QVideoFrameFormat__PixelFormat = 17
	QVideoFrameFormat__Format_NV12                   QVideoFrameFormat__PixelFormat = 18
	QVideoFrameFormat__Format_NV21                   QVideoFrameFormat__PixelFormat = 19
	QVideoFrameFormat__Format_IMC1                   QVideoFrameFormat__PixelFormat = 20
	QVideoFrameFormat__Format_IMC2                   QVideoFrameFormat__PixelFormat = 21
	QVideoFrameFormat__Format_IMC3                   QVideoFrameFormat__PixelFormat = 22
	QVideoFrameFormat__Format_IMC4                   QVideoFrameFormat__PixelFormat = 23
	QVideoFrameFormat__Format_Y8                     QVideoFrameFormat__PixelFormat = 24
	QVideoFrameFormat__Format_Y16                    QVideoFrameFormat__PixelFormat = 25
	QVideoFrameFormat__Format_P010                   QVideoFrameFormat__PixelFormat = 26
	QVideoFrameFormat__Format_P016                   QVideoFrameFormat__PixelFormat = 27
	QVideoFrameFormat__Format_SamplerExternalOES     QVideoFrameFormat__PixelFormat = 28
	QVideoFrameFormat__Format_Jpeg                   QVideoFrameFormat__PixelFormat = 29
	QVideoFrameFormat__Format_SamplerRect            QVideoFrameFormat__PixelFormat = 30
	QVideoFrameFormat__Format_YUV420P10              QVideoFrameFormat__PixelFormat = 31
)

type QVideoFrameFormat__Direction int

const (
	QVideoFrameFormat__TopToBottom QVideoFrameFormat__Direction = 0
	QVideoFrameFormat__BottomToTop QVideoFrameFormat__Direction = 1
)

type QVideoFrameFormat__YCbCrColorSpace int

const (
	QVideoFrameFormat__YCbCr_Undefined QVideoFrameFormat__YCbCrColorSpace = 0
	QVideoFrameFormat__YCbCr_BT601     QVideoFrameFormat__YCbCrColorSpace = 1
	QVideoFrameFormat__YCbCr_BT709     QVideoFrameFormat__YCbCrColorSpace = 2
	QVideoFrameFormat__YCbCr_xvYCC601  QVideoFrameFormat__YCbCrColorSpace = 3
	QVideoFrameFormat__YCbCr_xvYCC709  QVideoFrameFormat__YCbCrColorSpace = 4
	QVideoFrameFormat__YCbCr_JPEG      QVideoFrameFormat__YCbCrColorSpace = 5
	QVideoFrameFormat__YCbCr_BT2020    QVideoFrameFormat__YCbCrColorSpace = 6
)

type QVideoFrameFormat__ColorSpace int

const (
	QVideoFrameFormat__ColorSpace_Undefined QVideoFrameFormat__ColorSpace = 0
	QVideoFrameFormat__ColorSpace_BT601     QVideoFrameFormat__ColorSpace = 1
	QVideoFrameFormat__ColorSpace_BT709     QVideoFrameFormat__ColorSpace = 2
	QVideoFrameFormat__ColorSpace_AdobeRgb  QVideoFrameFormat__ColorSpace = 5
	QVideoFrameFormat__ColorSpace_BT2020    QVideoFrameFormat__ColorSpace = 6
)

type QVideoFrameFormat__ColorTransfer int

const (
	QVideoFrameFormat__ColorTransfer_Unknown QVideoFrameFormat__ColorTransfer = 0
	QVideoFrameFormat__ColorTransfer_BT709   QVideoFrameFormat__ColorTransfer = 1
	QVideoFrameFormat__ColorTransfer_BT601   QVideoFrameFormat__ColorTransfer = 2
	QVideoFrameFormat__ColorTransfer_Linear  QVideoFrameFormat__ColorTransfer = 3
	QVideoFrameFormat__ColorTransfer_Gamma22 QVideoFrameFormat__ColorTransfer = 4
	QVideoFrameFormat__ColorTransfer_Gamma28 QVideoFrameFormat__ColorTransfer = 5
	QVideoFrameFormat__ColorTransfer_ST2084  QVideoFrameFormat__ColorTransfer = 6
	QVideoFrameFormat__ColorTransfer_STD_B67 QVideoFrameFormat__ColorTransfer = 7
)

type QVideoFrameFormat__ColorRange int

const (
	QVideoFrameFormat__ColorRange_Unknown QVideoFrameFormat__ColorRange = 0
	QVideoFrameFormat__ColorRange_Video   QVideoFrameFormat__ColorRange = 1
	QVideoFrameFormat__ColorRange_Full    QVideoFrameFormat__ColorRange = 2
)

type QVideoFrameFormat struct {
	h          *C.QVideoFrameFormat
	isSubclass bool
}

func (this *QVideoFrameFormat) cPointer() *C.QVideoFrameFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoFrameFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoFrameFormat constructs the type using only CGO pointers.
func newQVideoFrameFormat(h *C.QVideoFrameFormat) *QVideoFrameFormat {
	if h == nil {
		return nil
	}

	return &QVideoFrameFormat{h: h}
}

// UnsafeNewQVideoFrameFormat constructs the type using only unsafe pointers.
func UnsafeNewQVideoFrameFormat(h unsafe.Pointer) *QVideoFrameFormat {
	return newQVideoFrameFormat((*C.QVideoFrameFormat)(h))
}

// NewQVideoFrameFormat constructs a new QVideoFrameFormat object.
func NewQVideoFrameFormat() *QVideoFrameFormat {

	ret := newQVideoFrameFormat(C.QVideoFrameFormat_new())
	ret.isSubclass = true
	return ret
}

// NewQVideoFrameFormat2 constructs a new QVideoFrameFormat object.
func NewQVideoFrameFormat2(size *qt6.QSize, pixelFormat QVideoFrameFormat__PixelFormat) *QVideoFrameFormat {

	ret := newQVideoFrameFormat(C.QVideoFrameFormat_new2((*C.QSize)(size.UnsafePointer()), (C.int)(pixelFormat)))
	ret.isSubclass = true
	return ret
}

// NewQVideoFrameFormat3 constructs a new QVideoFrameFormat object.
func NewQVideoFrameFormat3(format *QVideoFrameFormat) *QVideoFrameFormat {

	ret := newQVideoFrameFormat(C.QVideoFrameFormat_new3(format.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QVideoFrameFormat) Swap(other *QVideoFrameFormat) {
	C.QVideoFrameFormat_Swap(this.h, other.cPointer())
}

func (this *QVideoFrameFormat) Detach() {
	C.QVideoFrameFormat_Detach(this.h)
}

func (this *QVideoFrameFormat) OperatorAssign(format *QVideoFrameFormat) {
	C.QVideoFrameFormat_OperatorAssign(this.h, format.cPointer())
}

func (this *QVideoFrameFormat) OperatorEqual(format *QVideoFrameFormat) bool {
	return (bool)(C.QVideoFrameFormat_OperatorEqual(this.h, format.cPointer()))
}

func (this *QVideoFrameFormat) OperatorNotEqual(format *QVideoFrameFormat) bool {
	return (bool)(C.QVideoFrameFormat_OperatorNotEqual(this.h, format.cPointer()))
}

func (this *QVideoFrameFormat) IsValid() bool {
	return (bool)(C.QVideoFrameFormat_IsValid(this.h))
}

func (this *QVideoFrameFormat) PixelFormat() QVideoFrameFormat__PixelFormat {
	return (QVideoFrameFormat__PixelFormat)(C.QVideoFrameFormat_PixelFormat(this.h))
}

func (this *QVideoFrameFormat) FrameSize() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QVideoFrameFormat_FrameSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrameFormat) SetFrameSize(size *qt6.QSize) {
	C.QVideoFrameFormat_SetFrameSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QVideoFrameFormat) SetFrameSize2(width int, height int) {
	C.QVideoFrameFormat_SetFrameSize2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QVideoFrameFormat) FrameWidth() int {
	return (int)(C.QVideoFrameFormat_FrameWidth(this.h))
}

func (this *QVideoFrameFormat) FrameHeight() int {
	return (int)(C.QVideoFrameFormat_FrameHeight(this.h))
}

func (this *QVideoFrameFormat) PlaneCount() int {
	return (int)(C.QVideoFrameFormat_PlaneCount(this.h))
}

func (this *QVideoFrameFormat) Viewport() *qt6.QRect {
	_goptr := qt6.UnsafeNewQRect(unsafe.Pointer(C.QVideoFrameFormat_Viewport(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrameFormat) SetViewport(viewport *qt6.QRect) {
	C.QVideoFrameFormat_SetViewport(this.h, (*C.QRect)(viewport.UnsafePointer()))
}

func (this *QVideoFrameFormat) ScanLineDirection() QVideoFrameFormat__Direction {
	return (QVideoFrameFormat__Direction)(C.QVideoFrameFormat_ScanLineDirection(this.h))
}

func (this *QVideoFrameFormat) SetScanLineDirection(direction QVideoFrameFormat__Direction) {
	C.QVideoFrameFormat_SetScanLineDirection(this.h, (C.int)(direction))
}

func (this *QVideoFrameFormat) FrameRate() float64 {
	return (float64)(C.QVideoFrameFormat_FrameRate(this.h))
}

func (this *QVideoFrameFormat) SetFrameRate(rate float64) {
	C.QVideoFrameFormat_SetFrameRate(this.h, (C.double)(rate))
}

func (this *QVideoFrameFormat) YCbCrColorSpace() QVideoFrameFormat__YCbCrColorSpace {
	return (QVideoFrameFormat__YCbCrColorSpace)(C.QVideoFrameFormat_YCbCrColorSpace(this.h))
}

func (this *QVideoFrameFormat) SetYCbCrColorSpace(colorSpace QVideoFrameFormat__YCbCrColorSpace) {
	C.QVideoFrameFormat_SetYCbCrColorSpace(this.h, (C.int)(colorSpace))
}

func (this *QVideoFrameFormat) ColorSpace() QVideoFrameFormat__ColorSpace {
	return (QVideoFrameFormat__ColorSpace)(C.QVideoFrameFormat_ColorSpace(this.h))
}

func (this *QVideoFrameFormat) SetColorSpace(colorSpace QVideoFrameFormat__ColorSpace) {
	C.QVideoFrameFormat_SetColorSpace(this.h, (C.int)(colorSpace))
}

func (this *QVideoFrameFormat) ColorTransfer() QVideoFrameFormat__ColorTransfer {
	return (QVideoFrameFormat__ColorTransfer)(C.QVideoFrameFormat_ColorTransfer(this.h))
}

func (this *QVideoFrameFormat) SetColorTransfer(colorTransfer QVideoFrameFormat__ColorTransfer) {
	C.QVideoFrameFormat_SetColorTransfer(this.h, (C.int)(colorTransfer))
}

func (this *QVideoFrameFormat) ColorRange() QVideoFrameFormat__ColorRange {
	return (QVideoFrameFormat__ColorRange)(C.QVideoFrameFormat_ColorRange(this.h))
}

func (this *QVideoFrameFormat) SetColorRange(rangeVal QVideoFrameFormat__ColorRange) {
	C.QVideoFrameFormat_SetColorRange(this.h, (C.int)(rangeVal))
}

func (this *QVideoFrameFormat) IsMirrored() bool {
	return (bool)(C.QVideoFrameFormat_IsMirrored(this.h))
}

func (this *QVideoFrameFormat) SetMirrored(mirrored bool) {
	C.QVideoFrameFormat_SetMirrored(this.h, (C.bool)(mirrored))
}

func (this *QVideoFrameFormat) VertexShaderFileName() string {
	var _ms C.struct_miqt_string = C.QVideoFrameFormat_VertexShaderFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoFrameFormat) FragmentShaderFileName() string {
	var _ms C.struct_miqt_string = C.QVideoFrameFormat_FragmentShaderFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoFrameFormat) MaxLuminance() float32 {
	return (float32)(C.QVideoFrameFormat_MaxLuminance(this.h))
}

func (this *QVideoFrameFormat) SetMaxLuminance(lum float32) {
	C.QVideoFrameFormat_SetMaxLuminance(this.h, (C.float)(lum))
}

func QVideoFrameFormat_PixelFormatFromImageFormat(format qt6.QImage__Format) QVideoFrameFormat__PixelFormat {
	return (QVideoFrameFormat__PixelFormat)(C.QVideoFrameFormat_PixelFormatFromImageFormat((C.int)(format)))
}

func QVideoFrameFormat_ImageFormatFromPixelFormat(format QVideoFrameFormat__PixelFormat) qt6.QImage__Format {
	return (qt6.QImage__Format)(C.QVideoFrameFormat_ImageFormatFromPixelFormat((C.int)(format)))
}

func QVideoFrameFormat_PixelFormatToString(pixelFormat QVideoFrameFormat__PixelFormat) string {
	var _ms C.struct_miqt_string = C.QVideoFrameFormat_PixelFormatToString((C.int)(pixelFormat))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoFrameFormat) Delete() {
	C.QVideoFrameFormat_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoFrameFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoFrameFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

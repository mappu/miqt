package multimedia

/*

#include "gen_qvideosurfaceformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QVideoSurfaceFormat__Direction int

const (
	QVideoSurfaceFormat__TopToBottom QVideoSurfaceFormat__Direction = 0
	QVideoSurfaceFormat__BottomToTop QVideoSurfaceFormat__Direction = 1
)

type QVideoSurfaceFormat__YCbCrColorSpace int

const (
	QVideoSurfaceFormat__YCbCr_Undefined    QVideoSurfaceFormat__YCbCrColorSpace = 0
	QVideoSurfaceFormat__YCbCr_BT601        QVideoSurfaceFormat__YCbCrColorSpace = 1
	QVideoSurfaceFormat__YCbCr_BT709        QVideoSurfaceFormat__YCbCrColorSpace = 2
	QVideoSurfaceFormat__YCbCr_xvYCC601     QVideoSurfaceFormat__YCbCrColorSpace = 3
	QVideoSurfaceFormat__YCbCr_xvYCC709     QVideoSurfaceFormat__YCbCrColorSpace = 4
	QVideoSurfaceFormat__YCbCr_JPEG         QVideoSurfaceFormat__YCbCrColorSpace = 5
	QVideoSurfaceFormat__YCbCr_CustomMatrix QVideoSurfaceFormat__YCbCrColorSpace = 6
)

type QVideoSurfaceFormat struct {
	h          *C.QVideoSurfaceFormat
	isSubclass bool
}

func (this *QVideoSurfaceFormat) cPointer() *C.QVideoSurfaceFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoSurfaceFormat) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoSurfaceFormat constructs the type using only CGO pointers.
func newQVideoSurfaceFormat(h *C.QVideoSurfaceFormat) *QVideoSurfaceFormat {
	if h == nil {
		return nil
	}

	return &QVideoSurfaceFormat{h: h}
}

// UnsafeNewQVideoSurfaceFormat constructs the type using only unsafe pointers.
func UnsafeNewQVideoSurfaceFormat(h unsafe.Pointer) *QVideoSurfaceFormat {
	return newQVideoSurfaceFormat((*C.QVideoSurfaceFormat)(h))
}

// NewQVideoSurfaceFormat constructs a new QVideoSurfaceFormat object.
func NewQVideoSurfaceFormat() *QVideoSurfaceFormat {

	ret := newQVideoSurfaceFormat(C.QVideoSurfaceFormat_new())
	ret.isSubclass = true
	return ret
}

// NewQVideoSurfaceFormat2 constructs a new QVideoSurfaceFormat object.
func NewQVideoSurfaceFormat2(size *qt.QSize, pixelFormat QVideoFrame__PixelFormat) *QVideoSurfaceFormat {

	ret := newQVideoSurfaceFormat(C.QVideoSurfaceFormat_new2((*C.QSize)(size.UnsafePointer()), (C.int)(pixelFormat)))
	ret.isSubclass = true
	return ret
}

// NewQVideoSurfaceFormat3 constructs a new QVideoSurfaceFormat object.
func NewQVideoSurfaceFormat3(format *QVideoSurfaceFormat) *QVideoSurfaceFormat {

	ret := newQVideoSurfaceFormat(C.QVideoSurfaceFormat_new3(format.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQVideoSurfaceFormat4 constructs a new QVideoSurfaceFormat object.
func NewQVideoSurfaceFormat4(size *qt.QSize, pixelFormat QVideoFrame__PixelFormat, handleType QAbstractVideoBuffer__HandleType) *QVideoSurfaceFormat {

	ret := newQVideoSurfaceFormat(C.QVideoSurfaceFormat_new4((*C.QSize)(size.UnsafePointer()), (C.int)(pixelFormat), (C.int)(handleType)))
	ret.isSubclass = true
	return ret
}

func (this *QVideoSurfaceFormat) OperatorAssign(format *QVideoSurfaceFormat) {
	C.QVideoSurfaceFormat_OperatorAssign(this.h, format.cPointer())
}

func (this *QVideoSurfaceFormat) OperatorEqual(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QVideoSurfaceFormat_OperatorEqual(this.h, format.cPointer()))
}

func (this *QVideoSurfaceFormat) OperatorNotEqual(format *QVideoSurfaceFormat) bool {
	return (bool)(C.QVideoSurfaceFormat_OperatorNotEqual(this.h, format.cPointer()))
}

func (this *QVideoSurfaceFormat) IsValid() bool {
	return (bool)(C.QVideoSurfaceFormat_IsValid(this.h))
}

func (this *QVideoSurfaceFormat) PixelFormat() QVideoFrame__PixelFormat {
	return (QVideoFrame__PixelFormat)(C.QVideoSurfaceFormat_PixelFormat(this.h))
}

func (this *QVideoSurfaceFormat) HandleType() QAbstractVideoBuffer__HandleType {
	return (QAbstractVideoBuffer__HandleType)(C.QVideoSurfaceFormat_HandleType(this.h))
}

func (this *QVideoSurfaceFormat) FrameSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QVideoSurfaceFormat_FrameSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoSurfaceFormat) SetFrameSize(size *qt.QSize) {
	C.QVideoSurfaceFormat_SetFrameSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QVideoSurfaceFormat) SetFrameSize2(width int, height int) {
	C.QVideoSurfaceFormat_SetFrameSize2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QVideoSurfaceFormat) FrameWidth() int {
	return (int)(C.QVideoSurfaceFormat_FrameWidth(this.h))
}

func (this *QVideoSurfaceFormat) FrameHeight() int {
	return (int)(C.QVideoSurfaceFormat_FrameHeight(this.h))
}

func (this *QVideoSurfaceFormat) Viewport() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QVideoSurfaceFormat_Viewport(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoSurfaceFormat) SetViewport(viewport *qt.QRect) {
	C.QVideoSurfaceFormat_SetViewport(this.h, (*C.QRect)(viewport.UnsafePointer()))
}

func (this *QVideoSurfaceFormat) ScanLineDirection() QVideoSurfaceFormat__Direction {
	return (QVideoSurfaceFormat__Direction)(C.QVideoSurfaceFormat_ScanLineDirection(this.h))
}

func (this *QVideoSurfaceFormat) SetScanLineDirection(direction QVideoSurfaceFormat__Direction) {
	C.QVideoSurfaceFormat_SetScanLineDirection(this.h, (C.int)(direction))
}

func (this *QVideoSurfaceFormat) FrameRate() float64 {
	return (float64)(C.QVideoSurfaceFormat_FrameRate(this.h))
}

func (this *QVideoSurfaceFormat) SetFrameRate(rate float64) {
	C.QVideoSurfaceFormat_SetFrameRate(this.h, (C.double)(rate))
}

func (this *QVideoSurfaceFormat) PixelAspectRatio() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QVideoSurfaceFormat_PixelAspectRatio(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoSurfaceFormat) SetPixelAspectRatio(ratio *qt.QSize) {
	C.QVideoSurfaceFormat_SetPixelAspectRatio(this.h, (*C.QSize)(ratio.UnsafePointer()))
}

func (this *QVideoSurfaceFormat) SetPixelAspectRatio2(width int, height int) {
	C.QVideoSurfaceFormat_SetPixelAspectRatio2(this.h, (C.int)(width), (C.int)(height))
}

func (this *QVideoSurfaceFormat) YCbCrColorSpace() QVideoSurfaceFormat__YCbCrColorSpace {
	return (QVideoSurfaceFormat__YCbCrColorSpace)(C.QVideoSurfaceFormat_YCbCrColorSpace(this.h))
}

func (this *QVideoSurfaceFormat) SetYCbCrColorSpace(colorSpace QVideoSurfaceFormat__YCbCrColorSpace) {
	C.QVideoSurfaceFormat_SetYCbCrColorSpace(this.h, (C.int)(colorSpace))
}

func (this *QVideoSurfaceFormat) IsMirrored() bool {
	return (bool)(C.QVideoSurfaceFormat_IsMirrored(this.h))
}

func (this *QVideoSurfaceFormat) SetMirrored(mirrored bool) {
	C.QVideoSurfaceFormat_SetMirrored(this.h, (C.bool)(mirrored))
}

func (this *QVideoSurfaceFormat) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QVideoSurfaceFormat_SizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoSurfaceFormat) PropertyNames() [][]byte {
	var _ma C.struct_miqt_array = C.QVideoSurfaceFormat_PropertyNames(this.h)
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QVideoSurfaceFormat) Property(name string) *qt.QVariant {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QVideoSurfaceFormat_Property(this.h, name_Cstring)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoSurfaceFormat) SetProperty(name string, value *qt.QVariant) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QVideoSurfaceFormat_SetProperty(this.h, name_Cstring, (*C.QVariant)(value.UnsafePointer()))
}

// Delete this object from C++ memory.
func (this *QVideoSurfaceFormat) Delete() {
	C.QVideoSurfaceFormat_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoSurfaceFormat) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoSurfaceFormat) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package multimedia

/*

#include "gen_qvideoframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QVideoFrame__HandleType int

const (
	QVideoFrame__NoHandle         QVideoFrame__HandleType = 0
	QVideoFrame__RhiTextureHandle QVideoFrame__HandleType = 1
)

type QVideoFrame__MapMode int

const (
	QVideoFrame__NotMapped QVideoFrame__MapMode = 0
	QVideoFrame__ReadOnly  QVideoFrame__MapMode = 1
	QVideoFrame__WriteOnly QVideoFrame__MapMode = 2
	QVideoFrame__ReadWrite QVideoFrame__MapMode = 3
)

type QVideoFrame__RotationAngle int

const (
	QVideoFrame__Rotation0   QVideoFrame__RotationAngle = 0
	QVideoFrame__Rotation90  QVideoFrame__RotationAngle = 90
	QVideoFrame__Rotation180 QVideoFrame__RotationAngle = 180
	QVideoFrame__Rotation270 QVideoFrame__RotationAngle = 270
)

type QVideoFrame__PaintOptions__PaintFlag int

const (
	QVideoFrame__PaintOptions__DontDrawSubtitles QVideoFrame__PaintOptions__PaintFlag = 1
)

type QVideoFrame struct {
	h *C.QVideoFrame
}

func (this *QVideoFrame) cPointer() *C.QVideoFrame {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoFrame) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoFrame constructs the type using only CGO pointers.
func newQVideoFrame(h *C.QVideoFrame) *QVideoFrame {
	if h == nil {
		return nil
	}

	return &QVideoFrame{h: h}
}

// UnsafeNewQVideoFrame constructs the type using only unsafe pointers.
func UnsafeNewQVideoFrame(h unsafe.Pointer) *QVideoFrame {
	return newQVideoFrame((*C.QVideoFrame)(h))
}

// NewQVideoFrame constructs a new QVideoFrame object.
func NewQVideoFrame() *QVideoFrame {

	return newQVideoFrame(C.QVideoFrame_new())
}

// NewQVideoFrame2 constructs a new QVideoFrame object.
func NewQVideoFrame2(format *QVideoFrameFormat) *QVideoFrame {

	return newQVideoFrame(C.QVideoFrame_new2(format.cPointer()))
}

// NewQVideoFrame3 constructs a new QVideoFrame object.
func NewQVideoFrame3(other *QVideoFrame) *QVideoFrame {

	return newQVideoFrame(C.QVideoFrame_new3(other.cPointer()))
}

func (this *QVideoFrame) Swap(other *QVideoFrame) {
	C.QVideoFrame_swap(this.h, other.cPointer())
}

func (this *QVideoFrame) OperatorAssign(other *QVideoFrame) {
	C.QVideoFrame_operatorAssign(this.h, other.cPointer())
}

func (this *QVideoFrame) OperatorEqual(other *QVideoFrame) bool {
	return (bool)(C.QVideoFrame_operatorEqual(this.h, other.cPointer()))
}

func (this *QVideoFrame) OperatorNotEqual(other *QVideoFrame) bool {
	return (bool)(C.QVideoFrame_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QVideoFrame) IsValid() bool {
	return (bool)(C.QVideoFrame_isValid(this.h))
}

func (this *QVideoFrame) PixelFormat() QVideoFrameFormat__PixelFormat {
	return (QVideoFrameFormat__PixelFormat)(C.QVideoFrame_pixelFormat(this.h))
}

func (this *QVideoFrame) SurfaceFormat() *QVideoFrameFormat {
	_goptr := newQVideoFrameFormat(C.QVideoFrame_surfaceFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) HandleType() QVideoFrame__HandleType {
	return (QVideoFrame__HandleType)(C.QVideoFrame_handleType(this.h))
}

func (this *QVideoFrame) Size() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QVideoFrame_size(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) Width() int {
	return (int)(C.QVideoFrame_width(this.h))
}

func (this *QVideoFrame) Height() int {
	return (int)(C.QVideoFrame_height(this.h))
}

func (this *QVideoFrame) IsMapped() bool {
	return (bool)(C.QVideoFrame_isMapped(this.h))
}

func (this *QVideoFrame) IsReadable() bool {
	return (bool)(C.QVideoFrame_isReadable(this.h))
}

func (this *QVideoFrame) IsWritable() bool {
	return (bool)(C.QVideoFrame_isWritable(this.h))
}

func (this *QVideoFrame) MapMode() QVideoFrame__MapMode {
	return (QVideoFrame__MapMode)(C.QVideoFrame_mapMode(this.h))
}

func (this *QVideoFrame) Map(mode QVideoFrame__MapMode) bool {
	return (bool)(C.QVideoFrame_map(this.h, (C.int)(mode)))
}

func (this *QVideoFrame) Unmap() {
	C.QVideoFrame_unmap(this.h)
}

func (this *QVideoFrame) BytesPerLine(plane int) int {
	return (int)(C.QVideoFrame_bytesPerLine(this.h, (C.int)(plane)))
}

func (this *QVideoFrame) Bits(plane int) *byte {
	return (*byte)(unsafe.Pointer(C.QVideoFrame_bits(this.h, (C.int)(plane))))
}

func (this *QVideoFrame) BitsWithPlane(plane int) *byte {
	return (*byte)(unsafe.Pointer(C.QVideoFrame_bitsWithPlane(this.h, (C.int)(plane))))
}

func (this *QVideoFrame) MappedBytes(plane int) int {
	return (int)(C.QVideoFrame_mappedBytes(this.h, (C.int)(plane)))
}

func (this *QVideoFrame) PlaneCount() int {
	return (int)(C.QVideoFrame_planeCount(this.h))
}

func (this *QVideoFrame) StartTime() int64 {
	return (int64)(C.QVideoFrame_startTime(this.h))
}

func (this *QVideoFrame) SetStartTime(time int64) {
	C.QVideoFrame_setStartTime(this.h, (C.longlong)(time))
}

func (this *QVideoFrame) EndTime() int64 {
	return (int64)(C.QVideoFrame_endTime(this.h))
}

func (this *QVideoFrame) SetEndTime(time int64) {
	C.QVideoFrame_setEndTime(this.h, (C.longlong)(time))
}

func (this *QVideoFrame) SetRotationAngle(rotationAngle QVideoFrame__RotationAngle) {
	C.QVideoFrame_setRotationAngle(this.h, (C.int)(rotationAngle))
}

func (this *QVideoFrame) RotationAngle() QVideoFrame__RotationAngle {
	return (QVideoFrame__RotationAngle)(C.QVideoFrame_rotationAngle(this.h))
}

func (this *QVideoFrame) SetMirrored(mirrored bool) {
	C.QVideoFrame_setMirrored(this.h, (C.bool)(mirrored))
}

func (this *QVideoFrame) Mirrored() bool {
	return (bool)(C.QVideoFrame_mirrored(this.h))
}

func (this *QVideoFrame) ToImage() *qt6.QImage {
	_goptr := qt6.UnsafeNewQImage(unsafe.Pointer(C.QVideoFrame_toImage(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) SubtitleText() string {
	var _ms C.struct_miqt_string = C.QVideoFrame_subtitleText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoFrame) SetSubtitleText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QVideoFrame_setSubtitleText(this.h, text_ms)
}

func (this *QVideoFrame) Paint(painter *qt6.QPainter, rect *qt6.QRectF, options *QVideoFrame__PaintOptions) {
	C.QVideoFrame_paint(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), options.cPointer())
}

// Delete this object from C++ memory.
func (this *QVideoFrame) Delete() {
	C.QVideoFrame_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoFrame) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoFrame) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVideoFrame__PaintOptions struct {
	h *C.QVideoFrame__PaintOptions
}

func (this *QVideoFrame__PaintOptions) cPointer() *C.QVideoFrame__PaintOptions {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoFrame__PaintOptions) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoFrame__PaintOptions constructs the type using only CGO pointers.
func newQVideoFrame__PaintOptions(h *C.QVideoFrame__PaintOptions) *QVideoFrame__PaintOptions {
	if h == nil {
		return nil
	}

	return &QVideoFrame__PaintOptions{h: h}
}

// UnsafeNewQVideoFrame__PaintOptions constructs the type using only unsafe pointers.
func UnsafeNewQVideoFrame__PaintOptions(h unsafe.Pointer) *QVideoFrame__PaintOptions {
	return newQVideoFrame__PaintOptions((*C.QVideoFrame__PaintOptions)(h))
}

func (this *QVideoFrame__PaintOptions) BackgroundColor() *qt6.QColor {
	backgroundColor_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QVideoFrame__PaintOptions_backgroundColor(this.h)))
	backgroundColor_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return backgroundColor_goptr
}

func (this *QVideoFrame__PaintOptions) SetBackgroundColor(backgroundColor qt6.QColor) {
	C.QVideoFrame__PaintOptions_setBackgroundColor(this.h, (*C.QColor)(backgroundColor.UnsafePointer()))
}

func (this *QVideoFrame__PaintOptions) AspectRatioMode() qt6.AspectRatioMode {
	return (qt6.AspectRatioMode)(C.QVideoFrame__PaintOptions_aspectRatioMode(this.h))
}

func (this *QVideoFrame__PaintOptions) SetAspectRatioMode(aspectRatioMode qt6.AspectRatioMode) {
	C.QVideoFrame__PaintOptions_setAspectRatioMode(this.h, (C.int)(aspectRatioMode))
}

func (this *QVideoFrame__PaintOptions) PaintFlags() QVideoFrame__PaintOptions__PaintFlag {
	return (QVideoFrame__PaintOptions__PaintFlag)(C.QVideoFrame__PaintOptions_paintFlags(this.h))
}

func (this *QVideoFrame__PaintOptions) SetPaintFlags(paintFlags QVideoFrame__PaintOptions__PaintFlag) {
	C.QVideoFrame__PaintOptions_setPaintFlags(this.h, (C.int)(paintFlags))
}

// Delete this object from C++ memory.
func (this *QVideoFrame__PaintOptions) Delete() {
	C.QVideoFrame__PaintOptions_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoFrame__PaintOptions) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoFrame__PaintOptions) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

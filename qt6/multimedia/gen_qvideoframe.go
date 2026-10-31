package multimedia

/*

#include "gen_qvideoframe.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QVideoFrame
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVideoFrame) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(format)

	return newQVideoFrame(C.QVideoFrame_new2(format.cPointer()))
}

// NewQVideoFrame3 constructs a new QVideoFrame object.
func NewQVideoFrame3(other *QVideoFrame) *QVideoFrame {
	defer runtime.KeepAlive(other)

	return newQVideoFrame(C.QVideoFrame_new3(other.cPointer()))
}

func (this *QVideoFrame) Swap(other *QVideoFrame) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QVideoFrame_swap(this.h, other.cPointer())
}

func (this *QVideoFrame) OperatorAssign(other *QVideoFrame) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QVideoFrame_operatorAssign(this.h, other.cPointer())
}

func (this *QVideoFrame) OperatorEqual(other *QVideoFrame) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QVideoFrame_operatorEqual(this.h, other.cPointer()))
}

func (this *QVideoFrame) OperatorNotEqual(other *QVideoFrame) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QVideoFrame_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QVideoFrame) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVideoFrame_isValid(this.h))
}

func (this *QVideoFrame) PixelFormat() QVideoFrameFormat__PixelFormat {
	defer runtime.KeepAlive(this)
	return (QVideoFrameFormat__PixelFormat)(C.QVideoFrame_pixelFormat(this.h))
}

func (this *QVideoFrame) SurfaceFormat() *QVideoFrameFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQVideoFrameFormat(C.QVideoFrame_surfaceFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) HandleType() QVideoFrame__HandleType {
	defer runtime.KeepAlive(this)
	return (QVideoFrame__HandleType)(C.QVideoFrame_handleType(this.h))
}

func (this *QVideoFrame) Size() qt6.QSize {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt6.QSize](C.QVideoFrame_size(this.h))
}

func (this *QVideoFrame) Width() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVideoFrame_width(this.h))
}

func (this *QVideoFrame) Height() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVideoFrame_height(this.h))
}

func (this *QVideoFrame) IsMapped() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVideoFrame_isMapped(this.h))
}

func (this *QVideoFrame) IsReadable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVideoFrame_isReadable(this.h))
}

func (this *QVideoFrame) IsWritable() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVideoFrame_isWritable(this.h))
}

func (this *QVideoFrame) MapMode() QVideoFrame__MapMode {
	defer runtime.KeepAlive(this)
	return (QVideoFrame__MapMode)(C.QVideoFrame_mapMode(this.h))
}

func (this *QVideoFrame) Map(mode QVideoFrame__MapMode) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVideoFrame_map(this.h, (C.int)(mode)))
}

func (this *QVideoFrame) Unmap() {
	defer runtime.KeepAlive(this)
	C.QVideoFrame_unmap(this.h)
}

func (this *QVideoFrame) BytesPerLine(plane int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVideoFrame_bytesPerLine(this.h, (C.int)(plane)))
}

func (this *QVideoFrame) Bits(plane int) *byte {
	defer runtime.KeepAlive(this)
	return (*byte)(unsafe.Pointer(C.QVideoFrame_bits(this.h, (C.int)(plane))))
}

func (this *QVideoFrame) BitsWithPlane(plane int) *byte {
	defer runtime.KeepAlive(this)
	return (*byte)(unsafe.Pointer(C.QVideoFrame_bitsWithPlane(this.h, (C.int)(plane))))
}

func (this *QVideoFrame) MappedBytes(plane int) int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVideoFrame_mappedBytes(this.h, (C.int)(plane)))
}

func (this *QVideoFrame) PlaneCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVideoFrame_planeCount(this.h))
}

func (this *QVideoFrame) StartTime() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QVideoFrame_startTime(this.h))
}

func (this *QVideoFrame) SetStartTime(time int64) {
	defer runtime.KeepAlive(this)
	C.QVideoFrame_setStartTime(this.h, (C.longlong)(time))
}

func (this *QVideoFrame) EndTime() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QVideoFrame_endTime(this.h))
}

func (this *QVideoFrame) SetEndTime(time int64) {
	defer runtime.KeepAlive(this)
	C.QVideoFrame_setEndTime(this.h, (C.longlong)(time))
}

func (this *QVideoFrame) SetRotationAngle(rotationAngle QVideoFrame__RotationAngle) {
	defer runtime.KeepAlive(this)
	C.QVideoFrame_setRotationAngle(this.h, (C.int)(rotationAngle))
}

func (this *QVideoFrame) RotationAngle() QVideoFrame__RotationAngle {
	defer runtime.KeepAlive(this)
	return (QVideoFrame__RotationAngle)(C.QVideoFrame_rotationAngle(this.h))
}

func (this *QVideoFrame) SetMirrored(mirrored bool) {
	defer runtime.KeepAlive(this)
	C.QVideoFrame_setMirrored(this.h, (C.bool)(mirrored))
}

func (this *QVideoFrame) Mirrored() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QVideoFrame_mirrored(this.h))
}

func (this *QVideoFrame) ToImage() *qt6.QImage {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQImage(unsafe.Pointer(C.QVideoFrame_toImage(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoFrame) SubtitleText() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QVideoFrame_subtitleText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoFrame) SetSubtitleText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QVideoFrame_setSubtitleText(this.h, text_ms)
}

func (this *QVideoFrame) Paint(painter *qt6.QPainter, rect qt6.QRectF, options *QVideoFrame__PaintOptions) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(painter)
	defer runtime.KeepAlive(options)
	C.QVideoFrame_paint(this.h, (*C.QPainter)(painter.UnsafePointer()), libmiqt.ValueCast[C.struct_miqt_qrectf](rect), options.cPointer())
}

// Delete this object from C++ memory.
func (this *QVideoFrame) Delete() {
	C.QVideoFrame_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVideoFrame) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVideoFrame_delete((*C.QVideoFrame)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QVideoFrame__PaintOptions struct {
	h  *C.QVideoFrame__PaintOptions
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVideoFrame__PaintOptions) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

// NewQVideoFrame__PaintOptions constructs a new QVideoFrame::PaintOptions object.
func NewQVideoFrame__PaintOptions() *QVideoFrame__PaintOptions {

	return newQVideoFrame__PaintOptions(C.QVideoFrame__PaintOptions_new())
}

func (this *QVideoFrame__PaintOptions) BackgroundColor() qt6.QColor {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt6.QColor](C.QVideoFrame__PaintOptions_backgroundColor(this.h))
}

func (this *QVideoFrame__PaintOptions) SetBackgroundColor(backgroundColor qt6.QColor) {
	defer runtime.KeepAlive(this)
	C.QVideoFrame__PaintOptions_setBackgroundColor(this.h, libmiqt.ValueCast[C.struct_miqt_qcolor](backgroundColor))
}

func (this *QVideoFrame__PaintOptions) AspectRatioMode() qt6.AspectRatioMode {
	defer runtime.KeepAlive(this)
	return (qt6.AspectRatioMode)(C.QVideoFrame__PaintOptions_aspectRatioMode(this.h))
}

func (this *QVideoFrame__PaintOptions) SetAspectRatioMode(aspectRatioMode qt6.AspectRatioMode) {
	defer runtime.KeepAlive(this)
	C.QVideoFrame__PaintOptions_setAspectRatioMode(this.h, (C.int)(aspectRatioMode))
}

func (this *QVideoFrame__PaintOptions) PaintFlags() QVideoFrame__PaintOptions__PaintFlag {
	defer runtime.KeepAlive(this)
	return (QVideoFrame__PaintOptions__PaintFlag)(C.QVideoFrame__PaintOptions_paintFlags(this.h))
}

func (this *QVideoFrame__PaintOptions) SetPaintFlags(paintFlags QVideoFrame__PaintOptions__PaintFlag) {
	defer runtime.KeepAlive(this)
	C.QVideoFrame__PaintOptions_setPaintFlags(this.h, (C.int)(paintFlags))
}

// Delete this object from C++ memory.
func (this *QVideoFrame__PaintOptions) Delete() {
	C.QVideoFrame__PaintOptions_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVideoFrame__PaintOptions) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVideoFrame__PaintOptions_delete((*C.QVideoFrame__PaintOptions)(gc[0]))
	})
	this.miqtSetGC(gc)
}

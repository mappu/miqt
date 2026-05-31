package qwt

/*

#include "gen_qwt_painter_command.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtPainterCommand__Type int

const (
	QwtPainterCommand__Invalid QwtPainterCommand__Type = -1
	QwtPainterCommand__Path    QwtPainterCommand__Type = 0
	QwtPainterCommand__Pixmap  QwtPainterCommand__Type = 1
	QwtPainterCommand__Image   QwtPainterCommand__Type = 2
	QwtPainterCommand__State   QwtPainterCommand__Type = 3
)

type QwtPainterCommand struct {
	h *C.QwtPainterCommand
}

func (this *QwtPainterCommand) cPointer() *C.QwtPainterCommand {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPainterCommand) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPainterCommand constructs the type using only CGO pointers.
func newQwtPainterCommand(h *C.QwtPainterCommand) *QwtPainterCommand {
	if h == nil {
		return nil
	}

	return &QwtPainterCommand{h: h}
}

// UnsafeNewQwtPainterCommand constructs the type using only unsafe pointers.
func UnsafeNewQwtPainterCommand(h unsafe.Pointer) *QwtPainterCommand {
	return newQwtPainterCommand((*C.QwtPainterCommand)(h))
}

// NewQwtPainterCommand constructs a new QwtPainterCommand object.
func NewQwtPainterCommand() *QwtPainterCommand {

	return newQwtPainterCommand(C.QwtPainterCommand_new())
}

// NewQwtPainterCommand2 constructs a new QwtPainterCommand object.
func NewQwtPainterCommand2(param1 *qt.QPainterPath) *QwtPainterCommand {

	return newQwtPainterCommand(C.QwtPainterCommand_new2((*C.QPainterPath)(param1.UnsafePointer())))
}

// NewQwtPainterCommand3 constructs a new QwtPainterCommand object.
func NewQwtPainterCommand3(rect *qt.QRectF, param2 *qt.QPixmap, subRect *qt.QRectF) *QwtPainterCommand {

	return newQwtPainterCommand(C.QwtPainterCommand_new3((*C.QRectF)(rect.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QRectF)(subRect.UnsafePointer())))
}

// NewQwtPainterCommand4 constructs a new QwtPainterCommand object.
func NewQwtPainterCommand4(rect *qt.QRectF, param2 *qt.QImage, subRect *qt.QRectF, param4 qt.ImageConversionFlag) *QwtPainterCommand {

	return newQwtPainterCommand(C.QwtPainterCommand_new4((*C.QRectF)(rect.UnsafePointer()), (*C.QImage)(param2.UnsafePointer()), (*C.QRectF)(subRect.UnsafePointer()), (C.int)(param4)))
}

// NewQwtPainterCommand5 constructs a new QwtPainterCommand object.
func NewQwtPainterCommand5(param1 *qt.QPaintEngineState) *QwtPainterCommand {

	return newQwtPainterCommand(C.QwtPainterCommand_new5((*C.QPaintEngineState)(param1.UnsafePointer())))
}

func (this *QwtPainterCommand) Type() QwtPainterCommand__Type {
	return (QwtPainterCommand__Type)(C.QwtPainterCommand_type(this.h))
}

func (this *QwtPainterCommand) Path() *qt.QPainterPath {
	return qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPainterCommand_path(this.h)))
}

func (this *QwtPainterCommand) Path2() *qt.QPainterPath {
	return qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPainterCommand_path2(this.h)))
}

func (this *QwtPainterCommand) PixmapData() *QwtPainterCommand__PixmapData {
	return newQwtPainterCommand__PixmapData(C.QwtPainterCommand_pixmapData(this.h))
}

func (this *QwtPainterCommand) PixmapData2() *QwtPainterCommand__PixmapData {
	return newQwtPainterCommand__PixmapData(C.QwtPainterCommand_pixmapData2(this.h))
}

func (this *QwtPainterCommand) ImageData() *QwtPainterCommand__ImageData {
	return newQwtPainterCommand__ImageData(C.QwtPainterCommand_imageData(this.h))
}

func (this *QwtPainterCommand) ImageData2() *QwtPainterCommand__ImageData {
	return newQwtPainterCommand__ImageData(C.QwtPainterCommand_imageData2(this.h))
}

func (this *QwtPainterCommand) StateData() *QwtPainterCommand__StateData {
	return newQwtPainterCommand__StateData(C.QwtPainterCommand_stateData(this.h))
}

func (this *QwtPainterCommand) StateData2() *QwtPainterCommand__StateData {
	return newQwtPainterCommand__StateData(C.QwtPainterCommand_stateData2(this.h))
}

// Delete this object from C++ memory.
func (this *QwtPainterCommand) Delete() {
	C.QwtPainterCommand_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPainterCommand) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPainterCommand) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPainterCommand__PixmapData struct {
	h *C.QwtPainterCommand__PixmapData
}

func (this *QwtPainterCommand__PixmapData) cPointer() *C.QwtPainterCommand__PixmapData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPainterCommand__PixmapData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPainterCommand__PixmapData constructs the type using only CGO pointers.
func newQwtPainterCommand__PixmapData(h *C.QwtPainterCommand__PixmapData) *QwtPainterCommand__PixmapData {
	if h == nil {
		return nil
	}

	return &QwtPainterCommand__PixmapData{h: h}
}

// UnsafeNewQwtPainterCommand__PixmapData constructs the type using only unsafe pointers.
func UnsafeNewQwtPainterCommand__PixmapData(h unsafe.Pointer) *QwtPainterCommand__PixmapData {
	return newQwtPainterCommand__PixmapData((*C.QwtPainterCommand__PixmapData)(h))
}

// NewQwtPainterCommand__PixmapData constructs a new QwtPainterCommand::PixmapData object.
func NewQwtPainterCommand__PixmapData(param1 *QwtPainterCommand__PixmapData) *QwtPainterCommand__PixmapData {

	return newQwtPainterCommand__PixmapData(C.QwtPainterCommand__PixmapData_new(param1.cPointer()))
}

func (this *QwtPainterCommand__PixmapData) Rect() *qt.QRectF {
	rect_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPainterCommand__PixmapData_rect(this.h)))
	rect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return rect_goptr
}

func (this *QwtPainterCommand__PixmapData) SetRect(rect qt.QRectF) {
	C.QwtPainterCommand__PixmapData_setRect(this.h, (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QwtPainterCommand__PixmapData) Pixmap() *qt.QPixmap {
	pixmap_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QwtPainterCommand__PixmapData_pixmap(this.h)))
	pixmap_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return pixmap_goptr
}

func (this *QwtPainterCommand__PixmapData) SetPixmap(pixmap qt.QPixmap) {
	C.QwtPainterCommand__PixmapData_setPixmap(this.h, (*C.QPixmap)(pixmap.UnsafePointer()))
}

func (this *QwtPainterCommand__PixmapData) SubRect() *qt.QRectF {
	subRect_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPainterCommand__PixmapData_subRect(this.h)))
	subRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return subRect_goptr
}

func (this *QwtPainterCommand__PixmapData) SetSubRect(subRect qt.QRectF) {
	C.QwtPainterCommand__PixmapData_setSubRect(this.h, (*C.QRectF)(subRect.UnsafePointer()))
}

func (this *QwtPainterCommand__PixmapData) OperatorAssign(param1 *QwtPainterCommand__PixmapData) {
	C.QwtPainterCommand__PixmapData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPainterCommand__PixmapData) Delete() {
	C.QwtPainterCommand__PixmapData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPainterCommand__PixmapData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPainterCommand__PixmapData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPainterCommand__ImageData struct {
	h *C.QwtPainterCommand__ImageData
}

func (this *QwtPainterCommand__ImageData) cPointer() *C.QwtPainterCommand__ImageData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPainterCommand__ImageData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPainterCommand__ImageData constructs the type using only CGO pointers.
func newQwtPainterCommand__ImageData(h *C.QwtPainterCommand__ImageData) *QwtPainterCommand__ImageData {
	if h == nil {
		return nil
	}

	return &QwtPainterCommand__ImageData{h: h}
}

// UnsafeNewQwtPainterCommand__ImageData constructs the type using only unsafe pointers.
func UnsafeNewQwtPainterCommand__ImageData(h unsafe.Pointer) *QwtPainterCommand__ImageData {
	return newQwtPainterCommand__ImageData((*C.QwtPainterCommand__ImageData)(h))
}

// NewQwtPainterCommand__ImageData constructs a new QwtPainterCommand::ImageData object.
func NewQwtPainterCommand__ImageData(param1 *QwtPainterCommand__ImageData) *QwtPainterCommand__ImageData {

	return newQwtPainterCommand__ImageData(C.QwtPainterCommand__ImageData_new(param1.cPointer()))
}

func (this *QwtPainterCommand__ImageData) Rect() *qt.QRectF {
	rect_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPainterCommand__ImageData_rect(this.h)))
	rect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return rect_goptr
}

func (this *QwtPainterCommand__ImageData) SetRect(rect qt.QRectF) {
	C.QwtPainterCommand__ImageData_setRect(this.h, (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QwtPainterCommand__ImageData) Image() *qt.QImage {
	image_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QwtPainterCommand__ImageData_image(this.h)))
	image_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return image_goptr
}

func (this *QwtPainterCommand__ImageData) SetImage(image qt.QImage) {
	C.QwtPainterCommand__ImageData_setImage(this.h, (*C.QImage)(image.UnsafePointer()))
}

func (this *QwtPainterCommand__ImageData) SubRect() *qt.QRectF {
	subRect_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPainterCommand__ImageData_subRect(this.h)))
	subRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return subRect_goptr
}

func (this *QwtPainterCommand__ImageData) SetSubRect(subRect qt.QRectF) {
	C.QwtPainterCommand__ImageData_setSubRect(this.h, (*C.QRectF)(subRect.UnsafePointer()))
}

func (this *QwtPainterCommand__ImageData) Flags() qt.ImageConversionFlag {
	return (qt.ImageConversionFlag)(C.QwtPainterCommand__ImageData_flags(this.h))
}

func (this *QwtPainterCommand__ImageData) SetFlags(flags qt.ImageConversionFlag) {
	C.QwtPainterCommand__ImageData_setFlags(this.h, (C.int)(flags))
}

func (this *QwtPainterCommand__ImageData) OperatorAssign(param1 *QwtPainterCommand__ImageData) {
	C.QwtPainterCommand__ImageData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPainterCommand__ImageData) Delete() {
	C.QwtPainterCommand__ImageData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPainterCommand__ImageData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPainterCommand__ImageData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtPainterCommand__StateData struct {
	h *C.QwtPainterCommand__StateData
}

func (this *QwtPainterCommand__StateData) cPointer() *C.QwtPainterCommand__StateData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPainterCommand__StateData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPainterCommand__StateData constructs the type using only CGO pointers.
func newQwtPainterCommand__StateData(h *C.QwtPainterCommand__StateData) *QwtPainterCommand__StateData {
	if h == nil {
		return nil
	}

	return &QwtPainterCommand__StateData{h: h}
}

// UnsafeNewQwtPainterCommand__StateData constructs the type using only unsafe pointers.
func UnsafeNewQwtPainterCommand__StateData(h unsafe.Pointer) *QwtPainterCommand__StateData {
	return newQwtPainterCommand__StateData((*C.QwtPainterCommand__StateData)(h))
}

// NewQwtPainterCommand__StateData constructs a new QwtPainterCommand::StateData object.
func NewQwtPainterCommand__StateData(param1 *QwtPainterCommand__StateData) *QwtPainterCommand__StateData {

	return newQwtPainterCommand__StateData(C.QwtPainterCommand__StateData_new(param1.cPointer()))
}

func (this *QwtPainterCommand__StateData) Flags() qt.QPaintEngine__DirtyFlag {
	return (qt.QPaintEngine__DirtyFlag)(C.QwtPainterCommand__StateData_flags(this.h))
}

func (this *QwtPainterCommand__StateData) SetFlags(flags qt.QPaintEngine__DirtyFlag) {
	C.QwtPainterCommand__StateData_setFlags(this.h, (C.int)(flags))
}

func (this *QwtPainterCommand__StateData) Pen() *qt.QPen {
	pen_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPainterCommand__StateData_pen(this.h)))
	pen_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return pen_goptr
}

func (this *QwtPainterCommand__StateData) SetPen(pen qt.QPen) {
	C.QwtPainterCommand__StateData_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) Brush() *qt.QBrush {
	brush_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPainterCommand__StateData_brush(this.h)))
	brush_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return brush_goptr
}

func (this *QwtPainterCommand__StateData) SetBrush(brush qt.QBrush) {
	C.QwtPainterCommand__StateData_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) BrushOrigin() *qt.QPointF {
	brushOrigin_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QwtPainterCommand__StateData_brushOrigin(this.h)))
	brushOrigin_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return brushOrigin_goptr
}

func (this *QwtPainterCommand__StateData) SetBrushOrigin(brushOrigin qt.QPointF) {
	C.QwtPainterCommand__StateData_setBrushOrigin(this.h, (*C.QPointF)(brushOrigin.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) BackgroundBrush() *qt.QBrush {
	backgroundBrush_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtPainterCommand__StateData_backgroundBrush(this.h)))
	backgroundBrush_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return backgroundBrush_goptr
}

func (this *QwtPainterCommand__StateData) SetBackgroundBrush(backgroundBrush qt.QBrush) {
	C.QwtPainterCommand__StateData_setBackgroundBrush(this.h, (*C.QBrush)(backgroundBrush.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) BackgroundMode() qt.BGMode {
	return (qt.BGMode)(C.QwtPainterCommand__StateData_backgroundMode(this.h))
}

func (this *QwtPainterCommand__StateData) SetBackgroundMode(backgroundMode qt.BGMode) {
	C.QwtPainterCommand__StateData_setBackgroundMode(this.h, (C.int)(backgroundMode))
}

func (this *QwtPainterCommand__StateData) Font() *qt.QFont {
	font_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtPainterCommand__StateData_font(this.h)))
	font_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return font_goptr
}

func (this *QwtPainterCommand__StateData) SetFont(font qt.QFont) {
	C.QwtPainterCommand__StateData_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) Matrix() *qt.QMatrix {
	matrix_goptr := qt.UnsafeNewQMatrix(unsafe.Pointer(C.QwtPainterCommand__StateData_matrix(this.h)))
	matrix_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return matrix_goptr
}

func (this *QwtPainterCommand__StateData) SetMatrix(matrix qt.QMatrix) {
	C.QwtPainterCommand__StateData_setMatrix(this.h, (*C.QMatrix)(matrix.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) Transform() *qt.QTransform {
	transform_goptr := qt.UnsafeNewQTransform(unsafe.Pointer(C.QwtPainterCommand__StateData_transform(this.h)))
	transform_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return transform_goptr
}

func (this *QwtPainterCommand__StateData) SetTransform(transform qt.QTransform) {
	C.QwtPainterCommand__StateData_setTransform(this.h, (*C.QTransform)(transform.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) ClipOperation() qt.ClipOperation {
	return (qt.ClipOperation)(C.QwtPainterCommand__StateData_clipOperation(this.h))
}

func (this *QwtPainterCommand__StateData) SetClipOperation(clipOperation qt.ClipOperation) {
	C.QwtPainterCommand__StateData_setClipOperation(this.h, (C.int)(clipOperation))
}

func (this *QwtPainterCommand__StateData) ClipRegion() *qt.QRegion {
	clipRegion_goptr := qt.UnsafeNewQRegion(unsafe.Pointer(C.QwtPainterCommand__StateData_clipRegion(this.h)))
	clipRegion_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return clipRegion_goptr
}

func (this *QwtPainterCommand__StateData) SetClipRegion(clipRegion qt.QRegion) {
	C.QwtPainterCommand__StateData_setClipRegion(this.h, (*C.QRegion)(clipRegion.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) ClipPath() *qt.QPainterPath {
	clipPath_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPainterCommand__StateData_clipPath(this.h)))
	clipPath_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return clipPath_goptr
}

func (this *QwtPainterCommand__StateData) SetClipPath(clipPath qt.QPainterPath) {
	C.QwtPainterCommand__StateData_setClipPath(this.h, (*C.QPainterPath)(clipPath.UnsafePointer()))
}

func (this *QwtPainterCommand__StateData) IsClipEnabled() bool {
	return (bool)(C.QwtPainterCommand__StateData_isClipEnabled(this.h))
}

func (this *QwtPainterCommand__StateData) SetIsClipEnabled(isClipEnabled bool) {
	C.QwtPainterCommand__StateData_setIsClipEnabled(this.h, (C.bool)(isClipEnabled))
}

func (this *QwtPainterCommand__StateData) RenderHints() qt.QPainter__RenderHint {
	return (qt.QPainter__RenderHint)(C.QwtPainterCommand__StateData_renderHints(this.h))
}

func (this *QwtPainterCommand__StateData) SetRenderHints(renderHints qt.QPainter__RenderHint) {
	C.QwtPainterCommand__StateData_setRenderHints(this.h, (C.int)(renderHints))
}

func (this *QwtPainterCommand__StateData) CompositionMode() qt.QPainter__CompositionMode {
	return (qt.QPainter__CompositionMode)(C.QwtPainterCommand__StateData_compositionMode(this.h))
}

func (this *QwtPainterCommand__StateData) SetCompositionMode(compositionMode qt.QPainter__CompositionMode) {
	C.QwtPainterCommand__StateData_setCompositionMode(this.h, (C.int)(compositionMode))
}

func (this *QwtPainterCommand__StateData) Opacity() float64 {
	return (float64)(C.QwtPainterCommand__StateData_opacity(this.h))
}

func (this *QwtPainterCommand__StateData) SetOpacity(opacity float64) {
	C.QwtPainterCommand__StateData_setOpacity(this.h, (C.double)(opacity))
}

func (this *QwtPainterCommand__StateData) OperatorAssign(param1 *QwtPainterCommand__StateData) {
	C.QwtPainterCommand__StateData_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtPainterCommand__StateData) Delete() {
	C.QwtPainterCommand__StateData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPainterCommand__StateData) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPainterCommand__StateData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

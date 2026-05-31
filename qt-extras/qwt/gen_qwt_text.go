package qwt

/*

#include "gen_qwt_text.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtText__TextFormat int

const (
	QwtText__AutoText    QwtText__TextFormat = 0
	QwtText__PlainText   QwtText__TextFormat = 1
	QwtText__RichText    QwtText__TextFormat = 2
	QwtText__MathMLText  QwtText__TextFormat = 3
	QwtText__TeXText     QwtText__TextFormat = 4
	QwtText__OtherFormat QwtText__TextFormat = 100
)

type QwtText__PaintAttribute int

const (
	QwtText__PaintUsingTextFont  QwtText__PaintAttribute = 1
	QwtText__PaintUsingTextColor QwtText__PaintAttribute = 2
	QwtText__PaintBackground     QwtText__PaintAttribute = 4
)

type QwtText__LayoutAttribute int

const (
	QwtText__MinimumLayout QwtText__LayoutAttribute = 1
)

type QwtText struct {
	h *C.QwtText
}

func (this *QwtText) cPointer() *C.QwtText {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtText) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtText constructs the type using only CGO pointers.
func newQwtText(h *C.QwtText) *QwtText {
	if h == nil {
		return nil
	}

	return &QwtText{h: h}
}

// UnsafeNewQwtText constructs the type using only unsafe pointers.
func UnsafeNewQwtText(h unsafe.Pointer) *QwtText {
	return newQwtText((*C.QwtText)(h))
}

// NewQwtText constructs a new QwtText object.
func NewQwtText() *QwtText {

	return newQwtText(C.QwtText_new())
}

// NewQwtText2 constructs a new QwtText object.
func NewQwtText2(param1 *QwtText) *QwtText {

	return newQwtText(C.QwtText_new2(param1.cPointer()))
}

// NewQwtText3 constructs a new QwtText object.
func NewQwtText3(param1 string) *QwtText {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return newQwtText(C.QwtText_new3(param1_ms))
}

// NewQwtText4 constructs a new QwtText object.
func NewQwtText4(param1 string, textFormat QwtText__TextFormat) *QwtText {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return newQwtText(C.QwtText_new4(param1_ms, (C.int)(textFormat)))
}

func (this *QwtText) OperatorAssign(param1 *QwtText) {
	C.QwtText_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtText) OperatorEqual(param1 *QwtText) bool {
	return (bool)(C.QwtText_operatorEqual(this.h, param1.cPointer()))
}

func (this *QwtText) OperatorNotEqual(param1 *QwtText) bool {
	return (bool)(C.QwtText_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QwtText) SetText(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QwtText_setText(this.h, param1_ms)
}

func (this *QwtText) Text() string {
	var _ms C.struct_miqt_string = C.QwtText_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtText) IsNull() bool {
	return (bool)(C.QwtText_isNull(this.h))
}

func (this *QwtText) IsEmpty() bool {
	return (bool)(C.QwtText_isEmpty(this.h))
}

func (this *QwtText) SetFont(font *qt.QFont) {
	C.QwtText_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QwtText) Font() *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtText_font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtText) UsedFont(param1 *qt.QFont) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtText_usedFont(this.h, (*C.QFont)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtText) SetRenderFlags(renderFlags int) {
	C.QwtText_setRenderFlags(this.h, (C.int)(renderFlags))
}

func (this *QwtText) RenderFlags() int {
	return (int)(C.QwtText_renderFlags(this.h))
}

func (this *QwtText) SetColor(color *qt.QColor) {
	C.QwtText_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QwtText) Color() *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QwtText_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtText) UsedColor(param1 *qt.QColor) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QwtText_usedColor(this.h, (*C.QColor)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtText) SetBorderRadius(borderRadius float64) {
	C.QwtText_setBorderRadius(this.h, (C.double)(borderRadius))
}

func (this *QwtText) BorderRadius() float64 {
	return (float64)(C.QwtText_borderRadius(this.h))
}

func (this *QwtText) SetBorderPen(borderPen *qt.QPen) {
	C.QwtText_setBorderPen(this.h, (*C.QPen)(borderPen.UnsafePointer()))
}

func (this *QwtText) BorderPen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtText_borderPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtText) SetBackgroundBrush(backgroundBrush *qt.QBrush) {
	C.QwtText_setBackgroundBrush(this.h, (*C.QBrush)(backgroundBrush.UnsafePointer()))
}

func (this *QwtText) BackgroundBrush() *qt.QBrush {
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtText_backgroundBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtText) SetPaintAttribute(param1 QwtText__PaintAttribute) {
	C.QwtText_setPaintAttribute(this.h, (C.int)(param1))
}

func (this *QwtText) TestPaintAttribute(param1 QwtText__PaintAttribute) bool {
	return (bool)(C.QwtText_testPaintAttribute(this.h, (C.int)(param1)))
}

func (this *QwtText) SetLayoutAttribute(param1 QwtText__LayoutAttribute) {
	C.QwtText_setLayoutAttribute(this.h, (C.int)(param1))
}

func (this *QwtText) TestLayoutAttribute(param1 QwtText__LayoutAttribute) bool {
	return (bool)(C.QwtText_testLayoutAttribute(this.h, (C.int)(param1)))
}

func (this *QwtText) HeightForWidth(width float64) float64 {
	return (float64)(C.QwtText_heightForWidth(this.h, (C.double)(width)))
}

func (this *QwtText) TextSize() *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtText_textSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtText) Draw(painter *qt.QPainter, rect *qt.QRectF) {
	C.QwtText_draw(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()))
}

func QwtText_TextEngine(text string) *QwtTextEngine {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQwtTextEngine(C.QwtText_textEngine(text_ms))
}

func QwtText_TextEngineWithQwtTextTextFormat(param1 QwtText__TextFormat) *QwtTextEngine {
	return newQwtTextEngine(C.QwtText_textEngineWithQwtTextTextFormat((C.int)(param1)))
}

func QwtText_SetTextEngine(param1 QwtText__TextFormat, param2 *QwtTextEngine) {
	C.QwtText_setTextEngine((C.int)(param1), param2.cPointer())
}

func (this *QwtText) SetText2(param1 string, textFormat QwtText__TextFormat) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QwtText_setText2(this.h, param1_ms, (C.int)(textFormat))
}

func (this *QwtText) SetPaintAttribute2(param1 QwtText__PaintAttribute, on bool) {
	C.QwtText_setPaintAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtText) SetLayoutAttribute2(param1 QwtText__LayoutAttribute, on bool) {
	C.QwtText_setLayoutAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtText) HeightForWidth2(width float64, param2 *qt.QFont) float64 {
	return (float64)(C.QwtText_heightForWidth2(this.h, (C.double)(width), (*C.QFont)(param2.UnsafePointer())))
}

func (this *QwtText) TextSizeWithQFont(param1 *qt.QFont) *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtText_textSizeWithQFont(this.h, (*C.QFont)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtText_TextEngine2(text string, param2 QwtText__TextFormat) *QwtTextEngine {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQwtTextEngine(C.QwtText_textEngine2(text_ms, (C.int)(param2)))
}

// Delete this object from C++ memory.
func (this *QwtText) Delete() {
	C.QwtText_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtText) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtText) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

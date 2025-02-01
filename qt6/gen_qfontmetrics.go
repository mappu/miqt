package qt6

/*

#include "gen_qfontmetrics.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFontMetrics struct {
	h *C.QFontMetrics
}

func (this *QFontMetrics) cPointer() *C.QFontMetrics {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFontMetrics) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFontMetrics constructs the type using only CGO pointers.
func newQFontMetrics(h *C.QFontMetrics) *QFontMetrics {
	if h == nil {
		return nil
	}

	return &QFontMetrics{h: h}
}

// UnsafeNewQFontMetrics constructs the type using only unsafe pointers.
func UnsafeNewQFontMetrics(h unsafe.Pointer) *QFontMetrics {
	return newQFontMetrics((*C.QFontMetrics)(h))
}

// NewQFontMetrics constructs a new QFontMetrics object.
func NewQFontMetrics(param1 *QFont) *QFontMetrics {

	return newQFontMetrics(C.QFontMetrics_new(param1.cPointer()))
}

// NewQFontMetrics2 constructs a new QFontMetrics object.
func NewQFontMetrics2(font *QFont, pd *QPaintDevice) *QFontMetrics {

	return newQFontMetrics(C.QFontMetrics_new2(font.cPointer(), pd.cPointer()))
}

// NewQFontMetrics3 constructs a new QFontMetrics object.
func NewQFontMetrics3(param1 *QFontMetrics) *QFontMetrics {

	return newQFontMetrics(C.QFontMetrics_new3(param1.cPointer()))
}

func (this *QFontMetrics) OperatorAssign(param1 *QFontMetrics) {
	C.QFontMetrics_operatorAssign(this.h, param1.cPointer())
}

func (this *QFontMetrics) Swap(other *QFontMetrics) {
	C.QFontMetrics_swap(this.h, other.cPointer())
}

func (this *QFontMetrics) Ascent() int {
	return (int)(C.QFontMetrics_ascent(this.h))
}

func (this *QFontMetrics) CapHeight() int {
	return (int)(C.QFontMetrics_capHeight(this.h))
}

func (this *QFontMetrics) Descent() int {
	return (int)(C.QFontMetrics_descent(this.h))
}

func (this *QFontMetrics) Height() int {
	return (int)(C.QFontMetrics_height(this.h))
}

func (this *QFontMetrics) Leading() int {
	return (int)(C.QFontMetrics_leading(this.h))
}

func (this *QFontMetrics) LineSpacing() int {
	return (int)(C.QFontMetrics_lineSpacing(this.h))
}

func (this *QFontMetrics) MinLeftBearing() int {
	return (int)(C.QFontMetrics_minLeftBearing(this.h))
}

func (this *QFontMetrics) MinRightBearing() int {
	return (int)(C.QFontMetrics_minRightBearing(this.h))
}

func (this *QFontMetrics) MaxWidth() int {
	return (int)(C.QFontMetrics_maxWidth(this.h))
}

func (this *QFontMetrics) XHeight() int {
	return (int)(C.QFontMetrics_xHeight(this.h))
}

func (this *QFontMetrics) AverageCharWidth() int {
	return (int)(C.QFontMetrics_averageCharWidth(this.h))
}

func (this *QFontMetrics) InFont(param1 QChar) bool {
	return (bool)(C.QFontMetrics_inFont(this.h, param1.cPointer()))
}

func (this *QFontMetrics) InFontUcs4(ucs4 uint) bool {
	return (bool)(C.QFontMetrics_inFontUcs4(this.h, (C.uint)(ucs4)))
}

func (this *QFontMetrics) LeftBearing(param1 QChar) int {
	return (int)(C.QFontMetrics_leftBearing(this.h, param1.cPointer()))
}

func (this *QFontMetrics) RightBearing(param1 QChar) int {
	return (int)(C.QFontMetrics_rightBearing(this.h, param1.cPointer()))
}

func (this *QFontMetrics) HorizontalAdvance(param1 string) int {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (int)(C.QFontMetrics_horizontalAdvance(this.h, param1_ms))
}

func (this *QFontMetrics) HorizontalAdvance2(param1 string, textOption *QTextOption) int {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (int)(C.QFontMetrics_horizontalAdvance2(this.h, param1_ms, textOption.cPointer()))
}

func (this *QFontMetrics) HorizontalAdvanceWithQChar(param1 QChar) int {
	return (int)(C.QFontMetrics_horizontalAdvanceWithQChar(this.h, param1.cPointer()))
}

func (this *QFontMetrics) BoundingRect(param1 QChar) *QRect {
	_goptr := newQRect(C.QFontMetrics_boundingRect(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRectWithText(text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRectWithText(this.h, text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect2(text string, textOption *QTextOption) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRect2(this.h, text_ms, textOption.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect3(r *QRect, flags int, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRect3(this.h, r.cPointer(), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect4(x int, y int, w int, h int, flags int, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRect4(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) Size(flags int, str string) *QSize {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQSize(C.QFontMetrics_size(this.h, (C.int)(flags), str_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) TightBoundingRect(text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_tightBoundingRect(this.h, text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) TightBoundingRect2(text string, textOption *QTextOption) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_tightBoundingRect2(this.h, text_ms, textOption.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) ElidedText(text string, mode TextElideMode, width int) string {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QFontMetrics_elidedText(this.h, text_ms, (C.int)(mode), (C.int)(width))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontMetrics) UnderlinePos() int {
	return (int)(C.QFontMetrics_underlinePos(this.h))
}

func (this *QFontMetrics) OverlinePos() int {
	return (int)(C.QFontMetrics_overlinePos(this.h))
}

func (this *QFontMetrics) StrikeOutPos() int {
	return (int)(C.QFontMetrics_strikeOutPos(this.h))
}

func (this *QFontMetrics) LineWidth() int {
	return (int)(C.QFontMetrics_lineWidth(this.h))
}

func (this *QFontMetrics) FontDpi() float64 {
	return (float64)(C.QFontMetrics_fontDpi(this.h))
}

func (this *QFontMetrics) OperatorEqual(other *QFontMetrics) bool {
	return (bool)(C.QFontMetrics_operatorEqual(this.h, other.cPointer()))
}

func (this *QFontMetrics) OperatorNotEqual(other *QFontMetrics) bool {
	return (bool)(C.QFontMetrics_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QFontMetrics) HorizontalAdvance22(param1 string, lenVal int) int {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (int)(C.QFontMetrics_horizontalAdvance22(this.h, param1_ms, (C.int)(lenVal)))
}

func (this *QFontMetrics) BoundingRect42(r *QRect, flags int, text string, tabstops int) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRect42(this.h, r.cPointer(), (C.int)(flags), text_ms, (C.int)(tabstops)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect5(r *QRect, flags int, text string, tabstops int, tabarray *int) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRect5(this.h, r.cPointer(), (C.int)(flags), text_ms, (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect7(x int, y int, w int, h int, flags int, text string, tabstops int) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRect7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms, (C.int)(tabstops)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect8(x int, y int, w int, h int, flags int, text string, tabstops int, tabarray *int) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRect(C.QFontMetrics_boundingRect8(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_ms, (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) Size3(flags int, str string, tabstops int) *QSize {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQSize(C.QFontMetrics_size3(this.h, (C.int)(flags), str_ms, (C.int)(tabstops)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) Size4(flags int, str string, tabstops int, tabarray *int) *QSize {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQSize(C.QFontMetrics_size4(this.h, (C.int)(flags), str_ms, (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) ElidedText4(text string, mode TextElideMode, width int, flags int) string {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QFontMetrics_elidedText4(this.h, text_ms, (C.int)(mode), (C.int)(width), (C.int)(flags))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFontMetrics) Delete() {
	C.QFontMetrics_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontMetrics) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontMetrics) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QFontMetricsF struct {
	h *C.QFontMetricsF
}

func (this *QFontMetricsF) cPointer() *C.QFontMetricsF {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFontMetricsF) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFontMetricsF constructs the type using only CGO pointers.
func newQFontMetricsF(h *C.QFontMetricsF) *QFontMetricsF {
	if h == nil {
		return nil
	}

	return &QFontMetricsF{h: h}
}

// UnsafeNewQFontMetricsF constructs the type using only unsafe pointers.
func UnsafeNewQFontMetricsF(h unsafe.Pointer) *QFontMetricsF {
	return newQFontMetricsF((*C.QFontMetricsF)(h))
}

// NewQFontMetricsF constructs a new QFontMetricsF object.
func NewQFontMetricsF(font *QFont) *QFontMetricsF {

	return newQFontMetricsF(C.QFontMetricsF_new(font.cPointer()))
}

// NewQFontMetricsF2 constructs a new QFontMetricsF object.
func NewQFontMetricsF2(font *QFont, pd *QPaintDevice) *QFontMetricsF {

	return newQFontMetricsF(C.QFontMetricsF_new2(font.cPointer(), pd.cPointer()))
}

// NewQFontMetricsF3 constructs a new QFontMetricsF object.
func NewQFontMetricsF3(param1 *QFontMetrics) *QFontMetricsF {

	return newQFontMetricsF(C.QFontMetricsF_new3(param1.cPointer()))
}

// NewQFontMetricsF4 constructs a new QFontMetricsF object.
func NewQFontMetricsF4(param1 *QFontMetricsF) *QFontMetricsF {

	return newQFontMetricsF(C.QFontMetricsF_new4(param1.cPointer()))
}

func (this *QFontMetricsF) OperatorAssign(param1 *QFontMetricsF) {
	C.QFontMetricsF_operatorAssign(this.h, param1.cPointer())
}

func (this *QFontMetricsF) OperatorAssignWithQFontMetrics(param1 *QFontMetrics) {
	C.QFontMetricsF_operatorAssignWithQFontMetrics(this.h, param1.cPointer())
}

func (this *QFontMetricsF) Swap(other *QFontMetricsF) {
	C.QFontMetricsF_swap(this.h, other.cPointer())
}

func (this *QFontMetricsF) Ascent() float64 {
	return (float64)(C.QFontMetricsF_ascent(this.h))
}

func (this *QFontMetricsF) CapHeight() float64 {
	return (float64)(C.QFontMetricsF_capHeight(this.h))
}

func (this *QFontMetricsF) Descent() float64 {
	return (float64)(C.QFontMetricsF_descent(this.h))
}

func (this *QFontMetricsF) Height() float64 {
	return (float64)(C.QFontMetricsF_height(this.h))
}

func (this *QFontMetricsF) Leading() float64 {
	return (float64)(C.QFontMetricsF_leading(this.h))
}

func (this *QFontMetricsF) LineSpacing() float64 {
	return (float64)(C.QFontMetricsF_lineSpacing(this.h))
}

func (this *QFontMetricsF) MinLeftBearing() float64 {
	return (float64)(C.QFontMetricsF_minLeftBearing(this.h))
}

func (this *QFontMetricsF) MinRightBearing() float64 {
	return (float64)(C.QFontMetricsF_minRightBearing(this.h))
}

func (this *QFontMetricsF) MaxWidth() float64 {
	return (float64)(C.QFontMetricsF_maxWidth(this.h))
}

func (this *QFontMetricsF) XHeight() float64 {
	return (float64)(C.QFontMetricsF_xHeight(this.h))
}

func (this *QFontMetricsF) AverageCharWidth() float64 {
	return (float64)(C.QFontMetricsF_averageCharWidth(this.h))
}

func (this *QFontMetricsF) InFont(param1 QChar) bool {
	return (bool)(C.QFontMetricsF_inFont(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) InFontUcs4(ucs4 uint) bool {
	return (bool)(C.QFontMetricsF_inFontUcs4(this.h, (C.uint)(ucs4)))
}

func (this *QFontMetricsF) LeftBearing(param1 QChar) float64 {
	return (float64)(C.QFontMetricsF_leftBearing(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) RightBearing(param1 QChar) float64 {
	return (float64)(C.QFontMetricsF_rightBearing(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) HorizontalAdvance(stringVal string) float64 {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	return (float64)(C.QFontMetricsF_horizontalAdvance(this.h, stringVal_ms))
}

func (this *QFontMetricsF) HorizontalAdvanceWithQChar(param1 QChar) float64 {
	return (float64)(C.QFontMetricsF_horizontalAdvanceWithQChar(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) HorizontalAdvance2(stringVal string, textOption *QTextOption) float64 {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	return (float64)(C.QFontMetricsF_horizontalAdvance2(this.h, stringVal_ms, textOption.cPointer()))
}

func (this *QFontMetricsF) BoundingRect(stringVal string) *QRectF {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQRectF(C.QFontMetricsF_boundingRect(this.h, stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) BoundingRect2(text string, textOption *QTextOption) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QFontMetricsF_boundingRect2(this.h, text_ms, textOption.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) BoundingRectWithQChar(param1 QChar) *QRectF {
	_goptr := newQRectF(C.QFontMetricsF_boundingRectWithQChar(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) BoundingRect3(r *QRectF, flags int, stringVal string) *QRectF {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQRectF(C.QFontMetricsF_boundingRect3(this.h, r.cPointer(), (C.int)(flags), stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) Size(flags int, str string) *QSizeF {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQSizeF(C.QFontMetricsF_size(this.h, (C.int)(flags), str_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) TightBoundingRect(text string) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QFontMetricsF_tightBoundingRect(this.h, text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) TightBoundingRect2(text string, textOption *QTextOption) *QRectF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := newQRectF(C.QFontMetricsF_tightBoundingRect2(this.h, text_ms, textOption.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) ElidedText(text string, mode TextElideMode, width float64) string {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QFontMetricsF_elidedText(this.h, text_ms, (C.int)(mode), (C.double)(width))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFontMetricsF) UnderlinePos() float64 {
	return (float64)(C.QFontMetricsF_underlinePos(this.h))
}

func (this *QFontMetricsF) OverlinePos() float64 {
	return (float64)(C.QFontMetricsF_overlinePos(this.h))
}

func (this *QFontMetricsF) StrikeOutPos() float64 {
	return (float64)(C.QFontMetricsF_strikeOutPos(this.h))
}

func (this *QFontMetricsF) LineWidth() float64 {
	return (float64)(C.QFontMetricsF_lineWidth(this.h))
}

func (this *QFontMetricsF) FontDpi() float64 {
	return (float64)(C.QFontMetricsF_fontDpi(this.h))
}

func (this *QFontMetricsF) OperatorEqual(other *QFontMetricsF) bool {
	return (bool)(C.QFontMetricsF_operatorEqual(this.h, other.cPointer()))
}

func (this *QFontMetricsF) OperatorNotEqual(other *QFontMetricsF) bool {
	return (bool)(C.QFontMetricsF_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QFontMetricsF) HorizontalAdvance22(stringVal string, length int) float64 {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	return (float64)(C.QFontMetricsF_horizontalAdvance22(this.h, stringVal_ms, (C.int)(length)))
}

func (this *QFontMetricsF) BoundingRect4(r *QRectF, flags int, stringVal string, tabstops int) *QRectF {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQRectF(C.QFontMetricsF_boundingRect4(this.h, r.cPointer(), (C.int)(flags), stringVal_ms, (C.int)(tabstops)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) BoundingRect5(r *QRectF, flags int, stringVal string, tabstops int, tabarray *int) *QRectF {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQRectF(C.QFontMetricsF_boundingRect5(this.h, r.cPointer(), (C.int)(flags), stringVal_ms, (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) Size3(flags int, str string, tabstops int) *QSizeF {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQSizeF(C.QFontMetricsF_size3(this.h, (C.int)(flags), str_ms, (C.int)(tabstops)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) Size4(flags int, str string, tabstops int, tabarray *int) *QSizeF {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	_goptr := newQSizeF(C.QFontMetricsF_size4(this.h, (C.int)(flags), str_ms, (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) ElidedText4(text string, mode TextElideMode, width float64, flags int) string {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QFontMetricsF_elidedText4(this.h, text_ms, (C.int)(mode), (C.double)(width), (C.int)(flags))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFontMetricsF) Delete() {
	C.QFontMetricsF_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontMetricsF) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontMetricsF) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

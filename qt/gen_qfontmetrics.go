package qt

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

func newQFontMetrics(h *C.QFontMetrics) *QFontMetrics {
	if h == nil {
		return nil
	}
	return &QFontMetrics{h: h}
}

func newQFontMetrics_U(h unsafe.Pointer) *QFontMetrics {
	return newQFontMetrics((*C.QFontMetrics)(h))
}

// NewQFontMetrics constructs a new QFontMetrics object.
func NewQFontMetrics(param1 *QFont) *QFontMetrics {
	ret := C.QFontMetrics_new(param1.cPointer())
	return newQFontMetrics(ret)
}

// NewQFontMetrics2 constructs a new QFontMetrics object.
func NewQFontMetrics2(font *QFont, pd *QPaintDevice) *QFontMetrics {
	ret := C.QFontMetrics_new2(font.cPointer(), pd.cPointer())
	return newQFontMetrics(ret)
}

// NewQFontMetrics3 constructs a new QFontMetrics object.
func NewQFontMetrics3(param1 *QFontMetrics) *QFontMetrics {
	ret := C.QFontMetrics_new3(param1.cPointer())
	return newQFontMetrics(ret)
}

func (this *QFontMetrics) OperatorAssign(param1 *QFontMetrics) {
	C.QFontMetrics_OperatorAssign(this.h, param1.cPointer())
}

func (this *QFontMetrics) Swap(other *QFontMetrics) {
	C.QFontMetrics_Swap(this.h, other.cPointer())
}

func (this *QFontMetrics) Ascent() int {
	return (int)(C.QFontMetrics_Ascent(this.h))
}

func (this *QFontMetrics) CapHeight() int {
	return (int)(C.QFontMetrics_CapHeight(this.h))
}

func (this *QFontMetrics) Descent() int {
	return (int)(C.QFontMetrics_Descent(this.h))
}

func (this *QFontMetrics) Height() int {
	return (int)(C.QFontMetrics_Height(this.h))
}

func (this *QFontMetrics) Leading() int {
	return (int)(C.QFontMetrics_Leading(this.h))
}

func (this *QFontMetrics) LineSpacing() int {
	return (int)(C.QFontMetrics_LineSpacing(this.h))
}

func (this *QFontMetrics) MinLeftBearing() int {
	return (int)(C.QFontMetrics_MinLeftBearing(this.h))
}

func (this *QFontMetrics) MinRightBearing() int {
	return (int)(C.QFontMetrics_MinRightBearing(this.h))
}

func (this *QFontMetrics) MaxWidth() int {
	return (int)(C.QFontMetrics_MaxWidth(this.h))
}

func (this *QFontMetrics) XHeight() int {
	return (int)(C.QFontMetrics_XHeight(this.h))
}

func (this *QFontMetrics) AverageCharWidth() int {
	return (int)(C.QFontMetrics_AverageCharWidth(this.h))
}

func (this *QFontMetrics) InFont(param1 QChar) bool {
	return (bool)(C.QFontMetrics_InFont(this.h, param1.cPointer()))
}

func (this *QFontMetrics) InFontUcs4(ucs4 uint) bool {
	return (bool)(C.QFontMetrics_InFontUcs4(this.h, (C.uint)(ucs4)))
}

func (this *QFontMetrics) LeftBearing(param1 QChar) int {
	return (int)(C.QFontMetrics_LeftBearing(this.h, param1.cPointer()))
}

func (this *QFontMetrics) RightBearing(param1 QChar) int {
	return (int)(C.QFontMetrics_RightBearing(this.h, param1.cPointer()))
}

func (this *QFontMetrics) Width(param1 string) int {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	return (int)(C.QFontMetrics_Width(this.h, (*C.struct_miqt_string)(param1_ms)))
}

func (this *QFontMetrics) Width2(param1 string, lenVal int, flags int) int {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	return (int)(C.QFontMetrics_Width2(this.h, (*C.struct_miqt_string)(param1_ms), (C.int)(lenVal), (C.int)(flags)))
}

func (this *QFontMetrics) WidthWithQChar(param1 QChar) int {
	return (int)(C.QFontMetrics_WidthWithQChar(this.h, param1.cPointer()))
}

func (this *QFontMetrics) HorizontalAdvance(param1 string) int {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	return (int)(C.QFontMetrics_HorizontalAdvance(this.h, (*C.struct_miqt_string)(param1_ms)))
}

func (this *QFontMetrics) HorizontalAdvanceWithQChar(param1 QChar) int {
	return (int)(C.QFontMetrics_HorizontalAdvanceWithQChar(this.h, param1.cPointer()))
}

func (this *QFontMetrics) CharWidth(str string, pos int) int {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	return (int)(C.QFontMetrics_CharWidth(this.h, (*C.struct_miqt_string)(str_ms), (C.int)(pos)))
}

func (this *QFontMetrics) BoundingRect(param1 QChar) *QRect {
	_ret := C.QFontMetrics_BoundingRect(this.h, param1.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRectWithText(text string) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_BoundingRectWithText(this.h, (*C.struct_miqt_string)(text_ms))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect2(r *QRect, flags int, text string) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_BoundingRect2(this.h, r.cPointer(), (C.int)(flags), (*C.struct_miqt_string)(text_ms))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect3(x int, y int, w int, h int, flags int, text string) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_BoundingRect3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), (*C.struct_miqt_string)(text_ms))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) Size(flags int, str string) *QSize {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	_ret := C.QFontMetrics_Size(this.h, (C.int)(flags), (*C.struct_miqt_string)(str_ms))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) TightBoundingRect(text string) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_TightBoundingRect(this.h, (*C.struct_miqt_string)(text_ms))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) ElidedText(text string, mode TextElideMode, width int) string {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ms *C.struct_miqt_string = C.QFontMetrics_ElidedText(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(mode), (C.int)(width))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFontMetrics) UnderlinePos() int {
	return (int)(C.QFontMetrics_UnderlinePos(this.h))
}

func (this *QFontMetrics) OverlinePos() int {
	return (int)(C.QFontMetrics_OverlinePos(this.h))
}

func (this *QFontMetrics) StrikeOutPos() int {
	return (int)(C.QFontMetrics_StrikeOutPos(this.h))
}

func (this *QFontMetrics) LineWidth() int {
	return (int)(C.QFontMetrics_LineWidth(this.h))
}

func (this *QFontMetrics) FontDpi() float64 {
	return (float64)(C.QFontMetrics_FontDpi(this.h))
}

func (this *QFontMetrics) OperatorEqual(other *QFontMetrics) bool {
	return (bool)(C.QFontMetrics_OperatorEqual(this.h, other.cPointer()))
}

func (this *QFontMetrics) OperatorNotEqual(other *QFontMetrics) bool {
	return (bool)(C.QFontMetrics_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QFontMetrics) Width22(param1 string, lenVal int) int {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	return (int)(C.QFontMetrics_Width22(this.h, (*C.struct_miqt_string)(param1_ms), (C.int)(lenVal)))
}

func (this *QFontMetrics) HorizontalAdvance2(param1 string, lenVal int) int {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	return (int)(C.QFontMetrics_HorizontalAdvance2(this.h, (*C.struct_miqt_string)(param1_ms), (C.int)(lenVal)))
}

func (this *QFontMetrics) BoundingRect4(r *QRect, flags int, text string, tabstops int) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_BoundingRect4(this.h, r.cPointer(), (C.int)(flags), (*C.struct_miqt_string)(text_ms), (C.int)(tabstops))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect5(r *QRect, flags int, text string, tabstops int, tabarray *int) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_BoundingRect5(this.h, r.cPointer(), (C.int)(flags), (*C.struct_miqt_string)(text_ms), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect7(x int, y int, w int, h int, flags int, text string, tabstops int) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_BoundingRect7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), (*C.struct_miqt_string)(text_ms), (C.int)(tabstops))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) BoundingRect8(x int, y int, w int, h int, flags int, text string, tabstops int, tabarray *int) *QRect {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetrics_BoundingRect8(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), (*C.struct_miqt_string)(text_ms), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) Size3(flags int, str string, tabstops int) *QSize {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	_ret := C.QFontMetrics_Size3(this.h, (C.int)(flags), (*C.struct_miqt_string)(str_ms), (C.int)(tabstops))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) Size4(flags int, str string, tabstops int, tabarray *int) *QSize {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	_ret := C.QFontMetrics_Size4(this.h, (C.int)(flags), (*C.struct_miqt_string)(str_ms), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetrics) ElidedText4(text string, mode TextElideMode, width int, flags int) string {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ms *C.struct_miqt_string = C.QFontMetrics_ElidedText4(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(mode), (C.int)(width), (C.int)(flags))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFontMetrics) Delete() {
	C.QFontMetrics_Delete(this.h)
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

func newQFontMetricsF(h *C.QFontMetricsF) *QFontMetricsF {
	if h == nil {
		return nil
	}
	return &QFontMetricsF{h: h}
}

func newQFontMetricsF_U(h unsafe.Pointer) *QFontMetricsF {
	return newQFontMetricsF((*C.QFontMetricsF)(h))
}

// NewQFontMetricsF constructs a new QFontMetricsF object.
func NewQFontMetricsF(font *QFont) *QFontMetricsF {
	ret := C.QFontMetricsF_new(font.cPointer())
	return newQFontMetricsF(ret)
}

// NewQFontMetricsF2 constructs a new QFontMetricsF object.
func NewQFontMetricsF2(font *QFont, pd *QPaintDevice) *QFontMetricsF {
	ret := C.QFontMetricsF_new2(font.cPointer(), pd.cPointer())
	return newQFontMetricsF(ret)
}

// NewQFontMetricsF3 constructs a new QFontMetricsF object.
func NewQFontMetricsF3(param1 *QFontMetrics) *QFontMetricsF {
	ret := C.QFontMetricsF_new3(param1.cPointer())
	return newQFontMetricsF(ret)
}

// NewQFontMetricsF4 constructs a new QFontMetricsF object.
func NewQFontMetricsF4(param1 *QFontMetricsF) *QFontMetricsF {
	ret := C.QFontMetricsF_new4(param1.cPointer())
	return newQFontMetricsF(ret)
}

func (this *QFontMetricsF) OperatorAssign(param1 *QFontMetricsF) {
	C.QFontMetricsF_OperatorAssign(this.h, param1.cPointer())
}

func (this *QFontMetricsF) OperatorAssignWithQFontMetrics(param1 *QFontMetrics) {
	C.QFontMetricsF_OperatorAssignWithQFontMetrics(this.h, param1.cPointer())
}

func (this *QFontMetricsF) Swap(other *QFontMetricsF) {
	C.QFontMetricsF_Swap(this.h, other.cPointer())
}

func (this *QFontMetricsF) Ascent() float64 {
	return (float64)(C.QFontMetricsF_Ascent(this.h))
}

func (this *QFontMetricsF) CapHeight() float64 {
	return (float64)(C.QFontMetricsF_CapHeight(this.h))
}

func (this *QFontMetricsF) Descent() float64 {
	return (float64)(C.QFontMetricsF_Descent(this.h))
}

func (this *QFontMetricsF) Height() float64 {
	return (float64)(C.QFontMetricsF_Height(this.h))
}

func (this *QFontMetricsF) Leading() float64 {
	return (float64)(C.QFontMetricsF_Leading(this.h))
}

func (this *QFontMetricsF) LineSpacing() float64 {
	return (float64)(C.QFontMetricsF_LineSpacing(this.h))
}

func (this *QFontMetricsF) MinLeftBearing() float64 {
	return (float64)(C.QFontMetricsF_MinLeftBearing(this.h))
}

func (this *QFontMetricsF) MinRightBearing() float64 {
	return (float64)(C.QFontMetricsF_MinRightBearing(this.h))
}

func (this *QFontMetricsF) MaxWidth() float64 {
	return (float64)(C.QFontMetricsF_MaxWidth(this.h))
}

func (this *QFontMetricsF) XHeight() float64 {
	return (float64)(C.QFontMetricsF_XHeight(this.h))
}

func (this *QFontMetricsF) AverageCharWidth() float64 {
	return (float64)(C.QFontMetricsF_AverageCharWidth(this.h))
}

func (this *QFontMetricsF) InFont(param1 QChar) bool {
	return (bool)(C.QFontMetricsF_InFont(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) InFontUcs4(ucs4 uint) bool {
	return (bool)(C.QFontMetricsF_InFontUcs4(this.h, (C.uint)(ucs4)))
}

func (this *QFontMetricsF) LeftBearing(param1 QChar) float64 {
	return (float64)(C.QFontMetricsF_LeftBearing(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) RightBearing(param1 QChar) float64 {
	return (float64)(C.QFontMetricsF_RightBearing(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) Width(stringVal string) float64 {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	return (float64)(C.QFontMetricsF_Width(this.h, (*C.struct_miqt_string)(stringVal_ms)))
}

func (this *QFontMetricsF) WidthWithQChar(param1 QChar) float64 {
	return (float64)(C.QFontMetricsF_WidthWithQChar(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) HorizontalAdvance(stringVal string) float64 {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	return (float64)(C.QFontMetricsF_HorizontalAdvance(this.h, (*C.struct_miqt_string)(stringVal_ms)))
}

func (this *QFontMetricsF) HorizontalAdvanceWithQChar(param1 QChar) float64 {
	return (float64)(C.QFontMetricsF_HorizontalAdvanceWithQChar(this.h, param1.cPointer()))
}

func (this *QFontMetricsF) BoundingRect(stringVal string) *QRectF {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QFontMetricsF_BoundingRect(this.h, (*C.struct_miqt_string)(stringVal_ms))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) BoundingRectWithQChar(param1 QChar) *QRectF {
	_ret := C.QFontMetricsF_BoundingRectWithQChar(this.h, param1.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) BoundingRect2(r *QRectF, flags int, stringVal string) *QRectF {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QFontMetricsF_BoundingRect2(this.h, r.cPointer(), (C.int)(flags), (*C.struct_miqt_string)(stringVal_ms))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) Size(flags int, str string) *QSizeF {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	_ret := C.QFontMetricsF_Size(this.h, (C.int)(flags), (*C.struct_miqt_string)(str_ms))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) TightBoundingRect(text string) *QRectF {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QFontMetricsF_TightBoundingRect(this.h, (*C.struct_miqt_string)(text_ms))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) ElidedText(text string, mode TextElideMode, width float64) string {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ms *C.struct_miqt_string = C.QFontMetricsF_ElidedText(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(mode), (C.double)(width))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFontMetricsF) UnderlinePos() float64 {
	return (float64)(C.QFontMetricsF_UnderlinePos(this.h))
}

func (this *QFontMetricsF) OverlinePos() float64 {
	return (float64)(C.QFontMetricsF_OverlinePos(this.h))
}

func (this *QFontMetricsF) StrikeOutPos() float64 {
	return (float64)(C.QFontMetricsF_StrikeOutPos(this.h))
}

func (this *QFontMetricsF) LineWidth() float64 {
	return (float64)(C.QFontMetricsF_LineWidth(this.h))
}

func (this *QFontMetricsF) FontDpi() float64 {
	return (float64)(C.QFontMetricsF_FontDpi(this.h))
}

func (this *QFontMetricsF) OperatorEqual(other *QFontMetricsF) bool {
	return (bool)(C.QFontMetricsF_OperatorEqual(this.h, other.cPointer()))
}

func (this *QFontMetricsF) OperatorNotEqual(other *QFontMetricsF) bool {
	return (bool)(C.QFontMetricsF_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QFontMetricsF) HorizontalAdvance2(stringVal string, length int) float64 {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	return (float64)(C.QFontMetricsF_HorizontalAdvance2(this.h, (*C.struct_miqt_string)(stringVal_ms), (C.int)(length)))
}

func (this *QFontMetricsF) BoundingRect4(r *QRectF, flags int, stringVal string, tabstops int) *QRectF {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QFontMetricsF_BoundingRect4(this.h, r.cPointer(), (C.int)(flags), (*C.struct_miqt_string)(stringVal_ms), (C.int)(tabstops))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) BoundingRect5(r *QRectF, flags int, stringVal string, tabstops int, tabarray *int) *QRectF {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QFontMetricsF_BoundingRect5(this.h, r.cPointer(), (C.int)(flags), (*C.struct_miqt_string)(stringVal_ms), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) Size3(flags int, str string, tabstops int) *QSizeF {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	_ret := C.QFontMetricsF_Size3(this.h, (C.int)(flags), (*C.struct_miqt_string)(str_ms), (C.int)(tabstops))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) Size4(flags int, str string, tabstops int, tabarray *int) *QSizeF {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	_ret := C.QFontMetricsF_Size4(this.h, (C.int)(flags), (*C.struct_miqt_string)(str_ms), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFontMetricsF) ElidedText4(text string, mode TextElideMode, width float64, flags int) string {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ms *C.struct_miqt_string = C.QFontMetricsF_ElidedText4(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(mode), (C.double)(width), (C.int)(flags))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFontMetricsF) Delete() {
	C.QFontMetricsF_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFontMetricsF) GoGC() {
	runtime.SetFinalizer(this, func(this *QFontMetricsF) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

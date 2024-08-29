package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	ret := C.QFontMetrics_Ascent(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) CapHeight() int {
	ret := C.QFontMetrics_CapHeight(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) Descent() int {
	ret := C.QFontMetrics_Descent(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) Height() int {
	ret := C.QFontMetrics_Height(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) Leading() int {
	ret := C.QFontMetrics_Leading(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) LineSpacing() int {
	ret := C.QFontMetrics_LineSpacing(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) MinLeftBearing() int {
	ret := C.QFontMetrics_MinLeftBearing(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) MinRightBearing() int {
	ret := C.QFontMetrics_MinRightBearing(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) MaxWidth() int {
	ret := C.QFontMetrics_MaxWidth(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) XHeight() int {
	ret := C.QFontMetrics_XHeight(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) AverageCharWidth() int {
	ret := C.QFontMetrics_AverageCharWidth(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) InFont(param1 QChar) bool {
	ret := C.QFontMetrics_InFont(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QFontMetrics) InFontUcs4(ucs4 uint) bool {
	ret := C.QFontMetrics_InFontUcs4(this.h, (C.uint)(ucs4))
	return (bool)(ret)
}

func (this *QFontMetrics) LeftBearing(param1 QChar) int {
	ret := C.QFontMetrics_LeftBearing(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QFontMetrics) RightBearing(param1 QChar) int {
	ret := C.QFontMetrics_RightBearing(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QFontMetrics) Width(param1 string) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QFontMetrics_Width(this.h, param1_Cstring, C.ulong(len(param1)))
	return (int)(ret)
}

func (this *QFontMetrics) Width2(param1 string, lenVal int, flags int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QFontMetrics_Width2(this.h, param1_Cstring, C.ulong(len(param1)), (C.int)(lenVal), (C.int)(flags))
	return (int)(ret)
}

func (this *QFontMetrics) WidthWithQChar(param1 QChar) int {
	ret := C.QFontMetrics_WidthWithQChar(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QFontMetrics) HorizontalAdvance(param1 string) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QFontMetrics_HorizontalAdvance(this.h, param1_Cstring, C.ulong(len(param1)))
	return (int)(ret)
}

func (this *QFontMetrics) HorizontalAdvanceWithQChar(param1 QChar) int {
	ret := C.QFontMetrics_HorizontalAdvanceWithQChar(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QFontMetrics) CharWidth(str string, pos int) int {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QFontMetrics_CharWidth(this.h, str_Cstring, C.ulong(len(str)), (C.int)(pos))
	return (int)(ret)
}

func (this *QFontMetrics) BoundingRect(param1 QChar) *QRect {
	ret := C.QFontMetrics_BoundingRect(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) BoundingRectWithText(text string) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_BoundingRectWithText(this.h, text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) BoundingRect2(r *QRect, flags int, text string) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_BoundingRect2(this.h, r.cPointer(), (C.int)(flags), text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) BoundingRect3(x int, y int, w int, h int, flags int, text string) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_BoundingRect3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) Size(flags int, str string) *QSize {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QFontMetrics_Size(this.h, (C.int)(flags), str_Cstring, C.ulong(len(str)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) TightBoundingRect(text string) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_TightBoundingRect(this.h, text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) ElidedText(text string, mode uintptr, width int) string {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontMetrics_ElidedText(this.h, text_Cstring, C.ulong(len(text)), (C.uintptr_t)(mode), (C.int)(width), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontMetrics) UnderlinePos() int {
	ret := C.QFontMetrics_UnderlinePos(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) OverlinePos() int {
	ret := C.QFontMetrics_OverlinePos(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) StrikeOutPos() int {
	ret := C.QFontMetrics_StrikeOutPos(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) LineWidth() int {
	ret := C.QFontMetrics_LineWidth(this.h)
	return (int)(ret)
}

func (this *QFontMetrics) FontDpi() float64 {
	ret := C.QFontMetrics_FontDpi(this.h)
	return (float64)(ret)
}

func (this *QFontMetrics) OperatorEqual(other *QFontMetrics) bool {
	ret := C.QFontMetrics_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QFontMetrics) OperatorNotEqual(other *QFontMetrics) bool {
	ret := C.QFontMetrics_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QFontMetrics) Width22(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QFontMetrics_Width22(this.h, param1_Cstring, C.ulong(len(param1)), (C.int)(lenVal))
	return (int)(ret)
}

func (this *QFontMetrics) HorizontalAdvance2(param1 string, lenVal int) int {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QFontMetrics_HorizontalAdvance2(this.h, param1_Cstring, C.ulong(len(param1)), (C.int)(lenVal))
	return (int)(ret)
}

func (this *QFontMetrics) BoundingRect4(r *QRect, flags int, text string, tabstops int) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_BoundingRect4(this.h, r.cPointer(), (C.int)(flags), text_Cstring, C.ulong(len(text)), (C.int)(tabstops))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) BoundingRect5(r *QRect, flags int, text string, tabstops int, tabarray *int) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_BoundingRect5(this.h, r.cPointer(), (C.int)(flags), text_Cstring, C.ulong(len(text)), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) BoundingRect7(x int, y int, w int, h int, flags int, text string, tabstops int) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_BoundingRect7(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_Cstring, C.ulong(len(text)), (C.int)(tabstops))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) BoundingRect8(x int, y int, w int, h int, flags int, text string, tabstops int, tabarray *int) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetrics_BoundingRect8(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(flags), text_Cstring, C.ulong(len(text)), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) Size3(flags int, str string, tabstops int) *QSize {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QFontMetrics_Size3(this.h, (C.int)(flags), str_Cstring, C.ulong(len(str)), (C.int)(tabstops))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) Size4(flags int, str string, tabstops int, tabarray *int) *QSize {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QFontMetrics_Size4(this.h, (C.int)(flags), str_Cstring, C.ulong(len(str)), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetrics) ElidedText4(text string, mode uintptr, width int, flags int) string {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontMetrics_ElidedText4(this.h, text_Cstring, C.ulong(len(text)), (C.uintptr_t)(mode), (C.int)(width), (C.int)(flags), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontMetrics) Delete() {
	C.QFontMetrics_Delete(this.h)
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
	ret := C.QFontMetricsF_Ascent(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) CapHeight() float64 {
	ret := C.QFontMetricsF_CapHeight(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) Descent() float64 {
	ret := C.QFontMetricsF_Descent(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) Height() float64 {
	ret := C.QFontMetricsF_Height(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) Leading() float64 {
	ret := C.QFontMetricsF_Leading(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) LineSpacing() float64 {
	ret := C.QFontMetricsF_LineSpacing(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) MinLeftBearing() float64 {
	ret := C.QFontMetricsF_MinLeftBearing(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) MinRightBearing() float64 {
	ret := C.QFontMetricsF_MinRightBearing(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) MaxWidth() float64 {
	ret := C.QFontMetricsF_MaxWidth(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) XHeight() float64 {
	ret := C.QFontMetricsF_XHeight(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) AverageCharWidth() float64 {
	ret := C.QFontMetricsF_AverageCharWidth(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) InFont(param1 QChar) bool {
	ret := C.QFontMetricsF_InFont(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QFontMetricsF) InFontUcs4(ucs4 uint) bool {
	ret := C.QFontMetricsF_InFontUcs4(this.h, (C.uint)(ucs4))
	return (bool)(ret)
}

func (this *QFontMetricsF) LeftBearing(param1 QChar) float64 {
	ret := C.QFontMetricsF_LeftBearing(this.h, param1.cPointer())
	return (float64)(ret)
}

func (this *QFontMetricsF) RightBearing(param1 QChar) float64 {
	ret := C.QFontMetricsF_RightBearing(this.h, param1.cPointer())
	return (float64)(ret)
}

func (this *QFontMetricsF) Width(stringVal string) float64 {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QFontMetricsF_Width(this.h, stringVal_Cstring, C.ulong(len(stringVal)))
	return (float64)(ret)
}

func (this *QFontMetricsF) WidthWithQChar(param1 QChar) float64 {
	ret := C.QFontMetricsF_WidthWithQChar(this.h, param1.cPointer())
	return (float64)(ret)
}

func (this *QFontMetricsF) HorizontalAdvance(stringVal string) float64 {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QFontMetricsF_HorizontalAdvance(this.h, stringVal_Cstring, C.ulong(len(stringVal)))
	return (float64)(ret)
}

func (this *QFontMetricsF) HorizontalAdvanceWithQChar(param1 QChar) float64 {
	ret := C.QFontMetricsF_HorizontalAdvanceWithQChar(this.h, param1.cPointer())
	return (float64)(ret)
}

func (this *QFontMetricsF) BoundingRect(stringVal string) *QRectF {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QFontMetricsF_BoundingRect(this.h, stringVal_Cstring, C.ulong(len(stringVal)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) BoundingRectWithQChar(param1 QChar) *QRectF {
	ret := C.QFontMetricsF_BoundingRectWithQChar(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) BoundingRect2(r *QRectF, flags int, stringVal string) *QRectF {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QFontMetricsF_BoundingRect2(this.h, r.cPointer(), (C.int)(flags), stringVal_Cstring, C.ulong(len(stringVal)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) Size(flags int, str string) *QSizeF {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QFontMetricsF_Size(this.h, (C.int)(flags), str_Cstring, C.ulong(len(str)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) TightBoundingRect(text string) *QRectF {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QFontMetricsF_TightBoundingRect(this.h, text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) ElidedText(text string, mode uintptr, width float64) string {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontMetricsF_ElidedText(this.h, text_Cstring, C.ulong(len(text)), (C.uintptr_t)(mode), (C.double)(width), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontMetricsF) UnderlinePos() float64 {
	ret := C.QFontMetricsF_UnderlinePos(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) OverlinePos() float64 {
	ret := C.QFontMetricsF_OverlinePos(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) StrikeOutPos() float64 {
	ret := C.QFontMetricsF_StrikeOutPos(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) LineWidth() float64 {
	ret := C.QFontMetricsF_LineWidth(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) FontDpi() float64 {
	ret := C.QFontMetricsF_FontDpi(this.h)
	return (float64)(ret)
}

func (this *QFontMetricsF) OperatorEqual(other *QFontMetricsF) bool {
	ret := C.QFontMetricsF_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QFontMetricsF) OperatorNotEqual(other *QFontMetricsF) bool {
	ret := C.QFontMetricsF_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QFontMetricsF) HorizontalAdvance2(stringVal string, length int) float64 {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QFontMetricsF_HorizontalAdvance2(this.h, stringVal_Cstring, C.ulong(len(stringVal)), (C.int)(length))
	return (float64)(ret)
}

func (this *QFontMetricsF) BoundingRect4(r *QRectF, flags int, stringVal string, tabstops int) *QRectF {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QFontMetricsF_BoundingRect4(this.h, r.cPointer(), (C.int)(flags), stringVal_Cstring, C.ulong(len(stringVal)), (C.int)(tabstops))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) BoundingRect5(r *QRectF, flags int, stringVal string, tabstops int, tabarray *int) *QRectF {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	ret := C.QFontMetricsF_BoundingRect5(this.h, r.cPointer(), (C.int)(flags), stringVal_Cstring, C.ulong(len(stringVal)), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) Size3(flags int, str string, tabstops int) *QSizeF {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QFontMetricsF_Size3(this.h, (C.int)(flags), str_Cstring, C.ulong(len(str)), (C.int)(tabstops))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) Size4(flags int, str string, tabstops int, tabarray *int) *QSizeF {
	str_Cstring := C.CString(str)
	defer C.free(unsafe.Pointer(str_Cstring))
	ret := C.QFontMetricsF_Size4(this.h, (C.int)(flags), str_Cstring, C.ulong(len(str)), (C.int)(tabstops), (*C.int)(unsafe.Pointer(tabarray)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFontMetricsF) ElidedText4(text string, mode uintptr, width float64, flags int) string {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFontMetricsF_ElidedText4(this.h, text_Cstring, C.ulong(len(text)), (C.uintptr_t)(mode), (C.double)(width), (C.int)(flags), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFontMetricsF) Delete() {
	C.QFontMetricsF_Delete(this.h)
}

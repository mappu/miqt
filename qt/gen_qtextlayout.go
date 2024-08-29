package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtextlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextInlineObject struct {
	h *C.QTextInlineObject
}

func (this *QTextInlineObject) cPointer() *C.QTextInlineObject {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextInlineObject(h *C.QTextInlineObject) *QTextInlineObject {
	return &QTextInlineObject{h: h}
}

func newQTextInlineObject_U(h unsafe.Pointer) *QTextInlineObject {
	return newQTextInlineObject((*C.QTextInlineObject)(h))
}

// NewQTextInlineObject constructs a new QTextInlineObject object.
func NewQTextInlineObject() *QTextInlineObject {
	ret := C.QTextInlineObject_new()
	return newQTextInlineObject(ret)
}

func (this *QTextInlineObject) IsValid() bool {
	ret := C.QTextInlineObject_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextInlineObject) Rect() *QRectF {
	ret := C.QTextInlineObject_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextInlineObject) Width() float64 {
	ret := C.QTextInlineObject_Width(this.h)
	return (float64)(ret)
}

func (this *QTextInlineObject) Ascent() float64 {
	ret := C.QTextInlineObject_Ascent(this.h)
	return (float64)(ret)
}

func (this *QTextInlineObject) Descent() float64 {
	ret := C.QTextInlineObject_Descent(this.h)
	return (float64)(ret)
}

func (this *QTextInlineObject) Height() float64 {
	ret := C.QTextInlineObject_Height(this.h)
	return (float64)(ret)
}

func (this *QTextInlineObject) TextDirection() uintptr {
	ret := C.QTextInlineObject_TextDirection(this.h)
	return (uintptr)(ret)
}

func (this *QTextInlineObject) SetWidth(w float64) {
	C.QTextInlineObject_SetWidth(this.h, (C.double)(w))
}

func (this *QTextInlineObject) SetAscent(a float64) {
	C.QTextInlineObject_SetAscent(this.h, (C.double)(a))
}

func (this *QTextInlineObject) SetDescent(d float64) {
	C.QTextInlineObject_SetDescent(this.h, (C.double)(d))
}

func (this *QTextInlineObject) TextPosition() int {
	ret := C.QTextInlineObject_TextPosition(this.h)
	return (int)(ret)
}

func (this *QTextInlineObject) FormatIndex() int {
	ret := C.QTextInlineObject_FormatIndex(this.h)
	return (int)(ret)
}

func (this *QTextInlineObject) Format() *QTextFormat {
	ret := C.QTextInlineObject_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextInlineObject) Delete() {
	C.QTextInlineObject_Delete(this.h)
}

type QTextLayout struct {
	h *C.QTextLayout
}

func (this *QTextLayout) cPointer() *C.QTextLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextLayout(h *C.QTextLayout) *QTextLayout {
	return &QTextLayout{h: h}
}

func newQTextLayout_U(h unsafe.Pointer) *QTextLayout {
	return newQTextLayout((*C.QTextLayout)(h))
}

// NewQTextLayout constructs a new QTextLayout object.
func NewQTextLayout() *QTextLayout {
	ret := C.QTextLayout_new()
	return newQTextLayout(ret)
}

// NewQTextLayout2 constructs a new QTextLayout object.
func NewQTextLayout2(text string) *QTextLayout {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTextLayout_new2(text_Cstring, C.ulong(len(text)))
	return newQTextLayout(ret)
}

// NewQTextLayout3 constructs a new QTextLayout object.
func NewQTextLayout3(text string, font *QFont) *QTextLayout {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTextLayout_new3(text_Cstring, C.ulong(len(text)), font.cPointer())
	return newQTextLayout(ret)
}

// NewQTextLayout4 constructs a new QTextLayout object.
func NewQTextLayout4(b *QTextBlock) *QTextLayout {
	ret := C.QTextLayout_new4(b.cPointer())
	return newQTextLayout(ret)
}

// NewQTextLayout5 constructs a new QTextLayout object.
func NewQTextLayout5(text string, font *QFont, paintdevice *QPaintDevice) *QTextLayout {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTextLayout_new5(text_Cstring, C.ulong(len(text)), font.cPointer(), paintdevice.cPointer())
	return newQTextLayout(ret)
}

func (this *QTextLayout) SetFont(f *QFont) {
	C.QTextLayout_SetFont(this.h, f.cPointer())
}

func (this *QTextLayout) Font() *QFont {
	ret := C.QTextLayout_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLayout) SetRawFont(rawFont *QRawFont) {
	C.QTextLayout_SetRawFont(this.h, rawFont.cPointer())
}

func (this *QTextLayout) SetText(stringVal string) {
	stringVal_Cstring := C.CString(stringVal)
	defer C.free(unsafe.Pointer(stringVal_Cstring))
	C.QTextLayout_SetText(this.h, stringVal_Cstring, C.ulong(len(stringVal)))
}

func (this *QTextLayout) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextLayout_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLayout) SetTextOption(option *QTextOption) {
	C.QTextLayout_SetTextOption(this.h, option.cPointer())
}

func (this *QTextLayout) TextOption() *QTextOption {
	ret := C.QTextLayout_TextOption(this.h)
	return newQTextOption_U(unsafe.Pointer(ret))
}

func (this *QTextLayout) SetPreeditArea(position int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextLayout_SetPreeditArea(this.h, (C.int)(position), text_Cstring, C.ulong(len(text)))
}

func (this *QTextLayout) PreeditAreaPosition() int {
	ret := C.QTextLayout_PreeditAreaPosition(this.h)
	return (int)(ret)
}

func (this *QTextLayout) PreeditAreaText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextLayout_PreeditAreaText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLayout) SetAdditionalFormats(overrides []QTextLayout__FormatRange) {
	// For the C ABI, malloc a C array of raw pointers
	overrides_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.ulong(8 * len(overrides))))
	defer C.free(unsafe.Pointer(overrides_CArray))
	for i := range overrides {
		overrides_CArray[i] = overrides[i].cPointer()
	}
	C.QTextLayout_SetAdditionalFormats(this.h, &overrides_CArray[0], C.ulong(len(overrides)))
}

func (this *QTextLayout) AdditionalFormats() []QTextLayout__FormatRange {
	var _out **C.QTextLayout__FormatRange = nil
	var _out_len C.size_t = 0
	C.QTextLayout_AdditionalFormats(this.h, &_out, &_out_len)
	ret := make([]QTextLayout__FormatRange, int(_out_len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextLayout__FormatRange(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLayout) ClearAdditionalFormats() {
	C.QTextLayout_ClearAdditionalFormats(this.h)
}

func (this *QTextLayout) SetFormats(overrides []QTextLayout__FormatRange) {
	// For the C ABI, malloc a C array of raw pointers
	overrides_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.ulong(8 * len(overrides))))
	defer C.free(unsafe.Pointer(overrides_CArray))
	for i := range overrides {
		overrides_CArray[i] = overrides[i].cPointer()
	}
	C.QTextLayout_SetFormats(this.h, &overrides_CArray[0], C.ulong(len(overrides)))
}

func (this *QTextLayout) Formats() []QTextLayout__FormatRange {
	var _out **C.QTextLayout__FormatRange = nil
	var _out_len C.size_t = 0
	C.QTextLayout_Formats(this.h, &_out, &_out_len)
	ret := make([]QTextLayout__FormatRange, int(_out_len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextLayout__FormatRange(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLayout) ClearFormats() {
	C.QTextLayout_ClearFormats(this.h)
}

func (this *QTextLayout) SetCacheEnabled(enable bool) {
	C.QTextLayout_SetCacheEnabled(this.h, (C.bool)(enable))
}

func (this *QTextLayout) CacheEnabled() bool {
	ret := C.QTextLayout_CacheEnabled(this.h)
	return (bool)(ret)
}

func (this *QTextLayout) SetCursorMoveStyle(style uintptr) {
	C.QTextLayout_SetCursorMoveStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextLayout) CursorMoveStyle() uintptr {
	ret := C.QTextLayout_CursorMoveStyle(this.h)
	return (uintptr)(ret)
}

func (this *QTextLayout) BeginLayout() {
	C.QTextLayout_BeginLayout(this.h)
}

func (this *QTextLayout) EndLayout() {
	C.QTextLayout_EndLayout(this.h)
}

func (this *QTextLayout) ClearLayout() {
	C.QTextLayout_ClearLayout(this.h)
}

func (this *QTextLayout) CreateLine() *QTextLine {
	ret := C.QTextLayout_CreateLine(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLayout) LineCount() int {
	ret := C.QTextLayout_LineCount(this.h)
	return (int)(ret)
}

func (this *QTextLayout) LineAt(i int) *QTextLine {
	ret := C.QTextLayout_LineAt(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLayout) LineForTextPosition(pos int) *QTextLine {
	ret := C.QTextLayout_LineForTextPosition(this.h, (C.int)(pos))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextLine(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextLine) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLayout) IsValidCursorPosition(pos int) bool {
	ret := C.QTextLayout_IsValidCursorPosition(this.h, (C.int)(pos))
	return (bool)(ret)
}

func (this *QTextLayout) NextCursorPosition(oldPos int) int {
	ret := C.QTextLayout_NextCursorPosition(this.h, (C.int)(oldPos))
	return (int)(ret)
}

func (this *QTextLayout) PreviousCursorPosition(oldPos int) int {
	ret := C.QTextLayout_PreviousCursorPosition(this.h, (C.int)(oldPos))
	return (int)(ret)
}

func (this *QTextLayout) LeftCursorPosition(oldPos int) int {
	ret := C.QTextLayout_LeftCursorPosition(this.h, (C.int)(oldPos))
	return (int)(ret)
}

func (this *QTextLayout) RightCursorPosition(oldPos int) int {
	ret := C.QTextLayout_RightCursorPosition(this.h, (C.int)(oldPos))
	return (int)(ret)
}

func (this *QTextLayout) Draw(p *QPainter, pos *QPointF) {
	C.QTextLayout_Draw(this.h, p.cPointer(), pos.cPointer())
}

func (this *QTextLayout) DrawCursor(p *QPainter, pos *QPointF, cursorPosition int) {
	C.QTextLayout_DrawCursor(this.h, p.cPointer(), pos.cPointer(), (C.int)(cursorPosition))
}

func (this *QTextLayout) DrawCursor2(p *QPainter, pos *QPointF, cursorPosition int, width int) {
	C.QTextLayout_DrawCursor2(this.h, p.cPointer(), pos.cPointer(), (C.int)(cursorPosition), (C.int)(width))
}

func (this *QTextLayout) Position() *QPointF {
	ret := C.QTextLayout_Position(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLayout) SetPosition(p *QPointF) {
	C.QTextLayout_SetPosition(this.h, p.cPointer())
}

func (this *QTextLayout) BoundingRect() *QRectF {
	ret := C.QTextLayout_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLayout) MinimumWidth() float64 {
	ret := C.QTextLayout_MinimumWidth(this.h)
	return (float64)(ret)
}

func (this *QTextLayout) MaximumWidth() float64 {
	ret := C.QTextLayout_MaximumWidth(this.h)
	return (float64)(ret)
}

func (this *QTextLayout) GlyphRuns() []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextLayout_GlyphRuns(this.h, &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLayout) SetFlags(flags int) {
	C.QTextLayout_SetFlags(this.h, (C.int)(flags))
}

func (this *QTextLayout) NextCursorPosition2(oldPos int, mode uintptr) int {
	ret := C.QTextLayout_NextCursorPosition2(this.h, (C.int)(oldPos), (C.uintptr_t)(mode))
	return (int)(ret)
}

func (this *QTextLayout) PreviousCursorPosition2(oldPos int, mode uintptr) int {
	ret := C.QTextLayout_PreviousCursorPosition2(this.h, (C.int)(oldPos), (C.uintptr_t)(mode))
	return (int)(ret)
}

func (this *QTextLayout) Draw3(p *QPainter, pos *QPointF, selections []QTextLayout__FormatRange) {
	// For the C ABI, malloc a C array of raw pointers
	selections_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.ulong(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	C.QTextLayout_Draw3(this.h, p.cPointer(), pos.cPointer(), &selections_CArray[0], C.ulong(len(selections)))
}

func (this *QTextLayout) Draw4(p *QPainter, pos *QPointF, selections []QTextLayout__FormatRange, clip *QRectF) {
	// For the C ABI, malloc a C array of raw pointers
	selections_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.ulong(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	C.QTextLayout_Draw4(this.h, p.cPointer(), pos.cPointer(), &selections_CArray[0], C.ulong(len(selections)), clip.cPointer())
}

func (this *QTextLayout) GlyphRuns1(from int) []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextLayout_GlyphRuns1(this.h, (C.int)(from), &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLayout) GlyphRuns2(from int, length int) []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextLayout_GlyphRuns2(this.h, (C.int)(from), (C.int)(length), &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLayout) Delete() {
	C.QTextLayout_Delete(this.h)
}

type QTextLine struct {
	h *C.QTextLine
}

func (this *QTextLine) cPointer() *C.QTextLine {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextLine(h *C.QTextLine) *QTextLine {
	return &QTextLine{h: h}
}

func newQTextLine_U(h unsafe.Pointer) *QTextLine {
	return newQTextLine((*C.QTextLine)(h))
}

// NewQTextLine constructs a new QTextLine object.
func NewQTextLine() *QTextLine {
	ret := C.QTextLine_new()
	return newQTextLine(ret)
}

func (this *QTextLine) IsValid() bool {
	ret := C.QTextLine_IsValid(this.h)
	return (bool)(ret)
}

func (this *QTextLine) Rect() *QRectF {
	ret := C.QTextLine_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLine) X() float64 {
	ret := C.QTextLine_X(this.h)
	return (float64)(ret)
}

func (this *QTextLine) Y() float64 {
	ret := C.QTextLine_Y(this.h)
	return (float64)(ret)
}

func (this *QTextLine) Width() float64 {
	ret := C.QTextLine_Width(this.h)
	return (float64)(ret)
}

func (this *QTextLine) Ascent() float64 {
	ret := C.QTextLine_Ascent(this.h)
	return (float64)(ret)
}

func (this *QTextLine) Descent() float64 {
	ret := C.QTextLine_Descent(this.h)
	return (float64)(ret)
}

func (this *QTextLine) Height() float64 {
	ret := C.QTextLine_Height(this.h)
	return (float64)(ret)
}

func (this *QTextLine) Leading() float64 {
	ret := C.QTextLine_Leading(this.h)
	return (float64)(ret)
}

func (this *QTextLine) SetLeadingIncluded(included bool) {
	C.QTextLine_SetLeadingIncluded(this.h, (C.bool)(included))
}

func (this *QTextLine) LeadingIncluded() bool {
	ret := C.QTextLine_LeadingIncluded(this.h)
	return (bool)(ret)
}

func (this *QTextLine) NaturalTextWidth() float64 {
	ret := C.QTextLine_NaturalTextWidth(this.h)
	return (float64)(ret)
}

func (this *QTextLine) HorizontalAdvance() float64 {
	ret := C.QTextLine_HorizontalAdvance(this.h)
	return (float64)(ret)
}

func (this *QTextLine) NaturalTextRect() *QRectF {
	ret := C.QTextLine_NaturalTextRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLine) CursorToX(cursorPos *int) float64 {
	ret := C.QTextLine_CursorToX(this.h, (*C.int)(unsafe.Pointer(cursorPos)))
	return (float64)(ret)
}

func (this *QTextLine) CursorToXWithCursorPos(cursorPos int) float64 {
	ret := C.QTextLine_CursorToXWithCursorPos(this.h, (C.int)(cursorPos))
	return (float64)(ret)
}

func (this *QTextLine) XToCursor(x float64) int {
	ret := C.QTextLine_XToCursor(this.h, (C.double)(x))
	return (int)(ret)
}

func (this *QTextLine) SetLineWidth(width float64) {
	C.QTextLine_SetLineWidth(this.h, (C.double)(width))
}

func (this *QTextLine) SetNumColumns(columns int) {
	C.QTextLine_SetNumColumns(this.h, (C.int)(columns))
}

func (this *QTextLine) SetNumColumns2(columns int, alignmentWidth float64) {
	C.QTextLine_SetNumColumns2(this.h, (C.int)(columns), (C.double)(alignmentWidth))
}

func (this *QTextLine) SetPosition(pos *QPointF) {
	C.QTextLine_SetPosition(this.h, pos.cPointer())
}

func (this *QTextLine) Position() *QPointF {
	ret := C.QTextLine_Position(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextLine) TextStart() int {
	ret := C.QTextLine_TextStart(this.h)
	return (int)(ret)
}

func (this *QTextLine) TextLength() int {
	ret := C.QTextLine_TextLength(this.h)
	return (int)(ret)
}

func (this *QTextLine) LineNumber() int {
	ret := C.QTextLine_LineNumber(this.h)
	return (int)(ret)
}

func (this *QTextLine) Draw(p *QPainter, point *QPointF) {
	C.QTextLine_Draw(this.h, p.cPointer(), point.cPointer())
}

func (this *QTextLine) GlyphRuns() []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextLine_GlyphRuns(this.h, &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLine) CursorToX2(cursorPos *int, edge uintptr) float64 {
	ret := C.QTextLine_CursorToX2(this.h, (*C.int)(unsafe.Pointer(cursorPos)), (C.uintptr_t)(edge))
	return (float64)(ret)
}

func (this *QTextLine) CursorToX22(cursorPos int, edge uintptr) float64 {
	ret := C.QTextLine_CursorToX22(this.h, (C.int)(cursorPos), (C.uintptr_t)(edge))
	return (float64)(ret)
}

func (this *QTextLine) XToCursor2(x float64, param2 uintptr) int {
	ret := C.QTextLine_XToCursor2(this.h, (C.double)(x), (C.uintptr_t)(param2))
	return (int)(ret)
}

func (this *QTextLine) Draw3(p *QPainter, point *QPointF, selection *QTextLayout__FormatRange) {
	C.QTextLine_Draw3(this.h, p.cPointer(), point.cPointer(), selection.cPointer())
}

func (this *QTextLine) GlyphRuns1(from int) []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextLine_GlyphRuns1(this.h, (C.int)(from), &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLine) GlyphRuns2(from int, length int) []QGlyphRun {
	var _out **C.QGlyphRun = nil
	var _out_len C.size_t = 0
	C.QTextLine_GlyphRuns2(this.h, (C.int)(from), (C.int)(length), &_out, &_out_len)
	ret := make([]QGlyphRun, int(_out_len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQGlyphRun(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextLine) Delete() {
	C.QTextLine_Delete(this.h)
}

type QTextLayout__FormatRange struct {
	h *C.QTextLayout__FormatRange
}

func (this *QTextLayout__FormatRange) cPointer() *C.QTextLayout__FormatRange {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextLayout__FormatRange(h *C.QTextLayout__FormatRange) *QTextLayout__FormatRange {
	return &QTextLayout__FormatRange{h: h}
}

func newQTextLayout__FormatRange_U(h unsafe.Pointer) *QTextLayout__FormatRange {
	return newQTextLayout__FormatRange((*C.QTextLayout__FormatRange)(h))
}

func (this *QTextLayout__FormatRange) Delete() {
	C.QTextLayout__FormatRange_Delete(this.h)
}

package qt

/*

#include "gen_qtextlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextLayout__CursorMode int

const (
	QTextLayout__SkipCharacters QTextLayout__CursorMode = 0
	QTextLayout__SkipWords      QTextLayout__CursorMode = 1
)

type QTextLine__Edge int

const (
	QTextLine__Leading  QTextLine__Edge = 0
	QTextLine__Trailing QTextLine__Edge = 1
)

type QTextLine__CursorPosition int

const (
	QTextLine__CursorBetweenCharacters QTextLine__CursorPosition = 0
	QTextLine__CursorOnCharacter       QTextLine__CursorPosition = 1
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

func (this *QTextInlineObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextInlineObject constructs the type using only CGO pointers.
func newQTextInlineObject(h *C.QTextInlineObject) *QTextInlineObject {
	if h == nil {
		return nil
	}

	return &QTextInlineObject{h: h}
}

// UnsafeNewQTextInlineObject constructs the type using only unsafe pointers.
func UnsafeNewQTextInlineObject(h unsafe.Pointer) *QTextInlineObject {
	return newQTextInlineObject((*C.QTextInlineObject)(h))
}

// NewQTextInlineObject constructs a new QTextInlineObject object.
func NewQTextInlineObject() *QTextInlineObject {

	return newQTextInlineObject(C.QTextInlineObject_new())
}

func (this *QTextInlineObject) IsValid() bool {
	return (bool)(C.QTextInlineObject_isValid(this.h))
}

func (this *QTextInlineObject) Rect() *QRectF {
	_goptr := newQRectF(C.QTextInlineObject_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextInlineObject) Width() float64 {
	return (float64)(C.QTextInlineObject_width(this.h))
}

func (this *QTextInlineObject) Ascent() float64 {
	return (float64)(C.QTextInlineObject_ascent(this.h))
}

func (this *QTextInlineObject) Descent() float64 {
	return (float64)(C.QTextInlineObject_descent(this.h))
}

func (this *QTextInlineObject) Height() float64 {
	return (float64)(C.QTextInlineObject_height(this.h))
}

func (this *QTextInlineObject) TextDirection() LayoutDirection {
	return (LayoutDirection)(C.QTextInlineObject_textDirection(this.h))
}

func (this *QTextInlineObject) SetWidth(w float64) {
	C.QTextInlineObject_setWidth(this.h, (C.double)(w))
}

func (this *QTextInlineObject) SetAscent(a float64) {
	C.QTextInlineObject_setAscent(this.h, (C.double)(a))
}

func (this *QTextInlineObject) SetDescent(d float64) {
	C.QTextInlineObject_setDescent(this.h, (C.double)(d))
}

func (this *QTextInlineObject) TextPosition() int {
	return (int)(C.QTextInlineObject_textPosition(this.h))
}

func (this *QTextInlineObject) FormatIndex() int {
	return (int)(C.QTextInlineObject_formatIndex(this.h))
}

func (this *QTextInlineObject) Format() *QTextFormat {
	_goptr := newQTextFormat(C.QTextInlineObject_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextInlineObject) Delete() {
	C.QTextInlineObject_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextInlineObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextInlineObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QTextLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextLayout constructs the type using only CGO pointers.
func newQTextLayout(h *C.QTextLayout) *QTextLayout {
	if h == nil {
		return nil
	}

	return &QTextLayout{h: h}
}

// UnsafeNewQTextLayout constructs the type using only unsafe pointers.
func UnsafeNewQTextLayout(h unsafe.Pointer) *QTextLayout {
	return newQTextLayout((*C.QTextLayout)(h))
}

// NewQTextLayout constructs a new QTextLayout object.
func NewQTextLayout() *QTextLayout {

	return newQTextLayout(C.QTextLayout_new())
}

// NewQTextLayout2 constructs a new QTextLayout object.
func NewQTextLayout2(text string) *QTextLayout {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTextLayout(C.QTextLayout_new2(text_ms))
}

// NewQTextLayout3 constructs a new QTextLayout object.
func NewQTextLayout3(text string, font *QFont) *QTextLayout {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTextLayout(C.QTextLayout_new3(text_ms, font.cPointer()))
}

// NewQTextLayout4 constructs a new QTextLayout object.
func NewQTextLayout4(b *QTextBlock) *QTextLayout {

	return newQTextLayout(C.QTextLayout_new4(b.cPointer()))
}

// NewQTextLayout5 constructs a new QTextLayout object.
func NewQTextLayout5(text string, font *QFont, paintdevice *QPaintDevice) *QTextLayout {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTextLayout(C.QTextLayout_new5(text_ms, font.cPointer(), paintdevice.cPointer()))
}

func (this *QTextLayout) SetFont(f *QFont) {
	C.QTextLayout_setFont(this.h, f.cPointer())
}

func (this *QTextLayout) Font() *QFont {
	_goptr := newQFont(C.QTextLayout_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) SetRawFont(rawFont *QRawFont) {
	C.QTextLayout_setRawFont(this.h, rawFont.cPointer())
}

func (this *QTextLayout) SetText(stringVal string) {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	C.QTextLayout_setText(this.h, stringVal_ms)
}

func (this *QTextLayout) Text() string {
	var _ms C.struct_miqt_string = C.QTextLayout_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextLayout) SetTextOption(option *QTextOption) {
	C.QTextLayout_setTextOption(this.h, option.cPointer())
}

func (this *QTextLayout) TextOption() *QTextOption {
	return newQTextOption(C.QTextLayout_textOption(this.h))
}

func (this *QTextLayout) SetPreeditArea(position int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextLayout_setPreeditArea(this.h, (C.int)(position), text_ms)
}

func (this *QTextLayout) PreeditAreaPosition() int {
	return (int)(C.QTextLayout_preeditAreaPosition(this.h))
}

func (this *QTextLayout) PreeditAreaText() string {
	var _ms C.struct_miqt_string = C.QTextLayout_preeditAreaText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextLayout) SetAdditionalFormats(overrides []QTextLayout__FormatRange) {
	overrides_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(overrides))))
	defer C.free(unsafe.Pointer(overrides_CArray))
	for i := range overrides {
		overrides_CArray[i] = overrides[i].cPointer()
	}
	overrides_ma := C.struct_miqt_array{len: C.size_t(len(overrides)), data: unsafe.Pointer(overrides_CArray)}
	C.QTextLayout_setAdditionalFormats(this.h, overrides_ma)
}

func (this *QTextLayout) AdditionalFormats() []QTextLayout__FormatRange {
	var _ma C.struct_miqt_array = C.QTextLayout_additionalFormats(this.h)
	_ret := make([]QTextLayout__FormatRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTextLayout__FormatRange(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextLayout) ClearAdditionalFormats() {
	C.QTextLayout_clearAdditionalFormats(this.h)
}

func (this *QTextLayout) SetFormats(overrides []QTextLayout__FormatRange) {
	overrides_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(overrides))))
	defer C.free(unsafe.Pointer(overrides_CArray))
	for i := range overrides {
		overrides_CArray[i] = overrides[i].cPointer()
	}
	overrides_ma := C.struct_miqt_array{len: C.size_t(len(overrides)), data: unsafe.Pointer(overrides_CArray)}
	C.QTextLayout_setFormats(this.h, overrides_ma)
}

func (this *QTextLayout) Formats() []QTextLayout__FormatRange {
	var _ma C.struct_miqt_array = C.QTextLayout_formats(this.h)
	_ret := make([]QTextLayout__FormatRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQTextLayout__FormatRange(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QTextLayout) ClearFormats() {
	C.QTextLayout_clearFormats(this.h)
}

func (this *QTextLayout) SetCacheEnabled(enable bool) {
	C.QTextLayout_setCacheEnabled(this.h, (C.bool)(enable))
}

func (this *QTextLayout) CacheEnabled() bool {
	return (bool)(C.QTextLayout_cacheEnabled(this.h))
}

func (this *QTextLayout) SetCursorMoveStyle(style CursorMoveStyle) {
	C.QTextLayout_setCursorMoveStyle(this.h, (C.int)(style))
}

func (this *QTextLayout) CursorMoveStyle() CursorMoveStyle {
	return (CursorMoveStyle)(C.QTextLayout_cursorMoveStyle(this.h))
}

func (this *QTextLayout) BeginLayout() {
	C.QTextLayout_beginLayout(this.h)
}

func (this *QTextLayout) EndLayout() {
	C.QTextLayout_endLayout(this.h)
}

func (this *QTextLayout) ClearLayout() {
	C.QTextLayout_clearLayout(this.h)
}

func (this *QTextLayout) CreateLine() *QTextLine {
	_goptr := newQTextLine(C.QTextLayout_createLine(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) LineCount() int {
	return (int)(C.QTextLayout_lineCount(this.h))
}

func (this *QTextLayout) LineAt(i int) *QTextLine {
	_goptr := newQTextLine(C.QTextLayout_lineAt(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) LineForTextPosition(pos int) *QTextLine {
	_goptr := newQTextLine(C.QTextLayout_lineForTextPosition(this.h, (C.int)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) IsValidCursorPosition(pos int) bool {
	return (bool)(C.QTextLayout_isValidCursorPosition(this.h, (C.int)(pos)))
}

func (this *QTextLayout) NextCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_nextCursorPosition(this.h, (C.int)(oldPos)))
}

func (this *QTextLayout) PreviousCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_previousCursorPosition(this.h, (C.int)(oldPos)))
}

func (this *QTextLayout) LeftCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_leftCursorPosition(this.h, (C.int)(oldPos)))
}

func (this *QTextLayout) RightCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_rightCursorPosition(this.h, (C.int)(oldPos)))
}

func (this *QTextLayout) Draw(p *QPainter, pos *QPointF) {
	C.QTextLayout_draw(this.h, p.cPointer(), pos.cPointer())
}

func (this *QTextLayout) DrawCursor(p *QPainter, pos *QPointF, cursorPosition int) {
	C.QTextLayout_drawCursor(this.h, p.cPointer(), pos.cPointer(), (C.int)(cursorPosition))
}

func (this *QTextLayout) DrawCursor2(p *QPainter, pos *QPointF, cursorPosition int, width int) {
	C.QTextLayout_drawCursor2(this.h, p.cPointer(), pos.cPointer(), (C.int)(cursorPosition), (C.int)(width))
}

func (this *QTextLayout) Position() *QPointF {
	_goptr := newQPointF(C.QTextLayout_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) SetPosition(p *QPointF) {
	C.QTextLayout_setPosition(this.h, p.cPointer())
}

func (this *QTextLayout) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QTextLayout_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) MinimumWidth() float64 {
	return (float64)(C.QTextLayout_minimumWidth(this.h))
}

func (this *QTextLayout) MaximumWidth() float64 {
	return (float64)(C.QTextLayout_maximumWidth(this.h))
}

func (this *QTextLayout) GlyphRuns() []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextLayout_glyphRuns(this.h)
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextLayout) SetFlags(flags int) {
	C.QTextLayout_setFlags(this.h, (C.int)(flags))
}

func (this *QTextLayout) NextCursorPosition2(oldPos int, mode QTextLayout__CursorMode) int {
	return (int)(C.QTextLayout_nextCursorPosition2(this.h, (C.int)(oldPos), (C.int)(mode)))
}

func (this *QTextLayout) PreviousCursorPosition2(oldPos int, mode QTextLayout__CursorMode) int {
	return (int)(C.QTextLayout_previousCursorPosition2(this.h, (C.int)(oldPos), (C.int)(mode)))
}

func (this *QTextLayout) Draw2(p *QPainter, pos *QPointF, selections []QTextLayout__FormatRange) {
	selections_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	C.QTextLayout_draw2(this.h, p.cPointer(), pos.cPointer(), selections_ma)
}

func (this *QTextLayout) Draw3(p *QPainter, pos *QPointF, selections []QTextLayout__FormatRange, clip *QRectF) {
	selections_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	C.QTextLayout_draw3(this.h, p.cPointer(), pos.cPointer(), selections_ma, clip.cPointer())
}

func (this *QTextLayout) GlyphRunsWithFrom(from int) []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextLayout_glyphRunsWithFrom(this.h, (C.int)(from))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextLayout) GlyphRuns2(from int, length int) []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextLayout_glyphRuns2(this.h, (C.int)(from), (C.int)(length))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextLayout) Delete() {
	C.QTextLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QTextLine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextLine constructs the type using only CGO pointers.
func newQTextLine(h *C.QTextLine) *QTextLine {
	if h == nil {
		return nil
	}

	return &QTextLine{h: h}
}

// UnsafeNewQTextLine constructs the type using only unsafe pointers.
func UnsafeNewQTextLine(h unsafe.Pointer) *QTextLine {
	return newQTextLine((*C.QTextLine)(h))
}

// NewQTextLine constructs a new QTextLine object.
func NewQTextLine() *QTextLine {

	return newQTextLine(C.QTextLine_new())
}

func (this *QTextLine) IsValid() bool {
	return (bool)(C.QTextLine_isValid(this.h))
}

func (this *QTextLine) Rect() *QRectF {
	_goptr := newQRectF(C.QTextLine_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLine) X() float64 {
	return (float64)(C.QTextLine_x(this.h))
}

func (this *QTextLine) Y() float64 {
	return (float64)(C.QTextLine_y(this.h))
}

func (this *QTextLine) Width() float64 {
	return (float64)(C.QTextLine_width(this.h))
}

func (this *QTextLine) Ascent() float64 {
	return (float64)(C.QTextLine_ascent(this.h))
}

func (this *QTextLine) Descent() float64 {
	return (float64)(C.QTextLine_descent(this.h))
}

func (this *QTextLine) Height() float64 {
	return (float64)(C.QTextLine_height(this.h))
}

func (this *QTextLine) Leading() float64 {
	return (float64)(C.QTextLine_leading(this.h))
}

func (this *QTextLine) SetLeadingIncluded(included bool) {
	C.QTextLine_setLeadingIncluded(this.h, (C.bool)(included))
}

func (this *QTextLine) LeadingIncluded() bool {
	return (bool)(C.QTextLine_leadingIncluded(this.h))
}

func (this *QTextLine) NaturalTextWidth() float64 {
	return (float64)(C.QTextLine_naturalTextWidth(this.h))
}

func (this *QTextLine) HorizontalAdvance() float64 {
	return (float64)(C.QTextLine_horizontalAdvance(this.h))
}

func (this *QTextLine) NaturalTextRect() *QRectF {
	_goptr := newQRectF(C.QTextLine_naturalTextRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLine) CursorToX(cursorPos *int) float64 {
	return (float64)(C.QTextLine_cursorToX(this.h, (*C.int)(unsafe.Pointer(cursorPos))))
}

func (this *QTextLine) CursorToXWithCursorPos(cursorPos int) float64 {
	return (float64)(C.QTextLine_cursorToXWithCursorPos(this.h, (C.int)(cursorPos)))
}

func (this *QTextLine) XToCursor(x float64) int {
	return (int)(C.QTextLine_xToCursor(this.h, (C.double)(x)))
}

func (this *QTextLine) SetLineWidth(width float64) {
	C.QTextLine_setLineWidth(this.h, (C.double)(width))
}

func (this *QTextLine) SetNumColumns(columns int) {
	C.QTextLine_setNumColumns(this.h, (C.int)(columns))
}

func (this *QTextLine) SetNumColumns2(columns int, alignmentWidth float64) {
	C.QTextLine_setNumColumns2(this.h, (C.int)(columns), (C.double)(alignmentWidth))
}

func (this *QTextLine) SetPosition(pos *QPointF) {
	C.QTextLine_setPosition(this.h, pos.cPointer())
}

func (this *QTextLine) Position() *QPointF {
	_goptr := newQPointF(C.QTextLine_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLine) TextStart() int {
	return (int)(C.QTextLine_textStart(this.h))
}

func (this *QTextLine) TextLength() int {
	return (int)(C.QTextLine_textLength(this.h))
}

func (this *QTextLine) LineNumber() int {
	return (int)(C.QTextLine_lineNumber(this.h))
}

func (this *QTextLine) Draw(p *QPainter, point *QPointF) {
	C.QTextLine_draw(this.h, p.cPointer(), point.cPointer())
}

func (this *QTextLine) GlyphRuns() []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextLine_glyphRuns(this.h)
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextLine) CursorToX2(cursorPos *int, edge QTextLine__Edge) float64 {
	return (float64)(C.QTextLine_cursorToX2(this.h, (*C.int)(unsafe.Pointer(cursorPos)), (C.int)(edge)))
}

func (this *QTextLine) CursorToX3(cursorPos int, edge QTextLine__Edge) float64 {
	return (float64)(C.QTextLine_cursorToX3(this.h, (C.int)(cursorPos), (C.int)(edge)))
}

func (this *QTextLine) XToCursor2(x float64, param2 QTextLine__CursorPosition) int {
	return (int)(C.QTextLine_xToCursor2(this.h, (C.double)(x), (C.int)(param2)))
}

func (this *QTextLine) Draw2(p *QPainter, point *QPointF, selection *QTextLayout__FormatRange) {
	C.QTextLine_draw2(this.h, p.cPointer(), point.cPointer(), selection.cPointer())
}

func (this *QTextLine) GlyphRunsWithFrom(from int) []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextLine_glyphRunsWithFrom(this.h, (C.int)(from))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextLine) GlyphRuns2(from int, length int) []QGlyphRun {
	var _ma C.struct_miqt_array = C.QTextLine_glyphRuns2(this.h, (C.int)(from), (C.int)(length))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGlyphRun(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextLine) Delete() {
	C.QTextLine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextLine) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextLine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QTextLayout__FormatRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextLayout__FormatRange constructs the type using only CGO pointers.
func newQTextLayout__FormatRange(h *C.QTextLayout__FormatRange) *QTextLayout__FormatRange {
	if h == nil {
		return nil
	}

	return &QTextLayout__FormatRange{h: h}
}

// UnsafeNewQTextLayout__FormatRange constructs the type using only unsafe pointers.
func UnsafeNewQTextLayout__FormatRange(h unsafe.Pointer) *QTextLayout__FormatRange {
	return newQTextLayout__FormatRange((*C.QTextLayout__FormatRange)(h))
}

func (this *QTextLayout__FormatRange) Start() int {
	return (int)(C.QTextLayout__FormatRange_start(this.h))
}

func (this *QTextLayout__FormatRange) SetStart(start int) {
	C.QTextLayout__FormatRange_setStart(this.h, (C.int)(start))
}

func (this *QTextLayout__FormatRange) Length() int {
	return (int)(C.QTextLayout__FormatRange_length(this.h))
}

func (this *QTextLayout__FormatRange) SetLength(length int) {
	C.QTextLayout__FormatRange_setLength(this.h, (C.int)(length))
}

func (this *QTextLayout__FormatRange) Format() *QTextCharFormat {
	format_goptr := newQTextCharFormat(C.QTextLayout__FormatRange_format(this.h))
	format_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return format_goptr
}

func (this *QTextLayout__FormatRange) SetFormat(format QTextCharFormat) {
	C.QTextLayout__FormatRange_setFormat(this.h, format.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextLayout__FormatRange) Delete() {
	C.QTextLayout__FormatRange_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextLayout__FormatRange) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextLayout__FormatRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

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

func newQTextInlineObject(h *C.QTextInlineObject) *QTextInlineObject {
	if h == nil {
		return nil
	}
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
	return (bool)(C.QTextInlineObject_IsValid(this.h))
}

func (this *QTextInlineObject) Rect() *QRectF {
	_ret := C.QTextInlineObject_Rect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextInlineObject) Width() float64 {
	return (float64)(C.QTextInlineObject_Width(this.h))
}

func (this *QTextInlineObject) Ascent() float64 {
	return (float64)(C.QTextInlineObject_Ascent(this.h))
}

func (this *QTextInlineObject) Descent() float64 {
	return (float64)(C.QTextInlineObject_Descent(this.h))
}

func (this *QTextInlineObject) Height() float64 {
	return (float64)(C.QTextInlineObject_Height(this.h))
}

func (this *QTextInlineObject) TextDirection() LayoutDirection {
	return (LayoutDirection)(C.QTextInlineObject_TextDirection(this.h))
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
	return (int)(C.QTextInlineObject_TextPosition(this.h))
}

func (this *QTextInlineObject) FormatIndex() int {
	return (int)(C.QTextInlineObject_FormatIndex(this.h))
}

func (this *QTextInlineObject) Format() *QTextFormat {
	_ret := C.QTextInlineObject_Format(this.h)
	_goptr := newQTextFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextInlineObject) Delete() {
	C.QTextInlineObject_Delete(this.h)
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

func newQTextLayout(h *C.QTextLayout) *QTextLayout {
	if h == nil {
		return nil
	}
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTextLayout_new2((*C.struct_miqt_string)(text_ms))
	return newQTextLayout(ret)
}

// NewQTextLayout3 constructs a new QTextLayout object.
func NewQTextLayout3(text string, font *QFont) *QTextLayout {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTextLayout_new3((*C.struct_miqt_string)(text_ms), font.cPointer())
	return newQTextLayout(ret)
}

// NewQTextLayout4 constructs a new QTextLayout object.
func NewQTextLayout4(b *QTextBlock) *QTextLayout {
	ret := C.QTextLayout_new4(b.cPointer())
	return newQTextLayout(ret)
}

// NewQTextLayout5 constructs a new QTextLayout object.
func NewQTextLayout5(text string, font *QFont, paintdevice *QPaintDevice) *QTextLayout {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTextLayout_new5((*C.struct_miqt_string)(text_ms), font.cPointer(), paintdevice.cPointer())
	return newQTextLayout(ret)
}

func (this *QTextLayout) SetFont(f *QFont) {
	C.QTextLayout_SetFont(this.h, f.cPointer())
}

func (this *QTextLayout) Font() *QFont {
	_ret := C.QTextLayout_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) SetRawFont(rawFont *QRawFont) {
	C.QTextLayout_SetRawFont(this.h, rawFont.cPointer())
}

func (this *QTextLayout) SetText(stringVal string) {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	C.QTextLayout_SetText(this.h, (*C.struct_miqt_string)(stringVal_ms))
}

func (this *QTextLayout) Text() string {
	var _ms *C.struct_miqt_string = C.QTextLayout_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextLayout) SetTextOption(option *QTextOption) {
	C.QTextLayout_SetTextOption(this.h, option.cPointer())
}

func (this *QTextLayout) TextOption() *QTextOption {
	return newQTextOption_U(unsafe.Pointer(C.QTextLayout_TextOption(this.h)))
}

func (this *QTextLayout) SetPreeditArea(position int, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QTextLayout_SetPreeditArea(this.h, (C.int)(position), (*C.struct_miqt_string)(text_ms))
}

func (this *QTextLayout) PreeditAreaPosition() int {
	return (int)(C.QTextLayout_PreeditAreaPosition(this.h))
}

func (this *QTextLayout) PreeditAreaText() string {
	var _ms *C.struct_miqt_string = C.QTextLayout_PreeditAreaText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextLayout) SetAdditionalFormats(overrides []QTextLayout__FormatRange) {
	// For the C ABI, malloc a C array of raw pointers
	overrides_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(overrides))))
	defer C.free(unsafe.Pointer(overrides_CArray))
	for i := range overrides {
		overrides_CArray[i] = overrides[i].cPointer()
	}
	overrides_ma := &C.struct_miqt_array{len: C.size_t(len(overrides)), data: unsafe.Pointer(overrides_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(overrides_ma))
	C.QTextLayout_SetAdditionalFormats(this.h, overrides_ma)
}

func (this *QTextLayout) AdditionalFormats() []QTextLayout__FormatRange {
	var _ma *C.struct_miqt_array = C.QTextLayout_AdditionalFormats(this.h)
	_ret := make([]QTextLayout__FormatRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQTextLayout__FormatRange(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextLayout) ClearAdditionalFormats() {
	C.QTextLayout_ClearAdditionalFormats(this.h)
}

func (this *QTextLayout) SetFormats(overrides []QTextLayout__FormatRange) {
	// For the C ABI, malloc a C array of raw pointers
	overrides_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(overrides))))
	defer C.free(unsafe.Pointer(overrides_CArray))
	for i := range overrides {
		overrides_CArray[i] = overrides[i].cPointer()
	}
	overrides_ma := &C.struct_miqt_array{len: C.size_t(len(overrides)), data: unsafe.Pointer(overrides_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(overrides_ma))
	C.QTextLayout_SetFormats(this.h, overrides_ma)
}

func (this *QTextLayout) Formats() []QTextLayout__FormatRange {
	var _ma *C.struct_miqt_array = C.QTextLayout_Formats(this.h)
	_ret := make([]QTextLayout__FormatRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextLayout__FormatRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_ret := _outCast[i]
		_vv_goptr := newQTextLayout__FormatRange(_vv_ret)
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextLayout) ClearFormats() {
	C.QTextLayout_ClearFormats(this.h)
}

func (this *QTextLayout) SetCacheEnabled(enable bool) {
	C.QTextLayout_SetCacheEnabled(this.h, (C.bool)(enable))
}

func (this *QTextLayout) CacheEnabled() bool {
	return (bool)(C.QTextLayout_CacheEnabled(this.h))
}

func (this *QTextLayout) SetCursorMoveStyle(style CursorMoveStyle) {
	C.QTextLayout_SetCursorMoveStyle(this.h, (C.int)(style))
}

func (this *QTextLayout) CursorMoveStyle() CursorMoveStyle {
	return (CursorMoveStyle)(C.QTextLayout_CursorMoveStyle(this.h))
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
	_ret := C.QTextLayout_CreateLine(this.h)
	_goptr := newQTextLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) LineCount() int {
	return (int)(C.QTextLayout_LineCount(this.h))
}

func (this *QTextLayout) LineAt(i int) *QTextLine {
	_ret := C.QTextLayout_LineAt(this.h, (C.int)(i))
	_goptr := newQTextLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) LineForTextPosition(pos int) *QTextLine {
	_ret := C.QTextLayout_LineForTextPosition(this.h, (C.int)(pos))
	_goptr := newQTextLine(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) IsValidCursorPosition(pos int) bool {
	return (bool)(C.QTextLayout_IsValidCursorPosition(this.h, (C.int)(pos)))
}

func (this *QTextLayout) NextCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_NextCursorPosition(this.h, (C.int)(oldPos)))
}

func (this *QTextLayout) PreviousCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_PreviousCursorPosition(this.h, (C.int)(oldPos)))
}

func (this *QTextLayout) LeftCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_LeftCursorPosition(this.h, (C.int)(oldPos)))
}

func (this *QTextLayout) RightCursorPosition(oldPos int) int {
	return (int)(C.QTextLayout_RightCursorPosition(this.h, (C.int)(oldPos)))
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
	_ret := C.QTextLayout_Position(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) SetPosition(p *QPointF) {
	C.QTextLayout_SetPosition(this.h, p.cPointer())
}

func (this *QTextLayout) BoundingRect() *QRectF {
	_ret := C.QTextLayout_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLayout) MinimumWidth() float64 {
	return (float64)(C.QTextLayout_MinimumWidth(this.h))
}

func (this *QTextLayout) MaximumWidth() float64 {
	return (float64)(C.QTextLayout_MaximumWidth(this.h))
}

func (this *QTextLayout) GlyphRuns() []QGlyphRun {
	var _ma *C.struct_miqt_array = C.QTextLayout_GlyphRuns(this.h)
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQGlyphRun(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextLayout) SetFlags(flags int) {
	C.QTextLayout_SetFlags(this.h, (C.int)(flags))
}

func (this *QTextLayout) NextCursorPosition2(oldPos int, mode QTextLayout__CursorMode) int {
	return (int)(C.QTextLayout_NextCursorPosition2(this.h, (C.int)(oldPos), (C.int)(mode)))
}

func (this *QTextLayout) PreviousCursorPosition2(oldPos int, mode QTextLayout__CursorMode) int {
	return (int)(C.QTextLayout_PreviousCursorPosition2(this.h, (C.int)(oldPos), (C.int)(mode)))
}

func (this *QTextLayout) Draw3(p *QPainter, pos *QPointF, selections []QTextLayout__FormatRange) {
	// For the C ABI, malloc a C array of raw pointers
	selections_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := &C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(selections_ma))
	C.QTextLayout_Draw3(this.h, p.cPointer(), pos.cPointer(), selections_ma)
}

func (this *QTextLayout) Draw4(p *QPainter, pos *QPointF, selections []QTextLayout__FormatRange, clip *QRectF) {
	// For the C ABI, malloc a C array of raw pointers
	selections_CArray := (*[0xffff]*C.QTextLayout__FormatRange)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := &C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(selections_ma))
	C.QTextLayout_Draw4(this.h, p.cPointer(), pos.cPointer(), selections_ma, clip.cPointer())
}

func (this *QTextLayout) GlyphRuns1(from int) []QGlyphRun {
	var _ma *C.struct_miqt_array = C.QTextLayout_GlyphRuns1(this.h, (C.int)(from))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQGlyphRun(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextLayout) GlyphRuns2(from int, length int) []QGlyphRun {
	var _ma *C.struct_miqt_array = C.QTextLayout_GlyphRuns2(this.h, (C.int)(from), (C.int)(length))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQGlyphRun(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextLayout) Delete() {
	C.QTextLayout_Delete(this.h)
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

func newQTextLine(h *C.QTextLine) *QTextLine {
	if h == nil {
		return nil
	}
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
	return (bool)(C.QTextLine_IsValid(this.h))
}

func (this *QTextLine) Rect() *QRectF {
	_ret := C.QTextLine_Rect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLine) X() float64 {
	return (float64)(C.QTextLine_X(this.h))
}

func (this *QTextLine) Y() float64 {
	return (float64)(C.QTextLine_Y(this.h))
}

func (this *QTextLine) Width() float64 {
	return (float64)(C.QTextLine_Width(this.h))
}

func (this *QTextLine) Ascent() float64 {
	return (float64)(C.QTextLine_Ascent(this.h))
}

func (this *QTextLine) Descent() float64 {
	return (float64)(C.QTextLine_Descent(this.h))
}

func (this *QTextLine) Height() float64 {
	return (float64)(C.QTextLine_Height(this.h))
}

func (this *QTextLine) Leading() float64 {
	return (float64)(C.QTextLine_Leading(this.h))
}

func (this *QTextLine) SetLeadingIncluded(included bool) {
	C.QTextLine_SetLeadingIncluded(this.h, (C.bool)(included))
}

func (this *QTextLine) LeadingIncluded() bool {
	return (bool)(C.QTextLine_LeadingIncluded(this.h))
}

func (this *QTextLine) NaturalTextWidth() float64 {
	return (float64)(C.QTextLine_NaturalTextWidth(this.h))
}

func (this *QTextLine) HorizontalAdvance() float64 {
	return (float64)(C.QTextLine_HorizontalAdvance(this.h))
}

func (this *QTextLine) NaturalTextRect() *QRectF {
	_ret := C.QTextLine_NaturalTextRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLine) CursorToX(cursorPos *int) float64 {
	return (float64)(C.QTextLine_CursorToX(this.h, (*C.int)(unsafe.Pointer(cursorPos))))
}

func (this *QTextLine) CursorToXWithCursorPos(cursorPos int) float64 {
	return (float64)(C.QTextLine_CursorToXWithCursorPos(this.h, (C.int)(cursorPos)))
}

func (this *QTextLine) XToCursor(x float64) int {
	return (int)(C.QTextLine_XToCursor(this.h, (C.double)(x)))
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
	_ret := C.QTextLine_Position(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextLine) TextStart() int {
	return (int)(C.QTextLine_TextStart(this.h))
}

func (this *QTextLine) TextLength() int {
	return (int)(C.QTextLine_TextLength(this.h))
}

func (this *QTextLine) LineNumber() int {
	return (int)(C.QTextLine_LineNumber(this.h))
}

func (this *QTextLine) Draw(p *QPainter, point *QPointF) {
	C.QTextLine_Draw(this.h, p.cPointer(), point.cPointer())
}

func (this *QTextLine) GlyphRuns() []QGlyphRun {
	var _ma *C.struct_miqt_array = C.QTextLine_GlyphRuns(this.h)
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQGlyphRun(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextLine) CursorToX2(cursorPos *int, edge QTextLine__Edge) float64 {
	return (float64)(C.QTextLine_CursorToX2(this.h, (*C.int)(unsafe.Pointer(cursorPos)), (C.int)(edge)))
}

func (this *QTextLine) CursorToX22(cursorPos int, edge QTextLine__Edge) float64 {
	return (float64)(C.QTextLine_CursorToX22(this.h, (C.int)(cursorPos), (C.int)(edge)))
}

func (this *QTextLine) XToCursor2(x float64, param2 QTextLine__CursorPosition) int {
	return (int)(C.QTextLine_XToCursor2(this.h, (C.double)(x), (C.int)(param2)))
}

func (this *QTextLine) Draw3(p *QPainter, point *QPointF, selection *QTextLayout__FormatRange) {
	C.QTextLine_Draw3(this.h, p.cPointer(), point.cPointer(), selection.cPointer())
}

func (this *QTextLine) GlyphRuns1(from int) []QGlyphRun {
	var _ma *C.struct_miqt_array = C.QTextLine_GlyphRuns1(this.h, (C.int)(from))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQGlyphRun(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextLine) GlyphRuns2(from int, length int) []QGlyphRun {
	var _ma *C.struct_miqt_array = C.QTextLine_GlyphRuns2(this.h, (C.int)(from), (C.int)(length))
	_ret := make([]QGlyphRun, int(_ma.len))
	_outCast := (*[0xffff]*C.QGlyphRun)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQGlyphRun(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextLine) Delete() {
	C.QTextLine_Delete(this.h)
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

func newQTextLayout__FormatRange(h *C.QTextLayout__FormatRange) *QTextLayout__FormatRange {
	if h == nil {
		return nil
	}
	return &QTextLayout__FormatRange{h: h}
}

func newQTextLayout__FormatRange_U(h unsafe.Pointer) *QTextLayout__FormatRange {
	return newQTextLayout__FormatRange((*C.QTextLayout__FormatRange)(h))
}

// Delete this object from C++ memory.
func (this *QTextLayout__FormatRange) Delete() {
	C.QTextLayout__FormatRange_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextLayout__FormatRange) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextLayout__FormatRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

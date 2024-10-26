package qscintilla

/*

#include "gen_qsciscintilla.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciScintilla__ int

const (
	QsciScintilla__AiMaintain      QsciScintilla__ = 1
	QsciScintilla__AiOpening       QsciScintilla__ = 2
	QsciScintilla__AiClosing       QsciScintilla__ = 4
	QsciScintilla__MoNone          QsciScintilla__ = 0
	QsciScintilla__MoSublineSelect QsciScintilla__ = 1
)

type QsciScintilla__AnnotationDisplay int

const (
	QsciScintilla__AnnotationHidden   QsciScintilla__AnnotationDisplay = 0
	QsciScintilla__AnnotationStandard QsciScintilla__AnnotationDisplay = 1
	QsciScintilla__AnnotationBoxed    QsciScintilla__AnnotationDisplay = 2
	QsciScintilla__AnnotationIndented QsciScintilla__AnnotationDisplay = 3
)

type QsciScintilla__AutoCompletionUseSingle int

const (
	QsciScintilla__AcusNever    QsciScintilla__AutoCompletionUseSingle = 0
	QsciScintilla__AcusExplicit QsciScintilla__AutoCompletionUseSingle = 1
	QsciScintilla__AcusAlways   QsciScintilla__AutoCompletionUseSingle = 2
)

type QsciScintilla__AutoCompletionSource int

const (
	QsciScintilla__AcsNone     QsciScintilla__AutoCompletionSource = 0
	QsciScintilla__AcsAll      QsciScintilla__AutoCompletionSource = 1
	QsciScintilla__AcsDocument QsciScintilla__AutoCompletionSource = 2
	QsciScintilla__AcsAPIs     QsciScintilla__AutoCompletionSource = 3
)

type QsciScintilla__BraceMatch int

const (
	QsciScintilla__NoBraceMatch     QsciScintilla__BraceMatch = 0
	QsciScintilla__StrictBraceMatch QsciScintilla__BraceMatch = 1
	QsciScintilla__SloppyBraceMatch QsciScintilla__BraceMatch = 2
)

type QsciScintilla__CallTipsPosition int

const (
	QsciScintilla__CallTipsBelowText QsciScintilla__CallTipsPosition = 0
	QsciScintilla__CallTipsAboveText QsciScintilla__CallTipsPosition = 1
)

type QsciScintilla__CallTipsStyle int

const (
	QsciScintilla__CallTipsNone                    QsciScintilla__CallTipsStyle = 0
	QsciScintilla__CallTipsNoContext               QsciScintilla__CallTipsStyle = 1
	QsciScintilla__CallTipsNoAutoCompletionContext QsciScintilla__CallTipsStyle = 2
	QsciScintilla__CallTipsContext                 QsciScintilla__CallTipsStyle = 3
)

type QsciScintilla__EdgeMode int

const (
	QsciScintilla__EdgeNone          QsciScintilla__EdgeMode = 0
	QsciScintilla__EdgeLine          QsciScintilla__EdgeMode = 1
	QsciScintilla__EdgeBackground    QsciScintilla__EdgeMode = 2
	QsciScintilla__EdgeMultipleLines QsciScintilla__EdgeMode = 3
)

type QsciScintilla__EolMode int

const (
	QsciScintilla__EolWindows QsciScintilla__EolMode = 0
	QsciScintilla__EolUnix    QsciScintilla__EolMode = 2
	QsciScintilla__EolMac     QsciScintilla__EolMode = 1
)

type QsciScintilla__FoldStyle int

const (
	QsciScintilla__NoFoldStyle          QsciScintilla__FoldStyle = 0
	QsciScintilla__PlainFoldStyle       QsciScintilla__FoldStyle = 1
	QsciScintilla__CircledFoldStyle     QsciScintilla__FoldStyle = 2
	QsciScintilla__BoxedFoldStyle       QsciScintilla__FoldStyle = 3
	QsciScintilla__CircledTreeFoldStyle QsciScintilla__FoldStyle = 4
	QsciScintilla__BoxedTreeFoldStyle   QsciScintilla__FoldStyle = 5
)

type QsciScintilla__IndicatorStyle int

const (
	QsciScintilla__PlainIndicator             QsciScintilla__IndicatorStyle = 0
	QsciScintilla__SquiggleIndicator          QsciScintilla__IndicatorStyle = 1
	QsciScintilla__TTIndicator                QsciScintilla__IndicatorStyle = 2
	QsciScintilla__DiagonalIndicator          QsciScintilla__IndicatorStyle = 3
	QsciScintilla__StrikeIndicator            QsciScintilla__IndicatorStyle = 4
	QsciScintilla__HiddenIndicator            QsciScintilla__IndicatorStyle = 5
	QsciScintilla__BoxIndicator               QsciScintilla__IndicatorStyle = 6
	QsciScintilla__RoundBoxIndicator          QsciScintilla__IndicatorStyle = 7
	QsciScintilla__StraightBoxIndicator       QsciScintilla__IndicatorStyle = 8
	QsciScintilla__FullBoxIndicator           QsciScintilla__IndicatorStyle = 16
	QsciScintilla__DashesIndicator            QsciScintilla__IndicatorStyle = 9
	QsciScintilla__DotsIndicator              QsciScintilla__IndicatorStyle = 10
	QsciScintilla__SquiggleLowIndicator       QsciScintilla__IndicatorStyle = 11
	QsciScintilla__DotBoxIndicator            QsciScintilla__IndicatorStyle = 12
	QsciScintilla__SquigglePixmapIndicator    QsciScintilla__IndicatorStyle = 13
	QsciScintilla__ThickCompositionIndicator  QsciScintilla__IndicatorStyle = 14
	QsciScintilla__ThinCompositionIndicator   QsciScintilla__IndicatorStyle = 15
	QsciScintilla__TextColorIndicator         QsciScintilla__IndicatorStyle = 17
	QsciScintilla__TriangleIndicator          QsciScintilla__IndicatorStyle = 18
	QsciScintilla__TriangleCharacterIndicator QsciScintilla__IndicatorStyle = 19
	QsciScintilla__GradientIndicator          QsciScintilla__IndicatorStyle = 20
	QsciScintilla__CentreGradientIndicator    QsciScintilla__IndicatorStyle = 21
)

type QsciScintilla__MarginType int

const (
	QsciScintilla__SymbolMargin                       QsciScintilla__MarginType = 0
	QsciScintilla__SymbolMarginDefaultForegroundColor QsciScintilla__MarginType = 3
	QsciScintilla__SymbolMarginDefaultBackgroundColor QsciScintilla__MarginType = 2
	QsciScintilla__NumberMargin                       QsciScintilla__MarginType = 1
	QsciScintilla__TextMargin                         QsciScintilla__MarginType = 4
	QsciScintilla__TextMarginRightJustified           QsciScintilla__MarginType = 5
	QsciScintilla__SymbolMarginColor                  QsciScintilla__MarginType = 6
)

type QsciScintilla__MarkerSymbol int

const (
	QsciScintilla__Circle                  QsciScintilla__MarkerSymbol = 0
	QsciScintilla__Rectangle               QsciScintilla__MarkerSymbol = 1
	QsciScintilla__RightTriangle           QsciScintilla__MarkerSymbol = 2
	QsciScintilla__SmallRectangle          QsciScintilla__MarkerSymbol = 3
	QsciScintilla__RightArrow              QsciScintilla__MarkerSymbol = 4
	QsciScintilla__Invisible               QsciScintilla__MarkerSymbol = 5
	QsciScintilla__DownTriangle            QsciScintilla__MarkerSymbol = 6
	QsciScintilla__Minus                   QsciScintilla__MarkerSymbol = 7
	QsciScintilla__Plus                    QsciScintilla__MarkerSymbol = 8
	QsciScintilla__VerticalLine            QsciScintilla__MarkerSymbol = 9
	QsciScintilla__BottomLeftCorner        QsciScintilla__MarkerSymbol = 10
	QsciScintilla__LeftSideSplitter        QsciScintilla__MarkerSymbol = 11
	QsciScintilla__BoxedPlus               QsciScintilla__MarkerSymbol = 12
	QsciScintilla__BoxedPlusConnected      QsciScintilla__MarkerSymbol = 13
	QsciScintilla__BoxedMinus              QsciScintilla__MarkerSymbol = 14
	QsciScintilla__BoxedMinusConnected     QsciScintilla__MarkerSymbol = 15
	QsciScintilla__RoundedBottomLeftCorner QsciScintilla__MarkerSymbol = 16
	QsciScintilla__LeftSideRoundedSplitter QsciScintilla__MarkerSymbol = 17
	QsciScintilla__CircledPlus             QsciScintilla__MarkerSymbol = 18
	QsciScintilla__CircledPlusConnected    QsciScintilla__MarkerSymbol = 19
	QsciScintilla__CircledMinus            QsciScintilla__MarkerSymbol = 20
	QsciScintilla__CircledMinusConnected   QsciScintilla__MarkerSymbol = 21
	QsciScintilla__Background              QsciScintilla__MarkerSymbol = 22
	QsciScintilla__ThreeDots               QsciScintilla__MarkerSymbol = 23
	QsciScintilla__ThreeRightArrows        QsciScintilla__MarkerSymbol = 24
	QsciScintilla__FullRectangle           QsciScintilla__MarkerSymbol = 26
	QsciScintilla__LeftRectangle           QsciScintilla__MarkerSymbol = 27
	QsciScintilla__Underline               QsciScintilla__MarkerSymbol = 29
	QsciScintilla__Bookmark                QsciScintilla__MarkerSymbol = 31
)

type QsciScintilla__TabDrawMode int

const (
	QsciScintilla__TabLongArrow QsciScintilla__TabDrawMode = 0
	QsciScintilla__TabStrikeOut QsciScintilla__TabDrawMode = 1
)

type QsciScintilla__WhitespaceVisibility int

const (
	QsciScintilla__WsInvisible           QsciScintilla__WhitespaceVisibility = 0
	QsciScintilla__WsVisible             QsciScintilla__WhitespaceVisibility = 1
	QsciScintilla__WsVisibleAfterIndent  QsciScintilla__WhitespaceVisibility = 2
	QsciScintilla__WsVisibleOnlyInIndent QsciScintilla__WhitespaceVisibility = 3
)

type QsciScintilla__WrapMode int

const (
	QsciScintilla__WrapNone       QsciScintilla__WrapMode = 0
	QsciScintilla__WrapWord       QsciScintilla__WrapMode = 1
	QsciScintilla__WrapCharacter  QsciScintilla__WrapMode = 2
	QsciScintilla__WrapWhitespace QsciScintilla__WrapMode = 3
)

type QsciScintilla__WrapVisualFlag int

const (
	QsciScintilla__WrapFlagNone     QsciScintilla__WrapVisualFlag = 0
	QsciScintilla__WrapFlagByText   QsciScintilla__WrapVisualFlag = 1
	QsciScintilla__WrapFlagByBorder QsciScintilla__WrapVisualFlag = 2
	QsciScintilla__WrapFlagInMargin QsciScintilla__WrapVisualFlag = 3
)

type QsciScintilla__WrapIndentMode int

const (
	QsciScintilla__WrapIndentFixed          QsciScintilla__WrapIndentMode = 0
	QsciScintilla__WrapIndentSame           QsciScintilla__WrapIndentMode = 1
	QsciScintilla__WrapIndentIndented       QsciScintilla__WrapIndentMode = 2
	QsciScintilla__WrapIndentDeeplyIndented QsciScintilla__WrapIndentMode = 3
)

type QsciScintilla struct {
	h *C.QsciScintilla
	*QsciScintillaBase
}

func (this *QsciScintilla) cPointer() *C.QsciScintilla {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciScintilla) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciScintilla(h *C.QsciScintilla) *QsciScintilla {
	if h == nil {
		return nil
	}
	return &QsciScintilla{h: h, QsciScintillaBase: UnsafeNewQsciScintillaBase(unsafe.Pointer(h))}
}

func UnsafeNewQsciScintilla(h unsafe.Pointer) *QsciScintilla {
	return newQsciScintilla((*C.QsciScintilla)(h))
}

// NewQsciScintilla constructs a new QsciScintilla object.
func NewQsciScintilla(parent *qt.QWidget) *QsciScintilla {
	ret := C.QsciScintilla_new((*C.QWidget)(parent.UnsafePointer()))
	return newQsciScintilla(ret)
}

// NewQsciScintilla2 constructs a new QsciScintilla object.
func NewQsciScintilla2() *QsciScintilla {
	ret := C.QsciScintilla_new2()
	return newQsciScintilla(ret)
}

func (this *QsciScintilla) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciScintilla_MetaObject(this.h)))
}

func (this *QsciScintilla) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciScintilla_Metacast(this.h, param1_Cstring))
}

func QsciScintilla_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintilla_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) ApiContext(pos int, context_start *int, last_word_start *int) []string {
	var _ma *C.struct_miqt_array = C.QsciScintilla_ApiContext(this.h, (C.int)(pos), (*C.int)(unsafe.Pointer(context_start)), (*C.int)(unsafe.Pointer(last_word_start)))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QsciScintilla) Annotate(line int, text string, style int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_Annotate(this.h, (C.int)(line), text_ms, (C.int)(style))
}

func (this *QsciScintilla) Annotate2(line int, text string, style *QsciStyle) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_Annotate2(this.h, (C.int)(line), text_ms, style.cPointer())
}

func (this *QsciScintilla) Annotate3(line int, text *QsciStyledText) {
	C.QsciScintilla_Annotate3(this.h, (C.int)(line), text.cPointer())
}

func (this *QsciScintilla) Annotation(line int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_Annotation(this.h, (C.int)(line))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) AnnotationDisplay() QsciScintilla__AnnotationDisplay {
	return (QsciScintilla__AnnotationDisplay)(C.QsciScintilla_AnnotationDisplay(this.h))
}

func (this *QsciScintilla) ClearAnnotations() {
	C.QsciScintilla_ClearAnnotations(this.h)
}

func (this *QsciScintilla) AutoCompletionCaseSensitivity() bool {
	return (bool)(C.QsciScintilla_AutoCompletionCaseSensitivity(this.h))
}

func (this *QsciScintilla) AutoCompletionFillupsEnabled() bool {
	return (bool)(C.QsciScintilla_AutoCompletionFillupsEnabled(this.h))
}

func (this *QsciScintilla) AutoCompletionReplaceWord() bool {
	return (bool)(C.QsciScintilla_AutoCompletionReplaceWord(this.h))
}

func (this *QsciScintilla) AutoCompletionShowSingle() bool {
	return (bool)(C.QsciScintilla_AutoCompletionShowSingle(this.h))
}

func (this *QsciScintilla) AutoCompletionSource() QsciScintilla__AutoCompletionSource {
	return (QsciScintilla__AutoCompletionSource)(C.QsciScintilla_AutoCompletionSource(this.h))
}

func (this *QsciScintilla) AutoCompletionThreshold() int {
	return (int)(C.QsciScintilla_AutoCompletionThreshold(this.h))
}

func (this *QsciScintilla) AutoCompletionUseSingle() QsciScintilla__AutoCompletionUseSingle {
	return (QsciScintilla__AutoCompletionUseSingle)(C.QsciScintilla_AutoCompletionUseSingle(this.h))
}

func (this *QsciScintilla) AutoIndent() bool {
	return (bool)(C.QsciScintilla_AutoIndent(this.h))
}

func (this *QsciScintilla) BackspaceUnindents() bool {
	return (bool)(C.QsciScintilla_BackspaceUnindents(this.h))
}

func (this *QsciScintilla) BeginUndoAction() {
	C.QsciScintilla_BeginUndoAction(this.h)
}

func (this *QsciScintilla) BraceMatching() QsciScintilla__BraceMatch {
	return (QsciScintilla__BraceMatch)(C.QsciScintilla_BraceMatching(this.h))
}

func (this *QsciScintilla) Bytes(start int, end int) []byte {
	var _bytearray C.struct_miqt_string = C.QsciScintilla_Bytes(this.h, (C.int)(start), (C.int)(end))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QsciScintilla) CallTipsPosition() QsciScintilla__CallTipsPosition {
	return (QsciScintilla__CallTipsPosition)(C.QsciScintilla_CallTipsPosition(this.h))
}

func (this *QsciScintilla) CallTipsStyle() QsciScintilla__CallTipsStyle {
	return (QsciScintilla__CallTipsStyle)(C.QsciScintilla_CallTipsStyle(this.h))
}

func (this *QsciScintilla) CallTipsVisible() int {
	return (int)(C.QsciScintilla_CallTipsVisible(this.h))
}

func (this *QsciScintilla) CancelFind() {
	C.QsciScintilla_CancelFind(this.h)
}

func (this *QsciScintilla) CancelList() {
	C.QsciScintilla_CancelList(this.h)
}

func (this *QsciScintilla) CaseSensitive() bool {
	return (bool)(C.QsciScintilla_CaseSensitive(this.h))
}

func (this *QsciScintilla) ClearFolds() {
	C.QsciScintilla_ClearFolds(this.h)
}

func (this *QsciScintilla) ClearIndicatorRange(lineFrom int, indexFrom int, lineTo int, indexTo int, indicatorNumber int) {
	C.QsciScintilla_ClearIndicatorRange(this.h, (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ClearRegisteredImages() {
	C.QsciScintilla_ClearRegisteredImages(this.h)
}

func (this *QsciScintilla) Color() *qt.QColor {
	_ret := C.QsciScintilla_Color(this.h)
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) ContractedFolds() []int {
	var _ma *C.struct_miqt_array = C.QsciScintilla_ContractedFolds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QsciScintilla) ConvertEols(mode QsciScintilla__EolMode) {
	C.QsciScintilla_ConvertEols(this.h, (C.int)(mode))
}

func (this *QsciScintilla) CreateStandardContextMenu() *qt.QMenu {
	return qt.UnsafeNewQMenu(unsafe.Pointer(C.QsciScintilla_CreateStandardContextMenu(this.h)))
}

func (this *QsciScintilla) Document() *QsciDocument {
	_ret := C.QsciScintilla_Document(this.h)
	_goptr := newQsciDocument(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) EndUndoAction() {
	C.QsciScintilla_EndUndoAction(this.h)
}

func (this *QsciScintilla) EdgeColor() *qt.QColor {
	_ret := C.QsciScintilla_EdgeColor(this.h)
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) EdgeColumn() int {
	return (int)(C.QsciScintilla_EdgeColumn(this.h))
}

func (this *QsciScintilla) EdgeMode() QsciScintilla__EdgeMode {
	return (QsciScintilla__EdgeMode)(C.QsciScintilla_EdgeMode(this.h))
}

func (this *QsciScintilla) SetFont(f *qt.QFont) {
	C.QsciScintilla_SetFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciScintilla) EolMode() QsciScintilla__EolMode {
	return (QsciScintilla__EolMode)(C.QsciScintilla_EolMode(this.h))
}

func (this *QsciScintilla) EolVisibility() bool {
	return (bool)(C.QsciScintilla_EolVisibility(this.h))
}

func (this *QsciScintilla) ExtraAscent() int {
	return (int)(C.QsciScintilla_ExtraAscent(this.h))
}

func (this *QsciScintilla) ExtraDescent() int {
	return (int)(C.QsciScintilla_ExtraDescent(this.h))
}

func (this *QsciScintilla) FillIndicatorRange(lineFrom int, indexFrom int, lineTo int, indexTo int, indicatorNumber int) {
	C.QsciScintilla_FillIndicatorRange(this.h, (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) FindFirst(expr string, re bool, cs bool, wo bool, wrap bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap)))
}

func (this *QsciScintilla) FindFirstInSelection(expr string, re bool, cs bool, wo bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirstInSelection(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo)))
}

func (this *QsciScintilla) FindNext() bool {
	return (bool)(C.QsciScintilla_FindNext(this.h))
}

func (this *QsciScintilla) FindMatchingBrace(brace *int64, other *int64, mode QsciScintilla__BraceMatch) bool {
	return (bool)(C.QsciScintilla_FindMatchingBrace(this.h, (*C.long)(unsafe.Pointer(brace)), (*C.long)(unsafe.Pointer(other)), (C.int)(mode)))
}

func (this *QsciScintilla) FirstVisibleLine() int {
	return (int)(C.QsciScintilla_FirstVisibleLine(this.h))
}

func (this *QsciScintilla) Folding() QsciScintilla__FoldStyle {
	return (QsciScintilla__FoldStyle)(C.QsciScintilla_Folding(this.h))
}

func (this *QsciScintilla) GetCursorPosition(line *int, index *int) {
	C.QsciScintilla_GetCursorPosition(this.h, (*C.int)(unsafe.Pointer(line)), (*C.int)(unsafe.Pointer(index)))
}

func (this *QsciScintilla) GetSelection(lineFrom *int, indexFrom *int, lineTo *int, indexTo *int) {
	C.QsciScintilla_GetSelection(this.h, (*C.int)(unsafe.Pointer(lineFrom)), (*C.int)(unsafe.Pointer(indexFrom)), (*C.int)(unsafe.Pointer(lineTo)), (*C.int)(unsafe.Pointer(indexTo)))
}

func (this *QsciScintilla) HasSelectedText() bool {
	return (bool)(C.QsciScintilla_HasSelectedText(this.h))
}

func (this *QsciScintilla) Indentation(line int) int {
	return (int)(C.QsciScintilla_Indentation(this.h, (C.int)(line)))
}

func (this *QsciScintilla) IndentationGuides() bool {
	return (bool)(C.QsciScintilla_IndentationGuides(this.h))
}

func (this *QsciScintilla) IndentationsUseTabs() bool {
	return (bool)(C.QsciScintilla_IndentationsUseTabs(this.h))
}

func (this *QsciScintilla) IndentationWidth() int {
	return (int)(C.QsciScintilla_IndentationWidth(this.h))
}

func (this *QsciScintilla) IndicatorDefine(style QsciScintilla__IndicatorStyle) int {
	return (int)(C.QsciScintilla_IndicatorDefine(this.h, (C.int)(style)))
}

func (this *QsciScintilla) IndicatorDrawUnder(indicatorNumber int) bool {
	return (bool)(C.QsciScintilla_IndicatorDrawUnder(this.h, (C.int)(indicatorNumber)))
}

func (this *QsciScintilla) IsCallTipActive() bool {
	return (bool)(C.QsciScintilla_IsCallTipActive(this.h))
}

func (this *QsciScintilla) IsListActive() bool {
	return (bool)(C.QsciScintilla_IsListActive(this.h))
}

func (this *QsciScintilla) IsModified() bool {
	return (bool)(C.QsciScintilla_IsModified(this.h))
}

func (this *QsciScintilla) IsReadOnly() bool {
	return (bool)(C.QsciScintilla_IsReadOnly(this.h))
}

func (this *QsciScintilla) IsRedoAvailable() bool {
	return (bool)(C.QsciScintilla_IsRedoAvailable(this.h))
}

func (this *QsciScintilla) IsUndoAvailable() bool {
	return (bool)(C.QsciScintilla_IsUndoAvailable(this.h))
}

func (this *QsciScintilla) IsUtf8() bool {
	return (bool)(C.QsciScintilla_IsUtf8(this.h))
}

func (this *QsciScintilla) IsWordCharacter(ch int8) bool {
	return (bool)(C.QsciScintilla_IsWordCharacter(this.h, (C.char)(ch)))
}

func (this *QsciScintilla) LineAt(point *qt.QPoint) int {
	return (int)(C.QsciScintilla_LineAt(this.h, (*C.QPoint)(point.UnsafePointer())))
}

func (this *QsciScintilla) LineIndexFromPosition(position int, line *int, index *int) {
	C.QsciScintilla_LineIndexFromPosition(this.h, (C.int)(position), (*C.int)(unsafe.Pointer(line)), (*C.int)(unsafe.Pointer(index)))
}

func (this *QsciScintilla) LineLength(line int) int {
	return (int)(C.QsciScintilla_LineLength(this.h, (C.int)(line)))
}

func (this *QsciScintilla) Lines() int {
	return (int)(C.QsciScintilla_Lines(this.h))
}

func (this *QsciScintilla) Length() int {
	return (int)(C.QsciScintilla_Length(this.h))
}

func (this *QsciScintilla) Lexer() *QsciLexer {
	return UnsafeNewQsciLexer(unsafe.Pointer(C.QsciScintilla_Lexer(this.h)))
}

func (this *QsciScintilla) MarginBackgroundColor(margin int) *qt.QColor {
	_ret := C.QsciScintilla_MarginBackgroundColor(this.h, (C.int)(margin))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) MarginLineNumbers(margin int) bool {
	return (bool)(C.QsciScintilla_MarginLineNumbers(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginMarkerMask(margin int) int {
	return (int)(C.QsciScintilla_MarginMarkerMask(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginOptions() int {
	return (int)(C.QsciScintilla_MarginOptions(this.h))
}

func (this *QsciScintilla) MarginSensitivity(margin int) bool {
	return (bool)(C.QsciScintilla_MarginSensitivity(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginType(margin int) QsciScintilla__MarginType {
	return (QsciScintilla__MarginType)(C.QsciScintilla_MarginType(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginWidth(margin int) int {
	return (int)(C.QsciScintilla_MarginWidth(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) Margins() int {
	return (int)(C.QsciScintilla_Margins(this.h))
}

func (this *QsciScintilla) MarkerDefine(sym QsciScintilla__MarkerSymbol) int {
	return (int)(C.QsciScintilla_MarkerDefine(this.h, (C.int)(sym)))
}

func (this *QsciScintilla) MarkerDefineWithCh(ch int8) int {
	return (int)(C.QsciScintilla_MarkerDefineWithCh(this.h, (C.char)(ch)))
}

func (this *QsciScintilla) MarkerDefineWithPm(pm *qt.QPixmap) int {
	return (int)(C.QsciScintilla_MarkerDefineWithPm(this.h, (*C.QPixmap)(pm.UnsafePointer())))
}

func (this *QsciScintilla) MarkerDefineWithIm(im *qt.QImage) int {
	return (int)(C.QsciScintilla_MarkerDefineWithIm(this.h, (*C.QImage)(im.UnsafePointer())))
}

func (this *QsciScintilla) MarkerAdd(linenr int, markerNumber int) int {
	return (int)(C.QsciScintilla_MarkerAdd(this.h, (C.int)(linenr), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkersAtLine(linenr int) uint {
	return (uint)(C.QsciScintilla_MarkersAtLine(this.h, (C.int)(linenr)))
}

func (this *QsciScintilla) MarkerDelete(linenr int) {
	C.QsciScintilla_MarkerDelete(this.h, (C.int)(linenr))
}

func (this *QsciScintilla) MarkerDeleteAll() {
	C.QsciScintilla_MarkerDeleteAll(this.h)
}

func (this *QsciScintilla) MarkerDeleteHandle(mhandle int) {
	C.QsciScintilla_MarkerDeleteHandle(this.h, (C.int)(mhandle))
}

func (this *QsciScintilla) MarkerLine(mhandle int) int {
	return (int)(C.QsciScintilla_MarkerLine(this.h, (C.int)(mhandle)))
}

func (this *QsciScintilla) MarkerFindNext(linenr int, mask uint) int {
	return (int)(C.QsciScintilla_MarkerFindNext(this.h, (C.int)(linenr), (C.uint)(mask)))
}

func (this *QsciScintilla) MarkerFindPrevious(linenr int, mask uint) int {
	return (int)(C.QsciScintilla_MarkerFindPrevious(this.h, (C.int)(linenr), (C.uint)(mask)))
}

func (this *QsciScintilla) OverwriteMode() bool {
	return (bool)(C.QsciScintilla_OverwriteMode(this.h))
}

func (this *QsciScintilla) Paper() *qt.QColor {
	_ret := C.QsciScintilla_Paper(this.h)
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) PositionFromLineIndex(line int, index int) int {
	return (int)(C.QsciScintilla_PositionFromLineIndex(this.h, (C.int)(line), (C.int)(index)))
}

func (this *QsciScintilla) Read(io *qt.QIODevice) bool {
	return (bool)(C.QsciScintilla_Read(this.h, (*C.QIODevice)(io.UnsafePointer())))
}

func (this *QsciScintilla) Recolor() {
	C.QsciScintilla_Recolor(this.h)
}

func (this *QsciScintilla) RegisterImage(id int, pm *qt.QPixmap) {
	C.QsciScintilla_RegisterImage(this.h, (C.int)(id), (*C.QPixmap)(pm.UnsafePointer()))
}

func (this *QsciScintilla) RegisterImage2(id int, im *qt.QImage) {
	C.QsciScintilla_RegisterImage2(this.h, (C.int)(id), (*C.QImage)(im.UnsafePointer()))
}

func (this *QsciScintilla) Replace(replaceStr string) {
	replaceStr_ms := C.struct_miqt_string{}
	replaceStr_ms.data = C.CString(replaceStr)
	replaceStr_ms.len = C.size_t(len(replaceStr))
	defer C.free(unsafe.Pointer(replaceStr_ms.data))
	C.QsciScintilla_Replace(this.h, replaceStr_ms)
}

func (this *QsciScintilla) ResetFoldMarginColors() {
	C.QsciScintilla_ResetFoldMarginColors(this.h)
}

func (this *QsciScintilla) ResetHotspotBackgroundColor() {
	C.QsciScintilla_ResetHotspotBackgroundColor(this.h)
}

func (this *QsciScintilla) ResetHotspotForegroundColor() {
	C.QsciScintilla_ResetHotspotForegroundColor(this.h)
}

func (this *QsciScintilla) ScrollWidth() int {
	return (int)(C.QsciScintilla_ScrollWidth(this.h))
}

func (this *QsciScintilla) ScrollWidthTracking() bool {
	return (bool)(C.QsciScintilla_ScrollWidthTracking(this.h))
}

func (this *QsciScintilla) SetFoldMarginColors(fore *qt.QColor, back *qt.QColor) {
	C.QsciScintilla_SetFoldMarginColors(this.h, (*C.QColor)(fore.UnsafePointer()), (*C.QColor)(back.UnsafePointer()))
}

func (this *QsciScintilla) SetAnnotationDisplay(display QsciScintilla__AnnotationDisplay) {
	C.QsciScintilla_SetAnnotationDisplay(this.h, (C.int)(display))
}

func (this *QsciScintilla) SetAutoCompletionFillupsEnabled(enabled bool) {
	C.QsciScintilla_SetAutoCompletionFillupsEnabled(this.h, (C.bool)(enabled))
}

func (this *QsciScintilla) SetAutoCompletionFillups(fillups string) {
	fillups_Cstring := C.CString(fillups)
	defer C.free(unsafe.Pointer(fillups_Cstring))
	C.QsciScintilla_SetAutoCompletionFillups(this.h, fillups_Cstring)
}

func (this *QsciScintilla) SetAutoCompletionWordSeparators(separators []string) {
	// For the C ABI, malloc a C array of structs
	separators_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(separators))))
	defer C.free(unsafe.Pointer(separators_CArray))
	for i := range separators {
		separators_i_ms := C.struct_miqt_string{}
		separators_i_ms.data = C.CString(separators[i])
		separators_i_ms.len = C.size_t(len(separators[i]))
		defer C.free(unsafe.Pointer(separators_i_ms.data))
		separators_CArray[i] = separators_i_ms
	}
	separators_ma := &C.struct_miqt_array{len: C.size_t(len(separators)), data: unsafe.Pointer(separators_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(separators_ma))
	C.QsciScintilla_SetAutoCompletionWordSeparators(this.h, separators_ma)
}

func (this *QsciScintilla) SetCallTipsBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetCallTipsBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetCallTipsForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsHighlightColor(col *qt.QColor) {
	C.QsciScintilla_SetCallTipsHighlightColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsPosition(position QsciScintilla__CallTipsPosition) {
	C.QsciScintilla_SetCallTipsPosition(this.h, (C.int)(position))
}

func (this *QsciScintilla) SetCallTipsStyle(style QsciScintilla__CallTipsStyle) {
	C.QsciScintilla_SetCallTipsStyle(this.h, (C.int)(style))
}

func (this *QsciScintilla) SetCallTipsVisible(nr int) {
	C.QsciScintilla_SetCallTipsVisible(this.h, (C.int)(nr))
}

func (this *QsciScintilla) SetContractedFolds(folds []int) {
	// For the C ABI, malloc a C array of raw pointers
	folds_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(folds))))
	defer C.free(unsafe.Pointer(folds_CArray))
	for i := range folds {
		folds_CArray[i] = (C.int)(folds[i])
	}
	folds_ma := &C.struct_miqt_array{len: C.size_t(len(folds)), data: unsafe.Pointer(folds_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(folds_ma))
	C.QsciScintilla_SetContractedFolds(this.h, folds_ma)
}

func (this *QsciScintilla) SetDocument(document *QsciDocument) {
	C.QsciScintilla_SetDocument(this.h, document.cPointer())
}

func (this *QsciScintilla) AddEdgeColumn(colnr int, col *qt.QColor) {
	C.QsciScintilla_AddEdgeColumn(this.h, (C.int)(colnr), (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) ClearEdgeColumns() {
	C.QsciScintilla_ClearEdgeColumns(this.h)
}

func (this *QsciScintilla) SetEdgeColor(col *qt.QColor) {
	C.QsciScintilla_SetEdgeColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetEdgeColumn(colnr int) {
	C.QsciScintilla_SetEdgeColumn(this.h, (C.int)(colnr))
}

func (this *QsciScintilla) SetEdgeMode(mode QsciScintilla__EdgeMode) {
	C.QsciScintilla_SetEdgeMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetFirstVisibleLine(linenr int) {
	C.QsciScintilla_SetFirstVisibleLine(this.h, (C.int)(linenr))
}

func (this *QsciScintilla) SetIndicatorDrawUnder(under bool) {
	C.QsciScintilla_SetIndicatorDrawUnder(this.h, (C.bool)(under))
}

func (this *QsciScintilla) SetIndicatorForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetIndicatorForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndicatorHoverForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetIndicatorHoverForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndicatorHoverStyle(style QsciScintilla__IndicatorStyle) {
	C.QsciScintilla_SetIndicatorHoverStyle(this.h, (C.int)(style))
}

func (this *QsciScintilla) SetIndicatorOutlineColor(col *qt.QColor) {
	C.QsciScintilla_SetIndicatorOutlineColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginBackgroundColor(margin int, col *qt.QColor) {
	C.QsciScintilla_SetMarginBackgroundColor(this.h, (C.int)(margin), (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginOptions(options int) {
	C.QsciScintilla_SetMarginOptions(this.h, (C.int)(options))
}

func (this *QsciScintilla) SetMarginText(line int, text string, style int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_SetMarginText(this.h, (C.int)(line), text_ms, (C.int)(style))
}

func (this *QsciScintilla) SetMarginText2(line int, text string, style *QsciStyle) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_SetMarginText2(this.h, (C.int)(line), text_ms, style.cPointer())
}

func (this *QsciScintilla) SetMarginText3(line int, text *QsciStyledText) {
	C.QsciScintilla_SetMarginText3(this.h, (C.int)(line), text.cPointer())
}

func (this *QsciScintilla) SetMarginType(margin int, typeVal QsciScintilla__MarginType) {
	C.QsciScintilla_SetMarginType(this.h, (C.int)(margin), (C.int)(typeVal))
}

func (this *QsciScintilla) ClearMarginText() {
	C.QsciScintilla_ClearMarginText(this.h)
}

func (this *QsciScintilla) SetMargins(margins int) {
	C.QsciScintilla_SetMargins(this.h, (C.int)(margins))
}

func (this *QsciScintilla) SetMarkerBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetMarkerBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarkerForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetMarkerForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetMatchedBraceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetMatchedBraceForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceIndicator(indicatorNumber int) {
	C.QsciScintilla_SetMatchedBraceIndicator(this.h, (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ResetMatchedBraceIndicator() {
	C.QsciScintilla_ResetMatchedBraceIndicator(this.h)
}

func (this *QsciScintilla) SetScrollWidth(pixelWidth int) {
	C.QsciScintilla_SetScrollWidth(this.h, (C.int)(pixelWidth))
}

func (this *QsciScintilla) SetScrollWidthTracking(enabled bool) {
	C.QsciScintilla_SetScrollWidthTracking(this.h, (C.bool)(enabled))
}

func (this *QsciScintilla) SetTabDrawMode(mode QsciScintilla__TabDrawMode) {
	C.QsciScintilla_SetTabDrawMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetUnmatchedBraceBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetUnmatchedBraceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetUnmatchedBraceForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetUnmatchedBraceForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetUnmatchedBraceIndicator(indicatorNumber int) {
	C.QsciScintilla_SetUnmatchedBraceIndicator(this.h, (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ResetUnmatchedBraceIndicator() {
	C.QsciScintilla_ResetUnmatchedBraceIndicator(this.h)
}

func (this *QsciScintilla) SetWrapVisualFlags(endFlag QsciScintilla__WrapVisualFlag) {
	C.QsciScintilla_SetWrapVisualFlags(this.h, (C.int)(endFlag))
}

func (this *QsciScintilla) SelectedText() string {
	var _ms C.struct_miqt_string = C.QsciScintilla_SelectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) SelectionToEol() bool {
	return (bool)(C.QsciScintilla_SelectionToEol(this.h))
}

func (this *QsciScintilla) SetHotspotBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetHotspotBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetHotspotForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetHotspotForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetHotspotUnderline(enable bool) {
	C.QsciScintilla_SetHotspotUnderline(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetHotspotWrap(enable bool) {
	C.QsciScintilla_SetHotspotWrap(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetSelectionToEol(filled bool) {
	C.QsciScintilla_SetSelectionToEol(this.h, (C.bool)(filled))
}

func (this *QsciScintilla) SetExtraAscent(extra int) {
	C.QsciScintilla_SetExtraAscent(this.h, (C.int)(extra))
}

func (this *QsciScintilla) SetExtraDescent(extra int) {
	C.QsciScintilla_SetExtraDescent(this.h, (C.int)(extra))
}

func (this *QsciScintilla) SetOverwriteMode(overwrite bool) {
	C.QsciScintilla_SetOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QsciScintilla) SetWhitespaceBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetWhitespaceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetWhitespaceForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetWhitespaceForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetWhitespaceSize(size int) {
	C.QsciScintilla_SetWhitespaceSize(this.h, (C.int)(size))
}

func (this *QsciScintilla) SetWrapIndentMode(mode QsciScintilla__WrapIndentMode) {
	C.QsciScintilla_SetWrapIndentMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) ShowUserList(id int, list []string) {
	// For the C ABI, malloc a C array of structs
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := &C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(list_ma))
	C.QsciScintilla_ShowUserList(this.h, (C.int)(id), list_ma)
}

func (this *QsciScintilla) StandardCommands() *QsciCommandSet {
	return UnsafeNewQsciCommandSet(unsafe.Pointer(C.QsciScintilla_StandardCommands(this.h)))
}

func (this *QsciScintilla) TabDrawMode() QsciScintilla__TabDrawMode {
	return (QsciScintilla__TabDrawMode)(C.QsciScintilla_TabDrawMode(this.h))
}

func (this *QsciScintilla) TabIndents() bool {
	return (bool)(C.QsciScintilla_TabIndents(this.h))
}

func (this *QsciScintilla) TabWidth() int {
	return (int)(C.QsciScintilla_TabWidth(this.h))
}

func (this *QsciScintilla) Text() string {
	var _ms C.struct_miqt_string = C.QsciScintilla_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) TextWithLine(line int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_TextWithLine(this.h, (C.int)(line))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) Text2(start int, end int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_Text2(this.h, (C.int)(start), (C.int)(end))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) TextHeight(linenr int) int {
	return (int)(C.QsciScintilla_TextHeight(this.h, (C.int)(linenr)))
}

func (this *QsciScintilla) WhitespaceSize() int {
	return (int)(C.QsciScintilla_WhitespaceSize(this.h))
}

func (this *QsciScintilla) WhitespaceVisibility() QsciScintilla__WhitespaceVisibility {
	return (QsciScintilla__WhitespaceVisibility)(C.QsciScintilla_WhitespaceVisibility(this.h))
}

func (this *QsciScintilla) WordAtLineIndex(line int, index int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_WordAtLineIndex(this.h, (C.int)(line), (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) WordAtPoint(point *qt.QPoint) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_WordAtPoint(this.h, (*C.QPoint)(point.UnsafePointer()))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) WordCharacters() string {
	_ret := C.QsciScintilla_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciScintilla) WrapMode() QsciScintilla__WrapMode {
	return (QsciScintilla__WrapMode)(C.QsciScintilla_WrapMode(this.h))
}

func (this *QsciScintilla) WrapIndentMode() QsciScintilla__WrapIndentMode {
	return (QsciScintilla__WrapIndentMode)(C.QsciScintilla_WrapIndentMode(this.h))
}

func (this *QsciScintilla) Write(io *qt.QIODevice) bool {
	return (bool)(C.QsciScintilla_Write(this.h, (*C.QIODevice)(io.UnsafePointer())))
}

func (this *QsciScintilla) Append(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_Append(this.h, text_ms)
}

func (this *QsciScintilla) AutoCompleteFromAll() {
	C.QsciScintilla_AutoCompleteFromAll(this.h)
}

func (this *QsciScintilla) AutoCompleteFromAPIs() {
	C.QsciScintilla_AutoCompleteFromAPIs(this.h)
}

func (this *QsciScintilla) AutoCompleteFromDocument() {
	C.QsciScintilla_AutoCompleteFromDocument(this.h)
}

func (this *QsciScintilla) CallTip() {
	C.QsciScintilla_CallTip(this.h)
}

func (this *QsciScintilla) Clear() {
	C.QsciScintilla_Clear(this.h)
}

func (this *QsciScintilla) Copy() {
	C.QsciScintilla_Copy(this.h)
}

func (this *QsciScintilla) Cut() {
	C.QsciScintilla_Cut(this.h)
}

func (this *QsciScintilla) EnsureCursorVisible() {
	C.QsciScintilla_EnsureCursorVisible(this.h)
}

func (this *QsciScintilla) EnsureLineVisible(line int) {
	C.QsciScintilla_EnsureLineVisible(this.h, (C.int)(line))
}

func (this *QsciScintilla) FoldAll() {
	C.QsciScintilla_FoldAll(this.h)
}

func (this *QsciScintilla) FoldLine(line int) {
	C.QsciScintilla_FoldLine(this.h, (C.int)(line))
}

func (this *QsciScintilla) Indent(line int) {
	C.QsciScintilla_Indent(this.h, (C.int)(line))
}

func (this *QsciScintilla) Insert(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_Insert(this.h, text_ms)
}

func (this *QsciScintilla) InsertAt(text string, line int, index int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_InsertAt(this.h, text_ms, (C.int)(line), (C.int)(index))
}

func (this *QsciScintilla) MoveToMatchingBrace() {
	C.QsciScintilla_MoveToMatchingBrace(this.h)
}

func (this *QsciScintilla) Paste() {
	C.QsciScintilla_Paste(this.h)
}

func (this *QsciScintilla) Redo() {
	C.QsciScintilla_Redo(this.h)
}

func (this *QsciScintilla) RemoveSelectedText() {
	C.QsciScintilla_RemoveSelectedText(this.h)
}

func (this *QsciScintilla) ReplaceSelectedText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_ReplaceSelectedText(this.h, text_ms)
}

func (this *QsciScintilla) ResetSelectionBackgroundColor() {
	C.QsciScintilla_ResetSelectionBackgroundColor(this.h)
}

func (this *QsciScintilla) ResetSelectionForegroundColor() {
	C.QsciScintilla_ResetSelectionForegroundColor(this.h)
}

func (this *QsciScintilla) SelectAll() {
	C.QsciScintilla_SelectAll(this.h)
}

func (this *QsciScintilla) SelectToMatchingBrace() {
	C.QsciScintilla_SelectToMatchingBrace(this.h)
}

func (this *QsciScintilla) SetAutoCompletionCaseSensitivity(cs bool) {
	C.QsciScintilla_SetAutoCompletionCaseSensitivity(this.h, (C.bool)(cs))
}

func (this *QsciScintilla) SetAutoCompletionReplaceWord(replace bool) {
	C.QsciScintilla_SetAutoCompletionReplaceWord(this.h, (C.bool)(replace))
}

func (this *QsciScintilla) SetAutoCompletionShowSingle(single bool) {
	C.QsciScintilla_SetAutoCompletionShowSingle(this.h, (C.bool)(single))
}

func (this *QsciScintilla) SetAutoCompletionSource(source QsciScintilla__AutoCompletionSource) {
	C.QsciScintilla_SetAutoCompletionSource(this.h, (C.int)(source))
}

func (this *QsciScintilla) SetAutoCompletionThreshold(thresh int) {
	C.QsciScintilla_SetAutoCompletionThreshold(this.h, (C.int)(thresh))
}

func (this *QsciScintilla) SetAutoCompletionUseSingle(single QsciScintilla__AutoCompletionUseSingle) {
	C.QsciScintilla_SetAutoCompletionUseSingle(this.h, (C.int)(single))
}

func (this *QsciScintilla) SetAutoIndent(autoindent bool) {
	C.QsciScintilla_SetAutoIndent(this.h, (C.bool)(autoindent))
}

func (this *QsciScintilla) SetBraceMatching(bm QsciScintilla__BraceMatch) {
	C.QsciScintilla_SetBraceMatching(this.h, (C.int)(bm))
}

func (this *QsciScintilla) SetBackspaceUnindents(unindent bool) {
	C.QsciScintilla_SetBackspaceUnindents(this.h, (C.bool)(unindent))
}

func (this *QsciScintilla) SetCaretForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetCaretForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCaretLineBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetCaretLineBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCaretLineFrameWidth(width int) {
	C.QsciScintilla_SetCaretLineFrameWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetCaretLineVisible(enable bool) {
	C.QsciScintilla_SetCaretLineVisible(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetCaretWidth(width int) {
	C.QsciScintilla_SetCaretWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetColor(c *qt.QColor) {
	C.QsciScintilla_SetColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciScintilla) SetCursorPosition(line int, index int) {
	C.QsciScintilla_SetCursorPosition(this.h, (C.int)(line), (C.int)(index))
}

func (this *QsciScintilla) SetEolMode(mode QsciScintilla__EolMode) {
	C.QsciScintilla_SetEolMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetEolVisibility(visible bool) {
	C.QsciScintilla_SetEolVisibility(this.h, (C.bool)(visible))
}

func (this *QsciScintilla) SetFolding(fold QsciScintilla__FoldStyle) {
	C.QsciScintilla_SetFolding(this.h, (C.int)(fold))
}

func (this *QsciScintilla) SetIndentation(line int, indentation int) {
	C.QsciScintilla_SetIndentation(this.h, (C.int)(line), (C.int)(indentation))
}

func (this *QsciScintilla) SetIndentationGuides(enable bool) {
	C.QsciScintilla_SetIndentationGuides(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetIndentationGuidesBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetIndentationGuidesBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndentationGuidesForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetIndentationGuidesForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndentationsUseTabs(tabs bool) {
	C.QsciScintilla_SetIndentationsUseTabs(this.h, (C.bool)(tabs))
}

func (this *QsciScintilla) SetIndentationWidth(width int) {
	C.QsciScintilla_SetIndentationWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetLexer() {
	C.QsciScintilla_SetLexer(this.h)
}

func (this *QsciScintilla) SetMarginsBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetMarginsBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginsFont(f *qt.QFont) {
	C.QsciScintilla_SetMarginsFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginsForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetMarginsForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginLineNumbers(margin int, lnrs bool) {
	C.QsciScintilla_SetMarginLineNumbers(this.h, (C.int)(margin), (C.bool)(lnrs))
}

func (this *QsciScintilla) SetMarginMarkerMask(margin int, mask int) {
	C.QsciScintilla_SetMarginMarkerMask(this.h, (C.int)(margin), (C.int)(mask))
}

func (this *QsciScintilla) SetMarginSensitivity(margin int, sens bool) {
	C.QsciScintilla_SetMarginSensitivity(this.h, (C.int)(margin), (C.bool)(sens))
}

func (this *QsciScintilla) SetMarginWidth(margin int, width int) {
	C.QsciScintilla_SetMarginWidth(this.h, (C.int)(margin), (C.int)(width))
}

func (this *QsciScintilla) SetMarginWidth2(margin int, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QsciScintilla_SetMarginWidth2(this.h, (C.int)(margin), s_ms)
}

func (this *QsciScintilla) SetModified(m bool) {
	C.QsciScintilla_SetModified(this.h, (C.bool)(m))
}

func (this *QsciScintilla) SetPaper(c *qt.QColor) {
	C.QsciScintilla_SetPaper(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciScintilla) SetReadOnly(ro bool) {
	C.QsciScintilla_SetReadOnly(this.h, (C.bool)(ro))
}

func (this *QsciScintilla) SetSelection(lineFrom int, indexFrom int, lineTo int, indexTo int) {
	C.QsciScintilla_SetSelection(this.h, (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo))
}

func (this *QsciScintilla) SetSelectionBackgroundColor(col *qt.QColor) {
	C.QsciScintilla_SetSelectionBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetSelectionForegroundColor(col *qt.QColor) {
	C.QsciScintilla_SetSelectionForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetTabIndents(indent bool) {
	C.QsciScintilla_SetTabIndents(this.h, (C.bool)(indent))
}

func (this *QsciScintilla) SetTabWidth(width int) {
	C.QsciScintilla_SetTabWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_SetText(this.h, text_ms)
}

func (this *QsciScintilla) SetUtf8(cp bool) {
	C.QsciScintilla_SetUtf8(this.h, (C.bool)(cp))
}

func (this *QsciScintilla) SetWhitespaceVisibility(mode QsciScintilla__WhitespaceVisibility) {
	C.QsciScintilla_SetWhitespaceVisibility(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetWrapMode(mode QsciScintilla__WrapMode) {
	C.QsciScintilla_SetWrapMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) Undo() {
	C.QsciScintilla_Undo(this.h)
}

func (this *QsciScintilla) Unindent(line int) {
	C.QsciScintilla_Unindent(this.h, (C.int)(line))
}

func (this *QsciScintilla) ZoomIn(rangeVal int) {
	C.QsciScintilla_ZoomIn(this.h, (C.int)(rangeVal))
}

func (this *QsciScintilla) ZoomIn2() {
	C.QsciScintilla_ZoomIn2(this.h)
}

func (this *QsciScintilla) ZoomOut(rangeVal int) {
	C.QsciScintilla_ZoomOut(this.h, (C.int)(rangeVal))
}

func (this *QsciScintilla) ZoomOut2() {
	C.QsciScintilla_ZoomOut2(this.h)
}

func (this *QsciScintilla) ZoomTo(size int) {
	C.QsciScintilla_ZoomTo(this.h, (C.int)(size))
}

func (this *QsciScintilla) CursorPositionChanged(line int, index int) {
	C.QsciScintilla_CursorPositionChanged(this.h, (C.int)(line), (C.int)(index))
}
func (this *QsciScintilla) OnCursorPositionChanged(slot func(line int, index int)) {
	C.QsciScintilla_connect_CursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_CursorPositionChanged
func miqt_exec_callback_QsciScintilla_CursorPositionChanged(cb C.intptr_t, line C.int, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(line int, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	slotval2 := (int)(index)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintilla) CopyAvailable(yes bool) {
	C.QsciScintilla_CopyAvailable(this.h, (C.bool)(yes))
}
func (this *QsciScintilla) OnCopyAvailable(slot func(yes bool)) {
	C.QsciScintilla_connect_CopyAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_CopyAvailable
func miqt_exec_callback_QsciScintilla_CopyAvailable(cb C.intptr_t, yes C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(yes bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(yes)

	gofunc(slotval1)
}

func (this *QsciScintilla) IndicatorClicked(line int, index int, state qt.KeyboardModifier) {
	C.QsciScintilla_IndicatorClicked(this.h, (C.int)(line), (C.int)(index), (C.int)(state))
}
func (this *QsciScintilla) OnIndicatorClicked(slot func(line int, index int, state qt.KeyboardModifier)) {
	C.QsciScintilla_connect_IndicatorClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_IndicatorClicked
func miqt_exec_callback_QsciScintilla_IndicatorClicked(cb C.intptr_t, line C.int, index C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(line int, index int, state qt.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	slotval2 := (int)(index)

	slotval3 := (qt.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) IndicatorReleased(line int, index int, state qt.KeyboardModifier) {
	C.QsciScintilla_IndicatorReleased(this.h, (C.int)(line), (C.int)(index), (C.int)(state))
}
func (this *QsciScintilla) OnIndicatorReleased(slot func(line int, index int, state qt.KeyboardModifier)) {
	C.QsciScintilla_connect_IndicatorReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_IndicatorReleased
func miqt_exec_callback_QsciScintilla_IndicatorReleased(cb C.intptr_t, line C.int, index C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(line int, index int, state qt.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	slotval2 := (int)(index)

	slotval3 := (qt.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) LinesChanged() {
	C.QsciScintilla_LinesChanged(this.h)
}
func (this *QsciScintilla) OnLinesChanged(slot func()) {
	C.QsciScintilla_connect_LinesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_LinesChanged
func miqt_exec_callback_QsciScintilla_LinesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintilla) MarginClicked(margin int, line int, state qt.KeyboardModifier) {
	C.QsciScintilla_MarginClicked(this.h, (C.int)(margin), (C.int)(line), (C.int)(state))
}
func (this *QsciScintilla) OnMarginClicked(slot func(margin int, line int, state qt.KeyboardModifier)) {
	C.QsciScintilla_connect_MarginClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MarginClicked
func miqt_exec_callback_QsciScintilla_MarginClicked(cb C.intptr_t, margin C.int, line C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(margin int, line int, state qt.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (int)(line)

	slotval3 := (qt.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) MarginRightClicked(margin int, line int, state qt.KeyboardModifier) {
	C.QsciScintilla_MarginRightClicked(this.h, (C.int)(margin), (C.int)(line), (C.int)(state))
}
func (this *QsciScintilla) OnMarginRightClicked(slot func(margin int, line int, state qt.KeyboardModifier)) {
	C.QsciScintilla_connect_MarginRightClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MarginRightClicked
func miqt_exec_callback_QsciScintilla_MarginRightClicked(cb C.intptr_t, margin C.int, line C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(margin int, line int, state qt.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (int)(line)

	slotval3 := (qt.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) ModificationAttempted() {
	C.QsciScintilla_ModificationAttempted(this.h)
}
func (this *QsciScintilla) OnModificationAttempted(slot func()) {
	C.QsciScintilla_connect_ModificationAttempted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ModificationAttempted
func miqt_exec_callback_QsciScintilla_ModificationAttempted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintilla) ModificationChanged(m bool) {
	C.QsciScintilla_ModificationChanged(this.h, (C.bool)(m))
}
func (this *QsciScintilla) OnModificationChanged(slot func(m bool)) {
	C.QsciScintilla_connect_ModificationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ModificationChanged
func miqt_exec_callback_QsciScintilla_ModificationChanged(cb C.intptr_t, m C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(m bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(m)

	gofunc(slotval1)
}

func (this *QsciScintilla) SelectionChanged() {
	C.QsciScintilla_SelectionChanged(this.h)
}
func (this *QsciScintilla) OnSelectionChanged(slot func()) {
	C.QsciScintilla_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SelectionChanged
func miqt_exec_callback_QsciScintilla_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintilla) TextChanged() {
	C.QsciScintilla_TextChanged(this.h)
}
func (this *QsciScintilla) OnTextChanged(slot func()) {
	C.QsciScintilla_connect_TextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_TextChanged
func miqt_exec_callback_QsciScintilla_TextChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintilla) UserListActivated(id int, stringVal string) {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	C.QsciScintilla_UserListActivated(this.h, (C.int)(id), stringVal_ms)
}
func (this *QsciScintilla) OnUserListActivated(slot func(id int, stringVal string)) {
	C.QsciScintilla_connect_UserListActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_UserListActivated
func miqt_exec_callback_QsciScintilla_UserListActivated(cb C.intptr_t, id C.int, stringVal C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, stringVal string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	var stringVal_ms C.struct_miqt_string = stringVal
	stringVal_ret := C.GoStringN(stringVal_ms.data, C.int(int64(stringVal_ms.len)))
	C.free(unsafe.Pointer(stringVal_ms.data))
	slotval2 := stringVal_ret

	gofunc(slotval1, slotval2)
}

func QsciScintilla_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintilla_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintilla_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintilla_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) ClearAnnotations1(line int) {
	C.QsciScintilla_ClearAnnotations1(this.h, (C.int)(line))
}

func (this *QsciScintilla) FindFirst6(expr string, re bool, cs bool, wo bool, wrap bool, forward bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst6(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward)))
}

func (this *QsciScintilla) FindFirst7(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst7(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line)))
}

func (this *QsciScintilla) FindFirst8(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst8(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index)))
}

func (this *QsciScintilla) FindFirst9(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst9(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index), (C.bool)(show)))
}

func (this *QsciScintilla) FindFirst10(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst10(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index), (C.bool)(show), (C.bool)(posix)))
}

func (this *QsciScintilla) FindFirst11(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst11(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))
}

func (this *QsciScintilla) FindFirstInSelection5(expr string, re bool, cs bool, wo bool, forward bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirstInSelection5(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward)))
}

func (this *QsciScintilla) FindFirstInSelection6(expr string, re bool, cs bool, wo bool, forward bool, show bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirstInSelection6(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward), (C.bool)(show)))
}

func (this *QsciScintilla) FindFirstInSelection7(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirstInSelection7(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward), (C.bool)(show), (C.bool)(posix)))
}

func (this *QsciScintilla) FindFirstInSelection8(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirstInSelection8(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))
}

func (this *QsciScintilla) IndicatorDefine2(style QsciScintilla__IndicatorStyle, indicatorNumber int) int {
	return (int)(C.QsciScintilla_IndicatorDefine2(this.h, (C.int)(style), (C.int)(indicatorNumber)))
}

func (this *QsciScintilla) MarkerDefine2(sym QsciScintilla__MarkerSymbol, markerNumber int) int {
	return (int)(C.QsciScintilla_MarkerDefine2(this.h, (C.int)(sym), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDefine22(ch int8, markerNumber int) int {
	return (int)(C.QsciScintilla_MarkerDefine22(this.h, (C.char)(ch), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDefine23(pm *qt.QPixmap, markerNumber int) int {
	return (int)(C.QsciScintilla_MarkerDefine23(this.h, (*C.QPixmap)(pm.UnsafePointer()), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDefine24(im *qt.QImage, markerNumber int) int {
	return (int)(C.QsciScintilla_MarkerDefine24(this.h, (*C.QImage)(im.UnsafePointer()), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDelete2(linenr int, markerNumber int) {
	C.QsciScintilla_MarkerDelete2(this.h, (C.int)(linenr), (C.int)(markerNumber))
}

func (this *QsciScintilla) MarkerDeleteAll1(markerNumber int) {
	C.QsciScintilla_MarkerDeleteAll1(this.h, (C.int)(markerNumber))
}

func (this *QsciScintilla) Recolor1(start int) {
	C.QsciScintilla_Recolor1(this.h, (C.int)(start))
}

func (this *QsciScintilla) Recolor2(start int, end int) {
	C.QsciScintilla_Recolor2(this.h, (C.int)(start), (C.int)(end))
}

func (this *QsciScintilla) SetIndicatorDrawUnder2(under bool, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorDrawUnder2(this.h, (C.bool)(under), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorForegroundColor2(col *qt.QColor, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorHoverForegroundColor2(col *qt.QColor, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorHoverForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorHoverStyle2(style QsciScintilla__IndicatorStyle, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorHoverStyle2(this.h, (C.int)(style), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorOutlineColor2(col *qt.QColor, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorOutlineColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ClearMarginText1(line int) {
	C.QsciScintilla_ClearMarginText1(this.h, (C.int)(line))
}

func (this *QsciScintilla) SetMarkerBackgroundColor2(col *qt.QColor, markerNumber int) {
	C.QsciScintilla_SetMarkerBackgroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(markerNumber))
}

func (this *QsciScintilla) SetMarkerForegroundColor2(col *qt.QColor, markerNumber int) {
	C.QsciScintilla_SetMarkerForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(markerNumber))
}

func (this *QsciScintilla) SetWrapVisualFlags2(endFlag QsciScintilla__WrapVisualFlag, startFlag QsciScintilla__WrapVisualFlag) {
	C.QsciScintilla_SetWrapVisualFlags2(this.h, (C.int)(endFlag), (C.int)(startFlag))
}

func (this *QsciScintilla) SetWrapVisualFlags3(endFlag QsciScintilla__WrapVisualFlag, startFlag QsciScintilla__WrapVisualFlag, indent int) {
	C.QsciScintilla_SetWrapVisualFlags3(this.h, (C.int)(endFlag), (C.int)(startFlag), (C.int)(indent))
}

func (this *QsciScintilla) FoldAll1(children bool) {
	C.QsciScintilla_FoldAll1(this.h, (C.bool)(children))
}

func (this *QsciScintilla) SelectAll1(selectVal bool) {
	C.QsciScintilla_SelectAll1(this.h, (C.bool)(selectVal))
}

func (this *QsciScintilla) SetFolding2(fold QsciScintilla__FoldStyle, margin int) {
	C.QsciScintilla_SetFolding2(this.h, (C.int)(fold), (C.int)(margin))
}

func (this *QsciScintilla) SetLexer1(lexer *QsciLexer) {
	C.QsciScintilla_SetLexer1(this.h, lexer.cPointer())
}

// Delete this object from C++ memory.
func (this *QsciScintilla) Delete() {
	C.QsciScintilla_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciScintilla) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciScintilla) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla6

/*

#include "gen_qsciscintilla.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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

// newQsciScintilla constructs the type using only CGO pointers.
func newQsciScintilla(h *C.QsciScintilla) *QsciScintilla {
	if h == nil {
		return nil
	}
	var outptr_QsciScintillaBase *C.QsciScintillaBase = nil
	C.QsciScintilla_virtbase(h, &outptr_QsciScintillaBase)

	return &QsciScintilla{h: h,
		QsciScintillaBase: newQsciScintillaBase(outptr_QsciScintillaBase)}
}

// UnsafeNewQsciScintilla constructs the type using only unsafe pointers.
func UnsafeNewQsciScintilla(h unsafe.Pointer) *QsciScintilla {
	return newQsciScintilla((*C.QsciScintilla)(h))
}

// NewQsciScintilla constructs a new QsciScintilla object.
func NewQsciScintilla(parent *qt6.QWidget) *QsciScintilla {

	return newQsciScintilla(C.QsciScintilla_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQsciScintilla2 constructs a new QsciScintilla object.
func NewQsciScintilla2() *QsciScintilla {

	return newQsciScintilla(C.QsciScintilla_new2())
}

func (this *QsciScintilla) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciScintilla_metaObject(this.h)))
}

func (this *QsciScintilla) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciScintilla_metacast(this.h, param1_Cstring))
}

func QsciScintilla_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) ApiContext(pos int, context_start *int, last_word_start *int) []string {
	var _ma C.struct_miqt_array = C.QsciScintilla_apiContext(this.h, (C.int)(pos), (*C.int)(unsafe.Pointer(context_start)), (*C.int)(unsafe.Pointer(last_word_start)))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QsciScintilla) Annotate(line int, text string, style int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_annotate(this.h, (C.int)(line), text_ms, (C.int)(style))
}

func (this *QsciScintilla) Annotate2(line int, text string, style *QsciStyle) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_annotate2(this.h, (C.int)(line), text_ms, style.cPointer())
}

func (this *QsciScintilla) Annotate3(line int, text *QsciStyledText) {
	C.QsciScintilla_annotate3(this.h, (C.int)(line), text.cPointer())
}

func (this *QsciScintilla) Annotation(line int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_annotation(this.h, (C.int)(line))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) AnnotationDisplay() QsciScintilla__AnnotationDisplay {
	return (QsciScintilla__AnnotationDisplay)(C.QsciScintilla_annotationDisplay(this.h))
}

func (this *QsciScintilla) ClearAnnotations() {
	C.QsciScintilla_clearAnnotations(this.h)
}

func (this *QsciScintilla) AutoCompletionCaseSensitivity() bool {
	return (bool)(C.QsciScintilla_autoCompletionCaseSensitivity(this.h))
}

func (this *QsciScintilla) AutoCompletionFillupsEnabled() bool {
	return (bool)(C.QsciScintilla_autoCompletionFillupsEnabled(this.h))
}

func (this *QsciScintilla) AutoCompletionReplaceWord() bool {
	return (bool)(C.QsciScintilla_autoCompletionReplaceWord(this.h))
}

func (this *QsciScintilla) AutoCompletionShowSingle() bool {
	return (bool)(C.QsciScintilla_autoCompletionShowSingle(this.h))
}

func (this *QsciScintilla) AutoCompletionSource() QsciScintilla__AutoCompletionSource {
	return (QsciScintilla__AutoCompletionSource)(C.QsciScintilla_autoCompletionSource(this.h))
}

func (this *QsciScintilla) AutoCompletionThreshold() int {
	return (int)(C.QsciScintilla_autoCompletionThreshold(this.h))
}

func (this *QsciScintilla) AutoCompletionUseSingle() QsciScintilla__AutoCompletionUseSingle {
	return (QsciScintilla__AutoCompletionUseSingle)(C.QsciScintilla_autoCompletionUseSingle(this.h))
}

func (this *QsciScintilla) AutoIndent() bool {
	return (bool)(C.QsciScintilla_autoIndent(this.h))
}

func (this *QsciScintilla) BackspaceUnindents() bool {
	return (bool)(C.QsciScintilla_backspaceUnindents(this.h))
}

func (this *QsciScintilla) BeginUndoAction() {
	C.QsciScintilla_beginUndoAction(this.h)
}

func (this *QsciScintilla) BraceMatching() QsciScintilla__BraceMatch {
	return (QsciScintilla__BraceMatch)(C.QsciScintilla_braceMatching(this.h))
}

func (this *QsciScintilla) Bytes(start int, end int) []byte {
	var _bytearray C.struct_miqt_string = C.QsciScintilla_bytes(this.h, (C.int)(start), (C.int)(end))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QsciScintilla) CallTipsPosition() QsciScintilla__CallTipsPosition {
	return (QsciScintilla__CallTipsPosition)(C.QsciScintilla_callTipsPosition(this.h))
}

func (this *QsciScintilla) CallTipsStyle() QsciScintilla__CallTipsStyle {
	return (QsciScintilla__CallTipsStyle)(C.QsciScintilla_callTipsStyle(this.h))
}

func (this *QsciScintilla) CallTipsVisible() int {
	return (int)(C.QsciScintilla_callTipsVisible(this.h))
}

func (this *QsciScintilla) CancelFind() {
	C.QsciScintilla_cancelFind(this.h)
}

func (this *QsciScintilla) CancelList() {
	C.QsciScintilla_cancelList(this.h)
}

func (this *QsciScintilla) CaseSensitive() bool {
	return (bool)(C.QsciScintilla_caseSensitive(this.h))
}

func (this *QsciScintilla) ClearFolds() {
	C.QsciScintilla_clearFolds(this.h)
}

func (this *QsciScintilla) ClearIndicatorRange(lineFrom int, indexFrom int, lineTo int, indexTo int, indicatorNumber int) {
	C.QsciScintilla_clearIndicatorRange(this.h, (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ClearRegisteredImages() {
	C.QsciScintilla_clearRegisteredImages(this.h)
}

func (this *QsciScintilla) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) ContractedFolds() []int {
	var _ma C.struct_miqt_array = C.QsciScintilla_contractedFolds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QsciScintilla) ConvertEols(mode QsciScintilla__EolMode) {
	C.QsciScintilla_convertEols(this.h, (C.int)(mode))
}

func (this *QsciScintilla) CreateStandardContextMenu() *qt6.QMenu {
	return qt6.UnsafeNewQMenu(unsafe.Pointer(C.QsciScintilla_createStandardContextMenu(this.h)))
}

func (this *QsciScintilla) Document() *QsciDocument {
	_goptr := newQsciDocument(C.QsciScintilla_document(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) EndUndoAction() {
	C.QsciScintilla_endUndoAction(this.h)
}

func (this *QsciScintilla) EdgeColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_edgeColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) EdgeColumn() int {
	return (int)(C.QsciScintilla_edgeColumn(this.h))
}

func (this *QsciScintilla) EdgeMode() QsciScintilla__EdgeMode {
	return (QsciScintilla__EdgeMode)(C.QsciScintilla_edgeMode(this.h))
}

func (this *QsciScintilla) SetFont(f *qt6.QFont) {
	C.QsciScintilla_setFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciScintilla) EolMode() QsciScintilla__EolMode {
	return (QsciScintilla__EolMode)(C.QsciScintilla_eolMode(this.h))
}

func (this *QsciScintilla) EolVisibility() bool {
	return (bool)(C.QsciScintilla_eolVisibility(this.h))
}

func (this *QsciScintilla) ExtraAscent() int {
	return (int)(C.QsciScintilla_extraAscent(this.h))
}

func (this *QsciScintilla) ExtraDescent() int {
	return (int)(C.QsciScintilla_extraDescent(this.h))
}

func (this *QsciScintilla) FillIndicatorRange(lineFrom int, indexFrom int, lineTo int, indexTo int, indicatorNumber int) {
	C.QsciScintilla_fillIndicatorRange(this.h, (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) FindFirst(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_findFirst(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))
}

func (this *QsciScintilla) FindFirstInSelection(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_findFirstInSelection(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))
}

func (this *QsciScintilla) FindNext() bool {
	return (bool)(C.QsciScintilla_findNext(this.h))
}

func (this *QsciScintilla) FindMatchingBrace(brace *int64, other *int64, mode QsciScintilla__BraceMatch) bool {
	return (bool)(C.QsciScintilla_findMatchingBrace(this.h, (*C.long)(unsafe.Pointer(brace)), (*C.long)(unsafe.Pointer(other)), (C.int)(mode)))
}

func (this *QsciScintilla) FirstVisibleLine() int {
	return (int)(C.QsciScintilla_firstVisibleLine(this.h))
}

func (this *QsciScintilla) Folding() QsciScintilla__FoldStyle {
	return (QsciScintilla__FoldStyle)(C.QsciScintilla_folding(this.h))
}

func (this *QsciScintilla) GetCursorPosition(line *int, index *int) {
	C.QsciScintilla_getCursorPosition(this.h, (*C.int)(unsafe.Pointer(line)), (*C.int)(unsafe.Pointer(index)))
}

func (this *QsciScintilla) GetSelection(lineFrom *int, indexFrom *int, lineTo *int, indexTo *int) {
	C.QsciScintilla_getSelection(this.h, (*C.int)(unsafe.Pointer(lineFrom)), (*C.int)(unsafe.Pointer(indexFrom)), (*C.int)(unsafe.Pointer(lineTo)), (*C.int)(unsafe.Pointer(indexTo)))
}

func (this *QsciScintilla) HasSelectedText() bool {
	return (bool)(C.QsciScintilla_hasSelectedText(this.h))
}

func (this *QsciScintilla) Indentation(line int) int {
	return (int)(C.QsciScintilla_indentation(this.h, (C.int)(line)))
}

func (this *QsciScintilla) IndentationGuides() bool {
	return (bool)(C.QsciScintilla_indentationGuides(this.h))
}

func (this *QsciScintilla) IndentationsUseTabs() bool {
	return (bool)(C.QsciScintilla_indentationsUseTabs(this.h))
}

func (this *QsciScintilla) IndentationWidth() int {
	return (int)(C.QsciScintilla_indentationWidth(this.h))
}

func (this *QsciScintilla) IndicatorDefine(style QsciScintilla__IndicatorStyle) int {
	return (int)(C.QsciScintilla_indicatorDefine(this.h, (C.int)(style)))
}

func (this *QsciScintilla) IndicatorDrawUnder(indicatorNumber int) bool {
	return (bool)(C.QsciScintilla_indicatorDrawUnder(this.h, (C.int)(indicatorNumber)))
}

func (this *QsciScintilla) IsCallTipActive() bool {
	return (bool)(C.QsciScintilla_isCallTipActive(this.h))
}

func (this *QsciScintilla) IsListActive() bool {
	return (bool)(C.QsciScintilla_isListActive(this.h))
}

func (this *QsciScintilla) IsModified() bool {
	return (bool)(C.QsciScintilla_isModified(this.h))
}

func (this *QsciScintilla) IsReadOnly() bool {
	return (bool)(C.QsciScintilla_isReadOnly(this.h))
}

func (this *QsciScintilla) IsRedoAvailable() bool {
	return (bool)(C.QsciScintilla_isRedoAvailable(this.h))
}

func (this *QsciScintilla) IsUndoAvailable() bool {
	return (bool)(C.QsciScintilla_isUndoAvailable(this.h))
}

func (this *QsciScintilla) IsUtf8() bool {
	return (bool)(C.QsciScintilla_isUtf8(this.h))
}

func (this *QsciScintilla) IsWordCharacter(ch int8) bool {
	return (bool)(C.QsciScintilla_isWordCharacter(this.h, (C.char)(ch)))
}

func (this *QsciScintilla) LineAt(point *qt6.QPoint) int {
	return (int)(C.QsciScintilla_lineAt(this.h, (*C.QPoint)(point.UnsafePointer())))
}

func (this *QsciScintilla) LineIndexFromPosition(position int, line *int, index *int) {
	C.QsciScintilla_lineIndexFromPosition(this.h, (C.int)(position), (*C.int)(unsafe.Pointer(line)), (*C.int)(unsafe.Pointer(index)))
}

func (this *QsciScintilla) LineLength(line int) int {
	return (int)(C.QsciScintilla_lineLength(this.h, (C.int)(line)))
}

func (this *QsciScintilla) Lines() int {
	return (int)(C.QsciScintilla_lines(this.h))
}

func (this *QsciScintilla) Length() int {
	return (int)(C.QsciScintilla_length(this.h))
}

func (this *QsciScintilla) Lexer() *QsciLexer {
	return newQsciLexer(C.QsciScintilla_lexer(this.h))
}

func (this *QsciScintilla) MarginBackgroundColor(margin int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_marginBackgroundColor(this.h, (C.int)(margin))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) MarginLineNumbers(margin int) bool {
	return (bool)(C.QsciScintilla_marginLineNumbers(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginMarkerMask(margin int) int {
	return (int)(C.QsciScintilla_marginMarkerMask(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginOptions() int {
	return (int)(C.QsciScintilla_marginOptions(this.h))
}

func (this *QsciScintilla) MarginSensitivity(margin int) bool {
	return (bool)(C.QsciScintilla_marginSensitivity(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginType(margin int) QsciScintilla__MarginType {
	return (QsciScintilla__MarginType)(C.QsciScintilla_marginType(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) MarginWidth(margin int) int {
	return (int)(C.QsciScintilla_marginWidth(this.h, (C.int)(margin)))
}

func (this *QsciScintilla) Margins() int {
	return (int)(C.QsciScintilla_margins(this.h))
}

func (this *QsciScintilla) MarkerDefine(sym QsciScintilla__MarkerSymbol) int {
	return (int)(C.QsciScintilla_markerDefine(this.h, (C.int)(sym)))
}

func (this *QsciScintilla) MarkerDefineWithCh(ch int8) int {
	return (int)(C.QsciScintilla_markerDefineWithCh(this.h, (C.char)(ch)))
}

func (this *QsciScintilla) MarkerDefineWithPm(pm *qt6.QPixmap) int {
	return (int)(C.QsciScintilla_markerDefineWithPm(this.h, (*C.QPixmap)(pm.UnsafePointer())))
}

func (this *QsciScintilla) MarkerDefineWithIm(im *qt6.QImage) int {
	return (int)(C.QsciScintilla_markerDefineWithIm(this.h, (*C.QImage)(im.UnsafePointer())))
}

func (this *QsciScintilla) MarkerAdd(linenr int, markerNumber int) int {
	return (int)(C.QsciScintilla_markerAdd(this.h, (C.int)(linenr), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkersAtLine(linenr int) uint {
	return (uint)(C.QsciScintilla_markersAtLine(this.h, (C.int)(linenr)))
}

func (this *QsciScintilla) MarkerDelete(linenr int) {
	C.QsciScintilla_markerDelete(this.h, (C.int)(linenr))
}

func (this *QsciScintilla) MarkerDeleteAll() {
	C.QsciScintilla_markerDeleteAll(this.h)
}

func (this *QsciScintilla) MarkerDeleteHandle(mhandle int) {
	C.QsciScintilla_markerDeleteHandle(this.h, (C.int)(mhandle))
}

func (this *QsciScintilla) MarkerLine(mhandle int) int {
	return (int)(C.QsciScintilla_markerLine(this.h, (C.int)(mhandle)))
}

func (this *QsciScintilla) MarkerFindNext(linenr int, mask uint) int {
	return (int)(C.QsciScintilla_markerFindNext(this.h, (C.int)(linenr), (C.uint)(mask)))
}

func (this *QsciScintilla) MarkerFindPrevious(linenr int, mask uint) int {
	return (int)(C.QsciScintilla_markerFindPrevious(this.h, (C.int)(linenr), (C.uint)(mask)))
}

func (this *QsciScintilla) OverwriteMode() bool {
	return (bool)(C.QsciScintilla_overwriteMode(this.h))
}

func (this *QsciScintilla) Paper() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_paper(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) PositionFromLineIndex(line int, index int) int {
	return (int)(C.QsciScintilla_positionFromLineIndex(this.h, (C.int)(line), (C.int)(index)))
}

func (this *QsciScintilla) Read(io *qt6.QIODevice) bool {
	return (bool)(C.QsciScintilla_read(this.h, (*C.QIODevice)(io.UnsafePointer())))
}

func (this *QsciScintilla) Recolor(start int, end int) {
	C.QsciScintilla_recolor(this.h, (C.int)(start), (C.int)(end))
}

func (this *QsciScintilla) RegisterImage(id int, pm *qt6.QPixmap) {
	C.QsciScintilla_registerImage(this.h, (C.int)(id), (*C.QPixmap)(pm.UnsafePointer()))
}

func (this *QsciScintilla) RegisterImage2(id int, im *qt6.QImage) {
	C.QsciScintilla_registerImage2(this.h, (C.int)(id), (*C.QImage)(im.UnsafePointer()))
}

func (this *QsciScintilla) Replace(replaceStr string) {
	replaceStr_ms := C.struct_miqt_string{}
	replaceStr_ms.data = C.CString(replaceStr)
	replaceStr_ms.len = C.size_t(len(replaceStr))
	defer C.free(unsafe.Pointer(replaceStr_ms.data))
	C.QsciScintilla_replace(this.h, replaceStr_ms)
}

func (this *QsciScintilla) ResetFoldMarginColors() {
	C.QsciScintilla_resetFoldMarginColors(this.h)
}

func (this *QsciScintilla) ResetHotspotBackgroundColor() {
	C.QsciScintilla_resetHotspotBackgroundColor(this.h)
}

func (this *QsciScintilla) ResetHotspotForegroundColor() {
	C.QsciScintilla_resetHotspotForegroundColor(this.h)
}

func (this *QsciScintilla) ScrollWidth() int {
	return (int)(C.QsciScintilla_scrollWidth(this.h))
}

func (this *QsciScintilla) ScrollWidthTracking() bool {
	return (bool)(C.QsciScintilla_scrollWidthTracking(this.h))
}

func (this *QsciScintilla) SetFoldMarginColors(fore *qt6.QColor, back *qt6.QColor) {
	C.QsciScintilla_setFoldMarginColors(this.h, (*C.QColor)(fore.UnsafePointer()), (*C.QColor)(back.UnsafePointer()))
}

func (this *QsciScintilla) SetAnnotationDisplay(display QsciScintilla__AnnotationDisplay) {
	C.QsciScintilla_setAnnotationDisplay(this.h, (C.int)(display))
}

func (this *QsciScintilla) SetAutoCompletionFillupsEnabled(enabled bool) {
	C.QsciScintilla_setAutoCompletionFillupsEnabled(this.h, (C.bool)(enabled))
}

func (this *QsciScintilla) SetAutoCompletionFillups(fillups string) {
	fillups_Cstring := C.CString(fillups)
	defer C.free(unsafe.Pointer(fillups_Cstring))
	C.QsciScintilla_setAutoCompletionFillups(this.h, fillups_Cstring)
}

func (this *QsciScintilla) SetAutoCompletionWordSeparators(separators []string) {
	separators_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(separators))))
	defer C.free(unsafe.Pointer(separators_CArray))
	for i := range separators {
		separators_i_ms := C.struct_miqt_string{}
		separators_i_ms.data = C.CString(separators[i])
		separators_i_ms.len = C.size_t(len(separators[i]))
		defer C.free(unsafe.Pointer(separators_i_ms.data))
		separators_CArray[i] = separators_i_ms
	}
	separators_ma := C.struct_miqt_array{len: C.size_t(len(separators)), data: unsafe.Pointer(separators_CArray)}
	C.QsciScintilla_setAutoCompletionWordSeparators(this.h, separators_ma)
}

func (this *QsciScintilla) SetCallTipsBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setCallTipsBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setCallTipsForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsHighlightColor(col *qt6.QColor) {
	C.QsciScintilla_setCallTipsHighlightColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsPosition(position QsciScintilla__CallTipsPosition) {
	C.QsciScintilla_setCallTipsPosition(this.h, (C.int)(position))
}

func (this *QsciScintilla) SetCallTipsStyle(style QsciScintilla__CallTipsStyle) {
	C.QsciScintilla_setCallTipsStyle(this.h, (C.int)(style))
}

func (this *QsciScintilla) SetCallTipsVisible(nr int) {
	C.QsciScintilla_setCallTipsVisible(this.h, (C.int)(nr))
}

func (this *QsciScintilla) SetContractedFolds(folds []int) {
	folds_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(folds))))
	defer C.free(unsafe.Pointer(folds_CArray))
	for i := range folds {
		folds_CArray[i] = (C.int)(folds[i])
	}
	folds_ma := C.struct_miqt_array{len: C.size_t(len(folds)), data: unsafe.Pointer(folds_CArray)}
	C.QsciScintilla_setContractedFolds(this.h, folds_ma)
}

func (this *QsciScintilla) SetDocument(document *QsciDocument) {
	C.QsciScintilla_setDocument(this.h, document.cPointer())
}

func (this *QsciScintilla) AddEdgeColumn(colnr int, col *qt6.QColor) {
	C.QsciScintilla_addEdgeColumn(this.h, (C.int)(colnr), (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) ClearEdgeColumns() {
	C.QsciScintilla_clearEdgeColumns(this.h)
}

func (this *QsciScintilla) SetEdgeColor(col *qt6.QColor) {
	C.QsciScintilla_setEdgeColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetEdgeColumn(colnr int) {
	C.QsciScintilla_setEdgeColumn(this.h, (C.int)(colnr))
}

func (this *QsciScintilla) SetEdgeMode(mode QsciScintilla__EdgeMode) {
	C.QsciScintilla_setEdgeMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetFirstVisibleLine(linenr int) {
	C.QsciScintilla_setFirstVisibleLine(this.h, (C.int)(linenr))
}

func (this *QsciScintilla) SetIndicatorDrawUnder(under bool) {
	C.QsciScintilla_setIndicatorDrawUnder(this.h, (C.bool)(under))
}

func (this *QsciScintilla) SetIndicatorForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setIndicatorForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndicatorHoverForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setIndicatorHoverForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndicatorHoverStyle(style QsciScintilla__IndicatorStyle) {
	C.QsciScintilla_setIndicatorHoverStyle(this.h, (C.int)(style))
}

func (this *QsciScintilla) SetIndicatorOutlineColor(col *qt6.QColor) {
	C.QsciScintilla_setIndicatorOutlineColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginBackgroundColor(margin int, col *qt6.QColor) {
	C.QsciScintilla_setMarginBackgroundColor(this.h, (C.int)(margin), (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginOptions(options int) {
	C.QsciScintilla_setMarginOptions(this.h, (C.int)(options))
}

func (this *QsciScintilla) SetMarginText(line int, text string, style int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_setMarginText(this.h, (C.int)(line), text_ms, (C.int)(style))
}

func (this *QsciScintilla) SetMarginText2(line int, text string, style *QsciStyle) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_setMarginText2(this.h, (C.int)(line), text_ms, style.cPointer())
}

func (this *QsciScintilla) SetMarginText3(line int, text *QsciStyledText) {
	C.QsciScintilla_setMarginText3(this.h, (C.int)(line), text.cPointer())
}

func (this *QsciScintilla) SetMarginType(margin int, typeVal QsciScintilla__MarginType) {
	C.QsciScintilla_setMarginType(this.h, (C.int)(margin), (C.int)(typeVal))
}

func (this *QsciScintilla) ClearMarginText() {
	C.QsciScintilla_clearMarginText(this.h)
}

func (this *QsciScintilla) SetMargins(margins int) {
	C.QsciScintilla_setMargins(this.h, (C.int)(margins))
}

func (this *QsciScintilla) SetMarkerBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setMarkerBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarkerForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setMarkerForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setMatchedBraceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setMatchedBraceForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceIndicator(indicatorNumber int) {
	C.QsciScintilla_setMatchedBraceIndicator(this.h, (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ResetMatchedBraceIndicator() {
	C.QsciScintilla_resetMatchedBraceIndicator(this.h)
}

func (this *QsciScintilla) SetScrollWidth(pixelWidth int) {
	C.QsciScintilla_setScrollWidth(this.h, (C.int)(pixelWidth))
}

func (this *QsciScintilla) SetScrollWidthTracking(enabled bool) {
	C.QsciScintilla_setScrollWidthTracking(this.h, (C.bool)(enabled))
}

func (this *QsciScintilla) SetTabDrawMode(mode QsciScintilla__TabDrawMode) {
	C.QsciScintilla_setTabDrawMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetUnmatchedBraceBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setUnmatchedBraceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetUnmatchedBraceForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setUnmatchedBraceForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetUnmatchedBraceIndicator(indicatorNumber int) {
	C.QsciScintilla_setUnmatchedBraceIndicator(this.h, (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ResetUnmatchedBraceIndicator() {
	C.QsciScintilla_resetUnmatchedBraceIndicator(this.h)
}

func (this *QsciScintilla) SetWrapVisualFlags(endFlag QsciScintilla__WrapVisualFlag) {
	C.QsciScintilla_setWrapVisualFlags(this.h, (C.int)(endFlag))
}

func (this *QsciScintilla) SelectedText() string {
	var _ms C.struct_miqt_string = C.QsciScintilla_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) SelectionToEol() bool {
	return (bool)(C.QsciScintilla_selectionToEol(this.h))
}

func (this *QsciScintilla) SetHotspotBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setHotspotBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetHotspotForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setHotspotForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetHotspotUnderline(enable bool) {
	C.QsciScintilla_setHotspotUnderline(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetHotspotWrap(enable bool) {
	C.QsciScintilla_setHotspotWrap(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetSelectionToEol(filled bool) {
	C.QsciScintilla_setSelectionToEol(this.h, (C.bool)(filled))
}

func (this *QsciScintilla) SetExtraAscent(extra int) {
	C.QsciScintilla_setExtraAscent(this.h, (C.int)(extra))
}

func (this *QsciScintilla) SetExtraDescent(extra int) {
	C.QsciScintilla_setExtraDescent(this.h, (C.int)(extra))
}

func (this *QsciScintilla) SetOverwriteMode(overwrite bool) {
	C.QsciScintilla_setOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QsciScintilla) SetWhitespaceBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setWhitespaceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetWhitespaceForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setWhitespaceForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetWhitespaceSize(size int) {
	C.QsciScintilla_setWhitespaceSize(this.h, (C.int)(size))
}

func (this *QsciScintilla) SetWrapIndentMode(mode QsciScintilla__WrapIndentMode) {
	C.QsciScintilla_setWrapIndentMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) ShowUserList(id int, list []string) {
	list_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_i_ms := C.struct_miqt_string{}
		list_i_ms.data = C.CString(list[i])
		list_i_ms.len = C.size_t(len(list[i]))
		defer C.free(unsafe.Pointer(list_i_ms.data))
		list_CArray[i] = list_i_ms
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QsciScintilla_showUserList(this.h, (C.int)(id), list_ma)
}

func (this *QsciScintilla) StandardCommands() *QsciCommandSet {
	return newQsciCommandSet(C.QsciScintilla_standardCommands(this.h))
}

func (this *QsciScintilla) TabDrawMode() QsciScintilla__TabDrawMode {
	return (QsciScintilla__TabDrawMode)(C.QsciScintilla_tabDrawMode(this.h))
}

func (this *QsciScintilla) TabIndents() bool {
	return (bool)(C.QsciScintilla_tabIndents(this.h))
}

func (this *QsciScintilla) TabWidth() int {
	return (int)(C.QsciScintilla_tabWidth(this.h))
}

func (this *QsciScintilla) Text() string {
	var _ms C.struct_miqt_string = C.QsciScintilla_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) TextWithLine(line int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_textWithLine(this.h, (C.int)(line))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) Text2(start int, end int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_text2(this.h, (C.int)(start), (C.int)(end))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) TextHeight(linenr int) int {
	return (int)(C.QsciScintilla_textHeight(this.h, (C.int)(linenr)))
}

func (this *QsciScintilla) WhitespaceSize() int {
	return (int)(C.QsciScintilla_whitespaceSize(this.h))
}

func (this *QsciScintilla) WhitespaceVisibility() QsciScintilla__WhitespaceVisibility {
	return (QsciScintilla__WhitespaceVisibility)(C.QsciScintilla_whitespaceVisibility(this.h))
}

func (this *QsciScintilla) WordAtLineIndex(line int, index int) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_wordAtLineIndex(this.h, (C.int)(line), (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) WordAtPoint(point *qt6.QPoint) string {
	var _ms C.struct_miqt_string = C.QsciScintilla_wordAtPoint(this.h, (*C.QPoint)(point.UnsafePointer()))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) WordCharacters() string {
	_ret := C.QsciScintilla_wordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciScintilla) WrapMode() QsciScintilla__WrapMode {
	return (QsciScintilla__WrapMode)(C.QsciScintilla_wrapMode(this.h))
}

func (this *QsciScintilla) WrapIndentMode() QsciScintilla__WrapIndentMode {
	return (QsciScintilla__WrapIndentMode)(C.QsciScintilla_wrapIndentMode(this.h))
}

func (this *QsciScintilla) Write(io *qt6.QIODevice) bool {
	return (bool)(C.QsciScintilla_write(this.h, (*C.QIODevice)(io.UnsafePointer())))
}

func (this *QsciScintilla) Append(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_append(this.h, text_ms)
}

func (this *QsciScintilla) AutoCompleteFromAll() {
	C.QsciScintilla_autoCompleteFromAll(this.h)
}

func (this *QsciScintilla) AutoCompleteFromAPIs() {
	C.QsciScintilla_autoCompleteFromAPIs(this.h)
}

func (this *QsciScintilla) AutoCompleteFromDocument() {
	C.QsciScintilla_autoCompleteFromDocument(this.h)
}

func (this *QsciScintilla) CallTip() {
	C.QsciScintilla_callTip(this.h)
}

func (this *QsciScintilla) Clear() {
	C.QsciScintilla_clear(this.h)
}

func (this *QsciScintilla) Copy() {
	C.QsciScintilla_copy(this.h)
}

func (this *QsciScintilla) Cut() {
	C.QsciScintilla_cut(this.h)
}

func (this *QsciScintilla) EnsureCursorVisible() {
	C.QsciScintilla_ensureCursorVisible(this.h)
}

func (this *QsciScintilla) EnsureLineVisible(line int) {
	C.QsciScintilla_ensureLineVisible(this.h, (C.int)(line))
}

func (this *QsciScintilla) FoldAll(children bool) {
	C.QsciScintilla_foldAll(this.h, (C.bool)(children))
}

func (this *QsciScintilla) FoldLine(line int) {
	C.QsciScintilla_foldLine(this.h, (C.int)(line))
}

func (this *QsciScintilla) Indent(line int) {
	C.QsciScintilla_indent(this.h, (C.int)(line))
}

func (this *QsciScintilla) Insert(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_insert(this.h, text_ms)
}

func (this *QsciScintilla) InsertAt(text string, line int, index int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_insertAt(this.h, text_ms, (C.int)(line), (C.int)(index))
}

func (this *QsciScintilla) MoveToMatchingBrace() {
	C.QsciScintilla_moveToMatchingBrace(this.h)
}

func (this *QsciScintilla) Paste() {
	C.QsciScintilla_paste(this.h)
}

func (this *QsciScintilla) Redo() {
	C.QsciScintilla_redo(this.h)
}

func (this *QsciScintilla) RemoveSelectedText() {
	C.QsciScintilla_removeSelectedText(this.h)
}

func (this *QsciScintilla) ReplaceSelectedText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_replaceSelectedText(this.h, text_ms)
}

func (this *QsciScintilla) ResetSelectionBackgroundColor() {
	C.QsciScintilla_resetSelectionBackgroundColor(this.h)
}

func (this *QsciScintilla) ResetSelectionForegroundColor() {
	C.QsciScintilla_resetSelectionForegroundColor(this.h)
}

func (this *QsciScintilla) SelectAll(selectVal bool) {
	C.QsciScintilla_selectAll(this.h, (C.bool)(selectVal))
}

func (this *QsciScintilla) SelectToMatchingBrace() {
	C.QsciScintilla_selectToMatchingBrace(this.h)
}

func (this *QsciScintilla) SetAutoCompletionCaseSensitivity(cs bool) {
	C.QsciScintilla_setAutoCompletionCaseSensitivity(this.h, (C.bool)(cs))
}

func (this *QsciScintilla) SetAutoCompletionReplaceWord(replace bool) {
	C.QsciScintilla_setAutoCompletionReplaceWord(this.h, (C.bool)(replace))
}

func (this *QsciScintilla) SetAutoCompletionShowSingle(single bool) {
	C.QsciScintilla_setAutoCompletionShowSingle(this.h, (C.bool)(single))
}

func (this *QsciScintilla) SetAutoCompletionSource(source QsciScintilla__AutoCompletionSource) {
	C.QsciScintilla_setAutoCompletionSource(this.h, (C.int)(source))
}

func (this *QsciScintilla) SetAutoCompletionThreshold(thresh int) {
	C.QsciScintilla_setAutoCompletionThreshold(this.h, (C.int)(thresh))
}

func (this *QsciScintilla) SetAutoCompletionUseSingle(single QsciScintilla__AutoCompletionUseSingle) {
	C.QsciScintilla_setAutoCompletionUseSingle(this.h, (C.int)(single))
}

func (this *QsciScintilla) SetAutoIndent(autoindent bool) {
	C.QsciScintilla_setAutoIndent(this.h, (C.bool)(autoindent))
}

func (this *QsciScintilla) SetBraceMatching(bm QsciScintilla__BraceMatch) {
	C.QsciScintilla_setBraceMatching(this.h, (C.int)(bm))
}

func (this *QsciScintilla) SetBackspaceUnindents(unindent bool) {
	C.QsciScintilla_setBackspaceUnindents(this.h, (C.bool)(unindent))
}

func (this *QsciScintilla) SetCaretForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setCaretForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCaretLineBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setCaretLineBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCaretLineFrameWidth(width int) {
	C.QsciScintilla_setCaretLineFrameWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetCaretLineVisible(enable bool) {
	C.QsciScintilla_setCaretLineVisible(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetCaretWidth(width int) {
	C.QsciScintilla_setCaretWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetColor(c *qt6.QColor) {
	C.QsciScintilla_setColor(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciScintilla) SetCursorPosition(line int, index int) {
	C.QsciScintilla_setCursorPosition(this.h, (C.int)(line), (C.int)(index))
}

func (this *QsciScintilla) SetEolMode(mode QsciScintilla__EolMode) {
	C.QsciScintilla_setEolMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetEolVisibility(visible bool) {
	C.QsciScintilla_setEolVisibility(this.h, (C.bool)(visible))
}

func (this *QsciScintilla) SetFolding(fold QsciScintilla__FoldStyle, margin int) {
	C.QsciScintilla_setFolding(this.h, (C.int)(fold), (C.int)(margin))
}

func (this *QsciScintilla) SetIndentation(line int, indentation int) {
	C.QsciScintilla_setIndentation(this.h, (C.int)(line), (C.int)(indentation))
}

func (this *QsciScintilla) SetIndentationGuides(enable bool) {
	C.QsciScintilla_setIndentationGuides(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetIndentationGuidesBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setIndentationGuidesBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndentationGuidesForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setIndentationGuidesForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndentationsUseTabs(tabs bool) {
	C.QsciScintilla_setIndentationsUseTabs(this.h, (C.bool)(tabs))
}

func (this *QsciScintilla) SetIndentationWidth(width int) {
	C.QsciScintilla_setIndentationWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetLexer(lexer *QsciLexer) {
	C.QsciScintilla_setLexer(this.h, lexer.cPointer())
}

func (this *QsciScintilla) SetMarginsBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setMarginsBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginsFont(f *qt6.QFont) {
	C.QsciScintilla_setMarginsFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginsForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setMarginsForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginLineNumbers(margin int, lnrs bool) {
	C.QsciScintilla_setMarginLineNumbers(this.h, (C.int)(margin), (C.bool)(lnrs))
}

func (this *QsciScintilla) SetMarginMarkerMask(margin int, mask int) {
	C.QsciScintilla_setMarginMarkerMask(this.h, (C.int)(margin), (C.int)(mask))
}

func (this *QsciScintilla) SetMarginSensitivity(margin int, sens bool) {
	C.QsciScintilla_setMarginSensitivity(this.h, (C.int)(margin), (C.bool)(sens))
}

func (this *QsciScintilla) SetMarginWidth(margin int, width int) {
	C.QsciScintilla_setMarginWidth(this.h, (C.int)(margin), (C.int)(width))
}

func (this *QsciScintilla) SetMarginWidth2(margin int, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QsciScintilla_setMarginWidth2(this.h, (C.int)(margin), s_ms)
}

func (this *QsciScintilla) SetModified(m bool) {
	C.QsciScintilla_setModified(this.h, (C.bool)(m))
}

func (this *QsciScintilla) SetPaper(c *qt6.QColor) {
	C.QsciScintilla_setPaper(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciScintilla) SetReadOnly(ro bool) {
	C.QsciScintilla_setReadOnly(this.h, (C.bool)(ro))
}

func (this *QsciScintilla) SetSelection(lineFrom int, indexFrom int, lineTo int, indexTo int) {
	C.QsciScintilla_setSelection(this.h, (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo))
}

func (this *QsciScintilla) SetSelectionBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_setSelectionBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetSelectionForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_setSelectionForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetTabIndents(indent bool) {
	C.QsciScintilla_setTabIndents(this.h, (C.bool)(indent))
}

func (this *QsciScintilla) SetTabWidth(width int) {
	C.QsciScintilla_setTabWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QsciScintilla_setText(this.h, text_ms)
}

func (this *QsciScintilla) SetUtf8(cp bool) {
	C.QsciScintilla_setUtf8(this.h, (C.bool)(cp))
}

func (this *QsciScintilla) SetWhitespaceVisibility(mode QsciScintilla__WhitespaceVisibility) {
	C.QsciScintilla_setWhitespaceVisibility(this.h, (C.int)(mode))
}

func (this *QsciScintilla) SetWrapMode(mode QsciScintilla__WrapMode) {
	C.QsciScintilla_setWrapMode(this.h, (C.int)(mode))
}

func (this *QsciScintilla) Undo() {
	C.QsciScintilla_undo(this.h)
}

func (this *QsciScintilla) Unindent(line int) {
	C.QsciScintilla_unindent(this.h, (C.int)(line))
}

func (this *QsciScintilla) ZoomIn(rangeVal int) {
	C.QsciScintilla_zoomIn(this.h, (C.int)(rangeVal))
}

func (this *QsciScintilla) ZoomIn2() {
	C.QsciScintilla_zoomIn2(this.h)
}

func (this *QsciScintilla) ZoomOut(rangeVal int) {
	C.QsciScintilla_zoomOut(this.h, (C.int)(rangeVal))
}

func (this *QsciScintilla) ZoomOut2() {
	C.QsciScintilla_zoomOut2(this.h)
}

func (this *QsciScintilla) ZoomTo(size int) {
	C.QsciScintilla_zoomTo(this.h, (C.int)(size))
}

func (this *QsciScintilla) CursorPositionChanged(line int, index int) {
	C.QsciScintilla_cursorPositionChanged(this.h, (C.int)(line), (C.int)(index))
}
func (this *QsciScintilla) OnCursorPositionChanged(slot func(line int, index int)) {
	C.QsciScintilla_connect_cursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_cursorPositionChanged
func miqt_exec_callback_QsciScintilla_cursorPositionChanged(cb C.intptr_t, line C.int, index C.int) {
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
	C.QsciScintilla_copyAvailable(this.h, (C.bool)(yes))
}
func (this *QsciScintilla) OnCopyAvailable(slot func(yes bool)) {
	C.QsciScintilla_connect_copyAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_copyAvailable
func miqt_exec_callback_QsciScintilla_copyAvailable(cb C.intptr_t, yes C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(yes bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(yes)

	gofunc(slotval1)
}

func (this *QsciScintilla) IndicatorClicked(line int, index int, state qt6.KeyboardModifier) {
	C.QsciScintilla_indicatorClicked(this.h, (C.int)(line), (C.int)(index), (C.int)(state))
}
func (this *QsciScintilla) OnIndicatorClicked(slot func(line int, index int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_indicatorClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_indicatorClicked
func miqt_exec_callback_QsciScintilla_indicatorClicked(cb C.intptr_t, line C.int, index C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(line int, index int, state qt6.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	slotval2 := (int)(index)

	slotval3 := (qt6.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) IndicatorReleased(line int, index int, state qt6.KeyboardModifier) {
	C.QsciScintilla_indicatorReleased(this.h, (C.int)(line), (C.int)(index), (C.int)(state))
}
func (this *QsciScintilla) OnIndicatorReleased(slot func(line int, index int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_indicatorReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_indicatorReleased
func miqt_exec_callback_QsciScintilla_indicatorReleased(cb C.intptr_t, line C.int, index C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(line int, index int, state qt6.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	slotval2 := (int)(index)

	slotval3 := (qt6.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) LinesChanged() {
	C.QsciScintilla_linesChanged(this.h)
}
func (this *QsciScintilla) OnLinesChanged(slot func()) {
	C.QsciScintilla_connect_linesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_linesChanged
func miqt_exec_callback_QsciScintilla_linesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintilla) MarginClicked(margin int, line int, state qt6.KeyboardModifier) {
	C.QsciScintilla_marginClicked(this.h, (C.int)(margin), (C.int)(line), (C.int)(state))
}
func (this *QsciScintilla) OnMarginClicked(slot func(margin int, line int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_marginClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_marginClicked
func miqt_exec_callback_QsciScintilla_marginClicked(cb C.intptr_t, margin C.int, line C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(margin int, line int, state qt6.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (int)(line)

	slotval3 := (qt6.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) MarginRightClicked(margin int, line int, state qt6.KeyboardModifier) {
	C.QsciScintilla_marginRightClicked(this.h, (C.int)(margin), (C.int)(line), (C.int)(state))
}
func (this *QsciScintilla) OnMarginRightClicked(slot func(margin int, line int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_marginRightClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_marginRightClicked
func miqt_exec_callback_QsciScintilla_marginRightClicked(cb C.intptr_t, margin C.int, line C.int, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(margin int, line int, state qt6.KeyboardModifier))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (int)(line)

	slotval3 := (qt6.KeyboardModifier)(state)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintilla) ModificationAttempted() {
	C.QsciScintilla_modificationAttempted(this.h)
}
func (this *QsciScintilla) OnModificationAttempted(slot func()) {
	C.QsciScintilla_connect_modificationAttempted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_modificationAttempted
func miqt_exec_callback_QsciScintilla_modificationAttempted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintilla) ModificationChanged(m bool) {
	C.QsciScintilla_modificationChanged(this.h, (C.bool)(m))
}
func (this *QsciScintilla) OnModificationChanged(slot func(m bool)) {
	C.QsciScintilla_connect_modificationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_modificationChanged
func miqt_exec_callback_QsciScintilla_modificationChanged(cb C.intptr_t, m C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(m bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(m)

	gofunc(slotval1)
}

func (this *QsciScintilla) SelectionChanged() {
	C.QsciScintilla_selectionChanged(this.h)
}
func (this *QsciScintilla) OnSelectionChanged(slot func()) {
	C.QsciScintilla_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_selectionChanged
func miqt_exec_callback_QsciScintilla_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintilla) TextChanged() {
	C.QsciScintilla_textChanged(this.h)
}
func (this *QsciScintilla) OnTextChanged(slot func()) {
	C.QsciScintilla_connect_textChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_textChanged
func miqt_exec_callback_QsciScintilla_textChanged(cb C.intptr_t) {
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
	C.QsciScintilla_userListActivated(this.h, (C.int)(id), stringVal_ms)
}
func (this *QsciScintilla) OnUserListActivated(slot func(id int, stringVal string)) {
	C.QsciScintilla_connect_userListActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_userListActivated
func miqt_exec_callback_QsciScintilla_userListActivated(cb C.intptr_t, id C.int, stringVal C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QsciScintilla_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintilla_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintilla_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintilla) ClearAnnotationsWithLine(line int) {
	C.QsciScintilla_clearAnnotationsWithLine(this.h, (C.int)(line))
}

func (this *QsciScintilla) IndicatorDefine2(style QsciScintilla__IndicatorStyle, indicatorNumber int) int {
	return (int)(C.QsciScintilla_indicatorDefine2(this.h, (C.int)(style), (C.int)(indicatorNumber)))
}

func (this *QsciScintilla) MarkerDefine2(sym QsciScintilla__MarkerSymbol, markerNumber int) int {
	return (int)(C.QsciScintilla_markerDefine2(this.h, (C.int)(sym), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDefine3(ch int8, markerNumber int) int {
	return (int)(C.QsciScintilla_markerDefine3(this.h, (C.char)(ch), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDefine4(pm *qt6.QPixmap, markerNumber int) int {
	return (int)(C.QsciScintilla_markerDefine4(this.h, (*C.QPixmap)(pm.UnsafePointer()), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDefine5(im *qt6.QImage, markerNumber int) int {
	return (int)(C.QsciScintilla_markerDefine5(this.h, (*C.QImage)(im.UnsafePointer()), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDelete2(linenr int, markerNumber int) {
	C.QsciScintilla_markerDelete2(this.h, (C.int)(linenr), (C.int)(markerNumber))
}

func (this *QsciScintilla) MarkerDeleteAllWithMarkerNumber(markerNumber int) {
	C.QsciScintilla_markerDeleteAllWithMarkerNumber(this.h, (C.int)(markerNumber))
}

func (this *QsciScintilla) SetIndicatorDrawUnder2(under bool, indicatorNumber int) {
	C.QsciScintilla_setIndicatorDrawUnder2(this.h, (C.bool)(under), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorForegroundColor2(col *qt6.QColor, indicatorNumber int) {
	C.QsciScintilla_setIndicatorForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorHoverForegroundColor2(col *qt6.QColor, indicatorNumber int) {
	C.QsciScintilla_setIndicatorHoverForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorHoverStyle2(style QsciScintilla__IndicatorStyle, indicatorNumber int) {
	C.QsciScintilla_setIndicatorHoverStyle2(this.h, (C.int)(style), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorOutlineColor2(col *qt6.QColor, indicatorNumber int) {
	C.QsciScintilla_setIndicatorOutlineColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ClearMarginTextWithLine(line int) {
	C.QsciScintilla_clearMarginTextWithLine(this.h, (C.int)(line))
}

func (this *QsciScintilla) SetMarkerBackgroundColor2(col *qt6.QColor, markerNumber int) {
	C.QsciScintilla_setMarkerBackgroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(markerNumber))
}

func (this *QsciScintilla) SetMarkerForegroundColor2(col *qt6.QColor, markerNumber int) {
	C.QsciScintilla_setMarkerForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(markerNumber))
}

func (this *QsciScintilla) SetWrapVisualFlags2(endFlag QsciScintilla__WrapVisualFlag, startFlag QsciScintilla__WrapVisualFlag) {
	C.QsciScintilla_setWrapVisualFlags2(this.h, (C.int)(endFlag), (C.int)(startFlag))
}

func (this *QsciScintilla) SetWrapVisualFlags3(endFlag QsciScintilla__WrapVisualFlag, startFlag QsciScintilla__WrapVisualFlag, indent int) {
	C.QsciScintilla_setWrapVisualFlags3(this.h, (C.int)(endFlag), (C.int)(startFlag), (C.int)(indent))
}

// SetScrollBars can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) SetScrollBars() {

	var _dynamic_cast_ok C.bool = false
	C.QsciScintilla_protectedbase_setScrollBars(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// TextAsBytes can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) TextAsBytes(text string) []byte {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	var _dynamic_cast_ok C.bool = false
	var _bytearray C.struct_miqt_string = C.QsciScintilla_protectedbase_textAsBytes(&_dynamic_cast_ok, unsafe.Pointer(this.h), text_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	_method_ret := _ret
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BytesAsText can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) BytesAsText(bytes string) string {
	bytes_Cstring := C.CString(bytes)
	defer C.free(unsafe.Pointer(bytes_Cstring))

	var _dynamic_cast_ok C.bool = false
	var _ms C.struct_miqt_string = C.QsciScintilla_protectedbase_bytesAsText(&_dynamic_cast_ok, unsafe.Pointer(this.h), bytes_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	_method_ret := _ret
	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// ContextMenuNeeded can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) ContextMenuNeeded(x int, y int) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciScintilla_protectedbase_contextMenuNeeded(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(x), (C.int)(y)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QsciScintilla_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) ViewportMargins() qt6.QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt6.UnsafeNewQMargins(unsafe.Pointer(C.QsciScintilla_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) DrawFrame(param1 *qt6.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QsciScintilla_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QsciScintilla_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QsciScintilla_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QsciScintilla_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciScintilla_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciScintilla_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QsciScintilla_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciScintilla_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciScintilla_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QsciScintilla that was directly constructed.
func (this *QsciScintilla) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciScintilla_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QsciScintilla) callVirtualBase_ApiContext(pos int, context_start *int, last_word_start *int) []string {

	var _ma C.struct_miqt_array = C.QsciScintilla_virtualbase_apiContext(unsafe.Pointer(this.h), (C.int)(pos), (*C.int)(unsafe.Pointer(context_start)), (*C.int)(unsafe.Pointer(last_word_start)))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QsciScintilla) OnApiContext(slot func(super func(pos int, context_start *int, last_word_start *int) []string, pos int, context_start *int, last_word_start *int) []string) {
	ok := C.QsciScintilla_override_virtual_apiContext(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_apiContext
func miqt_exec_callback_QsciScintilla_apiContext(self *C.QsciScintilla, cb C.intptr_t, pos C.int, context_start *C.int, last_word_start *C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int, context_start *int, last_word_start *int) []string, pos int, context_start *int, last_word_start *int) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pos)

	slotval2 := (*int)(unsafe.Pointer(context_start))

	slotval3 := (*int)(unsafe.Pointer(last_word_start))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_ApiContext, slotval1, slotval2, slotval3)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QsciScintilla) callVirtualBase_FindFirst(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))

	return (bool)(C.QsciScintilla_virtualbase_findFirst(unsafe.Pointer(this.h), expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))

}
func (this *QsciScintilla) OnFindFirst(slot func(super func(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool, expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool) {
	ok := C.QsciScintilla_override_virtual_findFirst(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_findFirst
func miqt_exec_callback_QsciScintilla_findFirst(self *C.QsciScintilla, cb C.intptr_t, expr C.struct_miqt_string, re C.bool, cs C.bool, wo C.bool, wrap C.bool, forward C.bool, line C.int, index C.int, show C.bool, posix C.bool, cxx11 C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool, expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var expr_ms C.struct_miqt_string = expr
	expr_ret := C.GoStringN(expr_ms.data, C.int(int64(expr_ms.len)))
	C.free(unsafe.Pointer(expr_ms.data))
	slotval1 := expr_ret
	slotval2 := (bool)(re)

	slotval3 := (bool)(cs)

	slotval4 := (bool)(wo)

	slotval5 := (bool)(wrap)

	slotval6 := (bool)(forward)

	slotval7 := (int)(line)

	slotval8 := (int)(index)

	slotval9 := (bool)(show)

	slotval10 := (bool)(posix)

	slotval11 := (bool)(cxx11)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_FindFirst, slotval1, slotval2, slotval3, slotval4, slotval5, slotval6, slotval7, slotval8, slotval9, slotval10, slotval11)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_FindFirstInSelection(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))

	return (bool)(C.QsciScintilla_virtualbase_findFirstInSelection(unsafe.Pointer(this.h), expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))

}
func (this *QsciScintilla) OnFindFirstInSelection(slot func(super func(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool, expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool) {
	ok := C.QsciScintilla_override_virtual_findFirstInSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_findFirstInSelection
func miqt_exec_callback_QsciScintilla_findFirstInSelection(self *C.QsciScintilla, cb C.intptr_t, expr C.struct_miqt_string, re C.bool, cs C.bool, wo C.bool, forward C.bool, show C.bool, posix C.bool, cxx11 C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool, expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var expr_ms C.struct_miqt_string = expr
	expr_ret := C.GoStringN(expr_ms.data, C.int(int64(expr_ms.len)))
	C.free(unsafe.Pointer(expr_ms.data))
	slotval1 := expr_ret
	slotval2 := (bool)(re)

	slotval3 := (bool)(cs)

	slotval4 := (bool)(wo)

	slotval5 := (bool)(forward)

	slotval6 := (bool)(show)

	slotval7 := (bool)(posix)

	slotval8 := (bool)(cxx11)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_FindFirstInSelection, slotval1, slotval2, slotval3, slotval4, slotval5, slotval6, slotval7, slotval8)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_FindNext() bool {

	return (bool)(C.QsciScintilla_virtualbase_findNext(unsafe.Pointer(this.h)))

}
func (this *QsciScintilla) OnFindNext(slot func(super func() bool) bool) {
	ok := C.QsciScintilla_override_virtual_findNext(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_findNext
func miqt_exec_callback_QsciScintilla_findNext(self *C.QsciScintilla, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_FindNext)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_Recolor(start int, end int) {

	C.QsciScintilla_virtualbase_recolor(unsafe.Pointer(this.h), (C.int)(start), (C.int)(end))

}
func (this *QsciScintilla) OnRecolor(slot func(super func(start int, end int), start int, end int)) {
	ok := C.QsciScintilla_override_virtual_recolor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_recolor
func miqt_exec_callback_QsciScintilla_recolor(self *C.QsciScintilla, cb C.intptr_t, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(start int, end int), start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(start)

	slotval2 := (int)(end)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Recolor, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_Replace(replaceStr string) {
	replaceStr_ms := C.struct_miqt_string{}
	replaceStr_ms.data = C.CString(replaceStr)
	replaceStr_ms.len = C.size_t(len(replaceStr))
	defer C.free(unsafe.Pointer(replaceStr_ms.data))

	C.QsciScintilla_virtualbase_replace(unsafe.Pointer(this.h), replaceStr_ms)

}
func (this *QsciScintilla) OnReplace(slot func(super func(replaceStr string), replaceStr string)) {
	ok := C.QsciScintilla_override_virtual_replace(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_replace
func miqt_exec_callback_QsciScintilla_replace(self *C.QsciScintilla, cb C.intptr_t, replaceStr C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(replaceStr string), replaceStr string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var replaceStr_ms C.struct_miqt_string = replaceStr
	replaceStr_ret := C.GoStringN(replaceStr_ms.data, C.int(int64(replaceStr_ms.len)))
	C.free(unsafe.Pointer(replaceStr_ms.data))
	slotval1 := replaceStr_ret

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Replace, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Append(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QsciScintilla_virtualbase_append(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnAppend(slot func(super func(text string), text string)) {
	ok := C.QsciScintilla_override_virtual_append(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_append
func miqt_exec_callback_QsciScintilla_append(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string), text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Append, slotval1)

}

func (this *QsciScintilla) callVirtualBase_AutoCompleteFromAll() {

	C.QsciScintilla_virtualbase_autoCompleteFromAll(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnAutoCompleteFromAll(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_autoCompleteFromAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_autoCompleteFromAll
func miqt_exec_callback_QsciScintilla_autoCompleteFromAll(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_AutoCompleteFromAll)

}

func (this *QsciScintilla) callVirtualBase_AutoCompleteFromAPIs() {

	C.QsciScintilla_virtualbase_autoCompleteFromAPIs(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnAutoCompleteFromAPIs(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_autoCompleteFromAPIs(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_autoCompleteFromAPIs
func miqt_exec_callback_QsciScintilla_autoCompleteFromAPIs(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_AutoCompleteFromAPIs)

}

func (this *QsciScintilla) callVirtualBase_AutoCompleteFromDocument() {

	C.QsciScintilla_virtualbase_autoCompleteFromDocument(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnAutoCompleteFromDocument(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_autoCompleteFromDocument(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_autoCompleteFromDocument
func miqt_exec_callback_QsciScintilla_autoCompleteFromDocument(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_AutoCompleteFromDocument)

}

func (this *QsciScintilla) callVirtualBase_CallTip() {

	C.QsciScintilla_virtualbase_callTip(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnCallTip(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_callTip(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_callTip
func miqt_exec_callback_QsciScintilla_callTip(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_CallTip)

}

func (this *QsciScintilla) callVirtualBase_Clear() {

	C.QsciScintilla_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnClear(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_clear
func miqt_exec_callback_QsciScintilla_clear(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Clear)

}

func (this *QsciScintilla) callVirtualBase_Copy() {

	C.QsciScintilla_virtualbase_copy(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnCopy(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_copy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_copy
func miqt_exec_callback_QsciScintilla_copy(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Copy)

}

func (this *QsciScintilla) callVirtualBase_Cut() {

	C.QsciScintilla_virtualbase_cut(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnCut(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_cut(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_cut
func miqt_exec_callback_QsciScintilla_cut(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Cut)

}

func (this *QsciScintilla) callVirtualBase_EnsureCursorVisible() {

	C.QsciScintilla_virtualbase_ensureCursorVisible(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnEnsureCursorVisible(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_ensureCursorVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_ensureCursorVisible
func miqt_exec_callback_QsciScintilla_ensureCursorVisible(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_EnsureCursorVisible)

}

func (this *QsciScintilla) callVirtualBase_EnsureLineVisible(line int) {

	C.QsciScintilla_virtualbase_ensureLineVisible(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnEnsureLineVisible(slot func(super func(line int), line int)) {
	ok := C.QsciScintilla_override_virtual_ensureLineVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_ensureLineVisible
func miqt_exec_callback_QsciScintilla_ensureLineVisible(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int), line int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_EnsureLineVisible, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FoldAll(children bool) {

	C.QsciScintilla_virtualbase_foldAll(unsafe.Pointer(this.h), (C.bool)(children))

}
func (this *QsciScintilla) OnFoldAll(slot func(super func(children bool), children bool)) {
	ok := C.QsciScintilla_override_virtual_foldAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_foldAll
func miqt_exec_callback_QsciScintilla_foldAll(self *C.QsciScintilla, cb C.intptr_t, children C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(children bool), children bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(children)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FoldAll, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FoldLine(line int) {

	C.QsciScintilla_virtualbase_foldLine(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnFoldLine(slot func(super func(line int), line int)) {
	ok := C.QsciScintilla_override_virtual_foldLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_foldLine
func miqt_exec_callback_QsciScintilla_foldLine(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int), line int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FoldLine, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Indent(line int) {

	C.QsciScintilla_virtualbase_indent(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnIndent(slot func(super func(line int), line int)) {
	ok := C.QsciScintilla_override_virtual_indent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_indent
func miqt_exec_callback_QsciScintilla_indent(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int), line int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Indent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Insert(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QsciScintilla_virtualbase_insert(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnInsert(slot func(super func(text string), text string)) {
	ok := C.QsciScintilla_override_virtual_insert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_insert
func miqt_exec_callback_QsciScintilla_insert(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string), text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Insert, slotval1)

}

func (this *QsciScintilla) callVirtualBase_InsertAt(text string, line int, index int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QsciScintilla_virtualbase_insertAt(unsafe.Pointer(this.h), text_ms, (C.int)(line), (C.int)(index))

}
func (this *QsciScintilla) OnInsertAt(slot func(super func(text string, line int, index int), text string, line int, index int)) {
	ok := C.QsciScintilla_override_virtual_insertAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_insertAt
func miqt_exec_callback_QsciScintilla_insertAt(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string, line C.int, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string, line int, index int), text string, line int, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret
	slotval2 := (int)(line)

	slotval3 := (int)(index)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_InsertAt, slotval1, slotval2, slotval3)

}

func (this *QsciScintilla) callVirtualBase_MoveToMatchingBrace() {

	C.QsciScintilla_virtualbase_moveToMatchingBrace(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnMoveToMatchingBrace(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_moveToMatchingBrace(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_moveToMatchingBrace
func miqt_exec_callback_QsciScintilla_moveToMatchingBrace(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MoveToMatchingBrace)

}

func (this *QsciScintilla) callVirtualBase_Paste() {

	C.QsciScintilla_virtualbase_paste(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnPaste(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_paste(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_paste
func miqt_exec_callback_QsciScintilla_paste(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Paste)

}

func (this *QsciScintilla) callVirtualBase_Redo() {

	C.QsciScintilla_virtualbase_redo(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnRedo(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_redo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_redo
func miqt_exec_callback_QsciScintilla_redo(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Redo)

}

func (this *QsciScintilla) callVirtualBase_RemoveSelectedText() {

	C.QsciScintilla_virtualbase_removeSelectedText(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnRemoveSelectedText(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_removeSelectedText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_removeSelectedText
func miqt_exec_callback_QsciScintilla_removeSelectedText(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_RemoveSelectedText)

}

func (this *QsciScintilla) callVirtualBase_ReplaceSelectedText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QsciScintilla_virtualbase_replaceSelectedText(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnReplaceSelectedText(slot func(super func(text string), text string)) {
	ok := C.QsciScintilla_override_virtual_replaceSelectedText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_replaceSelectedText
func miqt_exec_callback_QsciScintilla_replaceSelectedText(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string), text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ReplaceSelectedText, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ResetSelectionBackgroundColor() {

	C.QsciScintilla_virtualbase_resetSelectionBackgroundColor(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnResetSelectionBackgroundColor(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_resetSelectionBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_resetSelectionBackgroundColor
func miqt_exec_callback_QsciScintilla_resetSelectionBackgroundColor(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ResetSelectionBackgroundColor)

}

func (this *QsciScintilla) callVirtualBase_ResetSelectionForegroundColor() {

	C.QsciScintilla_virtualbase_resetSelectionForegroundColor(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnResetSelectionForegroundColor(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_resetSelectionForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_resetSelectionForegroundColor
func miqt_exec_callback_QsciScintilla_resetSelectionForegroundColor(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ResetSelectionForegroundColor)

}

func (this *QsciScintilla) callVirtualBase_SelectAll(selectVal bool) {

	C.QsciScintilla_virtualbase_selectAll(unsafe.Pointer(this.h), (C.bool)(selectVal))

}
func (this *QsciScintilla) OnSelectAll(slot func(super func(selectVal bool), selectVal bool)) {
	ok := C.QsciScintilla_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_selectAll
func miqt_exec_callback_QsciScintilla_selectAll(self *C.QsciScintilla, cb C.intptr_t, selectVal C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectVal bool), selectVal bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(selectVal)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SelectAll, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SelectToMatchingBrace() {

	C.QsciScintilla_virtualbase_selectToMatchingBrace(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnSelectToMatchingBrace(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_selectToMatchingBrace(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_selectToMatchingBrace
func miqt_exec_callback_QsciScintilla_selectToMatchingBrace(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SelectToMatchingBrace)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionCaseSensitivity(cs bool) {

	C.QsciScintilla_virtualbase_setAutoCompletionCaseSensitivity(unsafe.Pointer(this.h), (C.bool)(cs))

}
func (this *QsciScintilla) OnSetAutoCompletionCaseSensitivity(slot func(super func(cs bool), cs bool)) {
	ok := C.QsciScintilla_override_virtual_setAutoCompletionCaseSensitivity(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setAutoCompletionCaseSensitivity
func miqt_exec_callback_QsciScintilla_setAutoCompletionCaseSensitivity(self *C.QsciScintilla, cb C.intptr_t, cs C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cs bool), cs bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(cs)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionCaseSensitivity, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionReplaceWord(replace bool) {

	C.QsciScintilla_virtualbase_setAutoCompletionReplaceWord(unsafe.Pointer(this.h), (C.bool)(replace))

}
func (this *QsciScintilla) OnSetAutoCompletionReplaceWord(slot func(super func(replace bool), replace bool)) {
	ok := C.QsciScintilla_override_virtual_setAutoCompletionReplaceWord(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setAutoCompletionReplaceWord
func miqt_exec_callback_QsciScintilla_setAutoCompletionReplaceWord(self *C.QsciScintilla, cb C.intptr_t, replace C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(replace bool), replace bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(replace)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionReplaceWord, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionShowSingle(single bool) {

	C.QsciScintilla_virtualbase_setAutoCompletionShowSingle(unsafe.Pointer(this.h), (C.bool)(single))

}
func (this *QsciScintilla) OnSetAutoCompletionShowSingle(slot func(super func(single bool), single bool)) {
	ok := C.QsciScintilla_override_virtual_setAutoCompletionShowSingle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setAutoCompletionShowSingle
func miqt_exec_callback_QsciScintilla_setAutoCompletionShowSingle(self *C.QsciScintilla, cb C.intptr_t, single C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(single bool), single bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(single)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionShowSingle, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionSource(source QsciScintilla__AutoCompletionSource) {

	C.QsciScintilla_virtualbase_setAutoCompletionSource(unsafe.Pointer(this.h), (C.int)(source))

}
func (this *QsciScintilla) OnSetAutoCompletionSource(slot func(super func(source QsciScintilla__AutoCompletionSource), source QsciScintilla__AutoCompletionSource)) {
	ok := C.QsciScintilla_override_virtual_setAutoCompletionSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setAutoCompletionSource
func miqt_exec_callback_QsciScintilla_setAutoCompletionSource(self *C.QsciScintilla, cb C.intptr_t, source C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source QsciScintilla__AutoCompletionSource), source QsciScintilla__AutoCompletionSource))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__AutoCompletionSource)(source)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionSource, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionThreshold(thresh int) {

	C.QsciScintilla_virtualbase_setAutoCompletionThreshold(unsafe.Pointer(this.h), (C.int)(thresh))

}
func (this *QsciScintilla) OnSetAutoCompletionThreshold(slot func(super func(thresh int), thresh int)) {
	ok := C.QsciScintilla_override_virtual_setAutoCompletionThreshold(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setAutoCompletionThreshold
func miqt_exec_callback_QsciScintilla_setAutoCompletionThreshold(self *C.QsciScintilla, cb C.intptr_t, thresh C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(thresh int), thresh int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(thresh)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionThreshold, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionUseSingle(single QsciScintilla__AutoCompletionUseSingle) {

	C.QsciScintilla_virtualbase_setAutoCompletionUseSingle(unsafe.Pointer(this.h), (C.int)(single))

}
func (this *QsciScintilla) OnSetAutoCompletionUseSingle(slot func(super func(single QsciScintilla__AutoCompletionUseSingle), single QsciScintilla__AutoCompletionUseSingle)) {
	ok := C.QsciScintilla_override_virtual_setAutoCompletionUseSingle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setAutoCompletionUseSingle
func miqt_exec_callback_QsciScintilla_setAutoCompletionUseSingle(self *C.QsciScintilla, cb C.intptr_t, single C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(single QsciScintilla__AutoCompletionUseSingle), single QsciScintilla__AutoCompletionUseSingle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__AutoCompletionUseSingle)(single)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionUseSingle, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoIndent(autoindent bool) {

	C.QsciScintilla_virtualbase_setAutoIndent(unsafe.Pointer(this.h), (C.bool)(autoindent))

}
func (this *QsciScintilla) OnSetAutoIndent(slot func(super func(autoindent bool), autoindent bool)) {
	ok := C.QsciScintilla_override_virtual_setAutoIndent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setAutoIndent
func miqt_exec_callback_QsciScintilla_setAutoIndent(self *C.QsciScintilla, cb C.intptr_t, autoindent C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindent bool), autoindent bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(autoindent)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoIndent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetBraceMatching(bm QsciScintilla__BraceMatch) {

	C.QsciScintilla_virtualbase_setBraceMatching(unsafe.Pointer(this.h), (C.int)(bm))

}
func (this *QsciScintilla) OnSetBraceMatching(slot func(super func(bm QsciScintilla__BraceMatch), bm QsciScintilla__BraceMatch)) {
	ok := C.QsciScintilla_override_virtual_setBraceMatching(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setBraceMatching
func miqt_exec_callback_QsciScintilla_setBraceMatching(self *C.QsciScintilla, cb C.intptr_t, bm C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(bm QsciScintilla__BraceMatch), bm QsciScintilla__BraceMatch))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__BraceMatch)(bm)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetBraceMatching, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetBackspaceUnindents(unindent bool) {

	C.QsciScintilla_virtualbase_setBackspaceUnindents(unsafe.Pointer(this.h), (C.bool)(unindent))

}
func (this *QsciScintilla) OnSetBackspaceUnindents(slot func(super func(unindent bool), unindent bool)) {
	ok := C.QsciScintilla_override_virtual_setBackspaceUnindents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setBackspaceUnindents
func miqt_exec_callback_QsciScintilla_setBackspaceUnindents(self *C.QsciScintilla, cb C.intptr_t, unindent C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(unindent bool), unindent bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(unindent)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetBackspaceUnindents, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setCaretForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetCaretForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setCaretForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setCaretForegroundColor
func miqt_exec_callback_QsciScintilla_setCaretForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretLineBackgroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setCaretLineBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetCaretLineBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setCaretLineBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setCaretLineBackgroundColor
func miqt_exec_callback_QsciScintilla_setCaretLineBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretLineBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretLineFrameWidth(width int) {

	C.QsciScintilla_virtualbase_setCaretLineFrameWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetCaretLineFrameWidth(slot func(super func(width int), width int)) {
	ok := C.QsciScintilla_override_virtual_setCaretLineFrameWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setCaretLineFrameWidth
func miqt_exec_callback_QsciScintilla_setCaretLineFrameWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int), width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretLineFrameWidth, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretLineVisible(enable bool) {

	C.QsciScintilla_virtualbase_setCaretLineVisible(unsafe.Pointer(this.h), (C.bool)(enable))

}
func (this *QsciScintilla) OnSetCaretLineVisible(slot func(super func(enable bool), enable bool)) {
	ok := C.QsciScintilla_override_virtual_setCaretLineVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setCaretLineVisible
func miqt_exec_callback_QsciScintilla_setCaretLineVisible(self *C.QsciScintilla, cb C.intptr_t, enable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enable bool), enable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enable)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretLineVisible, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretWidth(width int) {

	C.QsciScintilla_virtualbase_setCaretWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetCaretWidth(slot func(super func(width int), width int)) {
	ok := C.QsciScintilla_override_virtual_setCaretWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setCaretWidth
func miqt_exec_callback_QsciScintilla_setCaretWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int), width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretWidth, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetColor(c *qt6.QColor) {

	C.QsciScintilla_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()))

}
func (this *QsciScintilla) OnSetColor(slot func(super func(c *qt6.QColor), c *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setColor
func miqt_exec_callback_QsciScintilla_setColor(self *C.QsciScintilla, cb C.intptr_t, c *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor), c *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCursorPosition(line int, index int) {

	C.QsciScintilla_virtualbase_setCursorPosition(unsafe.Pointer(this.h), (C.int)(line), (C.int)(index))

}
func (this *QsciScintilla) OnSetCursorPosition(slot func(super func(line int, index int), line int, index int)) {
	ok := C.QsciScintilla_override_virtual_setCursorPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setCursorPosition
func miqt_exec_callback_QsciScintilla_setCursorPosition(self *C.QsciScintilla, cb C.intptr_t, line C.int, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int, index int), line int, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	slotval2 := (int)(index)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCursorPosition, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetEolMode(mode QsciScintilla__EolMode) {

	C.QsciScintilla_virtualbase_setEolMode(unsafe.Pointer(this.h), (C.int)(mode))

}
func (this *QsciScintilla) OnSetEolMode(slot func(super func(mode QsciScintilla__EolMode), mode QsciScintilla__EolMode)) {
	ok := C.QsciScintilla_override_virtual_setEolMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setEolMode
func miqt_exec_callback_QsciScintilla_setEolMode(self *C.QsciScintilla, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QsciScintilla__EolMode), mode QsciScintilla__EolMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__EolMode)(mode)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetEolMode, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetEolVisibility(visible bool) {

	C.QsciScintilla_virtualbase_setEolVisibility(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QsciScintilla) OnSetEolVisibility(slot func(super func(visible bool), visible bool)) {
	ok := C.QsciScintilla_override_virtual_setEolVisibility(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setEolVisibility
func miqt_exec_callback_QsciScintilla_setEolVisibility(self *C.QsciScintilla, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetEolVisibility, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetFolding(fold QsciScintilla__FoldStyle, margin int) {

	C.QsciScintilla_virtualbase_setFolding(unsafe.Pointer(this.h), (C.int)(fold), (C.int)(margin))

}
func (this *QsciScintilla) OnSetFolding(slot func(super func(fold QsciScintilla__FoldStyle, margin int), fold QsciScintilla__FoldStyle, margin int)) {
	ok := C.QsciScintilla_override_virtual_setFolding(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setFolding
func miqt_exec_callback_QsciScintilla_setFolding(self *C.QsciScintilla, cb C.intptr_t, fold C.int, margin C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold QsciScintilla__FoldStyle, margin int), fold QsciScintilla__FoldStyle, margin int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__FoldStyle)(fold)

	slotval2 := (int)(margin)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetFolding, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetIndentation(line int, indentation int) {

	C.QsciScintilla_virtualbase_setIndentation(unsafe.Pointer(this.h), (C.int)(line), (C.int)(indentation))

}
func (this *QsciScintilla) OnSetIndentation(slot func(super func(line int, indentation int), line int, indentation int)) {
	ok := C.QsciScintilla_override_virtual_setIndentation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setIndentation
func miqt_exec_callback_QsciScintilla_setIndentation(self *C.QsciScintilla, cb C.intptr_t, line C.int, indentation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int, indentation int), line int, indentation int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	slotval2 := (int)(indentation)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentation, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationGuides(enable bool) {

	C.QsciScintilla_virtualbase_setIndentationGuides(unsafe.Pointer(this.h), (C.bool)(enable))

}
func (this *QsciScintilla) OnSetIndentationGuides(slot func(super func(enable bool), enable bool)) {
	ok := C.QsciScintilla_override_virtual_setIndentationGuides(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setIndentationGuides
func miqt_exec_callback_QsciScintilla_setIndentationGuides(self *C.QsciScintilla, cb C.intptr_t, enable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enable bool), enable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enable)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationGuides, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationGuidesBackgroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setIndentationGuidesBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetIndentationGuidesBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setIndentationGuidesBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setIndentationGuidesBackgroundColor
func miqt_exec_callback_QsciScintilla_setIndentationGuidesBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationGuidesBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationGuidesForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setIndentationGuidesForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetIndentationGuidesForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setIndentationGuidesForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setIndentationGuidesForegroundColor
func miqt_exec_callback_QsciScintilla_setIndentationGuidesForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationGuidesForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationsUseTabs(tabs bool) {

	C.QsciScintilla_virtualbase_setIndentationsUseTabs(unsafe.Pointer(this.h), (C.bool)(tabs))

}
func (this *QsciScintilla) OnSetIndentationsUseTabs(slot func(super func(tabs bool), tabs bool)) {
	ok := C.QsciScintilla_override_virtual_setIndentationsUseTabs(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setIndentationsUseTabs
func miqt_exec_callback_QsciScintilla_setIndentationsUseTabs(self *C.QsciScintilla, cb C.intptr_t, tabs C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tabs bool), tabs bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(tabs)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationsUseTabs, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationWidth(width int) {

	C.QsciScintilla_virtualbase_setIndentationWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetIndentationWidth(slot func(super func(width int), width int)) {
	ok := C.QsciScintilla_override_virtual_setIndentationWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setIndentationWidth
func miqt_exec_callback_QsciScintilla_setIndentationWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int), width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationWidth, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetLexer(lexer *QsciLexer) {

	C.QsciScintilla_virtualbase_setLexer(unsafe.Pointer(this.h), lexer.cPointer())

}
func (this *QsciScintilla) OnSetLexer(slot func(super func(lexer *QsciLexer), lexer *QsciLexer)) {
	ok := C.QsciScintilla_override_virtual_setLexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setLexer
func miqt_exec_callback_QsciScintilla_setLexer(self *C.QsciScintilla, cb C.intptr_t, lexer *C.QsciLexer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(lexer *QsciLexer), lexer *QsciLexer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciLexer(lexer)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetLexer, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginsBackgroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setMarginsBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetMarginsBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setMarginsBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginsBackgroundColor
func miqt_exec_callback_QsciScintilla_setMarginsBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginsBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginsFont(f *qt6.QFont) {

	C.QsciScintilla_virtualbase_setMarginsFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()))

}
func (this *QsciScintilla) OnSetMarginsFont(slot func(super func(f *qt6.QFont), f *qt6.QFont)) {
	ok := C.QsciScintilla_override_virtual_setMarginsFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginsFont
func miqt_exec_callback_QsciScintilla_setMarginsFont(self *C.QsciScintilla, cb C.intptr_t, f *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont), f *qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginsFont, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginsForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setMarginsForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetMarginsForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setMarginsForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginsForegroundColor
func miqt_exec_callback_QsciScintilla_setMarginsForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginsForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginLineNumbers(margin int, lnrs bool) {

	C.QsciScintilla_virtualbase_setMarginLineNumbers(unsafe.Pointer(this.h), (C.int)(margin), (C.bool)(lnrs))

}
func (this *QsciScintilla) OnSetMarginLineNumbers(slot func(super func(margin int, lnrs bool), margin int, lnrs bool)) {
	ok := C.QsciScintilla_override_virtual_setMarginLineNumbers(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginLineNumbers
func miqt_exec_callback_QsciScintilla_setMarginLineNumbers(self *C.QsciScintilla, cb C.intptr_t, margin C.int, lnrs C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margin int, lnrs bool), margin int, lnrs bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (bool)(lnrs)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginLineNumbers, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetMarginMarkerMask(margin int, mask int) {

	C.QsciScintilla_virtualbase_setMarginMarkerMask(unsafe.Pointer(this.h), (C.int)(margin), (C.int)(mask))

}
func (this *QsciScintilla) OnSetMarginMarkerMask(slot func(super func(margin int, mask int), margin int, mask int)) {
	ok := C.QsciScintilla_override_virtual_setMarginMarkerMask(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginMarkerMask
func miqt_exec_callback_QsciScintilla_setMarginMarkerMask(self *C.QsciScintilla, cb C.intptr_t, margin C.int, mask C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margin int, mask int), margin int, mask int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (int)(mask)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginMarkerMask, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetMarginSensitivity(margin int, sens bool) {

	C.QsciScintilla_virtualbase_setMarginSensitivity(unsafe.Pointer(this.h), (C.int)(margin), (C.bool)(sens))

}
func (this *QsciScintilla) OnSetMarginSensitivity(slot func(super func(margin int, sens bool), margin int, sens bool)) {
	ok := C.QsciScintilla_override_virtual_setMarginSensitivity(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginSensitivity
func miqt_exec_callback_QsciScintilla_setMarginSensitivity(self *C.QsciScintilla, cb C.intptr_t, margin C.int, sens C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margin int, sens bool), margin int, sens bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (bool)(sens)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginSensitivity, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetMarginWidth(margin int, width int) {

	C.QsciScintilla_virtualbase_setMarginWidth(unsafe.Pointer(this.h), (C.int)(margin), (C.int)(width))

}
func (this *QsciScintilla) OnSetMarginWidth(slot func(super func(margin int, width int), margin int, width int)) {
	ok := C.QsciScintilla_override_virtual_setMarginWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginWidth
func miqt_exec_callback_QsciScintilla_setMarginWidth(self *C.QsciScintilla, cb C.intptr_t, margin C.int, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margin int, width int), margin int, width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	slotval2 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginWidth, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetMarginWidth2(margin int, s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))

	C.QsciScintilla_virtualbase_setMarginWidth2(unsafe.Pointer(this.h), (C.int)(margin), s_ms)

}
func (this *QsciScintilla) OnSetMarginWidth2(slot func(super func(margin int, s string), margin int, s string)) {
	ok := C.QsciScintilla_override_virtual_setMarginWidth2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setMarginWidth2
func miqt_exec_callback_QsciScintilla_setMarginWidth2(self *C.QsciScintilla, cb C.intptr_t, margin C.int, s C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margin int, s string), margin int, s string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(margin)

	var s_ms C.struct_miqt_string = s
	s_ret := C.GoStringN(s_ms.data, C.int(int64(s_ms.len)))
	C.free(unsafe.Pointer(s_ms.data))
	slotval2 := s_ret

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginWidth2, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_SetModified(m bool) {

	C.QsciScintilla_virtualbase_setModified(unsafe.Pointer(this.h), (C.bool)(m))

}
func (this *QsciScintilla) OnSetModified(slot func(super func(m bool), m bool)) {
	ok := C.QsciScintilla_override_virtual_setModified(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setModified
func miqt_exec_callback_QsciScintilla_setModified(self *C.QsciScintilla, cb C.intptr_t, m C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(m bool), m bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(m)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetModified, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetPaper(c *qt6.QColor) {

	C.QsciScintilla_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()))

}
func (this *QsciScintilla) OnSetPaper(slot func(super func(c *qt6.QColor), c *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setPaper
func miqt_exec_callback_QsciScintilla_setPaper(self *C.QsciScintilla, cb C.intptr_t, c *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor), c *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetPaper, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetReadOnly(ro bool) {

	C.QsciScintilla_virtualbase_setReadOnly(unsafe.Pointer(this.h), (C.bool)(ro))

}
func (this *QsciScintilla) OnSetReadOnly(slot func(super func(ro bool), ro bool)) {
	ok := C.QsciScintilla_override_virtual_setReadOnly(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setReadOnly
func miqt_exec_callback_QsciScintilla_setReadOnly(self *C.QsciScintilla, cb C.intptr_t, ro C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ro bool), ro bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ro)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetReadOnly, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetSelection(lineFrom int, indexFrom int, lineTo int, indexTo int) {

	C.QsciScintilla_virtualbase_setSelection(unsafe.Pointer(this.h), (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo))

}
func (this *QsciScintilla) OnSetSelection(slot func(super func(lineFrom int, indexFrom int, lineTo int, indexTo int), lineFrom int, indexFrom int, lineTo int, indexTo int)) {
	ok := C.QsciScintilla_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setSelection
func miqt_exec_callback_QsciScintilla_setSelection(self *C.QsciScintilla, cb C.intptr_t, lineFrom C.int, indexFrom C.int, lineTo C.int, indexTo C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(lineFrom int, indexFrom int, lineTo int, indexTo int), lineFrom int, indexFrom int, lineTo int, indexTo int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(lineFrom)

	slotval2 := (int)(indexFrom)

	slotval3 := (int)(lineTo)

	slotval4 := (int)(indexTo)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetSelection, slotval1, slotval2, slotval3, slotval4)

}

func (this *QsciScintilla) callVirtualBase_SetSelectionBackgroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setSelectionBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetSelectionBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setSelectionBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setSelectionBackgroundColor
func miqt_exec_callback_QsciScintilla_setSelectionBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetSelectionBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetSelectionForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_setSelectionForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetSelectionForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	ok := C.QsciScintilla_override_virtual_setSelectionForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setSelectionForegroundColor
func miqt_exec_callback_QsciScintilla_setSelectionForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetSelectionForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetTabIndents(indent bool) {

	C.QsciScintilla_virtualbase_setTabIndents(unsafe.Pointer(this.h), (C.bool)(indent))

}
func (this *QsciScintilla) OnSetTabIndents(slot func(super func(indent bool), indent bool)) {
	ok := C.QsciScintilla_override_virtual_setTabIndents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setTabIndents
func miqt_exec_callback_QsciScintilla_setTabIndents(self *C.QsciScintilla, cb C.intptr_t, indent C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indent bool), indent bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(indent)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetTabIndents, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetTabWidth(width int) {

	C.QsciScintilla_virtualbase_setTabWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetTabWidth(slot func(super func(width int), width int)) {
	ok := C.QsciScintilla_override_virtual_setTabWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setTabWidth
func miqt_exec_callback_QsciScintilla_setTabWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int), width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetTabWidth, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QsciScintilla_virtualbase_setText(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnSetText(slot func(super func(text string), text string)) {
	ok := C.QsciScintilla_override_virtual_setText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setText
func miqt_exec_callback_QsciScintilla_setText(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text string), text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval1 := text_ret

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetText, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetUtf8(cp bool) {

	C.QsciScintilla_virtualbase_setUtf8(unsafe.Pointer(this.h), (C.bool)(cp))

}
func (this *QsciScintilla) OnSetUtf8(slot func(super func(cp bool), cp bool)) {
	ok := C.QsciScintilla_override_virtual_setUtf8(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setUtf8
func miqt_exec_callback_QsciScintilla_setUtf8(self *C.QsciScintilla, cb C.intptr_t, cp C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cp bool), cp bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(cp)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetUtf8, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetWhitespaceVisibility(mode QsciScintilla__WhitespaceVisibility) {

	C.QsciScintilla_virtualbase_setWhitespaceVisibility(unsafe.Pointer(this.h), (C.int)(mode))

}
func (this *QsciScintilla) OnSetWhitespaceVisibility(slot func(super func(mode QsciScintilla__WhitespaceVisibility), mode QsciScintilla__WhitespaceVisibility)) {
	ok := C.QsciScintilla_override_virtual_setWhitespaceVisibility(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setWhitespaceVisibility
func miqt_exec_callback_QsciScintilla_setWhitespaceVisibility(self *C.QsciScintilla, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QsciScintilla__WhitespaceVisibility), mode QsciScintilla__WhitespaceVisibility))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__WhitespaceVisibility)(mode)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetWhitespaceVisibility, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetWrapMode(mode QsciScintilla__WrapMode) {

	C.QsciScintilla_virtualbase_setWrapMode(unsafe.Pointer(this.h), (C.int)(mode))

}
func (this *QsciScintilla) OnSetWrapMode(slot func(super func(mode QsciScintilla__WrapMode), mode QsciScintilla__WrapMode)) {
	ok := C.QsciScintilla_override_virtual_setWrapMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setWrapMode
func miqt_exec_callback_QsciScintilla_setWrapMode(self *C.QsciScintilla, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QsciScintilla__WrapMode), mode QsciScintilla__WrapMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__WrapMode)(mode)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetWrapMode, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Undo() {

	C.QsciScintilla_virtualbase_undo(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnUndo(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_undo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_undo
func miqt_exec_callback_QsciScintilla_undo(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Undo)

}

func (this *QsciScintilla) callVirtualBase_Unindent(line int) {

	C.QsciScintilla_virtualbase_unindent(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnUnindent(slot func(super func(line int), line int)) {
	ok := C.QsciScintilla_override_virtual_unindent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_unindent
func miqt_exec_callback_QsciScintilla_unindent(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int), line int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Unindent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ZoomIn(rangeVal int) {

	C.QsciScintilla_virtualbase_zoomIn(unsafe.Pointer(this.h), (C.int)(rangeVal))

}
func (this *QsciScintilla) OnZoomIn(slot func(super func(rangeVal int), rangeVal int)) {
	ok := C.QsciScintilla_override_virtual_zoomIn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_zoomIn
func miqt_exec_callback_QsciScintilla_zoomIn(self *C.QsciScintilla, cb C.intptr_t, rangeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rangeVal int), rangeVal int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(rangeVal)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomIn, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ZoomIn2() {

	C.QsciScintilla_virtualbase_zoomIn2(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnZoomIn2(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_zoomIn2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_zoomIn2
func miqt_exec_callback_QsciScintilla_zoomIn2(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomIn2)

}

func (this *QsciScintilla) callVirtualBase_ZoomOut(rangeVal int) {

	C.QsciScintilla_virtualbase_zoomOut(unsafe.Pointer(this.h), (C.int)(rangeVal))

}
func (this *QsciScintilla) OnZoomOut(slot func(super func(rangeVal int), rangeVal int)) {
	ok := C.QsciScintilla_override_virtual_zoomOut(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_zoomOut
func miqt_exec_callback_QsciScintilla_zoomOut(self *C.QsciScintilla, cb C.intptr_t, rangeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rangeVal int), rangeVal int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(rangeVal)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomOut, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ZoomOut2() {

	C.QsciScintilla_virtualbase_zoomOut2(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnZoomOut2(slot func(super func())) {
	ok := C.QsciScintilla_override_virtual_zoomOut2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_zoomOut2
func miqt_exec_callback_QsciScintilla_zoomOut2(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomOut2)

}

func (this *QsciScintilla) callVirtualBase_ZoomTo(size int) {

	C.QsciScintilla_virtualbase_zoomTo(unsafe.Pointer(this.h), (C.int)(size))

}
func (this *QsciScintilla) OnZoomTo(slot func(super func(size int), size int)) {
	ok := C.QsciScintilla_override_virtual_zoomTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_zoomTo
func miqt_exec_callback_QsciScintilla_zoomTo(self *C.QsciScintilla, cb C.intptr_t, size C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int), size int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(size)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomTo, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QsciScintilla_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QsciScintilla) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QsciScintilla_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_event
func miqt_exec_callback_QsciScintilla_event(self *C.QsciScintilla, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_ChangeEvent(e *qt6.QEvent) {

	C.QsciScintilla_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnChangeEvent(slot func(super func(e *qt6.QEvent), e *qt6.QEvent)) {
	ok := C.QsciScintilla_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_changeEvent
func miqt_exec_callback_QsciScintilla_changeEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent), e *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ContextMenuEvent(e *qt6.QContextMenuEvent) {

	C.QsciScintilla_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnContextMenuEvent(slot func(super func(e *qt6.QContextMenuEvent), e *qt6.QContextMenuEvent)) {
	ok := C.QsciScintilla_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_contextMenuEvent
func miqt_exec_callback_QsciScintilla_contextMenuEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QContextMenuEvent), e *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_WheelEvent(e *qt6.QWheelEvent) {

	C.QsciScintilla_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnWheelEvent(slot func(super func(e *qt6.QWheelEvent), e *qt6.QWheelEvent)) {
	ok := C.QsciScintilla_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_wheelEvent
func miqt_exec_callback_QsciScintilla_wheelEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QWheelEvent), e *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_CanInsertFromMimeData(source *qt6.QMimeData) bool {

	return (bool)(C.QsciScintilla_virtualbase_canInsertFromMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(source.UnsafePointer())))

}
func (this *QsciScintilla) OnCanInsertFromMimeData(slot func(super func(source *qt6.QMimeData) bool, source *qt6.QMimeData) bool) {
	ok := C.QsciScintilla_override_virtual_canInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_canInsertFromMimeData
func miqt_exec_callback_QsciScintilla_canInsertFromMimeData(self *C.QsciScintilla, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *qt6.QMimeData) bool, source *qt6.QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(source))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_FromMimeData(source *qt6.QMimeData, rectangular *bool) []byte {

	var _bytearray C.struct_miqt_string = C.QsciScintilla_virtualbase_fromMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(source.UnsafePointer()), (*C.bool)(unsafe.Pointer(rectangular)))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}
func (this *QsciScintilla) OnFromMimeData(slot func(super func(source *qt6.QMimeData, rectangular *bool) []byte, source *qt6.QMimeData, rectangular *bool) []byte) {
	ok := C.QsciScintilla_override_virtual_fromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_fromMimeData
func miqt_exec_callback_QsciScintilla_fromMimeData(self *C.QsciScintilla, cb C.intptr_t, source *C.QMimeData, rectangular *C.bool) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *qt6.QMimeData, rectangular *bool) []byte, source *qt6.QMimeData, rectangular *bool) []byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(source))

	slotval2 := (*bool)(unsafe.Pointer(rectangular))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_FromMimeData, slotval1, slotval2)
	virtualReturn_alias := C.struct_miqt_string{}
	if len(virtualReturn) > 0 {
		virtualReturn_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[0]))
	} else {
		virtualReturn_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	virtualReturn_alias.len = C.size_t(len(virtualReturn))

	return virtualReturn_alias

}

func (this *QsciScintilla) callVirtualBase_ToMimeData(text []byte, rectangular bool) *qt6.QMimeData {
	text_alias := C.struct_miqt_string{}
	if len(text) > 0 {
		text_alias.data = (*C.char)(unsafe.Pointer(&text[0]))
	} else {
		text_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	text_alias.len = C.size_t(len(text))

	return qt6.UnsafeNewQMimeData(unsafe.Pointer(C.QsciScintilla_virtualbase_toMimeData(unsafe.Pointer(this.h), text_alias, (C.bool)(rectangular))))

}
func (this *QsciScintilla) OnToMimeData(slot func(super func(text []byte, rectangular bool) *qt6.QMimeData, text []byte, rectangular bool) *qt6.QMimeData) {
	ok := C.QsciScintilla_override_virtual_toMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_toMimeData
func miqt_exec_callback_QsciScintilla_toMimeData(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string, rectangular C.bool) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text []byte, rectangular bool) *qt6.QMimeData, text []byte, rectangular bool) *qt6.QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_bytearray C.struct_miqt_string = text
	text_ret := C.GoBytes(unsafe.Pointer(text_bytearray.data), C.int(int64(text_bytearray.len)))
	C.free(unsafe.Pointer(text_bytearray.data))
	slotval1 := text_ret
	slotval2 := (bool)(rectangular)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_ToMimeData, slotval1, slotval2)

	return (*C.QMimeData)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_DragEnterEvent(e *qt6.QDragEnterEvent) {

	C.QsciScintilla_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDragEnterEvent(slot func(super func(e *qt6.QDragEnterEvent), e *qt6.QDragEnterEvent)) {
	ok := C.QsciScintilla_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_dragEnterEvent
func miqt_exec_callback_QsciScintilla_dragEnterEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragEnterEvent), e *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DragLeaveEvent(e *qt6.QDragLeaveEvent) {

	C.QsciScintilla_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDragLeaveEvent(slot func(super func(e *qt6.QDragLeaveEvent), e *qt6.QDragLeaveEvent)) {
	ok := C.QsciScintilla_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_dragLeaveEvent
func miqt_exec_callback_QsciScintilla_dragLeaveEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragLeaveEvent), e *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DragMoveEvent(e *qt6.QDragMoveEvent) {

	C.QsciScintilla_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDragMoveEvent(slot func(super func(e *qt6.QDragMoveEvent), e *qt6.QDragMoveEvent)) {
	ok := C.QsciScintilla_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_dragMoveEvent
func miqt_exec_callback_QsciScintilla_dragMoveEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragMoveEvent), e *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DropEvent(e *qt6.QDropEvent) {

	C.QsciScintilla_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDropEvent(slot func(super func(e *qt6.QDropEvent), e *qt6.QDropEvent)) {
	ok := C.QsciScintilla_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_dropEvent
func miqt_exec_callback_QsciScintilla_dropEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDropEvent), e *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FocusInEvent(e *qt6.QFocusEvent) {

	C.QsciScintilla_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnFocusInEvent(slot func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent)) {
	ok := C.QsciScintilla_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_focusInEvent
func miqt_exec_callback_QsciScintilla_focusInEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FocusOutEvent(e *qt6.QFocusEvent) {

	C.QsciScintilla_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnFocusOutEvent(slot func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent)) {
	ok := C.QsciScintilla_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_focusOutEvent
func miqt_exec_callback_QsciScintilla_focusOutEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QsciScintilla_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QsciScintilla) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QsciScintilla_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_focusNextPrevChild
func miqt_exec_callback_QsciScintilla_focusNextPrevChild(self *C.QsciScintilla, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_KeyPressEvent(e *qt6.QKeyEvent) {

	C.QsciScintilla_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnKeyPressEvent(slot func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent)) {
	ok := C.QsciScintilla_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_keyPressEvent
func miqt_exec_callback_QsciScintilla_keyPressEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_InputMethodEvent(event *qt6.QInputMethodEvent) {

	C.QsciScintilla_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnInputMethodEvent(slot func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent)) {
	ok := C.QsciScintilla_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_inputMethodEvent
func miqt_exec_callback_QsciScintilla_inputMethodEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_InputMethodQuery(query qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QsciScintilla_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintilla) OnInputMethodQuery(slot func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QsciScintilla_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_inputMethodQuery
func miqt_exec_callback_QsciScintilla_inputMethodQuery(self *C.QsciScintilla, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(query)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_MouseDoubleClickEvent(e *qt6.QMouseEvent) {

	C.QsciScintilla_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMouseDoubleClickEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	ok := C.QsciScintilla_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_mouseDoubleClickEvent
func miqt_exec_callback_QsciScintilla_mouseDoubleClickEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_MouseMoveEvent(e *qt6.QMouseEvent) {

	C.QsciScintilla_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMouseMoveEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	ok := C.QsciScintilla_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_mouseMoveEvent
func miqt_exec_callback_QsciScintilla_mouseMoveEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_MousePressEvent(e *qt6.QMouseEvent) {

	C.QsciScintilla_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMousePressEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	ok := C.QsciScintilla_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_mousePressEvent
func miqt_exec_callback_QsciScintilla_mousePressEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_MouseReleaseEvent(e *qt6.QMouseEvent) {

	C.QsciScintilla_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMouseReleaseEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	ok := C.QsciScintilla_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_mouseReleaseEvent
func miqt_exec_callback_QsciScintilla_mouseReleaseEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_PaintEvent(e *qt6.QPaintEvent) {

	C.QsciScintilla_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnPaintEvent(slot func(super func(e *qt6.QPaintEvent), e *qt6.QPaintEvent)) {
	ok := C.QsciScintilla_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_paintEvent
func miqt_exec_callback_QsciScintilla_paintEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QPaintEvent), e *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ResizeEvent(e *qt6.QResizeEvent) {

	C.QsciScintilla_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnResizeEvent(slot func(super func(e *qt6.QResizeEvent), e *qt6.QResizeEvent)) {
	ok := C.QsciScintilla_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_resizeEvent
func miqt_exec_callback_QsciScintilla_resizeEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QResizeEvent), e *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QsciScintilla_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QsciScintilla) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QsciScintilla_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_scrollContentsBy
func miqt_exec_callback_QsciScintilla_scrollContentsBy(self *C.QsciScintilla, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QsciScintilla) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QsciScintilla_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintilla) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QsciScintilla_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_minimumSizeHint
func miqt_exec_callback_QsciScintilla_minimumSizeHint(self *C.QsciScintilla, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QsciScintilla_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintilla) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QsciScintilla_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_sizeHint
func miqt_exec_callback_QsciScintilla_sizeHint(self *C.QsciScintilla, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_SetupViewport(viewport *qt6.QWidget) {

	C.QsciScintilla_virtualbase_setupViewport(unsafe.Pointer(this.h), (*C.QWidget)(viewport.UnsafePointer()))

}
func (this *QsciScintilla) OnSetupViewport(slot func(super func(viewport *qt6.QWidget), viewport *qt6.QWidget)) {
	ok := C.QsciScintilla_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setupViewport
func miqt_exec_callback_QsciScintilla_setupViewport(self *C.QsciScintilla, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *qt6.QWidget), viewport *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(viewport))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QsciScintilla) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.QsciScintilla_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QsciScintilla) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	ok := C.QsciScintilla_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_eventFilter
func miqt_exec_callback_QsciScintilla_eventFilter(self *C.QsciScintilla, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_ViewportEvent(param1 *qt6.QEvent) bool {

	return (bool)(C.QsciScintilla_virtualbase_viewportEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QsciScintilla) OnViewportEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	ok := C.QsciScintilla_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_viewportEvent
func miqt_exec_callback_QsciScintilla_viewportEvent(self *C.QsciScintilla, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_ViewportSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QsciScintilla_virtualbase_viewportSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintilla) OnViewportSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QsciScintilla_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_viewportSizeHint
func miqt_exec_callback_QsciScintilla_viewportSizeHint(self *C.QsciScintilla, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_ViewportSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_InitStyleOption(option *qt6.QStyleOptionFrame) {

	C.QsciScintilla_virtualbase_initStyleOption(unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

}
func (this *QsciScintilla) OnInitStyleOption(slot func(super func(option *qt6.QStyleOptionFrame), option *qt6.QStyleOptionFrame)) {
	ok := C.QsciScintilla_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_initStyleOption
func miqt_exec_callback_QsciScintilla_initStyleOption(self *C.QsciScintilla, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *qt6.QStyleOptionFrame), option *qt6.QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQStyleOptionFrame(unsafe.Pointer(option))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DevType() int {

	return (int)(C.QsciScintilla_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QsciScintilla) OnDevType(slot func(super func() int) int) {
	ok := C.QsciScintilla_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_devType
func miqt_exec_callback_QsciScintilla_devType(self *C.QsciScintilla, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_SetVisible(visible bool) {

	C.QsciScintilla_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QsciScintilla) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QsciScintilla_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_setVisible
func miqt_exec_callback_QsciScintilla_setVisible(self *C.QsciScintilla, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QsciScintilla) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QsciScintilla_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QsciScintilla) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QsciScintilla_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_heightForWidth
func miqt_exec_callback_QsciScintilla_heightForWidth(self *C.QsciScintilla, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QsciScintilla_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QsciScintilla) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QsciScintilla_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_hasHeightForWidth
func miqt_exec_callback_QsciScintilla_hasHeightForWidth(self *C.QsciScintilla, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QsciScintilla_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QsciScintilla) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QsciScintilla_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_paintEngine
func miqt_exec_callback_QsciScintilla_paintEngine(self *C.QsciScintilla, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QsciScintilla_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QsciScintilla_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_keyReleaseEvent
func miqt_exec_callback_QsciScintilla_keyReleaseEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QsciScintilla_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QsciScintilla_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_enterEvent
func miqt_exec_callback_QsciScintilla_enterEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QsciScintilla_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QsciScintilla_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_leaveEvent
func miqt_exec_callback_QsciScintilla_leaveEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QsciScintilla_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QsciScintilla_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_moveEvent
func miqt_exec_callback_QsciScintilla_moveEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QsciScintilla_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QsciScintilla_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_closeEvent
func miqt_exec_callback_QsciScintilla_closeEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QsciScintilla_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QsciScintilla_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_tabletEvent
func miqt_exec_callback_QsciScintilla_tabletEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QsciScintilla_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QsciScintilla_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_actionEvent
func miqt_exec_callback_QsciScintilla_actionEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QsciScintilla_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QsciScintilla_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_showEvent
func miqt_exec_callback_QsciScintilla_showEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QsciScintilla_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QsciScintilla_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_hideEvent
func miqt_exec_callback_QsciScintilla_hideEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QsciScintilla_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QsciScintilla) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QsciScintilla_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_nativeEvent
func miqt_exec_callback_QsciScintilla_nativeEvent(self *C.QsciScintilla, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QsciScintilla_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QsciScintilla) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QsciScintilla_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_metric
func miqt_exec_callback_QsciScintilla_metric(self *C.QsciScintilla, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QsciScintilla_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QsciScintilla) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QsciScintilla_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_initPainter
func miqt_exec_callback_QsciScintilla_initPainter(self *C.QsciScintilla, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QsciScintilla_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QsciScintilla) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QsciScintilla_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_redirected
func miqt_exec_callback_QsciScintilla_redirected(self *C.QsciScintilla, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QsciScintilla_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QsciScintilla) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QsciScintilla_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_sharedPainter
func miqt_exec_callback_QsciScintilla_sharedPainter(self *C.QsciScintilla, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QsciScintilla) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QsciScintilla_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QsciScintilla_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_timerEvent
func miqt_exec_callback_QsciScintilla_timerEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QsciScintilla_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QsciScintilla_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_childEvent
func miqt_exec_callback_QsciScintilla_childEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QsciScintilla_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QsciScintilla_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_customEvent
func miqt_exec_callback_QsciScintilla_customEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QsciScintilla_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciScintilla) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciScintilla_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_connectNotify
func miqt_exec_callback_QsciScintilla_connectNotify(self *C.QsciScintilla, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QsciScintilla_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciScintilla) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciScintilla_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciScintilla_disconnectNotify
func miqt_exec_callback_QsciScintilla_disconnectNotify(self *C.QsciScintilla, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciScintilla) Delete() {
	C.QsciScintilla_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciScintilla) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciScintilla) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

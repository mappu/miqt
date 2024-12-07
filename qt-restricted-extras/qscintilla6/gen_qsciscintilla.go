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
	h          *C.QsciScintilla
	isSubclass bool
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
func newQsciScintilla(h *C.QsciScintilla, h_QsciScintillaBase *C.QsciScintillaBase, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QsciScintilla {
	if h == nil {
		return nil
	}
	return &QsciScintilla{h: h,
		QsciScintillaBase: newQsciScintillaBase(h_QsciScintillaBase, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQsciScintilla constructs the type using only unsafe pointers.
func UnsafeNewQsciScintilla(h unsafe.Pointer, h_QsciScintillaBase unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QsciScintilla {
	if h == nil {
		return nil
	}

	return &QsciScintilla{h: (*C.QsciScintilla)(h),
		QsciScintillaBase: UnsafeNewQsciScintillaBase(h_QsciScintillaBase, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQsciScintilla constructs a new QsciScintilla object.
func NewQsciScintilla(parent *qt6.QWidget) *QsciScintilla {
	var outptr_QsciScintilla *C.QsciScintilla = nil
	var outptr_QsciScintillaBase *C.QsciScintillaBase = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QsciScintilla_new((*C.QWidget)(parent.UnsafePointer()), &outptr_QsciScintilla, &outptr_QsciScintillaBase, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQsciScintilla(outptr_QsciScintilla, outptr_QsciScintillaBase, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQsciScintilla2 constructs a new QsciScintilla object.
func NewQsciScintilla2() *QsciScintilla {
	var outptr_QsciScintilla *C.QsciScintilla = nil
	var outptr_QsciScintillaBase *C.QsciScintillaBase = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QsciScintilla_new2(&outptr_QsciScintilla, &outptr_QsciScintillaBase, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQsciScintilla(outptr_QsciScintilla, outptr_QsciScintillaBase, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QsciScintilla) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciScintilla_MetaObject(this.h)))
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

func (this *QsciScintilla) ApiContext(pos int, context_start *int, last_word_start *int) []string {
	var _ma C.struct_miqt_array = C.QsciScintilla_ApiContext(this.h, (C.int)(pos), (*C.int)(unsafe.Pointer(context_start)), (*C.int)(unsafe.Pointer(last_word_start)))
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

func (this *QsciScintilla) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_Color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) ContractedFolds() []int {
	var _ma C.struct_miqt_array = C.QsciScintilla_ContractedFolds(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QsciScintilla) ConvertEols(mode QsciScintilla__EolMode) {
	C.QsciScintilla_ConvertEols(this.h, (C.int)(mode))
}

func (this *QsciScintilla) CreateStandardContextMenu() *qt6.QMenu {
	return qt6.UnsafeNewQMenu(unsafe.Pointer(C.QsciScintilla_CreateStandardContextMenu(this.h)), nil, nil, nil)
}

func (this *QsciScintilla) Document() *QsciDocument {
	_goptr := newQsciDocument(C.QsciScintilla_Document(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) EndUndoAction() {
	C.QsciScintilla_EndUndoAction(this.h)
}

func (this *QsciScintilla) EdgeColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_EdgeColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) EdgeColumn() int {
	return (int)(C.QsciScintilla_EdgeColumn(this.h))
}

func (this *QsciScintilla) EdgeMode() QsciScintilla__EdgeMode {
	return (QsciScintilla__EdgeMode)(C.QsciScintilla_EdgeMode(this.h))
}

func (this *QsciScintilla) SetFont(f *qt6.QFont) {
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

func (this *QsciScintilla) FindFirst(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirst(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))
}

func (this *QsciScintilla) FindFirstInSelection(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool {
	expr_ms := C.struct_miqt_string{}
	expr_ms.data = C.CString(expr)
	expr_ms.len = C.size_t(len(expr))
	defer C.free(unsafe.Pointer(expr_ms.data))
	return (bool)(C.QsciScintilla_FindFirstInSelection(this.h, expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))
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

func (this *QsciScintilla) LineAt(point *qt6.QPoint) int {
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
	return newQsciLexer(C.QsciScintilla_Lexer(this.h), nil)
}

func (this *QsciScintilla) MarginBackgroundColor(margin int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_MarginBackgroundColor(this.h, (C.int)(margin))))
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

func (this *QsciScintilla) MarkerDefineWithPm(pm *qt6.QPixmap) int {
	return (int)(C.QsciScintilla_MarkerDefineWithPm(this.h, (*C.QPixmap)(pm.UnsafePointer())))
}

func (this *QsciScintilla) MarkerDefineWithIm(im *qt6.QImage) int {
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

func (this *QsciScintilla) Paper() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciScintilla_Paper(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciScintilla) PositionFromLineIndex(line int, index int) int {
	return (int)(C.QsciScintilla_PositionFromLineIndex(this.h, (C.int)(line), (C.int)(index)))
}

func (this *QsciScintilla) Read(io *qt6.QIODevice) bool {
	return (bool)(C.QsciScintilla_Read(this.h, (*C.QIODevice)(io.UnsafePointer())))
}

func (this *QsciScintilla) Recolor(start int, end int) {
	C.QsciScintilla_Recolor(this.h, (C.int)(start), (C.int)(end))
}

func (this *QsciScintilla) RegisterImage(id int, pm *qt6.QPixmap) {
	C.QsciScintilla_RegisterImage(this.h, (C.int)(id), (*C.QPixmap)(pm.UnsafePointer()))
}

func (this *QsciScintilla) RegisterImage2(id int, im *qt6.QImage) {
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

func (this *QsciScintilla) SetFoldMarginColors(fore *qt6.QColor, back *qt6.QColor) {
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
	C.QsciScintilla_SetAutoCompletionWordSeparators(this.h, separators_ma)
}

func (this *QsciScintilla) SetCallTipsBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetCallTipsBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetCallTipsForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCallTipsHighlightColor(col *qt6.QColor) {
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
	folds_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(folds))))
	defer C.free(unsafe.Pointer(folds_CArray))
	for i := range folds {
		folds_CArray[i] = (C.int)(folds[i])
	}
	folds_ma := C.struct_miqt_array{len: C.size_t(len(folds)), data: unsafe.Pointer(folds_CArray)}
	C.QsciScintilla_SetContractedFolds(this.h, folds_ma)
}

func (this *QsciScintilla) SetDocument(document *QsciDocument) {
	C.QsciScintilla_SetDocument(this.h, document.cPointer())
}

func (this *QsciScintilla) AddEdgeColumn(colnr int, col *qt6.QColor) {
	C.QsciScintilla_AddEdgeColumn(this.h, (C.int)(colnr), (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) ClearEdgeColumns() {
	C.QsciScintilla_ClearEdgeColumns(this.h)
}

func (this *QsciScintilla) SetEdgeColor(col *qt6.QColor) {
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

func (this *QsciScintilla) SetIndicatorForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetIndicatorForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndicatorHoverForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetIndicatorHoverForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndicatorHoverStyle(style QsciScintilla__IndicatorStyle) {
	C.QsciScintilla_SetIndicatorHoverStyle(this.h, (C.int)(style))
}

func (this *QsciScintilla) SetIndicatorOutlineColor(col *qt6.QColor) {
	C.QsciScintilla_SetIndicatorOutlineColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginBackgroundColor(margin int, col *qt6.QColor) {
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

func (this *QsciScintilla) SetMarkerBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetMarkerBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarkerForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetMarkerForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetMatchedBraceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMatchedBraceForegroundColor(col *qt6.QColor) {
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

func (this *QsciScintilla) SetUnmatchedBraceBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetUnmatchedBraceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetUnmatchedBraceForegroundColor(col *qt6.QColor) {
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

func (this *QsciScintilla) SetHotspotBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetHotspotBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetHotspotForegroundColor(col *qt6.QColor) {
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

func (this *QsciScintilla) SetWhitespaceBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetWhitespaceBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetWhitespaceForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetWhitespaceForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetWhitespaceSize(size int) {
	C.QsciScintilla_SetWhitespaceSize(this.h, (C.int)(size))
}

func (this *QsciScintilla) SetWrapIndentMode(mode QsciScintilla__WrapIndentMode) {
	C.QsciScintilla_SetWrapIndentMode(this.h, (C.int)(mode))
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
	C.QsciScintilla_ShowUserList(this.h, (C.int)(id), list_ma)
}

func (this *QsciScintilla) StandardCommands() *QsciCommandSet {
	return newQsciCommandSet(C.QsciScintilla_StandardCommands(this.h))
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

func (this *QsciScintilla) WordAtPoint(point *qt6.QPoint) string {
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

func (this *QsciScintilla) Write(io *qt6.QIODevice) bool {
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

func (this *QsciScintilla) FoldAll(children bool) {
	C.QsciScintilla_FoldAll(this.h, (C.bool)(children))
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

func (this *QsciScintilla) SelectAll(selectVal bool) {
	C.QsciScintilla_SelectAll(this.h, (C.bool)(selectVal))
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

func (this *QsciScintilla) SetCaretForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetCaretForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetCaretLineBackgroundColor(col *qt6.QColor) {
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

func (this *QsciScintilla) SetColor(c *qt6.QColor) {
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

func (this *QsciScintilla) SetFolding(fold QsciScintilla__FoldStyle, margin int) {
	C.QsciScintilla_SetFolding(this.h, (C.int)(fold), (C.int)(margin))
}

func (this *QsciScintilla) SetIndentation(line int, indentation int) {
	C.QsciScintilla_SetIndentation(this.h, (C.int)(line), (C.int)(indentation))
}

func (this *QsciScintilla) SetIndentationGuides(enable bool) {
	C.QsciScintilla_SetIndentationGuides(this.h, (C.bool)(enable))
}

func (this *QsciScintilla) SetIndentationGuidesBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetIndentationGuidesBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndentationGuidesForegroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetIndentationGuidesForegroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetIndentationsUseTabs(tabs bool) {
	C.QsciScintilla_SetIndentationsUseTabs(this.h, (C.bool)(tabs))
}

func (this *QsciScintilla) SetIndentationWidth(width int) {
	C.QsciScintilla_SetIndentationWidth(this.h, (C.int)(width))
}

func (this *QsciScintilla) SetLexer(lexer *QsciLexer) {
	C.QsciScintilla_SetLexer(this.h, lexer.cPointer())
}

func (this *QsciScintilla) SetMarginsBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetMarginsBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginsFont(f *qt6.QFont) {
	C.QsciScintilla_SetMarginsFont(this.h, (*C.QFont)(f.UnsafePointer()))
}

func (this *QsciScintilla) SetMarginsForegroundColor(col *qt6.QColor) {
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

func (this *QsciScintilla) SetPaper(c *qt6.QColor) {
	C.QsciScintilla_SetPaper(this.h, (*C.QColor)(c.UnsafePointer()))
}

func (this *QsciScintilla) SetReadOnly(ro bool) {
	C.QsciScintilla_SetReadOnly(this.h, (C.bool)(ro))
}

func (this *QsciScintilla) SetSelection(lineFrom int, indexFrom int, lineTo int, indexTo int) {
	C.QsciScintilla_SetSelection(this.h, (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo))
}

func (this *QsciScintilla) SetSelectionBackgroundColor(col *qt6.QColor) {
	C.QsciScintilla_SetSelectionBackgroundColor(this.h, (*C.QColor)(col.UnsafePointer()))
}

func (this *QsciScintilla) SetSelectionForegroundColor(col *qt6.QColor) {
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

func (this *QsciScintilla) IndicatorClicked(line int, index int, state qt6.KeyboardModifier) {
	C.QsciScintilla_IndicatorClicked(this.h, (C.int)(line), (C.int)(index), (C.int)(state))
}
func (this *QsciScintilla) OnIndicatorClicked(slot func(line int, index int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_IndicatorClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_IndicatorClicked
func miqt_exec_callback_QsciScintilla_IndicatorClicked(cb C.intptr_t, line C.int, index C.int, state C.int) {
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
	C.QsciScintilla_IndicatorReleased(this.h, (C.int)(line), (C.int)(index), (C.int)(state))
}
func (this *QsciScintilla) OnIndicatorReleased(slot func(line int, index int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_IndicatorReleased(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_IndicatorReleased
func miqt_exec_callback_QsciScintilla_IndicatorReleased(cb C.intptr_t, line C.int, index C.int, state C.int) {
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

func (this *QsciScintilla) MarginClicked(margin int, line int, state qt6.KeyboardModifier) {
	C.QsciScintilla_MarginClicked(this.h, (C.int)(margin), (C.int)(line), (C.int)(state))
}
func (this *QsciScintilla) OnMarginClicked(slot func(margin int, line int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_MarginClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MarginClicked
func miqt_exec_callback_QsciScintilla_MarginClicked(cb C.intptr_t, margin C.int, line C.int, state C.int) {
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
	C.QsciScintilla_MarginRightClicked(this.h, (C.int)(margin), (C.int)(line), (C.int)(state))
}
func (this *QsciScintilla) OnMarginRightClicked(slot func(margin int, line int, state qt6.KeyboardModifier)) {
	C.QsciScintilla_connect_MarginRightClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MarginRightClicked
func miqt_exec_callback_QsciScintilla_MarginRightClicked(cb C.intptr_t, margin C.int, line C.int, state C.int) {
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

func (this *QsciScintilla) ClearAnnotations1(line int) {
	C.QsciScintilla_ClearAnnotations1(this.h, (C.int)(line))
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

func (this *QsciScintilla) MarkerDefine23(pm *qt6.QPixmap, markerNumber int) int {
	return (int)(C.QsciScintilla_MarkerDefine23(this.h, (*C.QPixmap)(pm.UnsafePointer()), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDefine24(im *qt6.QImage, markerNumber int) int {
	return (int)(C.QsciScintilla_MarkerDefine24(this.h, (*C.QImage)(im.UnsafePointer()), (C.int)(markerNumber)))
}

func (this *QsciScintilla) MarkerDelete2(linenr int, markerNumber int) {
	C.QsciScintilla_MarkerDelete2(this.h, (C.int)(linenr), (C.int)(markerNumber))
}

func (this *QsciScintilla) MarkerDeleteAll1(markerNumber int) {
	C.QsciScintilla_MarkerDeleteAll1(this.h, (C.int)(markerNumber))
}

func (this *QsciScintilla) SetIndicatorDrawUnder2(under bool, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorDrawUnder2(this.h, (C.bool)(under), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorForegroundColor2(col *qt6.QColor, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorHoverForegroundColor2(col *qt6.QColor, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorHoverForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorHoverStyle2(style QsciScintilla__IndicatorStyle, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorHoverStyle2(this.h, (C.int)(style), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) SetIndicatorOutlineColor2(col *qt6.QColor, indicatorNumber int) {
	C.QsciScintilla_SetIndicatorOutlineColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(indicatorNumber))
}

func (this *QsciScintilla) ClearMarginText1(line int) {
	C.QsciScintilla_ClearMarginText1(this.h, (C.int)(line))
}

func (this *QsciScintilla) SetMarkerBackgroundColor2(col *qt6.QColor, markerNumber int) {
	C.QsciScintilla_SetMarkerBackgroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(markerNumber))
}

func (this *QsciScintilla) SetMarkerForegroundColor2(col *qt6.QColor, markerNumber int) {
	C.QsciScintilla_SetMarkerForegroundColor2(this.h, (*C.QColor)(col.UnsafePointer()), (C.int)(markerNumber))
}

func (this *QsciScintilla) SetWrapVisualFlags2(endFlag QsciScintilla__WrapVisualFlag, startFlag QsciScintilla__WrapVisualFlag) {
	C.QsciScintilla_SetWrapVisualFlags2(this.h, (C.int)(endFlag), (C.int)(startFlag))
}

func (this *QsciScintilla) SetWrapVisualFlags3(endFlag QsciScintilla__WrapVisualFlag, startFlag QsciScintilla__WrapVisualFlag, indent int) {
	C.QsciScintilla_SetWrapVisualFlags3(this.h, (C.int)(endFlag), (C.int)(startFlag), (C.int)(indent))
}

func (this *QsciScintilla) callVirtualBase_ApiContext(pos int, context_start *int, last_word_start *int) []string {

	var _ma C.struct_miqt_array = C.QsciScintilla_virtualbase_ApiContext(unsafe.Pointer(this.h), (C.int)(pos), (*C.int)(unsafe.Pointer(context_start)), (*C.int)(unsafe.Pointer(last_word_start)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ApiContext(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ApiContext
func miqt_exec_callback_QsciScintilla_ApiContext(self *C.QsciScintilla, cb C.intptr_t, pos C.int, context_start *C.int, last_word_start *C.int) C.struct_miqt_array {
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

	return (bool)(C.QsciScintilla_virtualbase_FindFirst(unsafe.Pointer(this.h), expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(wrap), (C.bool)(forward), (C.int)(line), (C.int)(index), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))

}
func (this *QsciScintilla) OnFindFirst(slot func(super func(expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool, expr string, re bool, cs bool, wo bool, wrap bool, forward bool, line int, index int, show bool, posix bool, cxx11 bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FindFirst(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FindFirst
func miqt_exec_callback_QsciScintilla_FindFirst(self *C.QsciScintilla, cb C.intptr_t, expr C.struct_miqt_string, re C.bool, cs C.bool, wo C.bool, wrap C.bool, forward C.bool, line C.int, index C.int, show C.bool, posix C.bool, cxx11 C.bool) C.bool {
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

	return (bool)(C.QsciScintilla_virtualbase_FindFirstInSelection(unsafe.Pointer(this.h), expr_ms, (C.bool)(re), (C.bool)(cs), (C.bool)(wo), (C.bool)(forward), (C.bool)(show), (C.bool)(posix), (C.bool)(cxx11)))

}
func (this *QsciScintilla) OnFindFirstInSelection(slot func(super func(expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool, expr string, re bool, cs bool, wo bool, forward bool, show bool, posix bool, cxx11 bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FindFirstInSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FindFirstInSelection
func miqt_exec_callback_QsciScintilla_FindFirstInSelection(self *C.QsciScintilla, cb C.intptr_t, expr C.struct_miqt_string, re C.bool, cs C.bool, wo C.bool, forward C.bool, show C.bool, posix C.bool, cxx11 C.bool) C.bool {
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

	return (bool)(C.QsciScintilla_virtualbase_FindNext(unsafe.Pointer(this.h)))

}
func (this *QsciScintilla) OnFindNext(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FindNext(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FindNext
func miqt_exec_callback_QsciScintilla_FindNext(self *C.QsciScintilla, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_FindNext)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_Recolor(start int, end int) {

	C.QsciScintilla_virtualbase_Recolor(unsafe.Pointer(this.h), (C.int)(start), (C.int)(end))

}
func (this *QsciScintilla) OnRecolor(slot func(super func(start int, end int), start int, end int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Recolor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Recolor
func miqt_exec_callback_QsciScintilla_Recolor(self *C.QsciScintilla, cb C.intptr_t, start C.int, end C.int) {
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

	C.QsciScintilla_virtualbase_Replace(unsafe.Pointer(this.h), replaceStr_ms)

}
func (this *QsciScintilla) OnReplace(slot func(super func(replaceStr string), replaceStr string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Replace(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Replace
func miqt_exec_callback_QsciScintilla_Replace(self *C.QsciScintilla, cb C.intptr_t, replaceStr C.struct_miqt_string) {
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

	C.QsciScintilla_virtualbase_Append(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnAppend(slot func(super func(text string), text string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Append(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Append
func miqt_exec_callback_QsciScintilla_Append(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
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

	C.QsciScintilla_virtualbase_AutoCompleteFromAll(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnAutoCompleteFromAll(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_AutoCompleteFromAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_AutoCompleteFromAll
func miqt_exec_callback_QsciScintilla_AutoCompleteFromAll(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_AutoCompleteFromAll)

}

func (this *QsciScintilla) callVirtualBase_AutoCompleteFromAPIs() {

	C.QsciScintilla_virtualbase_AutoCompleteFromAPIs(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnAutoCompleteFromAPIs(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_AutoCompleteFromAPIs(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_AutoCompleteFromAPIs
func miqt_exec_callback_QsciScintilla_AutoCompleteFromAPIs(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_AutoCompleteFromAPIs)

}

func (this *QsciScintilla) callVirtualBase_AutoCompleteFromDocument() {

	C.QsciScintilla_virtualbase_AutoCompleteFromDocument(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnAutoCompleteFromDocument(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_AutoCompleteFromDocument(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_AutoCompleteFromDocument
func miqt_exec_callback_QsciScintilla_AutoCompleteFromDocument(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_AutoCompleteFromDocument)

}

func (this *QsciScintilla) callVirtualBase_CallTip() {

	C.QsciScintilla_virtualbase_CallTip(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnCallTip(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_CallTip(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_CallTip
func miqt_exec_callback_QsciScintilla_CallTip(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_CallTip)

}

func (this *QsciScintilla) callVirtualBase_Clear() {

	C.QsciScintilla_virtualbase_Clear(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnClear(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Clear
func miqt_exec_callback_QsciScintilla_Clear(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Clear)

}

func (this *QsciScintilla) callVirtualBase_Copy() {

	C.QsciScintilla_virtualbase_Copy(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnCopy(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Copy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Copy
func miqt_exec_callback_QsciScintilla_Copy(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Copy)

}

func (this *QsciScintilla) callVirtualBase_Cut() {

	C.QsciScintilla_virtualbase_Cut(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnCut(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Cut(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Cut
func miqt_exec_callback_QsciScintilla_Cut(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Cut)

}

func (this *QsciScintilla) callVirtualBase_EnsureCursorVisible() {

	C.QsciScintilla_virtualbase_EnsureCursorVisible(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnEnsureCursorVisible(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_EnsureCursorVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_EnsureCursorVisible
func miqt_exec_callback_QsciScintilla_EnsureCursorVisible(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_EnsureCursorVisible)

}

func (this *QsciScintilla) callVirtualBase_EnsureLineVisible(line int) {

	C.QsciScintilla_virtualbase_EnsureLineVisible(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnEnsureLineVisible(slot func(super func(line int), line int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_EnsureLineVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_EnsureLineVisible
func miqt_exec_callback_QsciScintilla_EnsureLineVisible(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int), line int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_EnsureLineVisible, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FoldAll(children bool) {

	C.QsciScintilla_virtualbase_FoldAll(unsafe.Pointer(this.h), (C.bool)(children))

}
func (this *QsciScintilla) OnFoldAll(slot func(super func(children bool), children bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FoldAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FoldAll
func miqt_exec_callback_QsciScintilla_FoldAll(self *C.QsciScintilla, cb C.intptr_t, children C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(children bool), children bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(children)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FoldAll, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FoldLine(line int) {

	C.QsciScintilla_virtualbase_FoldLine(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnFoldLine(slot func(super func(line int), line int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FoldLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FoldLine
func miqt_exec_callback_QsciScintilla_FoldLine(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int), line int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FoldLine, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Indent(line int) {

	C.QsciScintilla_virtualbase_Indent(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnIndent(slot func(super func(line int), line int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Indent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Indent
func miqt_exec_callback_QsciScintilla_Indent(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
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

	C.QsciScintilla_virtualbase_Insert(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnInsert(slot func(super func(text string), text string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Insert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Insert
func miqt_exec_callback_QsciScintilla_Insert(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
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

	C.QsciScintilla_virtualbase_InsertAt(unsafe.Pointer(this.h), text_ms, (C.int)(line), (C.int)(index))

}
func (this *QsciScintilla) OnInsertAt(slot func(super func(text string, line int, index int), text string, line int, index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_InsertAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_InsertAt
func miqt_exec_callback_QsciScintilla_InsertAt(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string, line C.int, index C.int) {
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

	C.QsciScintilla_virtualbase_MoveToMatchingBrace(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnMoveToMatchingBrace(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_MoveToMatchingBrace(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MoveToMatchingBrace
func miqt_exec_callback_QsciScintilla_MoveToMatchingBrace(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MoveToMatchingBrace)

}

func (this *QsciScintilla) callVirtualBase_Paste() {

	C.QsciScintilla_virtualbase_Paste(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnPaste(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Paste(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Paste
func miqt_exec_callback_QsciScintilla_Paste(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Paste)

}

func (this *QsciScintilla) callVirtualBase_Redo() {

	C.QsciScintilla_virtualbase_Redo(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnRedo(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Redo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Redo
func miqt_exec_callback_QsciScintilla_Redo(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Redo)

}

func (this *QsciScintilla) callVirtualBase_RemoveSelectedText() {

	C.QsciScintilla_virtualbase_RemoveSelectedText(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnRemoveSelectedText(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_RemoveSelectedText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_RemoveSelectedText
func miqt_exec_callback_QsciScintilla_RemoveSelectedText(self *C.QsciScintilla, cb C.intptr_t) {
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

	C.QsciScintilla_virtualbase_ReplaceSelectedText(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnReplaceSelectedText(slot func(super func(text string), text string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ReplaceSelectedText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ReplaceSelectedText
func miqt_exec_callback_QsciScintilla_ReplaceSelectedText(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
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

	C.QsciScintilla_virtualbase_ResetSelectionBackgroundColor(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnResetSelectionBackgroundColor(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ResetSelectionBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ResetSelectionBackgroundColor
func miqt_exec_callback_QsciScintilla_ResetSelectionBackgroundColor(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ResetSelectionBackgroundColor)

}

func (this *QsciScintilla) callVirtualBase_ResetSelectionForegroundColor() {

	C.QsciScintilla_virtualbase_ResetSelectionForegroundColor(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnResetSelectionForegroundColor(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ResetSelectionForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ResetSelectionForegroundColor
func miqt_exec_callback_QsciScintilla_ResetSelectionForegroundColor(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ResetSelectionForegroundColor)

}

func (this *QsciScintilla) callVirtualBase_SelectAll(selectVal bool) {

	C.QsciScintilla_virtualbase_SelectAll(unsafe.Pointer(this.h), (C.bool)(selectVal))

}
func (this *QsciScintilla) OnSelectAll(slot func(super func(selectVal bool), selectVal bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SelectAll
func miqt_exec_callback_QsciScintilla_SelectAll(self *C.QsciScintilla, cb C.intptr_t, selectVal C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectVal bool), selectVal bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(selectVal)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SelectAll, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SelectToMatchingBrace() {

	C.QsciScintilla_virtualbase_SelectToMatchingBrace(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnSelectToMatchingBrace(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SelectToMatchingBrace(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SelectToMatchingBrace
func miqt_exec_callback_QsciScintilla_SelectToMatchingBrace(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SelectToMatchingBrace)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionCaseSensitivity(cs bool) {

	C.QsciScintilla_virtualbase_SetAutoCompletionCaseSensitivity(unsafe.Pointer(this.h), (C.bool)(cs))

}
func (this *QsciScintilla) OnSetAutoCompletionCaseSensitivity(slot func(super func(cs bool), cs bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetAutoCompletionCaseSensitivity(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetAutoCompletionCaseSensitivity
func miqt_exec_callback_QsciScintilla_SetAutoCompletionCaseSensitivity(self *C.QsciScintilla, cb C.intptr_t, cs C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cs bool), cs bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(cs)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionCaseSensitivity, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionReplaceWord(replace bool) {

	C.QsciScintilla_virtualbase_SetAutoCompletionReplaceWord(unsafe.Pointer(this.h), (C.bool)(replace))

}
func (this *QsciScintilla) OnSetAutoCompletionReplaceWord(slot func(super func(replace bool), replace bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetAutoCompletionReplaceWord(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetAutoCompletionReplaceWord
func miqt_exec_callback_QsciScintilla_SetAutoCompletionReplaceWord(self *C.QsciScintilla, cb C.intptr_t, replace C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(replace bool), replace bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(replace)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionReplaceWord, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionShowSingle(single bool) {

	C.QsciScintilla_virtualbase_SetAutoCompletionShowSingle(unsafe.Pointer(this.h), (C.bool)(single))

}
func (this *QsciScintilla) OnSetAutoCompletionShowSingle(slot func(super func(single bool), single bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetAutoCompletionShowSingle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetAutoCompletionShowSingle
func miqt_exec_callback_QsciScintilla_SetAutoCompletionShowSingle(self *C.QsciScintilla, cb C.intptr_t, single C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(single bool), single bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(single)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionShowSingle, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionSource(source QsciScintilla__AutoCompletionSource) {

	C.QsciScintilla_virtualbase_SetAutoCompletionSource(unsafe.Pointer(this.h), (C.int)(source))

}
func (this *QsciScintilla) OnSetAutoCompletionSource(slot func(super func(source QsciScintilla__AutoCompletionSource), source QsciScintilla__AutoCompletionSource)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetAutoCompletionSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetAutoCompletionSource
func miqt_exec_callback_QsciScintilla_SetAutoCompletionSource(self *C.QsciScintilla, cb C.intptr_t, source C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source QsciScintilla__AutoCompletionSource), source QsciScintilla__AutoCompletionSource))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__AutoCompletionSource)(source)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionSource, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionThreshold(thresh int) {

	C.QsciScintilla_virtualbase_SetAutoCompletionThreshold(unsafe.Pointer(this.h), (C.int)(thresh))

}
func (this *QsciScintilla) OnSetAutoCompletionThreshold(slot func(super func(thresh int), thresh int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetAutoCompletionThreshold(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetAutoCompletionThreshold
func miqt_exec_callback_QsciScintilla_SetAutoCompletionThreshold(self *C.QsciScintilla, cb C.intptr_t, thresh C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(thresh int), thresh int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(thresh)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionThreshold, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoCompletionUseSingle(single QsciScintilla__AutoCompletionUseSingle) {

	C.QsciScintilla_virtualbase_SetAutoCompletionUseSingle(unsafe.Pointer(this.h), (C.int)(single))

}
func (this *QsciScintilla) OnSetAutoCompletionUseSingle(slot func(super func(single QsciScintilla__AutoCompletionUseSingle), single QsciScintilla__AutoCompletionUseSingle)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetAutoCompletionUseSingle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetAutoCompletionUseSingle
func miqt_exec_callback_QsciScintilla_SetAutoCompletionUseSingle(self *C.QsciScintilla, cb C.intptr_t, single C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(single QsciScintilla__AutoCompletionUseSingle), single QsciScintilla__AutoCompletionUseSingle))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__AutoCompletionUseSingle)(single)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoCompletionUseSingle, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetAutoIndent(autoindent bool) {

	C.QsciScintilla_virtualbase_SetAutoIndent(unsafe.Pointer(this.h), (C.bool)(autoindent))

}
func (this *QsciScintilla) OnSetAutoIndent(slot func(super func(autoindent bool), autoindent bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetAutoIndent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetAutoIndent
func miqt_exec_callback_QsciScintilla_SetAutoIndent(self *C.QsciScintilla, cb C.intptr_t, autoindent C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindent bool), autoindent bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(autoindent)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetAutoIndent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetBraceMatching(bm QsciScintilla__BraceMatch) {

	C.QsciScintilla_virtualbase_SetBraceMatching(unsafe.Pointer(this.h), (C.int)(bm))

}
func (this *QsciScintilla) OnSetBraceMatching(slot func(super func(bm QsciScintilla__BraceMatch), bm QsciScintilla__BraceMatch)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetBraceMatching(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetBraceMatching
func miqt_exec_callback_QsciScintilla_SetBraceMatching(self *C.QsciScintilla, cb C.intptr_t, bm C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(bm QsciScintilla__BraceMatch), bm QsciScintilla__BraceMatch))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__BraceMatch)(bm)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetBraceMatching, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetBackspaceUnindents(unindent bool) {

	C.QsciScintilla_virtualbase_SetBackspaceUnindents(unsafe.Pointer(this.h), (C.bool)(unindent))

}
func (this *QsciScintilla) OnSetBackspaceUnindents(slot func(super func(unindent bool), unindent bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetBackspaceUnindents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetBackspaceUnindents
func miqt_exec_callback_QsciScintilla_SetBackspaceUnindents(self *C.QsciScintilla, cb C.intptr_t, unindent C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(unindent bool), unindent bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(unindent)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetBackspaceUnindents, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetCaretForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetCaretForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetCaretForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetCaretForegroundColor
func miqt_exec_callback_QsciScintilla_SetCaretForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretLineBackgroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetCaretLineBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetCaretLineBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetCaretLineBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetCaretLineBackgroundColor
func miqt_exec_callback_QsciScintilla_SetCaretLineBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretLineBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretLineFrameWidth(width int) {

	C.QsciScintilla_virtualbase_SetCaretLineFrameWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetCaretLineFrameWidth(slot func(super func(width int), width int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetCaretLineFrameWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetCaretLineFrameWidth
func miqt_exec_callback_QsciScintilla_SetCaretLineFrameWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int), width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretLineFrameWidth, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretLineVisible(enable bool) {

	C.QsciScintilla_virtualbase_SetCaretLineVisible(unsafe.Pointer(this.h), (C.bool)(enable))

}
func (this *QsciScintilla) OnSetCaretLineVisible(slot func(super func(enable bool), enable bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetCaretLineVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetCaretLineVisible
func miqt_exec_callback_QsciScintilla_SetCaretLineVisible(self *C.QsciScintilla, cb C.intptr_t, enable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enable bool), enable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enable)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretLineVisible, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCaretWidth(width int) {

	C.QsciScintilla_virtualbase_SetCaretWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetCaretWidth(slot func(super func(width int), width int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetCaretWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetCaretWidth
func miqt_exec_callback_QsciScintilla_SetCaretWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int), width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetCaretWidth, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetColor(c *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()))

}
func (this *QsciScintilla) OnSetColor(slot func(super func(c *qt6.QColor), c *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetColor
func miqt_exec_callback_QsciScintilla_SetColor(self *C.QsciScintilla, cb C.intptr_t, c *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor), c *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetCursorPosition(line int, index int) {

	C.QsciScintilla_virtualbase_SetCursorPosition(unsafe.Pointer(this.h), (C.int)(line), (C.int)(index))

}
func (this *QsciScintilla) OnSetCursorPosition(slot func(super func(line int, index int), line int, index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetCursorPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetCursorPosition
func miqt_exec_callback_QsciScintilla_SetCursorPosition(self *C.QsciScintilla, cb C.intptr_t, line C.int, index C.int) {
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

	C.QsciScintilla_virtualbase_SetEolMode(unsafe.Pointer(this.h), (C.int)(mode))

}
func (this *QsciScintilla) OnSetEolMode(slot func(super func(mode QsciScintilla__EolMode), mode QsciScintilla__EolMode)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetEolMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetEolMode
func miqt_exec_callback_QsciScintilla_SetEolMode(self *C.QsciScintilla, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QsciScintilla__EolMode), mode QsciScintilla__EolMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__EolMode)(mode)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetEolMode, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetEolVisibility(visible bool) {

	C.QsciScintilla_virtualbase_SetEolVisibility(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QsciScintilla) OnSetEolVisibility(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetEolVisibility(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetEolVisibility
func miqt_exec_callback_QsciScintilla_SetEolVisibility(self *C.QsciScintilla, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetEolVisibility, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetFolding(fold QsciScintilla__FoldStyle, margin int) {

	C.QsciScintilla_virtualbase_SetFolding(unsafe.Pointer(this.h), (C.int)(fold), (C.int)(margin))

}
func (this *QsciScintilla) OnSetFolding(slot func(super func(fold QsciScintilla__FoldStyle, margin int), fold QsciScintilla__FoldStyle, margin int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetFolding(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetFolding
func miqt_exec_callback_QsciScintilla_SetFolding(self *C.QsciScintilla, cb C.intptr_t, fold C.int, margin C.int) {
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

	C.QsciScintilla_virtualbase_SetIndentation(unsafe.Pointer(this.h), (C.int)(line), (C.int)(indentation))

}
func (this *QsciScintilla) OnSetIndentation(slot func(super func(line int, indentation int), line int, indentation int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetIndentation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetIndentation
func miqt_exec_callback_QsciScintilla_SetIndentation(self *C.QsciScintilla, cb C.intptr_t, line C.int, indentation C.int) {
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

	C.QsciScintilla_virtualbase_SetIndentationGuides(unsafe.Pointer(this.h), (C.bool)(enable))

}
func (this *QsciScintilla) OnSetIndentationGuides(slot func(super func(enable bool), enable bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetIndentationGuides(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetIndentationGuides
func miqt_exec_callback_QsciScintilla_SetIndentationGuides(self *C.QsciScintilla, cb C.intptr_t, enable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enable bool), enable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enable)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationGuides, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationGuidesBackgroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetIndentationGuidesBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetIndentationGuidesBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetIndentationGuidesBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetIndentationGuidesBackgroundColor
func miqt_exec_callback_QsciScintilla_SetIndentationGuidesBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationGuidesBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationGuidesForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetIndentationGuidesForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetIndentationGuidesForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetIndentationGuidesForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetIndentationGuidesForegroundColor
func miqt_exec_callback_QsciScintilla_SetIndentationGuidesForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationGuidesForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationsUseTabs(tabs bool) {

	C.QsciScintilla_virtualbase_SetIndentationsUseTabs(unsafe.Pointer(this.h), (C.bool)(tabs))

}
func (this *QsciScintilla) OnSetIndentationsUseTabs(slot func(super func(tabs bool), tabs bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetIndentationsUseTabs(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetIndentationsUseTabs
func miqt_exec_callback_QsciScintilla_SetIndentationsUseTabs(self *C.QsciScintilla, cb C.intptr_t, tabs C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tabs bool), tabs bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(tabs)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationsUseTabs, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetIndentationWidth(width int) {

	C.QsciScintilla_virtualbase_SetIndentationWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetIndentationWidth(slot func(super func(width int), width int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetIndentationWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetIndentationWidth
func miqt_exec_callback_QsciScintilla_SetIndentationWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int), width int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetIndentationWidth, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetLexer(lexer *QsciLexer) {

	C.QsciScintilla_virtualbase_SetLexer(unsafe.Pointer(this.h), lexer.cPointer())

}
func (this *QsciScintilla) OnSetLexer(slot func(super func(lexer *QsciLexer), lexer *QsciLexer)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetLexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetLexer
func miqt_exec_callback_QsciScintilla_SetLexer(self *C.QsciScintilla, cb C.intptr_t, lexer *C.QsciLexer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(lexer *QsciLexer), lexer *QsciLexer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciLexer(lexer, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetLexer, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginsBackgroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetMarginsBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetMarginsBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginsBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginsBackgroundColor
func miqt_exec_callback_QsciScintilla_SetMarginsBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginsBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginsFont(f *qt6.QFont) {

	C.QsciScintilla_virtualbase_SetMarginsFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()))

}
func (this *QsciScintilla) OnSetMarginsFont(slot func(super func(f *qt6.QFont), f *qt6.QFont)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginsFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginsFont
func miqt_exec_callback_QsciScintilla_SetMarginsFont(self *C.QsciScintilla, cb C.intptr_t, f *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont), f *qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginsFont, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginsForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetMarginsForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetMarginsForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginsForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginsForegroundColor
func miqt_exec_callback_QsciScintilla_SetMarginsForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetMarginsForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetMarginLineNumbers(margin int, lnrs bool) {

	C.QsciScintilla_virtualbase_SetMarginLineNumbers(unsafe.Pointer(this.h), (C.int)(margin), (C.bool)(lnrs))

}
func (this *QsciScintilla) OnSetMarginLineNumbers(slot func(super func(margin int, lnrs bool), margin int, lnrs bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginLineNumbers(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginLineNumbers
func miqt_exec_callback_QsciScintilla_SetMarginLineNumbers(self *C.QsciScintilla, cb C.intptr_t, margin C.int, lnrs C.bool) {
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

	C.QsciScintilla_virtualbase_SetMarginMarkerMask(unsafe.Pointer(this.h), (C.int)(margin), (C.int)(mask))

}
func (this *QsciScintilla) OnSetMarginMarkerMask(slot func(super func(margin int, mask int), margin int, mask int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginMarkerMask(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginMarkerMask
func miqt_exec_callback_QsciScintilla_SetMarginMarkerMask(self *C.QsciScintilla, cb C.intptr_t, margin C.int, mask C.int) {
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

	C.QsciScintilla_virtualbase_SetMarginSensitivity(unsafe.Pointer(this.h), (C.int)(margin), (C.bool)(sens))

}
func (this *QsciScintilla) OnSetMarginSensitivity(slot func(super func(margin int, sens bool), margin int, sens bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginSensitivity(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginSensitivity
func miqt_exec_callback_QsciScintilla_SetMarginSensitivity(self *C.QsciScintilla, cb C.intptr_t, margin C.int, sens C.bool) {
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

	C.QsciScintilla_virtualbase_SetMarginWidth(unsafe.Pointer(this.h), (C.int)(margin), (C.int)(width))

}
func (this *QsciScintilla) OnSetMarginWidth(slot func(super func(margin int, width int), margin int, width int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginWidth
func miqt_exec_callback_QsciScintilla_SetMarginWidth(self *C.QsciScintilla, cb C.intptr_t, margin C.int, width C.int) {
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

	C.QsciScintilla_virtualbase_SetMarginWidth2(unsafe.Pointer(this.h), (C.int)(margin), s_ms)

}
func (this *QsciScintilla) OnSetMarginWidth2(slot func(super func(margin int, s string), margin int, s string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetMarginWidth2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetMarginWidth2
func miqt_exec_callback_QsciScintilla_SetMarginWidth2(self *C.QsciScintilla, cb C.intptr_t, margin C.int, s C.struct_miqt_string) {
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

	C.QsciScintilla_virtualbase_SetModified(unsafe.Pointer(this.h), (C.bool)(m))

}
func (this *QsciScintilla) OnSetModified(slot func(super func(m bool), m bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetModified(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetModified
func miqt_exec_callback_QsciScintilla_SetModified(self *C.QsciScintilla, cb C.intptr_t, m C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(m bool), m bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(m)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetModified, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetPaper(c *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()))

}
func (this *QsciScintilla) OnSetPaper(slot func(super func(c *qt6.QColor), c *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetPaper
func miqt_exec_callback_QsciScintilla_SetPaper(self *C.QsciScintilla, cb C.intptr_t, c *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor), c *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetPaper, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetReadOnly(ro bool) {

	C.QsciScintilla_virtualbase_SetReadOnly(unsafe.Pointer(this.h), (C.bool)(ro))

}
func (this *QsciScintilla) OnSetReadOnly(slot func(super func(ro bool), ro bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetReadOnly(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetReadOnly
func miqt_exec_callback_QsciScintilla_SetReadOnly(self *C.QsciScintilla, cb C.intptr_t, ro C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ro bool), ro bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ro)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetReadOnly, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetSelection(lineFrom int, indexFrom int, lineTo int, indexTo int) {

	C.QsciScintilla_virtualbase_SetSelection(unsafe.Pointer(this.h), (C.int)(lineFrom), (C.int)(indexFrom), (C.int)(lineTo), (C.int)(indexTo))

}
func (this *QsciScintilla) OnSetSelection(slot func(super func(lineFrom int, indexFrom int, lineTo int, indexTo int), lineFrom int, indexFrom int, lineTo int, indexTo int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetSelection
func miqt_exec_callback_QsciScintilla_SetSelection(self *C.QsciScintilla, cb C.intptr_t, lineFrom C.int, indexFrom C.int, lineTo C.int, indexTo C.int) {
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

	C.QsciScintilla_virtualbase_SetSelectionBackgroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetSelectionBackgroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetSelectionBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetSelectionBackgroundColor
func miqt_exec_callback_QsciScintilla_SetSelectionBackgroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetSelectionBackgroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetSelectionForegroundColor(col *qt6.QColor) {

	C.QsciScintilla_virtualbase_SetSelectionForegroundColor(unsafe.Pointer(this.h), (*C.QColor)(col.UnsafePointer()))

}
func (this *QsciScintilla) OnSetSelectionForegroundColor(slot func(super func(col *qt6.QColor), col *qt6.QColor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetSelectionForegroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetSelectionForegroundColor
func miqt_exec_callback_QsciScintilla_SetSelectionForegroundColor(self *C.QsciScintilla, cb C.intptr_t, col *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(col *qt6.QColor), col *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(col))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetSelectionForegroundColor, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetTabIndents(indent bool) {

	C.QsciScintilla_virtualbase_SetTabIndents(unsafe.Pointer(this.h), (C.bool)(indent))

}
func (this *QsciScintilla) OnSetTabIndents(slot func(super func(indent bool), indent bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetTabIndents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetTabIndents
func miqt_exec_callback_QsciScintilla_SetTabIndents(self *C.QsciScintilla, cb C.intptr_t, indent C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indent bool), indent bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(indent)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetTabIndents, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetTabWidth(width int) {

	C.QsciScintilla_virtualbase_SetTabWidth(unsafe.Pointer(this.h), (C.int)(width))

}
func (this *QsciScintilla) OnSetTabWidth(slot func(super func(width int), width int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetTabWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetTabWidth
func miqt_exec_callback_QsciScintilla_SetTabWidth(self *C.QsciScintilla, cb C.intptr_t, width C.int) {
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

	C.QsciScintilla_virtualbase_SetText(unsafe.Pointer(this.h), text_ms)

}
func (this *QsciScintilla) OnSetText(slot func(super func(text string), text string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetText
func miqt_exec_callback_QsciScintilla_SetText(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string) {
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

	C.QsciScintilla_virtualbase_SetUtf8(unsafe.Pointer(this.h), (C.bool)(cp))

}
func (this *QsciScintilla) OnSetUtf8(slot func(super func(cp bool), cp bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetUtf8(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetUtf8
func miqt_exec_callback_QsciScintilla_SetUtf8(self *C.QsciScintilla, cb C.intptr_t, cp C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cp bool), cp bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(cp)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetUtf8, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetWhitespaceVisibility(mode QsciScintilla__WhitespaceVisibility) {

	C.QsciScintilla_virtualbase_SetWhitespaceVisibility(unsafe.Pointer(this.h), (C.int)(mode))

}
func (this *QsciScintilla) OnSetWhitespaceVisibility(slot func(super func(mode QsciScintilla__WhitespaceVisibility), mode QsciScintilla__WhitespaceVisibility)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetWhitespaceVisibility(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetWhitespaceVisibility
func miqt_exec_callback_QsciScintilla_SetWhitespaceVisibility(self *C.QsciScintilla, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QsciScintilla__WhitespaceVisibility), mode QsciScintilla__WhitespaceVisibility))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__WhitespaceVisibility)(mode)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetWhitespaceVisibility, slotval1)

}

func (this *QsciScintilla) callVirtualBase_SetWrapMode(mode QsciScintilla__WrapMode) {

	C.QsciScintilla_virtualbase_SetWrapMode(unsafe.Pointer(this.h), (C.int)(mode))

}
func (this *QsciScintilla) OnSetWrapMode(slot func(super func(mode QsciScintilla__WrapMode), mode QsciScintilla__WrapMode)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_SetWrapMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_SetWrapMode
func miqt_exec_callback_QsciScintilla_SetWrapMode(self *C.QsciScintilla, cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mode QsciScintilla__WrapMode), mode QsciScintilla__WrapMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__WrapMode)(mode)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_SetWrapMode, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Undo() {

	C.QsciScintilla_virtualbase_Undo(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnUndo(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Undo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Undo
func miqt_exec_callback_QsciScintilla_Undo(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Undo)

}

func (this *QsciScintilla) callVirtualBase_Unindent(line int) {

	C.QsciScintilla_virtualbase_Unindent(unsafe.Pointer(this.h), (C.int)(line))

}
func (this *QsciScintilla) OnUnindent(slot func(super func(line int), line int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Unindent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Unindent
func miqt_exec_callback_QsciScintilla_Unindent(self *C.QsciScintilla, cb C.intptr_t, line C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(line int), line int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(line)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_Unindent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ZoomIn(rangeVal int) {

	C.QsciScintilla_virtualbase_ZoomIn(unsafe.Pointer(this.h), (C.int)(rangeVal))

}
func (this *QsciScintilla) OnZoomIn(slot func(super func(rangeVal int), rangeVal int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ZoomIn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ZoomIn
func miqt_exec_callback_QsciScintilla_ZoomIn(self *C.QsciScintilla, cb C.intptr_t, rangeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rangeVal int), rangeVal int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(rangeVal)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomIn, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ZoomIn2() {

	C.QsciScintilla_virtualbase_ZoomIn2(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnZoomIn2(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ZoomIn2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ZoomIn2
func miqt_exec_callback_QsciScintilla_ZoomIn2(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomIn2)

}

func (this *QsciScintilla) callVirtualBase_ZoomOut(rangeVal int) {

	C.QsciScintilla_virtualbase_ZoomOut(unsafe.Pointer(this.h), (C.int)(rangeVal))

}
func (this *QsciScintilla) OnZoomOut(slot func(super func(rangeVal int), rangeVal int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ZoomOut(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ZoomOut
func miqt_exec_callback_QsciScintilla_ZoomOut(self *C.QsciScintilla, cb C.intptr_t, rangeVal C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rangeVal int), rangeVal int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(rangeVal)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomOut, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ZoomOut2() {

	C.QsciScintilla_virtualbase_ZoomOut2(unsafe.Pointer(this.h))

}
func (this *QsciScintilla) OnZoomOut2(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ZoomOut2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ZoomOut2
func miqt_exec_callback_QsciScintilla_ZoomOut2(self *C.QsciScintilla, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomOut2)

}

func (this *QsciScintilla) callVirtualBase_ZoomTo(size int) {

	C.QsciScintilla_virtualbase_ZoomTo(unsafe.Pointer(this.h), (C.int)(size))

}
func (this *QsciScintilla) OnZoomTo(slot func(super func(size int), size int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ZoomTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ZoomTo
func miqt_exec_callback_QsciScintilla_ZoomTo(self *C.QsciScintilla, cb C.intptr_t, size C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(size int), size int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(size)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ZoomTo, slotval1)

}

func (this *QsciScintilla) callVirtualBase_Event(e *qt6.QEvent) bool {

	return (bool)(C.QsciScintilla_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QsciScintilla) OnEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_Event
func miqt_exec_callback_QsciScintilla_Event(self *C.QsciScintilla, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QsciScintilla_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnChangeEvent(slot func(super func(e *qt6.QEvent), e *qt6.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ChangeEvent
func miqt_exec_callback_QsciScintilla_ChangeEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent), e *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ContextMenuEvent(e *qt6.QContextMenuEvent) {

	C.QsciScintilla_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnContextMenuEvent(slot func(super func(e *qt6.QContextMenuEvent), e *qt6.QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ContextMenuEvent
func miqt_exec_callback_QsciScintilla_ContextMenuEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QContextMenuEvent), e *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_WheelEvent(e *qt6.QWheelEvent) {

	C.QsciScintilla_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnWheelEvent(slot func(super func(e *qt6.QWheelEvent), e *qt6.QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_WheelEvent
func miqt_exec_callback_QsciScintilla_WheelEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QWheelEvent), e *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_CanInsertFromMimeData(source *qt6.QMimeData) bool {

	return (bool)(C.QsciScintilla_virtualbase_CanInsertFromMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(source.UnsafePointer())))

}
func (this *QsciScintilla) OnCanInsertFromMimeData(slot func(super func(source *qt6.QMimeData) bool, source *qt6.QMimeData) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_CanInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_CanInsertFromMimeData
func miqt_exec_callback_QsciScintilla_CanInsertFromMimeData(self *C.QsciScintilla, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *qt6.QMimeData) bool, source *qt6.QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(source), nil)

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintilla) callVirtualBase_FromMimeData(source *qt6.QMimeData, rectangular *bool) []byte {

	var _bytearray C.struct_miqt_string = C.QsciScintilla_virtualbase_FromMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(source.UnsafePointer()), (*C.bool)(unsafe.Pointer(rectangular)))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}
func (this *QsciScintilla) OnFromMimeData(slot func(super func(source *qt6.QMimeData, rectangular *bool) []byte, source *qt6.QMimeData, rectangular *bool) []byte) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FromMimeData
func miqt_exec_callback_QsciScintilla_FromMimeData(self *C.QsciScintilla, cb C.intptr_t, source *C.QMimeData, rectangular *C.bool) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *qt6.QMimeData, rectangular *bool) []byte, source *qt6.QMimeData, rectangular *bool) []byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMimeData(unsafe.Pointer(source), nil)

	slotval2 := (*bool)(unsafe.Pointer(rectangular))

	virtualReturn := gofunc((&QsciScintilla{h: self}).callVirtualBase_FromMimeData, slotval1, slotval2)
	virtualReturn_alias := C.struct_miqt_string{}
	virtualReturn_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[0]))
	virtualReturn_alias.len = C.size_t(len(virtualReturn))

	return virtualReturn_alias

}

func (this *QsciScintilla) callVirtualBase_ToMimeData(text []byte, rectangular bool) *qt6.QMimeData {
	text_alias := C.struct_miqt_string{}
	text_alias.data = (*C.char)(unsafe.Pointer(&text[0]))
	text_alias.len = C.size_t(len(text))

	return qt6.UnsafeNewQMimeData(unsafe.Pointer(C.QsciScintilla_virtualbase_ToMimeData(unsafe.Pointer(this.h), text_alias, (C.bool)(rectangular))), nil)

}
func (this *QsciScintilla) OnToMimeData(slot func(super func(text []byte, rectangular bool) *qt6.QMimeData, text []byte, rectangular bool) *qt6.QMimeData) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ToMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ToMimeData
func miqt_exec_callback_QsciScintilla_ToMimeData(self *C.QsciScintilla, cb C.intptr_t, text C.struct_miqt_string, rectangular C.bool) *C.QMimeData {
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

	C.QsciScintilla_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDragEnterEvent(slot func(super func(e *qt6.QDragEnterEvent), e *qt6.QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_DragEnterEvent
func miqt_exec_callback_QsciScintilla_DragEnterEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragEnterEvent), e *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(e), nil, nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DragLeaveEvent(e *qt6.QDragLeaveEvent) {

	C.QsciScintilla_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDragLeaveEvent(slot func(super func(e *qt6.QDragLeaveEvent), e *qt6.QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_DragLeaveEvent
func miqt_exec_callback_QsciScintilla_DragLeaveEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragLeaveEvent), e *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(e), nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DragMoveEvent(e *qt6.QDragMoveEvent) {

	C.QsciScintilla_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDragMoveEvent(slot func(super func(e *qt6.QDragMoveEvent), e *qt6.QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_DragMoveEvent
func miqt_exec_callback_QsciScintilla_DragMoveEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDragMoveEvent), e *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_DropEvent(e *qt6.QDropEvent) {

	C.QsciScintilla_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnDropEvent(slot func(super func(e *qt6.QDropEvent), e *qt6.QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_DropEvent
func miqt_exec_callback_QsciScintilla_DropEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QDropEvent), e *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(e), nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FocusInEvent(e *qt6.QFocusEvent) {

	C.QsciScintilla_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnFocusInEvent(slot func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FocusInEvent
func miqt_exec_callback_QsciScintilla_FocusInEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(e), nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FocusOutEvent(e *qt6.QFocusEvent) {

	C.QsciScintilla_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnFocusOutEvent(slot func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FocusOutEvent
func miqt_exec_callback_QsciScintilla_FocusOutEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QFocusEvent), e *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(e), nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QsciScintilla_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QsciScintilla) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_FocusNextPrevChild
func miqt_exec_callback_QsciScintilla_FocusNextPrevChild(self *C.QsciScintilla, cb C.intptr_t, next C.bool) C.bool {
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

	C.QsciScintilla_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnKeyPressEvent(slot func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_KeyPressEvent
func miqt_exec_callback_QsciScintilla_KeyPressEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QKeyEvent), e *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_InputMethodEvent(event *qt6.QInputMethodEvent) {

	C.QsciScintilla_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QsciScintilla) OnInputMethodEvent(slot func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_InputMethodEvent
func miqt_exec_callback_QsciScintilla_InputMethodEvent(self *C.QsciScintilla, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_InputMethodQuery(query qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QsciScintilla_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintilla) OnInputMethodQuery(slot func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_InputMethodQuery
func miqt_exec_callback_QsciScintilla_InputMethodQuery(self *C.QsciScintilla, cb C.intptr_t, query C.int) *C.QVariant {
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

	C.QsciScintilla_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMouseDoubleClickEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MouseDoubleClickEvent
func miqt_exec_callback_QsciScintilla_MouseDoubleClickEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_MouseMoveEvent(e *qt6.QMouseEvent) {

	C.QsciScintilla_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMouseMoveEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MouseMoveEvent
func miqt_exec_callback_QsciScintilla_MouseMoveEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_MousePressEvent(e *qt6.QMouseEvent) {

	C.QsciScintilla_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMousePressEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MousePressEvent
func miqt_exec_callback_QsciScintilla_MousePressEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_MouseReleaseEvent(e *qt6.QMouseEvent) {

	C.QsciScintilla_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnMouseReleaseEvent(slot func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_MouseReleaseEvent
func miqt_exec_callback_QsciScintilla_MouseReleaseEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QMouseEvent), e *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil, nil, nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_PaintEvent(e *qt6.QPaintEvent) {

	C.QsciScintilla_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnPaintEvent(slot func(super func(e *qt6.QPaintEvent), e *qt6.QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_PaintEvent
func miqt_exec_callback_QsciScintilla_PaintEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QPaintEvent), e *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(e), nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ResizeEvent(e *qt6.QResizeEvent) {

	C.QsciScintilla_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(e.UnsafePointer()))

}
func (this *QsciScintilla) OnResizeEvent(slot func(super func(e *qt6.QResizeEvent), e *qt6.QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ResizeEvent
func miqt_exec_callback_QsciScintilla_ResizeEvent(self *C.QsciScintilla, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QResizeEvent), e *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(e), nil)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QsciScintilla) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QsciScintilla_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QsciScintilla) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintilla_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintilla_ScrollContentsBy
func miqt_exec_callback_QsciScintilla_ScrollContentsBy(self *C.QsciScintilla, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QsciScintilla{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *QsciScintilla) Delete() {
	C.QsciScintilla_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciScintilla) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciScintilla) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

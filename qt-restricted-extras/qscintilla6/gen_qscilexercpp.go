package qscintilla6

/*

#include "gen_qscilexercpp.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerCPP__ int

const (
	QsciLexerCPP__Default                            QsciLexerCPP__ = 0
	QsciLexerCPP__InactiveDefault                    QsciLexerCPP__ = 64
	QsciLexerCPP__Comment                            QsciLexerCPP__ = 1
	QsciLexerCPP__InactiveComment                    QsciLexerCPP__ = 65
	QsciLexerCPP__CommentLine                        QsciLexerCPP__ = 2
	QsciLexerCPP__InactiveCommentLine                QsciLexerCPP__ = 66
	QsciLexerCPP__CommentDoc                         QsciLexerCPP__ = 3
	QsciLexerCPP__InactiveCommentDoc                 QsciLexerCPP__ = 67
	QsciLexerCPP__Number                             QsciLexerCPP__ = 4
	QsciLexerCPP__InactiveNumber                     QsciLexerCPP__ = 68
	QsciLexerCPP__Keyword                            QsciLexerCPP__ = 5
	QsciLexerCPP__InactiveKeyword                    QsciLexerCPP__ = 69
	QsciLexerCPP__DoubleQuotedString                 QsciLexerCPP__ = 6
	QsciLexerCPP__InactiveDoubleQuotedString         QsciLexerCPP__ = 70
	QsciLexerCPP__SingleQuotedString                 QsciLexerCPP__ = 7
	QsciLexerCPP__InactiveSingleQuotedString         QsciLexerCPP__ = 71
	QsciLexerCPP__UUID                               QsciLexerCPP__ = 8
	QsciLexerCPP__InactiveUUID                       QsciLexerCPP__ = 72
	QsciLexerCPP__PreProcessor                       QsciLexerCPP__ = 9
	QsciLexerCPP__InactivePreProcessor               QsciLexerCPP__ = 73
	QsciLexerCPP__Operator                           QsciLexerCPP__ = 10
	QsciLexerCPP__InactiveOperator                   QsciLexerCPP__ = 74
	QsciLexerCPP__Identifier                         QsciLexerCPP__ = 11
	QsciLexerCPP__InactiveIdentifier                 QsciLexerCPP__ = 75
	QsciLexerCPP__UnclosedString                     QsciLexerCPP__ = 12
	QsciLexerCPP__InactiveUnclosedString             QsciLexerCPP__ = 76
	QsciLexerCPP__VerbatimString                     QsciLexerCPP__ = 13
	QsciLexerCPP__InactiveVerbatimString             QsciLexerCPP__ = 77
	QsciLexerCPP__Regex                              QsciLexerCPP__ = 14
	QsciLexerCPP__InactiveRegex                      QsciLexerCPP__ = 78
	QsciLexerCPP__CommentLineDoc                     QsciLexerCPP__ = 15
	QsciLexerCPP__InactiveCommentLineDoc             QsciLexerCPP__ = 79
	QsciLexerCPP__KeywordSet2                        QsciLexerCPP__ = 16
	QsciLexerCPP__InactiveKeywordSet2                QsciLexerCPP__ = 80
	QsciLexerCPP__CommentDocKeyword                  QsciLexerCPP__ = 17
	QsciLexerCPP__InactiveCommentDocKeyword          QsciLexerCPP__ = 81
	QsciLexerCPP__CommentDocKeywordError             QsciLexerCPP__ = 18
	QsciLexerCPP__InactiveCommentDocKeywordError     QsciLexerCPP__ = 82
	QsciLexerCPP__GlobalClass                        QsciLexerCPP__ = 19
	QsciLexerCPP__InactiveGlobalClass                QsciLexerCPP__ = 83
	QsciLexerCPP__RawString                          QsciLexerCPP__ = 20
	QsciLexerCPP__InactiveRawString                  QsciLexerCPP__ = 84
	QsciLexerCPP__TripleQuotedVerbatimString         QsciLexerCPP__ = 21
	QsciLexerCPP__InactiveTripleQuotedVerbatimString QsciLexerCPP__ = 85
	QsciLexerCPP__HashQuotedString                   QsciLexerCPP__ = 22
	QsciLexerCPP__InactiveHashQuotedString           QsciLexerCPP__ = 86
	QsciLexerCPP__PreProcessorComment                QsciLexerCPP__ = 23
	QsciLexerCPP__InactivePreProcessorComment        QsciLexerCPP__ = 87
	QsciLexerCPP__PreProcessorCommentLineDoc         QsciLexerCPP__ = 24
	QsciLexerCPP__InactivePreProcessorCommentLineDoc QsciLexerCPP__ = 88
	QsciLexerCPP__UserLiteral                        QsciLexerCPP__ = 25
	QsciLexerCPP__InactiveUserLiteral                QsciLexerCPP__ = 89
	QsciLexerCPP__TaskMarker                         QsciLexerCPP__ = 26
	QsciLexerCPP__InactiveTaskMarker                 QsciLexerCPP__ = 90
	QsciLexerCPP__EscapeSequence                     QsciLexerCPP__ = 27
	QsciLexerCPP__InactiveEscapeSequence             QsciLexerCPP__ = 91
)

type QsciLexerCPP struct {
	h          *C.QsciLexerCPP
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerCPP) cPointer() *C.QsciLexerCPP {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCPP) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerCPP constructs the type using only CGO pointers.
func newQsciLexerCPP(h *C.QsciLexerCPP, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerCPP {
	if h == nil {
		return nil
	}
	return &QsciLexerCPP{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerCPP constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerCPP(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerCPP {
	if h == nil {
		return nil
	}

	return &QsciLexerCPP{h: (*C.QsciLexerCPP)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerCPP constructs a new QsciLexerCPP object.
func NewQsciLexerCPP() *QsciLexerCPP {
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerCPP_new(&outptr_QsciLexerCPP, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerCPP(outptr_QsciLexerCPP, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerCPP2 constructs a new QsciLexerCPP object.
func NewQsciLexerCPP2(parent *qt6.QObject) *QsciLexerCPP {
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerCPP_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerCPP, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerCPP(outptr_QsciLexerCPP, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerCPP3 constructs a new QsciLexerCPP object.
func NewQsciLexerCPP3(parent *qt6.QObject, caseInsensitiveKeywords bool) *QsciLexerCPP {
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerCPP_new3((*C.QObject)(parent.UnsafePointer()), (C.bool)(caseInsensitiveKeywords), &outptr_QsciLexerCPP, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerCPP(outptr_QsciLexerCPP, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerCPP) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCPP_MetaObject(this.h)))
}

func (this *QsciLexerCPP) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCPP_Metacast(this.h, param1_Cstring))
}

func QsciLexerCPP_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCPP) Language() string {
	_ret := C.QsciLexerCPP_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) Lexer() string {
	_ret := C.QsciLexerCPP_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerCPP_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerCPP) BlockEnd() string {
	_ret := C.QsciLexerCPP_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStart() string {
	_ret := C.QsciLexerCPP_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStartKeyword() string {
	_ret := C.QsciLexerCPP_BlockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BraceStyle() int {
	return (int)(C.QsciLexerCPP_BraceStyle(this.h))
}

func (this *QsciLexerCPP) WordCharacters() string {
	_ret := C.QsciLexerCPP_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerCPP_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerCPP_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerCPP) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerCPP_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerCPP_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) Keywords(set int) string {
	_ret := C.QsciLexerCPP_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCPP_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCPP) RefreshProperties() {
	C.QsciLexerCPP_RefreshProperties(this.h)
}

func (this *QsciLexerCPP) FoldAtElse() bool {
	return (bool)(C.QsciLexerCPP_FoldAtElse(this.h))
}

func (this *QsciLexerCPP) FoldComments() bool {
	return (bool)(C.QsciLexerCPP_FoldComments(this.h))
}

func (this *QsciLexerCPP) FoldCompact() bool {
	return (bool)(C.QsciLexerCPP_FoldCompact(this.h))
}

func (this *QsciLexerCPP) FoldPreprocessor() bool {
	return (bool)(C.QsciLexerCPP_FoldPreprocessor(this.h))
}

func (this *QsciLexerCPP) StylePreprocessor() bool {
	return (bool)(C.QsciLexerCPP_StylePreprocessor(this.h))
}

func (this *QsciLexerCPP) SetDollarsAllowed(allowed bool) {
	C.QsciLexerCPP_SetDollarsAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerCPP) DollarsAllowed() bool {
	return (bool)(C.QsciLexerCPP_DollarsAllowed(this.h))
}

func (this *QsciLexerCPP) SetHighlightTripleQuotedStrings(enabled bool) {
	C.QsciLexerCPP_SetHighlightTripleQuotedStrings(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightTripleQuotedStrings() bool {
	return (bool)(C.QsciLexerCPP_HighlightTripleQuotedStrings(this.h))
}

func (this *QsciLexerCPP) SetHighlightHashQuotedStrings(enabled bool) {
	C.QsciLexerCPP_SetHighlightHashQuotedStrings(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightHashQuotedStrings() bool {
	return (bool)(C.QsciLexerCPP_HighlightHashQuotedStrings(this.h))
}

func (this *QsciLexerCPP) SetHighlightBackQuotedStrings(enabled bool) {
	C.QsciLexerCPP_SetHighlightBackQuotedStrings(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightBackQuotedStrings() bool {
	return (bool)(C.QsciLexerCPP_HighlightBackQuotedStrings(this.h))
}

func (this *QsciLexerCPP) SetHighlightEscapeSequences(enabled bool) {
	C.QsciLexerCPP_SetHighlightEscapeSequences(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightEscapeSequences() bool {
	return (bool)(C.QsciLexerCPP_HighlightEscapeSequences(this.h))
}

func (this *QsciLexerCPP) SetVerbatimStringEscapeSequencesAllowed(allowed bool) {
	C.QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerCPP) VerbatimStringEscapeSequencesAllowed() bool {
	return (bool)(C.QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(this.h))
}

func (this *QsciLexerCPP) SetFoldAtElse(fold bool) {
	C.QsciLexerCPP_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetFoldComments(fold bool) {
	C.QsciLexerCPP_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetFoldCompact(fold bool) {
	C.QsciLexerCPP_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetFoldPreprocessor(fold bool) {
	C.QsciLexerCPP_SetFoldPreprocessor(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetStylePreprocessor(style bool) {
	C.QsciLexerCPP_SetStylePreprocessor(this.h, (C.bool)(style))
}

func QsciLexerCPP_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCPP_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCPP) BlockEnd1(style *int) string {
	_ret := C.QsciLexerCPP_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStart1(style *int) string {
	_ret := C.QsciLexerCPP_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerCPP_BlockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerCPP_virtualbase_SetFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnSetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerCPP_override_virtual_SetFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetFoldAtElse
func miqt_exec_callback_QsciLexerCPP_SetFoldAtElse(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerCPP_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerCPP_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetFoldComments
func miqt_exec_callback_QsciLexerCPP_SetFoldComments(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerCPP_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerCPP_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetFoldCompact
func miqt_exec_callback_QsciLexerCPP_SetFoldCompact(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerCPP_virtualbase_SetFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnSetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerCPP_override_virtual_SetFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetFoldPreprocessor
func miqt_exec_callback_QsciLexerCPP_SetFoldPreprocessor(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetStylePreprocessor(style bool) {

	C.QsciLexerCPP_virtualbase_SetStylePreprocessor(unsafe.Pointer(this.h), (C.bool)(style))

}
func (this *QsciLexerCPP) OnSetStylePreprocessor(slot func(super func(style bool), style bool)) {
	C.QsciLexerCPP_override_virtual_SetStylePreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetStylePreprocessor
func miqt_exec_callback_QsciLexerCPP_SetStylePreprocessor(self *C.QsciLexerCPP, cb C.intptr_t, style C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style bool), style bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetStylePreprocessor, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_Language() string {

	_ret := C.QsciLexerCPP_virtualbase_Language(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnLanguage(slot func(super func() string) string) {
	C.QsciLexerCPP_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_Language
func miqt_exec_callback_QsciLexerCPP_Language(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Language)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerCPP_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnLexer(slot func(super func() string) string) {
	C.QsciLexerCPP_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_Lexer
func miqt_exec_callback_QsciLexerCPP_Lexer(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerCPP_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerCPP_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_LexerId
func miqt_exec_callback_QsciLexerCPP_LexerId(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerCPP_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerCPP_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_AutoCompletionFillups
func miqt_exec_callback_QsciLexerCPP_AutoCompletionFillups(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerCPP_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerCPP) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerCPP_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerCPP_AutoCompletionWordSeparators(self *C.QsciLexerCPP, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerCPP) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerCPP_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerCPP_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_BlockEnd
func miqt_exec_callback_QsciLexerCPP_BlockEnd(self *C.QsciLexerCPP, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerCPP_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerCPP_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_BlockLookback
func miqt_exec_callback_QsciLexerCPP_BlockLookback(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerCPP_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerCPP_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_BlockStart
func miqt_exec_callback_QsciLexerCPP_BlockStart(self *C.QsciLexerCPP, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerCPP_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerCPP_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_BlockStartKeyword
func miqt_exec_callback_QsciLexerCPP_BlockStartKeyword(self *C.QsciLexerCPP, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerCPP_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerCPP_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_BraceStyle
func miqt_exec_callback_QsciLexerCPP_BraceStyle(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerCPP_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerCPP_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_CaseSensitive
func miqt_exec_callback_QsciLexerCPP_CaseSensitive(self *C.QsciLexerCPP, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Color(style int) *qt6.QColor {

	_ret := C.QsciLexerCPP_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerCPP_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_Color
func miqt_exec_callback_QsciLexerCPP_Color(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerCPP_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCPP) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerCPP_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_EolFill
func miqt_exec_callback_QsciLexerCPP_EolFill(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Font(style int) *qt6.QFont {

	_ret := C.QsciLexerCPP_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	C.QsciLexerCPP_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_Font
func miqt_exec_callback_QsciLexerCPP_Font(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerCPP_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerCPP_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_IndentationGuideView
func miqt_exec_callback_QsciLexerCPP_IndentationGuideView(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerCPP_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerCPP_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_Keywords
func miqt_exec_callback_QsciLexerCPP_Keywords(self *C.QsciLexerCPP, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerCPP_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerCPP_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_DefaultStyle
func miqt_exec_callback_QsciLexerCPP_DefaultStyle(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Description(style int) string {

	var _ms C.struct_miqt_string = C.QsciLexerCPP_virtualbase_Description(unsafe.Pointer(this.h), (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciLexerCPP) OnDescription(slot func(super func(style int) string, style int) string) {
	C.QsciLexerCPP_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_Description
func miqt_exec_callback_QsciLexerCPP_Description(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) string, style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Description, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexerCPP) callVirtualBase_Paper(style int) *qt6.QColor {

	_ret := C.QsciLexerCPP_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerCPP_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_Paper
func miqt_exec_callback_QsciLexerCPP_Paper(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_DefaultColorWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerCPP_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerCPP_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerCPP_DefaultColorWithStyle(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerCPP_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCPP) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerCPP_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_DefaultEolFill
func miqt_exec_callback_QsciLexerCPP_DefaultEolFill(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_DefaultFontWithStyle(style int) *qt6.QFont {

	_ret := C.QsciLexerCPP_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	C.QsciLexerCPP_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerCPP_DefaultFontWithStyle(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_DefaultPaperWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerCPP_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerCPP_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerCPP_DefaultPaperWithStyle(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerCPP_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerCPP) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerCPP_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetEditor
func miqt_exec_callback_QsciLexerCPP_SetEditor(self *C.QsciLexerCPP, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_RefreshProperties() {

	C.QsciLexerCPP_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerCPP) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerCPP_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_RefreshProperties
func miqt_exec_callback_QsciLexerCPP_RefreshProperties(self *C.QsciLexerCPP, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerCPP) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerCPP_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerCPP_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_StyleBitsNeeded
func miqt_exec_callback_QsciLexerCPP_StyleBitsNeeded(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerCPP_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerCPP_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_WordCharacters
func miqt_exec_callback_QsciLexerCPP_WordCharacters(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerCPP_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerCPP) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerCPP_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerCPP_SetAutoIndentStyle(self *C.QsciLexerCPP, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerCPP_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCPP) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	C.QsciLexerCPP_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetColor
func miqt_exec_callback_QsciLexerCPP_SetColor(self *C.QsciLexerCPP, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerCPP_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerCPP) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerCPP_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetEolFill
func miqt_exec_callback_QsciLexerCPP_SetEolFill(self *C.QsciLexerCPP, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_SetFont(f *qt6.QFont, style int) {

	C.QsciLexerCPP_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCPP) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	C.QsciLexerCPP_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetFont
func miqt_exec_callback_QsciLexerCPP_SetFont(self *C.QsciLexerCPP, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_SetPaper(c *qt6.QColor, style int) {

	C.QsciLexerCPP_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCPP) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	C.QsciLexerCPP_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_SetPaper
func miqt_exec_callback_QsciLexerCPP_SetPaper(self *C.QsciLexerCPP, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCPP_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCPP) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	C.QsciLexerCPP_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_ReadProperties
func miqt_exec_callback_QsciLexerCPP_ReadProperties(self *C.QsciLexerCPP, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCPP_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCPP) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	C.QsciLexerCPP_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCPP_WriteProperties
func miqt_exec_callback_QsciLexerCPP_WriteProperties(self *C.QsciLexerCPP, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerCPP) Delete() {
	C.QsciLexerCPP_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCPP) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCPP) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

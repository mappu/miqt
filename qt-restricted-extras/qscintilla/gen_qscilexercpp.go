package qscintilla

/*

#include "gen_qscilexercpp.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
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
	h *C.QsciLexerCPP
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
func newQsciLexerCPP(h *C.QsciLexerCPP) *QsciLexerCPP {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerCPP_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerCPP{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerCPP constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerCPP(h unsafe.Pointer) *QsciLexerCPP {
	return newQsciLexerCPP((*C.QsciLexerCPP)(h))
}

// NewQsciLexerCPP constructs a new QsciLexerCPP object.
func NewQsciLexerCPP() *QsciLexerCPP {

	return newQsciLexerCPP(C.QsciLexerCPP_new())
}

// NewQsciLexerCPP2 constructs a new QsciLexerCPP object.
func NewQsciLexerCPP2(parent *qt.QObject) *QsciLexerCPP {

	return newQsciLexerCPP(C.QsciLexerCPP_new2((*C.QObject)(parent.UnsafePointer())))
}

// NewQsciLexerCPP3 constructs a new QsciLexerCPP object.
func NewQsciLexerCPP3(parent *qt.QObject, caseInsensitiveKeywords bool) *QsciLexerCPP {

	return newQsciLexerCPP(C.QsciLexerCPP_new3((*C.QObject)(parent.UnsafePointer()), (C.bool)(caseInsensitiveKeywords)))
}

func (this *QsciLexerCPP) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCPP_metaObject(this.h)))
}

func (this *QsciLexerCPP) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCPP_metacast(this.h, param1_Cstring))
}

func QsciLexerCPP_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCPP_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCPP) Language() string {
	_ret := C.QsciLexerCPP_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) Lexer() string {
	_ret := C.QsciLexerCPP_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerCPP_autoCompletionWordSeparators(this.h)
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
	_ret := C.QsciLexerCPP_blockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStart() string {
	_ret := C.QsciLexerCPP_blockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStartKeyword() string {
	_ret := C.QsciLexerCPP_blockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BraceStyle() int {
	return (int)(C.QsciLexerCPP_braceStyle(this.h))
}

func (this *QsciLexerCPP) WordCharacters() string {
	_ret := C.QsciLexerCPP_wordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCPP_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerCPP_defaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerCPP) DefaultFont(style int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerCPP_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) DefaultPaper(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCPP_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) Keywords(set int) string {
	_ret := C.QsciLexerCPP_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCPP_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCPP) RefreshProperties() {
	C.QsciLexerCPP_refreshProperties(this.h)
}

func (this *QsciLexerCPP) FoldAtElse() bool {
	return (bool)(C.QsciLexerCPP_foldAtElse(this.h))
}

func (this *QsciLexerCPP) FoldComments() bool {
	return (bool)(C.QsciLexerCPP_foldComments(this.h))
}

func (this *QsciLexerCPP) FoldCompact() bool {
	return (bool)(C.QsciLexerCPP_foldCompact(this.h))
}

func (this *QsciLexerCPP) FoldPreprocessor() bool {
	return (bool)(C.QsciLexerCPP_foldPreprocessor(this.h))
}

func (this *QsciLexerCPP) StylePreprocessor() bool {
	return (bool)(C.QsciLexerCPP_stylePreprocessor(this.h))
}

func (this *QsciLexerCPP) SetDollarsAllowed(allowed bool) {
	C.QsciLexerCPP_setDollarsAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerCPP) DollarsAllowed() bool {
	return (bool)(C.QsciLexerCPP_dollarsAllowed(this.h))
}

func (this *QsciLexerCPP) SetHighlightTripleQuotedStrings(enabled bool) {
	C.QsciLexerCPP_setHighlightTripleQuotedStrings(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightTripleQuotedStrings() bool {
	return (bool)(C.QsciLexerCPP_highlightTripleQuotedStrings(this.h))
}

func (this *QsciLexerCPP) SetHighlightHashQuotedStrings(enabled bool) {
	C.QsciLexerCPP_setHighlightHashQuotedStrings(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightHashQuotedStrings() bool {
	return (bool)(C.QsciLexerCPP_highlightHashQuotedStrings(this.h))
}

func (this *QsciLexerCPP) SetHighlightBackQuotedStrings(enabled bool) {
	C.QsciLexerCPP_setHighlightBackQuotedStrings(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightBackQuotedStrings() bool {
	return (bool)(C.QsciLexerCPP_highlightBackQuotedStrings(this.h))
}

func (this *QsciLexerCPP) SetHighlightEscapeSequences(enabled bool) {
	C.QsciLexerCPP_setHighlightEscapeSequences(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCPP) HighlightEscapeSequences() bool {
	return (bool)(C.QsciLexerCPP_highlightEscapeSequences(this.h))
}

func (this *QsciLexerCPP) SetVerbatimStringEscapeSequencesAllowed(allowed bool) {
	C.QsciLexerCPP_setVerbatimStringEscapeSequencesAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerCPP) VerbatimStringEscapeSequencesAllowed() bool {
	return (bool)(C.QsciLexerCPP_verbatimStringEscapeSequencesAllowed(this.h))
}

func (this *QsciLexerCPP) SetFoldAtElse(fold bool) {
	C.QsciLexerCPP_setFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetFoldComments(fold bool) {
	C.QsciLexerCPP_setFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetFoldCompact(fold bool) {
	C.QsciLexerCPP_setFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetFoldPreprocessor(fold bool) {
	C.QsciLexerCPP_setFoldPreprocessor(this.h, (C.bool)(fold))
}

func (this *QsciLexerCPP) SetStylePreprocessor(style bool) {
	C.QsciLexerCPP_setStylePreprocessor(this.h, (C.bool)(style))
}

func QsciLexerCPP_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCPP_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCPP_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCPP_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCPP) BlockEnd1(style *int) string {
	_ret := C.QsciLexerCPP_blockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStart1(style *int) string {
	_ret := C.QsciLexerCPP_blockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerCPP_blockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCPP) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerCPP_virtualbase_setFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnsetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerCPP_override_virtual_setFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setFoldAtElse
func miqt_exec_callback_QsciLexerCPP_setFoldAtElse(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerCPP_virtualbase_setFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnsetFoldComments(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerCPP_override_virtual_setFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setFoldComments
func miqt_exec_callback_QsciLexerCPP_setFoldComments(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerCPP_virtualbase_setFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnsetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerCPP_override_virtual_setFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setFoldCompact
func miqt_exec_callback_QsciLexerCPP_setFoldCompact(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerCPP_virtualbase_setFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCPP) OnsetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerCPP_override_virtual_setFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setFoldPreprocessor
func miqt_exec_callback_QsciLexerCPP_setFoldPreprocessor(self *C.QsciLexerCPP, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetStylePreprocessor(style bool) {

	C.QsciLexerCPP_virtualbase_setStylePreprocessor(unsafe.Pointer(this.h), (C.bool)(style))

}
func (this *QsciLexerCPP) OnsetStylePreprocessor(slot func(super func(style bool), style bool)) {
	ok := C.QsciLexerCPP_override_virtual_setStylePreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setStylePreprocessor
func miqt_exec_callback_QsciLexerCPP_setStylePreprocessor(self *C.QsciLexerCPP, cb C.intptr_t, style C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style bool), style bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetStylePreprocessor, slotval1)

}
func (this *QsciLexerCPP) Onlanguage(slot func() string) {
	ok := C.QsciLexerCPP_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_language
func miqt_exec_callback_QsciLexerCPP_language(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCPP) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerCPP_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) Onlexer(slot func(super func() string) string) {
	ok := C.QsciLexerCPP_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_lexer
func miqt_exec_callback_QsciLexerCPP_lexer(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
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

	return (int)(C.QsciLexerCPP_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnlexerId(slot func(super func() int) int) {
	ok := C.QsciLexerCPP_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_lexerId
func miqt_exec_callback_QsciLexerCPP_lexerId(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerCPP_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnautoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerCPP_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_autoCompletionFillups
func miqt_exec_callback_QsciLexerCPP_autoCompletionFillups(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
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

	var _ma C.struct_miqt_array = C.QsciLexerCPP_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerCPP) OnautoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerCPP_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerCPP_autoCompletionWordSeparators(self *C.QsciLexerCPP, cb C.intptr_t) C.struct_miqt_array {
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

	_ret := C.QsciLexerCPP_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnblockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerCPP_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_blockEnd
func miqt_exec_callback_QsciLexerCPP_blockEnd(self *C.QsciLexerCPP, cb C.intptr_t, style *C.int) *C.const_char {
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

	return (int)(C.QsciLexerCPP_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnblockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerCPP_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_blockLookback
func miqt_exec_callback_QsciLexerCPP_blockLookback(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerCPP_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnblockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerCPP_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_blockStart
func miqt_exec_callback_QsciLexerCPP_blockStart(self *C.QsciLexerCPP, cb C.intptr_t, style *C.int) *C.const_char {
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

	_ret := C.QsciLexerCPP_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnblockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerCPP_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_blockStartKeyword
func miqt_exec_callback_QsciLexerCPP_blockStartKeyword(self *C.QsciLexerCPP, cb C.intptr_t, style *C.int) *C.const_char {
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

	return (int)(C.QsciLexerCPP_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnbraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerCPP_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_braceStyle
func miqt_exec_callback_QsciLexerCPP_braceStyle(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerCPP_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OncaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerCPP_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_caseSensitive
func miqt_exec_callback_QsciLexerCPP_caseSensitive(self *C.QsciLexerCPP, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCPP_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) Oncolor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCPP_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_color
func miqt_exec_callback_QsciLexerCPP_color(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerCPP_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCPP) OneolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerCPP_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_eolFill
func miqt_exec_callback_QsciLexerCPP_eolFill(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerCPP_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) Onfont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerCPP_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_font
func miqt_exec_callback_QsciLexerCPP_font(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerCPP_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnindentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerCPP_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_indentationGuideView
func miqt_exec_callback_QsciLexerCPP_indentationGuideView(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerCPP_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) Onkeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerCPP_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_keywords
func miqt_exec_callback_QsciLexerCPP_keywords(self *C.QsciLexerCPP, cb C.intptr_t, set C.int) *C.const_char {
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

	return (int)(C.QsciLexerCPP_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OndefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerCPP_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_defaultStyle
func miqt_exec_callback_QsciLexerCPP_defaultStyle(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerCPP) Ondescription(slot func(style int) string) {
	ok := C.QsciLexerCPP_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_description
func miqt_exec_callback_QsciLexerCPP_description(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc(slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexerCPP) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCPP_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) Onpaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCPP_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_paper
func miqt_exec_callback_QsciLexerCPP_paper(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCPP_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OndefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCPP_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_defaultColorWithStyle
func miqt_exec_callback_QsciLexerCPP_defaultColorWithStyle(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerCPP_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCPP) OndefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerCPP_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_defaultEolFill
func miqt_exec_callback_QsciLexerCPP_defaultEolFill(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerCPP_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OndefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerCPP_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_defaultFontWithStyle
func miqt_exec_callback_QsciLexerCPP_defaultFontWithStyle(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCPP_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCPP) OndefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCPP_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerCPP_defaultPaperWithStyle(self *C.QsciLexerCPP, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCPP) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerCPP_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerCPP) OnsetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerCPP_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setEditor
func miqt_exec_callback_QsciLexerCPP_setEditor(self *C.QsciLexerCPP, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_RefreshProperties() {

	C.QsciLexerCPP_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerCPP) OnrefreshProperties(slot func(super func())) {
	ok := C.QsciLexerCPP_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_refreshProperties
func miqt_exec_callback_QsciLexerCPP_refreshProperties(self *C.QsciLexerCPP, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerCPP) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerCPP_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCPP) OnstyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerCPP_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_styleBitsNeeded
func miqt_exec_callback_QsciLexerCPP_styleBitsNeeded(self *C.QsciLexerCPP, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerCPP_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCPP) OnwordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerCPP_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_wordCharacters
func miqt_exec_callback_QsciLexerCPP_wordCharacters(self *C.QsciLexerCPP, cb C.intptr_t) *C.const_char {
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

	C.QsciLexerCPP_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerCPP) OnsetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerCPP_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setAutoIndentStyle
func miqt_exec_callback_QsciLexerCPP_setAutoIndentStyle(self *C.QsciLexerCPP, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerCPP_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCPP) OnsetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerCPP_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setColor
func miqt_exec_callback_QsciLexerCPP_setColor(self *C.QsciLexerCPP, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerCPP_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerCPP) OnsetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerCPP_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setEolFill
func miqt_exec_callback_QsciLexerCPP_setEolFill(self *C.QsciLexerCPP, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerCPP_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCPP) OnsetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	ok := C.QsciLexerCPP_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setFont
func miqt_exec_callback_QsciLexerCPP_setFont(self *C.QsciLexerCPP, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerCPP_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCPP) OnsetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerCPP_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_setPaper
func miqt_exec_callback_QsciLexerCPP_setPaper(self *C.QsciLexerCPP, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerCPP) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCPP_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCPP) OnreadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerCPP_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_readProperties
func miqt_exec_callback_QsciLexerCPP_readProperties(self *C.QsciLexerCPP, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSettings(unsafe.Pointer(qs))

	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCPP_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCPP) OnwriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerCPP_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_writeProperties
func miqt_exec_callback_QsciLexerCPP_writeProperties(self *C.QsciLexerCPP, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSettings(unsafe.Pointer(qs))

	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QsciLexerCPP_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerCPP) Onevent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QsciLexerCPP_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_event
func miqt_exec_callback_QsciLexerCPP_event(self *C.QsciLexerCPP, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciLexerCPP_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerCPP) OneventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QsciLexerCPP_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_eventFilter
func miqt_exec_callback_QsciLexerCPP_eventFilter(self *C.QsciLexerCPP, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerCPP{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCPP) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciLexerCPP_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerCPP) OntimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QsciLexerCPP_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_timerEvent
func miqt_exec_callback_QsciLexerCPP_timerEvent(self *C.QsciLexerCPP, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciLexerCPP_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerCPP) OnchildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QsciLexerCPP_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_childEvent
func miqt_exec_callback_QsciLexerCPP_childEvent(self *C.QsciLexerCPP, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciLexerCPP_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerCPP) OncustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QsciLexerCPP_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_customEvent
func miqt_exec_callback_QsciLexerCPP_customEvent(self *C.QsciLexerCPP, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerCPP_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerCPP) OnconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerCPP_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_connectNotify
func miqt_exec_callback_QsciLexerCPP_connectNotify(self *C.QsciLexerCPP, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerCPP) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerCPP_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerCPP) OndisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerCPP_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCPP_disconnectNotify
func miqt_exec_callback_QsciLexerCPP_disconnectNotify(self *C.QsciLexerCPP, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerCPP{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerCPP) Delete() {
	C.QsciLexerCPP_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCPP) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCPP) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

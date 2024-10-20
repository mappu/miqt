package qscintilla

/*

#include "gen_qscilexercpp.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
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

func newQsciLexerCPP(h *C.QsciLexerCPP) *QsciLexerCPP {
	if h == nil {
		return nil
	}
	return &QsciLexerCPP{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerCPP(h unsafe.Pointer) *QsciLexerCPP {
	return newQsciLexerCPP((*C.QsciLexerCPP)(h))
}

// NewQsciLexerCPP constructs a new QsciLexerCPP object.
func NewQsciLexerCPP() *QsciLexerCPP {
	ret := C.QsciLexerCPP_new()
	return newQsciLexerCPP(ret)
}

// NewQsciLexerCPP2 constructs a new QsciLexerCPP object.
func NewQsciLexerCPP2(parent *qt.QObject) *QsciLexerCPP {
	ret := C.QsciLexerCPP_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerCPP(ret)
}

// NewQsciLexerCPP3 constructs a new QsciLexerCPP object.
func NewQsciLexerCPP3(parent *qt.QObject, caseInsensitiveKeywords bool) *QsciLexerCPP {
	ret := C.QsciLexerCPP_new3((*C.QObject)(parent.UnsafePointer()), (C.bool)(caseInsensitiveKeywords))
	return newQsciLexerCPP(ret)
}

func (this *QsciLexerCPP) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCPP_MetaObject(this.h)))
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

func QsciLexerCPP_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_TrUtf8(s_Cstring)
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
	var _ma *C.struct_miqt_array = C.QsciLexerCPP_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerCPP) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerCPP_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerCPP_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerCPP) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerCPP_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCPP) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerCPP_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
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

func QsciLexerCPP_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCPP_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCPP_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
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

// Delete this object from C++ memory.
func (this *QsciLexerCPP) Delete() {
	C.QsciLexerCPP_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCPP) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCPP) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

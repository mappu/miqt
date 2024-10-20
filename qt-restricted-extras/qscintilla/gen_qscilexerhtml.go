package qscintilla

/*

#include "gen_qscilexerhtml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerHTML__ int

const (
	QsciLexerHTML__Default                           QsciLexerHTML__ = 0
	QsciLexerHTML__Tag                               QsciLexerHTML__ = 1
	QsciLexerHTML__UnknownTag                        QsciLexerHTML__ = 2
	QsciLexerHTML__Attribute                         QsciLexerHTML__ = 3
	QsciLexerHTML__UnknownAttribute                  QsciLexerHTML__ = 4
	QsciLexerHTML__HTMLNumber                        QsciLexerHTML__ = 5
	QsciLexerHTML__HTMLDoubleQuotedString            QsciLexerHTML__ = 6
	QsciLexerHTML__HTMLSingleQuotedString            QsciLexerHTML__ = 7
	QsciLexerHTML__OtherInTag                        QsciLexerHTML__ = 8
	QsciLexerHTML__HTMLComment                       QsciLexerHTML__ = 9
	QsciLexerHTML__Entity                            QsciLexerHTML__ = 10
	QsciLexerHTML__XMLTagEnd                         QsciLexerHTML__ = 11
	QsciLexerHTML__XMLStart                          QsciLexerHTML__ = 12
	QsciLexerHTML__XMLEnd                            QsciLexerHTML__ = 13
	QsciLexerHTML__Script                            QsciLexerHTML__ = 14
	QsciLexerHTML__ASPAtStart                        QsciLexerHTML__ = 15
	QsciLexerHTML__ASPStart                          QsciLexerHTML__ = 16
	QsciLexerHTML__CDATA                             QsciLexerHTML__ = 17
	QsciLexerHTML__PHPStart                          QsciLexerHTML__ = 18
	QsciLexerHTML__HTMLValue                         QsciLexerHTML__ = 19
	QsciLexerHTML__ASPXCComment                      QsciLexerHTML__ = 20
	QsciLexerHTML__SGMLDefault                       QsciLexerHTML__ = 21
	QsciLexerHTML__SGMLCommand                       QsciLexerHTML__ = 22
	QsciLexerHTML__SGMLParameter                     QsciLexerHTML__ = 23
	QsciLexerHTML__SGMLDoubleQuotedString            QsciLexerHTML__ = 24
	QsciLexerHTML__SGMLSingleQuotedString            QsciLexerHTML__ = 25
	QsciLexerHTML__SGMLError                         QsciLexerHTML__ = 26
	QsciLexerHTML__SGMLSpecial                       QsciLexerHTML__ = 27
	QsciLexerHTML__SGMLEntity                        QsciLexerHTML__ = 28
	QsciLexerHTML__SGMLComment                       QsciLexerHTML__ = 29
	QsciLexerHTML__SGMLParameterComment              QsciLexerHTML__ = 30
	QsciLexerHTML__SGMLBlockDefault                  QsciLexerHTML__ = 31
	QsciLexerHTML__JavaScriptStart                   QsciLexerHTML__ = 40
	QsciLexerHTML__JavaScriptDefault                 QsciLexerHTML__ = 41
	QsciLexerHTML__JavaScriptComment                 QsciLexerHTML__ = 42
	QsciLexerHTML__JavaScriptCommentLine             QsciLexerHTML__ = 43
	QsciLexerHTML__JavaScriptCommentDoc              QsciLexerHTML__ = 44
	QsciLexerHTML__JavaScriptNumber                  QsciLexerHTML__ = 45
	QsciLexerHTML__JavaScriptWord                    QsciLexerHTML__ = 46
	QsciLexerHTML__JavaScriptKeyword                 QsciLexerHTML__ = 47
	QsciLexerHTML__JavaScriptDoubleQuotedString      QsciLexerHTML__ = 48
	QsciLexerHTML__JavaScriptSingleQuotedString      QsciLexerHTML__ = 49
	QsciLexerHTML__JavaScriptSymbol                  QsciLexerHTML__ = 50
	QsciLexerHTML__JavaScriptUnclosedString          QsciLexerHTML__ = 51
	QsciLexerHTML__JavaScriptRegex                   QsciLexerHTML__ = 52
	QsciLexerHTML__ASPJavaScriptStart                QsciLexerHTML__ = 55
	QsciLexerHTML__ASPJavaScriptDefault              QsciLexerHTML__ = 56
	QsciLexerHTML__ASPJavaScriptComment              QsciLexerHTML__ = 57
	QsciLexerHTML__ASPJavaScriptCommentLine          QsciLexerHTML__ = 58
	QsciLexerHTML__ASPJavaScriptCommentDoc           QsciLexerHTML__ = 59
	QsciLexerHTML__ASPJavaScriptNumber               QsciLexerHTML__ = 60
	QsciLexerHTML__ASPJavaScriptWord                 QsciLexerHTML__ = 61
	QsciLexerHTML__ASPJavaScriptKeyword              QsciLexerHTML__ = 62
	QsciLexerHTML__ASPJavaScriptDoubleQuotedString   QsciLexerHTML__ = 63
	QsciLexerHTML__ASPJavaScriptSingleQuotedString   QsciLexerHTML__ = 64
	QsciLexerHTML__ASPJavaScriptSymbol               QsciLexerHTML__ = 65
	QsciLexerHTML__ASPJavaScriptUnclosedString       QsciLexerHTML__ = 66
	QsciLexerHTML__ASPJavaScriptRegex                QsciLexerHTML__ = 67
	QsciLexerHTML__VBScriptStart                     QsciLexerHTML__ = 70
	QsciLexerHTML__VBScriptDefault                   QsciLexerHTML__ = 71
	QsciLexerHTML__VBScriptComment                   QsciLexerHTML__ = 72
	QsciLexerHTML__VBScriptNumber                    QsciLexerHTML__ = 73
	QsciLexerHTML__VBScriptKeyword                   QsciLexerHTML__ = 74
	QsciLexerHTML__VBScriptString                    QsciLexerHTML__ = 75
	QsciLexerHTML__VBScriptIdentifier                QsciLexerHTML__ = 76
	QsciLexerHTML__VBScriptUnclosedString            QsciLexerHTML__ = 77
	QsciLexerHTML__ASPVBScriptStart                  QsciLexerHTML__ = 80
	QsciLexerHTML__ASPVBScriptDefault                QsciLexerHTML__ = 81
	QsciLexerHTML__ASPVBScriptComment                QsciLexerHTML__ = 82
	QsciLexerHTML__ASPVBScriptNumber                 QsciLexerHTML__ = 83
	QsciLexerHTML__ASPVBScriptKeyword                QsciLexerHTML__ = 84
	QsciLexerHTML__ASPVBScriptString                 QsciLexerHTML__ = 85
	QsciLexerHTML__ASPVBScriptIdentifier             QsciLexerHTML__ = 86
	QsciLexerHTML__ASPVBScriptUnclosedString         QsciLexerHTML__ = 87
	QsciLexerHTML__PythonStart                       QsciLexerHTML__ = 90
	QsciLexerHTML__PythonDefault                     QsciLexerHTML__ = 91
	QsciLexerHTML__PythonComment                     QsciLexerHTML__ = 92
	QsciLexerHTML__PythonNumber                      QsciLexerHTML__ = 93
	QsciLexerHTML__PythonDoubleQuotedString          QsciLexerHTML__ = 94
	QsciLexerHTML__PythonSingleQuotedString          QsciLexerHTML__ = 95
	QsciLexerHTML__PythonKeyword                     QsciLexerHTML__ = 96
	QsciLexerHTML__PythonTripleSingleQuotedString    QsciLexerHTML__ = 97
	QsciLexerHTML__PythonTripleDoubleQuotedString    QsciLexerHTML__ = 98
	QsciLexerHTML__PythonClassName                   QsciLexerHTML__ = 99
	QsciLexerHTML__PythonFunctionMethodName          QsciLexerHTML__ = 100
	QsciLexerHTML__PythonOperator                    QsciLexerHTML__ = 101
	QsciLexerHTML__PythonIdentifier                  QsciLexerHTML__ = 102
	QsciLexerHTML__ASPPythonStart                    QsciLexerHTML__ = 105
	QsciLexerHTML__ASPPythonDefault                  QsciLexerHTML__ = 106
	QsciLexerHTML__ASPPythonComment                  QsciLexerHTML__ = 107
	QsciLexerHTML__ASPPythonNumber                   QsciLexerHTML__ = 108
	QsciLexerHTML__ASPPythonDoubleQuotedString       QsciLexerHTML__ = 109
	QsciLexerHTML__ASPPythonSingleQuotedString       QsciLexerHTML__ = 110
	QsciLexerHTML__ASPPythonKeyword                  QsciLexerHTML__ = 111
	QsciLexerHTML__ASPPythonTripleSingleQuotedString QsciLexerHTML__ = 112
	QsciLexerHTML__ASPPythonTripleDoubleQuotedString QsciLexerHTML__ = 113
	QsciLexerHTML__ASPPythonClassName                QsciLexerHTML__ = 114
	QsciLexerHTML__ASPPythonFunctionMethodName       QsciLexerHTML__ = 115
	QsciLexerHTML__ASPPythonOperator                 QsciLexerHTML__ = 116
	QsciLexerHTML__ASPPythonIdentifier               QsciLexerHTML__ = 117
	QsciLexerHTML__PHPDefault                        QsciLexerHTML__ = 118
	QsciLexerHTML__PHPDoubleQuotedString             QsciLexerHTML__ = 119
	QsciLexerHTML__PHPSingleQuotedString             QsciLexerHTML__ = 120
	QsciLexerHTML__PHPKeyword                        QsciLexerHTML__ = 121
	QsciLexerHTML__PHPNumber                         QsciLexerHTML__ = 122
	QsciLexerHTML__PHPVariable                       QsciLexerHTML__ = 123
	QsciLexerHTML__PHPComment                        QsciLexerHTML__ = 124
	QsciLexerHTML__PHPCommentLine                    QsciLexerHTML__ = 125
	QsciLexerHTML__PHPDoubleQuotedVariable           QsciLexerHTML__ = 126
	QsciLexerHTML__PHPOperator                       QsciLexerHTML__ = 127
)

type QsciLexerHTML struct {
	h *C.QsciLexerHTML
	*QsciLexer
}

func (this *QsciLexerHTML) cPointer() *C.QsciLexerHTML {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerHTML) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerHTML(h *C.QsciLexerHTML) *QsciLexerHTML {
	if h == nil {
		return nil
	}
	return &QsciLexerHTML{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerHTML(h unsafe.Pointer) *QsciLexerHTML {
	return newQsciLexerHTML((*C.QsciLexerHTML)(h))
}

// NewQsciLexerHTML constructs a new QsciLexerHTML object.
func NewQsciLexerHTML() *QsciLexerHTML {
	ret := C.QsciLexerHTML_new()
	return newQsciLexerHTML(ret)
}

// NewQsciLexerHTML2 constructs a new QsciLexerHTML object.
func NewQsciLexerHTML2(parent *qt.QObject) *QsciLexerHTML {
	ret := C.QsciLexerHTML_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerHTML(ret)
}

func (this *QsciLexerHTML) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerHTML_MetaObject(this.h)))
}

func (this *QsciLexerHTML) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerHTML_Metacast(this.h, param1_Cstring))
}

func QsciLexerHTML_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerHTML_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerHTML) Language() string {
	_ret := C.QsciLexerHTML_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) Lexer() string {
	_ret := C.QsciLexerHTML_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) AutoCompletionFillups() string {
	_ret := C.QsciLexerHTML_AutoCompletionFillups(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) WordCharacters() string {
	_ret := C.QsciLexerHTML_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerHTML_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerHTML_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerHTML) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerHTML_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerHTML_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) Keywords(set int) string {
	_ret := C.QsciLexerHTML_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerHTML_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerHTML) RefreshProperties() {
	C.QsciLexerHTML_RefreshProperties(this.h)
}

func (this *QsciLexerHTML) CaseSensitiveTags() bool {
	return (bool)(C.QsciLexerHTML_CaseSensitiveTags(this.h))
}

func (this *QsciLexerHTML) SetDjangoTemplates(enabled bool) {
	C.QsciLexerHTML_SetDjangoTemplates(this.h, (C.bool)(enabled))
}

func (this *QsciLexerHTML) DjangoTemplates() bool {
	return (bool)(C.QsciLexerHTML_DjangoTemplates(this.h))
}

func (this *QsciLexerHTML) FoldCompact() bool {
	return (bool)(C.QsciLexerHTML_FoldCompact(this.h))
}

func (this *QsciLexerHTML) FoldPreprocessor() bool {
	return (bool)(C.QsciLexerHTML_FoldPreprocessor(this.h))
}

func (this *QsciLexerHTML) SetFoldScriptComments(fold bool) {
	C.QsciLexerHTML_SetFoldScriptComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) FoldScriptComments() bool {
	return (bool)(C.QsciLexerHTML_FoldScriptComments(this.h))
}

func (this *QsciLexerHTML) SetFoldScriptHeredocs(fold bool) {
	C.QsciLexerHTML_SetFoldScriptHeredocs(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) FoldScriptHeredocs() bool {
	return (bool)(C.QsciLexerHTML_FoldScriptHeredocs(this.h))
}

func (this *QsciLexerHTML) SetMakoTemplates(enabled bool) {
	C.QsciLexerHTML_SetMakoTemplates(this.h, (C.bool)(enabled))
}

func (this *QsciLexerHTML) MakoTemplates() bool {
	return (bool)(C.QsciLexerHTML_MakoTemplates(this.h))
}

func (this *QsciLexerHTML) SetFoldCompact(fold bool) {
	C.QsciLexerHTML_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) SetFoldPreprocessor(fold bool) {
	C.QsciLexerHTML_SetFoldPreprocessor(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) SetCaseSensitiveTags(sens bool) {
	C.QsciLexerHTML_SetCaseSensitiveTags(this.h, (C.bool)(sens))
}

func QsciLexerHTML_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerHTML_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerHTML_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerHTML_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerHTML) Delete() {
	C.QsciLexerHTML_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerHTML) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerHTML) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

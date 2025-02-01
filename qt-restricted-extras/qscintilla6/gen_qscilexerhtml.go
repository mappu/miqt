package qscintilla6

/*

#include "gen_qscilexerhtml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
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

// newQsciLexerHTML constructs the type using only CGO pointers.
func newQsciLexerHTML(h *C.QsciLexerHTML) *QsciLexerHTML {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerHTML_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerHTML{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerHTML constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerHTML(h unsafe.Pointer) *QsciLexerHTML {
	return newQsciLexerHTML((*C.QsciLexerHTML)(h))
}

// NewQsciLexerHTML constructs a new QsciLexerHTML object.
func NewQsciLexerHTML() *QsciLexerHTML {

	return newQsciLexerHTML(C.QsciLexerHTML_new())
}

// NewQsciLexerHTML2 constructs a new QsciLexerHTML object.
func NewQsciLexerHTML2(parent *qt6.QObject) *QsciLexerHTML {

	return newQsciLexerHTML(C.QsciLexerHTML_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerHTML) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerHTML_metaObject(this.h)))
}

func (this *QsciLexerHTML) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerHTML_metacast(this.h, param1_Cstring))
}

func QsciLexerHTML_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerHTML) Language() string {
	_ret := C.QsciLexerHTML_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) Lexer() string {
	_ret := C.QsciLexerHTML_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) AutoCompletionFillups() string {
	_ret := C.QsciLexerHTML_autoCompletionFillups(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) WordCharacters() string {
	_ret := C.QsciLexerHTML_wordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) DefaultColor(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerHTML_defaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerHTML) DefaultFont(style int) *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerHTML_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) DefaultPaper(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) Keywords(set int) string {
	_ret := C.QsciLexerHTML_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerHTML) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerHTML_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerHTML) RefreshProperties() {
	C.QsciLexerHTML_refreshProperties(this.h)
}

func (this *QsciLexerHTML) CaseSensitiveTags() bool {
	return (bool)(C.QsciLexerHTML_caseSensitiveTags(this.h))
}

func (this *QsciLexerHTML) SetDjangoTemplates(enabled bool) {
	C.QsciLexerHTML_setDjangoTemplates(this.h, (C.bool)(enabled))
}

func (this *QsciLexerHTML) DjangoTemplates() bool {
	return (bool)(C.QsciLexerHTML_djangoTemplates(this.h))
}

func (this *QsciLexerHTML) FoldCompact() bool {
	return (bool)(C.QsciLexerHTML_foldCompact(this.h))
}

func (this *QsciLexerHTML) FoldPreprocessor() bool {
	return (bool)(C.QsciLexerHTML_foldPreprocessor(this.h))
}

func (this *QsciLexerHTML) SetFoldScriptComments(fold bool) {
	C.QsciLexerHTML_setFoldScriptComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) FoldScriptComments() bool {
	return (bool)(C.QsciLexerHTML_foldScriptComments(this.h))
}

func (this *QsciLexerHTML) SetFoldScriptHeredocs(fold bool) {
	C.QsciLexerHTML_setFoldScriptHeredocs(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) FoldScriptHeredocs() bool {
	return (bool)(C.QsciLexerHTML_foldScriptHeredocs(this.h))
}

func (this *QsciLexerHTML) SetMakoTemplates(enabled bool) {
	C.QsciLexerHTML_setMakoTemplates(this.h, (C.bool)(enabled))
}

func (this *QsciLexerHTML) MakoTemplates() bool {
	return (bool)(C.QsciLexerHTML_makoTemplates(this.h))
}

func (this *QsciLexerHTML) SetFoldCompact(fold bool) {
	C.QsciLexerHTML_setFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) SetFoldPreprocessor(fold bool) {
	C.QsciLexerHTML_setFoldPreprocessor(this.h, (C.bool)(fold))
}

func (this *QsciLexerHTML) SetCaseSensitiveTags(sens bool) {
	C.QsciLexerHTML_setCaseSensitiveTags(this.h, (C.bool)(sens))
}

func QsciLexerHTML_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerHTML_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerHTML_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerHTML) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerHTML_virtualbase_setFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerHTML) OnsetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerHTML_override_virtual_setFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setFoldCompact
func miqt_exec_callback_QsciLexerHTML_setFoldCompact(self *C.QsciLexerHTML, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerHTML_virtualbase_setFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerHTML) OnsetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerHTML_override_virtual_setFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setFoldPreprocessor
func miqt_exec_callback_QsciLexerHTML_setFoldPreprocessor(self *C.QsciLexerHTML, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_SetCaseSensitiveTags(sens bool) {

	C.QsciLexerHTML_virtualbase_setCaseSensitiveTags(unsafe.Pointer(this.h), (C.bool)(sens))

}
func (this *QsciLexerHTML) OnsetCaseSensitiveTags(slot func(super func(sens bool), sens bool)) {
	ok := C.QsciLexerHTML_override_virtual_setCaseSensitiveTags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setCaseSensitiveTags
func miqt_exec_callback_QsciLexerHTML_setCaseSensitiveTags(self *C.QsciLexerHTML, cb C.intptr_t, sens C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sens bool), sens bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(sens)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetCaseSensitiveTags, slotval1)

}
func (this *QsciLexerHTML) Onlanguage(slot func() string) {
	ok := C.QsciLexerHTML_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_language
func miqt_exec_callback_QsciLexerHTML_language(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerHTML_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) Onlexer(slot func(super func() string) string) {
	ok := C.QsciLexerHTML_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_lexer
func miqt_exec_callback_QsciLexerHTML_lexer(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerHTML_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnlexerId(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_lexerId
func miqt_exec_callback_QsciLexerHTML_lexerId(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerHTML_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnautoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerHTML_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_autoCompletionFillups
func miqt_exec_callback_QsciLexerHTML_autoCompletionFillups(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerHTML_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerHTML) OnautoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerHTML_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerHTML_autoCompletionWordSeparators(self *C.QsciLexerHTML, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerHTML) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerHTML_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnblockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerHTML_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_blockEnd
func miqt_exec_callback_QsciLexerHTML_blockEnd(self *C.QsciLexerHTML, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerHTML_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnblockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_blockLookback
func miqt_exec_callback_QsciLexerHTML_blockLookback(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerHTML_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnblockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerHTML_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_blockStart
func miqt_exec_callback_QsciLexerHTML_blockStart(self *C.QsciLexerHTML, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerHTML_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnblockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerHTML_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_blockStartKeyword
func miqt_exec_callback_QsciLexerHTML_blockStartKeyword(self *C.QsciLexerHTML, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerHTML_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnbraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_braceStyle
func miqt_exec_callback_QsciLexerHTML_braceStyle(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerHTML_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OncaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerHTML_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_caseSensitive
func miqt_exec_callback_QsciLexerHTML_caseSensitive(self *C.QsciLexerHTML, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_Color(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) Oncolor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_color
func miqt_exec_callback_QsciLexerHTML_color(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerHTML) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerHTML_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerHTML) OneolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerHTML_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_eolFill
func miqt_exec_callback_QsciLexerHTML_eolFill(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_Font(style int) *qt6.QFont {

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerHTML_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) Onfont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerHTML_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_font
func miqt_exec_callback_QsciLexerHTML_font(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerHTML) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerHTML_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnindentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_indentationGuideView
func miqt_exec_callback_QsciLexerHTML_indentationGuideView(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerHTML_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) Onkeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerHTML_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_keywords
func miqt_exec_callback_QsciLexerHTML_keywords(self *C.QsciLexerHTML, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerHTML_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OndefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_defaultStyle
func miqt_exec_callback_QsciLexerHTML_defaultStyle(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerHTML) Ondescription(slot func(style int) string) {
	ok := C.QsciLexerHTML_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_description
func miqt_exec_callback_QsciLexerHTML_description(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerHTML) callVirtualBase_Paper(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) Onpaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_paper
func miqt_exec_callback_QsciLexerHTML_paper(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerHTML) callVirtualBase_DefaultColorWithStyle(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OndefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_defaultColorWithStyle
func miqt_exec_callback_QsciLexerHTML_defaultColorWithStyle(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerHTML) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerHTML_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerHTML) OndefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerHTML_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_defaultEolFill
func miqt_exec_callback_QsciLexerHTML_defaultEolFill(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_DefaultFontWithStyle(style int) *qt6.QFont {

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerHTML_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OndefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerHTML_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_defaultFontWithStyle
func miqt_exec_callback_QsciLexerHTML_defaultFontWithStyle(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerHTML) callVirtualBase_DefaultPaperWithStyle(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OndefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerHTML_defaultPaperWithStyle(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerHTML) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerHTML_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerHTML) OnsetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerHTML_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setEditor
func miqt_exec_callback_QsciLexerHTML_setEditor(self *C.QsciLexerHTML, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_RefreshProperties() {

	C.QsciLexerHTML_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerHTML) OnrefreshProperties(slot func(super func())) {
	ok := C.QsciLexerHTML_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_refreshProperties
func miqt_exec_callback_QsciLexerHTML_refreshProperties(self *C.QsciLexerHTML, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerHTML) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerHTML_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnstyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_styleBitsNeeded
func miqt_exec_callback_QsciLexerHTML_styleBitsNeeded(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerHTML_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnwordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerHTML_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_wordCharacters
func miqt_exec_callback_QsciLexerHTML_wordCharacters(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerHTML) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerHTML_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerHTML) OnsetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerHTML_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setAutoIndentStyle
func miqt_exec_callback_QsciLexerHTML_setAutoIndentStyle(self *C.QsciLexerHTML, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerHTML_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerHTML) OnsetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerHTML_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setColor
func miqt_exec_callback_QsciLexerHTML_setColor(self *C.QsciLexerHTML, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerHTML) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerHTML_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerHTML) OnsetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerHTML_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setEolFill
func miqt_exec_callback_QsciLexerHTML_setEolFill(self *C.QsciLexerHTML, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerHTML) callVirtualBase_SetFont(f *qt6.QFont, style int) {

	C.QsciLexerHTML_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerHTML) OnsetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	ok := C.QsciLexerHTML_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setFont
func miqt_exec_callback_QsciLexerHTML_setFont(self *C.QsciLexerHTML, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerHTML) callVirtualBase_SetPaper(c *qt6.QColor, style int) {

	C.QsciLexerHTML_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerHTML) OnsetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerHTML_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_setPaper
func miqt_exec_callback_QsciLexerHTML_setPaper(self *C.QsciLexerHTML, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerHTML) callVirtualBase_ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerHTML_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerHTML) OnreadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerHTML_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_readProperties
func miqt_exec_callback_QsciLexerHTML_readProperties(self *C.QsciLexerHTML, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs))

	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerHTML_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerHTML) OnwriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerHTML_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_writeProperties
func miqt_exec_callback_QsciLexerHTML_writeProperties(self *C.QsciLexerHTML, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs))

	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QsciLexerHTML_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerHTML) Onevent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QsciLexerHTML_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_event
func miqt_exec_callback_QsciLexerHTML_event(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QsciLexerHTML_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerHTML) OneventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QsciLexerHTML_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_eventFilter
func miqt_exec_callback_QsciLexerHTML_eventFilter(self *C.QsciLexerHTML, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QsciLexerHTML_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerHTML) OntimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QsciLexerHTML_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_timerEvent
func miqt_exec_callback_QsciLexerHTML_timerEvent(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QsciLexerHTML_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerHTML) OnchildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QsciLexerHTML_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_childEvent
func miqt_exec_callback_QsciLexerHTML_childEvent(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QsciLexerHTML_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerHTML) OncustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QsciLexerHTML_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_customEvent
func miqt_exec_callback_QsciLexerHTML_customEvent(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerHTML_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerHTML) OnconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerHTML_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_connectNotify
func miqt_exec_callback_QsciLexerHTML_connectNotify(self *C.QsciLexerHTML, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerHTML_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerHTML) OndisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerHTML_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_disconnectNotify
func miqt_exec_callback_QsciLexerHTML_disconnectNotify(self *C.QsciLexerHTML, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerHTML) Delete() {
	C.QsciLexerHTML_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerHTML) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerHTML) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

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
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerHTML_MetaObject(this.h)))
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

func (this *QsciLexerHTML) DefaultColor(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_DefaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerHTML_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerHTML) DefaultFont(style int) *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerHTML_DefaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerHTML) DefaultPaper(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_DefaultPaper(this.h, (C.int)(style))))
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

func (this *QsciLexerHTML) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerHTML_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerHTML) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerHTML_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetFoldCompact
func miqt_exec_callback_QsciLexerHTML_SetFoldCompact(self *C.QsciLexerHTML, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerHTML_virtualbase_SetFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerHTML) OnSetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerHTML_override_virtual_SetFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetFoldPreprocessor
func miqt_exec_callback_QsciLexerHTML_SetFoldPreprocessor(self *C.QsciLexerHTML, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_SetCaseSensitiveTags(sens bool) {

	C.QsciLexerHTML_virtualbase_SetCaseSensitiveTags(unsafe.Pointer(this.h), (C.bool)(sens))

}
func (this *QsciLexerHTML) OnSetCaseSensitiveTags(slot func(super func(sens bool), sens bool)) {
	ok := C.QsciLexerHTML_override_virtual_SetCaseSensitiveTags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetCaseSensitiveTags
func miqt_exec_callback_QsciLexerHTML_SetCaseSensitiveTags(self *C.QsciLexerHTML, cb C.intptr_t, sens C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sens bool), sens bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(sens)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetCaseSensitiveTags, slotval1)

}
func (this *QsciLexerHTML) OnLanguage(slot func() string) {
	ok := C.QsciLexerHTML_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Language
func miqt_exec_callback_QsciLexerHTML_Language(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
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

	_ret := C.QsciLexerHTML_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnLexer(slot func(super func() string) string) {
	ok := C.QsciLexerHTML_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Lexer
func miqt_exec_callback_QsciLexerHTML_Lexer(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
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

	return (int)(C.QsciLexerHTML_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnLexerId(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_LexerId
func miqt_exec_callback_QsciLexerHTML_LexerId(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerHTML_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnAutoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerHTML_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_AutoCompletionFillups
func miqt_exec_callback_QsciLexerHTML_AutoCompletionFillups(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
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

	var _ma C.struct_miqt_array = C.QsciLexerHTML_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerHTML) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerHTML_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerHTML_AutoCompletionWordSeparators(self *C.QsciLexerHTML, cb C.intptr_t) C.struct_miqt_array {
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

	_ret := C.QsciLexerHTML_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerHTML_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_BlockEnd
func miqt_exec_callback_QsciLexerHTML_BlockEnd(self *C.QsciLexerHTML, cb C.intptr_t, style *C.int) *C.const_char {
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

	return (int)(C.QsciLexerHTML_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnBlockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_BlockLookback
func miqt_exec_callback_QsciLexerHTML_BlockLookback(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerHTML_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerHTML_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_BlockStart
func miqt_exec_callback_QsciLexerHTML_BlockStart(self *C.QsciLexerHTML, cb C.intptr_t, style *C.int) *C.const_char {
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

	_ret := C.QsciLexerHTML_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerHTML_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_BlockStartKeyword
func miqt_exec_callback_QsciLexerHTML_BlockStartKeyword(self *C.QsciLexerHTML, cb C.intptr_t, style *C.int) *C.const_char {
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

	return (int)(C.QsciLexerHTML_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnBraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_BraceStyle
func miqt_exec_callback_QsciLexerHTML_BraceStyle(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerHTML_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnCaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerHTML_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_CaseSensitive
func miqt_exec_callback_QsciLexerHTML_CaseSensitive(self *C.QsciLexerHTML, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_Color(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Color
func miqt_exec_callback_QsciLexerHTML_Color(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
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

	return (bool)(C.QsciLexerHTML_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerHTML) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerHTML_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_EolFill
func miqt_exec_callback_QsciLexerHTML_EolFill(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) C.bool {
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

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerHTML_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerHTML_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Font
func miqt_exec_callback_QsciLexerHTML_Font(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QFont {
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

	return (int)(C.QsciLexerHTML_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnIndentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_IndentationGuideView
func miqt_exec_callback_QsciLexerHTML_IndentationGuideView(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerHTML_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnKeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerHTML_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Keywords
func miqt_exec_callback_QsciLexerHTML_Keywords(self *C.QsciLexerHTML, cb C.intptr_t, set C.int) *C.const_char {
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

	return (int)(C.QsciLexerHTML_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnDefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_DefaultStyle
func miqt_exec_callback_QsciLexerHTML_DefaultStyle(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerHTML) OnDescription(slot func(style int) string) {
	ok := C.QsciLexerHTML_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Description
func miqt_exec_callback_QsciLexerHTML_Description(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Paper
func miqt_exec_callback_QsciLexerHTML_Paper(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
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

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerHTML_DefaultColorWithStyle(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
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

	return (bool)(C.QsciLexerHTML_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerHTML) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerHTML_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_DefaultEolFill
func miqt_exec_callback_QsciLexerHTML_DefaultEolFill(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) C.bool {
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

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerHTML_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerHTML_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerHTML_DefaultFontWithStyle(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QFont {
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

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerHTML_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerHTML) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerHTML_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerHTML_DefaultPaperWithStyle(self *C.QsciLexerHTML, cb C.intptr_t, style C.int) *C.QColor {
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

	C.QsciLexerHTML_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerHTML) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerHTML_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetEditor
func miqt_exec_callback_QsciLexerHTML_SetEditor(self *C.QsciLexerHTML, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_RefreshProperties() {

	C.QsciLexerHTML_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerHTML) OnRefreshProperties(slot func(super func())) {
	ok := C.QsciLexerHTML_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_RefreshProperties
func miqt_exec_callback_QsciLexerHTML_RefreshProperties(self *C.QsciLexerHTML, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerHTML) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerHTML_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerHTML) OnStyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerHTML_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_StyleBitsNeeded
func miqt_exec_callback_QsciLexerHTML_StyleBitsNeeded(self *C.QsciLexerHTML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerHTML{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerHTML) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerHTML_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerHTML) OnWordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerHTML_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_WordCharacters
func miqt_exec_callback_QsciLexerHTML_WordCharacters(self *C.QsciLexerHTML, cb C.intptr_t) *C.const_char {
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

	C.QsciLexerHTML_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerHTML) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerHTML_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerHTML_SetAutoIndentStyle(self *C.QsciLexerHTML, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerHTML_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerHTML) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerHTML_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetColor
func miqt_exec_callback_QsciLexerHTML_SetColor(self *C.QsciLexerHTML, cb C.intptr_t, c *C.QColor, style C.int) {
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

	C.QsciLexerHTML_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerHTML) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerHTML_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetEolFill
func miqt_exec_callback_QsciLexerHTML_SetEolFill(self *C.QsciLexerHTML, cb C.intptr_t, eoffill C.bool, style C.int) {
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

	C.QsciLexerHTML_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerHTML) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	ok := C.QsciLexerHTML_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetFont
func miqt_exec_callback_QsciLexerHTML_SetFont(self *C.QsciLexerHTML, cb C.intptr_t, f *C.QFont, style C.int) {
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

	C.QsciLexerHTML_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerHTML) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerHTML_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_SetPaper
func miqt_exec_callback_QsciLexerHTML_SetPaper(self *C.QsciLexerHTML, cb C.intptr_t, c *C.QColor, style C.int) {
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

	return (bool)(C.QsciLexerHTML_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerHTML) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerHTML_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_ReadProperties
func miqt_exec_callback_QsciLexerHTML_ReadProperties(self *C.QsciLexerHTML, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	return (bool)(C.QsciLexerHTML_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerHTML) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerHTML_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_WriteProperties
func miqt_exec_callback_QsciLexerHTML_WriteProperties(self *C.QsciLexerHTML, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	return (bool)(C.QsciLexerHTML_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerHTML) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QsciLexerHTML_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_Event
func miqt_exec_callback_QsciLexerHTML_Event(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QsciLexerHTML_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerHTML) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QsciLexerHTML_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_EventFilter
func miqt_exec_callback_QsciLexerHTML_EventFilter(self *C.QsciLexerHTML, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QsciLexerHTML_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerHTML) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QsciLexerHTML_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_TimerEvent
func miqt_exec_callback_QsciLexerHTML_TimerEvent(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QsciLexerHTML_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerHTML) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QsciLexerHTML_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_ChildEvent
func miqt_exec_callback_QsciLexerHTML_ChildEvent(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QsciLexerHTML_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerHTML) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QsciLexerHTML_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_CustomEvent
func miqt_exec_callback_QsciLexerHTML_CustomEvent(self *C.QsciLexerHTML, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerHTML_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerHTML) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerHTML_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_ConnectNotify
func miqt_exec_callback_QsciLexerHTML_ConnectNotify(self *C.QsciLexerHTML, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerHTML{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerHTML) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerHTML_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerHTML) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerHTML_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerHTML_DisconnectNotify
func miqt_exec_callback_QsciLexerHTML_DisconnectNotify(self *C.QsciLexerHTML, cb C.intptr_t, signal *C.QMetaMethod) {
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

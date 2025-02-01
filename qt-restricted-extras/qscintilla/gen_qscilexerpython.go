package qscintilla

/*

#include "gen_qscilexerpython.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerPython__ int

const (
	QsciLexerPython__Default                   QsciLexerPython__ = 0
	QsciLexerPython__Comment                   QsciLexerPython__ = 1
	QsciLexerPython__Number                    QsciLexerPython__ = 2
	QsciLexerPython__DoubleQuotedString        QsciLexerPython__ = 3
	QsciLexerPython__SingleQuotedString        QsciLexerPython__ = 4
	QsciLexerPython__Keyword                   QsciLexerPython__ = 5
	QsciLexerPython__TripleSingleQuotedString  QsciLexerPython__ = 6
	QsciLexerPython__TripleDoubleQuotedString  QsciLexerPython__ = 7
	QsciLexerPython__ClassName                 QsciLexerPython__ = 8
	QsciLexerPython__FunctionMethodName        QsciLexerPython__ = 9
	QsciLexerPython__Operator                  QsciLexerPython__ = 10
	QsciLexerPython__Identifier                QsciLexerPython__ = 11
	QsciLexerPython__CommentBlock              QsciLexerPython__ = 12
	QsciLexerPython__UnclosedString            QsciLexerPython__ = 13
	QsciLexerPython__HighlightedIdentifier     QsciLexerPython__ = 14
	QsciLexerPython__Decorator                 QsciLexerPython__ = 15
	QsciLexerPython__DoubleQuotedFString       QsciLexerPython__ = 16
	QsciLexerPython__SingleQuotedFString       QsciLexerPython__ = 17
	QsciLexerPython__TripleSingleQuotedFString QsciLexerPython__ = 18
	QsciLexerPython__TripleDoubleQuotedFString QsciLexerPython__ = 19
)

type QsciLexerPython__IndentationWarning int

const (
	QsciLexerPython__NoWarning       QsciLexerPython__IndentationWarning = 0
	QsciLexerPython__Inconsistent    QsciLexerPython__IndentationWarning = 1
	QsciLexerPython__TabsAfterSpaces QsciLexerPython__IndentationWarning = 2
	QsciLexerPython__Spaces          QsciLexerPython__IndentationWarning = 3
	QsciLexerPython__Tabs            QsciLexerPython__IndentationWarning = 4
)

type QsciLexerPython struct {
	h *C.QsciLexerPython
	*QsciLexer
}

func (this *QsciLexerPython) cPointer() *C.QsciLexerPython {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPython) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerPython constructs the type using only CGO pointers.
func newQsciLexerPython(h *C.QsciLexerPython) *QsciLexerPython {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerPython_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerPython{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerPython constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerPython(h unsafe.Pointer) *QsciLexerPython {
	return newQsciLexerPython((*C.QsciLexerPython)(h))
}

// NewQsciLexerPython constructs a new QsciLexerPython object.
func NewQsciLexerPython() *QsciLexerPython {

	return newQsciLexerPython(C.QsciLexerPython_new())
}

// NewQsciLexerPython2 constructs a new QsciLexerPython object.
func NewQsciLexerPython2(parent *qt.QObject) *QsciLexerPython {

	return newQsciLexerPython(C.QsciLexerPython_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerPython) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPython_metaObject(this.h)))
}

func (this *QsciLexerPython) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPython_metacast(this.h, param1_Cstring))
}

func QsciLexerPython_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPython) Language() string {
	_ret := C.QsciLexerPython_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPython) Lexer() string {
	_ret := C.QsciLexerPython_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPython) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerPython_autoCompletionWordSeparators(this.h)
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

func (this *QsciLexerPython) BlockLookback() int {
	return (int)(C.QsciLexerPython_blockLookback(this.h))
}

func (this *QsciLexerPython) BlockStart() string {
	_ret := C.QsciLexerPython_blockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPython) BraceStyle() int {
	return (int)(C.QsciLexerPython_braceStyle(this.h))
}

func (this *QsciLexerPython) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPython_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPython) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerPython_defaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerPython) DefaultFont(style int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerPython_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPython) DefaultPaper(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPython_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPython) IndentationGuideView() int {
	return (int)(C.QsciLexerPython_indentationGuideView(this.h))
}

func (this *QsciLexerPython) Keywords(set int) string {
	_ret := C.QsciLexerPython_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPython) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPython_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPython) RefreshProperties() {
	C.QsciLexerPython_refreshProperties(this.h)
}

func (this *QsciLexerPython) FoldComments() bool {
	return (bool)(C.QsciLexerPython_foldComments(this.h))
}

func (this *QsciLexerPython) SetFoldCompact(fold bool) {
	C.QsciLexerPython_setFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerPython) FoldCompact() bool {
	return (bool)(C.QsciLexerPython_foldCompact(this.h))
}

func (this *QsciLexerPython) FoldQuotes() bool {
	return (bool)(C.QsciLexerPython_foldQuotes(this.h))
}

func (this *QsciLexerPython) IndentationWarning() QsciLexerPython__IndentationWarning {
	return (QsciLexerPython__IndentationWarning)(C.QsciLexerPython_indentationWarning(this.h))
}

func (this *QsciLexerPython) SetHighlightSubidentifiers(enabled bool) {
	C.QsciLexerPython_setHighlightSubidentifiers(this.h, (C.bool)(enabled))
}

func (this *QsciLexerPython) HighlightSubidentifiers() bool {
	return (bool)(C.QsciLexerPython_highlightSubidentifiers(this.h))
}

func (this *QsciLexerPython) SetStringsOverNewlineAllowed(allowed bool) {
	C.QsciLexerPython_setStringsOverNewlineAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) StringsOverNewlineAllowed() bool {
	return (bool)(C.QsciLexerPython_stringsOverNewlineAllowed(this.h))
}

func (this *QsciLexerPython) SetV2UnicodeAllowed(allowed bool) {
	C.QsciLexerPython_setV2UnicodeAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) V2UnicodeAllowed() bool {
	return (bool)(C.QsciLexerPython_v2UnicodeAllowed(this.h))
}

func (this *QsciLexerPython) SetV3BinaryOctalAllowed(allowed bool) {
	C.QsciLexerPython_setV3BinaryOctalAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) V3BinaryOctalAllowed() bool {
	return (bool)(C.QsciLexerPython_v3BinaryOctalAllowed(this.h))
}

func (this *QsciLexerPython) SetV3BytesAllowed(allowed bool) {
	C.QsciLexerPython_setV3BytesAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerPython) V3BytesAllowed() bool {
	return (bool)(C.QsciLexerPython_v3BytesAllowed(this.h))
}

func (this *QsciLexerPython) SetFoldComments(fold bool) {
	C.QsciLexerPython_setFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerPython) SetFoldQuotes(fold bool) {
	C.QsciLexerPython_setFoldQuotes(this.h, (C.bool)(fold))
}

func (this *QsciLexerPython) SetIndentationWarning(warn QsciLexerPython__IndentationWarning) {
	C.QsciLexerPython_setIndentationWarning(this.h, (C.int)(warn))
}

func QsciLexerPython_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPython_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPython_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPython) BlockStart1(style *int) string {
	_ret := C.QsciLexerPython_blockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerPython) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerPython_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPython) OnIndentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerPython_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_indentationGuideView
func miqt_exec_callback_QsciLexerPython_indentationGuideView(self *C.QsciLexerPython, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerPython_virtualbase_setFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerPython) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerPython_override_virtual_setFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setFoldComments
func miqt_exec_callback_QsciLexerPython_setFoldComments(self *C.QsciLexerPython, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_SetFoldQuotes(fold bool) {

	C.QsciLexerPython_virtualbase_setFoldQuotes(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerPython) OnSetFoldQuotes(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerPython_override_virtual_setFoldQuotes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setFoldQuotes
func miqt_exec_callback_QsciLexerPython_setFoldQuotes(self *C.QsciLexerPython, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetFoldQuotes, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_SetIndentationWarning(warn QsciLexerPython__IndentationWarning) {

	C.QsciLexerPython_virtualbase_setIndentationWarning(unsafe.Pointer(this.h), (C.int)(warn))

}
func (this *QsciLexerPython) OnSetIndentationWarning(slot func(super func(warn QsciLexerPython__IndentationWarning), warn QsciLexerPython__IndentationWarning)) {
	ok := C.QsciLexerPython_override_virtual_setIndentationWarning(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setIndentationWarning
func miqt_exec_callback_QsciLexerPython_setIndentationWarning(self *C.QsciLexerPython, cb C.intptr_t, warn C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(warn QsciLexerPython__IndentationWarning), warn QsciLexerPython__IndentationWarning))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciLexerPython__IndentationWarning)(warn)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetIndentationWarning, slotval1)

}
func (this *QsciLexerPython) OnLanguage(slot func() string) {
	ok := C.QsciLexerPython_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_language
func miqt_exec_callback_QsciLexerPython_language(self *C.QsciLexerPython, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerPython_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPython) OnLexer(slot func(super func() string) string) {
	ok := C.QsciLexerPython_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_lexer
func miqt_exec_callback_QsciLexerPython_lexer(self *C.QsciLexerPython, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerPython_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPython) OnLexerId(slot func(super func() int) int) {
	ok := C.QsciLexerPython_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_lexerId
func miqt_exec_callback_QsciLexerPython_lexerId(self *C.QsciLexerPython, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerPython_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPython) OnAutoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerPython_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_autoCompletionFillups
func miqt_exec_callback_QsciLexerPython_autoCompletionFillups(self *C.QsciLexerPython, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerPython_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerPython) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerPython_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerPython_autoCompletionWordSeparators(self *C.QsciLexerPython, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerPython) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerPython_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPython) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerPython_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_blockEnd
func miqt_exec_callback_QsciLexerPython_blockEnd(self *C.QsciLexerPython, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerPython_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPython) OnBlockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerPython_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_blockLookback
func miqt_exec_callback_QsciLexerPython_blockLookback(self *C.QsciLexerPython, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerPython_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPython) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerPython_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_blockStart
func miqt_exec_callback_QsciLexerPython_blockStart(self *C.QsciLexerPython, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerPython_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPython) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerPython_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_blockStartKeyword
func miqt_exec_callback_QsciLexerPython_blockStartKeyword(self *C.QsciLexerPython, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerPython_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPython) OnBraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerPython_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_braceStyle
func miqt_exec_callback_QsciLexerPython_braceStyle(self *C.QsciLexerPython, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerPython_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPython) OnCaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerPython_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_caseSensitive
func miqt_exec_callback_QsciLexerPython_caseSensitive(self *C.QsciLexerPython, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPython_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPython) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerPython_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_color
func miqt_exec_callback_QsciLexerPython_color(self *C.QsciLexerPython, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPython) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerPython_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerPython) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerPython_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_eolFill
func miqt_exec_callback_QsciLexerPython_eolFill(self *C.QsciLexerPython, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerPython_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPython) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerPython_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_font
func miqt_exec_callback_QsciLexerPython_font(self *C.QsciLexerPython, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPython) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerPython_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerPython) OnKeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerPython_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_keywords
func miqt_exec_callback_QsciLexerPython_keywords(self *C.QsciLexerPython, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerPython_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPython) OnDefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerPython_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_defaultStyle
func miqt_exec_callback_QsciLexerPython_defaultStyle(self *C.QsciLexerPython, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerPython) OnDescription(slot func(style int) string) {
	ok := C.QsciLexerPython_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_description
func miqt_exec_callback_QsciLexerPython_description(self *C.QsciLexerPython, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerPython) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPython_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPython) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerPython_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_paper
func miqt_exec_callback_QsciLexerPython_paper(self *C.QsciLexerPython, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPython) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPython_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPython) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerPython_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_defaultColorWithStyle
func miqt_exec_callback_QsciLexerPython_defaultColorWithStyle(self *C.QsciLexerPython, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPython) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerPython_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerPython) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerPython_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_defaultEolFill
func miqt_exec_callback_QsciLexerPython_defaultEolFill(self *C.QsciLexerPython, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerPython_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPython) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerPython_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_defaultFontWithStyle
func miqt_exec_callback_QsciLexerPython_defaultFontWithStyle(self *C.QsciLexerPython, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPython) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPython_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPython) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerPython_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerPython_defaultPaperWithStyle(self *C.QsciLexerPython, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPython) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerPython_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerPython) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerPython_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setEditor
func miqt_exec_callback_QsciLexerPython_setEditor(self *C.QsciLexerPython, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_RefreshProperties() {

	C.QsciLexerPython_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerPython) OnRefreshProperties(slot func(super func())) {
	ok := C.QsciLexerPython_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_refreshProperties
func miqt_exec_callback_QsciLexerPython_refreshProperties(self *C.QsciLexerPython, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerPython) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerPython_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPython) OnStyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerPython_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_styleBitsNeeded
func miqt_exec_callback_QsciLexerPython_styleBitsNeeded(self *C.QsciLexerPython, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerPython_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPython) OnWordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerPython_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_wordCharacters
func miqt_exec_callback_QsciLexerPython_wordCharacters(self *C.QsciLexerPython, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPython) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerPython_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerPython) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerPython_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setAutoIndentStyle
func miqt_exec_callback_QsciLexerPython_setAutoIndentStyle(self *C.QsciLexerPython, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerPython_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPython) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerPython_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setColor
func miqt_exec_callback_QsciLexerPython_setColor(self *C.QsciLexerPython, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerPython) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerPython_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerPython) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerPython_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setEolFill
func miqt_exec_callback_QsciLexerPython_setEolFill(self *C.QsciLexerPython, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerPython) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerPython_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPython) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	ok := C.QsciLexerPython_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setFont
func miqt_exec_callback_QsciLexerPython_setFont(self *C.QsciLexerPython, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerPython) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerPython_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPython) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerPython_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_setPaper
func miqt_exec_callback_QsciLexerPython_setPaper(self *C.QsciLexerPython, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerPython) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerPython_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerPython) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerPython_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_readProperties
func miqt_exec_callback_QsciLexerPython_readProperties(self *C.QsciLexerPython, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerPython_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerPython) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerPython_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_writeProperties
func miqt_exec_callback_QsciLexerPython_writeProperties(self *C.QsciLexerPython, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QsciLexerPython_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerPython) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QsciLexerPython_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_event
func miqt_exec_callback_QsciLexerPython_event(self *C.QsciLexerPython, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciLexerPython_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerPython) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QsciLexerPython_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_eventFilter
func miqt_exec_callback_QsciLexerPython_eventFilter(self *C.QsciLexerPython, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerPython{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPython) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciLexerPython_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerPython) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QsciLexerPython_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_timerEvent
func miqt_exec_callback_QsciLexerPython_timerEvent(self *C.QsciLexerPython, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciLexerPython_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerPython) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QsciLexerPython_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_childEvent
func miqt_exec_callback_QsciLexerPython_childEvent(self *C.QsciLexerPython, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciLexerPython_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerPython) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QsciLexerPython_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_customEvent
func miqt_exec_callback_QsciLexerPython_customEvent(self *C.QsciLexerPython, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerPython_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerPython) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerPython_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_connectNotify
func miqt_exec_callback_QsciLexerPython_connectNotify(self *C.QsciLexerPython, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerPython) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerPython_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerPython) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerPython_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPython_disconnectNotify
func miqt_exec_callback_QsciLexerPython_disconnectNotify(self *C.QsciLexerPython, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerPython{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerPython) Delete() {
	C.QsciLexerPython_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPython) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPython) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

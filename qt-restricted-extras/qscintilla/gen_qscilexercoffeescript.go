package qscintilla

/*

#include "gen_qscilexercoffeescript.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerCoffeeScript__ int

const (
	QsciLexerCoffeeScript__Default                QsciLexerCoffeeScript__ = 0
	QsciLexerCoffeeScript__Comment                QsciLexerCoffeeScript__ = 1
	QsciLexerCoffeeScript__CommentLine            QsciLexerCoffeeScript__ = 2
	QsciLexerCoffeeScript__CommentDoc             QsciLexerCoffeeScript__ = 3
	QsciLexerCoffeeScript__Number                 QsciLexerCoffeeScript__ = 4
	QsciLexerCoffeeScript__Keyword                QsciLexerCoffeeScript__ = 5
	QsciLexerCoffeeScript__DoubleQuotedString     QsciLexerCoffeeScript__ = 6
	QsciLexerCoffeeScript__SingleQuotedString     QsciLexerCoffeeScript__ = 7
	QsciLexerCoffeeScript__UUID                   QsciLexerCoffeeScript__ = 8
	QsciLexerCoffeeScript__PreProcessor           QsciLexerCoffeeScript__ = 9
	QsciLexerCoffeeScript__Operator               QsciLexerCoffeeScript__ = 10
	QsciLexerCoffeeScript__Identifier             QsciLexerCoffeeScript__ = 11
	QsciLexerCoffeeScript__UnclosedString         QsciLexerCoffeeScript__ = 12
	QsciLexerCoffeeScript__VerbatimString         QsciLexerCoffeeScript__ = 13
	QsciLexerCoffeeScript__Regex                  QsciLexerCoffeeScript__ = 14
	QsciLexerCoffeeScript__CommentLineDoc         QsciLexerCoffeeScript__ = 15
	QsciLexerCoffeeScript__KeywordSet2            QsciLexerCoffeeScript__ = 16
	QsciLexerCoffeeScript__CommentDocKeyword      QsciLexerCoffeeScript__ = 17
	QsciLexerCoffeeScript__CommentDocKeywordError QsciLexerCoffeeScript__ = 18
	QsciLexerCoffeeScript__GlobalClass            QsciLexerCoffeeScript__ = 19
	QsciLexerCoffeeScript__CommentBlock           QsciLexerCoffeeScript__ = 22
	QsciLexerCoffeeScript__BlockRegex             QsciLexerCoffeeScript__ = 23
	QsciLexerCoffeeScript__BlockRegexComment      QsciLexerCoffeeScript__ = 24
	QsciLexerCoffeeScript__InstanceProperty       QsciLexerCoffeeScript__ = 25
)

type QsciLexerCoffeeScript struct {
	h *C.QsciLexerCoffeeScript
	*QsciLexer
}

func (this *QsciLexerCoffeeScript) cPointer() *C.QsciLexerCoffeeScript {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCoffeeScript) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerCoffeeScript constructs the type using only CGO pointers.
func newQsciLexerCoffeeScript(h *C.QsciLexerCoffeeScript) *QsciLexerCoffeeScript {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerCoffeeScript_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerCoffeeScript{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerCoffeeScript constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerCoffeeScript(h unsafe.Pointer) *QsciLexerCoffeeScript {
	return newQsciLexerCoffeeScript((*C.QsciLexerCoffeeScript)(h))
}

// NewQsciLexerCoffeeScript constructs a new QsciLexerCoffeeScript object.
func NewQsciLexerCoffeeScript() *QsciLexerCoffeeScript {

	return newQsciLexerCoffeeScript(C.QsciLexerCoffeeScript_new())
}

// NewQsciLexerCoffeeScript2 constructs a new QsciLexerCoffeeScript object.
func NewQsciLexerCoffeeScript2(parent *qt.QObject) *QsciLexerCoffeeScript {

	return newQsciLexerCoffeeScript(C.QsciLexerCoffeeScript_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerCoffeeScript) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCoffeeScript_metaObject(this.h)))
}

func (this *QsciLexerCoffeeScript) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCoffeeScript_metacast(this.h, param1_Cstring))
}

func QsciLexerCoffeeScript_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCoffeeScript) Language() string {
	_ret := C.QsciLexerCoffeeScript_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) Lexer() string {
	_ret := C.QsciLexerCoffeeScript_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerCoffeeScript_autoCompletionWordSeparators(this.h)
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

func (this *QsciLexerCoffeeScript) BlockEnd() string {
	_ret := C.QsciLexerCoffeeScript_blockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStart() string {
	_ret := C.QsciLexerCoffeeScript_blockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStartKeyword() string {
	_ret := C.QsciLexerCoffeeScript_blockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BraceStyle() int {
	return (int)(C.QsciLexerCoffeeScript_braceStyle(this.h))
}

func (this *QsciLexerCoffeeScript) WordCharacters() string {
	_ret := C.QsciLexerCoffeeScript_wordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCoffeeScript_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCoffeeScript) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerCoffeeScript_defaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerCoffeeScript) DefaultFont(style int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerCoffeeScript_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCoffeeScript) DefaultPaper(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCoffeeScript_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCoffeeScript) Keywords(set int) string {
	_ret := C.QsciLexerCoffeeScript_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCoffeeScript) RefreshProperties() {
	C.QsciLexerCoffeeScript_refreshProperties(this.h)
}

func (this *QsciLexerCoffeeScript) DollarsAllowed() bool {
	return (bool)(C.QsciLexerCoffeeScript_dollarsAllowed(this.h))
}

func (this *QsciLexerCoffeeScript) SetDollarsAllowed(allowed bool) {
	C.QsciLexerCoffeeScript_setDollarsAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerCoffeeScript) FoldComments() bool {
	return (bool)(C.QsciLexerCoffeeScript_foldComments(this.h))
}

func (this *QsciLexerCoffeeScript) SetFoldComments(fold bool) {
	C.QsciLexerCoffeeScript_setFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerCoffeeScript) FoldCompact() bool {
	return (bool)(C.QsciLexerCoffeeScript_foldCompact(this.h))
}

func (this *QsciLexerCoffeeScript) SetFoldCompact(fold bool) {
	C.QsciLexerCoffeeScript_setFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerCoffeeScript) StylePreprocessor() bool {
	return (bool)(C.QsciLexerCoffeeScript_stylePreprocessor(this.h))
}

func (this *QsciLexerCoffeeScript) SetStylePreprocessor(style bool) {
	C.QsciLexerCoffeeScript_setStylePreprocessor(this.h, (C.bool)(style))
}

func QsciLexerCoffeeScript_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCoffeeScript) BlockEnd1(style *int) string {
	_ret := C.QsciLexerCoffeeScript_blockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStart1(style *int) string {
	_ret := C.QsciLexerCoffeeScript_blockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerCoffeeScript_blockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}
func (this *QsciLexerCoffeeScript) Onlanguage(slot func() string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_language
func miqt_exec_callback_QsciLexerCoffeeScript_language(self *C.QsciLexerCoffeeScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerCoffeeScript_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCoffeeScript) Onlexer(slot func(super func() string) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_lexer
func miqt_exec_callback_QsciLexerCoffeeScript_lexer(self *C.QsciLexerCoffeeScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerCoffeeScript_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCoffeeScript) OnlexerId(slot func(super func() int) int) {
	ok := C.QsciLexerCoffeeScript_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_lexerId
func miqt_exec_callback_QsciLexerCoffeeScript_lexerId(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerCoffeeScript_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCoffeeScript) OnautoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_autoCompletionFillups
func miqt_exec_callback_QsciLexerCoffeeScript_autoCompletionFillups(self *C.QsciLexerCoffeeScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerCoffeeScript_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerCoffeeScript) OnautoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerCoffeeScript_autoCompletionWordSeparators(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerCoffeeScript) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerCoffeeScript_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCoffeeScript) OnblockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_blockEnd
func miqt_exec_callback_QsciLexerCoffeeScript_blockEnd(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerCoffeeScript_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCoffeeScript) OnblockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerCoffeeScript_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_blockLookback
func miqt_exec_callback_QsciLexerCoffeeScript_blockLookback(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerCoffeeScript_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCoffeeScript) OnblockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_blockStart
func miqt_exec_callback_QsciLexerCoffeeScript_blockStart(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerCoffeeScript_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCoffeeScript) OnblockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_blockStartKeyword
func miqt_exec_callback_QsciLexerCoffeeScript_blockStartKeyword(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerCoffeeScript_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCoffeeScript) OnbraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerCoffeeScript_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_braceStyle
func miqt_exec_callback_QsciLexerCoffeeScript_braceStyle(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerCoffeeScript_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCoffeeScript) OncaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerCoffeeScript_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_caseSensitive
func miqt_exec_callback_QsciLexerCoffeeScript_caseSensitive(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCoffeeScript_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCoffeeScript) Oncolor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCoffeeScript_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_color
func miqt_exec_callback_QsciLexerCoffeeScript_color(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCoffeeScript) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerCoffeeScript_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCoffeeScript) OneolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerCoffeeScript_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_eolFill
func miqt_exec_callback_QsciLexerCoffeeScript_eolFill(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerCoffeeScript_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCoffeeScript) Onfont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerCoffeeScript_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_font
func miqt_exec_callback_QsciLexerCoffeeScript_font(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCoffeeScript) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerCoffeeScript_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCoffeeScript) OnindentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerCoffeeScript_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_indentationGuideView
func miqt_exec_callback_QsciLexerCoffeeScript_indentationGuideView(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerCoffeeScript_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerCoffeeScript) Onkeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_keywords
func miqt_exec_callback_QsciLexerCoffeeScript_keywords(self *C.QsciLexerCoffeeScript, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerCoffeeScript_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCoffeeScript) OndefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerCoffeeScript_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_defaultStyle
func miqt_exec_callback_QsciLexerCoffeeScript_defaultStyle(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerCoffeeScript) Ondescription(slot func(style int) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_description
func miqt_exec_callback_QsciLexerCoffeeScript_description(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerCoffeeScript) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCoffeeScript_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCoffeeScript) Onpaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCoffeeScript_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_paper
func miqt_exec_callback_QsciLexerCoffeeScript_paper(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCoffeeScript) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCoffeeScript_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCoffeeScript) OndefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCoffeeScript_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_defaultColorWithStyle
func miqt_exec_callback_QsciLexerCoffeeScript_defaultColorWithStyle(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCoffeeScript) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerCoffeeScript_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCoffeeScript) OndefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerCoffeeScript_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_defaultEolFill
func miqt_exec_callback_QsciLexerCoffeeScript_defaultEolFill(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerCoffeeScript_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCoffeeScript) OndefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerCoffeeScript_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_defaultFontWithStyle
func miqt_exec_callback_QsciLexerCoffeeScript_defaultFontWithStyle(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCoffeeScript) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerCoffeeScript_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCoffeeScript) OndefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerCoffeeScript_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerCoffeeScript_defaultPaperWithStyle(self *C.QsciLexerCoffeeScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCoffeeScript) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerCoffeeScript_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerCoffeeScript) OnsetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_setEditor
func miqt_exec_callback_QsciLexerCoffeeScript_setEditor(self *C.QsciLexerCoffeeScript, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_RefreshProperties() {

	C.QsciLexerCoffeeScript_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerCoffeeScript) OnrefreshProperties(slot func(super func())) {
	ok := C.QsciLexerCoffeeScript_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_refreshProperties
func miqt_exec_callback_QsciLexerCoffeeScript_refreshProperties(self *C.QsciLexerCoffeeScript, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerCoffeeScript_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCoffeeScript) OnstyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerCoffeeScript_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_styleBitsNeeded
func miqt_exec_callback_QsciLexerCoffeeScript_styleBitsNeeded(self *C.QsciLexerCoffeeScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerCoffeeScript_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCoffeeScript) OnwordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerCoffeeScript_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_wordCharacters
func miqt_exec_callback_QsciLexerCoffeeScript_wordCharacters(self *C.QsciLexerCoffeeScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCoffeeScript) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerCoffeeScript_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerCoffeeScript) OnsetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_setAutoIndentStyle
func miqt_exec_callback_QsciLexerCoffeeScript_setAutoIndentStyle(self *C.QsciLexerCoffeeScript, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerCoffeeScript_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCoffeeScript) OnsetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_setColor
func miqt_exec_callback_QsciLexerCoffeeScript_setColor(self *C.QsciLexerCoffeeScript, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerCoffeeScript_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerCoffeeScript) OnsetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_setEolFill
func miqt_exec_callback_QsciLexerCoffeeScript_setEolFill(self *C.QsciLexerCoffeeScript, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerCoffeeScript_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCoffeeScript) OnsetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_setFont
func miqt_exec_callback_QsciLexerCoffeeScript_setFont(self *C.QsciLexerCoffeeScript, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerCoffeeScript_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCoffeeScript) OnsetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_setPaper
func miqt_exec_callback_QsciLexerCoffeeScript_setPaper(self *C.QsciLexerCoffeeScript, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCoffeeScript_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCoffeeScript) OnreadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerCoffeeScript_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_readProperties
func miqt_exec_callback_QsciLexerCoffeeScript_readProperties(self *C.QsciLexerCoffeeScript, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCoffeeScript_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCoffeeScript) OnwriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerCoffeeScript_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_writeProperties
func miqt_exec_callback_QsciLexerCoffeeScript_writeProperties(self *C.QsciLexerCoffeeScript, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QsciLexerCoffeeScript_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerCoffeeScript) Onevent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QsciLexerCoffeeScript_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_event
func miqt_exec_callback_QsciLexerCoffeeScript_event(self *C.QsciLexerCoffeeScript, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciLexerCoffeeScript_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerCoffeeScript) OneventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QsciLexerCoffeeScript_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_eventFilter
func miqt_exec_callback_QsciLexerCoffeeScript_eventFilter(self *C.QsciLexerCoffeeScript, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciLexerCoffeeScript_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerCoffeeScript) OntimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_timerEvent
func miqt_exec_callback_QsciLexerCoffeeScript_timerEvent(self *C.QsciLexerCoffeeScript, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciLexerCoffeeScript_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerCoffeeScript) OnchildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_childEvent
func miqt_exec_callback_QsciLexerCoffeeScript_childEvent(self *C.QsciLexerCoffeeScript, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciLexerCoffeeScript_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerCoffeeScript) OncustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_customEvent
func miqt_exec_callback_QsciLexerCoffeeScript_customEvent(self *C.QsciLexerCoffeeScript, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerCoffeeScript_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerCoffeeScript) OnconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_connectNotify
func miqt_exec_callback_QsciLexerCoffeeScript_connectNotify(self *C.QsciLexerCoffeeScript, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerCoffeeScript) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerCoffeeScript_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerCoffeeScript) OndisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerCoffeeScript_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerCoffeeScript_disconnectNotify
func miqt_exec_callback_QsciLexerCoffeeScript_disconnectNotify(self *C.QsciLexerCoffeeScript, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerCoffeeScript{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerCoffeeScript) Delete() {
	C.QsciLexerCoffeeScript_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCoffeeScript) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCoffeeScript) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

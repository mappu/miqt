package qscintilla

/*

#include "gen_qscilexerpostscript.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerPostScript__ int

const (
	QsciLexerPostScript__Default               QsciLexerPostScript__ = 0
	QsciLexerPostScript__Comment               QsciLexerPostScript__ = 1
	QsciLexerPostScript__DSCComment            QsciLexerPostScript__ = 2
	QsciLexerPostScript__DSCCommentValue       QsciLexerPostScript__ = 3
	QsciLexerPostScript__Number                QsciLexerPostScript__ = 4
	QsciLexerPostScript__Name                  QsciLexerPostScript__ = 5
	QsciLexerPostScript__Keyword               QsciLexerPostScript__ = 6
	QsciLexerPostScript__Literal               QsciLexerPostScript__ = 7
	QsciLexerPostScript__ImmediateEvalLiteral  QsciLexerPostScript__ = 8
	QsciLexerPostScript__ArrayParenthesis      QsciLexerPostScript__ = 9
	QsciLexerPostScript__DictionaryParenthesis QsciLexerPostScript__ = 10
	QsciLexerPostScript__ProcedureParenthesis  QsciLexerPostScript__ = 11
	QsciLexerPostScript__Text                  QsciLexerPostScript__ = 12
	QsciLexerPostScript__HexString             QsciLexerPostScript__ = 13
	QsciLexerPostScript__Base85String          QsciLexerPostScript__ = 14
	QsciLexerPostScript__BadStringCharacter    QsciLexerPostScript__ = 15
)

type QsciLexerPostScript struct {
	h          *C.QsciLexerPostScript
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerPostScript) cPointer() *C.QsciLexerPostScript {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPostScript) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerPostScript constructs the type using only CGO pointers.
func newQsciLexerPostScript(h *C.QsciLexerPostScript, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerPostScript {
	if h == nil {
		return nil
	}
	return &QsciLexerPostScript{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerPostScript constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerPostScript(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerPostScript {
	if h == nil {
		return nil
	}

	return &QsciLexerPostScript{h: (*C.QsciLexerPostScript)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerPostScript constructs a new QsciLexerPostScript object.
func NewQsciLexerPostScript() *QsciLexerPostScript {
	var outptr_QsciLexerPostScript *C.QsciLexerPostScript = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerPostScript_new(&outptr_QsciLexerPostScript, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerPostScript(outptr_QsciLexerPostScript, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerPostScript2 constructs a new QsciLexerPostScript object.
func NewQsciLexerPostScript2(parent *qt.QObject) *QsciLexerPostScript {
	var outptr_QsciLexerPostScript *C.QsciLexerPostScript = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerPostScript_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerPostScript, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerPostScript(outptr_QsciLexerPostScript, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerPostScript) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPostScript_MetaObject(this.h)))
}

func (this *QsciLexerPostScript) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPostScript_Metacast(this.h, param1_Cstring))
}

func QsciLexerPostScript_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPostScript) Language() string {
	_ret := C.QsciLexerPostScript_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPostScript) Lexer() string {
	_ret := C.QsciLexerPostScript_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPostScript) BraceStyle() int {
	return (int)(C.QsciLexerPostScript_BraceStyle(this.h))
}

func (this *QsciLexerPostScript) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerPostScript_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPostScript) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerPostScript_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPostScript) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerPostScript_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPostScript) Keywords(set int) string {
	_ret := C.QsciLexerPostScript_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPostScript) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPostScript) RefreshProperties() {
	C.QsciLexerPostScript_RefreshProperties(this.h)
}

func (this *QsciLexerPostScript) Tokenize() bool {
	return (bool)(C.QsciLexerPostScript_Tokenize(this.h))
}

func (this *QsciLexerPostScript) Level() int {
	return (int)(C.QsciLexerPostScript_Level(this.h))
}

func (this *QsciLexerPostScript) FoldCompact() bool {
	return (bool)(C.QsciLexerPostScript_FoldCompact(this.h))
}

func (this *QsciLexerPostScript) FoldAtElse() bool {
	return (bool)(C.QsciLexerPostScript_FoldAtElse(this.h))
}

func (this *QsciLexerPostScript) SetTokenize(tokenize bool) {
	C.QsciLexerPostScript_SetTokenize(this.h, (C.bool)(tokenize))
}

func (this *QsciLexerPostScript) SetLevel(level int) {
	C.QsciLexerPostScript_SetLevel(this.h, (C.int)(level))
}

func (this *QsciLexerPostScript) SetFoldCompact(fold bool) {
	C.QsciLexerPostScript_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerPostScript) SetFoldAtElse(fold bool) {
	C.QsciLexerPostScript_SetFoldAtElse(this.h, (C.bool)(fold))
}

func QsciLexerPostScript_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPostScript_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPostScript_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPostScript) callVirtualBase_SetTokenize(tokenize bool) {

	C.QsciLexerPostScript_virtualbase_SetTokenize(unsafe.Pointer(this.h), (C.bool)(tokenize))

}
func (this *QsciLexerPostScript) OnSetTokenize(slot func(super func(tokenize bool), tokenize bool)) {
	C.QsciLexerPostScript_override_virtual_SetTokenize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetTokenize
func miqt_exec_callback_QsciLexerPostScript_SetTokenize(self *C.QsciLexerPostScript, cb C.intptr_t, tokenize C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tokenize bool), tokenize bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(tokenize)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetTokenize, slotval1)

}

func (this *QsciLexerPostScript) callVirtualBase_SetLevel(level int) {

	C.QsciLexerPostScript_virtualbase_SetLevel(unsafe.Pointer(this.h), (C.int)(level))

}
func (this *QsciLexerPostScript) OnSetLevel(slot func(super func(level int), level int)) {
	C.QsciLexerPostScript_override_virtual_SetLevel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetLevel
func miqt_exec_callback_QsciLexerPostScript_SetLevel(self *C.QsciLexerPostScript, cb C.intptr_t, level C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(level int), level int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(level)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetLevel, slotval1)

}

func (this *QsciLexerPostScript) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerPostScript_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerPostScript) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerPostScript_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetFoldCompact
func miqt_exec_callback_QsciLexerPostScript_SetFoldCompact(self *C.QsciLexerPostScript, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerPostScript) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerPostScript_virtualbase_SetFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerPostScript) OnSetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerPostScript_override_virtual_SetFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetFoldAtElse
func miqt_exec_callback_QsciLexerPostScript_SetFoldAtElse(self *C.QsciLexerPostScript, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}
func (this *QsciLexerPostScript) OnLanguage(slot func() string) {
	C.QsciLexerPostScript_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_Language
func miqt_exec_callback_QsciLexerPostScript_Language(self *C.QsciLexerPostScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerPostScript_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPostScript) OnLexer(slot func(super func() string) string) {
	C.QsciLexerPostScript_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_Lexer
func miqt_exec_callback_QsciLexerPostScript_Lexer(self *C.QsciLexerPostScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerPostScript_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPostScript) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerPostScript_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_LexerId
func miqt_exec_callback_QsciLexerPostScript_LexerId(self *C.QsciLexerPostScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerPostScript_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPostScript) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerPostScript_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_AutoCompletionFillups
func miqt_exec_callback_QsciLexerPostScript_AutoCompletionFillups(self *C.QsciLexerPostScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerPostScript_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerPostScript) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerPostScript_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerPostScript_AutoCompletionWordSeparators(self *C.QsciLexerPostScript, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerPostScript) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerPostScript_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPostScript) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerPostScript_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_BlockEnd
func miqt_exec_callback_QsciLexerPostScript_BlockEnd(self *C.QsciLexerPostScript, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerPostScript_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPostScript) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerPostScript_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_BlockLookback
func miqt_exec_callback_QsciLexerPostScript_BlockLookback(self *C.QsciLexerPostScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerPostScript_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPostScript) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerPostScript_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_BlockStart
func miqt_exec_callback_QsciLexerPostScript_BlockStart(self *C.QsciLexerPostScript, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerPostScript_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPostScript) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerPostScript_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_BlockStartKeyword
func miqt_exec_callback_QsciLexerPostScript_BlockStartKeyword(self *C.QsciLexerPostScript, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerPostScript_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPostScript) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerPostScript_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_BraceStyle
func miqt_exec_callback_QsciLexerPostScript_BraceStyle(self *C.QsciLexerPostScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerPostScript_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPostScript) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerPostScript_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_CaseSensitive
func miqt_exec_callback_QsciLexerPostScript_CaseSensitive(self *C.QsciLexerPostScript, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexerPostScript_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPostScript) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerPostScript_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_Color
func miqt_exec_callback_QsciLexerPostScript_Color(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPostScript) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerPostScript_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerPostScript) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerPostScript_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_EolFill
func miqt_exec_callback_QsciLexerPostScript_EolFill(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexerPostScript_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPostScript) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerPostScript_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_Font
func miqt_exec_callback_QsciLexerPostScript_Font(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPostScript) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerPostScript_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPostScript) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerPostScript_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_IndentationGuideView
func miqt_exec_callback_QsciLexerPostScript_IndentationGuideView(self *C.QsciLexerPostScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerPostScript_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerPostScript) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerPostScript_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_Keywords
func miqt_exec_callback_QsciLexerPostScript_Keywords(self *C.QsciLexerPostScript, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerPostScript_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPostScript) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerPostScript_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_DefaultStyle
func miqt_exec_callback_QsciLexerPostScript_DefaultStyle(self *C.QsciLexerPostScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerPostScript) OnDescription(slot func(style int) string) {
	C.QsciLexerPostScript_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_Description
func miqt_exec_callback_QsciLexerPostScript_Description(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerPostScript) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexerPostScript_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPostScript) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerPostScript_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_Paper
func miqt_exec_callback_QsciLexerPostScript_Paper(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPostScript) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerPostScript_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPostScript) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerPostScript_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerPostScript_DefaultColorWithStyle(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPostScript) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerPostScript_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerPostScript) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerPostScript_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_DefaultEolFill
func miqt_exec_callback_QsciLexerPostScript_DefaultEolFill(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexerPostScript_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPostScript) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerPostScript_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerPostScript_DefaultFontWithStyle(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPostScript) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerPostScript_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPostScript) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerPostScript_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerPostScript_DefaultPaperWithStyle(self *C.QsciLexerPostScript, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPostScript) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerPostScript_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerPostScript) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerPostScript_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetEditor
func miqt_exec_callback_QsciLexerPostScript_SetEditor(self *C.QsciLexerPostScript, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerPostScript) callVirtualBase_RefreshProperties() {

	C.QsciLexerPostScript_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerPostScript) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerPostScript_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_RefreshProperties
func miqt_exec_callback_QsciLexerPostScript_RefreshProperties(self *C.QsciLexerPostScript, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerPostScript) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerPostScript_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPostScript) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerPostScript_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_StyleBitsNeeded
func miqt_exec_callback_QsciLexerPostScript_StyleBitsNeeded(self *C.QsciLexerPostScript, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerPostScript_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPostScript) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerPostScript_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_WordCharacters
func miqt_exec_callback_QsciLexerPostScript_WordCharacters(self *C.QsciLexerPostScript, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPostScript) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerPostScript_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerPostScript) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerPostScript_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerPostScript_SetAutoIndentStyle(self *C.QsciLexerPostScript, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerPostScript) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerPostScript_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPostScript) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerPostScript_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetColor
func miqt_exec_callback_QsciLexerPostScript_SetColor(self *C.QsciLexerPostScript, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerPostScript) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerPostScript_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerPostScript) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerPostScript_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetEolFill
func miqt_exec_callback_QsciLexerPostScript_SetEolFill(self *C.QsciLexerPostScript, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerPostScript) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerPostScript_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPostScript) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	C.QsciLexerPostScript_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetFont
func miqt_exec_callback_QsciLexerPostScript_SetFont(self *C.QsciLexerPostScript, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerPostScript) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerPostScript_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPostScript) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerPostScript_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_SetPaper
func miqt_exec_callback_QsciLexerPostScript_SetPaper(self *C.QsciLexerPostScript, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerPostScript) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerPostScript_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerPostScript) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerPostScript_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_ReadProperties
func miqt_exec_callback_QsciLexerPostScript_ReadProperties(self *C.QsciLexerPostScript, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPostScript) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerPostScript_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerPostScript) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerPostScript_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerPostScript_WriteProperties
func miqt_exec_callback_QsciLexerPostScript_WriteProperties(self *C.QsciLexerPostScript, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerPostScript{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerPostScript) Delete() {
	C.QsciLexerPostScript_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPostScript) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPostScript) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

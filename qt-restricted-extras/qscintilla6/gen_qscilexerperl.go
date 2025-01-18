package qscintilla6

/*

#include "gen_qscilexerperl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerPerl__ int

const (
	QsciLexerPerl__Default                     QsciLexerPerl__ = 0
	QsciLexerPerl__Error                       QsciLexerPerl__ = 1
	QsciLexerPerl__Comment                     QsciLexerPerl__ = 2
	QsciLexerPerl__POD                         QsciLexerPerl__ = 3
	QsciLexerPerl__Number                      QsciLexerPerl__ = 4
	QsciLexerPerl__Keyword                     QsciLexerPerl__ = 5
	QsciLexerPerl__DoubleQuotedString          QsciLexerPerl__ = 6
	QsciLexerPerl__SingleQuotedString          QsciLexerPerl__ = 7
	QsciLexerPerl__Operator                    QsciLexerPerl__ = 10
	QsciLexerPerl__Identifier                  QsciLexerPerl__ = 11
	QsciLexerPerl__Scalar                      QsciLexerPerl__ = 12
	QsciLexerPerl__Array                       QsciLexerPerl__ = 13
	QsciLexerPerl__Hash                        QsciLexerPerl__ = 14
	QsciLexerPerl__SymbolTable                 QsciLexerPerl__ = 15
	QsciLexerPerl__Regex                       QsciLexerPerl__ = 17
	QsciLexerPerl__Substitution                QsciLexerPerl__ = 18
	QsciLexerPerl__Backticks                   QsciLexerPerl__ = 20
	QsciLexerPerl__DataSection                 QsciLexerPerl__ = 21
	QsciLexerPerl__HereDocumentDelimiter       QsciLexerPerl__ = 22
	QsciLexerPerl__SingleQuotedHereDocument    QsciLexerPerl__ = 23
	QsciLexerPerl__DoubleQuotedHereDocument    QsciLexerPerl__ = 24
	QsciLexerPerl__BacktickHereDocument        QsciLexerPerl__ = 25
	QsciLexerPerl__QuotedStringQ               QsciLexerPerl__ = 26
	QsciLexerPerl__QuotedStringQQ              QsciLexerPerl__ = 27
	QsciLexerPerl__QuotedStringQX              QsciLexerPerl__ = 28
	QsciLexerPerl__QuotedStringQR              QsciLexerPerl__ = 29
	QsciLexerPerl__QuotedStringQW              QsciLexerPerl__ = 30
	QsciLexerPerl__PODVerbatim                 QsciLexerPerl__ = 31
	QsciLexerPerl__SubroutinePrototype         QsciLexerPerl__ = 40
	QsciLexerPerl__FormatIdentifier            QsciLexerPerl__ = 41
	QsciLexerPerl__FormatBody                  QsciLexerPerl__ = 42
	QsciLexerPerl__DoubleQuotedStringVar       QsciLexerPerl__ = 43
	QsciLexerPerl__Translation                 QsciLexerPerl__ = 44
	QsciLexerPerl__RegexVar                    QsciLexerPerl__ = 54
	QsciLexerPerl__SubstitutionVar             QsciLexerPerl__ = 55
	QsciLexerPerl__BackticksVar                QsciLexerPerl__ = 57
	QsciLexerPerl__DoubleQuotedHereDocumentVar QsciLexerPerl__ = 61
	QsciLexerPerl__BacktickHereDocumentVar     QsciLexerPerl__ = 62
	QsciLexerPerl__QuotedStringQQVar           QsciLexerPerl__ = 64
	QsciLexerPerl__QuotedStringQXVar           QsciLexerPerl__ = 65
	QsciLexerPerl__QuotedStringQRVar           QsciLexerPerl__ = 66
)

type QsciLexerPerl struct {
	h *C.QsciLexerPerl
	*QsciLexer
}

func (this *QsciLexerPerl) cPointer() *C.QsciLexerPerl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPerl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerPerl constructs the type using only CGO pointers.
func newQsciLexerPerl(h *C.QsciLexerPerl) *QsciLexerPerl {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerPerl_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerPerl{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerPerl constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerPerl(h unsafe.Pointer) *QsciLexerPerl {
	return newQsciLexerPerl((*C.QsciLexerPerl)(h))
}

// NewQsciLexerPerl constructs a new QsciLexerPerl object.
func NewQsciLexerPerl() *QsciLexerPerl {

	return newQsciLexerPerl(C.QsciLexerPerl_new())
}

// NewQsciLexerPerl2 constructs a new QsciLexerPerl object.
func NewQsciLexerPerl2(parent *qt6.QObject) *QsciLexerPerl {

	return newQsciLexerPerl(C.QsciLexerPerl_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerPerl) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPerl_MetaObject(this.h)))
}

func (this *QsciLexerPerl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPerl_Metacast(this.h, param1_Cstring))
}

func QsciLexerPerl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPerl) Language() string {
	_ret := C.QsciLexerPerl_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) Lexer() string {
	_ret := C.QsciLexerPerl_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerPerl_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerPerl) BlockEnd() string {
	_ret := C.QsciLexerPerl_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) BlockStart() string {
	_ret := C.QsciLexerPerl_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) BraceStyle() int {
	return (int)(C.QsciLexerPerl_BraceStyle(this.h))
}

func (this *QsciLexerPerl) WordCharacters() string {
	_ret := C.QsciLexerPerl_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) DefaultColor(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPerl_DefaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPerl) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerPerl_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerPerl) DefaultFont(style int) *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerPerl_DefaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPerl) DefaultPaper(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPerl_DefaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPerl) Keywords(set int) string {
	_ret := C.QsciLexerPerl_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPerl) RefreshProperties() {
	C.QsciLexerPerl_RefreshProperties(this.h)
}

func (this *QsciLexerPerl) SetFoldAtElse(fold bool) {
	C.QsciLexerPerl_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) FoldAtElse() bool {
	return (bool)(C.QsciLexerPerl_FoldAtElse(this.h))
}

func (this *QsciLexerPerl) FoldComments() bool {
	return (bool)(C.QsciLexerPerl_FoldComments(this.h))
}

func (this *QsciLexerPerl) FoldCompact() bool {
	return (bool)(C.QsciLexerPerl_FoldCompact(this.h))
}

func (this *QsciLexerPerl) SetFoldPackages(fold bool) {
	C.QsciLexerPerl_SetFoldPackages(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) FoldPackages() bool {
	return (bool)(C.QsciLexerPerl_FoldPackages(this.h))
}

func (this *QsciLexerPerl) SetFoldPODBlocks(fold bool) {
	C.QsciLexerPerl_SetFoldPODBlocks(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) FoldPODBlocks() bool {
	return (bool)(C.QsciLexerPerl_FoldPODBlocks(this.h))
}

func (this *QsciLexerPerl) SetFoldComments(fold bool) {
	C.QsciLexerPerl_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerPerl) SetFoldCompact(fold bool) {
	C.QsciLexerPerl_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerPerl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPerl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPerl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPerl) BlockEnd1(style *int) string {
	_ret := C.QsciLexerPerl_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) BlockStart1(style *int) string {
	_ret := C.QsciLexerPerl_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerPerl) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerPerl_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerPerl) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerPerl_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetFoldComments
func miqt_exec_callback_QsciLexerPerl_SetFoldComments(self *C.QsciLexerPerl, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerPerl) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerPerl_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerPerl) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerPerl_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetFoldCompact
func miqt_exec_callback_QsciLexerPerl_SetFoldCompact(self *C.QsciLexerPerl, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}
func (this *QsciLexerPerl) OnLanguage(slot func() string) {
	ok := C.QsciLexerPerl_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_Language
func miqt_exec_callback_QsciLexerPerl_Language(self *C.QsciLexerPerl, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerPerl_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPerl) OnLexer(slot func(super func() string) string) {
	ok := C.QsciLexerPerl_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_Lexer
func miqt_exec_callback_QsciLexerPerl_Lexer(self *C.QsciLexerPerl, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerPerl_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPerl) OnLexerId(slot func(super func() int) int) {
	ok := C.QsciLexerPerl_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_LexerId
func miqt_exec_callback_QsciLexerPerl_LexerId(self *C.QsciLexerPerl, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerPerl_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPerl) OnAutoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerPerl_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_AutoCompletionFillups
func miqt_exec_callback_QsciLexerPerl_AutoCompletionFillups(self *C.QsciLexerPerl, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerPerl_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerPerl) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerPerl_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerPerl_AutoCompletionWordSeparators(self *C.QsciLexerPerl, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerPerl) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerPerl_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPerl) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerPerl_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_BlockEnd
func miqt_exec_callback_QsciLexerPerl_BlockEnd(self *C.QsciLexerPerl, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerPerl_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPerl) OnBlockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerPerl_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_BlockLookback
func miqt_exec_callback_QsciLexerPerl_BlockLookback(self *C.QsciLexerPerl, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerPerl_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPerl) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerPerl_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_BlockStart
func miqt_exec_callback_QsciLexerPerl_BlockStart(self *C.QsciLexerPerl, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerPerl_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerPerl) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerPerl_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_BlockStartKeyword
func miqt_exec_callback_QsciLexerPerl_BlockStartKeyword(self *C.QsciLexerPerl, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerPerl_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPerl) OnBraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerPerl_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_BraceStyle
func miqt_exec_callback_QsciLexerPerl_BraceStyle(self *C.QsciLexerPerl, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerPerl_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPerl) OnCaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerPerl_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_CaseSensitive
func miqt_exec_callback_QsciLexerPerl_CaseSensitive(self *C.QsciLexerPerl, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_Color(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPerl_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPerl) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerPerl_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_Color
func miqt_exec_callback_QsciLexerPerl_Color(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPerl) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerPerl_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerPerl) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerPerl_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_EolFill
func miqt_exec_callback_QsciLexerPerl_EolFill(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_Font(style int) *qt6.QFont {

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerPerl_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPerl) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerPerl_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_Font
func miqt_exec_callback_QsciLexerPerl_Font(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPerl) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerPerl_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPerl) OnIndentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerPerl_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_IndentationGuideView
func miqt_exec_callback_QsciLexerPerl_IndentationGuideView(self *C.QsciLexerPerl, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerPerl_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerPerl) OnKeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerPerl_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_Keywords
func miqt_exec_callback_QsciLexerPerl_Keywords(self *C.QsciLexerPerl, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerPerl_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPerl) OnDefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerPerl_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_DefaultStyle
func miqt_exec_callback_QsciLexerPerl_DefaultStyle(self *C.QsciLexerPerl, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerPerl) OnDescription(slot func(style int) string) {
	ok := C.QsciLexerPerl_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_Description
func miqt_exec_callback_QsciLexerPerl_Description(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerPerl) callVirtualBase_Paper(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPerl_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPerl) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerPerl_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_Paper
func miqt_exec_callback_QsciLexerPerl_Paper(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPerl) callVirtualBase_DefaultColorWithStyle(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPerl_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPerl) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerPerl_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerPerl_DefaultColorWithStyle(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPerl) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerPerl_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerPerl) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerPerl_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_DefaultEolFill
func miqt_exec_callback_QsciLexerPerl_DefaultEolFill(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_DefaultFontWithStyle(style int) *qt6.QFont {

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerPerl_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPerl) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerPerl_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerPerl_DefaultFontWithStyle(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPerl) callVirtualBase_DefaultPaperWithStyle(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerPerl_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerPerl) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerPerl_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerPerl_DefaultPaperWithStyle(self *C.QsciLexerPerl, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerPerl) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerPerl_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerPerl) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerPerl_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetEditor
func miqt_exec_callback_QsciLexerPerl_SetEditor(self *C.QsciLexerPerl, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerPerl) callVirtualBase_RefreshProperties() {

	C.QsciLexerPerl_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerPerl) OnRefreshProperties(slot func(super func())) {
	ok := C.QsciLexerPerl_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_RefreshProperties
func miqt_exec_callback_QsciLexerPerl_RefreshProperties(self *C.QsciLexerPerl, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerPerl) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerPerl_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerPerl) OnStyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerPerl_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_StyleBitsNeeded
func miqt_exec_callback_QsciLexerPerl_StyleBitsNeeded(self *C.QsciLexerPerl, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerPerl_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerPerl) OnWordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerPerl_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_WordCharacters
func miqt_exec_callback_QsciLexerPerl_WordCharacters(self *C.QsciLexerPerl, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerPerl) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerPerl_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerPerl) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerPerl_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerPerl_SetAutoIndentStyle(self *C.QsciLexerPerl, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerPerl) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerPerl_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPerl) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerPerl_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetColor
func miqt_exec_callback_QsciLexerPerl_SetColor(self *C.QsciLexerPerl, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerPerl) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerPerl_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerPerl) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerPerl_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetEolFill
func miqt_exec_callback_QsciLexerPerl_SetEolFill(self *C.QsciLexerPerl, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerPerl) callVirtualBase_SetFont(f *qt6.QFont, style int) {

	C.QsciLexerPerl_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPerl) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	ok := C.QsciLexerPerl_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetFont
func miqt_exec_callback_QsciLexerPerl_SetFont(self *C.QsciLexerPerl, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerPerl) callVirtualBase_SetPaper(c *qt6.QColor, style int) {

	C.QsciLexerPerl_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerPerl) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerPerl_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_SetPaper
func miqt_exec_callback_QsciLexerPerl_SetPaper(self *C.QsciLexerPerl, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerPerl{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerPerl) callVirtualBase_ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerPerl_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerPerl) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerPerl_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_ReadProperties
func miqt_exec_callback_QsciLexerPerl_ReadProperties(self *C.QsciLexerPerl, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerPerl) callVirtualBase_WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerPerl_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerPerl) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerPerl_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerPerl_WriteProperties
func miqt_exec_callback_QsciLexerPerl_WriteProperties(self *C.QsciLexerPerl, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerPerl{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerPerl) Delete() {
	C.QsciLexerPerl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPerl) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPerl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

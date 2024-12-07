package qscintilla

/*

#include "gen_qscilexerbash.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerBash__ int

const (
	QsciLexerBash__Default                  QsciLexerBash__ = 0
	QsciLexerBash__Error                    QsciLexerBash__ = 1
	QsciLexerBash__Comment                  QsciLexerBash__ = 2
	QsciLexerBash__Number                   QsciLexerBash__ = 3
	QsciLexerBash__Keyword                  QsciLexerBash__ = 4
	QsciLexerBash__DoubleQuotedString       QsciLexerBash__ = 5
	QsciLexerBash__SingleQuotedString       QsciLexerBash__ = 6
	QsciLexerBash__Operator                 QsciLexerBash__ = 7
	QsciLexerBash__Identifier               QsciLexerBash__ = 8
	QsciLexerBash__Scalar                   QsciLexerBash__ = 9
	QsciLexerBash__ParameterExpansion       QsciLexerBash__ = 10
	QsciLexerBash__Backticks                QsciLexerBash__ = 11
	QsciLexerBash__HereDocumentDelimiter    QsciLexerBash__ = 12
	QsciLexerBash__SingleQuotedHereDocument QsciLexerBash__ = 13
)

type QsciLexerBash struct {
	h          *C.QsciLexerBash
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerBash) cPointer() *C.QsciLexerBash {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerBash) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerBash constructs the type using only CGO pointers.
func newQsciLexerBash(h *C.QsciLexerBash) *QsciLexerBash {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerBash_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerBash{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerBash constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerBash(h unsafe.Pointer) *QsciLexerBash {
	return newQsciLexerBash((*C.QsciLexerBash)(h))
}

// NewQsciLexerBash constructs a new QsciLexerBash object.
func NewQsciLexerBash() *QsciLexerBash {

	ret := newQsciLexerBash(C.QsciLexerBash_new())
	ret.isSubclass = true
	return ret
}

// NewQsciLexerBash2 constructs a new QsciLexerBash object.
func NewQsciLexerBash2(parent *qt.QObject) *QsciLexerBash {

	ret := newQsciLexerBash(C.QsciLexerBash_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerBash) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerBash_MetaObject(this.h)))
}

func (this *QsciLexerBash) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerBash_Metacast(this.h, param1_Cstring))
}

func QsciLexerBash_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerBash) Language() string {
	_ret := C.QsciLexerBash_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBash) Lexer() string {
	_ret := C.QsciLexerBash_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBash) BraceStyle() int {
	return (int)(C.QsciLexerBash_BraceStyle(this.h))
}

func (this *QsciLexerBash) WordCharacters() string {
	_ret := C.QsciLexerBash_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBash) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerBash_DefaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBash) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerBash_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerBash) DefaultFont(style int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerBash_DefaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBash) DefaultPaper(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerBash_DefaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBash) Keywords(set int) string {
	_ret := C.QsciLexerBash_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerBash) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerBash_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerBash) RefreshProperties() {
	C.QsciLexerBash_RefreshProperties(this.h)
}

func (this *QsciLexerBash) FoldComments() bool {
	return (bool)(C.QsciLexerBash_FoldComments(this.h))
}

func (this *QsciLexerBash) FoldCompact() bool {
	return (bool)(C.QsciLexerBash_FoldCompact(this.h))
}

func (this *QsciLexerBash) SetFoldComments(fold bool) {
	C.QsciLexerBash_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerBash) SetFoldCompact(fold bool) {
	C.QsciLexerBash_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerBash_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerBash) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerBash_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerBash) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetFoldComments
func miqt_exec_callback_QsciLexerBash_SetFoldComments(self *C.QsciLexerBash, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerBash) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerBash_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerBash) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetFoldCompact
func miqt_exec_callback_QsciLexerBash_SetFoldCompact(self *C.QsciLexerBash, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}
func (this *QsciLexerBash) OnLanguage(slot func() string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_Language
func miqt_exec_callback_QsciLexerBash_Language(self *C.QsciLexerBash, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerBash_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerBash) OnLexer(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_Lexer
func miqt_exec_callback_QsciLexerBash_Lexer(self *C.QsciLexerBash, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerBash_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerBash) OnLexerId(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_LexerId
func miqt_exec_callback_QsciLexerBash_LexerId(self *C.QsciLexerBash, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerBash_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerBash) OnAutoCompletionFillups(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_AutoCompletionFillups
func miqt_exec_callback_QsciLexerBash_AutoCompletionFillups(self *C.QsciLexerBash, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerBash_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerBash) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerBash_AutoCompletionWordSeparators(self *C.QsciLexerBash, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerBash) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerBash_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerBash) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_BlockEnd
func miqt_exec_callback_QsciLexerBash_BlockEnd(self *C.QsciLexerBash, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerBash_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerBash) OnBlockLookback(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_BlockLookback
func miqt_exec_callback_QsciLexerBash_BlockLookback(self *C.QsciLexerBash, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerBash_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerBash) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_BlockStart
func miqt_exec_callback_QsciLexerBash_BlockStart(self *C.QsciLexerBash, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerBash_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerBash) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_BlockStartKeyword
func miqt_exec_callback_QsciLexerBash_BlockStartKeyword(self *C.QsciLexerBash, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerBash_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerBash) OnBraceStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_BraceStyle
func miqt_exec_callback_QsciLexerBash_BraceStyle(self *C.QsciLexerBash, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerBash_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerBash) OnCaseSensitive(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_CaseSensitive
func miqt_exec_callback_QsciLexerBash_CaseSensitive(self *C.QsciLexerBash, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerBash_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerBash) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_Color
func miqt_exec_callback_QsciLexerBash_Color(self *C.QsciLexerBash, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerBash) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerBash_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerBash) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_EolFill
func miqt_exec_callback_QsciLexerBash_EolFill(self *C.QsciLexerBash, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerBash_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerBash) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_Font
func miqt_exec_callback_QsciLexerBash_Font(self *C.QsciLexerBash, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerBash) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerBash_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerBash) OnIndentationGuideView(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_IndentationGuideView
func miqt_exec_callback_QsciLexerBash_IndentationGuideView(self *C.QsciLexerBash, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerBash_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerBash) OnKeywords(slot func(super func(set int) string, set int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_Keywords
func miqt_exec_callback_QsciLexerBash_Keywords(self *C.QsciLexerBash, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerBash_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerBash) OnDefaultStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_DefaultStyle
func miqt_exec_callback_QsciLexerBash_DefaultStyle(self *C.QsciLexerBash, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerBash) OnDescription(slot func(style int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_Description
func miqt_exec_callback_QsciLexerBash_Description(self *C.QsciLexerBash, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerBash) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerBash_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerBash) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_Paper
func miqt_exec_callback_QsciLexerBash_Paper(self *C.QsciLexerBash, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerBash) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerBash_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerBash) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerBash_DefaultColorWithStyle(self *C.QsciLexerBash, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerBash) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerBash_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerBash) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_DefaultEolFill
func miqt_exec_callback_QsciLexerBash_DefaultEolFill(self *C.QsciLexerBash, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerBash_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerBash) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerBash_DefaultFontWithStyle(self *C.QsciLexerBash, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerBash) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerBash_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerBash) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerBash_DefaultPaperWithStyle(self *C.QsciLexerBash, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerBash) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerBash_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerBash) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetEditor
func miqt_exec_callback_QsciLexerBash_SetEditor(self *C.QsciLexerBash, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerBash) callVirtualBase_RefreshProperties() {

	C.QsciLexerBash_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerBash) OnRefreshProperties(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_RefreshProperties
func miqt_exec_callback_QsciLexerBash_RefreshProperties(self *C.QsciLexerBash, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerBash) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerBash_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerBash) OnStyleBitsNeeded(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_StyleBitsNeeded
func miqt_exec_callback_QsciLexerBash_StyleBitsNeeded(self *C.QsciLexerBash, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerBash_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerBash) OnWordCharacters(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_WordCharacters
func miqt_exec_callback_QsciLexerBash_WordCharacters(self *C.QsciLexerBash, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerBash) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerBash_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerBash) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerBash_SetAutoIndentStyle(self *C.QsciLexerBash, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerBash) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerBash_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerBash) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetColor
func miqt_exec_callback_QsciLexerBash_SetColor(self *C.QsciLexerBash, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerBash) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerBash_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerBash) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetEolFill
func miqt_exec_callback_QsciLexerBash_SetEolFill(self *C.QsciLexerBash, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerBash) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerBash_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerBash) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetFont
func miqt_exec_callback_QsciLexerBash_SetFont(self *C.QsciLexerBash, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerBash) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerBash_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerBash) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_SetPaper
func miqt_exec_callback_QsciLexerBash_SetPaper(self *C.QsciLexerBash, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerBash{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerBash) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerBash_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerBash) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_ReadProperties
func miqt_exec_callback_QsciLexerBash_ReadProperties(self *C.QsciLexerBash, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerBash) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerBash_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerBash) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerBash_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerBash_WriteProperties
func miqt_exec_callback_QsciLexerBash_WriteProperties(self *C.QsciLexerBash, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerBash{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerBash) Delete() {
	C.QsciLexerBash_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerBash) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerBash) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

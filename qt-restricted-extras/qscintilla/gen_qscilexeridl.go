package qscintilla

/*

#include "gen_qscilexeridl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerIDL struct {
	h *C.QsciLexerIDL
	*QsciLexerCPP
}

func (this *QsciLexerIDL) cPointer() *C.QsciLexerIDL {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerIDL) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerIDL constructs the type using only CGO pointers.
func newQsciLexerIDL(h *C.QsciLexerIDL) *QsciLexerIDL {
	if h == nil {
		return nil
	}
	var outptr_QsciLexerCPP *C.QsciLexerCPP = nil
	C.QsciLexerIDL_virtbase(h, &outptr_QsciLexerCPP)

	return &QsciLexerIDL{h: h,
		QsciLexerCPP: newQsciLexerCPP(outptr_QsciLexerCPP)}
}

// UnsafeNewQsciLexerIDL constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerIDL(h unsafe.Pointer) *QsciLexerIDL {
	return newQsciLexerIDL((*C.QsciLexerIDL)(h))
}

// NewQsciLexerIDL constructs a new QsciLexerIDL object.
func NewQsciLexerIDL() *QsciLexerIDL {

	return newQsciLexerIDL(C.QsciLexerIDL_new())
}

// NewQsciLexerIDL2 constructs a new QsciLexerIDL object.
func NewQsciLexerIDL2(parent *qt.QObject) *QsciLexerIDL {

	return newQsciLexerIDL(C.QsciLexerIDL_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerIDL) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerIDL_metaObject(this.h)))
}

func (this *QsciLexerIDL) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerIDL_metacast(this.h, param1_Cstring))
}

func QsciLexerIDL_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerIDL) Language() string {
	_ret := C.QsciLexerIDL_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerIDL) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerIDL_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerIDL) Keywords(set int) string {
	_ret := C.QsciLexerIDL_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerIDL) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerIDL_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerIDL_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerIDL_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerIDL) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerIDL_virtualbase_setFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnsetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerIDL_override_virtual_setFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setFoldAtElse
func miqt_exec_callback_QsciLexerIDL_setFoldAtElse(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerIDL_virtualbase_setFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnsetFoldComments(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerIDL_override_virtual_setFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setFoldComments
func miqt_exec_callback_QsciLexerIDL_setFoldComments(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerIDL_virtualbase_setFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnsetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerIDL_override_virtual_setFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setFoldCompact
func miqt_exec_callback_QsciLexerIDL_setFoldCompact(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetFoldPreprocessor(fold bool) {

	C.QsciLexerIDL_virtualbase_setFoldPreprocessor(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerIDL) OnsetFoldPreprocessor(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerIDL_override_virtual_setFoldPreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setFoldPreprocessor
func miqt_exec_callback_QsciLexerIDL_setFoldPreprocessor(self *C.QsciLexerIDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFoldPreprocessor, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetStylePreprocessor(style bool) {

	C.QsciLexerIDL_virtualbase_setStylePreprocessor(unsafe.Pointer(this.h), (C.bool)(style))

}
func (this *QsciLexerIDL) OnsetStylePreprocessor(slot func(super func(style bool), style bool)) {
	ok := C.QsciLexerIDL_override_virtual_setStylePreprocessor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setStylePreprocessor
func miqt_exec_callback_QsciLexerIDL_setStylePreprocessor(self *C.QsciLexerIDL, cb C.intptr_t, style C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style bool), style bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(style)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetStylePreprocessor, slotval1)

}
func (this *QsciLexerIDL) Onlanguage(slot func() string) {
	ok := C.QsciLexerIDL_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_language
func miqt_exec_callback_QsciLexerIDL_language(self *C.QsciLexerIDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerIDL_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerIDL) Onlexer(slot func(super func() string) string) {
	ok := C.QsciLexerIDL_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_lexer
func miqt_exec_callback_QsciLexerIDL_lexer(self *C.QsciLexerIDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerIDL_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerIDL) OnlexerId(slot func(super func() int) int) {
	ok := C.QsciLexerIDL_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_lexerId
func miqt_exec_callback_QsciLexerIDL_lexerId(self *C.QsciLexerIDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerIDL_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerIDL) OnautoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerIDL_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_autoCompletionFillups
func miqt_exec_callback_QsciLexerIDL_autoCompletionFillups(self *C.QsciLexerIDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerIDL_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerIDL) OnautoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerIDL_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerIDL_autoCompletionWordSeparators(self *C.QsciLexerIDL, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerIDL) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerIDL_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerIDL) OnblockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerIDL_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_blockEnd
func miqt_exec_callback_QsciLexerIDL_blockEnd(self *C.QsciLexerIDL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerIDL_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerIDL) OnblockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerIDL_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_blockLookback
func miqt_exec_callback_QsciLexerIDL_blockLookback(self *C.QsciLexerIDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerIDL_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerIDL) OnblockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerIDL_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_blockStart
func miqt_exec_callback_QsciLexerIDL_blockStart(self *C.QsciLexerIDL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerIDL_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerIDL) OnblockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerIDL_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_blockStartKeyword
func miqt_exec_callback_QsciLexerIDL_blockStartKeyword(self *C.QsciLexerIDL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerIDL_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerIDL) OnbraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerIDL_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_braceStyle
func miqt_exec_callback_QsciLexerIDL_braceStyle(self *C.QsciLexerIDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerIDL_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerIDL) OncaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerIDL_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_caseSensitive
func miqt_exec_callback_QsciLexerIDL_caseSensitive(self *C.QsciLexerIDL, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerIDL_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerIDL) Oncolor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerIDL_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_color
func miqt_exec_callback_QsciLexerIDL_color(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerIDL) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerIDL_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerIDL) OneolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerIDL_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_eolFill
func miqt_exec_callback_QsciLexerIDL_eolFill(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerIDL_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerIDL) Onfont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerIDL_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_font
func miqt_exec_callback_QsciLexerIDL_font(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerIDL) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerIDL_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerIDL) OnindentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerIDL_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_indentationGuideView
func miqt_exec_callback_QsciLexerIDL_indentationGuideView(self *C.QsciLexerIDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerIDL_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerIDL) Onkeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerIDL_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_keywords
func miqt_exec_callback_QsciLexerIDL_keywords(self *C.QsciLexerIDL, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerIDL_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerIDL) OndefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerIDL_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_defaultStyle
func miqt_exec_callback_QsciLexerIDL_defaultStyle(self *C.QsciLexerIDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerIDL) Ondescription(slot func(style int) string) {
	ok := C.QsciLexerIDL_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_description
func miqt_exec_callback_QsciLexerIDL_description(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerIDL) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerIDL_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerIDL) Onpaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerIDL_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_paper
func miqt_exec_callback_QsciLexerIDL_paper(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerIDL) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerIDL_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerIDL) OndefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerIDL_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_defaultColorWithStyle
func miqt_exec_callback_QsciLexerIDL_defaultColorWithStyle(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerIDL) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerIDL_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerIDL) OndefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerIDL_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_defaultEolFill
func miqt_exec_callback_QsciLexerIDL_defaultEolFill(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerIDL_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerIDL) OndefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerIDL_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_defaultFontWithStyle
func miqt_exec_callback_QsciLexerIDL_defaultFontWithStyle(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerIDL) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerIDL_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerIDL) OndefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerIDL_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerIDL_defaultPaperWithStyle(self *C.QsciLexerIDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerIDL) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerIDL_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerIDL) OnsetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerIDL_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setEditor
func miqt_exec_callback_QsciLexerIDL_setEditor(self *C.QsciLexerIDL, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_RefreshProperties() {

	C.QsciLexerIDL_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerIDL) OnrefreshProperties(slot func(super func())) {
	ok := C.QsciLexerIDL_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_refreshProperties
func miqt_exec_callback_QsciLexerIDL_refreshProperties(self *C.QsciLexerIDL, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerIDL) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerIDL_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerIDL) OnstyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerIDL_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_styleBitsNeeded
func miqt_exec_callback_QsciLexerIDL_styleBitsNeeded(self *C.QsciLexerIDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerIDL_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerIDL) OnwordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerIDL_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_wordCharacters
func miqt_exec_callback_QsciLexerIDL_wordCharacters(self *C.QsciLexerIDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerIDL) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerIDL_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerIDL) OnsetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerIDL_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setAutoIndentStyle
func miqt_exec_callback_QsciLexerIDL_setAutoIndentStyle(self *C.QsciLexerIDL, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerIDL_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerIDL) OnsetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerIDL_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setColor
func miqt_exec_callback_QsciLexerIDL_setColor(self *C.QsciLexerIDL, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerIDL) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerIDL_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerIDL) OnsetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerIDL_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setEolFill
func miqt_exec_callback_QsciLexerIDL_setEolFill(self *C.QsciLexerIDL, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerIDL) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerIDL_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerIDL) OnsetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	ok := C.QsciLexerIDL_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setFont
func miqt_exec_callback_QsciLexerIDL_setFont(self *C.QsciLexerIDL, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerIDL) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerIDL_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerIDL) OnsetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerIDL_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_setPaper
func miqt_exec_callback_QsciLexerIDL_setPaper(self *C.QsciLexerIDL, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerIDL) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerIDL_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerIDL) OnreadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerIDL_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_readProperties
func miqt_exec_callback_QsciLexerIDL_readProperties(self *C.QsciLexerIDL, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerIDL_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerIDL) OnwriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerIDL_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_writeProperties
func miqt_exec_callback_QsciLexerIDL_writeProperties(self *C.QsciLexerIDL, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QsciLexerIDL_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerIDL) Onevent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QsciLexerIDL_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_event
func miqt_exec_callback_QsciLexerIDL_event(self *C.QsciLexerIDL, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciLexerIDL_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerIDL) OneventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QsciLexerIDL_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_eventFilter
func miqt_exec_callback_QsciLexerIDL_eventFilter(self *C.QsciLexerIDL, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerIDL{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerIDL) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciLexerIDL_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerIDL) OntimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QsciLexerIDL_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_timerEvent
func miqt_exec_callback_QsciLexerIDL_timerEvent(self *C.QsciLexerIDL, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciLexerIDL_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerIDL) OnchildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QsciLexerIDL_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_childEvent
func miqt_exec_callback_QsciLexerIDL_childEvent(self *C.QsciLexerIDL, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciLexerIDL_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerIDL) OncustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QsciLexerIDL_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_customEvent
func miqt_exec_callback_QsciLexerIDL_customEvent(self *C.QsciLexerIDL, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerIDL_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerIDL) OnconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerIDL_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_connectNotify
func miqt_exec_callback_QsciLexerIDL_connectNotify(self *C.QsciLexerIDL, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerIDL) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerIDL_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerIDL) OndisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerIDL_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerIDL_disconnectNotify
func miqt_exec_callback_QsciLexerIDL_disconnectNotify(self *C.QsciLexerIDL, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerIDL{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerIDL) Delete() {
	C.QsciLexerIDL_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerIDL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerIDL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

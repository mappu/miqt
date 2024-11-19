package qscintilla

/*

#include "gen_qscilexerfortran77.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerFortran77__ int

const (
	QsciLexerFortran77__Default            QsciLexerFortran77__ = 0
	QsciLexerFortran77__Comment            QsciLexerFortran77__ = 1
	QsciLexerFortran77__Number             QsciLexerFortran77__ = 2
	QsciLexerFortran77__SingleQuotedString QsciLexerFortran77__ = 3
	QsciLexerFortran77__DoubleQuotedString QsciLexerFortran77__ = 4
	QsciLexerFortran77__UnclosedString     QsciLexerFortran77__ = 5
	QsciLexerFortran77__Operator           QsciLexerFortran77__ = 6
	QsciLexerFortran77__Identifier         QsciLexerFortran77__ = 7
	QsciLexerFortran77__Keyword            QsciLexerFortran77__ = 8
	QsciLexerFortran77__IntrinsicFunction  QsciLexerFortran77__ = 9
	QsciLexerFortran77__ExtendedFunction   QsciLexerFortran77__ = 10
	QsciLexerFortran77__PreProcessor       QsciLexerFortran77__ = 11
	QsciLexerFortran77__DottedOperator     QsciLexerFortran77__ = 12
	QsciLexerFortran77__Label              QsciLexerFortran77__ = 13
	QsciLexerFortran77__Continuation       QsciLexerFortran77__ = 14
)

type QsciLexerFortran77 struct {
	h          *C.QsciLexerFortran77
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerFortran77) cPointer() *C.QsciLexerFortran77 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerFortran77) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerFortran77 constructs the type using only CGO pointers.
func newQsciLexerFortran77(h *C.QsciLexerFortran77, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerFortran77 {
	if h == nil {
		return nil
	}
	return &QsciLexerFortran77{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerFortran77 constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerFortran77(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerFortran77 {
	if h == nil {
		return nil
	}

	return &QsciLexerFortran77{h: (*C.QsciLexerFortran77)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerFortran77 constructs a new QsciLexerFortran77 object.
func NewQsciLexerFortran77() *QsciLexerFortran77 {
	var outptr_QsciLexerFortran77 *C.QsciLexerFortran77 = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerFortran77_new(&outptr_QsciLexerFortran77, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerFortran77(outptr_QsciLexerFortran77, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerFortran772 constructs a new QsciLexerFortran77 object.
func NewQsciLexerFortran772(parent *qt.QObject) *QsciLexerFortran77 {
	var outptr_QsciLexerFortran77 *C.QsciLexerFortran77 = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerFortran77_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerFortran77, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerFortran77(outptr_QsciLexerFortran77, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerFortran77) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerFortran77_MetaObject(this.h)))
}

func (this *QsciLexerFortran77) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerFortran77_Metacast(this.h, param1_Cstring))
}

func QsciLexerFortran77_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran77) Language() string {
	_ret := C.QsciLexerFortran77_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) Lexer() string {
	_ret := C.QsciLexerFortran77_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) BraceStyle() int {
	return (int)(C.QsciLexerFortran77_BraceStyle(this.h))
}

func (this *QsciLexerFortran77) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerFortran77_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerFortran77_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerFortran77) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerFortran77_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerFortran77_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) Keywords(set int) string {
	_ret := C.QsciLexerFortran77_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran77) RefreshProperties() {
	C.QsciLexerFortran77_RefreshProperties(this.h)
}

func (this *QsciLexerFortran77) FoldCompact() bool {
	return (bool)(C.QsciLexerFortran77_FoldCompact(this.h))
}

func (this *QsciLexerFortran77) SetFoldCompact(fold bool) {
	C.QsciLexerFortran77_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerFortran77_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran77) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerFortran77_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerFortran77) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerFortran77_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_SetFoldCompact
func miqt_exec_callback_QsciLexerFortran77_SetFoldCompact(self *C.QsciLexerFortran77, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_Language() string {

	_ret := C.QsciLexerFortran77_virtualbase_Language(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnLanguage(slot func(super func() string) string) {
	C.QsciLexerFortran77_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_Language
func miqt_exec_callback_QsciLexerFortran77_Language(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Language)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerFortran77_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnLexer(slot func(super func() string) string) {
	C.QsciLexerFortran77_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_Lexer
func miqt_exec_callback_QsciLexerFortran77_Lexer(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerFortran77_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerFortran77_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_LexerId
func miqt_exec_callback_QsciLexerFortran77_LexerId(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerFortran77_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerFortran77_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_AutoCompletionFillups
func miqt_exec_callback_QsciLexerFortran77_AutoCompletionFillups(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerFortran77_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerFortran77) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerFortran77_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerFortran77_AutoCompletionWordSeparators(self *C.QsciLexerFortran77, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerFortran77) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerFortran77_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerFortran77_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_BlockEnd
func miqt_exec_callback_QsciLexerFortran77_BlockEnd(self *C.QsciLexerFortran77, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerFortran77_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerFortran77_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_BlockLookback
func miqt_exec_callback_QsciLexerFortran77_BlockLookback(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerFortran77_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerFortran77_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_BlockStart
func miqt_exec_callback_QsciLexerFortran77_BlockStart(self *C.QsciLexerFortran77, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerFortran77_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerFortran77_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_BlockStartKeyword
func miqt_exec_callback_QsciLexerFortran77_BlockStartKeyword(self *C.QsciLexerFortran77, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerFortran77_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerFortran77_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_BraceStyle
func miqt_exec_callback_QsciLexerFortran77_BraceStyle(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerFortran77_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_CaseSensitive
func miqt_exec_callback_QsciLexerFortran77_CaseSensitive(self *C.QsciLexerFortran77, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexerFortran77_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerFortran77_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_Color
func miqt_exec_callback_QsciLexerFortran77_Color(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerFortran77) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerFortran77_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_EolFill
func miqt_exec_callback_QsciLexerFortran77_EolFill(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexerFortran77_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerFortran77_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_Font
func miqt_exec_callback_QsciLexerFortran77_Font(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerFortran77_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerFortran77_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_IndentationGuideView
func miqt_exec_callback_QsciLexerFortran77_IndentationGuideView(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerFortran77_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerFortran77_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_Keywords
func miqt_exec_callback_QsciLexerFortran77_Keywords(self *C.QsciLexerFortran77, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerFortran77_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerFortran77_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_DefaultStyle
func miqt_exec_callback_QsciLexerFortran77_DefaultStyle(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Description(style int) string {

	var _ms C.struct_miqt_string = C.QsciLexerFortran77_virtualbase_Description(unsafe.Pointer(this.h), (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciLexerFortran77) OnDescription(slot func(super func(style int) string, style int) string) {
	C.QsciLexerFortran77_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_Description
func miqt_exec_callback_QsciLexerFortran77_Description(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) string, style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Description, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexerFortran77) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexerFortran77_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerFortran77_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_Paper
func miqt_exec_callback_QsciLexerFortran77_Paper(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerFortran77_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerFortran77_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerFortran77_DefaultColorWithStyle(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerFortran77) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerFortran77_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_DefaultEolFill
func miqt_exec_callback_QsciLexerFortran77_DefaultEolFill(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexerFortran77_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerFortran77_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerFortran77_DefaultFontWithStyle(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerFortran77_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerFortran77_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerFortran77_DefaultPaperWithStyle(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerFortran77_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerFortran77) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerFortran77_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_SetEditor
func miqt_exec_callback_QsciLexerFortran77_SetEditor(self *C.QsciLexerFortran77, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_RefreshProperties() {

	C.QsciLexerFortran77_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerFortran77) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerFortran77_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_RefreshProperties
func miqt_exec_callback_QsciLexerFortran77_RefreshProperties(self *C.QsciLexerFortran77, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerFortran77) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerFortran77_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerFortran77_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_StyleBitsNeeded
func miqt_exec_callback_QsciLexerFortran77_StyleBitsNeeded(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerFortran77_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerFortran77_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_WordCharacters
func miqt_exec_callback_QsciLexerFortran77_WordCharacters(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerFortran77_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerFortran77) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerFortran77_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerFortran77_SetAutoIndentStyle(self *C.QsciLexerFortran77, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerFortran77_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerFortran77_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_SetColor
func miqt_exec_callback_QsciLexerFortran77_SetColor(self *C.QsciLexerFortran77, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerFortran77_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerFortran77_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_SetEolFill
func miqt_exec_callback_QsciLexerFortran77_SetEolFill(self *C.QsciLexerFortran77, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerFortran77_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	C.QsciLexerFortran77_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_SetFont
func miqt_exec_callback_QsciLexerFortran77_SetFont(self *C.QsciLexerFortran77, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerFortran77_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerFortran77_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_SetPaper
func miqt_exec_callback_QsciLexerFortran77_SetPaper(self *C.QsciLexerFortran77, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerFortran77_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerFortran77) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerFortran77_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_ReadProperties
func miqt_exec_callback_QsciLexerFortran77_ReadProperties(self *C.QsciLexerFortran77, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerFortran77_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerFortran77) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerFortran77_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerFortran77_WriteProperties
func miqt_exec_callback_QsciLexerFortran77_WriteProperties(self *C.QsciLexerFortran77, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerFortran77) Delete() {
	C.QsciLexerFortran77_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerFortran77) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerFortran77) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

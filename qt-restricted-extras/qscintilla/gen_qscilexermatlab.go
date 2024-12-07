package qscintilla

/*

#include "gen_qscilexermatlab.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerMatlab__ int

const (
	QsciLexerMatlab__Default            QsciLexerMatlab__ = 0
	QsciLexerMatlab__Comment            QsciLexerMatlab__ = 1
	QsciLexerMatlab__Command            QsciLexerMatlab__ = 2
	QsciLexerMatlab__Number             QsciLexerMatlab__ = 3
	QsciLexerMatlab__Keyword            QsciLexerMatlab__ = 4
	QsciLexerMatlab__SingleQuotedString QsciLexerMatlab__ = 5
	QsciLexerMatlab__Operator           QsciLexerMatlab__ = 6
	QsciLexerMatlab__Identifier         QsciLexerMatlab__ = 7
	QsciLexerMatlab__DoubleQuotedString QsciLexerMatlab__ = 8
)

type QsciLexerMatlab struct {
	h          *C.QsciLexerMatlab
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerMatlab) cPointer() *C.QsciLexerMatlab {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerMatlab) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerMatlab constructs the type using only CGO pointers.
func newQsciLexerMatlab(h *C.QsciLexerMatlab) *QsciLexerMatlab {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerMatlab_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerMatlab{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerMatlab constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerMatlab(h unsafe.Pointer) *QsciLexerMatlab {
	return newQsciLexerMatlab((*C.QsciLexerMatlab)(h))
}

// NewQsciLexerMatlab constructs a new QsciLexerMatlab object.
func NewQsciLexerMatlab() *QsciLexerMatlab {

	ret := newQsciLexerMatlab(C.QsciLexerMatlab_new())
	ret.isSubclass = true
	return ret
}

// NewQsciLexerMatlab2 constructs a new QsciLexerMatlab object.
func NewQsciLexerMatlab2(parent *qt.QObject) *QsciLexerMatlab {

	ret := newQsciLexerMatlab(C.QsciLexerMatlab_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerMatlab) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerMatlab_MetaObject(this.h)))
}

func (this *QsciLexerMatlab) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerMatlab_Metacast(this.h, param1_Cstring))
}

func QsciLexerMatlab_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMatlab_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerMatlab) Language() string {
	_ret := C.QsciLexerMatlab_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMatlab) Lexer() string {
	_ret := C.QsciLexerMatlab_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMatlab) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMatlab_DefaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMatlab) DefaultFont(style int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerMatlab_DefaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMatlab) Keywords(set int) string {
	_ret := C.QsciLexerMatlab_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerMatlab) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMatlab_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMatlab_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMatlab_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMatlab_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciLexerMatlab) OnLanguage(slot func() string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_Language
func miqt_exec_callback_QsciLexerMatlab_Language(self *C.QsciLexerMatlab, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerMatlab_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMatlab) OnLexer(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_Lexer
func miqt_exec_callback_QsciLexerMatlab_Lexer(self *C.QsciLexerMatlab, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerMatlab_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMatlab) OnLexerId(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_LexerId
func miqt_exec_callback_QsciLexerMatlab_LexerId(self *C.QsciLexerMatlab, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerMatlab_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMatlab) OnAutoCompletionFillups(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_AutoCompletionFillups
func miqt_exec_callback_QsciLexerMatlab_AutoCompletionFillups(self *C.QsciLexerMatlab, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerMatlab_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerMatlab) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerMatlab_AutoCompletionWordSeparators(self *C.QsciLexerMatlab, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerMatlab) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerMatlab_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMatlab) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_BlockEnd
func miqt_exec_callback_QsciLexerMatlab_BlockEnd(self *C.QsciLexerMatlab, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerMatlab_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMatlab) OnBlockLookback(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_BlockLookback
func miqt_exec_callback_QsciLexerMatlab_BlockLookback(self *C.QsciLexerMatlab, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerMatlab_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMatlab) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_BlockStart
func miqt_exec_callback_QsciLexerMatlab_BlockStart(self *C.QsciLexerMatlab, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerMatlab_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMatlab) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_BlockStartKeyword
func miqt_exec_callback_QsciLexerMatlab_BlockStartKeyword(self *C.QsciLexerMatlab, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerMatlab_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMatlab) OnBraceStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_BraceStyle
func miqt_exec_callback_QsciLexerMatlab_BraceStyle(self *C.QsciLexerMatlab, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerMatlab_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMatlab) OnCaseSensitive(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_CaseSensitive
func miqt_exec_callback_QsciLexerMatlab_CaseSensitive(self *C.QsciLexerMatlab, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMatlab_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMatlab) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_Color
func miqt_exec_callback_QsciLexerMatlab_Color(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMatlab) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerMatlab_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerMatlab) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_EolFill
func miqt_exec_callback_QsciLexerMatlab_EolFill(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerMatlab_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMatlab) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_Font
func miqt_exec_callback_QsciLexerMatlab_Font(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMatlab) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerMatlab_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMatlab) OnIndentationGuideView(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_IndentationGuideView
func miqt_exec_callback_QsciLexerMatlab_IndentationGuideView(self *C.QsciLexerMatlab, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerMatlab_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerMatlab) OnKeywords(slot func(super func(set int) string, set int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_Keywords
func miqt_exec_callback_QsciLexerMatlab_Keywords(self *C.QsciLexerMatlab, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerMatlab_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMatlab) OnDefaultStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_DefaultStyle
func miqt_exec_callback_QsciLexerMatlab_DefaultStyle(self *C.QsciLexerMatlab, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerMatlab) OnDescription(slot func(style int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_Description
func miqt_exec_callback_QsciLexerMatlab_Description(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerMatlab) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMatlab_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMatlab) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_Paper
func miqt_exec_callback_QsciLexerMatlab_Paper(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMatlab) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMatlab_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMatlab) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerMatlab_DefaultColorWithStyle(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMatlab) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerMatlab_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerMatlab) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_DefaultEolFill
func miqt_exec_callback_QsciLexerMatlab_DefaultEolFill(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerMatlab_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMatlab) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerMatlab_DefaultFontWithStyle(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMatlab) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMatlab_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMatlab) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerMatlab_DefaultPaperWithStyle(self *C.QsciLexerMatlab, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMatlab) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerMatlab_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerMatlab) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_SetEditor
func miqt_exec_callback_QsciLexerMatlab_SetEditor(self *C.QsciLexerMatlab, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerMatlab) callVirtualBase_RefreshProperties() {

	C.QsciLexerMatlab_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerMatlab) OnRefreshProperties(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_RefreshProperties
func miqt_exec_callback_QsciLexerMatlab_RefreshProperties(self *C.QsciLexerMatlab, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerMatlab) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerMatlab_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMatlab) OnStyleBitsNeeded(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_StyleBitsNeeded
func miqt_exec_callback_QsciLexerMatlab_StyleBitsNeeded(self *C.QsciLexerMatlab, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerMatlab_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMatlab) OnWordCharacters(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_WordCharacters
func miqt_exec_callback_QsciLexerMatlab_WordCharacters(self *C.QsciLexerMatlab, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMatlab) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerMatlab_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerMatlab) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerMatlab_SetAutoIndentStyle(self *C.QsciLexerMatlab, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerMatlab) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerMatlab_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMatlab) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_SetColor
func miqt_exec_callback_QsciLexerMatlab_SetColor(self *C.QsciLexerMatlab, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerMatlab) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerMatlab_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerMatlab) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_SetEolFill
func miqt_exec_callback_QsciLexerMatlab_SetEolFill(self *C.QsciLexerMatlab, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerMatlab) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerMatlab_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMatlab) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_SetFont
func miqt_exec_callback_QsciLexerMatlab_SetFont(self *C.QsciLexerMatlab, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerMatlab) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerMatlab_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMatlab) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_SetPaper
func miqt_exec_callback_QsciLexerMatlab_SetPaper(self *C.QsciLexerMatlab, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerMatlab) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerMatlab_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerMatlab) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_ReadProperties
func miqt_exec_callback_QsciLexerMatlab_ReadProperties(self *C.QsciLexerMatlab, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMatlab) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerMatlab_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerMatlab) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerMatlab_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMatlab_WriteProperties
func miqt_exec_callback_QsciLexerMatlab_WriteProperties(self *C.QsciLexerMatlab, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerMatlab{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerMatlab) Delete() {
	C.QsciLexerMatlab_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerMatlab) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerMatlab) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

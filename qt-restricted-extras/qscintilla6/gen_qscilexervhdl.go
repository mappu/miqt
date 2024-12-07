package qscintilla6

/*

#include "gen_qscilexervhdl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerVHDL__ int

const (
	QsciLexerVHDL__Default          QsciLexerVHDL__ = 0
	QsciLexerVHDL__Comment          QsciLexerVHDL__ = 1
	QsciLexerVHDL__CommentLine      QsciLexerVHDL__ = 2
	QsciLexerVHDL__Number           QsciLexerVHDL__ = 3
	QsciLexerVHDL__String           QsciLexerVHDL__ = 4
	QsciLexerVHDL__Operator         QsciLexerVHDL__ = 5
	QsciLexerVHDL__Identifier       QsciLexerVHDL__ = 6
	QsciLexerVHDL__UnclosedString   QsciLexerVHDL__ = 7
	QsciLexerVHDL__Keyword          QsciLexerVHDL__ = 8
	QsciLexerVHDL__StandardOperator QsciLexerVHDL__ = 9
	QsciLexerVHDL__Attribute        QsciLexerVHDL__ = 10
	QsciLexerVHDL__StandardFunction QsciLexerVHDL__ = 11
	QsciLexerVHDL__StandardPackage  QsciLexerVHDL__ = 12
	QsciLexerVHDL__StandardType     QsciLexerVHDL__ = 13
	QsciLexerVHDL__KeywordSet7      QsciLexerVHDL__ = 14
	QsciLexerVHDL__CommentBlock     QsciLexerVHDL__ = 15
)

type QsciLexerVHDL struct {
	h          *C.QsciLexerVHDL
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerVHDL) cPointer() *C.QsciLexerVHDL {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerVHDL) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerVHDL constructs the type using only CGO pointers.
func newQsciLexerVHDL(h *C.QsciLexerVHDL, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerVHDL {
	if h == nil {
		return nil
	}
	return &QsciLexerVHDL{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerVHDL constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerVHDL(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerVHDL {
	if h == nil {
		return nil
	}

	return &QsciLexerVHDL{h: (*C.QsciLexerVHDL)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerVHDL constructs a new QsciLexerVHDL object.
func NewQsciLexerVHDL() *QsciLexerVHDL {
	var outptr_QsciLexerVHDL *C.QsciLexerVHDL = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerVHDL_new(&outptr_QsciLexerVHDL, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerVHDL(outptr_QsciLexerVHDL, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerVHDL2 constructs a new QsciLexerVHDL object.
func NewQsciLexerVHDL2(parent *qt6.QObject) *QsciLexerVHDL {
	var outptr_QsciLexerVHDL *C.QsciLexerVHDL = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerVHDL_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerVHDL, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerVHDL(outptr_QsciLexerVHDL, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerVHDL) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerVHDL_MetaObject(this.h)))
}

func (this *QsciLexerVHDL) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerVHDL_Metacast(this.h, param1_Cstring))
}

func QsciLexerVHDL_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerVHDL) Language() string {
	_ret := C.QsciLexerVHDL_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerVHDL) Lexer() string {
	_ret := C.QsciLexerVHDL_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerVHDL) BraceStyle() int {
	return (int)(C.QsciLexerVHDL_BraceStyle(this.h))
}

func (this *QsciLexerVHDL) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerVHDL_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVHDL) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerVHDL_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerVHDL) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerVHDL_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVHDL) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerVHDL_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVHDL) Keywords(set int) string {
	_ret := C.QsciLexerVHDL_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerVHDL) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerVHDL) RefreshProperties() {
	C.QsciLexerVHDL_RefreshProperties(this.h)
}

func (this *QsciLexerVHDL) FoldComments() bool {
	return (bool)(C.QsciLexerVHDL_FoldComments(this.h))
}

func (this *QsciLexerVHDL) FoldCompact() bool {
	return (bool)(C.QsciLexerVHDL_FoldCompact(this.h))
}

func (this *QsciLexerVHDL) FoldAtElse() bool {
	return (bool)(C.QsciLexerVHDL_FoldAtElse(this.h))
}

func (this *QsciLexerVHDL) FoldAtBegin() bool {
	return (bool)(C.QsciLexerVHDL_FoldAtBegin(this.h))
}

func (this *QsciLexerVHDL) FoldAtParenthesis() bool {
	return (bool)(C.QsciLexerVHDL_FoldAtParenthesis(this.h))
}

func (this *QsciLexerVHDL) SetFoldComments(fold bool) {
	C.QsciLexerVHDL_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldCompact(fold bool) {
	C.QsciLexerVHDL_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldAtElse(fold bool) {
	C.QsciLexerVHDL_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldAtBegin(fold bool) {
	C.QsciLexerVHDL_SetFoldAtBegin(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldAtParenthesis(fold bool) {
	C.QsciLexerVHDL_SetFoldAtParenthesis(this.h, (C.bool)(fold))
}

func QsciLexerVHDL_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerVHDL_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerVHDL) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerVHDL_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerVHDL) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetFoldComments
func miqt_exec_callback_QsciLexerVHDL_SetFoldComments(self *C.QsciLexerVHDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerVHDL) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerVHDL_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerVHDL) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetFoldCompact
func miqt_exec_callback_QsciLexerVHDL_SetFoldCompact(self *C.QsciLexerVHDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerVHDL) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerVHDL_virtualbase_SetFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerVHDL) OnSetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetFoldAtElse
func miqt_exec_callback_QsciLexerVHDL_SetFoldAtElse(self *C.QsciLexerVHDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}

func (this *QsciLexerVHDL) callVirtualBase_SetFoldAtBegin(fold bool) {

	C.QsciLexerVHDL_virtualbase_SetFoldAtBegin(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerVHDL) OnSetFoldAtBegin(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetFoldAtBegin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetFoldAtBegin
func miqt_exec_callback_QsciLexerVHDL_SetFoldAtBegin(self *C.QsciLexerVHDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetFoldAtBegin, slotval1)

}

func (this *QsciLexerVHDL) callVirtualBase_SetFoldAtParenthesis(fold bool) {

	C.QsciLexerVHDL_virtualbase_SetFoldAtParenthesis(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerVHDL) OnSetFoldAtParenthesis(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetFoldAtParenthesis(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetFoldAtParenthesis
func miqt_exec_callback_QsciLexerVHDL_SetFoldAtParenthesis(self *C.QsciLexerVHDL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetFoldAtParenthesis, slotval1)

}
func (this *QsciLexerVHDL) OnLanguage(slot func() string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_Language
func miqt_exec_callback_QsciLexerVHDL_Language(self *C.QsciLexerVHDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerVHDL_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerVHDL) OnLexer(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_Lexer
func miqt_exec_callback_QsciLexerVHDL_Lexer(self *C.QsciLexerVHDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerVHDL_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerVHDL) OnLexerId(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_LexerId
func miqt_exec_callback_QsciLexerVHDL_LexerId(self *C.QsciLexerVHDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerVHDL_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerVHDL) OnAutoCompletionFillups(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_AutoCompletionFillups
func miqt_exec_callback_QsciLexerVHDL_AutoCompletionFillups(self *C.QsciLexerVHDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerVHDL_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerVHDL) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerVHDL_AutoCompletionWordSeparators(self *C.QsciLexerVHDL, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerVHDL) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerVHDL_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerVHDL) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_BlockEnd
func miqt_exec_callback_QsciLexerVHDL_BlockEnd(self *C.QsciLexerVHDL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerVHDL_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerVHDL) OnBlockLookback(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_BlockLookback
func miqt_exec_callback_QsciLexerVHDL_BlockLookback(self *C.QsciLexerVHDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerVHDL_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerVHDL) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_BlockStart
func miqt_exec_callback_QsciLexerVHDL_BlockStart(self *C.QsciLexerVHDL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerVHDL_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerVHDL) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_BlockStartKeyword
func miqt_exec_callback_QsciLexerVHDL_BlockStartKeyword(self *C.QsciLexerVHDL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerVHDL_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerVHDL) OnBraceStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_BraceStyle
func miqt_exec_callback_QsciLexerVHDL_BraceStyle(self *C.QsciLexerVHDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerVHDL_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerVHDL) OnCaseSensitive(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_CaseSensitive
func miqt_exec_callback_QsciLexerVHDL_CaseSensitive(self *C.QsciLexerVHDL, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_Color(style int) *qt6.QColor {

	_ret := C.QsciLexerVHDL_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerVHDL) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_Color
func miqt_exec_callback_QsciLexerVHDL_Color(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerVHDL) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerVHDL_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerVHDL) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_EolFill
func miqt_exec_callback_QsciLexerVHDL_EolFill(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_Font(style int) *qt6.QFont {

	_ret := C.QsciLexerVHDL_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerVHDL) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_Font
func miqt_exec_callback_QsciLexerVHDL_Font(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerVHDL) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerVHDL_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerVHDL) OnIndentationGuideView(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_IndentationGuideView
func miqt_exec_callback_QsciLexerVHDL_IndentationGuideView(self *C.QsciLexerVHDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerVHDL_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerVHDL) OnKeywords(slot func(super func(set int) string, set int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_Keywords
func miqt_exec_callback_QsciLexerVHDL_Keywords(self *C.QsciLexerVHDL, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerVHDL_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerVHDL) OnDefaultStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_DefaultStyle
func miqt_exec_callback_QsciLexerVHDL_DefaultStyle(self *C.QsciLexerVHDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerVHDL) OnDescription(slot func(style int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_Description
func miqt_exec_callback_QsciLexerVHDL_Description(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerVHDL) callVirtualBase_Paper(style int) *qt6.QColor {

	_ret := C.QsciLexerVHDL_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerVHDL) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_Paper
func miqt_exec_callback_QsciLexerVHDL_Paper(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerVHDL) callVirtualBase_DefaultColorWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerVHDL_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerVHDL) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerVHDL_DefaultColorWithStyle(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerVHDL) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerVHDL_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerVHDL) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_DefaultEolFill
func miqt_exec_callback_QsciLexerVHDL_DefaultEolFill(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_DefaultFontWithStyle(style int) *qt6.QFont {

	_ret := C.QsciLexerVHDL_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerVHDL) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerVHDL_DefaultFontWithStyle(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerVHDL) callVirtualBase_DefaultPaperWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerVHDL_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerVHDL) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerVHDL_DefaultPaperWithStyle(self *C.QsciLexerVHDL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerVHDL) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerVHDL_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerVHDL) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetEditor
func miqt_exec_callback_QsciLexerVHDL_SetEditor(self *C.QsciLexerVHDL, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerVHDL) callVirtualBase_RefreshProperties() {

	C.QsciLexerVHDL_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerVHDL) OnRefreshProperties(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_RefreshProperties
func miqt_exec_callback_QsciLexerVHDL_RefreshProperties(self *C.QsciLexerVHDL, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerVHDL) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerVHDL_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerVHDL) OnStyleBitsNeeded(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_StyleBitsNeeded
func miqt_exec_callback_QsciLexerVHDL_StyleBitsNeeded(self *C.QsciLexerVHDL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerVHDL_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerVHDL) OnWordCharacters(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_WordCharacters
func miqt_exec_callback_QsciLexerVHDL_WordCharacters(self *C.QsciLexerVHDL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerVHDL) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerVHDL_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerVHDL) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerVHDL_SetAutoIndentStyle(self *C.QsciLexerVHDL, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerVHDL) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerVHDL_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerVHDL) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetColor
func miqt_exec_callback_QsciLexerVHDL_SetColor(self *C.QsciLexerVHDL, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerVHDL) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerVHDL_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerVHDL) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetEolFill
func miqt_exec_callback_QsciLexerVHDL_SetEolFill(self *C.QsciLexerVHDL, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerVHDL) callVirtualBase_SetFont(f *qt6.QFont, style int) {

	C.QsciLexerVHDL_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerVHDL) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetFont
func miqt_exec_callback_QsciLexerVHDL_SetFont(self *C.QsciLexerVHDL, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerVHDL) callVirtualBase_SetPaper(c *qt6.QColor, style int) {

	C.QsciLexerVHDL_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerVHDL) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_SetPaper
func miqt_exec_callback_QsciLexerVHDL_SetPaper(self *C.QsciLexerVHDL, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerVHDL) callVirtualBase_ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerVHDL_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerVHDL) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_ReadProperties
func miqt_exec_callback_QsciLexerVHDL_ReadProperties(self *C.QsciLexerVHDL, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerVHDL) callVirtualBase_WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerVHDL_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerVHDL) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerVHDL_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerVHDL_WriteProperties
func miqt_exec_callback_QsciLexerVHDL_WriteProperties(self *C.QsciLexerVHDL, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs), nil)
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerVHDL{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerVHDL) Delete() {
	C.QsciLexerVHDL_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerVHDL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerVHDL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

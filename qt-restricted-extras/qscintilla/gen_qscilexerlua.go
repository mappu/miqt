package qscintilla

/*

#include "gen_qscilexerlua.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerLua__ int

const (
	QsciLexerLua__Default                      QsciLexerLua__ = 0
	QsciLexerLua__Comment                      QsciLexerLua__ = 1
	QsciLexerLua__LineComment                  QsciLexerLua__ = 2
	QsciLexerLua__Number                       QsciLexerLua__ = 4
	QsciLexerLua__Keyword                      QsciLexerLua__ = 5
	QsciLexerLua__String                       QsciLexerLua__ = 6
	QsciLexerLua__Character                    QsciLexerLua__ = 7
	QsciLexerLua__LiteralString                QsciLexerLua__ = 8
	QsciLexerLua__Preprocessor                 QsciLexerLua__ = 9
	QsciLexerLua__Operator                     QsciLexerLua__ = 10
	QsciLexerLua__Identifier                   QsciLexerLua__ = 11
	QsciLexerLua__UnclosedString               QsciLexerLua__ = 12
	QsciLexerLua__BasicFunctions               QsciLexerLua__ = 13
	QsciLexerLua__StringTableMathsFunctions    QsciLexerLua__ = 14
	QsciLexerLua__CoroutinesIOSystemFacilities QsciLexerLua__ = 15
	QsciLexerLua__KeywordSet5                  QsciLexerLua__ = 16
	QsciLexerLua__KeywordSet6                  QsciLexerLua__ = 17
	QsciLexerLua__KeywordSet7                  QsciLexerLua__ = 18
	QsciLexerLua__KeywordSet8                  QsciLexerLua__ = 19
	QsciLexerLua__Label                        QsciLexerLua__ = 20
)

type QsciLexerLua struct {
	h          *C.QsciLexerLua
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerLua) cPointer() *C.QsciLexerLua {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerLua) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerLua constructs the type using only CGO pointers.
func newQsciLexerLua(h *C.QsciLexerLua, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerLua {
	if h == nil {
		return nil
	}
	return &QsciLexerLua{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerLua constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerLua(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerLua {
	if h == nil {
		return nil
	}

	return &QsciLexerLua{h: (*C.QsciLexerLua)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerLua constructs a new QsciLexerLua object.
func NewQsciLexerLua() *QsciLexerLua {
	var outptr_QsciLexerLua *C.QsciLexerLua = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerLua_new(&outptr_QsciLexerLua, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerLua(outptr_QsciLexerLua, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerLua2 constructs a new QsciLexerLua object.
func NewQsciLexerLua2(parent *qt.QObject) *QsciLexerLua {
	var outptr_QsciLexerLua *C.QsciLexerLua = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerLua_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerLua, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerLua(outptr_QsciLexerLua, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerLua) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerLua_MetaObject(this.h)))
}

func (this *QsciLexerLua) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerLua_Metacast(this.h, param1_Cstring))
}

func QsciLexerLua_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerLua_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerLua) Language() string {
	_ret := C.QsciLexerLua_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerLua) Lexer() string {
	_ret := C.QsciLexerLua_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerLua) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerLua_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerLua) BlockStart() string {
	_ret := C.QsciLexerLua_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerLua) BraceStyle() int {
	return (int)(C.QsciLexerLua_BraceStyle(this.h))
}

func (this *QsciLexerLua) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerLua_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerLua) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerLua_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerLua) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerLua_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerLua) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerLua_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerLua) Keywords(set int) string {
	_ret := C.QsciLexerLua_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerLua) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerLua_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerLua) RefreshProperties() {
	C.QsciLexerLua_RefreshProperties(this.h)
}

func (this *QsciLexerLua) FoldCompact() bool {
	return (bool)(C.QsciLexerLua_FoldCompact(this.h))
}

func (this *QsciLexerLua) SetFoldCompact(fold bool) {
	C.QsciLexerLua_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerLua_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerLua_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerLua_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerLua_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerLua_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerLua) BlockStart1(style *int) string {
	_ret := C.QsciLexerLua_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerLua) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerLua_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerLua) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerLua_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_SetFoldCompact
func miqt_exec_callback_QsciLexerLua_SetFoldCompact(self *C.QsciLexerLua, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}
func (this *QsciLexerLua) OnLanguage(slot func() string) {
	C.QsciLexerLua_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_Language
func miqt_exec_callback_QsciLexerLua_Language(self *C.QsciLexerLua, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerLua_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerLua) OnLexer(slot func(super func() string) string) {
	C.QsciLexerLua_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_Lexer
func miqt_exec_callback_QsciLexerLua_Lexer(self *C.QsciLexerLua, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerLua_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerLua) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerLua_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_LexerId
func miqt_exec_callback_QsciLexerLua_LexerId(self *C.QsciLexerLua, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerLua_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerLua) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerLua_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_AutoCompletionFillups
func miqt_exec_callback_QsciLexerLua_AutoCompletionFillups(self *C.QsciLexerLua, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerLua_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerLua) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerLua_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerLua_AutoCompletionWordSeparators(self *C.QsciLexerLua, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerLua) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerLua_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerLua) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerLua_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_BlockEnd
func miqt_exec_callback_QsciLexerLua_BlockEnd(self *C.QsciLexerLua, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerLua_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerLua) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerLua_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_BlockLookback
func miqt_exec_callback_QsciLexerLua_BlockLookback(self *C.QsciLexerLua, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerLua_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerLua) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerLua_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_BlockStart
func miqt_exec_callback_QsciLexerLua_BlockStart(self *C.QsciLexerLua, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerLua_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerLua) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerLua_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_BlockStartKeyword
func miqt_exec_callback_QsciLexerLua_BlockStartKeyword(self *C.QsciLexerLua, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerLua_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerLua) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerLua_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_BraceStyle
func miqt_exec_callback_QsciLexerLua_BraceStyle(self *C.QsciLexerLua, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerLua_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerLua) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerLua_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_CaseSensitive
func miqt_exec_callback_QsciLexerLua_CaseSensitive(self *C.QsciLexerLua, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexerLua_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerLua) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerLua_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_Color
func miqt_exec_callback_QsciLexerLua_Color(self *C.QsciLexerLua, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerLua) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerLua_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerLua) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerLua_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_EolFill
func miqt_exec_callback_QsciLexerLua_EolFill(self *C.QsciLexerLua, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexerLua_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerLua) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerLua_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_Font
func miqt_exec_callback_QsciLexerLua_Font(self *C.QsciLexerLua, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerLua) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerLua_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerLua) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerLua_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_IndentationGuideView
func miqt_exec_callback_QsciLexerLua_IndentationGuideView(self *C.QsciLexerLua, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerLua_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerLua) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerLua_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_Keywords
func miqt_exec_callback_QsciLexerLua_Keywords(self *C.QsciLexerLua, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerLua_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerLua) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerLua_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_DefaultStyle
func miqt_exec_callback_QsciLexerLua_DefaultStyle(self *C.QsciLexerLua, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerLua) OnDescription(slot func(style int) string) {
	C.QsciLexerLua_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_Description
func miqt_exec_callback_QsciLexerLua_Description(self *C.QsciLexerLua, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerLua) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexerLua_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerLua) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerLua_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_Paper
func miqt_exec_callback_QsciLexerLua_Paper(self *C.QsciLexerLua, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerLua) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerLua_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerLua) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerLua_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerLua_DefaultColorWithStyle(self *C.QsciLexerLua, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerLua) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerLua_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerLua) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerLua_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_DefaultEolFill
func miqt_exec_callback_QsciLexerLua_DefaultEolFill(self *C.QsciLexerLua, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexerLua_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerLua) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerLua_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerLua_DefaultFontWithStyle(self *C.QsciLexerLua, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerLua) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerLua_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerLua) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerLua_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerLua_DefaultPaperWithStyle(self *C.QsciLexerLua, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerLua) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerLua_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerLua) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerLua_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_SetEditor
func miqt_exec_callback_QsciLexerLua_SetEditor(self *C.QsciLexerLua, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerLua) callVirtualBase_RefreshProperties() {

	C.QsciLexerLua_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerLua) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerLua_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_RefreshProperties
func miqt_exec_callback_QsciLexerLua_RefreshProperties(self *C.QsciLexerLua, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerLua) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerLua_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerLua) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerLua_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_StyleBitsNeeded
func miqt_exec_callback_QsciLexerLua_StyleBitsNeeded(self *C.QsciLexerLua, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerLua_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerLua) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerLua_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_WordCharacters
func miqt_exec_callback_QsciLexerLua_WordCharacters(self *C.QsciLexerLua, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerLua) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerLua_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerLua) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerLua_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerLua_SetAutoIndentStyle(self *C.QsciLexerLua, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerLua) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerLua_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerLua) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerLua_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_SetColor
func miqt_exec_callback_QsciLexerLua_SetColor(self *C.QsciLexerLua, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerLua) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerLua_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerLua) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerLua_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_SetEolFill
func miqt_exec_callback_QsciLexerLua_SetEolFill(self *C.QsciLexerLua, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerLua) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerLua_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerLua) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	C.QsciLexerLua_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_SetFont
func miqt_exec_callback_QsciLexerLua_SetFont(self *C.QsciLexerLua, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerLua) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerLua_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerLua) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerLua_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_SetPaper
func miqt_exec_callback_QsciLexerLua_SetPaper(self *C.QsciLexerLua, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerLua{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerLua) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerLua_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerLua) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerLua_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_ReadProperties
func miqt_exec_callback_QsciLexerLua_ReadProperties(self *C.QsciLexerLua, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerLua) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerLua_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerLua) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerLua_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerLua_WriteProperties
func miqt_exec_callback_QsciLexerLua_WriteProperties(self *C.QsciLexerLua, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerLua{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerLua) Delete() {
	C.QsciLexerLua_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerLua) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerLua) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

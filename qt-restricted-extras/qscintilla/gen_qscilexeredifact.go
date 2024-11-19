package qscintilla

/*

#include "gen_qscilexeredifact.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerEDIFACT__ int

const (
	QsciLexerEDIFACT__Default            QsciLexerEDIFACT__ = 0
	QsciLexerEDIFACT__SegmentStart       QsciLexerEDIFACT__ = 1
	QsciLexerEDIFACT__SegmentEnd         QsciLexerEDIFACT__ = 2
	QsciLexerEDIFACT__ElementSeparator   QsciLexerEDIFACT__ = 3
	QsciLexerEDIFACT__CompositeSeparator QsciLexerEDIFACT__ = 4
	QsciLexerEDIFACT__ReleaseSeparator   QsciLexerEDIFACT__ = 5
	QsciLexerEDIFACT__UNASegmentHeader   QsciLexerEDIFACT__ = 6
	QsciLexerEDIFACT__UNHSegmentHeader   QsciLexerEDIFACT__ = 7
	QsciLexerEDIFACT__BadSegment         QsciLexerEDIFACT__ = 8
)

type QsciLexerEDIFACT struct {
	h          *C.QsciLexerEDIFACT
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerEDIFACT) cPointer() *C.QsciLexerEDIFACT {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerEDIFACT) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerEDIFACT constructs the type using only CGO pointers.
func newQsciLexerEDIFACT(h *C.QsciLexerEDIFACT, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerEDIFACT {
	if h == nil {
		return nil
	}
	return &QsciLexerEDIFACT{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerEDIFACT constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerEDIFACT(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerEDIFACT {
	if h == nil {
		return nil
	}

	return &QsciLexerEDIFACT{h: (*C.QsciLexerEDIFACT)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerEDIFACT constructs a new QsciLexerEDIFACT object.
func NewQsciLexerEDIFACT() *QsciLexerEDIFACT {
	var outptr_QsciLexerEDIFACT *C.QsciLexerEDIFACT = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerEDIFACT_new(&outptr_QsciLexerEDIFACT, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerEDIFACT(outptr_QsciLexerEDIFACT, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerEDIFACT2 constructs a new QsciLexerEDIFACT object.
func NewQsciLexerEDIFACT2(parent *qt.QObject) *QsciLexerEDIFACT {
	var outptr_QsciLexerEDIFACT *C.QsciLexerEDIFACT = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerEDIFACT_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerEDIFACT, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerEDIFACT(outptr_QsciLexerEDIFACT, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerEDIFACT) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerEDIFACT_MetaObject(this.h)))
}

func (this *QsciLexerEDIFACT) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerEDIFACT_Metacast(this.h, param1_Cstring))
}

func QsciLexerEDIFACT_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerEDIFACT_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerEDIFACT) Language() string {
	_ret := C.QsciLexerEDIFACT_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerEDIFACT) Lexer() string {
	_ret := C.QsciLexerEDIFACT_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerEDIFACT) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerEDIFACT_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerEDIFACT) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerEDIFACT_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerEDIFACT_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerEDIFACT_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerEDIFACT_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerEDIFACT) callVirtualBase_Language() string {

	_ret := C.QsciLexerEDIFACT_virtualbase_Language(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnLanguage(slot func(super func() string) string) {
	C.QsciLexerEDIFACT_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_Language
func miqt_exec_callback_QsciLexerEDIFACT_Language(self *C.QsciLexerEDIFACT, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_Language)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerEDIFACT_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnLexer(slot func(super func() string) string) {
	C.QsciLexerEDIFACT_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_Lexer
func miqt_exec_callback_QsciLexerEDIFACT_Lexer(self *C.QsciLexerEDIFACT, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerEDIFACT_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerEDIFACT) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerEDIFACT_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_LexerId
func miqt_exec_callback_QsciLexerEDIFACT_LexerId(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerEDIFACT_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerEDIFACT_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_AutoCompletionFillups
func miqt_exec_callback_QsciLexerEDIFACT_AutoCompletionFillups(self *C.QsciLexerEDIFACT, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerEDIFACT_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerEDIFACT) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerEDIFACT_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerEDIFACT_AutoCompletionWordSeparators(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerEDIFACT) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerEDIFACT_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerEDIFACT_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_BlockEnd
func miqt_exec_callback_QsciLexerEDIFACT_BlockEnd(self *C.QsciLexerEDIFACT, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerEDIFACT_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerEDIFACT) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerEDIFACT_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_BlockLookback
func miqt_exec_callback_QsciLexerEDIFACT_BlockLookback(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerEDIFACT_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerEDIFACT_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_BlockStart
func miqt_exec_callback_QsciLexerEDIFACT_BlockStart(self *C.QsciLexerEDIFACT, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerEDIFACT_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerEDIFACT_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_BlockStartKeyword
func miqt_exec_callback_QsciLexerEDIFACT_BlockStartKeyword(self *C.QsciLexerEDIFACT, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerEDIFACT_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerEDIFACT) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerEDIFACT_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_BraceStyle
func miqt_exec_callback_QsciLexerEDIFACT_BraceStyle(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerEDIFACT_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerEDIFACT) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerEDIFACT_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_CaseSensitive
func miqt_exec_callback_QsciLexerEDIFACT_CaseSensitive(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexerEDIFACT_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerEDIFACT) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerEDIFACT_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_Color
func miqt_exec_callback_QsciLexerEDIFACT_Color(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerEDIFACT) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerEDIFACT_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerEDIFACT) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerEDIFACT_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_EolFill
func miqt_exec_callback_QsciLexerEDIFACT_EolFill(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexerEDIFACT_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerEDIFACT) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerEDIFACT_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_Font
func miqt_exec_callback_QsciLexerEDIFACT_Font(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerEDIFACT) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerEDIFACT_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerEDIFACT) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerEDIFACT_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_IndentationGuideView
func miqt_exec_callback_QsciLexerEDIFACT_IndentationGuideView(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerEDIFACT_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerEDIFACT_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_Keywords
func miqt_exec_callback_QsciLexerEDIFACT_Keywords(self *C.QsciLexerEDIFACT, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerEDIFACT_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerEDIFACT) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerEDIFACT_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_DefaultStyle
func miqt_exec_callback_QsciLexerEDIFACT_DefaultStyle(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_Description(style int) string {

	var _ms C.struct_miqt_string = C.QsciLexerEDIFACT_virtualbase_Description(unsafe.Pointer(this.h), (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciLexerEDIFACT) OnDescription(slot func(super func(style int) string, style int) string) {
	C.QsciLexerEDIFACT_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_Description
func miqt_exec_callback_QsciLexerEDIFACT_Description(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) string, style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_Description, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexerEDIFACT) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexerEDIFACT_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerEDIFACT) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerEDIFACT_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_Paper
func miqt_exec_callback_QsciLexerEDIFACT_Paper(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerEDIFACT) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerEDIFACT_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerEDIFACT) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerEDIFACT_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerEDIFACT_DefaultColorWithStyle(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerEDIFACT) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerEDIFACT_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerEDIFACT) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerEDIFACT_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_DefaultEolFill
func miqt_exec_callback_QsciLexerEDIFACT_DefaultEolFill(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexerEDIFACT_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerEDIFACT) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerEDIFACT_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerEDIFACT_DefaultFontWithStyle(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerEDIFACT) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerEDIFACT_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerEDIFACT) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerEDIFACT_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerEDIFACT_DefaultPaperWithStyle(self *C.QsciLexerEDIFACT, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerEDIFACT) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerEDIFACT_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerEDIFACT) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerEDIFACT_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_SetEditor
func miqt_exec_callback_QsciLexerEDIFACT_SetEditor(self *C.QsciLexerEDIFACT, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerEDIFACT) callVirtualBase_RefreshProperties() {

	C.QsciLexerEDIFACT_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerEDIFACT) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerEDIFACT_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_RefreshProperties
func miqt_exec_callback_QsciLexerEDIFACT_RefreshProperties(self *C.QsciLexerEDIFACT, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerEDIFACT) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerEDIFACT_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerEDIFACT) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerEDIFACT_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_StyleBitsNeeded
func miqt_exec_callback_QsciLexerEDIFACT_StyleBitsNeeded(self *C.QsciLexerEDIFACT, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerEDIFACT_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerEDIFACT) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerEDIFACT_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_WordCharacters
func miqt_exec_callback_QsciLexerEDIFACT_WordCharacters(self *C.QsciLexerEDIFACT, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerEDIFACT) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerEDIFACT_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerEDIFACT) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerEDIFACT_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerEDIFACT_SetAutoIndentStyle(self *C.QsciLexerEDIFACT, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerEDIFACT) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerEDIFACT_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerEDIFACT) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerEDIFACT_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_SetColor
func miqt_exec_callback_QsciLexerEDIFACT_SetColor(self *C.QsciLexerEDIFACT, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerEDIFACT) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerEDIFACT_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerEDIFACT) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerEDIFACT_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_SetEolFill
func miqt_exec_callback_QsciLexerEDIFACT_SetEolFill(self *C.QsciLexerEDIFACT, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerEDIFACT) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerEDIFACT_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerEDIFACT) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	C.QsciLexerEDIFACT_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_SetFont
func miqt_exec_callback_QsciLexerEDIFACT_SetFont(self *C.QsciLexerEDIFACT, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerEDIFACT) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerEDIFACT_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerEDIFACT) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerEDIFACT_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_SetPaper
func miqt_exec_callback_QsciLexerEDIFACT_SetPaper(self *C.QsciLexerEDIFACT, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerEDIFACT) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerEDIFACT_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerEDIFACT) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerEDIFACT_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_ReadProperties
func miqt_exec_callback_QsciLexerEDIFACT_ReadProperties(self *C.QsciLexerEDIFACT, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerEDIFACT) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerEDIFACT_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerEDIFACT) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerEDIFACT_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerEDIFACT_WriteProperties
func miqt_exec_callback_QsciLexerEDIFACT_WriteProperties(self *C.QsciLexerEDIFACT, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerEDIFACT{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerEDIFACT) Delete() {
	C.QsciLexerEDIFACT_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerEDIFACT) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerEDIFACT) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

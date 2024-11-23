package qscintilla

/*

#include "gen_qscilexerruby.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerRuby__ int

const (
	QsciLexerRuby__Default               QsciLexerRuby__ = 0
	QsciLexerRuby__Error                 QsciLexerRuby__ = 1
	QsciLexerRuby__Comment               QsciLexerRuby__ = 2
	QsciLexerRuby__POD                   QsciLexerRuby__ = 3
	QsciLexerRuby__Number                QsciLexerRuby__ = 4
	QsciLexerRuby__Keyword               QsciLexerRuby__ = 5
	QsciLexerRuby__DoubleQuotedString    QsciLexerRuby__ = 6
	QsciLexerRuby__SingleQuotedString    QsciLexerRuby__ = 7
	QsciLexerRuby__ClassName             QsciLexerRuby__ = 8
	QsciLexerRuby__FunctionMethodName    QsciLexerRuby__ = 9
	QsciLexerRuby__Operator              QsciLexerRuby__ = 10
	QsciLexerRuby__Identifier            QsciLexerRuby__ = 11
	QsciLexerRuby__Regex                 QsciLexerRuby__ = 12
	QsciLexerRuby__Global                QsciLexerRuby__ = 13
	QsciLexerRuby__Symbol                QsciLexerRuby__ = 14
	QsciLexerRuby__ModuleName            QsciLexerRuby__ = 15
	QsciLexerRuby__InstanceVariable      QsciLexerRuby__ = 16
	QsciLexerRuby__ClassVariable         QsciLexerRuby__ = 17
	QsciLexerRuby__Backticks             QsciLexerRuby__ = 18
	QsciLexerRuby__DataSection           QsciLexerRuby__ = 19
	QsciLexerRuby__HereDocumentDelimiter QsciLexerRuby__ = 20
	QsciLexerRuby__HereDocument          QsciLexerRuby__ = 21
	QsciLexerRuby__PercentStringq        QsciLexerRuby__ = 24
	QsciLexerRuby__PercentStringQ        QsciLexerRuby__ = 25
	QsciLexerRuby__PercentStringx        QsciLexerRuby__ = 26
	QsciLexerRuby__PercentStringr        QsciLexerRuby__ = 27
	QsciLexerRuby__PercentStringw        QsciLexerRuby__ = 28
	QsciLexerRuby__DemotedKeyword        QsciLexerRuby__ = 29
	QsciLexerRuby__Stdin                 QsciLexerRuby__ = 30
	QsciLexerRuby__Stdout                QsciLexerRuby__ = 31
	QsciLexerRuby__Stderr                QsciLexerRuby__ = 40
)

type QsciLexerRuby struct {
	h          *C.QsciLexerRuby
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerRuby) cPointer() *C.QsciLexerRuby {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerRuby) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerRuby constructs the type using only CGO pointers.
func newQsciLexerRuby(h *C.QsciLexerRuby, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerRuby {
	if h == nil {
		return nil
	}
	return &QsciLexerRuby{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerRuby constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerRuby(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerRuby {
	if h == nil {
		return nil
	}

	return &QsciLexerRuby{h: (*C.QsciLexerRuby)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerRuby constructs a new QsciLexerRuby object.
func NewQsciLexerRuby() *QsciLexerRuby {
	var outptr_QsciLexerRuby *C.QsciLexerRuby = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerRuby_new(&outptr_QsciLexerRuby, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerRuby(outptr_QsciLexerRuby, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerRuby2 constructs a new QsciLexerRuby object.
func NewQsciLexerRuby2(parent *qt.QObject) *QsciLexerRuby {
	var outptr_QsciLexerRuby *C.QsciLexerRuby = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerRuby_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerRuby, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerRuby(outptr_QsciLexerRuby, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerRuby) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerRuby_MetaObject(this.h)))
}

func (this *QsciLexerRuby) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerRuby_Metacast(this.h, param1_Cstring))
}

func QsciLexerRuby_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerRuby_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerRuby) Language() string {
	_ret := C.QsciLexerRuby_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) Lexer() string {
	_ret := C.QsciLexerRuby_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockEnd() string {
	_ret := C.QsciLexerRuby_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStart() string {
	_ret := C.QsciLexerRuby_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStartKeyword() string {
	_ret := C.QsciLexerRuby_BlockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BraceStyle() int {
	return (int)(C.QsciLexerRuby_BraceStyle(this.h))
}

func (this *QsciLexerRuby) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerRuby_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerRuby) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerRuby_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerRuby) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerRuby_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerRuby) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerRuby_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerRuby) Keywords(set int) string {
	_ret := C.QsciLexerRuby_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerRuby) RefreshProperties() {
	C.QsciLexerRuby_RefreshProperties(this.h)
}

func (this *QsciLexerRuby) SetFoldComments(fold bool) {
	C.QsciLexerRuby_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerRuby) FoldComments() bool {
	return (bool)(C.QsciLexerRuby_FoldComments(this.h))
}

func (this *QsciLexerRuby) SetFoldCompact(fold bool) {
	C.QsciLexerRuby_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerRuby) FoldCompact() bool {
	return (bool)(C.QsciLexerRuby_FoldCompact(this.h))
}

func QsciLexerRuby_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerRuby_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerRuby_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerRuby_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerRuby_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerRuby) BlockEnd1(style *int) string {
	_ret := C.QsciLexerRuby_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStart1(style *int) string {
	_ret := C.QsciLexerRuby_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerRuby) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerRuby_BlockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}
func (this *QsciLexerRuby) OnLanguage(slot func() string) {
	C.QsciLexerRuby_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_Language
func miqt_exec_callback_QsciLexerRuby_Language(self *C.QsciLexerRuby, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerRuby_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerRuby) OnLexer(slot func(super func() string) string) {
	C.QsciLexerRuby_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_Lexer
func miqt_exec_callback_QsciLexerRuby_Lexer(self *C.QsciLexerRuby, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerRuby_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerRuby) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerRuby_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_LexerId
func miqt_exec_callback_QsciLexerRuby_LexerId(self *C.QsciLexerRuby, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerRuby_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerRuby) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerRuby_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_AutoCompletionFillups
func miqt_exec_callback_QsciLexerRuby_AutoCompletionFillups(self *C.QsciLexerRuby, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerRuby_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerRuby) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerRuby_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerRuby_AutoCompletionWordSeparators(self *C.QsciLexerRuby, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerRuby) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerRuby_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerRuby) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerRuby_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_BlockEnd
func miqt_exec_callback_QsciLexerRuby_BlockEnd(self *C.QsciLexerRuby, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerRuby_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerRuby) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerRuby_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_BlockLookback
func miqt_exec_callback_QsciLexerRuby_BlockLookback(self *C.QsciLexerRuby, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerRuby_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerRuby) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerRuby_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_BlockStart
func miqt_exec_callback_QsciLexerRuby_BlockStart(self *C.QsciLexerRuby, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerRuby_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerRuby) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerRuby_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_BlockStartKeyword
func miqt_exec_callback_QsciLexerRuby_BlockStartKeyword(self *C.QsciLexerRuby, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerRuby_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerRuby) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerRuby_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_BraceStyle
func miqt_exec_callback_QsciLexerRuby_BraceStyle(self *C.QsciLexerRuby, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerRuby_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerRuby) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerRuby_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_CaseSensitive
func miqt_exec_callback_QsciLexerRuby_CaseSensitive(self *C.QsciLexerRuby, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexerRuby_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerRuby) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerRuby_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_Color
func miqt_exec_callback_QsciLexerRuby_Color(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerRuby) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerRuby_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerRuby) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerRuby_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_EolFill
func miqt_exec_callback_QsciLexerRuby_EolFill(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexerRuby_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerRuby) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerRuby_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_Font
func miqt_exec_callback_QsciLexerRuby_Font(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerRuby) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerRuby_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerRuby) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerRuby_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_IndentationGuideView
func miqt_exec_callback_QsciLexerRuby_IndentationGuideView(self *C.QsciLexerRuby, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerRuby_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerRuby) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerRuby_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_Keywords
func miqt_exec_callback_QsciLexerRuby_Keywords(self *C.QsciLexerRuby, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerRuby_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerRuby) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerRuby_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_DefaultStyle
func miqt_exec_callback_QsciLexerRuby_DefaultStyle(self *C.QsciLexerRuby, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerRuby) OnDescription(slot func(style int) string) {
	C.QsciLexerRuby_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_Description
func miqt_exec_callback_QsciLexerRuby_Description(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerRuby) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexerRuby_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerRuby) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerRuby_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_Paper
func miqt_exec_callback_QsciLexerRuby_Paper(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerRuby) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerRuby_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerRuby) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerRuby_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerRuby_DefaultColorWithStyle(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerRuby) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerRuby_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerRuby) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerRuby_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_DefaultEolFill
func miqt_exec_callback_QsciLexerRuby_DefaultEolFill(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexerRuby_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerRuby) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerRuby_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerRuby_DefaultFontWithStyle(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerRuby) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerRuby_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerRuby) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerRuby_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerRuby_DefaultPaperWithStyle(self *C.QsciLexerRuby, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerRuby) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerRuby_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerRuby) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerRuby_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_SetEditor
func miqt_exec_callback_QsciLexerRuby_SetEditor(self *C.QsciLexerRuby, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerRuby{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerRuby) callVirtualBase_RefreshProperties() {

	C.QsciLexerRuby_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerRuby) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerRuby_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_RefreshProperties
func miqt_exec_callback_QsciLexerRuby_RefreshProperties(self *C.QsciLexerRuby, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerRuby{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerRuby) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerRuby_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerRuby) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerRuby_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_StyleBitsNeeded
func miqt_exec_callback_QsciLexerRuby_StyleBitsNeeded(self *C.QsciLexerRuby, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerRuby_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerRuby) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerRuby_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_WordCharacters
func miqt_exec_callback_QsciLexerRuby_WordCharacters(self *C.QsciLexerRuby, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerRuby) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerRuby_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerRuby) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerRuby_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerRuby_SetAutoIndentStyle(self *C.QsciLexerRuby, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerRuby{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerRuby) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerRuby_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerRuby) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerRuby_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_SetColor
func miqt_exec_callback_QsciLexerRuby_SetColor(self *C.QsciLexerRuby, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerRuby{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerRuby) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerRuby_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerRuby) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerRuby_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_SetEolFill
func miqt_exec_callback_QsciLexerRuby_SetEolFill(self *C.QsciLexerRuby, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerRuby{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerRuby) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerRuby_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerRuby) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	C.QsciLexerRuby_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_SetFont
func miqt_exec_callback_QsciLexerRuby_SetFont(self *C.QsciLexerRuby, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerRuby{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerRuby) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerRuby_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerRuby) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerRuby_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_SetPaper
func miqt_exec_callback_QsciLexerRuby_SetPaper(self *C.QsciLexerRuby, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerRuby{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerRuby) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerRuby_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerRuby) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerRuby_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_ReadProperties
func miqt_exec_callback_QsciLexerRuby_ReadProperties(self *C.QsciLexerRuby, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerRuby) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerRuby_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerRuby) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerRuby_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerRuby_WriteProperties
func miqt_exec_callback_QsciLexerRuby_WriteProperties(self *C.QsciLexerRuby, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerRuby{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerRuby) Delete() {
	C.QsciLexerRuby_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerRuby) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerRuby) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

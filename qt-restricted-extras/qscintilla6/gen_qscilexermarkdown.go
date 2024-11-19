package qscintilla6

/*

#include "gen_qscilexermarkdown.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerMarkdown__ int

const (
	QsciLexerMarkdown__Default                   QsciLexerMarkdown__ = 0
	QsciLexerMarkdown__Special                   QsciLexerMarkdown__ = 1
	QsciLexerMarkdown__StrongEmphasisAsterisks   QsciLexerMarkdown__ = 2
	QsciLexerMarkdown__StrongEmphasisUnderscores QsciLexerMarkdown__ = 3
	QsciLexerMarkdown__EmphasisAsterisks         QsciLexerMarkdown__ = 4
	QsciLexerMarkdown__EmphasisUnderscores       QsciLexerMarkdown__ = 5
	QsciLexerMarkdown__Header1                   QsciLexerMarkdown__ = 6
	QsciLexerMarkdown__Header2                   QsciLexerMarkdown__ = 7
	QsciLexerMarkdown__Header3                   QsciLexerMarkdown__ = 8
	QsciLexerMarkdown__Header4                   QsciLexerMarkdown__ = 9
	QsciLexerMarkdown__Header5                   QsciLexerMarkdown__ = 10
	QsciLexerMarkdown__Header6                   QsciLexerMarkdown__ = 11
	QsciLexerMarkdown__Prechar                   QsciLexerMarkdown__ = 12
	QsciLexerMarkdown__UnorderedListItem         QsciLexerMarkdown__ = 13
	QsciLexerMarkdown__OrderedListItem           QsciLexerMarkdown__ = 14
	QsciLexerMarkdown__BlockQuote                QsciLexerMarkdown__ = 15
	QsciLexerMarkdown__StrikeOut                 QsciLexerMarkdown__ = 16
	QsciLexerMarkdown__HorizontalRule            QsciLexerMarkdown__ = 17
	QsciLexerMarkdown__Link                      QsciLexerMarkdown__ = 18
	QsciLexerMarkdown__CodeBackticks             QsciLexerMarkdown__ = 19
	QsciLexerMarkdown__CodeDoubleBackticks       QsciLexerMarkdown__ = 20
	QsciLexerMarkdown__CodeBlock                 QsciLexerMarkdown__ = 21
)

type QsciLexerMarkdown struct {
	h          *C.QsciLexerMarkdown
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerMarkdown) cPointer() *C.QsciLexerMarkdown {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerMarkdown) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerMarkdown constructs the type using only CGO pointers.
func newQsciLexerMarkdown(h *C.QsciLexerMarkdown, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerMarkdown {
	if h == nil {
		return nil
	}
	return &QsciLexerMarkdown{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerMarkdown constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerMarkdown(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerMarkdown {
	if h == nil {
		return nil
	}

	return &QsciLexerMarkdown{h: (*C.QsciLexerMarkdown)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerMarkdown constructs a new QsciLexerMarkdown object.
func NewQsciLexerMarkdown() *QsciLexerMarkdown {
	var outptr_QsciLexerMarkdown *C.QsciLexerMarkdown = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerMarkdown_new(&outptr_QsciLexerMarkdown, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerMarkdown(outptr_QsciLexerMarkdown, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerMarkdown2 constructs a new QsciLexerMarkdown object.
func NewQsciLexerMarkdown2(parent *qt6.QObject) *QsciLexerMarkdown {
	var outptr_QsciLexerMarkdown *C.QsciLexerMarkdown = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerMarkdown_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerMarkdown, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerMarkdown(outptr_QsciLexerMarkdown, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerMarkdown) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerMarkdown_MetaObject(this.h)))
}

func (this *QsciLexerMarkdown) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerMarkdown_Metacast(this.h, param1_Cstring))
}

func QsciLexerMarkdown_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerMarkdown) Language() string {
	_ret := C.QsciLexerMarkdown_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMarkdown) Lexer() string {
	_ret := C.QsciLexerMarkdown_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMarkdown) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerMarkdown_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerMarkdown_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerMarkdown_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMarkdown_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMarkdown_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerMarkdown) callVirtualBase_Language() string {

	_ret := C.QsciLexerMarkdown_virtualbase_Language(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnLanguage(slot func(super func() string) string) {
	C.QsciLexerMarkdown_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_Language
func miqt_exec_callback_QsciLexerMarkdown_Language(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Language)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerMarkdown_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnLexer(slot func(super func() string) string) {
	C.QsciLexerMarkdown_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_Lexer
func miqt_exec_callback_QsciLexerMarkdown_Lexer(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerMarkdown_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerMarkdown_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_LexerId
func miqt_exec_callback_QsciLexerMarkdown_LexerId(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerMarkdown_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerMarkdown_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_AutoCompletionFillups
func miqt_exec_callback_QsciLexerMarkdown_AutoCompletionFillups(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerMarkdown_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerMarkdown) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerMarkdown_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerMarkdown_AutoCompletionWordSeparators(self *C.QsciLexerMarkdown, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerMarkdown) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerMarkdown_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerMarkdown_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_BlockEnd
func miqt_exec_callback_QsciLexerMarkdown_BlockEnd(self *C.QsciLexerMarkdown, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerMarkdown_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerMarkdown_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_BlockLookback
func miqt_exec_callback_QsciLexerMarkdown_BlockLookback(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerMarkdown_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerMarkdown_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_BlockStart
func miqt_exec_callback_QsciLexerMarkdown_BlockStart(self *C.QsciLexerMarkdown, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerMarkdown_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerMarkdown_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_BlockStartKeyword
func miqt_exec_callback_QsciLexerMarkdown_BlockStartKeyword(self *C.QsciLexerMarkdown, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerMarkdown_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerMarkdown_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_BraceStyle
func miqt_exec_callback_QsciLexerMarkdown_BraceStyle(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerMarkdown_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerMarkdown_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_CaseSensitive
func miqt_exec_callback_QsciLexerMarkdown_CaseSensitive(self *C.QsciLexerMarkdown, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_Color(style int) *qt6.QColor {

	_ret := C.QsciLexerMarkdown_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerMarkdown_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_Color
func miqt_exec_callback_QsciLexerMarkdown_Color(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMarkdown) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerMarkdown_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerMarkdown) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerMarkdown_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_EolFill
func miqt_exec_callback_QsciLexerMarkdown_EolFill(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_Font(style int) *qt6.QFont {

	_ret := C.QsciLexerMarkdown_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	C.QsciLexerMarkdown_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_Font
func miqt_exec_callback_QsciLexerMarkdown_Font(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMarkdown) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerMarkdown_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerMarkdown_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_IndentationGuideView
func miqt_exec_callback_QsciLexerMarkdown_IndentationGuideView(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerMarkdown_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerMarkdown_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_Keywords
func miqt_exec_callback_QsciLexerMarkdown_Keywords(self *C.QsciLexerMarkdown, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerMarkdown_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerMarkdown_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_DefaultStyle
func miqt_exec_callback_QsciLexerMarkdown_DefaultStyle(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_Description(style int) string {

	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_virtualbase_Description(unsafe.Pointer(this.h), (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciLexerMarkdown) OnDescription(slot func(super func(style int) string, style int) string) {
	C.QsciLexerMarkdown_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_Description
func miqt_exec_callback_QsciLexerMarkdown_Description(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) string, style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Description, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexerMarkdown) callVirtualBase_Paper(style int) *qt6.QColor {

	_ret := C.QsciLexerMarkdown_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerMarkdown_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_Paper
func miqt_exec_callback_QsciLexerMarkdown_Paper(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMarkdown) callVirtualBase_DefaultColorWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerMarkdown_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerMarkdown_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerMarkdown_DefaultColorWithStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMarkdown) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerMarkdown_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerMarkdown) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerMarkdown_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_DefaultEolFill
func miqt_exec_callback_QsciLexerMarkdown_DefaultEolFill(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_DefaultFontWithStyle(style int) *qt6.QFont {

	_ret := C.QsciLexerMarkdown_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	C.QsciLexerMarkdown_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerMarkdown_DefaultFontWithStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMarkdown) callVirtualBase_DefaultPaperWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerMarkdown_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerMarkdown_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerMarkdown_DefaultPaperWithStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerMarkdown) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerMarkdown_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerMarkdown) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerMarkdown_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_SetEditor
func miqt_exec_callback_QsciLexerMarkdown_SetEditor(self *C.QsciLexerMarkdown, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_RefreshProperties() {

	C.QsciLexerMarkdown_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerMarkdown) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerMarkdown_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_RefreshProperties
func miqt_exec_callback_QsciLexerMarkdown_RefreshProperties(self *C.QsciLexerMarkdown, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerMarkdown) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerMarkdown_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerMarkdown_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_StyleBitsNeeded
func miqt_exec_callback_QsciLexerMarkdown_StyleBitsNeeded(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerMarkdown_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerMarkdown_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_WordCharacters
func miqt_exec_callback_QsciLexerMarkdown_WordCharacters(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerMarkdown_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerMarkdown) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerMarkdown_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerMarkdown_SetAutoIndentStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerMarkdown_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	C.QsciLexerMarkdown_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_SetColor
func miqt_exec_callback_QsciLexerMarkdown_SetColor(self *C.QsciLexerMarkdown, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerMarkdown) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerMarkdown_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerMarkdown_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_SetEolFill
func miqt_exec_callback_QsciLexerMarkdown_SetEolFill(self *C.QsciLexerMarkdown, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerMarkdown) callVirtualBase_SetFont(f *qt6.QFont, style int) {

	C.QsciLexerMarkdown_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	C.QsciLexerMarkdown_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_SetFont
func miqt_exec_callback_QsciLexerMarkdown_SetFont(self *C.QsciLexerMarkdown, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerMarkdown) callVirtualBase_SetPaper(c *qt6.QColor, style int) {

	C.QsciLexerMarkdown_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	C.QsciLexerMarkdown_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_SetPaper
func miqt_exec_callback_QsciLexerMarkdown_SetPaper(self *C.QsciLexerMarkdown, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerMarkdown) callVirtualBase_ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerMarkdown_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerMarkdown) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	C.QsciLexerMarkdown_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_ReadProperties
func miqt_exec_callback_QsciLexerMarkdown_ReadProperties(self *C.QsciLexerMarkdown, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerMarkdown_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerMarkdown) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	C.QsciLexerMarkdown_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerMarkdown_WriteProperties
func miqt_exec_callback_QsciLexerMarkdown_WriteProperties(self *C.QsciLexerMarkdown, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerMarkdown) Delete() {
	C.QsciLexerMarkdown_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerMarkdown) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerMarkdown) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

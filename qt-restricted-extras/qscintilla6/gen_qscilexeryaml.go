package qscintilla6

/*

#include "gen_qscilexeryaml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerYAML__ int

const (
	QsciLexerYAML__Default           QsciLexerYAML__ = 0
	QsciLexerYAML__Comment           QsciLexerYAML__ = 1
	QsciLexerYAML__Identifier        QsciLexerYAML__ = 2
	QsciLexerYAML__Keyword           QsciLexerYAML__ = 3
	QsciLexerYAML__Number            QsciLexerYAML__ = 4
	QsciLexerYAML__Reference         QsciLexerYAML__ = 5
	QsciLexerYAML__DocumentDelimiter QsciLexerYAML__ = 6
	QsciLexerYAML__TextBlockMarker   QsciLexerYAML__ = 7
	QsciLexerYAML__SyntaxErrorMarker QsciLexerYAML__ = 8
	QsciLexerYAML__Operator          QsciLexerYAML__ = 9
)

type QsciLexerYAML struct {
	h          *C.QsciLexerYAML
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerYAML) cPointer() *C.QsciLexerYAML {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerYAML) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerYAML constructs the type using only CGO pointers.
func newQsciLexerYAML(h *C.QsciLexerYAML, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerYAML {
	if h == nil {
		return nil
	}
	return &QsciLexerYAML{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerYAML constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerYAML(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerYAML {
	if h == nil {
		return nil
	}

	return &QsciLexerYAML{h: (*C.QsciLexerYAML)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerYAML constructs a new QsciLexerYAML object.
func NewQsciLexerYAML() *QsciLexerYAML {
	var outptr_QsciLexerYAML *C.QsciLexerYAML = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerYAML_new(&outptr_QsciLexerYAML, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerYAML(outptr_QsciLexerYAML, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerYAML2 constructs a new QsciLexerYAML object.
func NewQsciLexerYAML2(parent *qt6.QObject) *QsciLexerYAML {
	var outptr_QsciLexerYAML *C.QsciLexerYAML = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerYAML_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerYAML, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerYAML(outptr_QsciLexerYAML, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerYAML) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerYAML_MetaObject(this.h)))
}

func (this *QsciLexerYAML) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerYAML_Metacast(this.h, param1_Cstring))
}

func QsciLexerYAML_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerYAML) Language() string {
	_ret := C.QsciLexerYAML_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerYAML) Lexer() string {
	_ret := C.QsciLexerYAML_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerYAML) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerYAML_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerYAML) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerYAML_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerYAML) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerYAML_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerYAML) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerYAML_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerYAML) Keywords(set int) string {
	_ret := C.QsciLexerYAML_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerYAML) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerYAML) RefreshProperties() {
	C.QsciLexerYAML_RefreshProperties(this.h)
}

func (this *QsciLexerYAML) FoldComments() bool {
	return (bool)(C.QsciLexerYAML_FoldComments(this.h))
}

func (this *QsciLexerYAML) SetFoldComments(fold bool) {
	C.QsciLexerYAML_SetFoldComments(this.h, (C.bool)(fold))
}

func QsciLexerYAML_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerYAML_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerYAML_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerYAML) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerYAML_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerYAML) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerYAML_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_SetFoldComments
func miqt_exec_callback_QsciLexerYAML_SetFoldComments(self *C.QsciLexerYAML, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerYAML) callVirtualBase_Language() string {

	_ret := C.QsciLexerYAML_virtualbase_Language(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnLanguage(slot func(super func() string) string) {
	C.QsciLexerYAML_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_Language
func miqt_exec_callback_QsciLexerYAML_Language(self *C.QsciLexerYAML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_Language)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerYAML_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnLexer(slot func(super func() string) string) {
	C.QsciLexerYAML_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_Lexer
func miqt_exec_callback_QsciLexerYAML_Lexer(self *C.QsciLexerYAML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerYAML_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerYAML) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerYAML_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_LexerId
func miqt_exec_callback_QsciLexerYAML_LexerId(self *C.QsciLexerYAML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerYAML_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerYAML_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_AutoCompletionFillups
func miqt_exec_callback_QsciLexerYAML_AutoCompletionFillups(self *C.QsciLexerYAML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerYAML_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerYAML) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerYAML_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerYAML_AutoCompletionWordSeparators(self *C.QsciLexerYAML, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerYAML) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerYAML_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerYAML_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_BlockEnd
func miqt_exec_callback_QsciLexerYAML_BlockEnd(self *C.QsciLexerYAML, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerYAML_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerYAML) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerYAML_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_BlockLookback
func miqt_exec_callback_QsciLexerYAML_BlockLookback(self *C.QsciLexerYAML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerYAML_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerYAML_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_BlockStart
func miqt_exec_callback_QsciLexerYAML_BlockStart(self *C.QsciLexerYAML, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerYAML_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerYAML_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_BlockStartKeyword
func miqt_exec_callback_QsciLexerYAML_BlockStartKeyword(self *C.QsciLexerYAML, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerYAML_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerYAML) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerYAML_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_BraceStyle
func miqt_exec_callback_QsciLexerYAML_BraceStyle(self *C.QsciLexerYAML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerYAML_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerYAML) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerYAML_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_CaseSensitive
func miqt_exec_callback_QsciLexerYAML_CaseSensitive(self *C.QsciLexerYAML, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_Color(style int) *qt6.QColor {

	_ret := C.QsciLexerYAML_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerYAML) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerYAML_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_Color
func miqt_exec_callback_QsciLexerYAML_Color(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerYAML) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerYAML_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerYAML) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerYAML_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_EolFill
func miqt_exec_callback_QsciLexerYAML_EolFill(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_Font(style int) *qt6.QFont {

	_ret := C.QsciLexerYAML_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerYAML) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	C.QsciLexerYAML_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_Font
func miqt_exec_callback_QsciLexerYAML_Font(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerYAML) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerYAML_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerYAML) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerYAML_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_IndentationGuideView
func miqt_exec_callback_QsciLexerYAML_IndentationGuideView(self *C.QsciLexerYAML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerYAML_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerYAML_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_Keywords
func miqt_exec_callback_QsciLexerYAML_Keywords(self *C.QsciLexerYAML, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerYAML_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerYAML) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerYAML_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_DefaultStyle
func miqt_exec_callback_QsciLexerYAML_DefaultStyle(self *C.QsciLexerYAML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_Description(style int) string {

	var _ms C.struct_miqt_string = C.QsciLexerYAML_virtualbase_Description(unsafe.Pointer(this.h), (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciLexerYAML) OnDescription(slot func(super func(style int) string, style int) string) {
	C.QsciLexerYAML_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_Description
func miqt_exec_callback_QsciLexerYAML_Description(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) string, style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_Description, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexerYAML) callVirtualBase_Paper(style int) *qt6.QColor {

	_ret := C.QsciLexerYAML_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerYAML) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerYAML_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_Paper
func miqt_exec_callback_QsciLexerYAML_Paper(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerYAML) callVirtualBase_DefaultColorWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerYAML_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerYAML) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerYAML_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerYAML_DefaultColorWithStyle(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerYAML) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerYAML_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerYAML) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerYAML_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_DefaultEolFill
func miqt_exec_callback_QsciLexerYAML_DefaultEolFill(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_DefaultFontWithStyle(style int) *qt6.QFont {

	_ret := C.QsciLexerYAML_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerYAML) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	C.QsciLexerYAML_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerYAML_DefaultFontWithStyle(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerYAML) callVirtualBase_DefaultPaperWithStyle(style int) *qt6.QColor {

	_ret := C.QsciLexerYAML_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerYAML) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	C.QsciLexerYAML_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerYAML_DefaultPaperWithStyle(self *C.QsciLexerYAML, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerYAML) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerYAML_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerYAML) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerYAML_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_SetEditor
func miqt_exec_callback_QsciLexerYAML_SetEditor(self *C.QsciLexerYAML, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerYAML) callVirtualBase_RefreshProperties() {

	C.QsciLexerYAML_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerYAML) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerYAML_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_RefreshProperties
func miqt_exec_callback_QsciLexerYAML_RefreshProperties(self *C.QsciLexerYAML, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerYAML) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerYAML_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerYAML) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerYAML_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_StyleBitsNeeded
func miqt_exec_callback_QsciLexerYAML_StyleBitsNeeded(self *C.QsciLexerYAML, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerYAML_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerYAML) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerYAML_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_WordCharacters
func miqt_exec_callback_QsciLexerYAML_WordCharacters(self *C.QsciLexerYAML, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerYAML) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerYAML_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerYAML) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerYAML_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerYAML_SetAutoIndentStyle(self *C.QsciLexerYAML, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerYAML) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerYAML_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerYAML) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	C.QsciLexerYAML_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_SetColor
func miqt_exec_callback_QsciLexerYAML_SetColor(self *C.QsciLexerYAML, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerYAML) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerYAML_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerYAML) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerYAML_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_SetEolFill
func miqt_exec_callback_QsciLexerYAML_SetEolFill(self *C.QsciLexerYAML, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerYAML) callVirtualBase_SetFont(f *qt6.QFont, style int) {

	C.QsciLexerYAML_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerYAML) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	C.QsciLexerYAML_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_SetFont
func miqt_exec_callback_QsciLexerYAML_SetFont(self *C.QsciLexerYAML, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerYAML) callVirtualBase_SetPaper(c *qt6.QColor, style int) {

	C.QsciLexerYAML_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerYAML) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	C.QsciLexerYAML_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_SetPaper
func miqt_exec_callback_QsciLexerYAML_SetPaper(self *C.QsciLexerYAML, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerYAML{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerYAML) callVirtualBase_ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerYAML_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerYAML) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	C.QsciLexerYAML_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_ReadProperties
func miqt_exec_callback_QsciLexerYAML_ReadProperties(self *C.QsciLexerYAML, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerYAML) callVirtualBase_WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerYAML_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerYAML) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	C.QsciLexerYAML_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerYAML_WriteProperties
func miqt_exec_callback_QsciLexerYAML_WriteProperties(self *C.QsciLexerYAML, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerYAML{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerYAML) Delete() {
	C.QsciLexerYAML_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerYAML) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerYAML) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

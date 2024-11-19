package qscintilla

/*

#include "gen_qscilexerproperties.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerProperties__ int

const (
	QsciLexerProperties__Default      QsciLexerProperties__ = 0
	QsciLexerProperties__Comment      QsciLexerProperties__ = 1
	QsciLexerProperties__Section      QsciLexerProperties__ = 2
	QsciLexerProperties__Assignment   QsciLexerProperties__ = 3
	QsciLexerProperties__DefaultValue QsciLexerProperties__ = 4
	QsciLexerProperties__Key          QsciLexerProperties__ = 5
)

type QsciLexerProperties struct {
	h          *C.QsciLexerProperties
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerProperties) cPointer() *C.QsciLexerProperties {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerProperties) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerProperties constructs the type using only CGO pointers.
func newQsciLexerProperties(h *C.QsciLexerProperties, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerProperties {
	if h == nil {
		return nil
	}
	return &QsciLexerProperties{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerProperties constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerProperties(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerProperties {
	if h == nil {
		return nil
	}

	return &QsciLexerProperties{h: (*C.QsciLexerProperties)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerProperties constructs a new QsciLexerProperties object.
func NewQsciLexerProperties() *QsciLexerProperties {
	var outptr_QsciLexerProperties *C.QsciLexerProperties = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerProperties_new(&outptr_QsciLexerProperties, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerProperties(outptr_QsciLexerProperties, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerProperties2 constructs a new QsciLexerProperties object.
func NewQsciLexerProperties2(parent *qt.QObject) *QsciLexerProperties {
	var outptr_QsciLexerProperties *C.QsciLexerProperties = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerProperties_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerProperties, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerProperties(outptr_QsciLexerProperties, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerProperties) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerProperties_MetaObject(this.h)))
}

func (this *QsciLexerProperties) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerProperties_Metacast(this.h, param1_Cstring))
}

func QsciLexerProperties_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerProperties) Language() string {
	_ret := C.QsciLexerProperties_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerProperties) Lexer() string {
	_ret := C.QsciLexerProperties_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerProperties) WordCharacters() string {
	_ret := C.QsciLexerProperties_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerProperties) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerProperties_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerProperties) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerProperties_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerProperties) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerProperties_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerProperties) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerProperties_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerProperties) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerProperties) RefreshProperties() {
	C.QsciLexerProperties_RefreshProperties(this.h)
}

func (this *QsciLexerProperties) FoldCompact() bool {
	return (bool)(C.QsciLexerProperties_FoldCompact(this.h))
}

func (this *QsciLexerProperties) SetInitialSpaces(enable bool) {
	C.QsciLexerProperties_SetInitialSpaces(this.h, (C.bool)(enable))
}

func (this *QsciLexerProperties) InitialSpaces() bool {
	return (bool)(C.QsciLexerProperties_InitialSpaces(this.h))
}

func (this *QsciLexerProperties) SetFoldCompact(fold bool) {
	C.QsciLexerProperties_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerProperties_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerProperties_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerProperties_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerProperties) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerProperties_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerProperties) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerProperties_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_SetFoldCompact
func miqt_exec_callback_QsciLexerProperties_SetFoldCompact(self *C.QsciLexerProperties, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}

func (this *QsciLexerProperties) callVirtualBase_Language() string {

	_ret := C.QsciLexerProperties_virtualbase_Language(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnLanguage(slot func(super func() string) string) {
	C.QsciLexerProperties_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_Language
func miqt_exec_callback_QsciLexerProperties_Language(self *C.QsciLexerProperties, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_Language)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerProperties_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnLexer(slot func(super func() string) string) {
	C.QsciLexerProperties_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_Lexer
func miqt_exec_callback_QsciLexerProperties_Lexer(self *C.QsciLexerProperties, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerProperties_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerProperties) OnLexerId(slot func(super func() int) int) {
	C.QsciLexerProperties_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_LexerId
func miqt_exec_callback_QsciLexerProperties_LexerId(self *C.QsciLexerProperties, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerProperties_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnAutoCompletionFillups(slot func(super func() string) string) {
	C.QsciLexerProperties_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_AutoCompletionFillups
func miqt_exec_callback_QsciLexerProperties_AutoCompletionFillups(self *C.QsciLexerProperties, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerProperties_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerProperties) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	C.QsciLexerProperties_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerProperties_AutoCompletionWordSeparators(self *C.QsciLexerProperties, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerProperties) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerProperties_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerProperties_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_BlockEnd
func miqt_exec_callback_QsciLexerProperties_BlockEnd(self *C.QsciLexerProperties, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerProperties_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerProperties) OnBlockLookback(slot func(super func() int) int) {
	C.QsciLexerProperties_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_BlockLookback
func miqt_exec_callback_QsciLexerProperties_BlockLookback(self *C.QsciLexerProperties, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerProperties_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerProperties_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_BlockStart
func miqt_exec_callback_QsciLexerProperties_BlockStart(self *C.QsciLexerProperties, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerProperties_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	C.QsciLexerProperties_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_BlockStartKeyword
func miqt_exec_callback_QsciLexerProperties_BlockStartKeyword(self *C.QsciLexerProperties, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerProperties_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerProperties) OnBraceStyle(slot func(super func() int) int) {
	C.QsciLexerProperties_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_BraceStyle
func miqt_exec_callback_QsciLexerProperties_BraceStyle(self *C.QsciLexerProperties, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerProperties_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerProperties) OnCaseSensitive(slot func(super func() bool) bool) {
	C.QsciLexerProperties_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_CaseSensitive
func miqt_exec_callback_QsciLexerProperties_CaseSensitive(self *C.QsciLexerProperties, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexerProperties_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerProperties) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerProperties_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_Color
func miqt_exec_callback_QsciLexerProperties_Color(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerProperties) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerProperties_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerProperties) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerProperties_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_EolFill
func miqt_exec_callback_QsciLexerProperties_EolFill(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexerProperties_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerProperties) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerProperties_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_Font
func miqt_exec_callback_QsciLexerProperties_Font(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerProperties) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerProperties_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerProperties) OnIndentationGuideView(slot func(super func() int) int) {
	C.QsciLexerProperties_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_IndentationGuideView
func miqt_exec_callback_QsciLexerProperties_IndentationGuideView(self *C.QsciLexerProperties, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerProperties_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnKeywords(slot func(super func(set int) string, set int) string) {
	C.QsciLexerProperties_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_Keywords
func miqt_exec_callback_QsciLexerProperties_Keywords(self *C.QsciLexerProperties, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerProperties_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerProperties) OnDefaultStyle(slot func(super func() int) int) {
	C.QsciLexerProperties_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_DefaultStyle
func miqt_exec_callback_QsciLexerProperties_DefaultStyle(self *C.QsciLexerProperties, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_Description(style int) string {

	var _ms C.struct_miqt_string = C.QsciLexerProperties_virtualbase_Description(unsafe.Pointer(this.h), (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QsciLexerProperties) OnDescription(slot func(super func(style int) string, style int) string) {
	C.QsciLexerProperties_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_Description
func miqt_exec_callback_QsciLexerProperties_Description(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) string, style int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_Description, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QsciLexerProperties) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexerProperties_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerProperties) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerProperties_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_Paper
func miqt_exec_callback_QsciLexerProperties_Paper(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerProperties) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerProperties_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerProperties) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerProperties_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerProperties_DefaultColorWithStyle(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerProperties) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerProperties_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerProperties) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	C.QsciLexerProperties_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_DefaultEolFill
func miqt_exec_callback_QsciLexerProperties_DefaultEolFill(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexerProperties_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerProperties) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	C.QsciLexerProperties_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerProperties_DefaultFontWithStyle(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerProperties) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerProperties_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerProperties) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	C.QsciLexerProperties_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerProperties_DefaultPaperWithStyle(self *C.QsciLexerProperties, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerProperties) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerProperties_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerProperties) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	C.QsciLexerProperties_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_SetEditor
func miqt_exec_callback_QsciLexerProperties_SetEditor(self *C.QsciLexerProperties, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerProperties) callVirtualBase_RefreshProperties() {

	C.QsciLexerProperties_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerProperties) OnRefreshProperties(slot func(super func())) {
	C.QsciLexerProperties_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_RefreshProperties
func miqt_exec_callback_QsciLexerProperties_RefreshProperties(self *C.QsciLexerProperties, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerProperties) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerProperties_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerProperties) OnStyleBitsNeeded(slot func(super func() int) int) {
	C.QsciLexerProperties_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_StyleBitsNeeded
func miqt_exec_callback_QsciLexerProperties_StyleBitsNeeded(self *C.QsciLexerProperties, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerProperties_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerProperties) OnWordCharacters(slot func(super func() string) string) {
	C.QsciLexerProperties_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_WordCharacters
func miqt_exec_callback_QsciLexerProperties_WordCharacters(self *C.QsciLexerProperties, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerProperties) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerProperties_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerProperties) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	C.QsciLexerProperties_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerProperties_SetAutoIndentStyle(self *C.QsciLexerProperties, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerProperties) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerProperties_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerProperties) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerProperties_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_SetColor
func miqt_exec_callback_QsciLexerProperties_SetColor(self *C.QsciLexerProperties, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerProperties) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerProperties_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerProperties) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	C.QsciLexerProperties_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_SetEolFill
func miqt_exec_callback_QsciLexerProperties_SetEolFill(self *C.QsciLexerProperties, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerProperties) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerProperties_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerProperties) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	C.QsciLexerProperties_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_SetFont
func miqt_exec_callback_QsciLexerProperties_SetFont(self *C.QsciLexerProperties, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerProperties) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerProperties_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerProperties) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	C.QsciLexerProperties_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_SetPaper
func miqt_exec_callback_QsciLexerProperties_SetPaper(self *C.QsciLexerProperties, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerProperties{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerProperties) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerProperties_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerProperties) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerProperties_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_ReadProperties
func miqt_exec_callback_QsciLexerProperties_ReadProperties(self *C.QsciLexerProperties, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerProperties) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerProperties_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerProperties) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	C.QsciLexerProperties_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerProperties_WriteProperties
func miqt_exec_callback_QsciLexerProperties_WriteProperties(self *C.QsciLexerProperties, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerProperties{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerProperties) Delete() {
	C.QsciLexerProperties_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerProperties) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerProperties) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscilexercss.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerCSS__ int

const (
	QsciLexerCSS__Default               QsciLexerCSS__ = 0
	QsciLexerCSS__Tag                   QsciLexerCSS__ = 1
	QsciLexerCSS__ClassSelector         QsciLexerCSS__ = 2
	QsciLexerCSS__PseudoClass           QsciLexerCSS__ = 3
	QsciLexerCSS__UnknownPseudoClass    QsciLexerCSS__ = 4
	QsciLexerCSS__Operator              QsciLexerCSS__ = 5
	QsciLexerCSS__CSS1Property          QsciLexerCSS__ = 6
	QsciLexerCSS__UnknownProperty       QsciLexerCSS__ = 7
	QsciLexerCSS__Value                 QsciLexerCSS__ = 8
	QsciLexerCSS__Comment               QsciLexerCSS__ = 9
	QsciLexerCSS__IDSelector            QsciLexerCSS__ = 10
	QsciLexerCSS__Important             QsciLexerCSS__ = 11
	QsciLexerCSS__AtRule                QsciLexerCSS__ = 12
	QsciLexerCSS__DoubleQuotedString    QsciLexerCSS__ = 13
	QsciLexerCSS__SingleQuotedString    QsciLexerCSS__ = 14
	QsciLexerCSS__CSS2Property          QsciLexerCSS__ = 15
	QsciLexerCSS__Attribute             QsciLexerCSS__ = 16
	QsciLexerCSS__CSS3Property          QsciLexerCSS__ = 17
	QsciLexerCSS__PseudoElement         QsciLexerCSS__ = 18
	QsciLexerCSS__ExtendedCSSProperty   QsciLexerCSS__ = 19
	QsciLexerCSS__ExtendedPseudoClass   QsciLexerCSS__ = 20
	QsciLexerCSS__ExtendedPseudoElement QsciLexerCSS__ = 21
	QsciLexerCSS__MediaRule             QsciLexerCSS__ = 22
	QsciLexerCSS__Variable              QsciLexerCSS__ = 23
)

type QsciLexerCSS struct {
	h          *C.QsciLexerCSS
	isSubclass bool
	*QsciLexer
}

func (this *QsciLexerCSS) cPointer() *C.QsciLexerCSS {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCSS) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerCSS constructs the type using only CGO pointers.
func newQsciLexerCSS(h *C.QsciLexerCSS, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerCSS {
	if h == nil {
		return nil
	}
	return &QsciLexerCSS{h: h,
		QsciLexer: newQsciLexer(h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerCSS constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerCSS(h unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerCSS {
	if h == nil {
		return nil
	}

	return &QsciLexerCSS{h: (*C.QsciLexerCSS)(h),
		QsciLexer: UnsafeNewQsciLexer(h_QsciLexer, h_QObject)}
}

// NewQsciLexerCSS constructs a new QsciLexerCSS object.
func NewQsciLexerCSS() *QsciLexerCSS {
	var outptr_QsciLexerCSS *C.QsciLexerCSS = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerCSS_new(&outptr_QsciLexerCSS, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerCSS(outptr_QsciLexerCSS, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerCSS2 constructs a new QsciLexerCSS object.
func NewQsciLexerCSS2(parent *qt.QObject) *QsciLexerCSS {
	var outptr_QsciLexerCSS *C.QsciLexerCSS = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerCSS_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerCSS, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerCSS(outptr_QsciLexerCSS, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerCSS) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCSS_MetaObject(this.h)))
}

func (this *QsciLexerCSS) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCSS_Metacast(this.h, param1_Cstring))
}

func QsciLexerCSS_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCSS) Language() string {
	_ret := C.QsciLexerCSS_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) Lexer() string {
	_ret := C.QsciLexerCSS_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) BlockEnd() string {
	_ret := C.QsciLexerCSS_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) BlockStart() string {
	_ret := C.QsciLexerCSS_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) WordCharacters() string {
	_ret := C.QsciLexerCSS_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerCSS_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCSS) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerCSS_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCSS) Keywords(set int) string {
	_ret := C.QsciLexerCSS_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCSS) RefreshProperties() {
	C.QsciLexerCSS_RefreshProperties(this.h)
}

func (this *QsciLexerCSS) FoldComments() bool {
	return (bool)(C.QsciLexerCSS_FoldComments(this.h))
}

func (this *QsciLexerCSS) FoldCompact() bool {
	return (bool)(C.QsciLexerCSS_FoldCompact(this.h))
}

func (this *QsciLexerCSS) SetHSSLanguage(enabled bool) {
	C.QsciLexerCSS_SetHSSLanguage(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCSS) HSSLanguage() bool {
	return (bool)(C.QsciLexerCSS_HSSLanguage(this.h))
}

func (this *QsciLexerCSS) SetLessLanguage(enabled bool) {
	C.QsciLexerCSS_SetLessLanguage(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCSS) LessLanguage() bool {
	return (bool)(C.QsciLexerCSS_LessLanguage(this.h))
}

func (this *QsciLexerCSS) SetSCSSLanguage(enabled bool) {
	C.QsciLexerCSS_SetSCSSLanguage(this.h, (C.bool)(enabled))
}

func (this *QsciLexerCSS) SCSSLanguage() bool {
	return (bool)(C.QsciLexerCSS_SCSSLanguage(this.h))
}

func (this *QsciLexerCSS) SetFoldComments(fold bool) {
	C.QsciLexerCSS_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerCSS) SetFoldCompact(fold bool) {
	C.QsciLexerCSS_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerCSS_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCSS_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCSS_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCSS) BlockEnd1(style *int) string {
	_ret := C.QsciLexerCSS_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) BlockStart1(style *int) string {
	_ret := C.QsciLexerCSS_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCSS) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerCSS_virtualbase_SetFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCSS) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetFoldComments
func miqt_exec_callback_QsciLexerCSS_SetFoldComments(self *C.QsciLexerCSS, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerCSS) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerCSS_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerCSS) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetFoldCompact
func miqt_exec_callback_QsciLexerCSS_SetFoldCompact(self *C.QsciLexerCSS, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}
func (this *QsciLexerCSS) OnLanguage(slot func() string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_Language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_Language
func miqt_exec_callback_QsciLexerCSS_Language(self *C.QsciLexerCSS, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerCSS_virtualbase_Lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCSS) OnLexer(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_Lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_Lexer
func miqt_exec_callback_QsciLexerCSS_Lexer(self *C.QsciLexerCSS, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerCSS_virtualbase_LexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCSS) OnLexerId(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_LexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_LexerId
func miqt_exec_callback_QsciLexerCSS_LexerId(self *C.QsciLexerCSS, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerCSS_virtualbase_AutoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCSS) OnAutoCompletionFillups(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_AutoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_AutoCompletionFillups
func miqt_exec_callback_QsciLexerCSS_AutoCompletionFillups(self *C.QsciLexerCSS, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerCSS_virtualbase_AutoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerCSS) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_AutoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_AutoCompletionWordSeparators
func miqt_exec_callback_QsciLexerCSS_AutoCompletionWordSeparators(self *C.QsciLexerCSS, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerCSS) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerCSS_virtualbase_BlockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCSS) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_BlockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_BlockEnd
func miqt_exec_callback_QsciLexerCSS_BlockEnd(self *C.QsciLexerCSS, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerCSS_virtualbase_BlockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCSS) OnBlockLookback(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_BlockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_BlockLookback
func miqt_exec_callback_QsciLexerCSS_BlockLookback(self *C.QsciLexerCSS, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerCSS_virtualbase_BlockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCSS) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_BlockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_BlockStart
func miqt_exec_callback_QsciLexerCSS_BlockStart(self *C.QsciLexerCSS, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerCSS_virtualbase_BlockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerCSS) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_BlockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_BlockStartKeyword
func miqt_exec_callback_QsciLexerCSS_BlockStartKeyword(self *C.QsciLexerCSS, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerCSS_virtualbase_BraceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCSS) OnBraceStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_BraceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_BraceStyle
func miqt_exec_callback_QsciLexerCSS_BraceStyle(self *C.QsciLexerCSS, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerCSS_virtualbase_CaseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCSS) OnCaseSensitive(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_CaseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_CaseSensitive
func miqt_exec_callback_QsciLexerCSS_CaseSensitive(self *C.QsciLexerCSS, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_Color(style int) *qt.QColor {

	_ret := C.QsciLexerCSS_virtualbase_Color(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCSS) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_Color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_Color
func miqt_exec_callback_QsciLexerCSS_Color(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCSS) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerCSS_virtualbase_EolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCSS) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_EolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_EolFill
func miqt_exec_callback_QsciLexerCSS_EolFill(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_Font(style int) *qt.QFont {

	_ret := C.QsciLexerCSS_virtualbase_Font(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCSS) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_Font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_Font
func miqt_exec_callback_QsciLexerCSS_Font(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCSS) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerCSS_virtualbase_IndentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCSS) OnIndentationGuideView(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_IndentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_IndentationGuideView
func miqt_exec_callback_QsciLexerCSS_IndentationGuideView(self *C.QsciLexerCSS, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerCSS_virtualbase_Keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerCSS) OnKeywords(slot func(super func(set int) string, set int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_Keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_Keywords
func miqt_exec_callback_QsciLexerCSS_Keywords(self *C.QsciLexerCSS, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerCSS_virtualbase_DefaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCSS) OnDefaultStyle(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_DefaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_DefaultStyle
func miqt_exec_callback_QsciLexerCSS_DefaultStyle(self *C.QsciLexerCSS, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerCSS) OnDescription(slot func(style int) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_Description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_Description
func miqt_exec_callback_QsciLexerCSS_Description(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerCSS) callVirtualBase_Paper(style int) *qt.QColor {

	_ret := C.QsciLexerCSS_virtualbase_Paper(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCSS) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_Paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_Paper
func miqt_exec_callback_QsciLexerCSS_Paper(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCSS) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerCSS_virtualbase_DefaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCSS) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_DefaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_DefaultColorWithStyle
func miqt_exec_callback_QsciLexerCSS_DefaultColorWithStyle(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCSS) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerCSS_virtualbase_DefaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerCSS) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_DefaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_DefaultEolFill
func miqt_exec_callback_QsciLexerCSS_DefaultEolFill(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_ret := C.QsciLexerCSS_virtualbase_DefaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCSS) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_DefaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_DefaultFontWithStyle
func miqt_exec_callback_QsciLexerCSS_DefaultFontWithStyle(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCSS) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_ret := C.QsciLexerCSS_virtualbase_DefaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerCSS) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_DefaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_DefaultPaperWithStyle
func miqt_exec_callback_QsciLexerCSS_DefaultPaperWithStyle(self *C.QsciLexerCSS, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerCSS) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerCSS_virtualbase_SetEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerCSS) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetEditor
func miqt_exec_callback_QsciLexerCSS_SetEditor(self *C.QsciLexerCSS, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQsciScintilla(unsafe.Pointer(editor), nil, nil, nil, nil, nil, nil)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerCSS) callVirtualBase_RefreshProperties() {

	C.QsciLexerCSS_virtualbase_RefreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerCSS) OnRefreshProperties(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_RefreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_RefreshProperties
func miqt_exec_callback_QsciLexerCSS_RefreshProperties(self *C.QsciLexerCSS, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerCSS) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerCSS_virtualbase_StyleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerCSS) OnStyleBitsNeeded(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_StyleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_StyleBitsNeeded
func miqt_exec_callback_QsciLexerCSS_StyleBitsNeeded(self *C.QsciLexerCSS, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerCSS_virtualbase_WordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerCSS) OnWordCharacters(slot func(super func() string) string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_WordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_WordCharacters
func miqt_exec_callback_QsciLexerCSS_WordCharacters(self *C.QsciLexerCSS, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerCSS) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerCSS_virtualbase_SetAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerCSS) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetAutoIndentStyle
func miqt_exec_callback_QsciLexerCSS_SetAutoIndentStyle(self *C.QsciLexerCSS, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerCSS) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerCSS_virtualbase_SetColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCSS) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetColor
func miqt_exec_callback_QsciLexerCSS_SetColor(self *C.QsciLexerCSS, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerCSS) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerCSS_virtualbase_SetEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerCSS) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetEolFill
func miqt_exec_callback_QsciLexerCSS_SetEolFill(self *C.QsciLexerCSS, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerCSS) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerCSS_virtualbase_SetFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCSS) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetFont
func miqt_exec_callback_QsciLexerCSS_SetFont(self *C.QsciLexerCSS, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))
	slotval2 := (int)(style)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerCSS) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerCSS_virtualbase_SetPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerCSS) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_SetPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_SetPaper
func miqt_exec_callback_QsciLexerCSS_SetPaper(self *C.QsciLexerCSS, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))
	slotval2 := (int)(style)

	gofunc((&QsciLexerCSS{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerCSS) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCSS_virtualbase_ReadProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCSS) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_ReadProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_ReadProperties
func miqt_exec_callback_QsciLexerCSS_ReadProperties(self *C.QsciLexerCSS, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerCSS) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerCSS_virtualbase_WriteProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerCSS) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciLexerCSS_override_virtual_WriteProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciLexerCSS_WriteProperties
func miqt_exec_callback_QsciLexerCSS_WriteProperties(self *C.QsciLexerCSS, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerCSS{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QsciLexerCSS) Delete() {
	C.QsciLexerCSS_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCSS) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCSS) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

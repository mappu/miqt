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
	h *C.QsciLexerMarkdown
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
func newQsciLexerMarkdown(h *C.QsciLexerMarkdown) *QsciLexerMarkdown {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerMarkdown_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerMarkdown{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerMarkdown constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerMarkdown(h unsafe.Pointer) *QsciLexerMarkdown {
	return newQsciLexerMarkdown((*C.QsciLexerMarkdown)(h))
}

// NewQsciLexerMarkdown constructs a new QsciLexerMarkdown object.
func NewQsciLexerMarkdown() *QsciLexerMarkdown {

	return newQsciLexerMarkdown(C.QsciLexerMarkdown_new())
}

// NewQsciLexerMarkdown2 constructs a new QsciLexerMarkdown object.
func NewQsciLexerMarkdown2(parent *qt6.QObject) *QsciLexerMarkdown {

	return newQsciLexerMarkdown(C.QsciLexerMarkdown_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerMarkdown) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerMarkdown_metaObject(this.h)))
}

func (this *QsciLexerMarkdown) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerMarkdown_metacast(this.h, param1_Cstring))
}

func QsciLexerMarkdown_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerMarkdown) Language() string {
	_ret := C.QsciLexerMarkdown_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMarkdown) Lexer() string {
	_ret := C.QsciLexerMarkdown_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMarkdown) DefaultColor(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMarkdown_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) DefaultFont(style int) *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerMarkdown_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) DefaultPaper(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMarkdown_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMarkdown) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMarkdown_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMarkdown_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMarkdown_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QsciLexerMarkdown that was directly constructed.
func (this *QsciLexerMarkdown) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QsciLexerMarkdown_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QsciLexerMarkdown that was directly constructed.
func (this *QsciLexerMarkdown) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerMarkdown_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QsciLexerMarkdown that was directly constructed.
func (this *QsciLexerMarkdown) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerMarkdown_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QsciLexerMarkdown that was directly constructed.
func (this *QsciLexerMarkdown) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerMarkdown_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QsciLexerMarkdown) OnLanguage(slot func() string) {
	ok := C.QsciLexerMarkdown_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_language
func miqt_exec_callback_QsciLexerMarkdown_language(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerMarkdown) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerMarkdown_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnLexer(slot func(super func() string) string) {
	ok := C.QsciLexerMarkdown_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_lexer
func miqt_exec_callback_QsciLexerMarkdown_lexer(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
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

	return (int)(C.QsciLexerMarkdown_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnLexerId(slot func(super func() int) int) {
	ok := C.QsciLexerMarkdown_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_lexerId
func miqt_exec_callback_QsciLexerMarkdown_lexerId(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerMarkdown_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnAutoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerMarkdown_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_autoCompletionFillups
func miqt_exec_callback_QsciLexerMarkdown_autoCompletionFillups(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
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

	var _ma C.struct_miqt_array = C.QsciLexerMarkdown_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
	ok := C.QsciLexerMarkdown_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerMarkdown_autoCompletionWordSeparators(self *C.QsciLexerMarkdown, cb C.intptr_t) C.struct_miqt_array {
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

	_ret := C.QsciLexerMarkdown_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerMarkdown_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_blockEnd
func miqt_exec_callback_QsciLexerMarkdown_blockEnd(self *C.QsciLexerMarkdown, cb C.intptr_t, style *C.int) *C.const_char {
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

	return (int)(C.QsciLexerMarkdown_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnBlockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerMarkdown_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_blockLookback
func miqt_exec_callback_QsciLexerMarkdown_blockLookback(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerMarkdown_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerMarkdown_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_blockStart
func miqt_exec_callback_QsciLexerMarkdown_blockStart(self *C.QsciLexerMarkdown, cb C.intptr_t, style *C.int) *C.const_char {
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

	_ret := C.QsciLexerMarkdown_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerMarkdown_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_blockStartKeyword
func miqt_exec_callback_QsciLexerMarkdown_blockStartKeyword(self *C.QsciLexerMarkdown, cb C.intptr_t, style *C.int) *C.const_char {
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

	return (int)(C.QsciLexerMarkdown_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnBraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerMarkdown_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_braceStyle
func miqt_exec_callback_QsciLexerMarkdown_braceStyle(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerMarkdown_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnCaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerMarkdown_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_caseSensitive
func miqt_exec_callback_QsciLexerMarkdown_caseSensitive(self *C.QsciLexerMarkdown, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_Color(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMarkdown_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerMarkdown_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_color
func miqt_exec_callback_QsciLexerMarkdown_color(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
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

	return (bool)(C.QsciLexerMarkdown_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerMarkdown) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerMarkdown_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_eolFill
func miqt_exec_callback_QsciLexerMarkdown_eolFill(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) C.bool {
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

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerMarkdown_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerMarkdown_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_font
func miqt_exec_callback_QsciLexerMarkdown_font(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QFont {
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

	return (int)(C.QsciLexerMarkdown_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnIndentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerMarkdown_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_indentationGuideView
func miqt_exec_callback_QsciLexerMarkdown_indentationGuideView(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerMarkdown_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnKeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerMarkdown_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_keywords
func miqt_exec_callback_QsciLexerMarkdown_keywords(self *C.QsciLexerMarkdown, cb C.intptr_t, set C.int) *C.const_char {
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

	return (int)(C.QsciLexerMarkdown_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnDefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerMarkdown_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_defaultStyle
func miqt_exec_callback_QsciLexerMarkdown_defaultStyle(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerMarkdown) OnDescription(slot func(style int) string) {
	ok := C.QsciLexerMarkdown_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_description
func miqt_exec_callback_QsciLexerMarkdown_description(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerMarkdown) callVirtualBase_Paper(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMarkdown_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerMarkdown_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_paper
func miqt_exec_callback_QsciLexerMarkdown_paper(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
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

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMarkdown_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerMarkdown_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_defaultColorWithStyle
func miqt_exec_callback_QsciLexerMarkdown_defaultColorWithStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
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

	return (bool)(C.QsciLexerMarkdown_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerMarkdown) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerMarkdown_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_defaultEolFill
func miqt_exec_callback_QsciLexerMarkdown_defaultEolFill(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) C.bool {
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

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerMarkdown_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerMarkdown_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_defaultFontWithStyle
func miqt_exec_callback_QsciLexerMarkdown_defaultFontWithStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QFont {
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

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerMarkdown_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerMarkdown) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerMarkdown_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerMarkdown_defaultPaperWithStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, style C.int) *C.QColor {
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

	C.QsciLexerMarkdown_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerMarkdown) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerMarkdown_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_setEditor
func miqt_exec_callback_QsciLexerMarkdown_setEditor(self *C.QsciLexerMarkdown, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_RefreshProperties() {

	C.QsciLexerMarkdown_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerMarkdown) OnRefreshProperties(slot func(super func())) {
	ok := C.QsciLexerMarkdown_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_refreshProperties
func miqt_exec_callback_QsciLexerMarkdown_refreshProperties(self *C.QsciLexerMarkdown, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerMarkdown) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerMarkdown_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerMarkdown) OnStyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerMarkdown_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_styleBitsNeeded
func miqt_exec_callback_QsciLexerMarkdown_styleBitsNeeded(self *C.QsciLexerMarkdown, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerMarkdown_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerMarkdown) OnWordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerMarkdown_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_wordCharacters
func miqt_exec_callback_QsciLexerMarkdown_wordCharacters(self *C.QsciLexerMarkdown, cb C.intptr_t) *C.const_char {
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

	C.QsciLexerMarkdown_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerMarkdown) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerMarkdown_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_setAutoIndentStyle
func miqt_exec_callback_QsciLexerMarkdown_setAutoIndentStyle(self *C.QsciLexerMarkdown, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerMarkdown_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerMarkdown_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_setColor
func miqt_exec_callback_QsciLexerMarkdown_setColor(self *C.QsciLexerMarkdown, cb C.intptr_t, c *C.QColor, style C.int) {
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

	C.QsciLexerMarkdown_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerMarkdown_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_setEolFill
func miqt_exec_callback_QsciLexerMarkdown_setEolFill(self *C.QsciLexerMarkdown, cb C.intptr_t, eoffill C.bool, style C.int) {
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

	C.QsciLexerMarkdown_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	ok := C.QsciLexerMarkdown_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_setFont
func miqt_exec_callback_QsciLexerMarkdown_setFont(self *C.QsciLexerMarkdown, cb C.intptr_t, f *C.QFont, style C.int) {
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

	C.QsciLexerMarkdown_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerMarkdown) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerMarkdown_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_setPaper
func miqt_exec_callback_QsciLexerMarkdown_setPaper(self *C.QsciLexerMarkdown, cb C.intptr_t, c *C.QColor, style C.int) {
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

	return (bool)(C.QsciLexerMarkdown_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerMarkdown) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerMarkdown_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_readProperties
func miqt_exec_callback_QsciLexerMarkdown_readProperties(self *C.QsciLexerMarkdown, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs))

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

	return (bool)(C.QsciLexerMarkdown_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerMarkdown) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerMarkdown_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_writeProperties
func miqt_exec_callback_QsciLexerMarkdown_writeProperties(self *C.QsciLexerMarkdown, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSettings(unsafe.Pointer(qs))

	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval2 := prefix_ret

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QsciLexerMarkdown_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerMarkdown) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QsciLexerMarkdown_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_event
func miqt_exec_callback_QsciLexerMarkdown_event(self *C.QsciLexerMarkdown, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QsciLexerMarkdown_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerMarkdown) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QsciLexerMarkdown_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_eventFilter
func miqt_exec_callback_QsciLexerMarkdown_eventFilter(self *C.QsciLexerMarkdown, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerMarkdown) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QsciLexerMarkdown_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerMarkdown) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QsciLexerMarkdown_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_timerEvent
func miqt_exec_callback_QsciLexerMarkdown_timerEvent(self *C.QsciLexerMarkdown, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QsciLexerMarkdown_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerMarkdown) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QsciLexerMarkdown_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_childEvent
func miqt_exec_callback_QsciLexerMarkdown_childEvent(self *C.QsciLexerMarkdown, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QsciLexerMarkdown_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerMarkdown) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QsciLexerMarkdown_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_customEvent
func miqt_exec_callback_QsciLexerMarkdown_customEvent(self *C.QsciLexerMarkdown, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerMarkdown_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerMarkdown) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerMarkdown_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_connectNotify
func miqt_exec_callback_QsciLexerMarkdown_connectNotify(self *C.QsciLexerMarkdown, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerMarkdown) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerMarkdown_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerMarkdown) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerMarkdown_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerMarkdown_disconnectNotify
func miqt_exec_callback_QsciLexerMarkdown_disconnectNotify(self *C.QsciLexerMarkdown, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerMarkdown{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerMarkdown) Delete() {
	C.QsciLexerMarkdown_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerMarkdown) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerMarkdown) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

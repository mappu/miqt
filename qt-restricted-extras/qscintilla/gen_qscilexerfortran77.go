package qscintilla

/*

#include "gen_qscilexerfortran77.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerFortran77__ int

const (
	QsciLexerFortran77__Default            QsciLexerFortran77__ = 0
	QsciLexerFortran77__Comment            QsciLexerFortran77__ = 1
	QsciLexerFortran77__Number             QsciLexerFortran77__ = 2
	QsciLexerFortran77__SingleQuotedString QsciLexerFortran77__ = 3
	QsciLexerFortran77__DoubleQuotedString QsciLexerFortran77__ = 4
	QsciLexerFortran77__UnclosedString     QsciLexerFortran77__ = 5
	QsciLexerFortran77__Operator           QsciLexerFortran77__ = 6
	QsciLexerFortran77__Identifier         QsciLexerFortran77__ = 7
	QsciLexerFortran77__Keyword            QsciLexerFortran77__ = 8
	QsciLexerFortran77__IntrinsicFunction  QsciLexerFortran77__ = 9
	QsciLexerFortran77__ExtendedFunction   QsciLexerFortran77__ = 10
	QsciLexerFortran77__PreProcessor       QsciLexerFortran77__ = 11
	QsciLexerFortran77__DottedOperator     QsciLexerFortran77__ = 12
	QsciLexerFortran77__Label              QsciLexerFortran77__ = 13
	QsciLexerFortran77__Continuation       QsciLexerFortran77__ = 14
)

type QsciLexerFortran77 struct {
	h *C.QsciLexerFortran77
	*QsciLexer
}

func (this *QsciLexerFortran77) cPointer() *C.QsciLexerFortran77 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerFortran77) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerFortran77 constructs the type using only CGO pointers.
func newQsciLexerFortran77(h *C.QsciLexerFortran77) *QsciLexerFortran77 {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerFortran77_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerFortran77{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerFortran77 constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerFortran77(h unsafe.Pointer) *QsciLexerFortran77 {
	return newQsciLexerFortran77((*C.QsciLexerFortran77)(h))
}

// NewQsciLexerFortran77 constructs a new QsciLexerFortran77 object.
func NewQsciLexerFortran77() *QsciLexerFortran77 {

	return newQsciLexerFortran77(C.QsciLexerFortran77_new())
}

// NewQsciLexerFortran772 constructs a new QsciLexerFortran77 object.
func NewQsciLexerFortran772(parent *qt.QObject) *QsciLexerFortran77 {

	return newQsciLexerFortran77(C.QsciLexerFortran77_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerFortran77) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerFortran77_metaObject(this.h)))
}

func (this *QsciLexerFortran77) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerFortran77_metacast(this.h, param1_Cstring))
}

func QsciLexerFortran77_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran77) Language() string {
	_ret := C.QsciLexerFortran77_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) Lexer() string {
	_ret := C.QsciLexerFortran77_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) BraceStyle() int {
	return (int)(C.QsciLexerFortran77_braceStyle(this.h))
}

func (this *QsciLexerFortran77) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerFortran77_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerFortran77_defaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerFortran77) DefaultFont(style int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerFortran77_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) DefaultPaper(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerFortran77_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerFortran77) Keywords(set int) string {
	_ret := C.QsciLexerFortran77_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerFortran77) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran77) RefreshProperties() {
	C.QsciLexerFortran77_refreshProperties(this.h)
}

func (this *QsciLexerFortran77) FoldCompact() bool {
	return (bool)(C.QsciLexerFortran77_foldCompact(this.h))
}

func (this *QsciLexerFortran77) SetFoldCompact(fold bool) {
	C.QsciLexerFortran77_setFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerFortran77_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran77_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran77_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ReadProperties can only be called from a QsciLexerFortran77 that was directly constructed.
func (this *QsciLexerFortran77) ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerFortran77_protectedbase_readProperties(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// WriteProperties can only be called from a QsciLexerFortran77 that was directly constructed.
func (this *QsciLexerFortran77) WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerFortran77_protectedbase_writeProperties(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QsciLexerFortran77 that was directly constructed.
func (this *QsciLexerFortran77) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QsciLexerFortran77_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QsciLexerFortran77 that was directly constructed.
func (this *QsciLexerFortran77) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerFortran77_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QsciLexerFortran77 that was directly constructed.
func (this *QsciLexerFortran77) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerFortran77_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QsciLexerFortran77 that was directly constructed.
func (this *QsciLexerFortran77) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerFortran77_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QsciLexerFortran77) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerFortran77_virtualbase_setFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerFortran77) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerFortran77_override_virtual_setFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_setFoldCompact
func miqt_exec_callback_QsciLexerFortran77_setFoldCompact(self *C.QsciLexerFortran77, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}
func (this *QsciLexerFortran77) OnLanguage(slot func() string) {
	ok := C.QsciLexerFortran77_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_language
func miqt_exec_callback_QsciLexerFortran77_language(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerFortran77_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnLexer(slot func(super func() string) string) {
	ok := C.QsciLexerFortran77_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_lexer
func miqt_exec_callback_QsciLexerFortran77_lexer(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerFortran77_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnLexerId(slot func(super func() int) int) {
	ok := C.QsciLexerFortran77_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_lexerId
func miqt_exec_callback_QsciLexerFortran77_lexerId(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerFortran77_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnAutoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerFortran77_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_autoCompletionFillups
func miqt_exec_callback_QsciLexerFortran77_autoCompletionFillups(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerFortran77_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerFortran77) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerFortran77_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerFortran77_autoCompletionWordSeparators(self *C.QsciLexerFortran77, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerFortran77) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerFortran77_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerFortran77_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_blockEnd
func miqt_exec_callback_QsciLexerFortran77_blockEnd(self *C.QsciLexerFortran77, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerFortran77_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnBlockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerFortran77_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_blockLookback
func miqt_exec_callback_QsciLexerFortran77_blockLookback(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerFortran77_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerFortran77_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_blockStart
func miqt_exec_callback_QsciLexerFortran77_blockStart(self *C.QsciLexerFortran77, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerFortran77_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerFortran77_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_blockStartKeyword
func miqt_exec_callback_QsciLexerFortran77_blockStartKeyword(self *C.QsciLexerFortran77, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerFortran77_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnBraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerFortran77_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_braceStyle
func miqt_exec_callback_QsciLexerFortran77_braceStyle(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnCaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerFortran77_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_caseSensitive
func miqt_exec_callback_QsciLexerFortran77_caseSensitive(self *C.QsciLexerFortran77, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerFortran77_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerFortran77_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_color
func miqt_exec_callback_QsciLexerFortran77_color(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerFortran77) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerFortran77_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_eolFill
func miqt_exec_callback_QsciLexerFortran77_eolFill(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerFortran77_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerFortran77_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_font
func miqt_exec_callback_QsciLexerFortran77_font(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerFortran77_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnIndentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerFortran77_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_indentationGuideView
func miqt_exec_callback_QsciLexerFortran77_indentationGuideView(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerFortran77_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnKeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerFortran77_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_keywords
func miqt_exec_callback_QsciLexerFortran77_keywords(self *C.QsciLexerFortran77, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerFortran77_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnDefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerFortran77_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_defaultStyle
func miqt_exec_callback_QsciLexerFortran77_defaultStyle(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerFortran77) OnDescription(slot func(style int) string) {
	ok := C.QsciLexerFortran77_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_description
func miqt_exec_callback_QsciLexerFortran77_description(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerFortran77) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerFortran77_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerFortran77_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_paper
func miqt_exec_callback_QsciLexerFortran77_paper(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerFortran77_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerFortran77_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_defaultColorWithStyle
func miqt_exec_callback_QsciLexerFortran77_defaultColorWithStyle(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerFortran77) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerFortran77_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_defaultEolFill
func miqt_exec_callback_QsciLexerFortran77_defaultEolFill(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerFortran77_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerFortran77_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_defaultFontWithStyle
func miqt_exec_callback_QsciLexerFortran77_defaultFontWithStyle(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerFortran77_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerFortran77) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerFortran77_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerFortran77_defaultPaperWithStyle(self *C.QsciLexerFortran77, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerFortran77) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerFortran77_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerFortran77) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerFortran77_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_setEditor
func miqt_exec_callback_QsciLexerFortran77_setEditor(self *C.QsciLexerFortran77, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_RefreshProperties() {

	C.QsciLexerFortran77_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerFortran77) OnRefreshProperties(slot func(super func())) {
	ok := C.QsciLexerFortran77_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_refreshProperties
func miqt_exec_callback_QsciLexerFortran77_refreshProperties(self *C.QsciLexerFortran77, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerFortran77) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerFortran77_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerFortran77) OnStyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerFortran77_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_styleBitsNeeded
func miqt_exec_callback_QsciLexerFortran77_styleBitsNeeded(self *C.QsciLexerFortran77, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerFortran77_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerFortran77) OnWordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerFortran77_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_wordCharacters
func miqt_exec_callback_QsciLexerFortran77_wordCharacters(self *C.QsciLexerFortran77, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerFortran77) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerFortran77_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerFortran77) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerFortran77_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_setAutoIndentStyle
func miqt_exec_callback_QsciLexerFortran77_setAutoIndentStyle(self *C.QsciLexerFortran77, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerFortran77_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerFortran77_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_setColor
func miqt_exec_callback_QsciLexerFortran77_setColor(self *C.QsciLexerFortran77, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerFortran77_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerFortran77_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_setEolFill
func miqt_exec_callback_QsciLexerFortran77_setEolFill(self *C.QsciLexerFortran77, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerFortran77_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	ok := C.QsciLexerFortran77_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_setFont
func miqt_exec_callback_QsciLexerFortran77_setFont(self *C.QsciLexerFortran77, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerFortran77_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerFortran77) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerFortran77_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_setPaper
func miqt_exec_callback_QsciLexerFortran77_setPaper(self *C.QsciLexerFortran77, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerFortran77) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerFortran77_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerFortran77) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerFortran77_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_readProperties
func miqt_exec_callback_QsciLexerFortran77_readProperties(self *C.QsciLexerFortran77, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerFortran77_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerFortran77) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerFortran77_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_writeProperties
func miqt_exec_callback_QsciLexerFortran77_writeProperties(self *C.QsciLexerFortran77, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerFortran77) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QsciLexerFortran77_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_event
func miqt_exec_callback_QsciLexerFortran77_event(self *C.QsciLexerFortran77, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciLexerFortran77_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerFortran77) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QsciLexerFortran77_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_eventFilter
func miqt_exec_callback_QsciLexerFortran77_eventFilter(self *C.QsciLexerFortran77, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerFortran77) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciLexerFortran77_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerFortran77) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QsciLexerFortran77_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_timerEvent
func miqt_exec_callback_QsciLexerFortran77_timerEvent(self *C.QsciLexerFortran77, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciLexerFortran77_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerFortran77) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QsciLexerFortran77_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_childEvent
func miqt_exec_callback_QsciLexerFortran77_childEvent(self *C.QsciLexerFortran77, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciLexerFortran77_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerFortran77) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QsciLexerFortran77_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_customEvent
func miqt_exec_callback_QsciLexerFortran77_customEvent(self *C.QsciLexerFortran77, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerFortran77_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerFortran77) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerFortran77_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_connectNotify
func miqt_exec_callback_QsciLexerFortran77_connectNotify(self *C.QsciLexerFortran77, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerFortran77) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerFortran77_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerFortran77) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerFortran77_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran77_disconnectNotify
func miqt_exec_callback_QsciLexerFortran77_disconnectNotify(self *C.QsciLexerFortran77, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerFortran77{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerFortran77) Delete() {
	C.QsciLexerFortran77_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerFortran77) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerFortran77) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

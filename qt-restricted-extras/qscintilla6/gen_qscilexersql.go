package qscintilla6

/*

#include "gen_qscilexersql.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerSQL__ int

const (
	QsciLexerSQL__Default                QsciLexerSQL__ = 0
	QsciLexerSQL__Comment                QsciLexerSQL__ = 1
	QsciLexerSQL__CommentLine            QsciLexerSQL__ = 2
	QsciLexerSQL__CommentDoc             QsciLexerSQL__ = 3
	QsciLexerSQL__Number                 QsciLexerSQL__ = 4
	QsciLexerSQL__Keyword                QsciLexerSQL__ = 5
	QsciLexerSQL__DoubleQuotedString     QsciLexerSQL__ = 6
	QsciLexerSQL__SingleQuotedString     QsciLexerSQL__ = 7
	QsciLexerSQL__PlusKeyword            QsciLexerSQL__ = 8
	QsciLexerSQL__PlusPrompt             QsciLexerSQL__ = 9
	QsciLexerSQL__Operator               QsciLexerSQL__ = 10
	QsciLexerSQL__Identifier             QsciLexerSQL__ = 11
	QsciLexerSQL__PlusComment            QsciLexerSQL__ = 13
	QsciLexerSQL__CommentLineHash        QsciLexerSQL__ = 15
	QsciLexerSQL__CommentDocKeyword      QsciLexerSQL__ = 17
	QsciLexerSQL__CommentDocKeywordError QsciLexerSQL__ = 18
	QsciLexerSQL__KeywordSet5            QsciLexerSQL__ = 19
	QsciLexerSQL__KeywordSet6            QsciLexerSQL__ = 20
	QsciLexerSQL__KeywordSet7            QsciLexerSQL__ = 21
	QsciLexerSQL__KeywordSet8            QsciLexerSQL__ = 22
	QsciLexerSQL__QuotedIdentifier       QsciLexerSQL__ = 23
	QsciLexerSQL__QuotedOperator         QsciLexerSQL__ = 24
)

type QsciLexerSQL struct {
	h *C.QsciLexerSQL
	*QsciLexer
}

func (this *QsciLexerSQL) cPointer() *C.QsciLexerSQL {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerSQL) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerSQL constructs the type using only CGO pointers.
func newQsciLexerSQL(h *C.QsciLexerSQL) *QsciLexerSQL {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerSQL_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerSQL{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerSQL constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerSQL(h unsafe.Pointer) *QsciLexerSQL {
	return newQsciLexerSQL((*C.QsciLexerSQL)(h))
}

// NewQsciLexerSQL constructs a new QsciLexerSQL object.
func NewQsciLexerSQL() *QsciLexerSQL {

	return newQsciLexerSQL(C.QsciLexerSQL_new())
}

// NewQsciLexerSQL2 constructs a new QsciLexerSQL object.
func NewQsciLexerSQL2(parent *qt6.QObject) *QsciLexerSQL {

	return newQsciLexerSQL(C.QsciLexerSQL_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerSQL) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerSQL_metaObject(this.h)))
}

func (this *QsciLexerSQL) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerSQL_metacast(this.h, param1_Cstring))
}

func QsciLexerSQL_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerSQL) Language() string {
	_ret := C.QsciLexerSQL_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerSQL) Lexer() string {
	_ret := C.QsciLexerSQL_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerSQL) BraceStyle() int {
	return (int)(C.QsciLexerSQL_braceStyle(this.h))
}

func (this *QsciLexerSQL) DefaultColor(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerSQL_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSQL) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerSQL_defaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerSQL) DefaultFont(style int) *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerSQL_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSQL) DefaultPaper(style int) *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerSQL_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSQL) Keywords(set int) string {
	_ret := C.QsciLexerSQL_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerSQL) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerSQL_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerSQL) RefreshProperties() {
	C.QsciLexerSQL_refreshProperties(this.h)
}

func (this *QsciLexerSQL) BackslashEscapes() bool {
	return (bool)(C.QsciLexerSQL_backslashEscapes(this.h))
}

func (this *QsciLexerSQL) SetDottedWords(enable bool) {
	C.QsciLexerSQL_setDottedWords(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) DottedWords() bool {
	return (bool)(C.QsciLexerSQL_dottedWords(this.h))
}

func (this *QsciLexerSQL) SetFoldAtElse(fold bool) {
	C.QsciLexerSQL_setFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerSQL) FoldAtElse() bool {
	return (bool)(C.QsciLexerSQL_foldAtElse(this.h))
}

func (this *QsciLexerSQL) FoldComments() bool {
	return (bool)(C.QsciLexerSQL_foldComments(this.h))
}

func (this *QsciLexerSQL) FoldCompact() bool {
	return (bool)(C.QsciLexerSQL_foldCompact(this.h))
}

func (this *QsciLexerSQL) SetFoldOnlyBegin(fold bool) {
	C.QsciLexerSQL_setFoldOnlyBegin(this.h, (C.bool)(fold))
}

func (this *QsciLexerSQL) FoldOnlyBegin() bool {
	return (bool)(C.QsciLexerSQL_foldOnlyBegin(this.h))
}

func (this *QsciLexerSQL) SetHashComments(enable bool) {
	C.QsciLexerSQL_setHashComments(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) HashComments() bool {
	return (bool)(C.QsciLexerSQL_hashComments(this.h))
}

func (this *QsciLexerSQL) SetQuotedIdentifiers(enable bool) {
	C.QsciLexerSQL_setQuotedIdentifiers(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) QuotedIdentifiers() bool {
	return (bool)(C.QsciLexerSQL_quotedIdentifiers(this.h))
}

func (this *QsciLexerSQL) SetBackslashEscapes(enable bool) {
	C.QsciLexerSQL_setBackslashEscapes(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) SetFoldComments(fold bool) {
	C.QsciLexerSQL_setFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerSQL) SetFoldCompact(fold bool) {
	C.QsciLexerSQL_setFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerSQL_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerSQL_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ReadProperties can only be called from a QsciLexerSQL that was directly constructed.
func (this *QsciLexerSQL) ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerSQL_protectedbase_readProperties(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// WriteProperties can only be called from a QsciLexerSQL that was directly constructed.
func (this *QsciLexerSQL) WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerSQL_protectedbase_writeProperties(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QsciLexerSQL that was directly constructed.
func (this *QsciLexerSQL) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QsciLexerSQL_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QsciLexerSQL that was directly constructed.
func (this *QsciLexerSQL) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerSQL_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QsciLexerSQL that was directly constructed.
func (this *QsciLexerSQL) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerSQL_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QsciLexerSQL that was directly constructed.
func (this *QsciLexerSQL) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerSQL_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QsciLexerSQL) callVirtualBase_SetBackslashEscapes(enable bool) {

	C.QsciLexerSQL_virtualbase_setBackslashEscapes(unsafe.Pointer(this.h), (C.bool)(enable))

}
func (this *QsciLexerSQL) OnSetBackslashEscapes(slot func(super func(enable bool), enable bool)) {
	ok := C.QsciLexerSQL_override_virtual_setBackslashEscapes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setBackslashEscapes
func miqt_exec_callback_QsciLexerSQL_setBackslashEscapes(self *C.QsciLexerSQL, cb C.intptr_t, enable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(enable bool), enable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enable)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetBackslashEscapes, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerSQL_virtualbase_setFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerSQL) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerSQL_override_virtual_setFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setFoldComments
func miqt_exec_callback_QsciLexerSQL_setFoldComments(self *C.QsciLexerSQL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerSQL_virtualbase_setFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerSQL) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerSQL_override_virtual_setFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setFoldCompact
func miqt_exec_callback_QsciLexerSQL_setFoldCompact(self *C.QsciLexerSQL, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}
func (this *QsciLexerSQL) OnLanguage(slot func() string) {
	ok := C.QsciLexerSQL_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_language
func miqt_exec_callback_QsciLexerSQL_language(self *C.QsciLexerSQL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerSQL_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerSQL) OnLexer(slot func(super func() string) string) {
	ok := C.QsciLexerSQL_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_lexer
func miqt_exec_callback_QsciLexerSQL_lexer(self *C.QsciLexerSQL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerSQL_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerSQL) OnLexerId(slot func(super func() int) int) {
	ok := C.QsciLexerSQL_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_lexerId
func miqt_exec_callback_QsciLexerSQL_lexerId(self *C.QsciLexerSQL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerSQL_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerSQL) OnAutoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerSQL_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_autoCompletionFillups
func miqt_exec_callback_QsciLexerSQL_autoCompletionFillups(self *C.QsciLexerSQL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerSQL_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerSQL) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerSQL_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerSQL_autoCompletionWordSeparators(self *C.QsciLexerSQL, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerSQL) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerSQL_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerSQL) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerSQL_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_blockEnd
func miqt_exec_callback_QsciLexerSQL_blockEnd(self *C.QsciLexerSQL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerSQL_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerSQL) OnBlockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerSQL_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_blockLookback
func miqt_exec_callback_QsciLexerSQL_blockLookback(self *C.QsciLexerSQL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerSQL_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerSQL) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerSQL_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_blockStart
func miqt_exec_callback_QsciLexerSQL_blockStart(self *C.QsciLexerSQL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerSQL_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerSQL) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerSQL_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_blockStartKeyword
func miqt_exec_callback_QsciLexerSQL_blockStartKeyword(self *C.QsciLexerSQL, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerSQL_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerSQL) OnBraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerSQL_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_braceStyle
func miqt_exec_callback_QsciLexerSQL_braceStyle(self *C.QsciLexerSQL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerSQL_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerSQL) OnCaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerSQL_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_caseSensitive
func miqt_exec_callback_QsciLexerSQL_caseSensitive(self *C.QsciLexerSQL, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_Color(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerSQL_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerSQL) OnColor(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerSQL_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_color
func miqt_exec_callback_QsciLexerSQL_color(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerSQL) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerSQL_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerSQL) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerSQL_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_eolFill
func miqt_exec_callback_QsciLexerSQL_eolFill(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_Font(style int) *qt6.QFont {

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerSQL_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerSQL) OnFont(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerSQL_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_font
func miqt_exec_callback_QsciLexerSQL_font(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerSQL) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerSQL_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerSQL) OnIndentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerSQL_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_indentationGuideView
func miqt_exec_callback_QsciLexerSQL_indentationGuideView(self *C.QsciLexerSQL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerSQL_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerSQL) OnKeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerSQL_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_keywords
func miqt_exec_callback_QsciLexerSQL_keywords(self *C.QsciLexerSQL, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerSQL_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerSQL) OnDefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerSQL_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_defaultStyle
func miqt_exec_callback_QsciLexerSQL_defaultStyle(self *C.QsciLexerSQL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerSQL) OnDescription(slot func(style int) string) {
	ok := C.QsciLexerSQL_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_description
func miqt_exec_callback_QsciLexerSQL_description(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerSQL) callVirtualBase_Paper(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerSQL_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerSQL) OnPaper(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerSQL_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_paper
func miqt_exec_callback_QsciLexerSQL_paper(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerSQL) callVirtualBase_DefaultColorWithStyle(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerSQL_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerSQL) OnDefaultColorWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerSQL_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_defaultColorWithStyle
func miqt_exec_callback_QsciLexerSQL_defaultColorWithStyle(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerSQL) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerSQL_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerSQL) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerSQL_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_defaultEolFill
func miqt_exec_callback_QsciLexerSQL_defaultEolFill(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_DefaultFontWithStyle(style int) *qt6.QFont {

	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerSQL_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerSQL) OnDefaultFontWithStyle(slot func(super func(style int) *qt6.QFont, style int) *qt6.QFont) {
	ok := C.QsciLexerSQL_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_defaultFontWithStyle
func miqt_exec_callback_QsciLexerSQL_defaultFontWithStyle(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QFont, style int) *qt6.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerSQL) callVirtualBase_DefaultPaperWithStyle(style int) *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerSQL_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerSQL) OnDefaultPaperWithStyle(slot func(super func(style int) *qt6.QColor, style int) *qt6.QColor) {
	ok := C.QsciLexerSQL_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerSQL_defaultPaperWithStyle(self *C.QsciLexerSQL, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt6.QColor, style int) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerSQL) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerSQL_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerSQL) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerSQL_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setEditor
func miqt_exec_callback_QsciLexerSQL_setEditor(self *C.QsciLexerSQL, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_RefreshProperties() {

	C.QsciLexerSQL_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerSQL) OnRefreshProperties(slot func(super func())) {
	ok := C.QsciLexerSQL_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_refreshProperties
func miqt_exec_callback_QsciLexerSQL_refreshProperties(self *C.QsciLexerSQL, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerSQL) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerSQL_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerSQL) OnStyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerSQL_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_styleBitsNeeded
func miqt_exec_callback_QsciLexerSQL_styleBitsNeeded(self *C.QsciLexerSQL, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerSQL_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerSQL) OnWordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerSQL_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_wordCharacters
func miqt_exec_callback_QsciLexerSQL_wordCharacters(self *C.QsciLexerSQL, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerSQL) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerSQL_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerSQL) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerSQL_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setAutoIndentStyle
func miqt_exec_callback_QsciLexerSQL_setAutoIndentStyle(self *C.QsciLexerSQL, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_SetColor(c *qt6.QColor, style int) {

	C.QsciLexerSQL_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerSQL) OnSetColor(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerSQL_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setColor
func miqt_exec_callback_QsciLexerSQL_setColor(self *C.QsciLexerSQL, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerSQL) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerSQL_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerSQL) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerSQL_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setEolFill
func miqt_exec_callback_QsciLexerSQL_setEolFill(self *C.QsciLexerSQL, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerSQL) callVirtualBase_SetFont(f *qt6.QFont, style int) {

	C.QsciLexerSQL_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerSQL) OnSetFont(slot func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int)) {
	ok := C.QsciLexerSQL_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setFont
func miqt_exec_callback_QsciLexerSQL_setFont(self *C.QsciLexerSQL, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt6.QFont, style int), f *qt6.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerSQL) callVirtualBase_SetPaper(c *qt6.QColor, style int) {

	C.QsciLexerSQL_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerSQL) OnSetPaper(slot func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int)) {
	ok := C.QsciLexerSQL_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_setPaper
func miqt_exec_callback_QsciLexerSQL_setPaper(self *C.QsciLexerSQL, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt6.QColor, style int), c *qt6.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerSQL) callVirtualBase_ReadProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerSQL_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerSQL) OnReadProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerSQL_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_readProperties
func miqt_exec_callback_QsciLexerSQL_readProperties(self *C.QsciLexerSQL, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_WriteProperties(qs *qt6.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerSQL_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerSQL) OnWriteProperties(slot func(super func(qs *qt6.QSettings, prefix string) bool, qs *qt6.QSettings, prefix string) bool) {
	ok := C.QsciLexerSQL_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_writeProperties
func miqt_exec_callback_QsciLexerSQL_writeProperties(self *C.QsciLexerSQL, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QsciLexerSQL_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerSQL) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QsciLexerSQL_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_event
func miqt_exec_callback_QsciLexerSQL_event(self *C.QsciLexerSQL, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QsciLexerSQL_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerSQL) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QsciLexerSQL_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_eventFilter
func miqt_exec_callback_QsciLexerSQL_eventFilter(self *C.QsciLexerSQL, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerSQL{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerSQL) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QsciLexerSQL_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerSQL) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QsciLexerSQL_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_timerEvent
func miqt_exec_callback_QsciLexerSQL_timerEvent(self *C.QsciLexerSQL, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QsciLexerSQL_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerSQL) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QsciLexerSQL_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_childEvent
func miqt_exec_callback_QsciLexerSQL_childEvent(self *C.QsciLexerSQL, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QsciLexerSQL_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerSQL) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QsciLexerSQL_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_customEvent
func miqt_exec_callback_QsciLexerSQL_customEvent(self *C.QsciLexerSQL, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerSQL_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerSQL) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerSQL_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_connectNotify
func miqt_exec_callback_QsciLexerSQL_connectNotify(self *C.QsciLexerSQL, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerSQL) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QsciLexerSQL_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerSQL) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QsciLexerSQL_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerSQL_disconnectNotify
func miqt_exec_callback_QsciLexerSQL_disconnectNotify(self *C.QsciLexerSQL, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerSQL{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerSQL) Delete() {
	C.QsciLexerSQL_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerSQL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerSQL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

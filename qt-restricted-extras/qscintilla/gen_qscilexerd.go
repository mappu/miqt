package qscintilla

/*

#include "gen_qscilexerd.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerD__ int

const (
	QsciLexerD__Default                QsciLexerD__ = 0
	QsciLexerD__Comment                QsciLexerD__ = 1
	QsciLexerD__CommentLine            QsciLexerD__ = 2
	QsciLexerD__CommentDoc             QsciLexerD__ = 3
	QsciLexerD__CommentNested          QsciLexerD__ = 4
	QsciLexerD__Number                 QsciLexerD__ = 5
	QsciLexerD__Keyword                QsciLexerD__ = 6
	QsciLexerD__KeywordSecondary       QsciLexerD__ = 7
	QsciLexerD__KeywordDoc             QsciLexerD__ = 8
	QsciLexerD__Typedefs               QsciLexerD__ = 9
	QsciLexerD__String                 QsciLexerD__ = 10
	QsciLexerD__UnclosedString         QsciLexerD__ = 11
	QsciLexerD__Character              QsciLexerD__ = 12
	QsciLexerD__Operator               QsciLexerD__ = 13
	QsciLexerD__Identifier             QsciLexerD__ = 14
	QsciLexerD__CommentLineDoc         QsciLexerD__ = 15
	QsciLexerD__CommentDocKeyword      QsciLexerD__ = 16
	QsciLexerD__CommentDocKeywordError QsciLexerD__ = 17
	QsciLexerD__BackquoteString        QsciLexerD__ = 18
	QsciLexerD__RawString              QsciLexerD__ = 19
	QsciLexerD__KeywordSet5            QsciLexerD__ = 20
	QsciLexerD__KeywordSet6            QsciLexerD__ = 21
	QsciLexerD__KeywordSet7            QsciLexerD__ = 22
)

type QsciLexerD struct {
	h *C.QsciLexerD
	*QsciLexer
}

func (this *QsciLexerD) cPointer() *C.QsciLexerD {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerD) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciLexerD constructs the type using only CGO pointers.
func newQsciLexerD(h *C.QsciLexerD) *QsciLexerD {
	if h == nil {
		return nil
	}
	var outptr_QsciLexer *C.QsciLexer = nil
	C.QsciLexerD_virtbase(h, &outptr_QsciLexer)

	return &QsciLexerD{h: h,
		QsciLexer: newQsciLexer(outptr_QsciLexer)}
}

// UnsafeNewQsciLexerD constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerD(h unsafe.Pointer) *QsciLexerD {
	return newQsciLexerD((*C.QsciLexerD)(h))
}

// NewQsciLexerD constructs a new QsciLexerD object.
func NewQsciLexerD() *QsciLexerD {

	return newQsciLexerD(C.QsciLexerD_new())
}

// NewQsciLexerD2 constructs a new QsciLexerD object.
func NewQsciLexerD2(parent *qt.QObject) *QsciLexerD {

	return newQsciLexerD(C.QsciLexerD_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerD) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerD_metaObject(this.h)))
}

func (this *QsciLexerD) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerD_metacast(this.h, param1_Cstring))
}

func QsciLexerD_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerD) Language() string {
	_ret := C.QsciLexerD_language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) Lexer() string {
	_ret := C.QsciLexerD_lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerD_autoCompletionWordSeparators(this.h)
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

func (this *QsciLexerD) BlockEnd() string {
	_ret := C.QsciLexerD_blockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStart() string {
	_ret := C.QsciLexerD_blockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStartKeyword() string {
	_ret := C.QsciLexerD_blockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) BraceStyle() int {
	return (int)(C.QsciLexerD_braceStyle(this.h))
}

func (this *QsciLexerD) WordCharacters() string {
	_ret := C.QsciLexerD_wordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) DefaultColor(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerD_defaultColor(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerD) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerD_defaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerD) DefaultFont(style int) *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerD_defaultFont(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerD) DefaultPaper(style int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerD_defaultPaper(this.h, (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerD) Keywords(set int) string {
	_ret := C.QsciLexerD_keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerD) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerD_description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerD) RefreshProperties() {
	C.QsciLexerD_refreshProperties(this.h)
}

func (this *QsciLexerD) FoldAtElse() bool {
	return (bool)(C.QsciLexerD_foldAtElse(this.h))
}

func (this *QsciLexerD) FoldComments() bool {
	return (bool)(C.QsciLexerD_foldComments(this.h))
}

func (this *QsciLexerD) FoldCompact() bool {
	return (bool)(C.QsciLexerD_foldCompact(this.h))
}

func (this *QsciLexerD) SetFoldAtElse(fold bool) {
	C.QsciLexerD_setFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerD) SetFoldComments(fold bool) {
	C.QsciLexerD_setFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerD) SetFoldCompact(fold bool) {
	C.QsciLexerD_setFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerD_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerD) BlockEnd1(style *int) string {
	_ret := C.QsciLexerD_blockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStart1(style *int) string {
	_ret := C.QsciLexerD_blockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerD_blockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// ReadProperties can only be called from a QsciLexerD that was directly constructed.
func (this *QsciLexerD) ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerD_protectedbase_readProperties(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// WriteProperties can only be called from a QsciLexerD that was directly constructed.
func (this *QsciLexerD) WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerD_protectedbase_writeProperties(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QsciLexerD that was directly constructed.
func (this *QsciLexerD) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QsciLexerD_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QsciLexerD that was directly constructed.
func (this *QsciLexerD) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerD_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QsciLexerD that was directly constructed.
func (this *QsciLexerD) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QsciLexerD_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QsciLexerD that was directly constructed.
func (this *QsciLexerD) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QsciLexerD_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QsciLexerD) callVirtualBase_SetFoldAtElse(fold bool) {

	C.QsciLexerD_virtualbase_setFoldAtElse(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerD) OnSetFoldAtElse(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerD_override_virtual_setFoldAtElse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setFoldAtElse
func miqt_exec_callback_QsciLexerD_setFoldAtElse(self *C.QsciLexerD, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetFoldAtElse, slotval1)

}

func (this *QsciLexerD) callVirtualBase_SetFoldComments(fold bool) {

	C.QsciLexerD_virtualbase_setFoldComments(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerD) OnSetFoldComments(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerD_override_virtual_setFoldComments(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setFoldComments
func miqt_exec_callback_QsciLexerD_setFoldComments(self *C.QsciLexerD, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetFoldComments, slotval1)

}

func (this *QsciLexerD) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerD_virtualbase_setFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerD) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerD_override_virtual_setFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setFoldCompact
func miqt_exec_callback_QsciLexerD_setFoldCompact(self *C.QsciLexerD, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetFoldCompact, slotval1)

}
func (this *QsciLexerD) OnLanguage(slot func() string) {
	ok := C.QsciLexerD_override_virtual_language(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_language
func miqt_exec_callback_QsciLexerD_language(self *C.QsciLexerD, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_Lexer() string {

	_ret := C.QsciLexerD_virtualbase_lexer(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerD) OnLexer(slot func(super func() string) string) {
	ok := C.QsciLexerD_override_virtual_lexer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_lexer
func miqt_exec_callback_QsciLexerD_lexer(self *C.QsciLexerD, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_Lexer)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_LexerId() int {

	return (int)(C.QsciLexerD_virtualbase_lexerId(unsafe.Pointer(this.h)))

}
func (this *QsciLexerD) OnLexerId(slot func(super func() int) int) {
	ok := C.QsciLexerD_override_virtual_lexerId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_lexerId
func miqt_exec_callback_QsciLexerD_lexerId(self *C.QsciLexerD, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_LexerId)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_AutoCompletionFillups() string {

	_ret := C.QsciLexerD_virtualbase_autoCompletionFillups(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerD) OnAutoCompletionFillups(slot func(super func() string) string) {
	ok := C.QsciLexerD_override_virtual_autoCompletionFillups(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_autoCompletionFillups
func miqt_exec_callback_QsciLexerD_autoCompletionFillups(self *C.QsciLexerD, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_AutoCompletionFillups)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_AutoCompletionWordSeparators() []string {

	var _ma C.struct_miqt_array = C.QsciLexerD_virtualbase_autoCompletionWordSeparators(unsafe.Pointer(this.h))
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
func (this *QsciLexerD) OnAutoCompletionWordSeparators(slot func(super func() []string) []string) {
	ok := C.QsciLexerD_override_virtual_autoCompletionWordSeparators(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_autoCompletionWordSeparators
func miqt_exec_callback_QsciLexerD_autoCompletionWordSeparators(self *C.QsciLexerD, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_AutoCompletionWordSeparators)
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

func (this *QsciLexerD) callVirtualBase_BlockEnd(style *int) string {

	_ret := C.QsciLexerD_virtualbase_blockEnd(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerD) OnBlockEnd(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerD_override_virtual_blockEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_blockEnd
func miqt_exec_callback_QsciLexerD_blockEnd(self *C.QsciLexerD, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_BlockEnd, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_BlockLookback() int {

	return (int)(C.QsciLexerD_virtualbase_blockLookback(unsafe.Pointer(this.h)))

}
func (this *QsciLexerD) OnBlockLookback(slot func(super func() int) int) {
	ok := C.QsciLexerD_override_virtual_blockLookback(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_blockLookback
func miqt_exec_callback_QsciLexerD_blockLookback(self *C.QsciLexerD, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_BlockLookback)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_BlockStart(style *int) string {

	_ret := C.QsciLexerD_virtualbase_blockStart(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerD) OnBlockStart(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerD_override_virtual_blockStart(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_blockStart
func miqt_exec_callback_QsciLexerD_blockStart(self *C.QsciLexerD, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_BlockStart, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_BlockStartKeyword(style *int) string {

	_ret := C.QsciLexerD_virtualbase_blockStartKeyword(unsafe.Pointer(this.h), (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)

}
func (this *QsciLexerD) OnBlockStartKeyword(slot func(super func(style *int) string, style *int) string) {
	ok := C.QsciLexerD_override_virtual_blockStartKeyword(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_blockStartKeyword
func miqt_exec_callback_QsciLexerD_blockStartKeyword(self *C.QsciLexerD, cb C.intptr_t, style *C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style *int) string, style *int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*int)(unsafe.Pointer(style))

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_BlockStartKeyword, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_BraceStyle() int {

	return (int)(C.QsciLexerD_virtualbase_braceStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerD) OnBraceStyle(slot func(super func() int) int) {
	ok := C.QsciLexerD_override_virtual_braceStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_braceStyle
func miqt_exec_callback_QsciLexerD_braceStyle(self *C.QsciLexerD, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_BraceStyle)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_CaseSensitive() bool {

	return (bool)(C.QsciLexerD_virtualbase_caseSensitive(unsafe.Pointer(this.h)))

}
func (this *QsciLexerD) OnCaseSensitive(slot func(super func() bool) bool) {
	ok := C.QsciLexerD_override_virtual_caseSensitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_caseSensitive
func miqt_exec_callback_QsciLexerD_caseSensitive(self *C.QsciLexerD, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_CaseSensitive)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_Color(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerD_virtualbase_color(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerD) OnColor(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerD_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_color
func miqt_exec_callback_QsciLexerD_color(self *C.QsciLexerD, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_Color, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerD) callVirtualBase_EolFill(style int) bool {

	return (bool)(C.QsciLexerD_virtualbase_eolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerD) OnEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerD_override_virtual_eolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_eolFill
func miqt_exec_callback_QsciLexerD_eolFill(self *C.QsciLexerD, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_EolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_Font(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerD_virtualbase_font(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerD) OnFont(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerD_override_virtual_font(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_font
func miqt_exec_callback_QsciLexerD_font(self *C.QsciLexerD, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_Font, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerD) callVirtualBase_IndentationGuideView() int {

	return (int)(C.QsciLexerD_virtualbase_indentationGuideView(unsafe.Pointer(this.h)))

}
func (this *QsciLexerD) OnIndentationGuideView(slot func(super func() int) int) {
	ok := C.QsciLexerD_override_virtual_indentationGuideView(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_indentationGuideView
func miqt_exec_callback_QsciLexerD_indentationGuideView(self *C.QsciLexerD, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_IndentationGuideView)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_Keywords(set int) string {

	_ret := C.QsciLexerD_virtualbase_keywords(unsafe.Pointer(this.h), (C.int)(set))
	return C.GoString(_ret)

}
func (this *QsciLexerD) OnKeywords(slot func(super func(set int) string, set int) string) {
	ok := C.QsciLexerD_override_virtual_keywords(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_keywords
func miqt_exec_callback_QsciLexerD_keywords(self *C.QsciLexerD, cb C.intptr_t, set C.int) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(set int) string, set int) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(set)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_Keywords, slotval1)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_DefaultStyle() int {

	return (int)(C.QsciLexerD_virtualbase_defaultStyle(unsafe.Pointer(this.h)))

}
func (this *QsciLexerD) OnDefaultStyle(slot func(super func() int) int) {
	ok := C.QsciLexerD_override_virtual_defaultStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_defaultStyle
func miqt_exec_callback_QsciLexerD_defaultStyle(self *C.QsciLexerD, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_DefaultStyle)

	return (C.int)(virtualReturn)

}
func (this *QsciLexerD) OnDescription(slot func(style int) string) {
	ok := C.QsciLexerD_override_virtual_description(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_description
func miqt_exec_callback_QsciLexerD_description(self *C.QsciLexerD, cb C.intptr_t, style C.int) C.struct_miqt_string {
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

func (this *QsciLexerD) callVirtualBase_Paper(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerD_virtualbase_paper(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerD) OnPaper(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerD_override_virtual_paper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_paper
func miqt_exec_callback_QsciLexerD_paper(self *C.QsciLexerD, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_Paper, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerD) callVirtualBase_DefaultColorWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerD_virtualbase_defaultColorWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerD) OnDefaultColorWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerD_override_virtual_defaultColorWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_defaultColorWithStyle
func miqt_exec_callback_QsciLexerD_defaultColorWithStyle(self *C.QsciLexerD, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_DefaultColorWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerD) callVirtualBase_DefaultEolFill(style int) bool {

	return (bool)(C.QsciLexerD_virtualbase_defaultEolFill(unsafe.Pointer(this.h), (C.int)(style)))

}
func (this *QsciLexerD) OnDefaultEolFill(slot func(super func(style int) bool, style int) bool) {
	ok := C.QsciLexerD_override_virtual_defaultEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_defaultEolFill
func miqt_exec_callback_QsciLexerD_defaultEolFill(self *C.QsciLexerD, cb C.intptr_t, style C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) bool, style int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_DefaultEolFill, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_DefaultFontWithStyle(style int) *qt.QFont {

	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QsciLexerD_virtualbase_defaultFontWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerD) OnDefaultFontWithStyle(slot func(super func(style int) *qt.QFont, style int) *qt.QFont) {
	ok := C.QsciLexerD_override_virtual_defaultFontWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_defaultFontWithStyle
func miqt_exec_callback_QsciLexerD_defaultFontWithStyle(self *C.QsciLexerD, cb C.intptr_t, style C.int) *C.QFont {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QFont, style int) *qt.QFont)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_DefaultFontWithStyle, slotval1)

	return (*C.QFont)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerD) callVirtualBase_DefaultPaperWithStyle(style int) *qt.QColor {

	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QsciLexerD_virtualbase_defaultPaperWithStyle(unsafe.Pointer(this.h), (C.int)(style))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciLexerD) OnDefaultPaperWithStyle(slot func(super func(style int) *qt.QColor, style int) *qt.QColor) {
	ok := C.QsciLexerD_override_virtual_defaultPaperWithStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_defaultPaperWithStyle
func miqt_exec_callback_QsciLexerD_defaultPaperWithStyle(self *C.QsciLexerD, cb C.intptr_t, style C.int) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(style int) *qt.QColor, style int) *qt.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(style)

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_DefaultPaperWithStyle, slotval1)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QsciLexerD) callVirtualBase_SetEditor(editor *QsciScintilla) {

	C.QsciLexerD_virtualbase_setEditor(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QsciLexerD) OnSetEditor(slot func(super func(editor *QsciScintilla), editor *QsciScintilla)) {
	ok := C.QsciLexerD_override_virtual_setEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setEditor
func miqt_exec_callback_QsciLexerD_setEditor(self *C.QsciLexerD, cb C.intptr_t, editor *C.QsciScintilla) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QsciScintilla), editor *QsciScintilla))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintilla(editor)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetEditor, slotval1)

}

func (this *QsciLexerD) callVirtualBase_RefreshProperties() {

	C.QsciLexerD_virtualbase_refreshProperties(unsafe.Pointer(this.h))

}
func (this *QsciLexerD) OnRefreshProperties(slot func(super func())) {
	ok := C.QsciLexerD_override_virtual_refreshProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_refreshProperties
func miqt_exec_callback_QsciLexerD_refreshProperties(self *C.QsciLexerD, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QsciLexerD{h: self}).callVirtualBase_RefreshProperties)

}

func (this *QsciLexerD) callVirtualBase_StyleBitsNeeded() int {

	return (int)(C.QsciLexerD_virtualbase_styleBitsNeeded(unsafe.Pointer(this.h)))

}
func (this *QsciLexerD) OnStyleBitsNeeded(slot func(super func() int) int) {
	ok := C.QsciLexerD_override_virtual_styleBitsNeeded(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_styleBitsNeeded
func miqt_exec_callback_QsciLexerD_styleBitsNeeded(self *C.QsciLexerD, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_StyleBitsNeeded)

	return (C.int)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_WordCharacters() string {

	_ret := C.QsciLexerD_virtualbase_wordCharacters(unsafe.Pointer(this.h))
	return C.GoString(_ret)

}
func (this *QsciLexerD) OnWordCharacters(slot func(super func() string) string) {
	ok := C.QsciLexerD_override_virtual_wordCharacters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_wordCharacters
func miqt_exec_callback_QsciLexerD_wordCharacters(self *C.QsciLexerD, cb C.intptr_t) *C.const_char {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_WordCharacters)
	virtualReturn_Cstring := C.CString(virtualReturn)
	defer C.free(unsafe.Pointer(virtualReturn_Cstring))

	return virtualReturn_Cstring

}

func (this *QsciLexerD) callVirtualBase_SetAutoIndentStyle(autoindentstyle int) {

	C.QsciLexerD_virtualbase_setAutoIndentStyle(unsafe.Pointer(this.h), (C.int)(autoindentstyle))

}
func (this *QsciLexerD) OnSetAutoIndentStyle(slot func(super func(autoindentstyle int), autoindentstyle int)) {
	ok := C.QsciLexerD_override_virtual_setAutoIndentStyle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setAutoIndentStyle
func miqt_exec_callback_QsciLexerD_setAutoIndentStyle(self *C.QsciLexerD, cb C.intptr_t, autoindentstyle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(autoindentstyle int), autoindentstyle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(autoindentstyle)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetAutoIndentStyle, slotval1)

}

func (this *QsciLexerD) callVirtualBase_SetColor(c *qt.QColor, style int) {

	C.QsciLexerD_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerD) OnSetColor(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerD_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setColor
func miqt_exec_callback_QsciLexerD_setColor(self *C.QsciLexerD, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetColor, slotval1, slotval2)

}

func (this *QsciLexerD) callVirtualBase_SetEolFill(eoffill bool, style int) {

	C.QsciLexerD_virtualbase_setEolFill(unsafe.Pointer(this.h), (C.bool)(eoffill), (C.int)(style))

}
func (this *QsciLexerD) OnSetEolFill(slot func(super func(eoffill bool, style int), eoffill bool, style int)) {
	ok := C.QsciLexerD_override_virtual_setEolFill(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setEolFill
func miqt_exec_callback_QsciLexerD_setEolFill(self *C.QsciLexerD, cb C.intptr_t, eoffill C.bool, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eoffill bool, style int), eoffill bool, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(eoffill)

	slotval2 := (int)(style)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetEolFill, slotval1, slotval2)

}

func (this *QsciLexerD) callVirtualBase_SetFont(f *qt.QFont, style int) {

	C.QsciLexerD_virtualbase_setFont(unsafe.Pointer(this.h), (*C.QFont)(f.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerD) OnSetFont(slot func(super func(f *qt.QFont, style int), f *qt.QFont, style int)) {
	ok := C.QsciLexerD_override_virtual_setFont(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setFont
func miqt_exec_callback_QsciLexerD_setFont(self *C.QsciLexerD, cb C.intptr_t, f *C.QFont, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *qt.QFont, style int), f *qt.QFont, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(f))

	slotval2 := (int)(style)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetFont, slotval1, slotval2)

}

func (this *QsciLexerD) callVirtualBase_SetPaper(c *qt.QColor, style int) {

	C.QsciLexerD_virtualbase_setPaper(unsafe.Pointer(this.h), (*C.QColor)(c.UnsafePointer()), (C.int)(style))

}
func (this *QsciLexerD) OnSetPaper(slot func(super func(c *qt.QColor, style int), c *qt.QColor, style int)) {
	ok := C.QsciLexerD_override_virtual_setPaper(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_setPaper
func miqt_exec_callback_QsciLexerD_setPaper(self *C.QsciLexerD, cb C.intptr_t, c *C.QColor, style C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(c *qt.QColor, style int), c *qt.QColor, style int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQColor(unsafe.Pointer(c))

	slotval2 := (int)(style)

	gofunc((&QsciLexerD{h: self}).callVirtualBase_SetPaper, slotval1, slotval2)

}

func (this *QsciLexerD) callVirtualBase_ReadProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerD_virtualbase_readProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerD) OnReadProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerD_override_virtual_readProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_readProperties
func miqt_exec_callback_QsciLexerD_readProperties(self *C.QsciLexerD, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_ReadProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_WriteProperties(qs *qt.QSettings, prefix string) bool {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))

	return (bool)(C.QsciLexerD_virtualbase_writeProperties(unsafe.Pointer(this.h), (*C.QSettings)(qs.UnsafePointer()), prefix_ms))

}
func (this *QsciLexerD) OnWriteProperties(slot func(super func(qs *qt.QSettings, prefix string) bool, qs *qt.QSettings, prefix string) bool) {
	ok := C.QsciLexerD_override_virtual_writeProperties(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_writeProperties
func miqt_exec_callback_QsciLexerD_writeProperties(self *C.QsciLexerD, cb C.intptr_t, qs *C.QSettings, prefix C.struct_miqt_string) C.bool {
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

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_WriteProperties, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QsciLexerD_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerD) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QsciLexerD_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_event
func miqt_exec_callback_QsciLexerD_event(self *C.QsciLexerD, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QsciLexerD_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QsciLexerD) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QsciLexerD_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_eventFilter
func miqt_exec_callback_QsciLexerD_eventFilter(self *C.QsciLexerD, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QsciLexerD{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciLexerD) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QsciLexerD_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QsciLexerD) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QsciLexerD_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_timerEvent
func miqt_exec_callback_QsciLexerD_timerEvent(self *C.QsciLexerD, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerD{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QsciLexerD) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QsciLexerD_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QsciLexerD) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QsciLexerD_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_childEvent
func miqt_exec_callback_QsciLexerD_childEvent(self *C.QsciLexerD, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerD{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QsciLexerD) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QsciLexerD_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QsciLexerD) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QsciLexerD_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_customEvent
func miqt_exec_callback_QsciLexerD_customEvent(self *C.QsciLexerD, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QsciLexerD{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QsciLexerD) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerD_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerD) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerD_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_connectNotify
func miqt_exec_callback_QsciLexerD_connectNotify(self *C.QsciLexerD, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerD{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QsciLexerD) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QsciLexerD_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QsciLexerD) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QsciLexerD_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerD_disconnectNotify
func miqt_exec_callback_QsciLexerD_disconnectNotify(self *C.QsciLexerD, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QsciLexerD{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QsciLexerD) Delete() {
	C.QsciLexerD_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerD) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerD) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

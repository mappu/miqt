package qscintilla

/*

#include "gen_qscilexercoffeescript.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerCoffeeScript__ int

const (
	QsciLexerCoffeeScript__Default                QsciLexerCoffeeScript__ = 0
	QsciLexerCoffeeScript__Comment                QsciLexerCoffeeScript__ = 1
	QsciLexerCoffeeScript__CommentLine            QsciLexerCoffeeScript__ = 2
	QsciLexerCoffeeScript__CommentDoc             QsciLexerCoffeeScript__ = 3
	QsciLexerCoffeeScript__Number                 QsciLexerCoffeeScript__ = 4
	QsciLexerCoffeeScript__Keyword                QsciLexerCoffeeScript__ = 5
	QsciLexerCoffeeScript__DoubleQuotedString     QsciLexerCoffeeScript__ = 6
	QsciLexerCoffeeScript__SingleQuotedString     QsciLexerCoffeeScript__ = 7
	QsciLexerCoffeeScript__UUID                   QsciLexerCoffeeScript__ = 8
	QsciLexerCoffeeScript__PreProcessor           QsciLexerCoffeeScript__ = 9
	QsciLexerCoffeeScript__Operator               QsciLexerCoffeeScript__ = 10
	QsciLexerCoffeeScript__Identifier             QsciLexerCoffeeScript__ = 11
	QsciLexerCoffeeScript__UnclosedString         QsciLexerCoffeeScript__ = 12
	QsciLexerCoffeeScript__VerbatimString         QsciLexerCoffeeScript__ = 13
	QsciLexerCoffeeScript__Regex                  QsciLexerCoffeeScript__ = 14
	QsciLexerCoffeeScript__CommentLineDoc         QsciLexerCoffeeScript__ = 15
	QsciLexerCoffeeScript__KeywordSet2            QsciLexerCoffeeScript__ = 16
	QsciLexerCoffeeScript__CommentDocKeyword      QsciLexerCoffeeScript__ = 17
	QsciLexerCoffeeScript__CommentDocKeywordError QsciLexerCoffeeScript__ = 18
	QsciLexerCoffeeScript__GlobalClass            QsciLexerCoffeeScript__ = 19
	QsciLexerCoffeeScript__CommentBlock           QsciLexerCoffeeScript__ = 22
	QsciLexerCoffeeScript__BlockRegex             QsciLexerCoffeeScript__ = 23
	QsciLexerCoffeeScript__BlockRegexComment      QsciLexerCoffeeScript__ = 24
	QsciLexerCoffeeScript__InstanceProperty       QsciLexerCoffeeScript__ = 25
)

type QsciLexerCoffeeScript struct {
	h *C.QsciLexerCoffeeScript
	*QsciLexer
}

func (this *QsciLexerCoffeeScript) cPointer() *C.QsciLexerCoffeeScript {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerCoffeeScript) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerCoffeeScript(h *C.QsciLexerCoffeeScript) *QsciLexerCoffeeScript {
	if h == nil {
		return nil
	}
	return &QsciLexerCoffeeScript{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerCoffeeScript(h unsafe.Pointer) *QsciLexerCoffeeScript {
	return newQsciLexerCoffeeScript((*C.QsciLexerCoffeeScript)(h))
}

// NewQsciLexerCoffeeScript constructs a new QsciLexerCoffeeScript object.
func NewQsciLexerCoffeeScript() *QsciLexerCoffeeScript {
	ret := C.QsciLexerCoffeeScript_new()
	return newQsciLexerCoffeeScript(ret)
}

// NewQsciLexerCoffeeScript2 constructs a new QsciLexerCoffeeScript object.
func NewQsciLexerCoffeeScript2(parent *qt.QObject) *QsciLexerCoffeeScript {
	ret := C.QsciLexerCoffeeScript_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerCoffeeScript(ret)
}

func (this *QsciLexerCoffeeScript) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerCoffeeScript_MetaObject(this.h)))
}

func (this *QsciLexerCoffeeScript) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerCoffeeScript_Metacast(this.h, param1_Cstring))
}

func QsciLexerCoffeeScript_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCoffeeScript) Language() string {
	_ret := C.QsciLexerCoffeeScript_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) Lexer() string {
	_ret := C.QsciLexerCoffeeScript_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerCoffeeScript_AutoCompletionWordSeparators(this.h)
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

func (this *QsciLexerCoffeeScript) BlockEnd() string {
	_ret := C.QsciLexerCoffeeScript_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStart() string {
	_ret := C.QsciLexerCoffeeScript_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStartKeyword() string {
	_ret := C.QsciLexerCoffeeScript_BlockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BraceStyle() int {
	return (int)(C.QsciLexerCoffeeScript_BraceStyle(this.h))
}

func (this *QsciLexerCoffeeScript) WordCharacters() string {
	_ret := C.QsciLexerCoffeeScript_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerCoffeeScript_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCoffeeScript) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerCoffeeScript_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerCoffeeScript) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerCoffeeScript_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCoffeeScript) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerCoffeeScript_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerCoffeeScript) Keywords(set int) string {
	_ret := C.QsciLexerCoffeeScript_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCoffeeScript) RefreshProperties() {
	C.QsciLexerCoffeeScript_RefreshProperties(this.h)
}

func (this *QsciLexerCoffeeScript) DollarsAllowed() bool {
	return (bool)(C.QsciLexerCoffeeScript_DollarsAllowed(this.h))
}

func (this *QsciLexerCoffeeScript) SetDollarsAllowed(allowed bool) {
	C.QsciLexerCoffeeScript_SetDollarsAllowed(this.h, (C.bool)(allowed))
}

func (this *QsciLexerCoffeeScript) FoldComments() bool {
	return (bool)(C.QsciLexerCoffeeScript_FoldComments(this.h))
}

func (this *QsciLexerCoffeeScript) SetFoldComments(fold bool) {
	C.QsciLexerCoffeeScript_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerCoffeeScript) FoldCompact() bool {
	return (bool)(C.QsciLexerCoffeeScript_FoldCompact(this.h))
}

func (this *QsciLexerCoffeeScript) SetFoldCompact(fold bool) {
	C.QsciLexerCoffeeScript_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerCoffeeScript) StylePreprocessor() bool {
	return (bool)(C.QsciLexerCoffeeScript_StylePreprocessor(this.h))
}

func (this *QsciLexerCoffeeScript) SetStylePreprocessor(style bool) {
	C.QsciLexerCoffeeScript_SetStylePreprocessor(this.h, (C.bool)(style))
}

func QsciLexerCoffeeScript_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerCoffeeScript_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerCoffeeScript_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerCoffeeScript) BlockEnd1(style *int) string {
	_ret := C.QsciLexerCoffeeScript_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStart1(style *int) string {
	_ret := C.QsciLexerCoffeeScript_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerCoffeeScript) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerCoffeeScript_BlockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerCoffeeScript) Delete() {
	C.QsciLexerCoffeeScript_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerCoffeeScript) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerCoffeeScript) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscilexerd.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
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

func newQsciLexerD(h *C.QsciLexerD) *QsciLexerD {
	if h == nil {
		return nil
	}
	return &QsciLexerD{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerD(h unsafe.Pointer) *QsciLexerD {
	return newQsciLexerD((*C.QsciLexerD)(h))
}

// NewQsciLexerD constructs a new QsciLexerD object.
func NewQsciLexerD() *QsciLexerD {
	ret := C.QsciLexerD_new()
	return newQsciLexerD(ret)
}

// NewQsciLexerD2 constructs a new QsciLexerD object.
func NewQsciLexerD2(parent *qt.QObject) *QsciLexerD {
	ret := C.QsciLexerD_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerD(ret)
}

func (this *QsciLexerD) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerD_MetaObject(this.h)))
}

func (this *QsciLexerD) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerD_Metacast(this.h, param1_Cstring))
}

func QsciLexerD_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerD) Language() string {
	_ret := C.QsciLexerD_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) Lexer() string {
	_ret := C.QsciLexerD_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) AutoCompletionWordSeparators() []string {
	var _ma C.struct_miqt_array = C.QsciLexerD_AutoCompletionWordSeparators(this.h)
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
	_ret := C.QsciLexerD_BlockEnd(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStart() string {
	_ret := C.QsciLexerD_BlockStart(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStartKeyword() string {
	_ret := C.QsciLexerD_BlockStartKeyword(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) BraceStyle() int {
	return (int)(C.QsciLexerD_BraceStyle(this.h))
}

func (this *QsciLexerD) WordCharacters() string {
	_ret := C.QsciLexerD_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerD) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerD_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerD) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerD_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerD) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerD_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerD) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerD_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerD) Keywords(set int) string {
	_ret := C.QsciLexerD_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerD) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerD_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerD) RefreshProperties() {
	C.QsciLexerD_RefreshProperties(this.h)
}

func (this *QsciLexerD) FoldAtElse() bool {
	return (bool)(C.QsciLexerD_FoldAtElse(this.h))
}

func (this *QsciLexerD) FoldComments() bool {
	return (bool)(C.QsciLexerD_FoldComments(this.h))
}

func (this *QsciLexerD) FoldCompact() bool {
	return (bool)(C.QsciLexerD_FoldCompact(this.h))
}

func (this *QsciLexerD) SetFoldAtElse(fold bool) {
	C.QsciLexerD_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerD) SetFoldComments(fold bool) {
	C.QsciLexerD_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerD) SetFoldCompact(fold bool) {
	C.QsciLexerD_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerD_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerD_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerD_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerD) BlockEnd1(style *int) string {
	_ret := C.QsciLexerD_BlockEnd1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStart1(style *int) string {
	_ret := C.QsciLexerD_BlockStart1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

func (this *QsciLexerD) BlockStartKeyword1(style *int) string {
	_ret := C.QsciLexerD_BlockStartKeyword1(this.h, (*C.int)(unsafe.Pointer(style)))
	return C.GoString(_ret)
}

// Delete this object from C++ memory.
func (this *QsciLexerD) Delete() {
	C.QsciLexerD_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerD) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerD) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

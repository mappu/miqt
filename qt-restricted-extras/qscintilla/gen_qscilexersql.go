package qscintilla

/*

#include "gen_qscilexersql.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
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

func newQsciLexerSQL(h *C.QsciLexerSQL) *QsciLexerSQL {
	if h == nil {
		return nil
	}
	return &QsciLexerSQL{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerSQL(h unsafe.Pointer) *QsciLexerSQL {
	return newQsciLexerSQL((*C.QsciLexerSQL)(h))
}

// NewQsciLexerSQL constructs a new QsciLexerSQL object.
func NewQsciLexerSQL() *QsciLexerSQL {
	ret := C.QsciLexerSQL_new()
	return newQsciLexerSQL(ret)
}

// NewQsciLexerSQL2 constructs a new QsciLexerSQL object.
func NewQsciLexerSQL2(parent *qt.QObject) *QsciLexerSQL {
	ret := C.QsciLexerSQL_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerSQL(ret)
}

func (this *QsciLexerSQL) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerSQL_MetaObject(this.h)))
}

func (this *QsciLexerSQL) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerSQL_Metacast(this.h, param1_Cstring))
}

func QsciLexerSQL_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerSQL_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerSQL) Language() string {
	_ret := C.QsciLexerSQL_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerSQL) Lexer() string {
	_ret := C.QsciLexerSQL_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerSQL) BraceStyle() int {
	return (int)(C.QsciLexerSQL_BraceStyle(this.h))
}

func (this *QsciLexerSQL) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerSQL_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSQL) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerSQL_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerSQL) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerSQL_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSQL) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerSQL_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSQL) Keywords(set int) string {
	_ret := C.QsciLexerSQL_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerSQL) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerSQL_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerSQL) RefreshProperties() {
	C.QsciLexerSQL_RefreshProperties(this.h)
}

func (this *QsciLexerSQL) BackslashEscapes() bool {
	return (bool)(C.QsciLexerSQL_BackslashEscapes(this.h))
}

func (this *QsciLexerSQL) SetDottedWords(enable bool) {
	C.QsciLexerSQL_SetDottedWords(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) DottedWords() bool {
	return (bool)(C.QsciLexerSQL_DottedWords(this.h))
}

func (this *QsciLexerSQL) SetFoldAtElse(fold bool) {
	C.QsciLexerSQL_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerSQL) FoldAtElse() bool {
	return (bool)(C.QsciLexerSQL_FoldAtElse(this.h))
}

func (this *QsciLexerSQL) FoldComments() bool {
	return (bool)(C.QsciLexerSQL_FoldComments(this.h))
}

func (this *QsciLexerSQL) FoldCompact() bool {
	return (bool)(C.QsciLexerSQL_FoldCompact(this.h))
}

func (this *QsciLexerSQL) SetFoldOnlyBegin(fold bool) {
	C.QsciLexerSQL_SetFoldOnlyBegin(this.h, (C.bool)(fold))
}

func (this *QsciLexerSQL) FoldOnlyBegin() bool {
	return (bool)(C.QsciLexerSQL_FoldOnlyBegin(this.h))
}

func (this *QsciLexerSQL) SetHashComments(enable bool) {
	C.QsciLexerSQL_SetHashComments(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) HashComments() bool {
	return (bool)(C.QsciLexerSQL_HashComments(this.h))
}

func (this *QsciLexerSQL) SetQuotedIdentifiers(enable bool) {
	C.QsciLexerSQL_SetQuotedIdentifiers(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) QuotedIdentifiers() bool {
	return (bool)(C.QsciLexerSQL_QuotedIdentifiers(this.h))
}

func (this *QsciLexerSQL) SetBackslashEscapes(enable bool) {
	C.QsciLexerSQL_SetBackslashEscapes(this.h, (C.bool)(enable))
}

func (this *QsciLexerSQL) SetFoldComments(fold bool) {
	C.QsciLexerSQL_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerSQL) SetFoldCompact(fold bool) {
	C.QsciLexerSQL_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerSQL_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerSQL_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerSQL_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerSQL_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSQL_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerSQL) Delete() {
	C.QsciLexerSQL_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerSQL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerSQL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscilexerbash.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerBash__ int

const (
	QsciLexerBash__Default                  QsciLexerBash__ = 0
	QsciLexerBash__Error                    QsciLexerBash__ = 1
	QsciLexerBash__Comment                  QsciLexerBash__ = 2
	QsciLexerBash__Number                   QsciLexerBash__ = 3
	QsciLexerBash__Keyword                  QsciLexerBash__ = 4
	QsciLexerBash__DoubleQuotedString       QsciLexerBash__ = 5
	QsciLexerBash__SingleQuotedString       QsciLexerBash__ = 6
	QsciLexerBash__Operator                 QsciLexerBash__ = 7
	QsciLexerBash__Identifier               QsciLexerBash__ = 8
	QsciLexerBash__Scalar                   QsciLexerBash__ = 9
	QsciLexerBash__ParameterExpansion       QsciLexerBash__ = 10
	QsciLexerBash__Backticks                QsciLexerBash__ = 11
	QsciLexerBash__HereDocumentDelimiter    QsciLexerBash__ = 12
	QsciLexerBash__SingleQuotedHereDocument QsciLexerBash__ = 13
)

type QsciLexerBash struct {
	h *C.QsciLexerBash
	*QsciLexer
}

func (this *QsciLexerBash) cPointer() *C.QsciLexerBash {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerBash) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerBash(h *C.QsciLexerBash) *QsciLexerBash {
	if h == nil {
		return nil
	}
	return &QsciLexerBash{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerBash(h unsafe.Pointer) *QsciLexerBash {
	return newQsciLexerBash((*C.QsciLexerBash)(h))
}

// NewQsciLexerBash constructs a new QsciLexerBash object.
func NewQsciLexerBash() *QsciLexerBash {
	ret := C.QsciLexerBash_new()
	return newQsciLexerBash(ret)
}

// NewQsciLexerBash2 constructs a new QsciLexerBash object.
func NewQsciLexerBash2(parent *qt.QObject) *QsciLexerBash {
	ret := C.QsciLexerBash_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerBash(ret)
}

func (this *QsciLexerBash) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerBash_MetaObject(this.h)))
}

func (this *QsciLexerBash) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerBash_Metacast(this.h, param1_Cstring))
}

func QsciLexerBash_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerBash) Language() string {
	_ret := C.QsciLexerBash_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBash) Lexer() string {
	_ret := C.QsciLexerBash_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBash) BraceStyle() int {
	return (int)(C.QsciLexerBash_BraceStyle(this.h))
}

func (this *QsciLexerBash) WordCharacters() string {
	_ret := C.QsciLexerBash_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerBash) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerBash_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBash) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerBash_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerBash) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerBash_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBash) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerBash_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerBash) Keywords(set int) string {
	_ret := C.QsciLexerBash_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerBash) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerBash_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerBash) RefreshProperties() {
	C.QsciLexerBash_RefreshProperties(this.h)
}

func (this *QsciLexerBash) FoldComments() bool {
	return (bool)(C.QsciLexerBash_FoldComments(this.h))
}

func (this *QsciLexerBash) FoldCompact() bool {
	return (bool)(C.QsciLexerBash_FoldCompact(this.h))
}

func (this *QsciLexerBash) SetFoldComments(fold bool) {
	C.QsciLexerBash_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerBash) SetFoldCompact(fold bool) {
	C.QsciLexerBash_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerBash_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerBash_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerBash_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerBash) Delete() {
	C.QsciLexerBash_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerBash) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerBash) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscilexertcl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerTCL__ int

const (
	QsciLexerTCL__Default           QsciLexerTCL__ = 0
	QsciLexerTCL__Comment           QsciLexerTCL__ = 1
	QsciLexerTCL__CommentLine       QsciLexerTCL__ = 2
	QsciLexerTCL__Number            QsciLexerTCL__ = 3
	QsciLexerTCL__QuotedKeyword     QsciLexerTCL__ = 4
	QsciLexerTCL__QuotedString      QsciLexerTCL__ = 5
	QsciLexerTCL__Operator          QsciLexerTCL__ = 6
	QsciLexerTCL__Identifier        QsciLexerTCL__ = 7
	QsciLexerTCL__Substitution      QsciLexerTCL__ = 8
	QsciLexerTCL__SubstitutionBrace QsciLexerTCL__ = 9
	QsciLexerTCL__Modifier          QsciLexerTCL__ = 10
	QsciLexerTCL__ExpandKeyword     QsciLexerTCL__ = 11
	QsciLexerTCL__TCLKeyword        QsciLexerTCL__ = 12
	QsciLexerTCL__TkKeyword         QsciLexerTCL__ = 13
	QsciLexerTCL__ITCLKeyword       QsciLexerTCL__ = 14
	QsciLexerTCL__TkCommand         QsciLexerTCL__ = 15
	QsciLexerTCL__KeywordSet6       QsciLexerTCL__ = 16
	QsciLexerTCL__KeywordSet7       QsciLexerTCL__ = 17
	QsciLexerTCL__KeywordSet8       QsciLexerTCL__ = 18
	QsciLexerTCL__KeywordSet9       QsciLexerTCL__ = 19
	QsciLexerTCL__CommentBox        QsciLexerTCL__ = 20
	QsciLexerTCL__CommentBlock      QsciLexerTCL__ = 21
)

type QsciLexerTCL struct {
	h *C.QsciLexerTCL
	*QsciLexer
}

func (this *QsciLexerTCL) cPointer() *C.QsciLexerTCL {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerTCL) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerTCL(h *C.QsciLexerTCL) *QsciLexerTCL {
	if h == nil {
		return nil
	}
	return &QsciLexerTCL{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerTCL(h unsafe.Pointer) *QsciLexerTCL {
	return newQsciLexerTCL((*C.QsciLexerTCL)(h))
}

// NewQsciLexerTCL constructs a new QsciLexerTCL object.
func NewQsciLexerTCL() *QsciLexerTCL {
	ret := C.QsciLexerTCL_new()
	return newQsciLexerTCL(ret)
}

// NewQsciLexerTCL2 constructs a new QsciLexerTCL object.
func NewQsciLexerTCL2(parent *qt.QObject) *QsciLexerTCL {
	ret := C.QsciLexerTCL_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerTCL(ret)
}

func (this *QsciLexerTCL) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerTCL_MetaObject(this.h)))
}

func (this *QsciLexerTCL) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerTCL_Metacast(this.h, param1_Cstring))
}

func QsciLexerTCL_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTCL_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerTCL_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTCL_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerTCL) Language() string {
	_ret := C.QsciLexerTCL_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerTCL) Lexer() string {
	_ret := C.QsciLexerTCL_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerTCL) BraceStyle() int {
	return (int)(C.QsciLexerTCL_BraceStyle(this.h))
}

func (this *QsciLexerTCL) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerTCL_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerTCL) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerTCL_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerTCL) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerTCL_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerTCL) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerTCL_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerTCL) Keywords(set int) string {
	_ret := C.QsciLexerTCL_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerTCL) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerTCL_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerTCL) RefreshProperties() {
	C.QsciLexerTCL_RefreshProperties(this.h)
}

func (this *QsciLexerTCL) SetFoldComments(fold bool) {
	C.QsciLexerTCL_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerTCL) FoldComments() bool {
	return (bool)(C.QsciLexerTCL_FoldComments(this.h))
}

func QsciLexerTCL_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTCL_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerTCL_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTCL_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerTCL_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTCL_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerTCL_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerTCL_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerTCL) Delete() {
	C.QsciLexerTCL_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerTCL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerTCL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

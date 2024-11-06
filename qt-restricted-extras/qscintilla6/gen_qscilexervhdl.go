package qscintilla6

/*

#include "gen_qscilexervhdl.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerVHDL__ int

const (
	QsciLexerVHDL__Default          QsciLexerVHDL__ = 0
	QsciLexerVHDL__Comment          QsciLexerVHDL__ = 1
	QsciLexerVHDL__CommentLine      QsciLexerVHDL__ = 2
	QsciLexerVHDL__Number           QsciLexerVHDL__ = 3
	QsciLexerVHDL__String           QsciLexerVHDL__ = 4
	QsciLexerVHDL__Operator         QsciLexerVHDL__ = 5
	QsciLexerVHDL__Identifier       QsciLexerVHDL__ = 6
	QsciLexerVHDL__UnclosedString   QsciLexerVHDL__ = 7
	QsciLexerVHDL__Keyword          QsciLexerVHDL__ = 8
	QsciLexerVHDL__StandardOperator QsciLexerVHDL__ = 9
	QsciLexerVHDL__Attribute        QsciLexerVHDL__ = 10
	QsciLexerVHDL__StandardFunction QsciLexerVHDL__ = 11
	QsciLexerVHDL__StandardPackage  QsciLexerVHDL__ = 12
	QsciLexerVHDL__StandardType     QsciLexerVHDL__ = 13
	QsciLexerVHDL__KeywordSet7      QsciLexerVHDL__ = 14
	QsciLexerVHDL__CommentBlock     QsciLexerVHDL__ = 15
)

type QsciLexerVHDL struct {
	h *C.QsciLexerVHDL
	*QsciLexer
}

func (this *QsciLexerVHDL) cPointer() *C.QsciLexerVHDL {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerVHDL) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerVHDL(h *C.QsciLexerVHDL) *QsciLexerVHDL {
	if h == nil {
		return nil
	}
	return &QsciLexerVHDL{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerVHDL(h unsafe.Pointer) *QsciLexerVHDL {
	return newQsciLexerVHDL((*C.QsciLexerVHDL)(h))
}

// NewQsciLexerVHDL constructs a new QsciLexerVHDL object.
func NewQsciLexerVHDL() *QsciLexerVHDL {
	ret := C.QsciLexerVHDL_new()
	return newQsciLexerVHDL(ret)
}

// NewQsciLexerVHDL2 constructs a new QsciLexerVHDL object.
func NewQsciLexerVHDL2(parent *qt6.QObject) *QsciLexerVHDL {
	ret := C.QsciLexerVHDL_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerVHDL(ret)
}

func (this *QsciLexerVHDL) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerVHDL_MetaObject(this.h)))
}

func (this *QsciLexerVHDL) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerVHDL_Metacast(this.h, param1_Cstring))
}

func QsciLexerVHDL_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerVHDL) Language() string {
	_ret := C.QsciLexerVHDL_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerVHDL) Lexer() string {
	_ret := C.QsciLexerVHDL_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerVHDL) BraceStyle() int {
	return (int)(C.QsciLexerVHDL_BraceStyle(this.h))
}

func (this *QsciLexerVHDL) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerVHDL_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVHDL) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerVHDL_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerVHDL) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerVHDL_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVHDL) DefaultPaper(style int) *qt6.QColor {
	_ret := C.QsciLexerVHDL_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerVHDL) Keywords(set int) string {
	_ret := C.QsciLexerVHDL_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerVHDL) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerVHDL) RefreshProperties() {
	C.QsciLexerVHDL_RefreshProperties(this.h)
}

func (this *QsciLexerVHDL) FoldComments() bool {
	return (bool)(C.QsciLexerVHDL_FoldComments(this.h))
}

func (this *QsciLexerVHDL) FoldCompact() bool {
	return (bool)(C.QsciLexerVHDL_FoldCompact(this.h))
}

func (this *QsciLexerVHDL) FoldAtElse() bool {
	return (bool)(C.QsciLexerVHDL_FoldAtElse(this.h))
}

func (this *QsciLexerVHDL) FoldAtBegin() bool {
	return (bool)(C.QsciLexerVHDL_FoldAtBegin(this.h))
}

func (this *QsciLexerVHDL) FoldAtParenthesis() bool {
	return (bool)(C.QsciLexerVHDL_FoldAtParenthesis(this.h))
}

func (this *QsciLexerVHDL) SetFoldComments(fold bool) {
	C.QsciLexerVHDL_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldCompact(fold bool) {
	C.QsciLexerVHDL_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldAtElse(fold bool) {
	C.QsciLexerVHDL_SetFoldAtElse(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldAtBegin(fold bool) {
	C.QsciLexerVHDL_SetFoldAtBegin(this.h, (C.bool)(fold))
}

func (this *QsciLexerVHDL) SetFoldAtParenthesis(fold bool) {
	C.QsciLexerVHDL_SetFoldAtParenthesis(this.h, (C.bool)(fold))
}

func QsciLexerVHDL_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerVHDL_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerVHDL_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerVHDL) Delete() {
	C.QsciLexerVHDL_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerVHDL) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerVHDL) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

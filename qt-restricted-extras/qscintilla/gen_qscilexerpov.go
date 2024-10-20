package qscintilla

/*

#include "gen_qscilexerpov.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerPOV__ int

const (
	QsciLexerPOV__Default               QsciLexerPOV__ = 0
	QsciLexerPOV__Comment               QsciLexerPOV__ = 1
	QsciLexerPOV__CommentLine           QsciLexerPOV__ = 2
	QsciLexerPOV__Number                QsciLexerPOV__ = 3
	QsciLexerPOV__Operator              QsciLexerPOV__ = 4
	QsciLexerPOV__Identifier            QsciLexerPOV__ = 5
	QsciLexerPOV__String                QsciLexerPOV__ = 6
	QsciLexerPOV__UnclosedString        QsciLexerPOV__ = 7
	QsciLexerPOV__Directive             QsciLexerPOV__ = 8
	QsciLexerPOV__BadDirective          QsciLexerPOV__ = 9
	QsciLexerPOV__ObjectsCSGAppearance  QsciLexerPOV__ = 10
	QsciLexerPOV__TypesModifiersItems   QsciLexerPOV__ = 11
	QsciLexerPOV__PredefinedIdentifiers QsciLexerPOV__ = 12
	QsciLexerPOV__PredefinedFunctions   QsciLexerPOV__ = 13
	QsciLexerPOV__KeywordSet6           QsciLexerPOV__ = 14
	QsciLexerPOV__KeywordSet7           QsciLexerPOV__ = 15
	QsciLexerPOV__KeywordSet8           QsciLexerPOV__ = 16
)

type QsciLexerPOV struct {
	h *C.QsciLexerPOV
	*QsciLexer
}

func (this *QsciLexerPOV) cPointer() *C.QsciLexerPOV {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerPOV) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerPOV(h *C.QsciLexerPOV) *QsciLexerPOV {
	if h == nil {
		return nil
	}
	return &QsciLexerPOV{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerPOV(h unsafe.Pointer) *QsciLexerPOV {
	return newQsciLexerPOV((*C.QsciLexerPOV)(h))
}

// NewQsciLexerPOV constructs a new QsciLexerPOV object.
func NewQsciLexerPOV() *QsciLexerPOV {
	ret := C.QsciLexerPOV_new()
	return newQsciLexerPOV(ret)
}

// NewQsciLexerPOV2 constructs a new QsciLexerPOV object.
func NewQsciLexerPOV2(parent *qt.QObject) *QsciLexerPOV {
	ret := C.QsciLexerPOV_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerPOV(ret)
}

func (this *QsciLexerPOV) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerPOV_MetaObject(this.h)))
}

func (this *QsciLexerPOV) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerPOV_Metacast(this.h, param1_Cstring))
}

func QsciLexerPOV_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPOV_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPOV_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPOV_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPOV) Language() string {
	_ret := C.QsciLexerPOV_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPOV) Lexer() string {
	_ret := C.QsciLexerPOV_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPOV) BraceStyle() int {
	return (int)(C.QsciLexerPOV_BraceStyle(this.h))
}

func (this *QsciLexerPOV) WordCharacters() string {
	_ret := C.QsciLexerPOV_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerPOV) DefaultColor(style int) *qt.QColor {
	_ret := C.QsciLexerPOV_DefaultColor(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPOV) DefaultEolFill(style int) bool {
	return (bool)(C.QsciLexerPOV_DefaultEolFill(this.h, (C.int)(style)))
}

func (this *QsciLexerPOV) DefaultFont(style int) *qt.QFont {
	_ret := C.QsciLexerPOV_DefaultFont(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPOV) DefaultPaper(style int) *qt.QColor {
	_ret := C.QsciLexerPOV_DefaultPaper(this.h, (C.int)(style))
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerPOV) Keywords(set int) string {
	_ret := C.QsciLexerPOV_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerPOV) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerPOV_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerPOV) RefreshProperties() {
	C.QsciLexerPOV_RefreshProperties(this.h)
}

func (this *QsciLexerPOV) FoldComments() bool {
	return (bool)(C.QsciLexerPOV_FoldComments(this.h))
}

func (this *QsciLexerPOV) FoldCompact() bool {
	return (bool)(C.QsciLexerPOV_FoldCompact(this.h))
}

func (this *QsciLexerPOV) FoldDirectives() bool {
	return (bool)(C.QsciLexerPOV_FoldDirectives(this.h))
}

func (this *QsciLexerPOV) SetFoldComments(fold bool) {
	C.QsciLexerPOV_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerPOV) SetFoldCompact(fold bool) {
	C.QsciLexerPOV_SetFoldCompact(this.h, (C.bool)(fold))
}

func (this *QsciLexerPOV) SetFoldDirectives(fold bool) {
	C.QsciLexerPOV_SetFoldDirectives(this.h, (C.bool)(fold))
}

func QsciLexerPOV_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPOV_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPOV_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPOV_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPOV_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPOV_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerPOV_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerPOV_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerPOV) Delete() {
	C.QsciLexerPOV_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerPOV) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerPOV) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

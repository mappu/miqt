package qscintilla6

/*

#include "gen_qscilexeravs.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerAVS__ int

const (
	QsciLexerAVS__Default            QsciLexerAVS__ = 0
	QsciLexerAVS__BlockComment       QsciLexerAVS__ = 1
	QsciLexerAVS__NestedBlockComment QsciLexerAVS__ = 2
	QsciLexerAVS__LineComment        QsciLexerAVS__ = 3
	QsciLexerAVS__Number             QsciLexerAVS__ = 4
	QsciLexerAVS__Operator           QsciLexerAVS__ = 5
	QsciLexerAVS__Identifier         QsciLexerAVS__ = 6
	QsciLexerAVS__String             QsciLexerAVS__ = 7
	QsciLexerAVS__TripleString       QsciLexerAVS__ = 8
	QsciLexerAVS__Keyword            QsciLexerAVS__ = 9
	QsciLexerAVS__Filter             QsciLexerAVS__ = 10
	QsciLexerAVS__Plugin             QsciLexerAVS__ = 11
	QsciLexerAVS__Function           QsciLexerAVS__ = 12
	QsciLexerAVS__ClipProperty       QsciLexerAVS__ = 13
	QsciLexerAVS__KeywordSet6        QsciLexerAVS__ = 14
)

type QsciLexerAVS struct {
	h *C.QsciLexerAVS
	*QsciLexer
}

func (this *QsciLexerAVS) cPointer() *C.QsciLexerAVS {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerAVS) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerAVS(h *C.QsciLexerAVS) *QsciLexerAVS {
	if h == nil {
		return nil
	}
	return &QsciLexerAVS{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerAVS(h unsafe.Pointer) *QsciLexerAVS {
	return newQsciLexerAVS((*C.QsciLexerAVS)(h))
}

// NewQsciLexerAVS constructs a new QsciLexerAVS object.
func NewQsciLexerAVS() *QsciLexerAVS {
	ret := C.QsciLexerAVS_new()
	return newQsciLexerAVS(ret)
}

// NewQsciLexerAVS2 constructs a new QsciLexerAVS object.
func NewQsciLexerAVS2(parent *qt6.QObject) *QsciLexerAVS {
	ret := C.QsciLexerAVS_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerAVS(ret)
}

func (this *QsciLexerAVS) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerAVS_MetaObject(this.h)))
}

func (this *QsciLexerAVS) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerAVS_Metacast(this.h, param1_Cstring))
}

func QsciLexerAVS_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerAVS_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerAVS) Language() string {
	_ret := C.QsciLexerAVS_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerAVS) Lexer() string {
	_ret := C.QsciLexerAVS_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerAVS) BraceStyle() int {
	return (int)(C.QsciLexerAVS_BraceStyle(this.h))
}

func (this *QsciLexerAVS) WordCharacters() string {
	_ret := C.QsciLexerAVS_WordCharacters(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerAVS) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerAVS_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerAVS) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerAVS_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerAVS) Keywords(set int) string {
	_ret := C.QsciLexerAVS_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerAVS) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerAVS_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerAVS) RefreshProperties() {
	C.QsciLexerAVS_RefreshProperties(this.h)
}

func (this *QsciLexerAVS) FoldComments() bool {
	return (bool)(C.QsciLexerAVS_FoldComments(this.h))
}

func (this *QsciLexerAVS) FoldCompact() bool {
	return (bool)(C.QsciLexerAVS_FoldCompact(this.h))
}

func (this *QsciLexerAVS) SetFoldComments(fold bool) {
	C.QsciLexerAVS_SetFoldComments(this.h, (C.bool)(fold))
}

func (this *QsciLexerAVS) SetFoldCompact(fold bool) {
	C.QsciLexerAVS_SetFoldCompact(this.h, (C.bool)(fold))
}

func QsciLexerAVS_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerAVS_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerAVS_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerAVS_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerAVS) Delete() {
	C.QsciLexerAVS_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerAVS) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerAVS) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla6

/*

#include "gen_qscilexerspice.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerSpice__ int

const (
	QsciLexerSpice__Default    QsciLexerSpice__ = 0
	QsciLexerSpice__Identifier QsciLexerSpice__ = 1
	QsciLexerSpice__Command    QsciLexerSpice__ = 2
	QsciLexerSpice__Function   QsciLexerSpice__ = 3
	QsciLexerSpice__Parameter  QsciLexerSpice__ = 4
	QsciLexerSpice__Number     QsciLexerSpice__ = 5
	QsciLexerSpice__Delimiter  QsciLexerSpice__ = 6
	QsciLexerSpice__Value      QsciLexerSpice__ = 7
	QsciLexerSpice__Comment    QsciLexerSpice__ = 8
)

type QsciLexerSpice struct {
	h *C.QsciLexerSpice
	*QsciLexer
}

func (this *QsciLexerSpice) cPointer() *C.QsciLexerSpice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerSpice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerSpice(h *C.QsciLexerSpice) *QsciLexerSpice {
	if h == nil {
		return nil
	}
	return &QsciLexerSpice{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerSpice(h unsafe.Pointer) *QsciLexerSpice {
	return newQsciLexerSpice((*C.QsciLexerSpice)(h))
}

// NewQsciLexerSpice constructs a new QsciLexerSpice object.
func NewQsciLexerSpice() *QsciLexerSpice {
	ret := C.QsciLexerSpice_new()
	return newQsciLexerSpice(ret)
}

// NewQsciLexerSpice2 constructs a new QsciLexerSpice object.
func NewQsciLexerSpice2(parent *qt6.QObject) *QsciLexerSpice {
	ret := C.QsciLexerSpice_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerSpice(ret)
}

func (this *QsciLexerSpice) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerSpice_MetaObject(this.h)))
}

func (this *QsciLexerSpice) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerSpice_Metacast(this.h, param1_Cstring))
}

func QsciLexerSpice_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSpice_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerSpice) Language() string {
	_ret := C.QsciLexerSpice_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerSpice) Lexer() string {
	_ret := C.QsciLexerSpice_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerSpice) BraceStyle() int {
	return (int)(C.QsciLexerSpice_BraceStyle(this.h))
}

func (this *QsciLexerSpice) Keywords(set int) string {
	_ret := C.QsciLexerSpice_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerSpice) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerSpice_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSpice) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerSpice_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerSpice) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerSpice_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerSpice_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSpice_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerSpice_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerSpice_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerSpice) Delete() {
	C.QsciLexerSpice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerSpice) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerSpice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

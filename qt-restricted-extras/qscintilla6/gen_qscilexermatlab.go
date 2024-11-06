package qscintilla6

/*

#include "gen_qscilexermatlab.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerMatlab__ int

const (
	QsciLexerMatlab__Default            QsciLexerMatlab__ = 0
	QsciLexerMatlab__Comment            QsciLexerMatlab__ = 1
	QsciLexerMatlab__Command            QsciLexerMatlab__ = 2
	QsciLexerMatlab__Number             QsciLexerMatlab__ = 3
	QsciLexerMatlab__Keyword            QsciLexerMatlab__ = 4
	QsciLexerMatlab__SingleQuotedString QsciLexerMatlab__ = 5
	QsciLexerMatlab__Operator           QsciLexerMatlab__ = 6
	QsciLexerMatlab__Identifier         QsciLexerMatlab__ = 7
	QsciLexerMatlab__DoubleQuotedString QsciLexerMatlab__ = 8
)

type QsciLexerMatlab struct {
	h *C.QsciLexerMatlab
	*QsciLexer
}

func (this *QsciLexerMatlab) cPointer() *C.QsciLexerMatlab {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerMatlab) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerMatlab(h *C.QsciLexerMatlab) *QsciLexerMatlab {
	if h == nil {
		return nil
	}
	return &QsciLexerMatlab{h: h, QsciLexer: UnsafeNewQsciLexer(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerMatlab(h unsafe.Pointer) *QsciLexerMatlab {
	return newQsciLexerMatlab((*C.QsciLexerMatlab)(h))
}

// NewQsciLexerMatlab constructs a new QsciLexerMatlab object.
func NewQsciLexerMatlab() *QsciLexerMatlab {
	ret := C.QsciLexerMatlab_new()
	return newQsciLexerMatlab(ret)
}

// NewQsciLexerMatlab2 constructs a new QsciLexerMatlab object.
func NewQsciLexerMatlab2(parent *qt6.QObject) *QsciLexerMatlab {
	ret := C.QsciLexerMatlab_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerMatlab(ret)
}

func (this *QsciLexerMatlab) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerMatlab_MetaObject(this.h)))
}

func (this *QsciLexerMatlab) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerMatlab_Metacast(this.h, param1_Cstring))
}

func QsciLexerMatlab_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerMatlab) Language() string {
	_ret := C.QsciLexerMatlab_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMatlab) Lexer() string {
	_ret := C.QsciLexerMatlab_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerMatlab) DefaultColor(style int) *qt6.QColor {
	_ret := C.QsciLexerMatlab_DefaultColor(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMatlab) DefaultFont(style int) *qt6.QFont {
	_ret := C.QsciLexerMatlab_DefaultFont(this.h, (C.int)(style))
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QsciLexerMatlab) Keywords(set int) string {
	_ret := C.QsciLexerMatlab_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func (this *QsciLexerMatlab) Description(style int) string {
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Description(this.h, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMatlab_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerMatlab_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerMatlab_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerMatlab) Delete() {
	C.QsciLexerMatlab_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerMatlab) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerMatlab) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

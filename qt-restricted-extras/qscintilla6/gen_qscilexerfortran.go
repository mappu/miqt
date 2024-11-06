package qscintilla6

/*

#include "gen_qscilexerfortran.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerFortran struct {
	h *C.QsciLexerFortran
	*QsciLexerFortran77
}

func (this *QsciLexerFortran) cPointer() *C.QsciLexerFortran {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerFortran) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerFortran(h *C.QsciLexerFortran) *QsciLexerFortran {
	if h == nil {
		return nil
	}
	return &QsciLexerFortran{h: h, QsciLexerFortran77: UnsafeNewQsciLexerFortran77(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerFortran(h unsafe.Pointer) *QsciLexerFortran {
	return newQsciLexerFortran((*C.QsciLexerFortran)(h))
}

// NewQsciLexerFortran constructs a new QsciLexerFortran object.
func NewQsciLexerFortran() *QsciLexerFortran {
	ret := C.QsciLexerFortran_new()
	return newQsciLexerFortran(ret)
}

// NewQsciLexerFortran2 constructs a new QsciLexerFortran object.
func NewQsciLexerFortran2(parent *qt6.QObject) *QsciLexerFortran {
	ret := C.QsciLexerFortran_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerFortran(ret)
}

func (this *QsciLexerFortran) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerFortran_MetaObject(this.h)))
}

func (this *QsciLexerFortran) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerFortran_Metacast(this.h, param1_Cstring))
}

func QsciLexerFortran_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran) Language() string {
	_ret := C.QsciLexerFortran_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran) Lexer() string {
	_ret := C.QsciLexerFortran_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerFortran) Keywords(set int) string {
	_ret := C.QsciLexerFortran_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func QsciLexerFortran_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerFortran) Delete() {
	C.QsciLexerFortran_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerFortran) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerFortran) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

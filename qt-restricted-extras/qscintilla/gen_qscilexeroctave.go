package qscintilla

/*

#include "gen_qscilexeroctave.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerOctave struct {
	h *C.QsciLexerOctave
	*QsciLexerMatlab
}

func (this *QsciLexerOctave) cPointer() *C.QsciLexerOctave {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerOctave) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerOctave(h *C.QsciLexerOctave) *QsciLexerOctave {
	if h == nil {
		return nil
	}
	return &QsciLexerOctave{h: h, QsciLexerMatlab: UnsafeNewQsciLexerMatlab(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerOctave(h unsafe.Pointer) *QsciLexerOctave {
	return newQsciLexerOctave((*C.QsciLexerOctave)(h))
}

// NewQsciLexerOctave constructs a new QsciLexerOctave object.
func NewQsciLexerOctave() *QsciLexerOctave {
	ret := C.QsciLexerOctave_new()
	return newQsciLexerOctave(ret)
}

// NewQsciLexerOctave2 constructs a new QsciLexerOctave object.
func NewQsciLexerOctave2(parent *qt.QObject) *QsciLexerOctave {
	ret := C.QsciLexerOctave_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerOctave(ret)
}

func (this *QsciLexerOctave) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerOctave_MetaObject(this.h)))
}

func (this *QsciLexerOctave) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerOctave_Metacast(this.h, param1_Cstring))
}

func QsciLexerOctave_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerOctave_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerOctave_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerOctave_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerOctave) Language() string {
	_ret := C.QsciLexerOctave_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerOctave) Lexer() string {
	_ret := C.QsciLexerOctave_Lexer(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerOctave) Keywords(set int) string {
	_ret := C.QsciLexerOctave_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func QsciLexerOctave_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerOctave_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerOctave_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerOctave_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerOctave_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerOctave_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerOctave_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerOctave_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerOctave) Delete() {
	C.QsciLexerOctave_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerOctave) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerOctave) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
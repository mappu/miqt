package qscintilla

/*

#include "gen_qscilexerjava.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QsciLexerJava struct {
	h *C.QsciLexerJava
	*QsciLexerCPP
}

func (this *QsciLexerJava) cPointer() *C.QsciLexerJava {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciLexerJava) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQsciLexerJava(h *C.QsciLexerJava) *QsciLexerJava {
	if h == nil {
		return nil
	}
	return &QsciLexerJava{h: h, QsciLexerCPP: UnsafeNewQsciLexerCPP(unsafe.Pointer(h))}
}

func UnsafeNewQsciLexerJava(h unsafe.Pointer) *QsciLexerJava {
	return newQsciLexerJava((*C.QsciLexerJava)(h))
}

// NewQsciLexerJava constructs a new QsciLexerJava object.
func NewQsciLexerJava() *QsciLexerJava {
	ret := C.QsciLexerJava_new()
	return newQsciLexerJava(ret)
}

// NewQsciLexerJava2 constructs a new QsciLexerJava object.
func NewQsciLexerJava2(parent *qt.QObject) *QsciLexerJava {
	ret := C.QsciLexerJava_new2((*C.QObject)(parent.UnsafePointer()))
	return newQsciLexerJava(ret)
}

func (this *QsciLexerJava) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerJava_MetaObject(this.h)))
}

func (this *QsciLexerJava) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciLexerJava_Metacast(this.h, param1_Cstring))
}

func QsciLexerJava_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJava_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerJava) Language() string {
	_ret := C.QsciLexerJava_Language(this.h)
	return C.GoString(_ret)
}

func (this *QsciLexerJava) Keywords(set int) string {
	_ret := C.QsciLexerJava_Keywords(this.h, (C.int)(set))
	return C.GoString(_ret)
}

func QsciLexerJava_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJava_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJava_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerJava_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerJava_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciLexerJava) Delete() {
	C.QsciLexerJava_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerJava) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerJava) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscilexerfortran.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
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

// newQsciLexerFortran constructs the type using only CGO pointers.
func newQsciLexerFortran(h *C.QsciLexerFortran) *QsciLexerFortran {
	if h == nil {
		return nil
	}
	var outptr_QsciLexerFortran77 *C.QsciLexerFortran77 = nil
	C.QsciLexerFortran_virtbase(h, &outptr_QsciLexerFortran77)

	return &QsciLexerFortran{h: h,
		QsciLexerFortran77: newQsciLexerFortran77(outptr_QsciLexerFortran77)}
}

// UnsafeNewQsciLexerFortran constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerFortran(h unsafe.Pointer) *QsciLexerFortran {
	return newQsciLexerFortran((*C.QsciLexerFortran)(h))
}

// NewQsciLexerFortran constructs a new QsciLexerFortran object.
func NewQsciLexerFortran() *QsciLexerFortran {

	return newQsciLexerFortran(C.QsciLexerFortran_new())
}

// NewQsciLexerFortran2 constructs a new QsciLexerFortran object.
func NewQsciLexerFortran2(parent *qt.QObject) *QsciLexerFortran {

	return newQsciLexerFortran(C.QsciLexerFortran_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QsciLexerFortran) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerFortran_MetaObject(this.h)))
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

func QsciLexerFortran_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran_TrUtf8(s_Cstring)
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

func QsciLexerFortran_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciLexerFortran_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciLexerFortran_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciLexerFortran) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerFortran_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerFortran) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	ok := C.QsciLexerFortran_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciLexerFortran_SetFoldCompact
func miqt_exec_callback_QsciLexerFortran_SetFoldCompact(self *C.QsciLexerFortran, cb C.intptr_t, fold C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fold bool), fold bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fold)

	gofunc((&QsciLexerFortran{h: self}).callVirtualBase_SetFoldCompact, slotval1)

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

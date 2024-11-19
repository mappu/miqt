package qscintilla6

/*

#include "gen_qscilexerfortran.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciLexerFortran struct {
	h          *C.QsciLexerFortran
	isSubclass bool
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
func newQsciLexerFortran(h *C.QsciLexerFortran, h_QsciLexerFortran77 *C.QsciLexerFortran77, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerFortran {
	if h == nil {
		return nil
	}
	return &QsciLexerFortran{h: h,
		QsciLexerFortran77: newQsciLexerFortran77(h_QsciLexerFortran77, h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerFortran constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerFortran(h unsafe.Pointer, h_QsciLexerFortran77 unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerFortran {
	if h == nil {
		return nil
	}

	return &QsciLexerFortran{h: (*C.QsciLexerFortran)(h),
		QsciLexerFortran77: UnsafeNewQsciLexerFortran77(h_QsciLexerFortran77, h_QsciLexer, h_QObject)}
}

// NewQsciLexerFortran constructs a new QsciLexerFortran object.
func NewQsciLexerFortran() *QsciLexerFortran {
	var outptr_QsciLexerFortran *C.QsciLexerFortran = nil
	var outptr_QsciLexerFortran77 *C.QsciLexerFortran77 = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerFortran_new(&outptr_QsciLexerFortran, &outptr_QsciLexerFortran77, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerFortran(outptr_QsciLexerFortran, outptr_QsciLexerFortran77, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerFortran2 constructs a new QsciLexerFortran object.
func NewQsciLexerFortran2(parent *qt6.QObject) *QsciLexerFortran {
	var outptr_QsciLexerFortran *C.QsciLexerFortran = nil
	var outptr_QsciLexerFortran77 *C.QsciLexerFortran77 = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerFortran_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerFortran, &outptr_QsciLexerFortran77, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerFortran(outptr_QsciLexerFortran, outptr_QsciLexerFortran77, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
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

func (this *QsciLexerFortran) callVirtualBase_SetFoldCompact(fold bool) {

	C.QsciLexerFortran_virtualbase_SetFoldCompact(unsafe.Pointer(this.h), (C.bool)(fold))

}
func (this *QsciLexerFortran) OnSetFoldCompact(slot func(super func(fold bool), fold bool)) {
	C.QsciLexerFortran_override_virtual_SetFoldCompact(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QsciLexerFortran_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerFortran) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerFortran) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

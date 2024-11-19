package qscintilla6

/*

#include "gen_qscilexeroctave.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QsciLexerOctave struct {
	h          *C.QsciLexerOctave
	isSubclass bool
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

// newQsciLexerOctave constructs the type using only CGO pointers.
func newQsciLexerOctave(h *C.QsciLexerOctave, h_QsciLexerMatlab *C.QsciLexerMatlab, h_QsciLexer *C.QsciLexer, h_QObject *C.QObject) *QsciLexerOctave {
	if h == nil {
		return nil
	}
	return &QsciLexerOctave{h: h,
		QsciLexerMatlab: newQsciLexerMatlab(h_QsciLexerMatlab, h_QsciLexer, h_QObject)}
}

// UnsafeNewQsciLexerOctave constructs the type using only unsafe pointers.
func UnsafeNewQsciLexerOctave(h unsafe.Pointer, h_QsciLexerMatlab unsafe.Pointer, h_QsciLexer unsafe.Pointer, h_QObject unsafe.Pointer) *QsciLexerOctave {
	if h == nil {
		return nil
	}

	return &QsciLexerOctave{h: (*C.QsciLexerOctave)(h),
		QsciLexerMatlab: UnsafeNewQsciLexerMatlab(h_QsciLexerMatlab, h_QsciLexer, h_QObject)}
}

// NewQsciLexerOctave constructs a new QsciLexerOctave object.
func NewQsciLexerOctave() *QsciLexerOctave {
	var outptr_QsciLexerOctave *C.QsciLexerOctave = nil
	var outptr_QsciLexerMatlab *C.QsciLexerMatlab = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerOctave_new(&outptr_QsciLexerOctave, &outptr_QsciLexerMatlab, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerOctave(outptr_QsciLexerOctave, outptr_QsciLexerMatlab, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQsciLexerOctave2 constructs a new QsciLexerOctave object.
func NewQsciLexerOctave2(parent *qt6.QObject) *QsciLexerOctave {
	var outptr_QsciLexerOctave *C.QsciLexerOctave = nil
	var outptr_QsciLexerMatlab *C.QsciLexerMatlab = nil
	var outptr_QsciLexer *C.QsciLexer = nil
	var outptr_QObject *C.QObject = nil

	C.QsciLexerOctave_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QsciLexerOctave, &outptr_QsciLexerMatlab, &outptr_QsciLexer, &outptr_QObject)
	ret := newQsciLexerOctave(outptr_QsciLexerOctave, outptr_QsciLexerMatlab, outptr_QsciLexer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QsciLexerOctave) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciLexerOctave_MetaObject(this.h)))
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

// Delete this object from C++ memory.
func (this *QsciLexerOctave) Delete() {
	C.QsciLexerOctave_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciLexerOctave) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciLexerOctave) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

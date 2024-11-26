package script

/*

#include "gen_qscriptprogram.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScriptProgram struct {
	h          *C.QScriptProgram
	isSubclass bool
}

func (this *QScriptProgram) cPointer() *C.QScriptProgram {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptProgram) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptProgram constructs the type using only CGO pointers.
func newQScriptProgram(h *C.QScriptProgram) *QScriptProgram {
	if h == nil {
		return nil
	}
	return &QScriptProgram{h: h}
}

// UnsafeNewQScriptProgram constructs the type using only unsafe pointers.
func UnsafeNewQScriptProgram(h unsafe.Pointer) *QScriptProgram {
	if h == nil {
		return nil
	}

	return &QScriptProgram{h: (*C.QScriptProgram)(h)}
}

// NewQScriptProgram constructs a new QScriptProgram object.
func NewQScriptProgram() *QScriptProgram {
	var outptr_QScriptProgram *C.QScriptProgram = nil

	C.QScriptProgram_new(&outptr_QScriptProgram)
	ret := newQScriptProgram(outptr_QScriptProgram)
	ret.isSubclass = true
	return ret
}

// NewQScriptProgram2 constructs a new QScriptProgram object.
func NewQScriptProgram2(sourceCode string) *QScriptProgram {
	sourceCode_ms := C.struct_miqt_string{}
	sourceCode_ms.data = C.CString(sourceCode)
	sourceCode_ms.len = C.size_t(len(sourceCode))
	defer C.free(unsafe.Pointer(sourceCode_ms.data))
	var outptr_QScriptProgram *C.QScriptProgram = nil

	C.QScriptProgram_new2(sourceCode_ms, &outptr_QScriptProgram)
	ret := newQScriptProgram(outptr_QScriptProgram)
	ret.isSubclass = true
	return ret
}

// NewQScriptProgram3 constructs a new QScriptProgram object.
func NewQScriptProgram3(other *QScriptProgram) *QScriptProgram {
	var outptr_QScriptProgram *C.QScriptProgram = nil

	C.QScriptProgram_new3(other.cPointer(), &outptr_QScriptProgram)
	ret := newQScriptProgram(outptr_QScriptProgram)
	ret.isSubclass = true
	return ret
}

// NewQScriptProgram4 constructs a new QScriptProgram object.
func NewQScriptProgram4(sourceCode string, fileName string) *QScriptProgram {
	sourceCode_ms := C.struct_miqt_string{}
	sourceCode_ms.data = C.CString(sourceCode)
	sourceCode_ms.len = C.size_t(len(sourceCode))
	defer C.free(unsafe.Pointer(sourceCode_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QScriptProgram *C.QScriptProgram = nil

	C.QScriptProgram_new4(sourceCode_ms, fileName_ms, &outptr_QScriptProgram)
	ret := newQScriptProgram(outptr_QScriptProgram)
	ret.isSubclass = true
	return ret
}

// NewQScriptProgram5 constructs a new QScriptProgram object.
func NewQScriptProgram5(sourceCode string, fileName string, firstLineNumber int) *QScriptProgram {
	sourceCode_ms := C.struct_miqt_string{}
	sourceCode_ms.data = C.CString(sourceCode)
	sourceCode_ms.len = C.size_t(len(sourceCode))
	defer C.free(unsafe.Pointer(sourceCode_ms.data))
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QScriptProgram *C.QScriptProgram = nil

	C.QScriptProgram_new5(sourceCode_ms, fileName_ms, (C.int)(firstLineNumber), &outptr_QScriptProgram)
	ret := newQScriptProgram(outptr_QScriptProgram)
	ret.isSubclass = true
	return ret
}

func (this *QScriptProgram) OperatorAssign(other *QScriptProgram) {
	C.QScriptProgram_OperatorAssign(this.h, other.cPointer())
}

func (this *QScriptProgram) IsNull() bool {
	return (bool)(C.QScriptProgram_IsNull(this.h))
}

func (this *QScriptProgram) SourceCode() string {
	var _ms C.struct_miqt_string = C.QScriptProgram_SourceCode(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptProgram) FileName() string {
	var _ms C.struct_miqt_string = C.QScriptProgram_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptProgram) FirstLineNumber() int {
	return (int)(C.QScriptProgram_FirstLineNumber(this.h))
}

func (this *QScriptProgram) OperatorEqual(other *QScriptProgram) bool {
	return (bool)(C.QScriptProgram_OperatorEqual(this.h, other.cPointer()))
}

func (this *QScriptProgram) OperatorNotEqual(other *QScriptProgram) bool {
	return (bool)(C.QScriptProgram_OperatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QScriptProgram) Delete() {
	C.QScriptProgram_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptProgram) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptProgram) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

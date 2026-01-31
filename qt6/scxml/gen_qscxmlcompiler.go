package scxml

/*

#include "gen_qscxmlcompiler.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QScxmlCompiler struct {
	h *C.QScxmlCompiler
}

func (this *QScxmlCompiler) cPointer() *C.QScxmlCompiler {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlCompiler) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlCompiler constructs the type using only CGO pointers.
func newQScxmlCompiler(h *C.QScxmlCompiler) *QScxmlCompiler {
	if h == nil {
		return nil
	}

	return &QScxmlCompiler{h: h}
}

// UnsafeNewQScxmlCompiler constructs the type using only unsafe pointers.
func UnsafeNewQScxmlCompiler(h unsafe.Pointer) *QScxmlCompiler {
	return newQScxmlCompiler((*C.QScxmlCompiler)(h))
}

// NewQScxmlCompiler constructs a new QScxmlCompiler object.
func NewQScxmlCompiler(xmlReader *qt6.QXmlStreamReader) *QScxmlCompiler {

	return newQScxmlCompiler(C.QScxmlCompiler_new((*C.QXmlStreamReader)(xmlReader.UnsafePointer())))
}

func (this *QScxmlCompiler) FileName() string {
	var _ms C.struct_miqt_string = C.QScxmlCompiler_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScxmlCompiler) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QScxmlCompiler_setFileName(this.h, fileName_ms)
}

func (this *QScxmlCompiler) Loader() *QScxmlCompiler__Loader {
	return newQScxmlCompiler__Loader(C.QScxmlCompiler_loader(this.h))
}

func (this *QScxmlCompiler) SetLoader(newLoader *QScxmlCompiler__Loader) {
	C.QScxmlCompiler_setLoader(this.h, newLoader.cPointer())
}

func (this *QScxmlCompiler) Compile() *QScxmlStateMachine {
	return newQScxmlStateMachine(C.QScxmlCompiler_compile(this.h))
}

func (this *QScxmlCompiler) Errors() []QScxmlError {
	var _ma C.struct_miqt_array = C.QScxmlCompiler_errors(this.h)
	_ret := make([]QScxmlError, int(_ma.len))
	_outCast := (*[0xffff]*C.QScxmlError)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQScxmlError(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QScxmlCompiler) Delete() {
	C.QScxmlCompiler_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlCompiler) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlCompiler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScxmlCompiler__Loader struct {
	h *C.QScxmlCompiler__Loader
}

func (this *QScxmlCompiler__Loader) cPointer() *C.QScxmlCompiler__Loader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScxmlCompiler__Loader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScxmlCompiler__Loader constructs the type using only CGO pointers.
func newQScxmlCompiler__Loader(h *C.QScxmlCompiler__Loader) *QScxmlCompiler__Loader {
	if h == nil {
		return nil
	}

	return &QScxmlCompiler__Loader{h: h}
}

// UnsafeNewQScxmlCompiler__Loader constructs the type using only unsafe pointers.
func UnsafeNewQScxmlCompiler__Loader(h unsafe.Pointer) *QScxmlCompiler__Loader {
	return newQScxmlCompiler__Loader((*C.QScxmlCompiler__Loader)(h))
}

// NewQScxmlCompiler__Loader constructs a new QScxmlCompiler::Loader object.
func NewQScxmlCompiler__Loader() *QScxmlCompiler__Loader {

	return newQScxmlCompiler__Loader(C.QScxmlCompiler__Loader_new())
}

func (this *QScxmlCompiler__Loader) OperatorAssign(param1 *QScxmlCompiler__Loader) {
	C.QScxmlCompiler__Loader_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QScxmlCompiler__Loader) Delete() {
	C.QScxmlCompiler__Loader_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScxmlCompiler__Loader) GoGC() {
	runtime.SetFinalizer(this, func(this *QScxmlCompiler__Loader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qscintilla

/*

#include "gen_qscidocument.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QsciDocument struct {
	h          *C.QsciDocument
	isSubclass bool
}

func (this *QsciDocument) cPointer() *C.QsciDocument {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciDocument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciDocument constructs the type using only CGO pointers.
func newQsciDocument(h *C.QsciDocument) *QsciDocument {
	if h == nil {
		return nil
	}

	return &QsciDocument{h: h}
}

// UnsafeNewQsciDocument constructs the type using only unsafe pointers.
func UnsafeNewQsciDocument(h unsafe.Pointer) *QsciDocument {
	return newQsciDocument((*C.QsciDocument)(h))
}

// NewQsciDocument constructs a new QsciDocument object.
func NewQsciDocument() *QsciDocument {

	ret := newQsciDocument(C.QsciDocument_new())
	ret.isSubclass = true
	return ret
}

// NewQsciDocument2 constructs a new QsciDocument object.
func NewQsciDocument2(param1 *QsciDocument) *QsciDocument {

	ret := newQsciDocument(C.QsciDocument_new2(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QsciDocument) OperatorAssign(param1 *QsciDocument) {
	C.QsciDocument_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QsciDocument) Delete() {
	C.QsciDocument_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciDocument) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciDocument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

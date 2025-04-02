package qml

/*

#include "gen_qqmlabstracturlinterceptor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlAbstractUrlInterceptor__DataType int

const (
	QQmlAbstractUrlInterceptor__QmlFile        QQmlAbstractUrlInterceptor__DataType = 0
	QQmlAbstractUrlInterceptor__JavaScriptFile QQmlAbstractUrlInterceptor__DataType = 1
	QQmlAbstractUrlInterceptor__QmldirFile     QQmlAbstractUrlInterceptor__DataType = 2
	QQmlAbstractUrlInterceptor__UrlString      QQmlAbstractUrlInterceptor__DataType = 4096
)

type QQmlAbstractUrlInterceptor struct {
	h *C.QQmlAbstractUrlInterceptor
}

func (this *QQmlAbstractUrlInterceptor) cPointer() *C.QQmlAbstractUrlInterceptor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlAbstractUrlInterceptor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlAbstractUrlInterceptor constructs the type using only CGO pointers.
func newQQmlAbstractUrlInterceptor(h *C.QQmlAbstractUrlInterceptor) *QQmlAbstractUrlInterceptor {
	if h == nil {
		return nil
	}

	return &QQmlAbstractUrlInterceptor{h: h}
}

// UnsafeNewQQmlAbstractUrlInterceptor constructs the type using only unsafe pointers.
func UnsafeNewQQmlAbstractUrlInterceptor(h unsafe.Pointer) *QQmlAbstractUrlInterceptor {
	return newQQmlAbstractUrlInterceptor((*C.QQmlAbstractUrlInterceptor)(h))
}

// NewQQmlAbstractUrlInterceptor constructs a new QQmlAbstractUrlInterceptor object.
func NewQQmlAbstractUrlInterceptor() *QQmlAbstractUrlInterceptor {

	return newQQmlAbstractUrlInterceptor(C.QQmlAbstractUrlInterceptor_new())
}

func (this *QQmlAbstractUrlInterceptor) Intercept(path *qt6.QUrl, typeVal QQmlAbstractUrlInterceptor__DataType) *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QQmlAbstractUrlInterceptor_intercept(this.h, (*C.QUrl)(path.UnsafePointer()), (C.int)(typeVal))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QQmlAbstractUrlInterceptor) OperatorAssign(param1 *QQmlAbstractUrlInterceptor) {
	C.QQmlAbstractUrlInterceptor_operatorAssign(this.h, param1.cPointer())
}
func (this *QQmlAbstractUrlInterceptor) OnIntercept(slot func(path *qt6.QUrl, typeVal QQmlAbstractUrlInterceptor__DataType) *qt6.QUrl) {
	ok := C.QQmlAbstractUrlInterceptor_override_virtual_intercept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlAbstractUrlInterceptor_intercept
func miqt_exec_callback_QQmlAbstractUrlInterceptor_intercept(self *C.QQmlAbstractUrlInterceptor, cb C.intptr_t, path *C.QUrl, typeVal C.int) *C.QUrl {
	gofunc, ok := cgo.Handle(cb).Value().(func(path *qt6.QUrl, typeVal QQmlAbstractUrlInterceptor__DataType) *qt6.QUrl)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(path))

	slotval2 := (QQmlAbstractUrlInterceptor__DataType)(typeVal)

	virtualReturn := gofunc(slotval1, slotval2)

	return (*C.QUrl)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QQmlAbstractUrlInterceptor) Delete() {
	C.QQmlAbstractUrlInterceptor_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlAbstractUrlInterceptor) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlAbstractUrlInterceptor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

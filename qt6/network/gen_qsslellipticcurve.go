package network

/*

#include "gen_qsslellipticcurve.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSslEllipticCurve struct {
	h  *C.QSslEllipticCurve
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSslEllipticCurve) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSslEllipticCurve) cPointer() *C.QSslEllipticCurve {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslEllipticCurve) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslEllipticCurve constructs the type using only CGO pointers.
func newQSslEllipticCurve(h *C.QSslEllipticCurve) *QSslEllipticCurve {
	if h == nil {
		return nil
	}

	return &QSslEllipticCurve{h: h}
}

// UnsafeNewQSslEllipticCurve constructs the type using only unsafe pointers.
func UnsafeNewQSslEllipticCurve(h unsafe.Pointer) *QSslEllipticCurve {
	return newQSslEllipticCurve((*C.QSslEllipticCurve)(h))
}

// NewQSslEllipticCurve constructs a new QSslEllipticCurve object.
func NewQSslEllipticCurve() *QSslEllipticCurve {

	return newQSslEllipticCurve(C.QSslEllipticCurve_new())
}

// NewQSslEllipticCurve2 constructs a new QSslEllipticCurve object.
func NewQSslEllipticCurve2(param1 *QSslEllipticCurve) *QSslEllipticCurve {
	defer runtime.KeepAlive(param1)

	return newQSslEllipticCurve(C.QSslEllipticCurve_new2(param1.cPointer()))
}

func QSslEllipticCurve_FromShortName(name string) *QSslEllipticCurve {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQSslEllipticCurve(C.QSslEllipticCurve_fromShortName(name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSslEllipticCurve_FromLongName(name string) *QSslEllipticCurve {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := newQSslEllipticCurve(C.QSslEllipticCurve_fromLongName(name_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslEllipticCurve) ShortName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslEllipticCurve_shortName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslEllipticCurve) LongName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslEllipticCurve_longName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslEllipticCurve) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSslEllipticCurve_isValid(this.h))
}

func (this *QSslEllipticCurve) IsTlsNamedCurve() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSslEllipticCurve_isTlsNamedCurve(this.h))
}

// Delete this object from C++ memory.
func (this *QSslEllipticCurve) Delete() {
	C.QSslEllipticCurve_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSslEllipticCurve) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSslEllipticCurve_delete((*C.QSslEllipticCurve)(gc[0]))
	})
	this.miqtSetGC(gc)
}

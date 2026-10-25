package network

/*

#include "gen_qsslcertificateextension.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QSslCertificateExtension struct {
	h  *C.QSslCertificateExtension
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSslCertificateExtension) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSslCertificateExtension) cPointer() *C.QSslCertificateExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslCertificateExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslCertificateExtension constructs the type using only CGO pointers.
func newQSslCertificateExtension(h *C.QSslCertificateExtension) *QSslCertificateExtension {
	if h == nil {
		return nil
	}

	return &QSslCertificateExtension{h: h}
}

// UnsafeNewQSslCertificateExtension constructs the type using only unsafe pointers.
func UnsafeNewQSslCertificateExtension(h unsafe.Pointer) *QSslCertificateExtension {
	return newQSslCertificateExtension((*C.QSslCertificateExtension)(h))
}

// NewQSslCertificateExtension constructs a new QSslCertificateExtension object.
func NewQSslCertificateExtension() *QSslCertificateExtension {

	return newQSslCertificateExtension(C.QSslCertificateExtension_new())
}

// NewQSslCertificateExtension2 constructs a new QSslCertificateExtension object.
func NewQSslCertificateExtension2(other *QSslCertificateExtension) *QSslCertificateExtension {
	defer runtime.KeepAlive(other)

	return newQSslCertificateExtension(C.QSslCertificateExtension_new2(other.cPointer()))
}

func (this *QSslCertificateExtension) OperatorAssign(other *QSslCertificateExtension) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSslCertificateExtension_operatorAssign(this.h, other.cPointer())
}

func (this *QSslCertificateExtension) Swap(other *QSslCertificateExtension) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSslCertificateExtension_swap(this.h, other.cPointer())
}

func (this *QSslCertificateExtension) Oid() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslCertificateExtension_oid(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCertificateExtension) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslCertificateExtension_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSslCertificateExtension) Value() *qt.QVariant {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSslCertificateExtension_value(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslCertificateExtension) IsCritical() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSslCertificateExtension_isCritical(this.h))
}

func (this *QSslCertificateExtension) IsSupported() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSslCertificateExtension_isSupported(this.h))
}

// Delete this object from C++ memory.
func (this *QSslCertificateExtension) Delete() {
	C.QSslCertificateExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSslCertificateExtension) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSslCertificateExtension_delete((*C.QSslCertificateExtension)(gc[0]))
	})
	this.miqtSetGC(gc)
}

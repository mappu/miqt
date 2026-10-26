package network

/*

#include "gen_qssldiffiehellmanparameters.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QSslDiffieHellmanParameters__Error int

const (
	QSslDiffieHellmanParameters__NoError               QSslDiffieHellmanParameters__Error = 0
	QSslDiffieHellmanParameters__InvalidInputDataError QSslDiffieHellmanParameters__Error = 1
	QSslDiffieHellmanParameters__UnsafeParametersError QSslDiffieHellmanParameters__Error = 2
)

type QSslDiffieHellmanParameters struct {
	h  *C.QSslDiffieHellmanParameters
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSslDiffieHellmanParameters) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSslDiffieHellmanParameters) cPointer() *C.QSslDiffieHellmanParameters {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslDiffieHellmanParameters) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslDiffieHellmanParameters constructs the type using only CGO pointers.
func newQSslDiffieHellmanParameters(h *C.QSslDiffieHellmanParameters) *QSslDiffieHellmanParameters {
	if h == nil {
		return nil
	}

	return &QSslDiffieHellmanParameters{h: h}
}

// UnsafeNewQSslDiffieHellmanParameters constructs the type using only unsafe pointers.
func UnsafeNewQSslDiffieHellmanParameters(h unsafe.Pointer) *QSslDiffieHellmanParameters {
	return newQSslDiffieHellmanParameters((*C.QSslDiffieHellmanParameters)(h))
}

// NewQSslDiffieHellmanParameters constructs a new QSslDiffieHellmanParameters object.
func NewQSslDiffieHellmanParameters() *QSslDiffieHellmanParameters {

	return newQSslDiffieHellmanParameters(C.QSslDiffieHellmanParameters_new())
}

// NewQSslDiffieHellmanParameters2 constructs a new QSslDiffieHellmanParameters object.
func NewQSslDiffieHellmanParameters2(other *QSslDiffieHellmanParameters) *QSslDiffieHellmanParameters {
	defer runtime.KeepAlive(other)

	return newQSslDiffieHellmanParameters(C.QSslDiffieHellmanParameters_new2(other.cPointer()))
}

func QSslDiffieHellmanParameters_DefaultParameters() *QSslDiffieHellmanParameters {
	_goptr := newQSslDiffieHellmanParameters(C.QSslDiffieHellmanParameters_defaultParameters())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslDiffieHellmanParameters) OperatorAssign(other *QSslDiffieHellmanParameters) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSslDiffieHellmanParameters_operatorAssign(this.h, other.cPointer())
}

func (this *QSslDiffieHellmanParameters) Swap(other *QSslDiffieHellmanParameters) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSslDiffieHellmanParameters_swap(this.h, other.cPointer())
}

func QSslDiffieHellmanParameters_FromEncoded(encoded []byte) *QSslDiffieHellmanParameters {
	encoded_alias := C.struct_miqt_string{}
	if len(encoded) > 0 {
		encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	} else {
		encoded_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	encoded_alias.len = C.size_t(len(encoded))
	_goptr := newQSslDiffieHellmanParameters(C.QSslDiffieHellmanParameters_fromEncoded(encoded_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSslDiffieHellmanParameters_FromEncodedWithDevice(device *qt.QIODevice) *QSslDiffieHellmanParameters {
	defer runtime.KeepAlive(device)
	_goptr := newQSslDiffieHellmanParameters(C.QSslDiffieHellmanParameters_fromEncodedWithDevice((*C.QIODevice)(device.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslDiffieHellmanParameters) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSslDiffieHellmanParameters_isEmpty(this.h))
}

func (this *QSslDiffieHellmanParameters) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSslDiffieHellmanParameters_isValid(this.h))
}

func (this *QSslDiffieHellmanParameters) Error() QSslDiffieHellmanParameters__Error {
	defer runtime.KeepAlive(this)
	return (QSslDiffieHellmanParameters__Error)(C.QSslDiffieHellmanParameters_error(this.h))
}

func (this *QSslDiffieHellmanParameters) ErrorString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSslDiffieHellmanParameters_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslDiffieHellmanParameters_FromEncoded2(encoded []byte, format QSsl__EncodingFormat) *QSslDiffieHellmanParameters {
	encoded_alias := C.struct_miqt_string{}
	if len(encoded) > 0 {
		encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	} else {
		encoded_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	encoded_alias.len = C.size_t(len(encoded))
	_goptr := newQSslDiffieHellmanParameters(C.QSslDiffieHellmanParameters_fromEncoded2(encoded_alias, (C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSslDiffieHellmanParameters_FromEncoded3(device *qt.QIODevice, format QSsl__EncodingFormat) *QSslDiffieHellmanParameters {
	defer runtime.KeepAlive(device)
	_goptr := newQSslDiffieHellmanParameters(C.QSslDiffieHellmanParameters_fromEncoded3((*C.QIODevice)(device.UnsafePointer()), (C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSslDiffieHellmanParameters) Delete() {
	C.QSslDiffieHellmanParameters_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSslDiffieHellmanParameters) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSslDiffieHellmanParameters_delete((*C.QSslDiffieHellmanParameters)(gc[0]))
	})
	this.miqtSetGC(gc)
}

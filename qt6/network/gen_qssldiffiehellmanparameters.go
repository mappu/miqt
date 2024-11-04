package network

/*

#include "gen_qssldiffiehellmanparameters.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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
	h *C.QSslDiffieHellmanParameters
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

func newQSslDiffieHellmanParameters(h *C.QSslDiffieHellmanParameters) *QSslDiffieHellmanParameters {
	if h == nil {
		return nil
	}
	return &QSslDiffieHellmanParameters{h: h}
}

func UnsafeNewQSslDiffieHellmanParameters(h unsafe.Pointer) *QSslDiffieHellmanParameters {
	return newQSslDiffieHellmanParameters((*C.QSslDiffieHellmanParameters)(h))
}

// NewQSslDiffieHellmanParameters constructs a new QSslDiffieHellmanParameters object.
func NewQSslDiffieHellmanParameters() *QSslDiffieHellmanParameters {
	ret := C.QSslDiffieHellmanParameters_new()
	return newQSslDiffieHellmanParameters(ret)
}

// NewQSslDiffieHellmanParameters2 constructs a new QSslDiffieHellmanParameters object.
func NewQSslDiffieHellmanParameters2(other *QSslDiffieHellmanParameters) *QSslDiffieHellmanParameters {
	ret := C.QSslDiffieHellmanParameters_new2(other.cPointer())
	return newQSslDiffieHellmanParameters(ret)
}

func QSslDiffieHellmanParameters_DefaultParameters() *QSslDiffieHellmanParameters {
	_ret := C.QSslDiffieHellmanParameters_DefaultParameters()
	_goptr := newQSslDiffieHellmanParameters(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslDiffieHellmanParameters) OperatorAssign(other *QSslDiffieHellmanParameters) {
	C.QSslDiffieHellmanParameters_OperatorAssign(this.h, other.cPointer())
}

func (this *QSslDiffieHellmanParameters) Swap(other *QSslDiffieHellmanParameters) {
	C.QSslDiffieHellmanParameters_Swap(this.h, other.cPointer())
}

func QSslDiffieHellmanParameters_FromEncoded(encoded []byte) *QSslDiffieHellmanParameters {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))
	_ret := C.QSslDiffieHellmanParameters_FromEncoded(encoded_alias)
	_goptr := newQSslDiffieHellmanParameters(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSslDiffieHellmanParameters_FromEncodedWithDevice(device *qt6.QIODevice) *QSslDiffieHellmanParameters {
	_ret := C.QSslDiffieHellmanParameters_FromEncodedWithDevice((*C.QIODevice)(device.UnsafePointer()))
	_goptr := newQSslDiffieHellmanParameters(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSslDiffieHellmanParameters) IsEmpty() bool {
	return (bool)(C.QSslDiffieHellmanParameters_IsEmpty(this.h))
}

func (this *QSslDiffieHellmanParameters) IsValid() bool {
	return (bool)(C.QSslDiffieHellmanParameters_IsValid(this.h))
}

func (this *QSslDiffieHellmanParameters) Error() QSslDiffieHellmanParameters__Error {
	return (QSslDiffieHellmanParameters__Error)(C.QSslDiffieHellmanParameters_Error(this.h))
}

func (this *QSslDiffieHellmanParameters) ErrorString() string {
	var _ms C.struct_miqt_string = C.QSslDiffieHellmanParameters_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSslDiffieHellmanParameters_FromEncoded2(encoded []byte, format QSsl__EncodingFormat) *QSslDiffieHellmanParameters {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))
	_ret := C.QSslDiffieHellmanParameters_FromEncoded2(encoded_alias, (C.int)(format))
	_goptr := newQSslDiffieHellmanParameters(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSslDiffieHellmanParameters_FromEncoded22(device *qt6.QIODevice, format QSsl__EncodingFormat) *QSslDiffieHellmanParameters {
	_ret := C.QSslDiffieHellmanParameters_FromEncoded22((*C.QIODevice)(device.UnsafePointer()), (C.int)(format))
	_goptr := newQSslDiffieHellmanParameters(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSslDiffieHellmanParameters) Delete() {
	C.QSslDiffieHellmanParameters_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslDiffieHellmanParameters) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslDiffieHellmanParameters) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

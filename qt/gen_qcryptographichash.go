package qt

/*

#include "gen_qcryptographichash.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCryptographicHash__Algorithm int

const (
	QCryptographicHash__Algorithm__Md4          QCryptographicHash__Algorithm = 0
	QCryptographicHash__Algorithm__Md5          QCryptographicHash__Algorithm = 1
	QCryptographicHash__Algorithm__Sha1         QCryptographicHash__Algorithm = 2
	QCryptographicHash__Algorithm__Sha224       QCryptographicHash__Algorithm = 3
	QCryptographicHash__Algorithm__Sha256       QCryptographicHash__Algorithm = 4
	QCryptographicHash__Algorithm__Sha384       QCryptographicHash__Algorithm = 5
	QCryptographicHash__Algorithm__Sha512       QCryptographicHash__Algorithm = 6
	QCryptographicHash__Algorithm__Keccak_224   QCryptographicHash__Algorithm = 7
	QCryptographicHash__Algorithm__Keccak_256   QCryptographicHash__Algorithm = 8
	QCryptographicHash__Algorithm__Keccak_384   QCryptographicHash__Algorithm = 9
	QCryptographicHash__Algorithm__Keccak_512   QCryptographicHash__Algorithm = 10
	QCryptographicHash__Algorithm__RealSha3_224 QCryptographicHash__Algorithm = 11
	QCryptographicHash__Algorithm__RealSha3_256 QCryptographicHash__Algorithm = 12
	QCryptographicHash__Algorithm__RealSha3_384 QCryptographicHash__Algorithm = 13
	QCryptographicHash__Algorithm__RealSha3_512 QCryptographicHash__Algorithm = 14
	QCryptographicHash__Algorithm__Sha3_224     QCryptographicHash__Algorithm = 11
	QCryptographicHash__Algorithm__Sha3_256     QCryptographicHash__Algorithm = 12
	QCryptographicHash__Algorithm__Sha3_384     QCryptographicHash__Algorithm = 13
	QCryptographicHash__Algorithm__Sha3_512     QCryptographicHash__Algorithm = 14
)

type QCryptographicHash struct {
	h *C.QCryptographicHash
}

func (this *QCryptographicHash) cPointer() *C.QCryptographicHash {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCryptographicHash(h *C.QCryptographicHash) *QCryptographicHash {
	if h == nil {
		return nil
	}
	return &QCryptographicHash{h: h}
}

func newQCryptographicHash_U(h unsafe.Pointer) *QCryptographicHash {
	return newQCryptographicHash((*C.QCryptographicHash)(h))
}

// NewQCryptographicHash constructs a new QCryptographicHash object.
func NewQCryptographicHash(method QCryptographicHash__Algorithm) *QCryptographicHash {
	ret := C.QCryptographicHash_new((C.uintptr_t)(method))
	return newQCryptographicHash(ret)
}

func (this *QCryptographicHash) Reset() {
	C.QCryptographicHash_Reset(this.h)
}

func (this *QCryptographicHash) AddData(data string, length int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCryptographicHash_AddData(this.h, data_Cstring, (C.int)(length))
}

func (this *QCryptographicHash) AddDataWithData(data *QByteArray) {
	C.QCryptographicHash_AddDataWithData(this.h, data.cPointer())
}

func (this *QCryptographicHash) AddDataWithDevice(device *QIODevice) bool {
	return (bool)(C.QCryptographicHash_AddDataWithDevice(this.h, device.cPointer()))
}

func (this *QCryptographicHash) Result() *QByteArray {
	_ret := C.QCryptographicHash_Result(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCryptographicHash_Hash(data *QByteArray, method QCryptographicHash__Algorithm) *QByteArray {
	_ret := C.QCryptographicHash_Hash(data.cPointer(), (C.uintptr_t)(method))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCryptographicHash_HashLength(method QCryptographicHash__Algorithm) int {
	return (int)(C.QCryptographicHash_HashLength((C.uintptr_t)(method)))
}

// Delete this object from C++ memory.
func (this *QCryptographicHash) Delete() {
	C.QCryptographicHash_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCryptographicHash) GoGC() {
	runtime.SetFinalizer(this, func(this *QCryptographicHash) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

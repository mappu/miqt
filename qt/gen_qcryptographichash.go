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
	QCryptographicHash__Md4          QCryptographicHash__Algorithm = 0
	QCryptographicHash__Md5          QCryptographicHash__Algorithm = 1
	QCryptographicHash__Sha1         QCryptographicHash__Algorithm = 2
	QCryptographicHash__Sha224       QCryptographicHash__Algorithm = 3
	QCryptographicHash__Sha256       QCryptographicHash__Algorithm = 4
	QCryptographicHash__Sha384       QCryptographicHash__Algorithm = 5
	QCryptographicHash__Sha512       QCryptographicHash__Algorithm = 6
	QCryptographicHash__Keccak_224   QCryptographicHash__Algorithm = 7
	QCryptographicHash__Keccak_256   QCryptographicHash__Algorithm = 8
	QCryptographicHash__Keccak_384   QCryptographicHash__Algorithm = 9
	QCryptographicHash__Keccak_512   QCryptographicHash__Algorithm = 10
	QCryptographicHash__RealSha3_224 QCryptographicHash__Algorithm = 11
	QCryptographicHash__RealSha3_256 QCryptographicHash__Algorithm = 12
	QCryptographicHash__RealSha3_384 QCryptographicHash__Algorithm = 13
	QCryptographicHash__RealSha3_512 QCryptographicHash__Algorithm = 14
	QCryptographicHash__Sha3_224     QCryptographicHash__Algorithm = 11
	QCryptographicHash__Sha3_256     QCryptographicHash__Algorithm = 12
	QCryptographicHash__Sha3_384     QCryptographicHash__Algorithm = 13
	QCryptographicHash__Sha3_512     QCryptographicHash__Algorithm = 14
)

type QCryptographicHash struct {
	h          *C.QCryptographicHash
	isSubclass bool
}

func (this *QCryptographicHash) cPointer() *C.QCryptographicHash {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCryptographicHash) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCryptographicHash constructs the type using only CGO pointers.
func newQCryptographicHash(h *C.QCryptographicHash) *QCryptographicHash {
	if h == nil {
		return nil
	}

	return &QCryptographicHash{h: h}
}

// UnsafeNewQCryptographicHash constructs the type using only unsafe pointers.
func UnsafeNewQCryptographicHash(h unsafe.Pointer) *QCryptographicHash {
	return newQCryptographicHash((*C.QCryptographicHash)(h))
}

// NewQCryptographicHash constructs a new QCryptographicHash object.
func NewQCryptographicHash(method QCryptographicHash__Algorithm) *QCryptographicHash {

	ret := newQCryptographicHash(C.QCryptographicHash_new((C.int)(method)))
	ret.isSubclass = true
	return ret
}

func (this *QCryptographicHash) Reset() {
	C.QCryptographicHash_Reset(this.h)
}

func (this *QCryptographicHash) AddData(data string, length int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCryptographicHash_AddData(this.h, data_Cstring, (C.int)(length))
}

func (this *QCryptographicHash) AddDataWithData(data []byte) {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QCryptographicHash_AddDataWithData(this.h, data_alias)
}

func (this *QCryptographicHash) AddDataWithDevice(device *QIODevice) bool {
	return (bool)(C.QCryptographicHash_AddDataWithDevice(this.h, device.cPointer()))
}

func (this *QCryptographicHash) Result() []byte {
	var _bytearray C.struct_miqt_string = C.QCryptographicHash_Result(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QCryptographicHash_Hash(data []byte, method QCryptographicHash__Algorithm) []byte {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	var _bytearray C.struct_miqt_string = C.QCryptographicHash_Hash(data_alias, (C.int)(method))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QCryptographicHash_HashLength(method QCryptographicHash__Algorithm) int {
	return (int)(C.QCryptographicHash_HashLength((C.int)(method)))
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

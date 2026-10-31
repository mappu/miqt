package qt6

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
	QCryptographicHash__Blake2b_160  QCryptographicHash__Algorithm = 15
	QCryptographicHash__Blake2b_256  QCryptographicHash__Algorithm = 16
	QCryptographicHash__Blake2b_384  QCryptographicHash__Algorithm = 17
	QCryptographicHash__Blake2b_512  QCryptographicHash__Algorithm = 18
	QCryptographicHash__Blake2s_128  QCryptographicHash__Algorithm = 19
	QCryptographicHash__Blake2s_160  QCryptographicHash__Algorithm = 20
	QCryptographicHash__Blake2s_224  QCryptographicHash__Algorithm = 21
	QCryptographicHash__Blake2s_256  QCryptographicHash__Algorithm = 22
)

type QCryptographicHash struct {
	h  *C.QCryptographicHash
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCryptographicHash) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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

	return newQCryptographicHash(C.QCryptographicHash_new((C.int)(method)))
}

func (this *QCryptographicHash) Reset() {
	defer runtime.KeepAlive(this)
	C.QCryptographicHash_reset(this.h)
}

func (this *QCryptographicHash) AddData(data string, length int64) {
	defer runtime.KeepAlive(this)
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCryptographicHash_addData(this.h, data_Cstring, (C.ptrdiff_t)(length))
}

func (this *QCryptographicHash) AddDataWithData(data QByteArrayView) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	C.QCryptographicHash_addDataWithData(this.h, data.cPointer())
}

func (this *QCryptographicHash) AddDataWithDevice(device *QIODevice) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QCryptographicHash_addDataWithDevice(this.h, device.cPointer()))
}

func (this *QCryptographicHash) Result() []byte {
	defer runtime.KeepAlive(this)
	var _bytearray C.struct_miqt_string = C.QCryptographicHash_result(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QCryptographicHash) ResultView() *QByteArrayView {
	defer runtime.KeepAlive(this)
	_goptr := newQByteArrayView(C.QCryptographicHash_resultView(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCryptographicHash_Hash(data QByteArrayView, method QCryptographicHash__Algorithm) []byte {
	defer runtime.KeepAlive(data)
	var _bytearray C.struct_miqt_string = C.QCryptographicHash_hash(data.cPointer(), (C.int)(method))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QCryptographicHash_HashLength(method QCryptographicHash__Algorithm) int {
	return (int)(C.QCryptographicHash_hashLength((C.int)(method)))
}

// Delete this object from C++ memory.
func (this *QCryptographicHash) Delete() {
	C.QCryptographicHash_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCryptographicHash) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCryptographicHash_delete((*C.QCryptographicHash)(gc[0]))
	})
	this.miqtSetGC(gc)
}

package network

/*

#include "gen_qsslkey.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QSslKey struct {
	h          *C.QSslKey
	isSubclass bool
}

func (this *QSslKey) cPointer() *C.QSslKey {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslKey) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSslKey constructs the type using only CGO pointers.
func newQSslKey(h *C.QSslKey) *QSslKey {
	if h == nil {
		return nil
	}

	return &QSslKey{h: h}
}

// UnsafeNewQSslKey constructs the type using only unsafe pointers.
func UnsafeNewQSslKey(h unsafe.Pointer) *QSslKey {
	return newQSslKey((*C.QSslKey)(h))
}

// NewQSslKey constructs a new QSslKey object.
func NewQSslKey() *QSslKey {

	ret := newQSslKey(C.QSslKey_new())
	ret.isSubclass = true
	return ret
}

// NewQSslKey2 constructs a new QSslKey object.
func NewQSslKey2(encoded []byte, algorithm QSsl__KeyAlgorithm) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))

	ret := newQSslKey(C.QSslKey_new2(encoded_alias, (C.int)(algorithm)))
	ret.isSubclass = true
	return ret
}

// NewQSslKey3 constructs a new QSslKey object.
func NewQSslKey3(device *qt.QIODevice, algorithm QSsl__KeyAlgorithm) *QSslKey {

	ret := newQSslKey(C.QSslKey_new3((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm)))
	ret.isSubclass = true
	return ret
}

// NewQSslKey4 constructs a new QSslKey object.
func NewQSslKey4(handle unsafe.Pointer) *QSslKey {

	ret := newQSslKey(C.QSslKey_new4(handle))
	ret.isSubclass = true
	return ret
}

// NewQSslKey5 constructs a new QSslKey object.
func NewQSslKey5(other *QSslKey) *QSslKey {

	ret := newQSslKey(C.QSslKey_new5(other.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQSslKey6 constructs a new QSslKey object.
func NewQSslKey6(encoded []byte, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))

	ret := newQSslKey(C.QSslKey_new6(encoded_alias, (C.int)(algorithm), (C.int)(format)))
	ret.isSubclass = true
	return ret
}

// NewQSslKey7 constructs a new QSslKey object.
func NewQSslKey7(encoded []byte, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))

	ret := newQSslKey(C.QSslKey_new7(encoded_alias, (C.int)(algorithm), (C.int)(format), (C.int)(typeVal)))
	ret.isSubclass = true
	return ret
}

// NewQSslKey8 constructs a new QSslKey object.
func NewQSslKey8(encoded []byte, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType, passPhrase []byte) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))

	ret := newQSslKey(C.QSslKey_new8(encoded_alias, (C.int)(algorithm), (C.int)(format), (C.int)(typeVal), passPhrase_alias))
	ret.isSubclass = true
	return ret
}

// NewQSslKey9 constructs a new QSslKey object.
func NewQSslKey9(device *qt.QIODevice, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat) *QSslKey {

	ret := newQSslKey(C.QSslKey_new9((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm), (C.int)(format)))
	ret.isSubclass = true
	return ret
}

// NewQSslKey10 constructs a new QSslKey object.
func NewQSslKey10(device *qt.QIODevice, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType) *QSslKey {

	ret := newQSslKey(C.QSslKey_new10((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm), (C.int)(format), (C.int)(typeVal)))
	ret.isSubclass = true
	return ret
}

// NewQSslKey11 constructs a new QSslKey object.
func NewQSslKey11(device *qt.QIODevice, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType, passPhrase []byte) *QSslKey {
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))

	ret := newQSslKey(C.QSslKey_new11((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm), (C.int)(format), (C.int)(typeVal), passPhrase_alias))
	ret.isSubclass = true
	return ret
}

// NewQSslKey12 constructs a new QSslKey object.
func NewQSslKey12(handle unsafe.Pointer, typeVal QSsl__KeyType) *QSslKey {

	ret := newQSslKey(C.QSslKey_new12(handle, (C.int)(typeVal)))
	ret.isSubclass = true
	return ret
}

func (this *QSslKey) OperatorAssign(other *QSslKey) {
	C.QSslKey_OperatorAssign(this.h, other.cPointer())
}

func (this *QSslKey) Swap(other *QSslKey) {
	C.QSslKey_Swap(this.h, other.cPointer())
}

func (this *QSslKey) IsNull() bool {
	return (bool)(C.QSslKey_IsNull(this.h))
}

func (this *QSslKey) Clear() {
	C.QSslKey_Clear(this.h)
}

func (this *QSslKey) Length() int {
	return (int)(C.QSslKey_Length(this.h))
}

func (this *QSslKey) Type() QSsl__KeyType {
	return (QSsl__KeyType)(C.QSslKey_Type(this.h))
}

func (this *QSslKey) Algorithm() QSsl__KeyAlgorithm {
	return (QSsl__KeyAlgorithm)(C.QSslKey_Algorithm(this.h))
}

func (this *QSslKey) ToPem() []byte {
	var _bytearray C.struct_miqt_string = C.QSslKey_ToPem(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslKey) ToDer() []byte {
	var _bytearray C.struct_miqt_string = C.QSslKey_ToDer(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslKey) Handle() unsafe.Pointer {
	return (unsafe.Pointer)(C.QSslKey_Handle(this.h))
}

func (this *QSslKey) OperatorEqual(key *QSslKey) bool {
	return (bool)(C.QSslKey_OperatorEqual(this.h, key.cPointer()))
}

func (this *QSslKey) OperatorNotEqual(key *QSslKey) bool {
	return (bool)(C.QSslKey_OperatorNotEqual(this.h, key.cPointer()))
}

func (this *QSslKey) ToPem1(passPhrase []byte) []byte {
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))
	var _bytearray C.struct_miqt_string = C.QSslKey_ToPem1(this.h, passPhrase_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslKey) ToDer1(passPhrase []byte) []byte {
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))
	var _bytearray C.struct_miqt_string = C.QSslKey_ToDer1(this.h, passPhrase_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSslKey) Delete() {
	C.QSslKey_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslKey) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslKey) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package network

/*

#include "gen_qpassworddigestor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"unsafe"
)

func QPasswordDigestor_DeriveKeyPbkdf12(algorithm qt6.QCryptographicHash__Algorithm, password []byte, salt []byte, iterations int, dkLen uint64) []byte {
	password_alias := C.struct_miqt_string{}
	if len(password) > 0 {
		password_alias.data = (*C.char)(unsafe.Pointer(&password[0]))
	} else {
		password_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	password_alias.len = C.size_t(len(password))
	salt_alias := C.struct_miqt_string{}
	if len(salt) > 0 {
		salt_alias.data = (*C.char)(unsafe.Pointer(&salt[0]))
	} else {
		salt_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	salt_alias.len = C.size_t(len(salt))
	var _bytearray C.struct_miqt_string = C.miqt_QPasswordDigestor_DeriveKeyPbkdf12((C.int)(algorithm), password_alias, salt_alias, (C.int)(iterations), (C.ulonglong)(dkLen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QPasswordDigestor_DeriveKeyPbkdf22(algorithm qt6.QCryptographicHash__Algorithm, password []byte, salt []byte, iterations int, dkLen uint64) []byte {
	password_alias := C.struct_miqt_string{}
	if len(password) > 0 {
		password_alias.data = (*C.char)(unsafe.Pointer(&password[0]))
	} else {
		password_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	password_alias.len = C.size_t(len(password))
	salt_alias := C.struct_miqt_string{}
	if len(salt) > 0 {
		salt_alias.data = (*C.char)(unsafe.Pointer(&salt[0]))
	} else {
		salt_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	salt_alias.len = C.size_t(len(salt))
	var _bytearray C.struct_miqt_string = C.miqt_QPasswordDigestor_DeriveKeyPbkdf22((C.int)(algorithm), password_alias, salt_alias, (C.int)(iterations), (C.ulonglong)(dkLen))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

package webkit

/*

#include "gen_qwebdatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebDatabase struct {
	h *C.QWebDatabase
}

func (this *QWebDatabase) cPointer() *C.QWebDatabase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebDatabase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebDatabase constructs the type using only CGO pointers.
func newQWebDatabase(h *C.QWebDatabase) *QWebDatabase {
	if h == nil {
		return nil
	}

	return &QWebDatabase{h: h}
}

// UnsafeNewQWebDatabase constructs the type using only unsafe pointers.
func UnsafeNewQWebDatabase(h unsafe.Pointer) *QWebDatabase {
	return newQWebDatabase((*C.QWebDatabase)(h))
}

// NewQWebDatabase constructs a new QWebDatabase object.
func NewQWebDatabase(other *QWebDatabase) *QWebDatabase {

	return newQWebDatabase(C.QWebDatabase_new(other.cPointer()))
}

func (this *QWebDatabase) OperatorAssign(other *QWebDatabase) {
	C.QWebDatabase_operatorAssign(this.h, other.cPointer())
}

func (this *QWebDatabase) Name() string {
	var _ms C.struct_miqt_string = C.QWebDatabase_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) DisplayName() string {
	var _ms C.struct_miqt_string = C.QWebDatabase_displayName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) ExpectedSize() int64 {
	return (int64)(C.QWebDatabase_expectedSize(this.h))
}

func (this *QWebDatabase) Size() int64 {
	return (int64)(C.QWebDatabase_size(this.h))
}

func (this *QWebDatabase) FileName() string {
	var _ms C.struct_miqt_string = C.QWebDatabase_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) Origin() *QWebSecurityOrigin {
	_goptr := newQWebSecurityOrigin(C.QWebDatabase_origin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QWebDatabase_RemoveDatabase(param1 *QWebDatabase) {
	C.QWebDatabase_removeDatabase(param1.cPointer())
}

func QWebDatabase_RemoveAllDatabases() {
	C.QWebDatabase_removeAllDatabases()
}

// Delete this object from C++ memory.
func (this *QWebDatabase) Delete() {
	C.QWebDatabase_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebDatabase) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebDatabase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

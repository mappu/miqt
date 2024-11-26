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
	h          *C.QWebDatabase
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QWebDatabase{h: (*C.QWebDatabase)(h)}
}

// NewQWebDatabase constructs a new QWebDatabase object.
func NewQWebDatabase(other *QWebDatabase) *QWebDatabase {
	var outptr_QWebDatabase *C.QWebDatabase = nil

	C.QWebDatabase_new(other.cPointer(), &outptr_QWebDatabase)
	ret := newQWebDatabase(outptr_QWebDatabase)
	ret.isSubclass = true
	return ret
}

func (this *QWebDatabase) OperatorAssign(other *QWebDatabase) {
	C.QWebDatabase_OperatorAssign(this.h, other.cPointer())
}

func (this *QWebDatabase) Name() string {
	var _ms C.struct_miqt_string = C.QWebDatabase_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) DisplayName() string {
	var _ms C.struct_miqt_string = C.QWebDatabase_DisplayName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) ExpectedSize() int64 {
	return (int64)(C.QWebDatabase_ExpectedSize(this.h))
}

func (this *QWebDatabase) Size() int64 {
	return (int64)(C.QWebDatabase_Size(this.h))
}

func (this *QWebDatabase) FileName() string {
	var _ms C.struct_miqt_string = C.QWebDatabase_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) Origin() *QWebSecurityOrigin {
	_ret := C.QWebDatabase_Origin(this.h)
	_goptr := newQWebSecurityOrigin(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QWebDatabase_RemoveDatabase(param1 *QWebDatabase) {
	C.QWebDatabase_RemoveDatabase(param1.cPointer())
}

func QWebDatabase_RemoveAllDatabases() {
	C.QWebDatabase_RemoveAllDatabases()
}

// Delete this object from C++ memory.
func (this *QWebDatabase) Delete() {
	C.QWebDatabase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebDatabase) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebDatabase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

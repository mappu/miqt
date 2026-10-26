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
	h  *C.QWebDatabase
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWebDatabase) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(other)

	return newQWebDatabase(C.QWebDatabase_new(other.cPointer()))
}

func (this *QWebDatabase) OperatorAssign(other *QWebDatabase) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QWebDatabase_operatorAssign(this.h, other.cPointer())
}

func (this *QWebDatabase) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWebDatabase_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) DisplayName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWebDatabase_displayName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) ExpectedSize() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QWebDatabase_expectedSize(this.h))
}

func (this *QWebDatabase) Size() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QWebDatabase_size(this.h))
}

func (this *QWebDatabase) FileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWebDatabase_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebDatabase) Origin() *QWebSecurityOrigin {
	defer runtime.KeepAlive(this)
	_goptr := newQWebSecurityOrigin(C.QWebDatabase_origin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QWebDatabase_RemoveDatabase(param1 *QWebDatabase) {
	defer runtime.KeepAlive(param1)
	C.QWebDatabase_removeDatabase(param1.cPointer())
}

func QWebDatabase_RemoveAllDatabases() {
	C.QWebDatabase_removeAllDatabases()
}

// Delete this object from C++ memory.
func (this *QWebDatabase) Delete() {
	C.QWebDatabase_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWebDatabase) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWebDatabase_delete((*C.QWebDatabase)(gc[0]))
	})
	this.miqtSetGC(gc)
}

package qt6

/*

#include "gen_qdiriterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDirIterator__IteratorFlag int

const (
	QDirIterator__NoIteratorFlags QDirIterator__IteratorFlag = 0
	QDirIterator__FollowSymlinks  QDirIterator__IteratorFlag = 1
	QDirIterator__Subdirectories  QDirIterator__IteratorFlag = 2
)

type QDirIterator struct {
	h *C.QDirIterator
}

func (this *QDirIterator) cPointer() *C.QDirIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDirIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDirIterator(h *C.QDirIterator) *QDirIterator {
	if h == nil {
		return nil
	}
	return &QDirIterator{h: h}
}

func UnsafeNewQDirIterator(h unsafe.Pointer) *QDirIterator {
	return newQDirIterator((*C.QDirIterator)(h))
}

// NewQDirIterator constructs a new QDirIterator object.
func NewQDirIterator(dir *QDir) *QDirIterator {
	ret := C.QDirIterator_new(dir.cPointer())
	return newQDirIterator(ret)
}

// NewQDirIterator2 constructs a new QDirIterator object.
func NewQDirIterator2(path string) *QDirIterator {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	ret := C.QDirIterator_new2(path_ms)
	return newQDirIterator(ret)
}

// NewQDirIterator3 constructs a new QDirIterator object.
func NewQDirIterator3(path string, filter QDir__Filter) *QDirIterator {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	ret := C.QDirIterator_new3(path_ms, (C.int)(filter))
	return newQDirIterator(ret)
}

// NewQDirIterator4 constructs a new QDirIterator object.
func NewQDirIterator4(path string, nameFilters []string) *QDirIterator {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	ret := C.QDirIterator_new4(path_ms, nameFilters_ma)
	return newQDirIterator(ret)
}

// NewQDirIterator5 constructs a new QDirIterator object.
func NewQDirIterator5(dir *QDir, flags QDirIterator__IteratorFlag) *QDirIterator {
	ret := C.QDirIterator_new5(dir.cPointer(), (C.int)(flags))
	return newQDirIterator(ret)
}

// NewQDirIterator6 constructs a new QDirIterator object.
func NewQDirIterator6(path string, flags QDirIterator__IteratorFlag) *QDirIterator {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	ret := C.QDirIterator_new6(path_ms, (C.int)(flags))
	return newQDirIterator(ret)
}

// NewQDirIterator7 constructs a new QDirIterator object.
func NewQDirIterator7(path string, filter QDir__Filter, flags QDirIterator__IteratorFlag) *QDirIterator {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	ret := C.QDirIterator_new7(path_ms, (C.int)(filter), (C.int)(flags))
	return newQDirIterator(ret)
}

// NewQDirIterator8 constructs a new QDirIterator object.
func NewQDirIterator8(path string, nameFilters []string, filters QDir__Filter) *QDirIterator {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	ret := C.QDirIterator_new8(path_ms, nameFilters_ma, (C.int)(filters))
	return newQDirIterator(ret)
}

// NewQDirIterator9 constructs a new QDirIterator object.
func NewQDirIterator9(path string, nameFilters []string, filters QDir__Filter, flags QDirIterator__IteratorFlag) *QDirIterator {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	nameFilters_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	for i := range nameFilters {
		nameFilters_i_ms := C.struct_miqt_string{}
		nameFilters_i_ms.data = C.CString(nameFilters[i])
		nameFilters_i_ms.len = C.size_t(len(nameFilters[i]))
		defer C.free(unsafe.Pointer(nameFilters_i_ms.data))
		nameFilters_CArray[i] = nameFilters_i_ms
	}
	nameFilters_ma := C.struct_miqt_array{len: C.size_t(len(nameFilters)), data: unsafe.Pointer(nameFilters_CArray)}
	ret := C.QDirIterator_new9(path_ms, nameFilters_ma, (C.int)(filters), (C.int)(flags))
	return newQDirIterator(ret)
}

func (this *QDirIterator) Next() string {
	var _ms C.struct_miqt_string = C.QDirIterator_Next(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirIterator) NextFileInfo() *QFileInfo {
	_ret := C.QDirIterator_NextFileInfo(this.h)
	_goptr := newQFileInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirIterator) HasNext() bool {
	return (bool)(C.QDirIterator_HasNext(this.h))
}

func (this *QDirIterator) FileName() string {
	var _ms C.struct_miqt_string = C.QDirIterator_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirIterator) FilePath() string {
	var _ms C.struct_miqt_string = C.QDirIterator_FilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDirIterator) FileInfo() *QFileInfo {
	_ret := C.QDirIterator_FileInfo(this.h)
	_goptr := newQFileInfo(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDirIterator) Path() string {
	var _ms C.struct_miqt_string = C.QDirIterator_Path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDirIterator) Delete() {
	C.QDirIterator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDirIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QDirIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

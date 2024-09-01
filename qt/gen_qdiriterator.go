package qt

/*

#include "gen_qdiriterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func newQDirIterator(h *C.QDirIterator) *QDirIterator {
	if h == nil {
		return nil
	}
	return &QDirIterator{h: h}
}

func newQDirIterator_U(h unsafe.Pointer) *QDirIterator {
	return newQDirIterator((*C.QDirIterator)(h))
}

// NewQDirIterator constructs a new QDirIterator object.
func NewQDirIterator(dir *QDir) *QDirIterator {
	ret := C.QDirIterator_new(dir.cPointer())
	return newQDirIterator(ret)
}

// NewQDirIterator2 constructs a new QDirIterator object.
func NewQDirIterator2(path string) *QDirIterator {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QDirIterator_new2(path_Cstring, C.ulong(len(path)))
	return newQDirIterator(ret)
}

// NewQDirIterator3 constructs a new QDirIterator object.
func NewQDirIterator3(path string, filter int) *QDirIterator {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QDirIterator_new3(path_Cstring, C.ulong(len(path)), (C.int)(filter))
	return newQDirIterator(ret)
}

// NewQDirIterator4 constructs a new QDirIterator object.
func NewQDirIterator4(path string, nameFilters []string) *QDirIterator {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	nameFilters_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(nameFilters))))
	nameFilters_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	defer C.free(unsafe.Pointer(nameFilters_Lengths))
	for i := range nameFilters {
		single_cstring := C.CString(nameFilters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		nameFilters_CArray[i] = single_cstring
		nameFilters_Lengths[i] = (C.size_t)(len(nameFilters[i]))
	}
	ret := C.QDirIterator_new4(path_Cstring, C.ulong(len(path)), &nameFilters_CArray[0], &nameFilters_Lengths[0], C.ulong(len(nameFilters)))
	return newQDirIterator(ret)
}

// NewQDirIterator5 constructs a new QDirIterator object.
func NewQDirIterator5(dir *QDir, flags int) *QDirIterator {
	ret := C.QDirIterator_new5(dir.cPointer(), (C.int)(flags))
	return newQDirIterator(ret)
}

// NewQDirIterator6 constructs a new QDirIterator object.
func NewQDirIterator6(path string, flags int) *QDirIterator {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QDirIterator_new6(path_Cstring, C.ulong(len(path)), (C.int)(flags))
	return newQDirIterator(ret)
}

// NewQDirIterator7 constructs a new QDirIterator object.
func NewQDirIterator7(path string, filter int, flags int) *QDirIterator {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	ret := C.QDirIterator_new7(path_Cstring, C.ulong(len(path)), (C.int)(filter), (C.int)(flags))
	return newQDirIterator(ret)
}

// NewQDirIterator8 constructs a new QDirIterator object.
func NewQDirIterator8(path string, nameFilters []string, filters int) *QDirIterator {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	nameFilters_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(nameFilters))))
	nameFilters_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	defer C.free(unsafe.Pointer(nameFilters_Lengths))
	for i := range nameFilters {
		single_cstring := C.CString(nameFilters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		nameFilters_CArray[i] = single_cstring
		nameFilters_Lengths[i] = (C.size_t)(len(nameFilters[i]))
	}
	ret := C.QDirIterator_new8(path_Cstring, C.ulong(len(path)), &nameFilters_CArray[0], &nameFilters_Lengths[0], C.ulong(len(nameFilters)), (C.int)(filters))
	return newQDirIterator(ret)
}

// NewQDirIterator9 constructs a new QDirIterator object.
func NewQDirIterator9(path string, nameFilters []string, filters int, flags int) *QDirIterator {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	nameFilters_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(nameFilters))))
	nameFilters_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(nameFilters))))
	defer C.free(unsafe.Pointer(nameFilters_CArray))
	defer C.free(unsafe.Pointer(nameFilters_Lengths))
	for i := range nameFilters {
		single_cstring := C.CString(nameFilters[i])
		defer C.free(unsafe.Pointer(single_cstring))
		nameFilters_CArray[i] = single_cstring
		nameFilters_Lengths[i] = (C.size_t)(len(nameFilters[i]))
	}
	ret := C.QDirIterator_new9(path_Cstring, C.ulong(len(path)), &nameFilters_CArray[0], &nameFilters_Lengths[0], C.ulong(len(nameFilters)), (C.int)(filters), (C.int)(flags))
	return newQDirIterator(ret)
}

func (this *QDirIterator) Next() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_Next(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) HasNext() bool {
	ret := C.QDirIterator_HasNext(this.h)
	return (bool)(ret)
}

func (this *QDirIterator) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) FilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_FilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) FileInfo() *QFileInfo {
	ret := C.QDirIterator_FileInfo(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFileInfo(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFileInfo) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirIterator) Path() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_Path(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) Delete() {
	C.QDirIterator_Delete(this.h)
}

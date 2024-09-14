package qt

/*

#include "gen_qfilesystemwatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFileSystemWatcher struct {
	h *C.QFileSystemWatcher
	*QObject
}

func (this *QFileSystemWatcher) cPointer() *C.QFileSystemWatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileSystemWatcher(h *C.QFileSystemWatcher) *QFileSystemWatcher {
	if h == nil {
		return nil
	}
	return &QFileSystemWatcher{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQFileSystemWatcher_U(h unsafe.Pointer) *QFileSystemWatcher {
	return newQFileSystemWatcher((*C.QFileSystemWatcher)(h))
}

// NewQFileSystemWatcher constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher() *QFileSystemWatcher {
	ret := C.QFileSystemWatcher_new()
	return newQFileSystemWatcher(ret)
}

// NewQFileSystemWatcher2 constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher2(paths []string) *QFileSystemWatcher {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	paths_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		single_ms := miqt_strdupg(paths[i])
		defer C.free(single_ms)
		paths_CArray[i] = (*C.struct_miqt_string)(single_ms)
	}
	paths_ma := &C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(paths_ma))
	ret := C.QFileSystemWatcher_new2(paths_ma)
	return newQFileSystemWatcher(ret)
}

// NewQFileSystemWatcher3 constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher3(parent *QObject) *QFileSystemWatcher {
	ret := C.QFileSystemWatcher_new3(parent.cPointer())
	return newQFileSystemWatcher(ret)
}

// NewQFileSystemWatcher4 constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher4(paths []string, parent *QObject) *QFileSystemWatcher {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	paths_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		single_ms := miqt_strdupg(paths[i])
		defer C.free(single_ms)
		paths_CArray[i] = (*C.struct_miqt_string)(single_ms)
	}
	paths_ma := &C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(paths_ma))
	ret := C.QFileSystemWatcher_new4(paths_ma, parent.cPointer())
	return newQFileSystemWatcher(ret)
}

func (this *QFileSystemWatcher) MetaObject() *QMetaObject {
	_ret := C.QFileSystemWatcher_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QFileSystemWatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemWatcher_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemWatcher_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemWatcher_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSystemWatcher) AddPath(file string) bool {
	file_ms := miqt_strdupg(file)
	defer C.free(file_ms)
	_ret := C.QFileSystemWatcher_AddPath(this.h, (*C.struct_miqt_string)(file_ms))
	return (bool)(_ret)
}

func (this *QFileSystemWatcher) AddPaths(files []string) []string {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	files_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	for i := range files {
		single_ms := miqt_strdupg(files[i])
		defer C.free(single_ms)
		files_CArray[i] = (*C.struct_miqt_string)(single_ms)
	}
	files_ma := &C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(files_ma))
	var _ma *C.struct_miqt_array = C.QFileSystemWatcher_AddPaths(this.h, files_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QFileSystemWatcher) RemovePath(file string) bool {
	file_ms := miqt_strdupg(file)
	defer C.free(file_ms)
	_ret := C.QFileSystemWatcher_RemovePath(this.h, (*C.struct_miqt_string)(file_ms))
	return (bool)(_ret)
}

func (this *QFileSystemWatcher) RemovePaths(files []string) []string {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	files_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	for i := range files {
		single_ms := miqt_strdupg(files[i])
		defer C.free(single_ms)
		files_CArray[i] = (*C.struct_miqt_string)(single_ms)
	}
	files_ma := &C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(files_ma))
	var _ma *C.struct_miqt_array = C.QFileSystemWatcher_RemovePaths(this.h, files_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QFileSystemWatcher) Files() []string {
	var _ma *C.struct_miqt_array = C.QFileSystemWatcher_Files(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QFileSystemWatcher) Directories() []string {
	var _ma *C.struct_miqt_array = C.QFileSystemWatcher_Directories(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileSystemWatcher_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemWatcher_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemWatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemWatcher_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemWatcher_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemWatcher_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSystemWatcher_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSystemWatcher_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFileSystemWatcher) Delete() {
	C.QFileSystemWatcher_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileSystemWatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileSystemWatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

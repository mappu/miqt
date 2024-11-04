package qt6

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

func (this *QFileSystemWatcher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQFileSystemWatcher(h *C.QFileSystemWatcher) *QFileSystemWatcher {
	if h == nil {
		return nil
	}
	return &QFileSystemWatcher{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQFileSystemWatcher(h unsafe.Pointer) *QFileSystemWatcher {
	return newQFileSystemWatcher((*C.QFileSystemWatcher)(h))
}

// NewQFileSystemWatcher constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher() *QFileSystemWatcher {
	ret := C.QFileSystemWatcher_new()
	return newQFileSystemWatcher(ret)
}

// NewQFileSystemWatcher2 constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher2(paths []string) *QFileSystemWatcher {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
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
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	ret := C.QFileSystemWatcher_new4(paths_ma, parent.cPointer())
	return newQFileSystemWatcher(ret)
}

func (this *QFileSystemWatcher) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QFileSystemWatcher_MetaObject(this.h)))
}

func (this *QFileSystemWatcher) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFileSystemWatcher_Metacast(this.h, param1_Cstring))
}

func QFileSystemWatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileSystemWatcher) AddPath(file string) bool {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	return (bool)(C.QFileSystemWatcher_AddPath(this.h, file_ms))
}

func (this *QFileSystemWatcher) AddPaths(files []string) []string {
	files_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	for i := range files {
		files_i_ms := C.struct_miqt_string{}
		files_i_ms.data = C.CString(files[i])
		files_i_ms.len = C.size_t(len(files[i]))
		defer C.free(unsafe.Pointer(files_i_ms.data))
		files_CArray[i] = files_i_ms
	}
	files_ma := C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_AddPaths(this.h, files_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileSystemWatcher) RemovePath(file string) bool {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	return (bool)(C.QFileSystemWatcher_RemovePath(this.h, file_ms))
}

func (this *QFileSystemWatcher) RemovePaths(files []string) []string {
	files_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	for i := range files {
		files_i_ms := C.struct_miqt_string{}
		files_i_ms.data = C.CString(files[i])
		files_i_ms.len = C.size_t(len(files[i]))
		defer C.free(unsafe.Pointer(files_i_ms.data))
		files_CArray[i] = files_i_ms
	}
	files_ma := C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_RemovePaths(this.h, files_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileSystemWatcher) Files() []string {
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_Files(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileSystemWatcher) Directories() []string {
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_Directories(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFileSystemWatcher_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSystemWatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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

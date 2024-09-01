package qt

/*

#include "gen_qfilesystemwatcher.h"
#include <stdlib.h>

*/
import "C"

import (
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
	paths_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(paths))))
	paths_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	defer C.free(unsafe.Pointer(paths_Lengths))
	for i := range paths {
		single_cstring := C.CString(paths[i])
		defer C.free(unsafe.Pointer(single_cstring))
		paths_CArray[i] = single_cstring
		paths_Lengths[i] = (C.size_t)(len(paths[i]))
	}
	ret := C.QFileSystemWatcher_new2(&paths_CArray[0], &paths_Lengths[0], C.ulong(len(paths)))
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
	paths_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(paths))))
	paths_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	defer C.free(unsafe.Pointer(paths_Lengths))
	for i := range paths {
		single_cstring := C.CString(paths[i])
		defer C.free(unsafe.Pointer(single_cstring))
		paths_CArray[i] = single_cstring
		paths_Lengths[i] = (C.size_t)(len(paths[i]))
	}
	ret := C.QFileSystemWatcher_new4(&paths_CArray[0], &paths_Lengths[0], C.ulong(len(paths)), parent.cPointer())
	return newQFileSystemWatcher(ret)
}

func (this *QFileSystemWatcher) MetaObject() *QMetaObject {
	ret := C.QFileSystemWatcher_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFileSystemWatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemWatcher_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemWatcher_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemWatcher_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemWatcher) AddPath(file string) bool {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QFileSystemWatcher_AddPath(this.h, file_Cstring, C.ulong(len(file)))
	return (bool)(ret)
}

func (this *QFileSystemWatcher) AddPaths(files []string) []string {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	files_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(files))))
	files_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	defer C.free(unsafe.Pointer(files_Lengths))
	for i := range files {
		single_cstring := C.CString(files[i])
		defer C.free(unsafe.Pointer(single_cstring))
		files_CArray[i] = single_cstring
		files_Lengths[i] = (C.size_t)(len(files[i]))
	}
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileSystemWatcher_AddPaths(this.h, &files_CArray[0], &files_Lengths[0], C.ulong(len(files)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemWatcher) RemovePath(file string) bool {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QFileSystemWatcher_RemovePath(this.h, file_Cstring, C.ulong(len(file)))
	return (bool)(ret)
}

func (this *QFileSystemWatcher) RemovePaths(files []string) []string {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	files_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(files))))
	files_Lengths := (*[0xffff]C.size_t)(C.malloc(C.size_t(8 * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	defer C.free(unsafe.Pointer(files_Lengths))
	for i := range files {
		single_cstring := C.CString(files[i])
		defer C.free(unsafe.Pointer(single_cstring))
		files_CArray[i] = single_cstring
		files_Lengths[i] = (C.size_t)(len(files[i]))
	}
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileSystemWatcher_RemovePaths(this.h, &files_CArray[0], &files_Lengths[0], C.ulong(len(files)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemWatcher) Files() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileSystemWatcher_Files(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemWatcher) Directories() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QFileSystemWatcher_Directories(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemWatcher_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemWatcher_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemWatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemWatcher_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemWatcher_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemWatcher_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFileSystemWatcher_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileSystemWatcher_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileSystemWatcher) Delete() {
	C.QFileSystemWatcher_Delete(this.h)
}

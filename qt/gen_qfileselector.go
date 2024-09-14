package qt

/*

#include "gen_qfileselector.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFileSelector struct {
	h *C.QFileSelector
	*QObject
}

func (this *QFileSelector) cPointer() *C.QFileSelector {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileSelector(h *C.QFileSelector) *QFileSelector {
	if h == nil {
		return nil
	}
	return &QFileSelector{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQFileSelector_U(h unsafe.Pointer) *QFileSelector {
	return newQFileSelector((*C.QFileSelector)(h))
}

// NewQFileSelector constructs a new QFileSelector object.
func NewQFileSelector() *QFileSelector {
	ret := C.QFileSelector_new()
	return newQFileSelector(ret)
}

// NewQFileSelector2 constructs a new QFileSelector object.
func NewQFileSelector2(parent *QObject) *QFileSelector {
	ret := C.QFileSelector_new2(parent.cPointer())
	return newQFileSelector(ret)
}

func (this *QFileSelector) MetaObject() *QMetaObject {
	_ret := C.QFileSelector_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QFileSelector_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSelector_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSelector_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSelector_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSelector) Select(filePath string) string {
	filePath_ms := miqt_strdupg(filePath)
	defer C.free(filePath_ms)
	var _ms *C.struct_miqt_string = C.QFileSelector_Select(this.h, (*C.struct_miqt_string)(filePath_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFileSelector) SelectWithFilePath(filePath *QUrl) *QUrl {
	_ret := C.QFileSelector_SelectWithFilePath(this.h, filePath.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileSelector) ExtraSelectors() []string {
	var _ma *C.struct_miqt_array = C.QFileSelector_ExtraSelectors(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QFileSelector) SetExtraSelectors(list []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	list_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		single_ms := miqt_strdupg(list[i])
		defer C.free(single_ms)
		list_CArray[i] = (*C.struct_miqt_string)(single_ms)
	}
	list_ma := &C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(list_ma))
	C.QFileSelector_SetExtraSelectors(this.h, list_ma)
}

func (this *QFileSelector) AllSelectors() []string {
	var _ma *C.struct_miqt_array = C.QFileSelector_AllSelectors(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = C.GoStringN(&_outCast[i].data, C.int(int64(_outCast[i].len)))
		C.free(unsafe.Pointer(_outCast[i])) // free the inner miqt_string*
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QFileSelector_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSelector_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSelector_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSelector_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSelector_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSelector_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFileSelector_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFileSelector_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFileSelector) Delete() {
	C.QFileSelector_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileSelector) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileSelector) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

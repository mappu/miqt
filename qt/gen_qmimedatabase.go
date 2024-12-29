package qt

/*

#include "gen_qmimedatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMimeDatabase__MatchMode int

const (
	QMimeDatabase__MatchDefault   QMimeDatabase__MatchMode = 0
	QMimeDatabase__MatchExtension QMimeDatabase__MatchMode = 1
	QMimeDatabase__MatchContent   QMimeDatabase__MatchMode = 2
)

type QMimeDatabase struct {
	h          *C.QMimeDatabase
	isSubclass bool
}

func (this *QMimeDatabase) cPointer() *C.QMimeDatabase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMimeDatabase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMimeDatabase constructs the type using only CGO pointers.
func newQMimeDatabase(h *C.QMimeDatabase) *QMimeDatabase {
	if h == nil {
		return nil
	}

	return &QMimeDatabase{h: h}
}

// UnsafeNewQMimeDatabase constructs the type using only unsafe pointers.
func UnsafeNewQMimeDatabase(h unsafe.Pointer) *QMimeDatabase {
	return newQMimeDatabase((*C.QMimeDatabase)(h))
}

// NewQMimeDatabase constructs a new QMimeDatabase object.
func NewQMimeDatabase() *QMimeDatabase {

	ret := newQMimeDatabase(C.QMimeDatabase_new())
	ret.isSubclass = true
	return ret
}

func (this *QMimeDatabase) MimeTypeForName(nameOrAlias string) *QMimeType {
	nameOrAlias_ms := C.struct_miqt_string{}
	nameOrAlias_ms.data = C.CString(nameOrAlias)
	nameOrAlias_ms.len = C.size_t(len(nameOrAlias))
	defer C.free(unsafe.Pointer(nameOrAlias_ms.data))
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForName(this.h, nameOrAlias_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFile(fileName string) *QMimeType {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForFile(this.h, fileName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFileWithFileInfo(fileInfo *QFileInfo) *QMimeType {
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForFileWithFileInfo(this.h, fileInfo.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypesForFileName(fileName string) []QMimeType {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ma C.struct_miqt_array = C.QMimeDatabase_MimeTypesForFileName(this.h, fileName_ms)
	_ret := make([]QMimeType, int(_ma.len))
	_outCast := (*[0xffff]*C.QMimeType)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMimeType(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMimeDatabase) MimeTypeForData(data []byte) *QMimeType {
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForData(this.h, data_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForDataWithDevice(device *QIODevice) *QMimeType {
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForDataWithDevice(this.h, device.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForUrl(url *QUrl) *QMimeType {
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForUrl(this.h, url.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFileNameAndData(fileName string, device *QIODevice) *QMimeType {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForFileNameAndData(this.h, fileName_ms, device.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFileNameAndData2(fileName string, data []byte) *QMimeType {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForFileNameAndData2(this.h, fileName_ms, data_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) SuffixForFileName(fileName string) string {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var _ms C.struct_miqt_string = C.QMimeDatabase_SuffixForFileName(this.h, fileName_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeDatabase) AllMimeTypes() []QMimeType {
	var _ma C.struct_miqt_array = C.QMimeDatabase_AllMimeTypes(this.h)
	_ret := make([]QMimeType, int(_ma.len))
	_outCast := (*[0xffff]*C.QMimeType)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQMimeType(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMimeDatabase) MimeTypeForFile2(fileName string, mode QMimeDatabase__MatchMode) *QMimeType {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForFile2(this.h, fileName_ms, (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFile22(fileInfo *QFileInfo, mode QMimeDatabase__MatchMode) *QMimeType {
	_goptr := newQMimeType(C.QMimeDatabase_MimeTypeForFile22(this.h, fileInfo.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QMimeDatabase) Delete() {
	C.QMimeDatabase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMimeDatabase) GoGC() {
	runtime.SetFinalizer(this, func(this *QMimeDatabase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

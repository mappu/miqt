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
	QMimeDatabase__MatchMode__MatchDefault   QMimeDatabase__MatchMode = 0
	QMimeDatabase__MatchMode__MatchExtension QMimeDatabase__MatchMode = 1
	QMimeDatabase__MatchMode__MatchContent   QMimeDatabase__MatchMode = 2
)

type QMimeDatabase struct {
	h *C.QMimeDatabase
}

func (this *QMimeDatabase) cPointer() *C.QMimeDatabase {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMimeDatabase(h *C.QMimeDatabase) *QMimeDatabase {
	if h == nil {
		return nil
	}
	return &QMimeDatabase{h: h}
}

func newQMimeDatabase_U(h unsafe.Pointer) *QMimeDatabase {
	return newQMimeDatabase((*C.QMimeDatabase)(h))
}

// NewQMimeDatabase constructs a new QMimeDatabase object.
func NewQMimeDatabase() *QMimeDatabase {
	ret := C.QMimeDatabase_new()
	return newQMimeDatabase(ret)
}

func (this *QMimeDatabase) MimeTypeForName(nameOrAlias string) *QMimeType {
	nameOrAlias_ms := miqt_strdupg(nameOrAlias)
	defer C.free(nameOrAlias_ms)
	_ret := C.QMimeDatabase_MimeTypeForName(this.h, (*C.struct_miqt_string)(nameOrAlias_ms))
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFile(fileName string) *QMimeType {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QMimeDatabase_MimeTypeForFile(this.h, (*C.struct_miqt_string)(fileName_ms))
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFileWithFileInfo(fileInfo *QFileInfo) *QMimeType {
	_ret := C.QMimeDatabase_MimeTypeForFileWithFileInfo(this.h, fileInfo.cPointer())
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypesForFileName(fileName string) []QMimeType {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ma *C.struct_miqt_array = C.QMimeDatabase_MimeTypesForFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
	_ret := make([]QMimeType, int(_ma.len))
	_outCast := (*[0xffff]*C.QMimeType)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQMimeType(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeDatabase) MimeTypeForData(data *QByteArray) *QMimeType {
	_ret := C.QMimeDatabase_MimeTypeForData(this.h, data.cPointer())
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForDataWithDevice(device *QIODevice) *QMimeType {
	_ret := C.QMimeDatabase_MimeTypeForDataWithDevice(this.h, device.cPointer())
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForUrl(url *QUrl) *QMimeType {
	_ret := C.QMimeDatabase_MimeTypeForUrl(this.h, url.cPointer())
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFileNameAndData(fileName string, device *QIODevice) *QMimeType {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QMimeDatabase_MimeTypeForFileNameAndData(this.h, (*C.struct_miqt_string)(fileName_ms), device.cPointer())
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFileNameAndData2(fileName string, data *QByteArray) *QMimeType {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QMimeDatabase_MimeTypeForFileNameAndData2(this.h, (*C.struct_miqt_string)(fileName_ms), data.cPointer())
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) SuffixForFileName(fileName string) string {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	var _ms *C.struct_miqt_string = C.QMimeDatabase_SuffixForFileName(this.h, (*C.struct_miqt_string)(fileName_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMimeDatabase) AllMimeTypes() []QMimeType {
	var _ma *C.struct_miqt_array = C.QMimeDatabase_AllMimeTypes(this.h)
	_ret := make([]QMimeType, int(_ma.len))
	_outCast := (*[0xffff]*C.QMimeType)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQMimeType(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeDatabase) MimeTypeForFile2(fileName string, mode QMimeDatabase__MatchMode) *QMimeType {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	_ret := C.QMimeDatabase_MimeTypeForFile2(this.h, (*C.struct_miqt_string)(fileName_ms), (C.uintptr_t)(mode))
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeDatabase) MimeTypeForFile22(fileInfo *QFileInfo, mode QMimeDatabase__MatchMode) *QMimeType {
	_ret := C.QMimeDatabase_MimeTypeForFile22(this.h, fileInfo.cPointer(), (C.uintptr_t)(mode))
	_goptr := newQMimeType(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QMimeDatabase) Delete() {
	C.QMimeDatabase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMimeDatabase) GoGC() {
	runtime.SetFinalizer(this, func(this *QMimeDatabase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

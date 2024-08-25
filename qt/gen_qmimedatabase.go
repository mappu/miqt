package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmimedatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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
	nameOrAlias_Cstring := C.CString(nameOrAlias)
	defer C.free(unsafe.Pointer(nameOrAlias_Cstring))
	ret := C.QMimeDatabase_MimeTypeForName(this.h, nameOrAlias_Cstring, C.ulong(len(nameOrAlias)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMimeType(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMimeType) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeDatabase) MimeTypesForFileName(fileName string) []QMimeType {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out **C.QMimeType = nil
	var _out_len C.size_t = 0
	C.QMimeDatabase_MimeTypesForFileName(this.h, fileName_Cstring, C.ulong(len(fileName)), &_out, &_out_len)
	ret := make([]QMimeType, int(_out_len))
	_outCast := (*[0xffff]*C.QMimeType)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQMimeType(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeDatabase) MimeTypeForData(data *QByteArray) *QMimeType {
	ret := C.QMimeDatabase_MimeTypeForData(this.h, data.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMimeType(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMimeType) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeDatabase) MimeTypeForDataWithDevice(device *QIODevice) *QMimeType {
	ret := C.QMimeDatabase_MimeTypeForDataWithDevice(this.h, device.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMimeType(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMimeType) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeDatabase) MimeTypeForUrl(url *QUrl) *QMimeType {
	ret := C.QMimeDatabase_MimeTypeForUrl(this.h, url.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMimeType(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMimeType) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeDatabase) MimeTypeForFileNameAndData(fileName string, device *QIODevice) *QMimeType {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QMimeDatabase_MimeTypeForFileNameAndData(this.h, fileName_Cstring, C.ulong(len(fileName)), device.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMimeType(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMimeType) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeDatabase) MimeTypeForFileNameAndData2(fileName string, data *QByteArray) *QMimeType {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QMimeDatabase_MimeTypeForFileNameAndData2(this.h, fileName_Cstring, C.ulong(len(fileName)), data.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMimeType(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMimeType) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeDatabase) SuffixForFileName(fileName string) string {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeDatabase_SuffixForFileName(this.h, fileName_Cstring, C.ulong(len(fileName)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeDatabase) AllMimeTypes() []QMimeType {
	var _out **C.QMimeType = nil
	var _out_len C.size_t = 0
	C.QMimeDatabase_AllMimeTypes(this.h, &_out, &_out_len)
	ret := make([]QMimeType, int(_out_len))
	_outCast := (*[0xffff]*C.QMimeType)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQMimeType(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeDatabase) Delete() {
	C.QMimeDatabase_Delete(this.h)
}

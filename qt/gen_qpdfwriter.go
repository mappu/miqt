package qt

/*

#include "gen_qpdfwriter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPdfWriter struct {
	h *C.QPdfWriter
	*QObject
	*QPagedPaintDevice
}

func (this *QPdfWriter) cPointer() *C.QPdfWriter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPdfWriter(h *C.QPdfWriter) *QPdfWriter {
	if h == nil {
		return nil
	}
	return &QPdfWriter{h: h, QObject: newQObject_U(unsafe.Pointer(h)), QPagedPaintDevice: newQPagedPaintDevice_U(unsafe.Pointer(h))}
}

func newQPdfWriter_U(h unsafe.Pointer) *QPdfWriter {
	return newQPdfWriter((*C.QPdfWriter)(h))
}

// NewQPdfWriter constructs a new QPdfWriter object.
func NewQPdfWriter(filename string) *QPdfWriter {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	ret := C.QPdfWriter_new((*C.struct_miqt_string)(filename_ms))
	return newQPdfWriter(ret)
}

// NewQPdfWriter2 constructs a new QPdfWriter object.
func NewQPdfWriter2(device *QIODevice) *QPdfWriter {
	ret := C.QPdfWriter_new2(device.cPointer())
	return newQPdfWriter(ret)
}

func (this *QPdfWriter) MetaObject() *QMetaObject {
	_ret := C.QPdfWriter_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QPdfWriter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPdfWriter_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPdfWriter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPdfWriter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPdfWriter) SetPdfVersion(version QPagedPaintDevice__PdfVersion) {
	C.QPdfWriter_SetPdfVersion(this.h, (C.uintptr_t)(version))
}

func (this *QPdfWriter) PdfVersion() QPagedPaintDevice__PdfVersion {
	_ret := C.QPdfWriter_PdfVersion(this.h)
	return (QPagedPaintDevice__PdfVersion)(_ret)
}

func (this *QPdfWriter) Title() string {
	var _ms *C.struct_miqt_string = C.QPdfWriter_Title(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPdfWriter) SetTitle(title string) {
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QPdfWriter_SetTitle(this.h, (*C.struct_miqt_string)(title_ms))
}

func (this *QPdfWriter) Creator() string {
	var _ms *C.struct_miqt_string = C.QPdfWriter_Creator(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPdfWriter) SetCreator(creator string) {
	creator_ms := miqt_strdupg(creator)
	defer C.free(creator_ms)
	C.QPdfWriter_SetCreator(this.h, (*C.struct_miqt_string)(creator_ms))
}

func (this *QPdfWriter) NewPage() bool {
	_ret := C.QPdfWriter_NewPage(this.h)
	return (bool)(_ret)
}

func (this *QPdfWriter) SetResolution(resolution int) {
	C.QPdfWriter_SetResolution(this.h, (C.int)(resolution))
}

func (this *QPdfWriter) Resolution() int {
	_ret := C.QPdfWriter_Resolution(this.h)
	return (int)(_ret)
}

func (this *QPdfWriter) SetDocumentXmpMetadata(xmpMetadata *QByteArray) {
	C.QPdfWriter_SetDocumentXmpMetadata(this.h, xmpMetadata.cPointer())
}

func (this *QPdfWriter) DocumentXmpMetadata() *QByteArray {
	_ret := C.QPdfWriter_DocumentXmpMetadata(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPdfWriter) AddFileAttachment(fileName string, data *QByteArray) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	C.QPdfWriter_AddFileAttachment(this.h, (*C.struct_miqt_string)(fileName_ms), data.cPointer())
}

func (this *QPdfWriter) SetPageSize(size QPagedPaintDevice__PageSize) {
	C.QPdfWriter_SetPageSize(this.h, (C.uintptr_t)(size))
}

func (this *QPdfWriter) SetPageSizeMM(size *QSizeF) {
	C.QPdfWriter_SetPageSizeMM(this.h, size.cPointer())
}

func (this *QPdfWriter) SetMargins(m *QPagedPaintDevice__Margins) {
	C.QPdfWriter_SetMargins(this.h, m.cPointer())
}

func QPdfWriter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPdfWriter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPdfWriter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPdfWriter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPdfWriter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPdfWriter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPdfWriter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPdfWriter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPdfWriter) AddFileAttachment3(fileName string, data *QByteArray, mimeType string) {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	mimeType_ms := miqt_strdupg(mimeType)
	defer C.free(mimeType_ms)
	C.QPdfWriter_AddFileAttachment3(this.h, (*C.struct_miqt_string)(fileName_ms), data.cPointer(), (*C.struct_miqt_string)(mimeType_ms))
}

// Delete this object from C++ memory.
func (this *QPdfWriter) Delete() {
	C.QPdfWriter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

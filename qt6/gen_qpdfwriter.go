package qt6

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

func (this *QPdfWriter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPdfWriter(h *C.QPdfWriter) *QPdfWriter {
	if h == nil {
		return nil
	}
	return &QPdfWriter{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h)), QPagedPaintDevice: UnsafeNewQPagedPaintDevice(unsafe.Pointer(h))}
}

func UnsafeNewQPdfWriter(h unsafe.Pointer) *QPdfWriter {
	return newQPdfWriter((*C.QPdfWriter)(h))
}

// NewQPdfWriter constructs a new QPdfWriter object.
func NewQPdfWriter(filename string) *QPdfWriter {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	ret := C.QPdfWriter_new(filename_ms)
	return newQPdfWriter(ret)
}

// NewQPdfWriter2 constructs a new QPdfWriter object.
func NewQPdfWriter2(device *QIODevice) *QPdfWriter {
	ret := C.QPdfWriter_new2(device.cPointer())
	return newQPdfWriter(ret)
}

func (this *QPdfWriter) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPdfWriter_MetaObject(this.h)))
}

func (this *QPdfWriter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfWriter_Metacast(this.h, param1_Cstring))
}

func QPdfWriter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetPdfVersion(version QPagedPaintDevice__PdfVersion) {
	C.QPdfWriter_SetPdfVersion(this.h, (C.int)(version))
}

func (this *QPdfWriter) PdfVersion() QPagedPaintDevice__PdfVersion {
	return (QPagedPaintDevice__PdfVersion)(C.QPdfWriter_PdfVersion(this.h))
}

func (this *QPdfWriter) Title() string {
	var _ms C.struct_miqt_string = C.QPdfWriter_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QPdfWriter_SetTitle(this.h, title_ms)
}

func (this *QPdfWriter) Creator() string {
	var _ms C.struct_miqt_string = C.QPdfWriter_Creator(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) SetCreator(creator string) {
	creator_ms := C.struct_miqt_string{}
	creator_ms.data = C.CString(creator)
	creator_ms.len = C.size_t(len(creator))
	defer C.free(unsafe.Pointer(creator_ms.data))
	C.QPdfWriter_SetCreator(this.h, creator_ms)
}

func (this *QPdfWriter) NewPage() bool {
	return (bool)(C.QPdfWriter_NewPage(this.h))
}

func (this *QPdfWriter) SetResolution(resolution int) {
	C.QPdfWriter_SetResolution(this.h, (C.int)(resolution))
}

func (this *QPdfWriter) Resolution() int {
	return (int)(C.QPdfWriter_Resolution(this.h))
}

func (this *QPdfWriter) SetDocumentXmpMetadata(xmpMetadata []byte) {
	xmpMetadata_alias := C.struct_miqt_string{}
	xmpMetadata_alias.data = (*C.char)(unsafe.Pointer(&xmpMetadata[0]))
	xmpMetadata_alias.len = C.size_t(len(xmpMetadata))
	C.QPdfWriter_SetDocumentXmpMetadata(this.h, xmpMetadata_alias)
}

func (this *QPdfWriter) DocumentXmpMetadata() []byte {
	var _bytearray C.struct_miqt_string = C.QPdfWriter_DocumentXmpMetadata(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QPdfWriter) AddFileAttachment(fileName string, data []byte) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QPdfWriter_AddFileAttachment(this.h, fileName_ms, data_alias)
}

func QPdfWriter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfWriter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfWriter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfWriter) AddFileAttachment3(fileName string, data []byte, mimeType string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	C.QPdfWriter_AddFileAttachment3(this.h, fileName_ms, data_alias, mimeType_ms)
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

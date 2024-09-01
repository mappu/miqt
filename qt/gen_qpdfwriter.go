package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QPdfWriter_new(filename_Cstring, C.ulong(len(filename)))
	return newQPdfWriter(ret)
}

// NewQPdfWriter2 constructs a new QPdfWriter object.
func NewQPdfWriter2(device *QIODevice) *QPdfWriter {
	ret := C.QPdfWriter_new2(device.cPointer())
	return newQPdfWriter(ret)
}

func (this *QPdfWriter) MetaObject() *QMetaObject {
	ret := C.QPdfWriter_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPdfWriter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPdfWriter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPdfWriter) SetPdfVersion(version uintptr) {
	C.QPdfWriter_SetPdfVersion(this.h, (C.uintptr_t)(version))
}

func (this *QPdfWriter) PdfVersion() uintptr {
	ret := C.QPdfWriter_PdfVersion(this.h)
	return (uintptr)(ret)
}

func (this *QPdfWriter) Title() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_Title(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPdfWriter) SetTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QPdfWriter_SetTitle(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QPdfWriter) Creator() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_Creator(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPdfWriter) SetCreator(creator string) {
	creator_Cstring := C.CString(creator)
	defer C.free(unsafe.Pointer(creator_Cstring))
	C.QPdfWriter_SetCreator(this.h, creator_Cstring, C.ulong(len(creator)))
}

func (this *QPdfWriter) NewPage() bool {
	ret := C.QPdfWriter_NewPage(this.h)
	return (bool)(ret)
}

func (this *QPdfWriter) SetResolution(resolution int) {
	C.QPdfWriter_SetResolution(this.h, (C.int)(resolution))
}

func (this *QPdfWriter) Resolution() int {
	ret := C.QPdfWriter_Resolution(this.h)
	return (int)(ret)
}

func (this *QPdfWriter) SetDocumentXmpMetadata(xmpMetadata *QByteArray) {
	C.QPdfWriter_SetDocumentXmpMetadata(this.h, xmpMetadata.cPointer())
}

func (this *QPdfWriter) DocumentXmpMetadata() *QByteArray {
	ret := C.QPdfWriter_DocumentXmpMetadata(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPdfWriter) AddFileAttachment(fileName string, data *QByteArray) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	C.QPdfWriter_AddFileAttachment(this.h, fileName_Cstring, C.ulong(len(fileName)), data.cPointer())
}

func (this *QPdfWriter) SetPageSize(size uintptr) {
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPdfWriter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPdfWriter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPdfWriter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPdfWriter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPdfWriter) AddFileAttachment3(fileName string, data *QByteArray, mimeType string) {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	mimeType_Cstring := C.CString(mimeType)
	defer C.free(unsafe.Pointer(mimeType_Cstring))
	C.QPdfWriter_AddFileAttachment3(this.h, fileName_Cstring, C.ulong(len(fileName)), data.cPointer(), mimeType_Cstring, C.ulong(len(mimeType)))
}

func (this *QPdfWriter) Delete() {
	C.QPdfWriter_Delete(this.h)
}

package qt

/*

#include "gen_qmimedata.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMimeData struct {
	h *C.QMimeData
	*QObject
}

func (this *QMimeData) cPointer() *C.QMimeData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMimeData(h *C.QMimeData) *QMimeData {
	if h == nil {
		return nil
	}
	return &QMimeData{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQMimeData_U(h unsafe.Pointer) *QMimeData {
	return newQMimeData((*C.QMimeData)(h))
}

// NewQMimeData constructs a new QMimeData object.
func NewQMimeData() *QMimeData {
	ret := C.QMimeData_new()
	return newQMimeData(ret)
}

func (this *QMimeData) MetaObject() *QMetaObject {
	ret := C.QMimeData_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMimeData_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMimeData_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeData) Urls() []QUrl {
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QMimeData_Urls(this.h, &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeData) SetUrls(urls []QUrl) {
	// For the C ABI, malloc a C array of raw pointers
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.ulong(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	C.QMimeData_SetUrls(this.h, &urls_CArray[0], C.ulong(len(urls)))
}

func (this *QMimeData) HasUrls() bool {
	ret := C.QMimeData_HasUrls(this.h)
	return (bool)(ret)
}

func (this *QMimeData) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeData) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QMimeData_SetText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QMimeData) HasText() bool {
	ret := C.QMimeData_HasText(this.h)
	return (bool)(ret)
}

func (this *QMimeData) Html() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_Html(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeData) SetHtml(html string) {
	html_Cstring := C.CString(html)
	defer C.free(unsafe.Pointer(html_Cstring))
	C.QMimeData_SetHtml(this.h, html_Cstring, C.ulong(len(html)))
}

func (this *QMimeData) HasHtml() bool {
	ret := C.QMimeData_HasHtml(this.h)
	return (bool)(ret)
}

func (this *QMimeData) ImageData() *QVariant {
	ret := C.QMimeData_ImageData(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeData) SetImageData(image *QVariant) {
	C.QMimeData_SetImageData(this.h, image.cPointer())
}

func (this *QMimeData) HasImage() bool {
	ret := C.QMimeData_HasImage(this.h)
	return (bool)(ret)
}

func (this *QMimeData) ColorData() *QVariant {
	ret := C.QMimeData_ColorData(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeData) SetColorData(color *QVariant) {
	C.QMimeData_SetColorData(this.h, color.cPointer())
}

func (this *QMimeData) HasColor() bool {
	ret := C.QMimeData_HasColor(this.h)
	return (bool)(ret)
}

func (this *QMimeData) Data(mimetype string) *QByteArray {
	mimetype_Cstring := C.CString(mimetype)
	defer C.free(unsafe.Pointer(mimetype_Cstring))
	ret := C.QMimeData_Data(this.h, mimetype_Cstring, C.ulong(len(mimetype)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMimeData) SetData(mimetype string, data *QByteArray) {
	mimetype_Cstring := C.CString(mimetype)
	defer C.free(unsafe.Pointer(mimetype_Cstring))
	C.QMimeData_SetData(this.h, mimetype_Cstring, C.ulong(len(mimetype)), data.cPointer())
}

func (this *QMimeData) RemoveFormat(mimetype string) {
	mimetype_Cstring := C.CString(mimetype)
	defer C.free(unsafe.Pointer(mimetype_Cstring))
	C.QMimeData_RemoveFormat(this.h, mimetype_Cstring, C.ulong(len(mimetype)))
}

func (this *QMimeData) HasFormat(mimetype string) bool {
	mimetype_Cstring := C.CString(mimetype)
	defer C.free(unsafe.Pointer(mimetype_Cstring))
	ret := C.QMimeData_HasFormat(this.h, mimetype_Cstring, C.ulong(len(mimetype)))
	return (bool)(ret)
}

func (this *QMimeData) Formats() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QMimeData_Formats(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeData) Clear() {
	C.QMimeData_Clear(this.h)
}

func QMimeData_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMimeData_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMimeData_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMimeData_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMimeData_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMimeData) Delete() {
	C.QMimeData_Delete(this.h)
}

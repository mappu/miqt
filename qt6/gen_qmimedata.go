package qt6

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

func (this *QMimeData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMimeData(h *C.QMimeData) *QMimeData {
	if h == nil {
		return nil
	}
	return &QMimeData{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQMimeData(h unsafe.Pointer) *QMimeData {
	return newQMimeData((*C.QMimeData)(h))
}

// NewQMimeData constructs a new QMimeData object.
func NewQMimeData() *QMimeData {
	ret := C.QMimeData_new()
	return newQMimeData(ret)
}

func (this *QMimeData) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QMimeData_MetaObject(this.h)))
}

func (this *QMimeData) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMimeData_Metacast(this.h, param1_Cstring))
}

func QMimeData_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMimeData_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeData) Urls() []QUrl {
	var _ma *C.struct_miqt_array = C.QMimeData_Urls(this.h)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeData) SetUrls(urls []QUrl) {
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	urls_ma := &C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(urls_ma))
	C.QMimeData_SetUrls(this.h, urls_ma)
}

func (this *QMimeData) HasUrls() bool {
	return (bool)(C.QMimeData_HasUrls(this.h))
}

func (this *QMimeData) Text() string {
	var _ms C.struct_miqt_string = C.QMimeData_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeData) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QMimeData_SetText(this.h, text_ms)
}

func (this *QMimeData) HasText() bool {
	return (bool)(C.QMimeData_HasText(this.h))
}

func (this *QMimeData) Html() string {
	var _ms C.struct_miqt_string = C.QMimeData_Html(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeData) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QMimeData_SetHtml(this.h, html_ms)
}

func (this *QMimeData) HasHtml() bool {
	return (bool)(C.QMimeData_HasHtml(this.h))
}

func (this *QMimeData) ImageData() *QVariant {
	_ret := C.QMimeData_ImageData(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeData) SetImageData(image *QVariant) {
	C.QMimeData_SetImageData(this.h, image.cPointer())
}

func (this *QMimeData) HasImage() bool {
	return (bool)(C.QMimeData_HasImage(this.h))
}

func (this *QMimeData) ColorData() *QVariant {
	_ret := C.QMimeData_ColorData(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeData) SetColorData(color *QVariant) {
	C.QMimeData_SetColorData(this.h, color.cPointer())
}

func (this *QMimeData) HasColor() bool {
	return (bool)(C.QMimeData_HasColor(this.h))
}

func (this *QMimeData) Data(mimetype string) []byte {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	var _bytearray C.struct_miqt_string = C.QMimeData_Data(this.h, mimetype_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMimeData) SetData(mimetype string, data []byte) {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QMimeData_SetData(this.h, mimetype_ms, data_alias)
}

func (this *QMimeData) RemoveFormat(mimetype string) {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	C.QMimeData_RemoveFormat(this.h, mimetype_ms)
}

func (this *QMimeData) HasFormat(mimetype string) bool {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	return (bool)(C.QMimeData_HasFormat(this.h, mimetype_ms))
}

func (this *QMimeData) Formats() []string {
	var _ma *C.struct_miqt_array = C.QMimeData_Formats(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QMimeData) Clear() {
	C.QMimeData_Clear(this.h)
}

func QMimeData_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMimeData_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMimeData_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMimeData_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMimeData) Delete() {
	C.QMimeData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMimeData) GoGC() {
	runtime.SetFinalizer(this, func(this *QMimeData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

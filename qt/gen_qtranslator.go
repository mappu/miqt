package qt

/*

#include "gen_qtranslator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTranslator struct {
	h *C.QTranslator
	*QObject
}

func (this *QTranslator) cPointer() *C.QTranslator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTranslator(h *C.QTranslator) *QTranslator {
	if h == nil {
		return nil
	}
	return &QTranslator{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQTranslator_U(h unsafe.Pointer) *QTranslator {
	return newQTranslator((*C.QTranslator)(h))
}

// NewQTranslator constructs a new QTranslator object.
func NewQTranslator() *QTranslator {
	ret := C.QTranslator_new()
	return newQTranslator(ret)
}

// NewQTranslator2 constructs a new QTranslator object.
func NewQTranslator2(parent *QObject) *QTranslator {
	ret := C.QTranslator_new2(parent.cPointer())
	return newQTranslator(ret)
}

func (this *QTranslator) MetaObject() *QMetaObject {
	_ret := C.QTranslator_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QTranslator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTranslator_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTranslator) Translate(context string, sourceText string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_Translate(this.h, context_Cstring, sourceText_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTranslator) IsEmpty() bool {
	_ret := C.QTranslator_IsEmpty(this.h)
	return (bool)(_ret)
}

func (this *QTranslator) Language() string {
	var _ms *C.struct_miqt_string = C.QTranslator_Language(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTranslator) FilePath() string {
	var _ms *C.struct_miqt_string = C.QTranslator_FilePath(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTranslator) Load(filename string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	_ret := C.QTranslator_Load(this.h, (*C.struct_miqt_string)(filename_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load2(locale *QLocale, filename string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	_ret := C.QTranslator_Load2(this.h, locale.cPointer(), (*C.struct_miqt_string)(filename_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load3(data *byte, lenVal int) bool {
	_ret := C.QTranslator_Load3(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.int)(lenVal))
	return (bool)(_ret)
}

func QTranslator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTranslator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTranslator_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTranslator_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTranslator) Translate3(context string, sourceText string, disambiguation string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_Translate3(this.h, context_Cstring, sourceText_Cstring, disambiguation_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTranslator) Translate4(context string, sourceText string, disambiguation string, n int) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _ms *C.struct_miqt_string = C.QTranslator_Translate4(this.h, context_Cstring, sourceText_Cstring, disambiguation_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTranslator) Load22(filename string, directory string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	directory_ms := miqt_strdupg(directory)
	defer C.free(directory_ms)
	_ret := C.QTranslator_Load22(this.h, (*C.struct_miqt_string)(filename_ms), (*C.struct_miqt_string)(directory_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load32(filename string, directory string, search_delimiters string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	directory_ms := miqt_strdupg(directory)
	defer C.free(directory_ms)
	search_delimiters_ms := miqt_strdupg(search_delimiters)
	defer C.free(search_delimiters_ms)
	_ret := C.QTranslator_Load32(this.h, (*C.struct_miqt_string)(filename_ms), (*C.struct_miqt_string)(directory_ms), (*C.struct_miqt_string)(search_delimiters_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load4(filename string, directory string, search_delimiters string, suffix string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	directory_ms := miqt_strdupg(directory)
	defer C.free(directory_ms)
	search_delimiters_ms := miqt_strdupg(search_delimiters)
	defer C.free(search_delimiters_ms)
	suffix_ms := miqt_strdupg(suffix)
	defer C.free(suffix_ms)
	_ret := C.QTranslator_Load4(this.h, (*C.struct_miqt_string)(filename_ms), (*C.struct_miqt_string)(directory_ms), (*C.struct_miqt_string)(search_delimiters_ms), (*C.struct_miqt_string)(suffix_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load33(locale *QLocale, filename string, prefix string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	_ret := C.QTranslator_Load33(this.h, locale.cPointer(), (*C.struct_miqt_string)(filename_ms), (*C.struct_miqt_string)(prefix_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load42(locale *QLocale, filename string, prefix string, directory string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	directory_ms := miqt_strdupg(directory)
	defer C.free(directory_ms)
	_ret := C.QTranslator_Load42(this.h, locale.cPointer(), (*C.struct_miqt_string)(filename_ms), (*C.struct_miqt_string)(prefix_ms), (*C.struct_miqt_string)(directory_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load5(locale *QLocale, filename string, prefix string, directory string, suffix string) bool {
	filename_ms := miqt_strdupg(filename)
	defer C.free(filename_ms)
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	directory_ms := miqt_strdupg(directory)
	defer C.free(directory_ms)
	suffix_ms := miqt_strdupg(suffix)
	defer C.free(suffix_ms)
	_ret := C.QTranslator_Load5(this.h, locale.cPointer(), (*C.struct_miqt_string)(filename_ms), (*C.struct_miqt_string)(prefix_ms), (*C.struct_miqt_string)(directory_ms), (*C.struct_miqt_string)(suffix_ms))
	return (bool)(_ret)
}

func (this *QTranslator) Load34(data *byte, lenVal int, directory string) bool {
	directory_ms := miqt_strdupg(directory)
	defer C.free(directory_ms)
	_ret := C.QTranslator_Load34(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.int)(lenVal), (*C.struct_miqt_string)(directory_ms))
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QTranslator) Delete() {
	C.QTranslator_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTranslator) GoGC() {
	runtime.SetFinalizer(this, func(this *QTranslator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

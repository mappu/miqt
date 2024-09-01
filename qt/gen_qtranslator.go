package qt

/*

#include "gen_qtranslator.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QTranslator_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTranslator_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTranslator_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTranslator) Translate(context string, sourceText string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_Translate(this.h, context_Cstring, sourceText_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTranslator) IsEmpty() bool {
	ret := C.QTranslator_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QTranslator) Language() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_Language(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTranslator) FilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_FilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTranslator) Load(filename string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QTranslator_Load(this.h, filename_Cstring, C.size_t(len(filename)))
	return (bool)(ret)
}

func (this *QTranslator) Load2(locale *QLocale, filename string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	ret := C.QTranslator_Load2(this.h, locale.cPointer(), filename_Cstring, C.size_t(len(filename)))
	return (bool)(ret)
}

func (this *QTranslator) Load3(data *byte, lenVal int) bool {
	ret := C.QTranslator_Load3(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.int)(lenVal))
	return (bool)(ret)
}

func QTranslator_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTranslator_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTranslator_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTranslator_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTranslator) Translate3(context string, sourceText string, disambiguation string) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_Translate3(this.h, context_Cstring, sourceText_Cstring, disambiguation_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTranslator) Translate4(context string, sourceText string, disambiguation string, n int) string {
	context_Cstring := C.CString(context)
	defer C.free(unsafe.Pointer(context_Cstring))
	sourceText_Cstring := C.CString(sourceText)
	defer C.free(unsafe.Pointer(sourceText_Cstring))
	disambiguation_Cstring := C.CString(disambiguation)
	defer C.free(unsafe.Pointer(disambiguation_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTranslator_Translate4(this.h, context_Cstring, sourceText_Cstring, disambiguation_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTranslator) Load22(filename string, directory string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	ret := C.QTranslator_Load22(this.h, filename_Cstring, C.size_t(len(filename)), directory_Cstring, C.size_t(len(directory)))
	return (bool)(ret)
}

func (this *QTranslator) Load32(filename string, directory string, search_delimiters string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	search_delimiters_Cstring := C.CString(search_delimiters)
	defer C.free(unsafe.Pointer(search_delimiters_Cstring))
	ret := C.QTranslator_Load32(this.h, filename_Cstring, C.size_t(len(filename)), directory_Cstring, C.size_t(len(directory)), search_delimiters_Cstring, C.size_t(len(search_delimiters)))
	return (bool)(ret)
}

func (this *QTranslator) Load4(filename string, directory string, search_delimiters string, suffix string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	search_delimiters_Cstring := C.CString(search_delimiters)
	defer C.free(unsafe.Pointer(search_delimiters_Cstring))
	suffix_Cstring := C.CString(suffix)
	defer C.free(unsafe.Pointer(suffix_Cstring))
	ret := C.QTranslator_Load4(this.h, filename_Cstring, C.size_t(len(filename)), directory_Cstring, C.size_t(len(directory)), search_delimiters_Cstring, C.size_t(len(search_delimiters)), suffix_Cstring, C.size_t(len(suffix)))
	return (bool)(ret)
}

func (this *QTranslator) Load33(locale *QLocale, filename string, prefix string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	ret := C.QTranslator_Load33(this.h, locale.cPointer(), filename_Cstring, C.size_t(len(filename)), prefix_Cstring, C.size_t(len(prefix)))
	return (bool)(ret)
}

func (this *QTranslator) Load42(locale *QLocale, filename string, prefix string, directory string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	ret := C.QTranslator_Load42(this.h, locale.cPointer(), filename_Cstring, C.size_t(len(filename)), prefix_Cstring, C.size_t(len(prefix)), directory_Cstring, C.size_t(len(directory)))
	return (bool)(ret)
}

func (this *QTranslator) Load5(locale *QLocale, filename string, prefix string, directory string, suffix string) bool {
	filename_Cstring := C.CString(filename)
	defer C.free(unsafe.Pointer(filename_Cstring))
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	suffix_Cstring := C.CString(suffix)
	defer C.free(unsafe.Pointer(suffix_Cstring))
	ret := C.QTranslator_Load5(this.h, locale.cPointer(), filename_Cstring, C.size_t(len(filename)), prefix_Cstring, C.size_t(len(prefix)), directory_Cstring, C.size_t(len(directory)), suffix_Cstring, C.size_t(len(suffix)))
	return (bool)(ret)
}

func (this *QTranslator) Load34(data *byte, lenVal int, directory string) bool {
	directory_Cstring := C.CString(directory)
	defer C.free(unsafe.Pointer(directory_Cstring))
	ret := C.QTranslator_Load34(this.h, (*C.uchar)(unsafe.Pointer(data)), (C.int)(lenVal), directory_Cstring, C.size_t(len(directory)))
	return (bool)(ret)
}

func (this *QTranslator) Delete() {
	C.QTranslator_Delete(this.h)
}

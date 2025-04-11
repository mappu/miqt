package qt

/*

#include "gen_qtextdocumentfragment.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextDocumentFragment struct {
	h *C.QTextDocumentFragment
}

func (this *QTextDocumentFragment) cPointer() *C.QTextDocumentFragment {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextDocumentFragment) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextDocumentFragment constructs the type using only CGO pointers.
func newQTextDocumentFragment(h *C.QTextDocumentFragment) *QTextDocumentFragment {
	if h == nil {
		return nil
	}

	return &QTextDocumentFragment{h: h}
}

// UnsafeNewQTextDocumentFragment constructs the type using only unsafe pointers.
func UnsafeNewQTextDocumentFragment(h unsafe.Pointer) *QTextDocumentFragment {
	return newQTextDocumentFragment((*C.QTextDocumentFragment)(h))
}

// NewQTextDocumentFragment constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment() *QTextDocumentFragment {

	return newQTextDocumentFragment(C.QTextDocumentFragment_new())
}

// NewQTextDocumentFragment2 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment2(document *QTextDocument) *QTextDocumentFragment {

	return newQTextDocumentFragment(C.QTextDocumentFragment_new2(document.cPointer()))
}

// NewQTextDocumentFragment3 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment3(rangeVal *QTextCursor) *QTextDocumentFragment {

	return newQTextDocumentFragment(C.QTextDocumentFragment_new3(rangeVal.cPointer()))
}

// NewQTextDocumentFragment4 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment4(rhs *QTextDocumentFragment) *QTextDocumentFragment {

	return newQTextDocumentFragment(C.QTextDocumentFragment_new4(rhs.cPointer()))
}

func (this *QTextDocumentFragment) OperatorAssign(rhs *QTextDocumentFragment) {
	C.QTextDocumentFragment_operatorAssign(this.h, rhs.cPointer())
}

func (this *QTextDocumentFragment) IsEmpty() bool {
	return (bool)(C.QTextDocumentFragment_isEmpty(this.h))
}

func (this *QTextDocumentFragment) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_toPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocumentFragment) ToHtml() string {
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_toHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextDocumentFragment_FromPlainText(plainText string) *QTextDocumentFragment {
	plainText_ms := C.struct_miqt_string{}
	plainText_ms.data = C.CString(plainText)
	plainText_ms.len = C.size_t(len(plainText))
	defer C.free(unsafe.Pointer(plainText_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_fromPlainText(plainText_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextDocumentFragment_FromHtml(html string) *QTextDocumentFragment {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_fromHtml(html_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextDocumentFragment_FromHtml2(html string, resourceProvider *QTextDocument) *QTextDocumentFragment {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_fromHtml2(html_ms, resourceProvider.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocumentFragment) ToHtmlWithEncoding(encoding []byte) string {
	encoding_alias := C.struct_miqt_string{}
	if len(encoding) > 0 {
		encoding_alias.data = (*C.char)(unsafe.Pointer(&encoding[0]))
	} else {
		encoding_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	encoding_alias.len = C.size_t(len(encoding))
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_toHtmlWithEncoding(this.h, encoding_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTextDocumentFragment) Delete() {
	C.QTextDocumentFragment_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextDocumentFragment) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextDocumentFragment) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

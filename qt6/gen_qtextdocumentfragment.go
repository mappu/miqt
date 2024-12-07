package qt6

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
	h          *C.QTextDocumentFragment
	isSubclass bool
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

	ret := newQTextDocumentFragment(C.QTextDocumentFragment_new())
	ret.isSubclass = true
	return ret
}

// NewQTextDocumentFragment2 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment2(document *QTextDocument) *QTextDocumentFragment {

	ret := newQTextDocumentFragment(C.QTextDocumentFragment_new2(document.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQTextDocumentFragment3 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment3(rangeVal *QTextCursor) *QTextDocumentFragment {

	ret := newQTextDocumentFragment(C.QTextDocumentFragment_new3(rangeVal.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQTextDocumentFragment4 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment4(rhs *QTextDocumentFragment) *QTextDocumentFragment {

	ret := newQTextDocumentFragment(C.QTextDocumentFragment_new4(rhs.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QTextDocumentFragment) OperatorAssign(rhs *QTextDocumentFragment) {
	C.QTextDocumentFragment_OperatorAssign(this.h, rhs.cPointer())
}

func (this *QTextDocumentFragment) IsEmpty() bool {
	return (bool)(C.QTextDocumentFragment_IsEmpty(this.h))
}

func (this *QTextDocumentFragment) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_ToPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocumentFragment) ToRawText() string {
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_ToRawText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocumentFragment) ToHtml() string {
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_ToHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocumentFragment) ToMarkdown() string {
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_ToMarkdown(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextDocumentFragment_FromPlainText(plainText string) *QTextDocumentFragment {
	plainText_ms := C.struct_miqt_string{}
	plainText_ms.data = C.CString(plainText)
	plainText_ms.len = C.size_t(len(plainText))
	defer C.free(unsafe.Pointer(plainText_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_FromPlainText(plainText_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextDocumentFragment_FromHtml(html string) *QTextDocumentFragment {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_FromHtml(html_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextDocumentFragment_FromMarkdown(markdown string) *QTextDocumentFragment {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_FromMarkdown(markdown_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocumentFragment) ToMarkdown1(features QTextDocument__MarkdownFeature) string {
	var _ms C.struct_miqt_string = C.QTextDocumentFragment_ToMarkdown1(this.h, (C.int)(features))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextDocumentFragment_FromHtml2(html string, resourceProvider *QTextDocument) *QTextDocumentFragment {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_FromHtml2(html_ms, resourceProvider.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextDocumentFragment_FromMarkdown2(markdown string, features QTextDocument__MarkdownFeature) *QTextDocumentFragment {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	_goptr := newQTextDocumentFragment(C.QTextDocumentFragment_FromMarkdown2(markdown_ms, (C.int)(features)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QTextDocumentFragment) Delete() {
	C.QTextDocumentFragment_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextDocumentFragment) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextDocumentFragment) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

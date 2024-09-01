package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQTextDocumentFragment(h *C.QTextDocumentFragment) *QTextDocumentFragment {
	if h == nil {
		return nil
	}
	return &QTextDocumentFragment{h: h}
}

func newQTextDocumentFragment_U(h unsafe.Pointer) *QTextDocumentFragment {
	return newQTextDocumentFragment((*C.QTextDocumentFragment)(h))
}

// NewQTextDocumentFragment constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment() *QTextDocumentFragment {
	ret := C.QTextDocumentFragment_new()
	return newQTextDocumentFragment(ret)
}

// NewQTextDocumentFragment2 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment2(document *QTextDocument) *QTextDocumentFragment {
	ret := C.QTextDocumentFragment_new2(document.cPointer())
	return newQTextDocumentFragment(ret)
}

// NewQTextDocumentFragment3 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment3(rangeVal *QTextCursor) *QTextDocumentFragment {
	ret := C.QTextDocumentFragment_new3(rangeVal.cPointer())
	return newQTextDocumentFragment(ret)
}

// NewQTextDocumentFragment4 constructs a new QTextDocumentFragment object.
func NewQTextDocumentFragment4(rhs *QTextDocumentFragment) *QTextDocumentFragment {
	ret := C.QTextDocumentFragment_new4(rhs.cPointer())
	return newQTextDocumentFragment(ret)
}

func (this *QTextDocumentFragment) OperatorAssign(rhs *QTextDocumentFragment) {
	C.QTextDocumentFragment_OperatorAssign(this.h, rhs.cPointer())
}

func (this *QTextDocumentFragment) IsEmpty() bool {
	ret := C.QTextDocumentFragment_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QTextDocumentFragment) ToPlainText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocumentFragment_ToPlainText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocumentFragment) ToHtml() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocumentFragment_ToHtml(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextDocumentFragment_FromPlainText(plainText string) *QTextDocumentFragment {
	plainText_Cstring := C.CString(plainText)
	defer C.free(unsafe.Pointer(plainText_Cstring))
	ret := C.QTextDocumentFragment_FromPlainText(plainText_Cstring, C.ulong(len(plainText)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextDocumentFragment(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextDocumentFragment) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTextDocumentFragment_FromHtml(html string) *QTextDocumentFragment {
	html_Cstring := C.CString(html)
	defer C.free(unsafe.Pointer(html_Cstring))
	ret := C.QTextDocumentFragment_FromHtml(html_Cstring, C.ulong(len(html)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextDocumentFragment(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextDocumentFragment) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTextDocumentFragment_FromHtml2(html string, resourceProvider *QTextDocument) *QTextDocumentFragment {
	html_Cstring := C.CString(html)
	defer C.free(unsafe.Pointer(html_Cstring))
	ret := C.QTextDocumentFragment_FromHtml2(html_Cstring, C.ulong(len(html)), resourceProvider.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextDocumentFragment(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextDocumentFragment) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocumentFragment) ToHtml1(encoding *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocumentFragment_ToHtml1(this.h, encoding.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocumentFragment) Delete() {
	C.QTextDocumentFragment_Delete(this.h)
}

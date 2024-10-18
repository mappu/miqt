package qt

/*

#include "gen_qsyntaxhighlighter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSyntaxHighlighter struct {
	h *C.QSyntaxHighlighter
	*QObject
}

func (this *QSyntaxHighlighter) cPointer() *C.QSyntaxHighlighter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSyntaxHighlighter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSyntaxHighlighter(h *C.QSyntaxHighlighter) *QSyntaxHighlighter {
	if h == nil {
		return nil
	}
	return &QSyntaxHighlighter{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQSyntaxHighlighter(h unsafe.Pointer) *QSyntaxHighlighter {
	return newQSyntaxHighlighter((*C.QSyntaxHighlighter)(h))
}

func (this *QSyntaxHighlighter) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSyntaxHighlighter_MetaObject(this.h)))
}

func (this *QSyntaxHighlighter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSyntaxHighlighter_Metacast(this.h, param1_Cstring))
}

func QSyntaxHighlighter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSyntaxHighlighter) SetDocument(doc *QTextDocument) {
	C.QSyntaxHighlighter_SetDocument(this.h, doc.cPointer())
}

func (this *QSyntaxHighlighter) Document() *QTextDocument {
	return UnsafeNewQTextDocument(unsafe.Pointer(C.QSyntaxHighlighter_Document(this.h)))
}

func (this *QSyntaxHighlighter) Rehighlight() {
	C.QSyntaxHighlighter_Rehighlight(this.h)
}

func (this *QSyntaxHighlighter) RehighlightBlock(block *QTextBlock) {
	C.QSyntaxHighlighter_RehighlightBlock(this.h, block.cPointer())
}

func QSyntaxHighlighter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSyntaxHighlighter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSyntaxHighlighter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSyntaxHighlighter) Delete() {
	C.QSyntaxHighlighter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSyntaxHighlighter) GoGC() {
	runtime.SetFinalizer(this, func(this *QSyntaxHighlighter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

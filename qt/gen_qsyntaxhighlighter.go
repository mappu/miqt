package qt

/*

#include "gen_qsyntaxhighlighter.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQSyntaxHighlighter(h *C.QSyntaxHighlighter) *QSyntaxHighlighter {
	if h == nil {
		return nil
	}
	return &QSyntaxHighlighter{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSyntaxHighlighter_U(h unsafe.Pointer) *QSyntaxHighlighter {
	return newQSyntaxHighlighter((*C.QSyntaxHighlighter)(h))
}

func (this *QSyntaxHighlighter) MetaObject() *QMetaObject {
	ret := C.QSyntaxHighlighter_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSyntaxHighlighter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSyntaxHighlighter_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSyntaxHighlighter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSyntaxHighlighter_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSyntaxHighlighter) SetDocument(doc *QTextDocument) {
	C.QSyntaxHighlighter_SetDocument(this.h, doc.cPointer())
}

func (this *QSyntaxHighlighter) Document() *QTextDocument {
	ret := C.QSyntaxHighlighter_Document(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSyntaxHighlighter_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSyntaxHighlighter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSyntaxHighlighter_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSyntaxHighlighter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSyntaxHighlighter_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSyntaxHighlighter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSyntaxHighlighter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSyntaxHighlighter) Delete() {
	C.QSyntaxHighlighter_Delete(this.h)
}

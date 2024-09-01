package qt

/*

#include "gen_qtextlist.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextList struct {
	h *C.QTextList
	*QTextBlockGroup
}

func (this *QTextList) cPointer() *C.QTextList {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextList(h *C.QTextList) *QTextList {
	if h == nil {
		return nil
	}
	return &QTextList{h: h, QTextBlockGroup: newQTextBlockGroup_U(unsafe.Pointer(h))}
}

func newQTextList_U(h unsafe.Pointer) *QTextList {
	return newQTextList((*C.QTextList)(h))
}

// NewQTextList constructs a new QTextList object.
func NewQTextList(doc *QTextDocument) *QTextList {
	ret := C.QTextList_new(doc.cPointer())
	return newQTextList(ret)
}

func (this *QTextList) MetaObject() *QMetaObject {
	ret := C.QTextList_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextList_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextList_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextList_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextList_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextList) Count() int {
	ret := C.QTextList_Count(this.h)
	return (int)(ret)
}

func (this *QTextList) IsEmpty() bool {
	ret := C.QTextList_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QTextList) Item(i int) *QTextBlock {
	ret := C.QTextList_Item(this.h, (C.int)(i))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextList) ItemNumber(param1 *QTextBlock) int {
	ret := C.QTextList_ItemNumber(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QTextList) ItemText(param1 *QTextBlock) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextList_ItemText(this.h, param1.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextList) RemoveItem(i int) {
	C.QTextList_RemoveItem(this.h, (C.int)(i))
}

func (this *QTextList) Remove(param1 *QTextBlock) {
	C.QTextList_Remove(this.h, param1.cPointer())
}

func (this *QTextList) Add(block *QTextBlock) {
	C.QTextList_Add(this.h, block.cPointer())
}

func (this *QTextList) SetFormat(format *QTextListFormat) {
	C.QTextList_SetFormat(this.h, format.cPointer())
}

func (this *QTextList) Format() *QTextListFormat {
	ret := C.QTextList_Format(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextListFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextListFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QTextList_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextList_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextList_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextList_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextList_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextList_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextList_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextList_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextList) Delete() {
	C.QTextList_Delete(this.h)
}

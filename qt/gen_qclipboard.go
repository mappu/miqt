package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qclipboard.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QClipboard struct {
	h *C.QClipboard
	*QObject
}

func (this *QClipboard) cPointer() *C.QClipboard {
	if this == nil {
		return nil
	}
	return this.h
}

func newQClipboard(h *C.QClipboard) *QClipboard {
	return &QClipboard{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQClipboard_U(h unsafe.Pointer) *QClipboard {
	return newQClipboard((*C.QClipboard)(h))
}

func (this *QClipboard) MetaObject() *QMetaObject {
	ret := C.QClipboard_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QClipboard_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QClipboard) SupportsSelection() bool {
	ret := C.QClipboard_SupportsSelection(this.h)
	return (bool)(ret)
}

func (this *QClipboard) SupportsFindBuffer() bool {
	ret := C.QClipboard_SupportsFindBuffer(this.h)
	return (bool)(ret)
}

func (this *QClipboard) OwnsSelection() bool {
	ret := C.QClipboard_OwnsSelection(this.h)
	return (bool)(ret)
}

func (this *QClipboard) OwnsClipboard() bool {
	ret := C.QClipboard_OwnsClipboard(this.h)
	return (bool)(ret)
}

func (this *QClipboard) OwnsFindBuffer() bool {
	ret := C.QClipboard_OwnsFindBuffer(this.h)
	return (bool)(ret)
}

func (this *QClipboard) SelectionChanged() {
	C.QClipboard_SelectionChanged(this.h)
}

func (this *QClipboard) OnSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QClipboard_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QClipboard) FindBufferChanged() {
	C.QClipboard_FindBufferChanged(this.h)
}

func (this *QClipboard) OnFindBufferChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QClipboard_connect_FindBufferChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QClipboard) DataChanged() {
	C.QClipboard_DataChanged(this.h)
}

func (this *QClipboard) OnDataChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QClipboard_connect_DataChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QClipboard_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QClipboard_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QClipboard_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

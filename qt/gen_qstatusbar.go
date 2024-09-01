package qt

/*

#include "gen_qstatusbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QStatusBar struct {
	h *C.QStatusBar
	*QWidget
}

func (this *QStatusBar) cPointer() *C.QStatusBar {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStatusBar(h *C.QStatusBar) *QStatusBar {
	if h == nil {
		return nil
	}
	return &QStatusBar{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQStatusBar_U(h unsafe.Pointer) *QStatusBar {
	return newQStatusBar((*C.QStatusBar)(h))
}

// NewQStatusBar constructs a new QStatusBar object.
func NewQStatusBar() *QStatusBar {
	ret := C.QStatusBar_new()
	return newQStatusBar(ret)
}

// NewQStatusBar2 constructs a new QStatusBar object.
func NewQStatusBar2(parent *QWidget) *QStatusBar {
	ret := C.QStatusBar_new2(parent.cPointer())
	return newQStatusBar(ret)
}

func (this *QStatusBar) MetaObject() *QMetaObject {
	ret := C.QStatusBar_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QStatusBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusBar_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStatusBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusBar_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStatusBar) AddWidget(widget *QWidget) {
	C.QStatusBar_AddWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) InsertWidget(index int, widget *QWidget) int {
	ret := C.QStatusBar_InsertWidget(this.h, (C.int)(index), widget.cPointer())
	return (int)(ret)
}

func (this *QStatusBar) AddPermanentWidget(widget *QWidget) {
	C.QStatusBar_AddPermanentWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) InsertPermanentWidget(index int, widget *QWidget) int {
	ret := C.QStatusBar_InsertPermanentWidget(this.h, (C.int)(index), widget.cPointer())
	return (int)(ret)
}

func (this *QStatusBar) RemoveWidget(widget *QWidget) {
	C.QStatusBar_RemoveWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QStatusBar_SetSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QStatusBar) IsSizeGripEnabled() bool {
	ret := C.QStatusBar_IsSizeGripEnabled(this.h)
	return (bool)(ret)
}

func (this *QStatusBar) CurrentMessage() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusBar_CurrentMessage(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStatusBar) ShowMessage(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStatusBar_ShowMessage(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QStatusBar) ClearMessage() {
	C.QStatusBar_ClearMessage(this.h)
}

func (this *QStatusBar) MessageChanged(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStatusBar_MessageChanged(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QStatusBar) OnMessageChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStatusBar_connect_MessageChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QStatusBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusBar_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStatusBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusBar_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStatusBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusBar_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStatusBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStatusBar) AddWidget2(widget *QWidget, stretch int) {
	C.QStatusBar_AddWidget2(this.h, widget.cPointer(), (C.int)(stretch))
}

func (this *QStatusBar) InsertWidget3(index int, widget *QWidget, stretch int) int {
	ret := C.QStatusBar_InsertWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch))
	return (int)(ret)
}

func (this *QStatusBar) AddPermanentWidget2(widget *QWidget, stretch int) {
	C.QStatusBar_AddPermanentWidget2(this.h, widget.cPointer(), (C.int)(stretch))
}

func (this *QStatusBar) InsertPermanentWidget3(index int, widget *QWidget, stretch int) int {
	ret := C.QStatusBar_InsertPermanentWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch))
	return (int)(ret)
}

func (this *QStatusBar) ShowMessage2(text string, timeout int) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStatusBar_ShowMessage2(this.h, text_Cstring, C.ulong(len(text)), (C.int)(timeout))
}

func (this *QStatusBar) Delete() {
	C.QStatusBar_Delete(this.h)
}

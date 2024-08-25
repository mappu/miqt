package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtoolbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QToolBox struct {
	h *C.QToolBox
	*QFrame
}

func (this *QToolBox) cPointer() *C.QToolBox {
	if this == nil {
		return nil
	}
	return this.h
}

func newQToolBox(h *C.QToolBox) *QToolBox {
	return &QToolBox{h: h, QFrame: newQFrame_U(unsafe.Pointer(h))}
}

func newQToolBox_U(h unsafe.Pointer) *QToolBox {
	return newQToolBox((*C.QToolBox)(h))
}

func (this *QToolBox) MetaObject() *QMetaObject {
	ret := C.QToolBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QToolBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolBox) AddItem(widget *QWidget, text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QToolBox_AddItem(this.h, widget.cPointer(), text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QToolBox) AddItem2(widget *QWidget, icon *QIcon, text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QToolBox_AddItem2(this.h, widget.cPointer(), icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QToolBox) InsertItem(index int, widget *QWidget, text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QToolBox_InsertItem(this.h, (C.int)(index), widget.cPointer(), text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QToolBox) InsertItem2(index int, widget *QWidget, icon *QIcon, text string) int {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QToolBox_InsertItem2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return (int)(ret)
}

func (this *QToolBox) RemoveItem(index int) {
	C.QToolBox_RemoveItem(this.h, (C.int)(index))
}

func (this *QToolBox) SetItemEnabled(index int, enabled bool) {
	C.QToolBox_SetItemEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QToolBox) IsItemEnabled(index int) bool {
	ret := C.QToolBox_IsItemEnabled(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QToolBox) SetItemText(index int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QToolBox_SetItemText(this.h, (C.int)(index), text_Cstring, C.ulong(len(text)))
}

func (this *QToolBox) ItemText(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_ItemText(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolBox) SetItemIcon(index int, icon *QIcon) {
	C.QToolBox_SetItemIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QToolBox) ItemIcon(index int) *QIcon {
	ret := C.QToolBox_ItemIcon(this.h, (C.int)(index))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QToolBox) SetItemToolTip(index int, toolTip string) {
	toolTip_Cstring := C.CString(toolTip)
	defer C.free(unsafe.Pointer(toolTip_Cstring))
	C.QToolBox_SetItemToolTip(this.h, (C.int)(index), toolTip_Cstring, C.ulong(len(toolTip)))
}

func (this *QToolBox) ItemToolTip(index int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_ItemToolTip(this.h, (C.int)(index), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolBox) CurrentIndex() int {
	ret := C.QToolBox_CurrentIndex(this.h)
	return (int)(ret)
}

func (this *QToolBox) CurrentWidget() *QWidget {
	ret := C.QToolBox_CurrentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QToolBox) Widget(index int) *QWidget {
	ret := C.QToolBox_Widget(this.h, (C.int)(index))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QToolBox) IndexOf(widget *QWidget) int {
	ret := C.QToolBox_IndexOf(this.h, widget.cPointer())
	return (int)(ret)
}

func (this *QToolBox) Count() int {
	ret := C.QToolBox_Count(this.h)
	return (int)(ret)
}

func (this *QToolBox) SetCurrentIndex(index int) {
	C.QToolBox_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QToolBox) SetCurrentWidget(widget *QWidget) {
	C.QToolBox_SetCurrentWidget(this.h, widget.cPointer())
}

func (this *QToolBox) CurrentChanged(index int) {
	C.QToolBox_CurrentChanged(this.h, (C.int)(index))
}

func (this *QToolBox) OnCurrentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolBox_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QToolBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolBox) Delete() {
	C.QToolBox_Delete(this.h)
}

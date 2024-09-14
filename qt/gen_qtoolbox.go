package qt

/*

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
	if h == nil {
		return nil
	}
	return &QToolBox{h: h, QFrame: newQFrame_U(unsafe.Pointer(h))}
}

func newQToolBox_U(h unsafe.Pointer) *QToolBox {
	return newQToolBox((*C.QToolBox)(h))
}

// NewQToolBox constructs a new QToolBox object.
func NewQToolBox() *QToolBox {
	ret := C.QToolBox_new()
	return newQToolBox(ret)
}

// NewQToolBox2 constructs a new QToolBox object.
func NewQToolBox2(parent *QWidget) *QToolBox {
	ret := C.QToolBox_new2(parent.cPointer())
	return newQToolBox(ret)
}

// NewQToolBox3 constructs a new QToolBox object.
func NewQToolBox3(parent *QWidget, f int) *QToolBox {
	ret := C.QToolBox_new3(parent.cPointer(), (C.int)(f))
	return newQToolBox(ret)
}

func (this *QToolBox) MetaObject() *QMetaObject {
	_ret := C.QToolBox_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QToolBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBox_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QToolBox) AddItem(widget *QWidget, text string) int {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QToolBox_AddItem(this.h, widget.cPointer(), (*C.struct_miqt_string)(text_ms))
	return (int)(_ret)
}

func (this *QToolBox) AddItem2(widget *QWidget, icon *QIcon, text string) int {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QToolBox_AddItem2(this.h, widget.cPointer(), icon.cPointer(), (*C.struct_miqt_string)(text_ms))
	return (int)(_ret)
}

func (this *QToolBox) InsertItem(index int, widget *QWidget, text string) int {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QToolBox_InsertItem(this.h, (C.int)(index), widget.cPointer(), (*C.struct_miqt_string)(text_ms))
	return (int)(_ret)
}

func (this *QToolBox) InsertItem2(index int, widget *QWidget, icon *QIcon, text string) int {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	_ret := C.QToolBox_InsertItem2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), (*C.struct_miqt_string)(text_ms))
	return (int)(_ret)
}

func (this *QToolBox) RemoveItem(index int) {
	C.QToolBox_RemoveItem(this.h, (C.int)(index))
}

func (this *QToolBox) SetItemEnabled(index int, enabled bool) {
	C.QToolBox_SetItemEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QToolBox) IsItemEnabled(index int) bool {
	_ret := C.QToolBox_IsItemEnabled(this.h, (C.int)(index))
	return (bool)(_ret)
}

func (this *QToolBox) SetItemText(index int, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QToolBox_SetItemText(this.h, (C.int)(index), (*C.struct_miqt_string)(text_ms))
}

func (this *QToolBox) ItemText(index int) string {
	var _ms *C.struct_miqt_string = C.QToolBox_ItemText(this.h, (C.int)(index))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QToolBox) SetItemIcon(index int, icon *QIcon) {
	C.QToolBox_SetItemIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QToolBox) ItemIcon(index int) *QIcon {
	_ret := C.QToolBox_ItemIcon(this.h, (C.int)(index))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBox) SetItemToolTip(index int, toolTip string) {
	toolTip_ms := miqt_strdupg(toolTip)
	defer C.free(toolTip_ms)
	C.QToolBox_SetItemToolTip(this.h, (C.int)(index), (*C.struct_miqt_string)(toolTip_ms))
}

func (this *QToolBox) ItemToolTip(index int) string {
	var _ms *C.struct_miqt_string = C.QToolBox_ItemToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QToolBox) CurrentIndex() int {
	_ret := C.QToolBox_CurrentIndex(this.h)
	return (int)(_ret)
}

func (this *QToolBox) CurrentWidget() *QWidget {
	_ret := C.QToolBox_CurrentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QToolBox) Widget(index int) *QWidget {
	_ret := C.QToolBox_Widget(this.h, (C.int)(index))
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QToolBox) IndexOf(widget *QWidget) int {
	_ret := C.QToolBox_IndexOf(this.h, widget.cPointer())
	return (int)(_ret)
}

func (this *QToolBox) Count() int {
	_ret := C.QToolBox_Count(this.h)
	return (int)(_ret)
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
func (this *QToolBox) OnCurrentChanged(slot func(index int)) {
	C.QToolBox_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolBox_CurrentChanged
func miqt_exec_callback_QToolBox_CurrentChanged(cb *C.void, index C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	index_ret := index
	slotval1 := (int)(index_ret)

	gofunc(slotval1)
}

func QToolBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QToolBox) Delete() {
	C.QToolBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

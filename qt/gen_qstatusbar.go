package qt

/*

#include "gen_qstatusbar.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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
	return newQMetaObject_U(unsafe.Pointer(C.QStatusBar_MetaObject(this.h)))
}

func (this *QStatusBar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QStatusBar_Metacast(this.h, param1_Cstring)
}

func QStatusBar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStatusBar_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStatusBar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStatusBar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStatusBar) AddWidget(widget *QWidget) {
	C.QStatusBar_AddWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) InsertWidget(index int, widget *QWidget) int {
	return (int)(C.QStatusBar_InsertWidget(this.h, (C.int)(index), widget.cPointer()))
}

func (this *QStatusBar) AddPermanentWidget(widget *QWidget) {
	C.QStatusBar_AddPermanentWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) InsertPermanentWidget(index int, widget *QWidget) int {
	return (int)(C.QStatusBar_InsertPermanentWidget(this.h, (C.int)(index), widget.cPointer()))
}

func (this *QStatusBar) RemoveWidget(widget *QWidget) {
	C.QStatusBar_RemoveWidget(this.h, widget.cPointer())
}

func (this *QStatusBar) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QStatusBar_SetSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QStatusBar) IsSizeGripEnabled() bool {
	return (bool)(C.QStatusBar_IsSizeGripEnabled(this.h))
}

func (this *QStatusBar) CurrentMessage() string {
	var _ms *C.struct_miqt_string = C.QStatusBar_CurrentMessage(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStatusBar) ShowMessage(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QStatusBar_ShowMessage(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QStatusBar) ClearMessage() {
	C.QStatusBar_ClearMessage(this.h)
}

func (this *QStatusBar) MessageChanged(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QStatusBar_MessageChanged(this.h, (*C.struct_miqt_string)(text_ms))
}
func (this *QStatusBar) OnMessageChanged(slot func(text string)) {
	C.QStatusBar_connect_MessageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStatusBar_MessageChanged
func miqt_exec_callback_QStatusBar_MessageChanged(cb C.intptr_t, text *C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(text string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_ms *C.struct_miqt_string = text
	text_ret := C.GoStringN(&text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms))
	slotval1 := text_ret

	gofunc(slotval1)
}

func QStatusBar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStatusBar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStatusBar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStatusBar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStatusBar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStatusBar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStatusBar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStatusBar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStatusBar) AddWidget2(widget *QWidget, stretch int) {
	C.QStatusBar_AddWidget2(this.h, widget.cPointer(), (C.int)(stretch))
}

func (this *QStatusBar) InsertWidget3(index int, widget *QWidget, stretch int) int {
	return (int)(C.QStatusBar_InsertWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch)))
}

func (this *QStatusBar) AddPermanentWidget2(widget *QWidget, stretch int) {
	C.QStatusBar_AddPermanentWidget2(this.h, widget.cPointer(), (C.int)(stretch))
}

func (this *QStatusBar) InsertPermanentWidget3(index int, widget *QWidget, stretch int) int {
	return (int)(C.QStatusBar_InsertPermanentWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch)))
}

func (this *QStatusBar) ShowMessage2(text string, timeout int) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QStatusBar_ShowMessage2(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(timeout))
}

// Delete this object from C++ memory.
func (this *QStatusBar) Delete() {
	C.QStatusBar_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStatusBar) GoGC() {
	runtime.SetFinalizer(this, func(this *QStatusBar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

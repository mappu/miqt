package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qstackedwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QStackedWidget struct {
	h *C.QStackedWidget
	*QFrame
}

func (this *QStackedWidget) cPointer() *C.QStackedWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStackedWidget(h *C.QStackedWidget) *QStackedWidget {
	if h == nil {
		return nil
	}
	return &QStackedWidget{h: h, QFrame: newQFrame_U(unsafe.Pointer(h))}
}

func newQStackedWidget_U(h unsafe.Pointer) *QStackedWidget {
	return newQStackedWidget((*C.QStackedWidget)(h))
}

// NewQStackedWidget constructs a new QStackedWidget object.
func NewQStackedWidget() *QStackedWidget {
	ret := C.QStackedWidget_new()
	return newQStackedWidget(ret)
}

// NewQStackedWidget2 constructs a new QStackedWidget object.
func NewQStackedWidget2(parent *QWidget) *QStackedWidget {
	ret := C.QStackedWidget_new2(parent.cPointer())
	return newQStackedWidget(ret)
}

func (this *QStackedWidget) MetaObject() *QMetaObject {
	ret := C.QStackedWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QStackedWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStackedWidget) AddWidget(w *QWidget) int {
	ret := C.QStackedWidget_AddWidget(this.h, w.cPointer())
	return (int)(ret)
}

func (this *QStackedWidget) InsertWidget(index int, w *QWidget) int {
	ret := C.QStackedWidget_InsertWidget(this.h, (C.int)(index), w.cPointer())
	return (int)(ret)
}

func (this *QStackedWidget) RemoveWidget(w *QWidget) {
	C.QStackedWidget_RemoveWidget(this.h, w.cPointer())
}

func (this *QStackedWidget) CurrentWidget() *QWidget {
	ret := C.QStackedWidget_CurrentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QStackedWidget) CurrentIndex() int {
	ret := C.QStackedWidget_CurrentIndex(this.h)
	return (int)(ret)
}

func (this *QStackedWidget) IndexOf(param1 *QWidget) int {
	ret := C.QStackedWidget_IndexOf(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QStackedWidget) Widget(param1 int) *QWidget {
	ret := C.QStackedWidget_Widget(this.h, (C.int)(param1))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QStackedWidget) Count() int {
	ret := C.QStackedWidget_Count(this.h)
	return (int)(ret)
}

func (this *QStackedWidget) SetCurrentIndex(index int) {
	C.QStackedWidget_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QStackedWidget) SetCurrentWidget(w *QWidget) {
	C.QStackedWidget_SetCurrentWidget(this.h, w.cPointer())
}

func (this *QStackedWidget) CurrentChanged(param1 int) {
	C.QStackedWidget_CurrentChanged(this.h, (C.int)(param1))
}

func (this *QStackedWidget) OnCurrentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStackedWidget_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStackedWidget) WidgetRemoved(index int) {
	C.QStackedWidget_WidgetRemoved(this.h, (C.int)(index))
}

func (this *QStackedWidget) OnWidgetRemoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStackedWidget_connect_WidgetRemoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QStackedWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStackedWidget) Delete() {
	C.QStackedWidget_Delete(this.h)
}

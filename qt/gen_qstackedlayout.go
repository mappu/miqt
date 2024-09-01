package qt

/*

#include "gen_qstackedlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStackedLayout struct {
	h *C.QStackedLayout
	*QLayout
}

func (this *QStackedLayout) cPointer() *C.QStackedLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStackedLayout(h *C.QStackedLayout) *QStackedLayout {
	if h == nil {
		return nil
	}
	return &QStackedLayout{h: h, QLayout: newQLayout_U(unsafe.Pointer(h))}
}

func newQStackedLayout_U(h unsafe.Pointer) *QStackedLayout {
	return newQStackedLayout((*C.QStackedLayout)(h))
}

// NewQStackedLayout constructs a new QStackedLayout object.
func NewQStackedLayout() *QStackedLayout {
	ret := C.QStackedLayout_new()
	return newQStackedLayout(ret)
}

// NewQStackedLayout2 constructs a new QStackedLayout object.
func NewQStackedLayout2(parent *QWidget) *QStackedLayout {
	ret := C.QStackedLayout_new2(parent.cPointer())
	return newQStackedLayout(ret)
}

// NewQStackedLayout3 constructs a new QStackedLayout object.
func NewQStackedLayout3(parentLayout *QLayout) *QStackedLayout {
	ret := C.QStackedLayout_new3(parentLayout.cPointer())
	return newQStackedLayout(ret)
}

func (this *QStackedLayout) MetaObject() *QMetaObject {
	ret := C.QStackedLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QStackedLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStackedLayout) AddWidget(w *QWidget) int {
	ret := C.QStackedLayout_AddWidget(this.h, w.cPointer())
	return (int)(ret)
}

func (this *QStackedLayout) InsertWidget(index int, w *QWidget) int {
	ret := C.QStackedLayout_InsertWidget(this.h, (C.int)(index), w.cPointer())
	return (int)(ret)
}

func (this *QStackedLayout) CurrentWidget() *QWidget {
	ret := C.QStackedLayout_CurrentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QStackedLayout) CurrentIndex() int {
	ret := C.QStackedLayout_CurrentIndex(this.h)
	return (int)(ret)
}

func (this *QStackedLayout) Widget(param1 int) *QWidget {
	ret := C.QStackedLayout_Widget(this.h, (C.int)(param1))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QStackedLayout) Count() int {
	ret := C.QStackedLayout_Count(this.h)
	return (int)(ret)
}

func (this *QStackedLayout) StackingMode() uintptr {
	ret := C.QStackedLayout_StackingMode(this.h)
	return (uintptr)(ret)
}

func (this *QStackedLayout) SetStackingMode(stackingMode uintptr) {
	C.QStackedLayout_SetStackingMode(this.h, (C.uintptr_t)(stackingMode))
}

func (this *QStackedLayout) AddItem(item *QLayoutItem) {
	C.QStackedLayout_AddItem(this.h, item.cPointer())
}

func (this *QStackedLayout) SizeHint() *QSize {
	ret := C.QStackedLayout_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStackedLayout) MinimumSize() *QSize {
	ret := C.QStackedLayout_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStackedLayout) ItemAt(param1 int) *QLayoutItem {
	ret := C.QStackedLayout_ItemAt(this.h, (C.int)(param1))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QStackedLayout) TakeAt(param1 int) *QLayoutItem {
	ret := C.QStackedLayout_TakeAt(this.h, (C.int)(param1))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QStackedLayout) SetGeometry(rect *QRect) {
	C.QStackedLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QStackedLayout) HasHeightForWidth() bool {
	ret := C.QStackedLayout_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QStackedLayout) HeightForWidth(width int) int {
	ret := C.QStackedLayout_HeightForWidth(this.h, (C.int)(width))
	return (int)(ret)
}

func (this *QStackedLayout) WidgetRemoved(index int) {
	C.QStackedLayout_WidgetRemoved(this.h, (C.int)(index))
}

func (this *QStackedLayout) OnWidgetRemoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStackedLayout_connect_WidgetRemoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStackedLayout) CurrentChanged(index int) {
	C.QStackedLayout_CurrentChanged(this.h, (C.int)(index))
}

func (this *QStackedLayout) OnCurrentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QStackedLayout_connect_CurrentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QStackedLayout) SetCurrentIndex(index int) {
	C.QStackedLayout_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QStackedLayout) SetCurrentWidget(w *QWidget) {
	C.QStackedLayout_SetCurrentWidget(this.h, w.cPointer())
}

func QStackedLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStackedLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStackedLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStackedLayout) Delete() {
	C.QStackedLayout_Delete(this.h)
}

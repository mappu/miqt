package qt

/*

#include "gen_qlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLayout__SizeConstraint int

const (
	QLayout__SizeConstraint__SetDefaultConstraint QLayout__SizeConstraint = 0
	QLayout__SizeConstraint__SetNoConstraint      QLayout__SizeConstraint = 1
	QLayout__SizeConstraint__SetMinimumSize       QLayout__SizeConstraint = 2
	QLayout__SizeConstraint__SetFixedSize         QLayout__SizeConstraint = 3
	QLayout__SizeConstraint__SetMaximumSize       QLayout__SizeConstraint = 4
	QLayout__SizeConstraint__SetMinAndMaxSize     QLayout__SizeConstraint = 5
)

type QLayout struct {
	h *C.QLayout
	*QObject
	*QLayoutItem
}

func (this *QLayout) cPointer() *C.QLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLayout(h *C.QLayout) *QLayout {
	if h == nil {
		return nil
	}
	return &QLayout{h: h, QObject: newQObject_U(unsafe.Pointer(h)), QLayoutItem: newQLayoutItem_U(unsafe.Pointer(h))}
}

func newQLayout_U(h unsafe.Pointer) *QLayout {
	return newQLayout((*C.QLayout)(h))
}

func (this *QLayout) MetaObject() *QMetaObject {
	ret := C.QLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLayout) Margin() int {
	ret := C.QLayout_Margin(this.h)
	return (int)(ret)
}

func (this *QLayout) SetMargin(margin int) {
	C.QLayout_SetMargin(this.h, (C.int)(margin))
}

func (this *QLayout) Spacing() int {
	ret := C.QLayout_Spacing(this.h)
	return (int)(ret)
}

func (this *QLayout) SetSpacing(spacing int) {
	C.QLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QLayout) SetContentsMargins(left int, top int, right int, bottom int) {
	C.QLayout_SetContentsMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QLayout) SetContentsMarginsWithMargins(margins *QMargins) {
	C.QLayout_SetContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QLayout) GetContentsMargins(left *int, top *int, right *int, bottom *int) {
	C.QLayout_GetContentsMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QLayout) ContentsMargins() *QMargins {
	ret := C.QLayout_ContentsMargins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMargins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMargins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) ContentsRect() *QRect {
	ret := C.QLayout_ContentsRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) SetAlignment(w *QWidget, alignment int) bool {
	ret := C.QLayout_SetAlignment(this.h, w.cPointer(), (C.int)(alignment))
	return (bool)(ret)
}

func (this *QLayout) SetAlignment2(l *QLayout, alignment int) bool {
	ret := C.QLayout_SetAlignment2(this.h, l.cPointer(), (C.int)(alignment))
	return (bool)(ret)
}

func (this *QLayout) SetSizeConstraint(sizeConstraint QLayout__SizeConstraint) {
	C.QLayout_SetSizeConstraint(this.h, (C.uintptr_t)(sizeConstraint))
}

func (this *QLayout) SizeConstraint() QLayout__SizeConstraint {
	ret := C.QLayout_SizeConstraint(this.h)
	return (QLayout__SizeConstraint)(ret)
}

func (this *QLayout) SetMenuBar(w *QWidget) {
	C.QLayout_SetMenuBar(this.h, w.cPointer())
}

func (this *QLayout) MenuBar() *QWidget {
	ret := C.QLayout_MenuBar(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QLayout) ParentWidget() *QWidget {
	ret := C.QLayout_ParentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QLayout) Invalidate() {
	C.QLayout_Invalidate(this.h)
}

func (this *QLayout) Geometry() *QRect {
	ret := C.QLayout_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) Activate() bool {
	ret := C.QLayout_Activate(this.h)
	return (bool)(ret)
}

func (this *QLayout) Update() {
	C.QLayout_Update(this.h)
}

func (this *QLayout) AddWidget(w *QWidget) {
	C.QLayout_AddWidget(this.h, w.cPointer())
}

func (this *QLayout) AddItem(param1 *QLayoutItem) {
	C.QLayout_AddItem(this.h, param1.cPointer())
}

func (this *QLayout) RemoveWidget(w *QWidget) {
	C.QLayout_RemoveWidget(this.h, w.cPointer())
}

func (this *QLayout) RemoveItem(param1 *QLayoutItem) {
	C.QLayout_RemoveItem(this.h, param1.cPointer())
}

func (this *QLayout) ExpandingDirections() int {
	ret := C.QLayout_ExpandingDirections(this.h)
	return (int)(ret)
}

func (this *QLayout) MinimumSize() *QSize {
	ret := C.QLayout_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) MaximumSize() *QSize {
	ret := C.QLayout_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) SetGeometry(geometry *QRect) {
	C.QLayout_SetGeometry(this.h, geometry.cPointer())
}

func (this *QLayout) ItemAt(index int) *QLayoutItem {
	ret := C.QLayout_ItemAt(this.h, (C.int)(index))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QLayout) TakeAt(index int) *QLayoutItem {
	ret := C.QLayout_TakeAt(this.h, (C.int)(index))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QLayout) IndexOf(param1 *QWidget) int {
	ret := C.QLayout_IndexOf(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QLayout) IndexOfWithQLayoutItem(param1 *QLayoutItem) int {
	ret := C.QLayout_IndexOfWithQLayoutItem(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QLayout) Count() int {
	ret := C.QLayout_Count(this.h)
	return (int)(ret)
}

func (this *QLayout) IsEmpty() bool {
	ret := C.QLayout_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QLayout) ControlTypes() int {
	ret := C.QLayout_ControlTypes(this.h)
	return (int)(ret)
}

func (this *QLayout) ReplaceWidget(from *QWidget, to *QWidget) *QLayoutItem {
	ret := C.QLayout_ReplaceWidget(this.h, from.cPointer(), to.cPointer())
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QLayout) TotalHeightForWidth(w int) int {
	ret := C.QLayout_TotalHeightForWidth(this.h, (C.int)(w))
	return (int)(ret)
}

func (this *QLayout) TotalMinimumSize() *QSize {
	ret := C.QLayout_TotalMinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) TotalMaximumSize() *QSize {
	ret := C.QLayout_TotalMaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) TotalSizeHint() *QSize {
	ret := C.QLayout_TotalSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLayout) Layout() *QLayout {
	ret := C.QLayout_Layout(this.h)
	return newQLayout_U(unsafe.Pointer(ret))
}

func (this *QLayout) SetEnabled(enabled bool) {
	C.QLayout_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QLayout) IsEnabled() bool {
	ret := C.QLayout_IsEnabled(this.h)
	return (bool)(ret)
}

func QLayout_ClosestAcceptableSize(w *QWidget, s *QSize) *QSize {
	ret := C.QLayout_ClosestAcceptableSize(w.cPointer(), s.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLayout) ReplaceWidget3(from *QWidget, to *QWidget, options int) *QLayoutItem {
	ret := C.QLayout_ReplaceWidget3(this.h, from.cPointer(), to.cPointer(), (C.int)(options))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QLayout) Delete() {
	C.QLayout_Delete(this.h)
}

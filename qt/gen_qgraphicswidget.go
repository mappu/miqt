package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicswidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsWidget struct {
	h *C.QGraphicsWidget
	*QGraphicsObject
	*QGraphicsLayoutItem
}

func (this *QGraphicsWidget) cPointer() *C.QGraphicsWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsWidget(h *C.QGraphicsWidget) *QGraphicsWidget {
	return &QGraphicsWidget{h: h, QGraphicsObject: newQGraphicsObject_U(unsafe.Pointer(h)), QGraphicsLayoutItem: newQGraphicsLayoutItem_U(unsafe.Pointer(h))}
}

func newQGraphicsWidget_U(h unsafe.Pointer) *QGraphicsWidget {
	return newQGraphicsWidget((*C.QGraphicsWidget)(h))
}

func (this *QGraphicsWidget) MetaObject() *QMetaObject {
	ret := C.QGraphicsWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsWidget) Layout() *QGraphicsLayout {
	ret := C.QGraphicsWidget_Layout(this.h)
	return newQGraphicsLayout_U(unsafe.Pointer(ret))
}

func (this *QGraphicsWidget) SetLayout(layout *QGraphicsLayout) {
	C.QGraphicsWidget_SetLayout(this.h, layout.cPointer())
}

func (this *QGraphicsWidget) AdjustSize() {
	C.QGraphicsWidget_AdjustSize(this.h)
}

func (this *QGraphicsWidget) UnsetLayoutDirection() {
	C.QGraphicsWidget_UnsetLayoutDirection(this.h)
}

func (this *QGraphicsWidget) Style() *QStyle {
	ret := C.QGraphicsWidget_Style(this.h)
	return newQStyle_U(unsafe.Pointer(ret))
}

func (this *QGraphicsWidget) SetStyle(style *QStyle) {
	C.QGraphicsWidget_SetStyle(this.h, style.cPointer())
}

func (this *QGraphicsWidget) Font() *QFont {
	ret := C.QGraphicsWidget_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) SetFont(font *QFont) {
	C.QGraphicsWidget_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsWidget) Palette() *QPalette {
	ret := C.QGraphicsWidget_Palette(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) SetPalette(palette *QPalette) {
	C.QGraphicsWidget_SetPalette(this.h, palette.cPointer())
}

func (this *QGraphicsWidget) AutoFillBackground() bool {
	ret := C.QGraphicsWidget_AutoFillBackground(this.h)
	return (bool)(ret)
}

func (this *QGraphicsWidget) SetAutoFillBackground(enabled bool) {
	C.QGraphicsWidget_SetAutoFillBackground(this.h, (C.bool)(enabled))
}

func (this *QGraphicsWidget) Resize(size *QSizeF) {
	C.QGraphicsWidget_Resize(this.h, size.cPointer())
}

func (this *QGraphicsWidget) Resize2(w float64, h float64) {
	C.QGraphicsWidget_Resize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsWidget) Size() *QSizeF {
	ret := C.QGraphicsWidget_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) SetGeometry(rect *QRectF) {
	C.QGraphicsWidget_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsWidget) SetGeometry2(x float64, y float64, w float64, h float64) {
	C.QGraphicsWidget_SetGeometry2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsWidget) Rect() *QRectF {
	ret := C.QGraphicsWidget_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) SetContentsMargins(left float64, top float64, right float64, bottom float64) {
	C.QGraphicsWidget_SetContentsMargins(this.h, (C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom))
}

func (this *QGraphicsWidget) SetContentsMarginsWithMargins(margins QMarginsF) {
	C.QGraphicsWidget_SetContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QGraphicsWidget) GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsWidget_GetContentsMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsWidget) SetWindowFrameMargins(left float64, top float64, right float64, bottom float64) {
	C.QGraphicsWidget_SetWindowFrameMargins(this.h, (C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom))
}

func (this *QGraphicsWidget) SetWindowFrameMarginsWithMargins(margins QMarginsF) {
	C.QGraphicsWidget_SetWindowFrameMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QGraphicsWidget) GetWindowFrameMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsWidget_GetWindowFrameMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsWidget) UnsetWindowFrameMargins() {
	C.QGraphicsWidget_UnsetWindowFrameMargins(this.h)
}

func (this *QGraphicsWidget) WindowFrameGeometry() *QRectF {
	ret := C.QGraphicsWidget_WindowFrameGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) WindowFrameRect() *QRectF {
	ret := C.QGraphicsWidget_WindowFrameRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) IsActiveWindow() bool {
	ret := C.QGraphicsWidget_IsActiveWindow(this.h)
	return (bool)(ret)
}

func (this *QGraphicsWidget) SetWindowTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QGraphicsWidget_SetWindowTitle(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QGraphicsWidget) WindowTitle() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsWidget_WindowTitle(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsWidget_SetTabOrder(first *QGraphicsWidget, second *QGraphicsWidget) {
	C.QGraphicsWidget_SetTabOrder(first.cPointer(), second.cPointer())
}

func (this *QGraphicsWidget) FocusWidget() *QGraphicsWidget {
	ret := C.QGraphicsWidget_FocusWidget(this.h)
	return newQGraphicsWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsWidget) ReleaseShortcut(id int) {
	C.QGraphicsWidget_ReleaseShortcut(this.h, (C.int)(id))
}

func (this *QGraphicsWidget) SetShortcutEnabled(id int) {
	C.QGraphicsWidget_SetShortcutEnabled(this.h, (C.int)(id))
}

func (this *QGraphicsWidget) SetShortcutAutoRepeat(id int) {
	C.QGraphicsWidget_SetShortcutAutoRepeat(this.h, (C.int)(id))
}

func (this *QGraphicsWidget) AddAction(action *QAction) {
	C.QGraphicsWidget_AddAction(this.h, action.cPointer())
}

func (this *QGraphicsWidget) AddActions(actions []*QAction) {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.ulong(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	C.QGraphicsWidget_AddActions(this.h, &actions_CArray[0], C.ulong(len(actions)))
}

func (this *QGraphicsWidget) InsertActions(before *QAction, actions []*QAction) {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.ulong(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	C.QGraphicsWidget_InsertActions(this.h, before.cPointer(), &actions_CArray[0], C.ulong(len(actions)))
}

func (this *QGraphicsWidget) InsertAction(before *QAction, action *QAction) {
	C.QGraphicsWidget_InsertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QGraphicsWidget) RemoveAction(action *QAction) {
	C.QGraphicsWidget_RemoveAction(this.h, action.cPointer())
}

func (this *QGraphicsWidget) Actions() []*QAction {
	var _out **C.QAction = nil
	var _out_len C.size_t = 0
	C.QGraphicsWidget_Actions(this.h, &_out, &_out_len)
	ret := make([]*QAction, int(_out_len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAction(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsWidget) Type() int {
	ret := C.QGraphicsWidget_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsWidget_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsWidget) PaintWindowFrame(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsWidget_PaintWindowFrame(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsWidget) BoundingRect() *QRectF {
	ret := C.QGraphicsWidget_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) Shape() *QPainterPath {
	ret := C.QGraphicsWidget_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsWidget) GeometryChanged() {
	C.QGraphicsWidget_GeometryChanged(this.h)
}

func (this *QGraphicsWidget) OnGeometryChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsWidget_connect_GeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsWidget) LayoutChanged() {
	C.QGraphicsWidget_LayoutChanged(this.h)
}

func (this *QGraphicsWidget) OnLayoutChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsWidget_connect_LayoutChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsWidget) Close() bool {
	ret := C.QGraphicsWidget_Close(this.h)
	return (bool)(ret)
}

func QGraphicsWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsWidget) SetShortcutEnabled2(id int, enabled bool) {
	C.QGraphicsWidget_SetShortcutEnabled2(this.h, (C.int)(id), (C.bool)(enabled))
}

func (this *QGraphicsWidget) SetShortcutAutoRepeat2(id int, enabled bool) {
	C.QGraphicsWidget_SetShortcutAutoRepeat2(this.h, (C.int)(id), (C.bool)(enabled))
}

func (this *QGraphicsWidget) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsWidget) PaintWindowFrame3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_PaintWindowFrame3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsWidget) Delete() {
	C.QGraphicsWidget_Delete(this.h)
}

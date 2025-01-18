package qt

/*

#include "gen_qgraphicswidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsWidget__ int

const (
	QGraphicsWidget__Type QGraphicsWidget__ = 11
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

func (this *QGraphicsWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsWidget constructs the type using only CGO pointers.
func newQGraphicsWidget(h *C.QGraphicsWidget) *QGraphicsWidget {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil
	C.QGraphicsWidget_virtbase(h, &outptr_QGraphicsObject, &outptr_QGraphicsLayoutItem)

	return &QGraphicsWidget{h: h,
		QGraphicsObject:     newQGraphicsObject(outptr_QGraphicsObject),
		QGraphicsLayoutItem: newQGraphicsLayoutItem(outptr_QGraphicsLayoutItem)}
}

// UnsafeNewQGraphicsWidget constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsWidget(h unsafe.Pointer) *QGraphicsWidget {
	return newQGraphicsWidget((*C.QGraphicsWidget)(h))
}

// NewQGraphicsWidget constructs a new QGraphicsWidget object.
func NewQGraphicsWidget() *QGraphicsWidget {

	return newQGraphicsWidget(C.QGraphicsWidget_new())
}

// NewQGraphicsWidget2 constructs a new QGraphicsWidget object.
func NewQGraphicsWidget2(parent *QGraphicsItem) *QGraphicsWidget {

	return newQGraphicsWidget(C.QGraphicsWidget_new2(parent.cPointer()))
}

// NewQGraphicsWidget3 constructs a new QGraphicsWidget object.
func NewQGraphicsWidget3(parent *QGraphicsItem, wFlags WindowType) *QGraphicsWidget {

	return newQGraphicsWidget(C.QGraphicsWidget_new3(parent.cPointer(), (C.int)(wFlags)))
}

func (this *QGraphicsWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsWidget_MetaObject(this.h))
}

func (this *QGraphicsWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsWidget_Metacast(this.h, param1_Cstring))
}

func QGraphicsWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWidget) Layout() *QGraphicsLayout {
	return newQGraphicsLayout(C.QGraphicsWidget_Layout(this.h))
}

func (this *QGraphicsWidget) SetLayout(layout *QGraphicsLayout) {
	C.QGraphicsWidget_SetLayout(this.h, layout.cPointer())
}

func (this *QGraphicsWidget) AdjustSize() {
	C.QGraphicsWidget_AdjustSize(this.h)
}

func (this *QGraphicsWidget) LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QGraphicsWidget_LayoutDirection(this.h))
}

func (this *QGraphicsWidget) SetLayoutDirection(direction LayoutDirection) {
	C.QGraphicsWidget_SetLayoutDirection(this.h, (C.int)(direction))
}

func (this *QGraphicsWidget) UnsetLayoutDirection() {
	C.QGraphicsWidget_UnsetLayoutDirection(this.h)
}

func (this *QGraphicsWidget) Style() *QStyle {
	return newQStyle(C.QGraphicsWidget_Style(this.h))
}

func (this *QGraphicsWidget) SetStyle(style *QStyle) {
	C.QGraphicsWidget_SetStyle(this.h, style.cPointer())
}

func (this *QGraphicsWidget) Font() *QFont {
	_goptr := newQFont(C.QGraphicsWidget_Font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetFont(font *QFont) {
	C.QGraphicsWidget_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsWidget) Palette() *QPalette {
	_goptr := newQPalette(C.QGraphicsWidget_Palette(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetPalette(palette *QPalette) {
	C.QGraphicsWidget_SetPalette(this.h, palette.cPointer())
}

func (this *QGraphicsWidget) AutoFillBackground() bool {
	return (bool)(C.QGraphicsWidget_AutoFillBackground(this.h))
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
	_goptr := newQSizeF(C.QGraphicsWidget_Size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetGeometry(rect *QRectF) {
	C.QGraphicsWidget_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsWidget) SetGeometry2(x float64, y float64, w float64, h float64) {
	C.QGraphicsWidget_SetGeometry2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsWidget) Rect() *QRectF {
	_goptr := newQRectF(C.QGraphicsWidget_Rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	_goptr := newQRectF(C.QGraphicsWidget_WindowFrameGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) WindowFrameRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsWidget_WindowFrameRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) WindowFlags() WindowType {
	return (WindowType)(C.QGraphicsWidget_WindowFlags(this.h))
}

func (this *QGraphicsWidget) WindowType() WindowType {
	return (WindowType)(C.QGraphicsWidget_WindowType(this.h))
}

func (this *QGraphicsWidget) SetWindowFlags(wFlags WindowType) {
	C.QGraphicsWidget_SetWindowFlags(this.h, (C.int)(wFlags))
}

func (this *QGraphicsWidget) IsActiveWindow() bool {
	return (bool)(C.QGraphicsWidget_IsActiveWindow(this.h))
}

func (this *QGraphicsWidget) SetWindowTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QGraphicsWidget_SetWindowTitle(this.h, title_ms)
}

func (this *QGraphicsWidget) WindowTitle() string {
	var _ms C.struct_miqt_string = C.QGraphicsWidget_WindowTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWidget) FocusPolicy() FocusPolicy {
	return (FocusPolicy)(C.QGraphicsWidget_FocusPolicy(this.h))
}

func (this *QGraphicsWidget) SetFocusPolicy(policy FocusPolicy) {
	C.QGraphicsWidget_SetFocusPolicy(this.h, (C.int)(policy))
}

func QGraphicsWidget_SetTabOrder(first *QGraphicsWidget, second *QGraphicsWidget) {
	C.QGraphicsWidget_SetTabOrder(first.cPointer(), second.cPointer())
}

func (this *QGraphicsWidget) FocusWidget() *QGraphicsWidget {
	return newQGraphicsWidget(C.QGraphicsWidget_FocusWidget(this.h))
}

func (this *QGraphicsWidget) GrabShortcut(sequence *QKeySequence) int {
	return (int)(C.QGraphicsWidget_GrabShortcut(this.h, sequence.cPointer()))
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
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QGraphicsWidget_AddActions(this.h, actions_ma)
}

func (this *QGraphicsWidget) InsertActions(before *QAction, actions []*QAction) {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QGraphicsWidget_InsertActions(this.h, before.cPointer(), actions_ma)
}

func (this *QGraphicsWidget) InsertAction(before *QAction, action *QAction) {
	C.QGraphicsWidget_InsertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QGraphicsWidget) RemoveAction(action *QAction) {
	C.QGraphicsWidget_RemoveAction(this.h, action.cPointer())
}

func (this *QGraphicsWidget) Actions() []*QAction {
	var _ma C.struct_miqt_array = C.QGraphicsWidget_Actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsWidget) SetAttribute(attribute WidgetAttribute) {
	C.QGraphicsWidget_SetAttribute(this.h, (C.int)(attribute))
}

func (this *QGraphicsWidget) TestAttribute(attribute WidgetAttribute) bool {
	return (bool)(C.QGraphicsWidget_TestAttribute(this.h, (C.int)(attribute)))
}

func (this *QGraphicsWidget) Type() int {
	return (int)(C.QGraphicsWidget_Type(this.h))
}

func (this *QGraphicsWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsWidget) PaintWindowFrame(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_PaintWindowFrame(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsWidget) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsWidget_BoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsWidget_Shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) GeometryChanged() {
	C.QGraphicsWidget_GeometryChanged(this.h)
}
func (this *QGraphicsWidget) OnGeometryChanged(slot func()) {
	C.QGraphicsWidget_connect_GeometryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWidget_GeometryChanged
func miqt_exec_callback_QGraphicsWidget_GeometryChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWidget) LayoutChanged() {
	C.QGraphicsWidget_LayoutChanged(this.h)
}
func (this *QGraphicsWidget) OnLayoutChanged(slot func()) {
	C.QGraphicsWidget_connect_LayoutChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWidget_LayoutChanged
func miqt_exec_callback_QGraphicsWidget_LayoutChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWidget) Close() bool {
	return (bool)(C.QGraphicsWidget_Close(this.h))
}

func QGraphicsWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWidget) GrabShortcut2(sequence *QKeySequence, context ShortcutContext) int {
	return (int)(C.QGraphicsWidget_GrabShortcut2(this.h, sequence.cPointer(), (C.int)(context)))
}

func (this *QGraphicsWidget) SetShortcutEnabled2(id int, enabled bool) {
	C.QGraphicsWidget_SetShortcutEnabled2(this.h, (C.int)(id), (C.bool)(enabled))
}

func (this *QGraphicsWidget) SetShortcutAutoRepeat2(id int, enabled bool) {
	C.QGraphicsWidget_SetShortcutAutoRepeat2(this.h, (C.int)(id), (C.bool)(enabled))
}

func (this *QGraphicsWidget) SetAttribute2(attribute WidgetAttribute, on bool) {
	C.QGraphicsWidget_SetAttribute2(this.h, (C.int)(attribute), (C.bool)(on))
}

func (this *QGraphicsWidget) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsWidget_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsWidget) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsWidget_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_SetGeometry
func miqt_exec_callback_QGraphicsWidget_SetGeometry(self *C.QGraphicsWidget, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsWidget_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsWidget) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsWidget_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_GetContentsMargins
func miqt_exec_callback_QGraphicsWidget_GetContentsMargins(self *C.QGraphicsWidget, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsWidget) callVirtualBase_Type() int {

	return (int)(C.QGraphicsWidget_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsWidget) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsWidget_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_Type
func miqt_exec_callback_QGraphicsWidget_Type(self *C.QGraphicsWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsWidget_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsWidget) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsWidget_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_Paint
func miqt_exec_callback_QGraphicsWidget_Paint(self *C.QGraphicsWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsWidget) callVirtualBase_PaintWindowFrame(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsWidget_virtualbase_PaintWindowFrame(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsWidget) OnPaintWindowFrame(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsWidget_override_virtual_PaintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_PaintWindowFrame
func miqt_exec_callback_QGraphicsWidget_PaintWindowFrame(self *C.QGraphicsWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_PaintWindowFrame, slotval1, slotval2, slotval3)

}

func (this *QGraphicsWidget) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsWidget_virtualbase_BoundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsWidget_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_BoundingRect
func miqt_exec_callback_QGraphicsWidget_BoundingRect(self *C.QGraphicsWidget, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsWidget_virtualbase_Shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsWidget_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_Shape
func miqt_exec_callback_QGraphicsWidget_Shape(self *C.QGraphicsWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_InitStyleOption(option *QStyleOption) {

	C.QGraphicsWidget_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QGraphicsWidget) OnInitStyleOption(slot func(super func(option *QStyleOption), option *QStyleOption)) {
	ok := C.QGraphicsWidget_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_InitStyleOption
func miqt_exec_callback_QGraphicsWidget_InitStyleOption(self *C.QGraphicsWidget, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOption), option *QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOption(option)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsWidget_virtualbase_SizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_SizeHint
func miqt_exec_callback_QGraphicsWidget_SizeHint(self *C.QGraphicsWidget, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_UpdateGeometry() {

	C.QGraphicsWidget_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsWidget) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsWidget_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_UpdateGeometry
func miqt_exec_callback_QGraphicsWidget_UpdateGeometry(self *C.QGraphicsWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsWidget) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsWidget_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsWidget_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_ItemChange
func miqt_exec_callback_QGraphicsWidget_ItemChange(self *C.QGraphicsWidget, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_PropertyChange(propertyName string, value *QVariant) *QVariant {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	_goptr := newQVariant(C.QGraphicsWidget_virtualbase_PropertyChange(unsafe.Pointer(this.h), propertyName_ms, value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnPropertyChange(slot func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant) {
	ok := C.QGraphicsWidget_override_virtual_PropertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_PropertyChange
func miqt_exec_callback_QGraphicsWidget_PropertyChange(self *C.QGraphicsWidget, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_PropertyChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_SceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsWidget) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_SceneEvent
func miqt_exec_callback_QGraphicsWidget_SceneEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_WindowFrameEvent(e *QEvent) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_WindowFrameEvent(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QGraphicsWidget) OnWindowFrameEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_WindowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_WindowFrameEvent
func miqt_exec_callback_QGraphicsWidget_WindowFrameEvent(self *C.QGraphicsWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_WindowFrameEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_WindowFrameSectionAt(pos *QPointF) WindowFrameSection {

	return (WindowFrameSection)(C.QGraphicsWidget_virtualbase_WindowFrameSectionAt(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QGraphicsWidget) OnWindowFrameSectionAt(slot func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection) {
	ok := C.QGraphicsWidget_override_virtual_WindowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_WindowFrameSectionAt
func miqt_exec_callback_QGraphicsWidget_WindowFrameSectionAt(self *C.QGraphicsWidget, cb C.intptr_t, pos *C.QPointF) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(pos)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_WindowFrameSectionAt, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_Event
func miqt_exec_callback_QGraphicsWidget_Event(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_ChangeEvent
func miqt_exec_callback_QGraphicsWidget_ChangeEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGraphicsWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QGraphicsWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_CloseEvent
func miqt_exec_callback_QGraphicsWidget_CloseEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_FocusInEvent
func miqt_exec_callback_QGraphicsWidget_FocusInEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_FocusNextPrevChild
func miqt_exec_callback_QGraphicsWidget_FocusNextPrevChild(self *C.QGraphicsWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_FocusOutEvent
func miqt_exec_callback_QGraphicsWidget_FocusOutEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGraphicsWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QGraphicsWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_HideEvent
func miqt_exec_callback_QGraphicsWidget_HideEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_MoveEvent(event *QGraphicsSceneMoveEvent) {

	C.QGraphicsWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnMoveEvent(slot func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent)) {
	ok := C.QGraphicsWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_MoveEvent
func miqt_exec_callback_QGraphicsWidget_MoveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMoveEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_PolishEvent() {

	C.QGraphicsWidget_virtualbase_PolishEvent(unsafe.Pointer(this.h))

}
func (this *QGraphicsWidget) OnPolishEvent(slot func(super func())) {
	ok := C.QGraphicsWidget_override_virtual_PolishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_PolishEvent
func miqt_exec_callback_QGraphicsWidget_PolishEvent(self *C.QGraphicsWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_PolishEvent)

}

func (this *QGraphicsWidget) callVirtualBase_ResizeEvent(event *QGraphicsSceneResizeEvent) {

	C.QGraphicsWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnResizeEvent(slot func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent)) {
	ok := C.QGraphicsWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_ResizeEvent
func miqt_exec_callback_QGraphicsWidget_ResizeEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneResizeEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGraphicsWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QGraphicsWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_ShowEvent
func miqt_exec_callback_QGraphicsWidget_ShowEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsWidget_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWidget_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_HoverMoveEvent
func miqt_exec_callback_QGraphicsWidget_HoverMoveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsWidget_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWidget_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_HoverLeaveEvent
func miqt_exec_callback_QGraphicsWidget_HoverLeaveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_GrabMouseEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_GrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnGrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_GrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_GrabMouseEvent
func miqt_exec_callback_QGraphicsWidget_GrabMouseEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_UngrabMouseEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_UngrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnUngrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_UngrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_UngrabMouseEvent
func miqt_exec_callback_QGraphicsWidget_UngrabMouseEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_GrabKeyboardEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_GrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnGrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_GrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_GrabKeyboardEvent
func miqt_exec_callback_QGraphicsWidget_GrabKeyboardEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_UngrabKeyboardEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_UngrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnUngrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_UngrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_UngrabKeyboardEvent
func miqt_exec_callback_QGraphicsWidget_UngrabKeyboardEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsWidget) Delete() {
	C.QGraphicsWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

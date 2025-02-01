package qt6

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
	return newQMetaObject(C.QGraphicsWidget_metaObject(this.h))
}

func (this *QGraphicsWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsWidget_metacast(this.h, param1_Cstring))
}

func QGraphicsWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWidget) Layout() *QGraphicsLayout {
	return newQGraphicsLayout(C.QGraphicsWidget_layout(this.h))
}

func (this *QGraphicsWidget) SetLayout(layout *QGraphicsLayout) {
	C.QGraphicsWidget_setLayout(this.h, layout.cPointer())
}

func (this *QGraphicsWidget) AdjustSize() {
	C.QGraphicsWidget_adjustSize(this.h)
}

func (this *QGraphicsWidget) LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QGraphicsWidget_layoutDirection(this.h))
}

func (this *QGraphicsWidget) SetLayoutDirection(direction LayoutDirection) {
	C.QGraphicsWidget_setLayoutDirection(this.h, (C.int)(direction))
}

func (this *QGraphicsWidget) UnsetLayoutDirection() {
	C.QGraphicsWidget_unsetLayoutDirection(this.h)
}

func (this *QGraphicsWidget) Style() *QStyle {
	return newQStyle(C.QGraphicsWidget_style(this.h))
}

func (this *QGraphicsWidget) SetStyle(style *QStyle) {
	C.QGraphicsWidget_setStyle(this.h, style.cPointer())
}

func (this *QGraphicsWidget) Font() *QFont {
	_goptr := newQFont(C.QGraphicsWidget_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetFont(font *QFont) {
	C.QGraphicsWidget_setFont(this.h, font.cPointer())
}

func (this *QGraphicsWidget) Palette() *QPalette {
	_goptr := newQPalette(C.QGraphicsWidget_palette(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetPalette(palette *QPalette) {
	C.QGraphicsWidget_setPalette(this.h, palette.cPointer())
}

func (this *QGraphicsWidget) AutoFillBackground() bool {
	return (bool)(C.QGraphicsWidget_autoFillBackground(this.h))
}

func (this *QGraphicsWidget) SetAutoFillBackground(enabled bool) {
	C.QGraphicsWidget_setAutoFillBackground(this.h, (C.bool)(enabled))
}

func (this *QGraphicsWidget) Resize(size *QSizeF) {
	C.QGraphicsWidget_resize(this.h, size.cPointer())
}

func (this *QGraphicsWidget) Resize2(w float64, h float64) {
	C.QGraphicsWidget_resize2(this.h, (C.double)(w), (C.double)(h))
}

func (this *QGraphicsWidget) Size() *QSizeF {
	_goptr := newQSizeF(C.QGraphicsWidget_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetGeometry(rect *QRectF) {
	C.QGraphicsWidget_setGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsWidget) SetGeometry2(x float64, y float64, w float64, h float64) {
	C.QGraphicsWidget_setGeometry2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsWidget) Rect() *QRectF {
	_goptr := newQRectF(C.QGraphicsWidget_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetContentsMargins(left float64, top float64, right float64, bottom float64) {
	C.QGraphicsWidget_setContentsMargins(this.h, (C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom))
}

func (this *QGraphicsWidget) SetContentsMarginsWithMargins(margins QMarginsF) {
	C.QGraphicsWidget_setContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QGraphicsWidget) GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsWidget_getContentsMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsWidget) SetWindowFrameMargins(left float64, top float64, right float64, bottom float64) {
	C.QGraphicsWidget_setWindowFrameMargins(this.h, (C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom))
}

func (this *QGraphicsWidget) SetWindowFrameMarginsWithMargins(margins QMarginsF) {
	C.QGraphicsWidget_setWindowFrameMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QGraphicsWidget) GetWindowFrameMargins(left *float64, top *float64, right *float64, bottom *float64) {
	C.QGraphicsWidget_getWindowFrameMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QGraphicsWidget) UnsetWindowFrameMargins() {
	C.QGraphicsWidget_unsetWindowFrameMargins(this.h)
}

func (this *QGraphicsWidget) WindowFrameGeometry() *QRectF {
	_goptr := newQRectF(C.QGraphicsWidget_windowFrameGeometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) WindowFrameRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsWidget_windowFrameRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) WindowFlags() WindowType {
	return (WindowType)(C.QGraphicsWidget_windowFlags(this.h))
}

func (this *QGraphicsWidget) WindowType() WindowType {
	return (WindowType)(C.QGraphicsWidget_windowType(this.h))
}

func (this *QGraphicsWidget) SetWindowFlags(wFlags WindowType) {
	C.QGraphicsWidget_setWindowFlags(this.h, (C.int)(wFlags))
}

func (this *QGraphicsWidget) IsActiveWindow() bool {
	return (bool)(C.QGraphicsWidget_isActiveWindow(this.h))
}

func (this *QGraphicsWidget) SetWindowTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QGraphicsWidget_setWindowTitle(this.h, title_ms)
}

func (this *QGraphicsWidget) WindowTitle() string {
	var _ms C.struct_miqt_string = C.QGraphicsWidget_windowTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWidget) FocusPolicy() FocusPolicy {
	return (FocusPolicy)(C.QGraphicsWidget_focusPolicy(this.h))
}

func (this *QGraphicsWidget) SetFocusPolicy(policy FocusPolicy) {
	C.QGraphicsWidget_setFocusPolicy(this.h, (C.int)(policy))
}

func QGraphicsWidget_SetTabOrder(first *QGraphicsWidget, second *QGraphicsWidget) {
	C.QGraphicsWidget_setTabOrder(first.cPointer(), second.cPointer())
}

func (this *QGraphicsWidget) FocusWidget() *QGraphicsWidget {
	return newQGraphicsWidget(C.QGraphicsWidget_focusWidget(this.h))
}

func (this *QGraphicsWidget) GrabShortcut(sequence *QKeySequence) int {
	return (int)(C.QGraphicsWidget_grabShortcut(this.h, sequence.cPointer()))
}

func (this *QGraphicsWidget) ReleaseShortcut(id int) {
	C.QGraphicsWidget_releaseShortcut(this.h, (C.int)(id))
}

func (this *QGraphicsWidget) SetShortcutEnabled(id int) {
	C.QGraphicsWidget_setShortcutEnabled(this.h, (C.int)(id))
}

func (this *QGraphicsWidget) SetShortcutAutoRepeat(id int) {
	C.QGraphicsWidget_setShortcutAutoRepeat(this.h, (C.int)(id))
}

func (this *QGraphicsWidget) AddAction(action *QAction) {
	C.QGraphicsWidget_addAction(this.h, action.cPointer())
}

func (this *QGraphicsWidget) AddActions(actions []*QAction) {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QGraphicsWidget_addActions(this.h, actions_ma)
}

func (this *QGraphicsWidget) InsertActions(before *QAction, actions []*QAction) {
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	C.QGraphicsWidget_insertActions(this.h, before.cPointer(), actions_ma)
}

func (this *QGraphicsWidget) InsertAction(before *QAction, action *QAction) {
	C.QGraphicsWidget_insertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QGraphicsWidget) RemoveAction(action *QAction) {
	C.QGraphicsWidget_removeAction(this.h, action.cPointer())
}

func (this *QGraphicsWidget) Actions() []*QAction {
	var _ma C.struct_miqt_array = C.QGraphicsWidget_actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsWidget) SetAttribute(attribute WidgetAttribute) {
	C.QGraphicsWidget_setAttribute(this.h, (C.int)(attribute))
}

func (this *QGraphicsWidget) TestAttribute(attribute WidgetAttribute) bool {
	return (bool)(C.QGraphicsWidget_testAttribute(this.h, (C.int)(attribute)))
}

func (this *QGraphicsWidget) Type() int {
	return (int)(C.QGraphicsWidget_type(this.h))
}

func (this *QGraphicsWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsWidget) PaintWindowFrame(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_paintWindowFrame(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsWidget) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsWidget_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsWidget_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) GeometryChanged() {
	C.QGraphicsWidget_geometryChanged(this.h)
}
func (this *QGraphicsWidget) OnGeometryChanged(slot func()) {
	C.QGraphicsWidget_connect_geometryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWidget_geometryChanged
func miqt_exec_callback_QGraphicsWidget_geometryChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWidget) LayoutChanged() {
	C.QGraphicsWidget_layoutChanged(this.h)
}
func (this *QGraphicsWidget) OnLayoutChanged(slot func()) {
	C.QGraphicsWidget_connect_layoutChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsWidget_layoutChanged
func miqt_exec_callback_QGraphicsWidget_layoutChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWidget) Close() bool {
	return (bool)(C.QGraphicsWidget_close(this.h))
}

func QGraphicsWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsWidget) GrabShortcut2(sequence *QKeySequence, context ShortcutContext) int {
	return (int)(C.QGraphicsWidget_grabShortcut2(this.h, sequence.cPointer(), (C.int)(context)))
}

func (this *QGraphicsWidget) SetShortcutEnabled2(id int, enabled bool) {
	C.QGraphicsWidget_setShortcutEnabled2(this.h, (C.int)(id), (C.bool)(enabled))
}

func (this *QGraphicsWidget) SetShortcutAutoRepeat2(id int, enabled bool) {
	C.QGraphicsWidget_setShortcutAutoRepeat2(this.h, (C.int)(id), (C.bool)(enabled))
}

func (this *QGraphicsWidget) SetAttribute2(attribute WidgetAttribute, on bool) {
	C.QGraphicsWidget_setAttribute2(this.h, (C.int)(attribute), (C.bool)(on))
}

func (this *QGraphicsWidget) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsWidget_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsWidget) OnsetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsWidget_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_setGeometry
func miqt_exec_callback_QGraphicsWidget_setGeometry(self *C.QGraphicsWidget, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsWidget_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsWidget) OngetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsWidget_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_getContentsMargins
func miqt_exec_callback_QGraphicsWidget_getContentsMargins(self *C.QGraphicsWidget, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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

	return (int)(C.QGraphicsWidget_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsWidget) Ontype(slot func(super func() int) int) {
	ok := C.QGraphicsWidget_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_type
func miqt_exec_callback_QGraphicsWidget_type(self *C.QGraphicsWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsWidget_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsWidget) Onpaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsWidget_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_paint
func miqt_exec_callback_QGraphicsWidget_paint(self *C.QGraphicsWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
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

	C.QGraphicsWidget_virtualbase_paintWindowFrame(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsWidget) OnpaintWindowFrame(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsWidget_override_virtual_paintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_paintWindowFrame
func miqt_exec_callback_QGraphicsWidget_paintWindowFrame(self *C.QGraphicsWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
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

	_goptr := newQRectF(C.QGraphicsWidget_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnboundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsWidget_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_boundingRect
func miqt_exec_callback_QGraphicsWidget_boundingRect(self *C.QGraphicsWidget, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsWidget_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) Onshape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsWidget_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_shape
func miqt_exec_callback_QGraphicsWidget_shape(self *C.QGraphicsWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_InitStyleOption(option *QStyleOption) {

	C.QGraphicsWidget_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QGraphicsWidget) OninitStyleOption(slot func(super func(option *QStyleOption), option *QStyleOption)) {
	ok := C.QGraphicsWidget_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_initStyleOption
func miqt_exec_callback_QGraphicsWidget_initStyleOption(self *C.QGraphicsWidget, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOption), option *QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOption(option)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsWidget_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnsizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_sizeHint
func miqt_exec_callback_QGraphicsWidget_sizeHint(self *C.QGraphicsWidget, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
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

	C.QGraphicsWidget_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsWidget) OnupdateGeometry(slot func(super func())) {
	ok := C.QGraphicsWidget_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_updateGeometry
func miqt_exec_callback_QGraphicsWidget_updateGeometry(self *C.QGraphicsWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsWidget) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsWidget_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnitemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsWidget_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_itemChange
func miqt_exec_callback_QGraphicsWidget_itemChange(self *C.QGraphicsWidget, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
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

	_goptr := newQVariant(C.QGraphicsWidget_virtualbase_propertyChange(unsafe.Pointer(this.h), propertyName_ms, value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnpropertyChange(slot func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant) {
	ok := C.QGraphicsWidget_override_virtual_propertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_propertyChange
func miqt_exec_callback_QGraphicsWidget_propertyChange(self *C.QGraphicsWidget, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
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

	return (bool)(C.QGraphicsWidget_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsWidget) OnsceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_sceneEvent
func miqt_exec_callback_QGraphicsWidget_sceneEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGraphicsWidget_virtualbase_windowFrameEvent(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QGraphicsWidget) OnwindowFrameEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_windowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_windowFrameEvent
func miqt_exec_callback_QGraphicsWidget_windowFrameEvent(self *C.QGraphicsWidget, cb C.intptr_t, e *C.QEvent) C.bool {
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

	return (WindowFrameSection)(C.QGraphicsWidget_virtualbase_windowFrameSectionAt(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QGraphicsWidget) OnwindowFrameSectionAt(slot func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection) {
	ok := C.QGraphicsWidget_override_virtual_windowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_windowFrameSectionAt
func miqt_exec_callback_QGraphicsWidget_windowFrameSectionAt(self *C.QGraphicsWidget, cb C.intptr_t, pos *C.QPointF) C.int {
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

	return (bool)(C.QGraphicsWidget_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsWidget) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_event
func miqt_exec_callback_QGraphicsWidget_event(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QGraphicsWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnchangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_changeEvent
func miqt_exec_callback_QGraphicsWidget_changeEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGraphicsWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QGraphicsWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_closeEvent
func miqt_exec_callback_QGraphicsWidget_closeEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_focusInEvent
func miqt_exec_callback_QGraphicsWidget_focusInEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsWidget) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_focusNextPrevChild
func miqt_exec_callback_QGraphicsWidget_focusNextPrevChild(self *C.QGraphicsWidget, cb C.intptr_t, next C.bool) C.bool {
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

	C.QGraphicsWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_focusOutEvent
func miqt_exec_callback_QGraphicsWidget_focusOutEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGraphicsWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QGraphicsWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_hideEvent
func miqt_exec_callback_QGraphicsWidget_hideEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_MoveEvent(event *QGraphicsSceneMoveEvent) {

	C.QGraphicsWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnmoveEvent(slot func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent)) {
	ok := C.QGraphicsWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_moveEvent
func miqt_exec_callback_QGraphicsWidget_moveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMoveEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_PolishEvent() {

	C.QGraphicsWidget_virtualbase_polishEvent(unsafe.Pointer(this.h))

}
func (this *QGraphicsWidget) OnpolishEvent(slot func(super func())) {
	ok := C.QGraphicsWidget_override_virtual_polishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_polishEvent
func miqt_exec_callback_QGraphicsWidget_polishEvent(self *C.QGraphicsWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_PolishEvent)

}

func (this *QGraphicsWidget) callVirtualBase_ResizeEvent(event *QGraphicsSceneResizeEvent) {

	C.QGraphicsWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnresizeEvent(slot func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent)) {
	ok := C.QGraphicsWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_resizeEvent
func miqt_exec_callback_QGraphicsWidget_resizeEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneResizeEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGraphicsWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QGraphicsWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_showEvent
func miqt_exec_callback_QGraphicsWidget_showEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsWidget_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnhoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWidget_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_hoverMoveEvent
func miqt_exec_callback_QGraphicsWidget_hoverMoveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsWidget_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnhoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWidget_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_hoverLeaveEvent
func miqt_exec_callback_QGraphicsWidget_hoverLeaveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_GrabMouseEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_grabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OngrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_grabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_grabMouseEvent
func miqt_exec_callback_QGraphicsWidget_grabMouseEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_UngrabMouseEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_ungrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnungrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_ungrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_ungrabMouseEvent
func miqt_exec_callback_QGraphicsWidget_ungrabMouseEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_GrabKeyboardEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_grabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OngrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_grabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_grabKeyboardEvent
func miqt_exec_callback_QGraphicsWidget_grabKeyboardEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_UngrabKeyboardEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_ungrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnungrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_ungrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_ungrabKeyboardEvent
func miqt_exec_callback_QGraphicsWidget_ungrabKeyboardEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsWidget) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_eventFilter
func miqt_exec_callback_QGraphicsWidget_eventFilter(self *C.QGraphicsWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_timerEvent
func miqt_exec_callback_QGraphicsWidget_timerEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_childEvent
func miqt_exec_callback_QGraphicsWidget_childEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_customEvent
func miqt_exec_callback_QGraphicsWidget_customEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsWidget) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_connectNotify
func miqt_exec_callback_QGraphicsWidget_connectNotify(self *C.QGraphicsWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsWidget) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_disconnectNotify
func miqt_exec_callback_QGraphicsWidget_disconnectNotify(self *C.QGraphicsWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_Advance(phase int) {

	C.QGraphicsWidget_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsWidget) Onadvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsWidget_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_advance
func miqt_exec_callback_QGraphicsWidget_advance(self *C.QGraphicsWidget, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsWidget) Oncontains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsWidget_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_contains
func miqt_exec_callback_QGraphicsWidget_contains(self *C.QGraphicsWidget, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsWidget) OncollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsWidget_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_collidesWithItem
func miqt_exec_callback_QGraphicsWidget_collidesWithItem(self *C.QGraphicsWidget, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsWidget) OncollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsWidget_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_collidesWithPath
func miqt_exec_callback_QGraphicsWidget_collidesWithPath(self *C.QGraphicsWidget, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsWidget) OnisObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsWidget_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_isObscuredBy
func miqt_exec_callback_QGraphicsWidget_isObscuredBy(self *C.QGraphicsWidget, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsWidget_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OnopaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsWidget_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_opaqueArea
func miqt_exec_callback_QGraphicsWidget_opaqueArea(self *C.QGraphicsWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsWidget) OnsceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsWidget_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_sceneEventFilter
func miqt_exec_callback_QGraphicsWidget_sceneEventFilter(self *C.QGraphicsWidget, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OncontextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_contextMenuEvent
func miqt_exec_callback_QGraphicsWidget_contextMenuEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OndragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_dragEnterEvent
func miqt_exec_callback_QGraphicsWidget_dragEnterEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OndragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_dragLeaveEvent
func miqt_exec_callback_QGraphicsWidget_dragLeaveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OndragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_dragMoveEvent
func miqt_exec_callback_QGraphicsWidget_dragMoveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OndropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_dropEvent
func miqt_exec_callback_QGraphicsWidget_dropEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsWidget_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnhoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsWidget_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_hoverEnterEvent
func miqt_exec_callback_QGraphicsWidget_hoverEnterEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_keyPressEvent
func miqt_exec_callback_QGraphicsWidget_keyPressEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_keyReleaseEvent
func miqt_exec_callback_QGraphicsWidget_keyReleaseEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnmousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_mousePressEvent
func miqt_exec_callback_QGraphicsWidget_mousePressEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnmouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_mouseMoveEvent
func miqt_exec_callback_QGraphicsWidget_mouseMoveEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnmouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_mouseReleaseEvent
func miqt_exec_callback_QGraphicsWidget_mouseReleaseEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnmouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsWidget_mouseDoubleClickEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OnwheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_wheelEvent
func miqt_exec_callback_QGraphicsWidget_wheelEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsWidget) OninputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_inputMethodEvent
func miqt_exec_callback_QGraphicsWidget_inputMethodEvent(self *C.QGraphicsWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsWidget) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) OninputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_inputMethodQuery
func miqt_exec_callback_QGraphicsWidget_inputMethodQuery(self *C.QGraphicsWidget, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsWidget_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsWidget) OnsupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsWidget_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_supportsExtension
func miqt_exec_callback_QGraphicsWidget_supportsExtension(self *C.QGraphicsWidget, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsWidget) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsWidget_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsWidget) OnsetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsWidget_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_setExtension
func miqt_exec_callback_QGraphicsWidget_setExtension(self *C.QGraphicsWidget, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsWidget{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsWidget) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsWidget_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsWidget) Onextension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsWidget_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_extension
func miqt_exec_callback_QGraphicsWidget_extension(self *C.QGraphicsWidget, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsWidget) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QGraphicsWidget_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QGraphicsWidget) OnisEmpty(slot func(super func() bool) bool) {
	ok := C.QGraphicsWidget_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsWidget_isEmpty
func miqt_exec_callback_QGraphicsWidget_isEmpty(self *C.QGraphicsWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsWidget{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QGraphicsWidget) Delete() {
	C.QGraphicsWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

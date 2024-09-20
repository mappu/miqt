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

func newQGraphicsWidget(h *C.QGraphicsWidget) *QGraphicsWidget {
	if h == nil {
		return nil
	}
	return &QGraphicsWidget{h: h, QGraphicsObject: newQGraphicsObject_U(unsafe.Pointer(h)), QGraphicsLayoutItem: newQGraphicsLayoutItem_U(unsafe.Pointer(h))}
}

func newQGraphicsWidget_U(h unsafe.Pointer) *QGraphicsWidget {
	return newQGraphicsWidget((*C.QGraphicsWidget)(h))
}

// NewQGraphicsWidget constructs a new QGraphicsWidget object.
func NewQGraphicsWidget() *QGraphicsWidget {
	ret := C.QGraphicsWidget_new()
	return newQGraphicsWidget(ret)
}

// NewQGraphicsWidget2 constructs a new QGraphicsWidget object.
func NewQGraphicsWidget2(parent *QGraphicsItem) *QGraphicsWidget {
	ret := C.QGraphicsWidget_new2(parent.cPointer())
	return newQGraphicsWidget(ret)
}

// NewQGraphicsWidget3 constructs a new QGraphicsWidget object.
func NewQGraphicsWidget3(parent *QGraphicsItem, wFlags WindowType) *QGraphicsWidget {
	ret := C.QGraphicsWidget_new3(parent.cPointer(), (C.int)(wFlags))
	return newQGraphicsWidget(ret)
}

func (this *QGraphicsWidget) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QGraphicsWidget_MetaObject(this.h)))
}

func QGraphicsWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsWidget_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsWidget) Layout() *QGraphicsLayout {
	return newQGraphicsLayout_U(unsafe.Pointer(C.QGraphicsWidget_Layout(this.h)))
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
	return newQStyle_U(unsafe.Pointer(C.QGraphicsWidget_Style(this.h)))
}

func (this *QGraphicsWidget) SetStyle(style *QStyle) {
	C.QGraphicsWidget_SetStyle(this.h, style.cPointer())
}

func (this *QGraphicsWidget) Font() *QFont {
	_ret := C.QGraphicsWidget_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) SetFont(font *QFont) {
	C.QGraphicsWidget_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsWidget) Palette() *QPalette {
	_ret := C.QGraphicsWidget_Palette(this.h)
	_goptr := newQPalette(_ret)
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
	_ret := C.QGraphicsWidget_Size(this.h)
	_goptr := newQSizeF(_ret)
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
	_ret := C.QGraphicsWidget_Rect(this.h)
	_goptr := newQRectF(_ret)
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
	_ret := C.QGraphicsWidget_WindowFrameGeometry(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) WindowFrameRect() *QRectF {
	_ret := C.QGraphicsWidget_WindowFrameRect(this.h)
	_goptr := newQRectF(_ret)
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
	title_ms := miqt_strdupg(title)
	defer C.free(title_ms)
	C.QGraphicsWidget_SetWindowTitle(this.h, (*C.struct_miqt_string)(title_ms))
}

func (this *QGraphicsWidget) WindowTitle() string {
	var _ms *C.struct_miqt_string = C.QGraphicsWidget_WindowTitle(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	return newQGraphicsWidget_U(unsafe.Pointer(C.QGraphicsWidget_FocusWidget(this.h)))
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
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := &C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(actions_ma))
	C.QGraphicsWidget_AddActions(this.h, actions_ma)
}

func (this *QGraphicsWidget) InsertActions(before *QAction, actions []*QAction) {
	// For the C ABI, malloc a C array of raw pointers
	actions_CArray := (*[0xffff]*C.QAction)(C.malloc(C.size_t(8 * len(actions))))
	defer C.free(unsafe.Pointer(actions_CArray))
	for i := range actions {
		actions_CArray[i] = actions[i].cPointer()
	}
	actions_ma := &C.struct_miqt_array{len: C.size_t(len(actions)), data: unsafe.Pointer(actions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(actions_ma))
	C.QGraphicsWidget_InsertActions(this.h, before.cPointer(), actions_ma)
}

func (this *QGraphicsWidget) InsertAction(before *QAction, action *QAction) {
	C.QGraphicsWidget_InsertAction(this.h, before.cPointer(), action.cPointer())
}

func (this *QGraphicsWidget) RemoveAction(action *QAction) {
	C.QGraphicsWidget_RemoveAction(this.h, action.cPointer())
}

func (this *QGraphicsWidget) Actions() []*QAction {
	var _ma *C.struct_miqt_array = C.QGraphicsWidget_Actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
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

func (this *QGraphicsWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsWidget_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsWidget) PaintWindowFrame(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsWidget_PaintWindowFrame(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsWidget) BoundingRect() *QRectF {
	_ret := C.QGraphicsWidget_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) Shape() *QPainterPath {
	_ret := C.QGraphicsWidget_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsWidget) GeometryChanged() {
	C.QGraphicsWidget_GeometryChanged(this.h)
}
func (this *QGraphicsWidget) OnGeometryChanged(slot func()) {
	C.QGraphicsWidget_connect_GeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsWidget_GeometryChanged
func miqt_exec_callback_QGraphicsWidget_GeometryChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsWidget) LayoutChanged() {
	C.QGraphicsWidget_LayoutChanged(this.h)
}
func (this *QGraphicsWidget) OnLayoutChanged(slot func()) {
	C.QGraphicsWidget_connect_LayoutChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsWidget_LayoutChanged
func miqt_exec_callback_QGraphicsWidget_LayoutChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
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
	var _ms *C.struct_miqt_string = C.QGraphicsWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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

func (this *QGraphicsWidget) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsWidget) PaintWindowFrame3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsWidget_PaintWindowFrame3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
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

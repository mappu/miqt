package qt

/*

#include "gen_qgraphicsscene.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsScene struct {
	h *C.QGraphicsScene
	*QObject
}

func (this *QGraphicsScene) cPointer() *C.QGraphicsScene {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsScene(h *C.QGraphicsScene) *QGraphicsScene {
	if h == nil {
		return nil
	}
	return &QGraphicsScene{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGraphicsScene_U(h unsafe.Pointer) *QGraphicsScene {
	return newQGraphicsScene((*C.QGraphicsScene)(h))
}

// NewQGraphicsScene constructs a new QGraphicsScene object.
func NewQGraphicsScene() *QGraphicsScene {
	ret := C.QGraphicsScene_new()
	return newQGraphicsScene(ret)
}

// NewQGraphicsScene2 constructs a new QGraphicsScene object.
func NewQGraphicsScene2(sceneRect *QRectF) *QGraphicsScene {
	ret := C.QGraphicsScene_new2(sceneRect.cPointer())
	return newQGraphicsScene(ret)
}

// NewQGraphicsScene3 constructs a new QGraphicsScene object.
func NewQGraphicsScene3(x float64, y float64, width float64, height float64) *QGraphicsScene {
	ret := C.QGraphicsScene_new3((C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height))
	return newQGraphicsScene(ret)
}

// NewQGraphicsScene4 constructs a new QGraphicsScene object.
func NewQGraphicsScene4(parent *QObject) *QGraphicsScene {
	ret := C.QGraphicsScene_new4(parent.cPointer())
	return newQGraphicsScene(ret)
}

// NewQGraphicsScene5 constructs a new QGraphicsScene object.
func NewQGraphicsScene5(sceneRect *QRectF, parent *QObject) *QGraphicsScene {
	ret := C.QGraphicsScene_new5(sceneRect.cPointer(), parent.cPointer())
	return newQGraphicsScene(ret)
}

// NewQGraphicsScene6 constructs a new QGraphicsScene object.
func NewQGraphicsScene6(x float64, y float64, width float64, height float64, parent *QObject) *QGraphicsScene {
	ret := C.QGraphicsScene_new6((C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height), parent.cPointer())
	return newQGraphicsScene(ret)
}

func (this *QGraphicsScene) MetaObject() *QMetaObject {
	ret := C.QGraphicsScene_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsScene_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScene_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScene_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScene_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) SceneRect() *QRectF {
	ret := C.QGraphicsScene_SceneRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) Width() float64 {
	ret := C.QGraphicsScene_Width(this.h)
	return (float64)(ret)
}

func (this *QGraphicsScene) Height() float64 {
	ret := C.QGraphicsScene_Height(this.h)
	return (float64)(ret)
}

func (this *QGraphicsScene) SetSceneRect(rect *QRectF) {
	C.QGraphicsScene_SetSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsScene) SetSceneRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_SetSceneRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Render(painter *QPainter) {
	C.QGraphicsScene_Render(this.h, painter.cPointer())
}

func (this *QGraphicsScene) ItemIndexMethod() uintptr {
	ret := C.QGraphicsScene_ItemIndexMethod(this.h)
	return (uintptr)(ret)
}

func (this *QGraphicsScene) SetItemIndexMethod(method uintptr) {
	C.QGraphicsScene_SetItemIndexMethod(this.h, (C.uintptr_t)(method))
}

func (this *QGraphicsScene) IsSortCacheEnabled() bool {
	ret := C.QGraphicsScene_IsSortCacheEnabled(this.h)
	return (bool)(ret)
}

func (this *QGraphicsScene) SetSortCacheEnabled(enabled bool) {
	C.QGraphicsScene_SetSortCacheEnabled(this.h, (C.bool)(enabled))
}

func (this *QGraphicsScene) BspTreeDepth() int {
	ret := C.QGraphicsScene_BspTreeDepth(this.h)
	return (int)(ret)
}

func (this *QGraphicsScene) SetBspTreeDepth(depth int) {
	C.QGraphicsScene_SetBspTreeDepth(this.h, (C.int)(depth))
}

func (this *QGraphicsScene) ItemsBoundingRect() *QRectF {
	ret := C.QGraphicsScene_ItemsBoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) Items() []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) ItemsWithPos(pos *QPointF) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_ItemsWithPos(this.h, pos.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) ItemsWithRect(rect *QRectF) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_ItemsWithRect(this.h, rect.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_ItemsWithPath(this.h, path.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) CollidingItems(item *QGraphicsItem) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_CollidingItems(this.h, item.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) ItemAt(pos *QPointF, deviceTransform *QTransform) *QGraphicsItem {
	ret := C.QGraphicsScene_ItemAt(this.h, pos.cPointer(), deviceTransform.cPointer())
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) Items2(x float64, y float64, w float64, h float64, mode uintptr, order uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.uintptr_t)(mode), (C.uintptr_t)(order), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) ItemAt2(x float64, y float64, deviceTransform *QTransform) *QGraphicsItem {
	ret := C.QGraphicsScene_ItemAt2(this.h, (C.double)(x), (C.double)(y), deviceTransform.cPointer())
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) SelectedItems() []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_SelectedItems(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) SelectionArea() *QPainterPath {
	ret := C.QGraphicsScene_SelectionArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) SetSelectionArea(path *QPainterPath, deviceTransform *QTransform) {
	C.QGraphicsScene_SetSelectionArea(this.h, path.cPointer(), deviceTransform.cPointer())
}

func (this *QGraphicsScene) SetSelectionAreaWithPath(path *QPainterPath) {
	C.QGraphicsScene_SetSelectionAreaWithPath(this.h, path.cPointer())
}

func (this *QGraphicsScene) SetSelectionArea2(path *QPainterPath, selectionOperation uintptr) {
	C.QGraphicsScene_SetSelectionArea2(this.h, path.cPointer(), (C.uintptr_t)(selectionOperation))
}

func (this *QGraphicsScene) CreateItemGroup(items []*QGraphicsItem) *QGraphicsItemGroup {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QGraphicsItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	ret := C.QGraphicsScene_CreateItemGroup(this.h, &items_CArray[0], C.ulong(len(items)))
	return newQGraphicsItemGroup_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) DestroyItemGroup(group *QGraphicsItemGroup) {
	C.QGraphicsScene_DestroyItemGroup(this.h, group.cPointer())
}

func (this *QGraphicsScene) AddItem(item *QGraphicsItem) {
	C.QGraphicsScene_AddItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) AddEllipse(rect *QRectF) *QGraphicsEllipseItem {
	ret := C.QGraphicsScene_AddEllipse(this.h, rect.cPointer())
	return newQGraphicsEllipseItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddLine(line *QLineF) *QGraphicsLineItem {
	ret := C.QGraphicsScene_AddLine(this.h, line.cPointer())
	return newQGraphicsLineItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddPath(path *QPainterPath) *QGraphicsPathItem {
	ret := C.QGraphicsScene_AddPath(this.h, path.cPointer())
	return newQGraphicsPathItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddPixmap(pixmap *QPixmap) *QGraphicsPixmapItem {
	ret := C.QGraphicsScene_AddPixmap(this.h, pixmap.cPointer())
	return newQGraphicsPixmapItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddRect(rect *QRectF) *QGraphicsRectItem {
	ret := C.QGraphicsScene_AddRect(this.h, rect.cPointer())
	return newQGraphicsRectItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddText(text string) *QGraphicsTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsScene_AddText(this.h, text_Cstring, C.ulong(len(text)))
	return newQGraphicsTextItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddSimpleText(text string) *QGraphicsSimpleTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsScene_AddSimpleText(this.h, text_Cstring, C.ulong(len(text)))
	return newQGraphicsSimpleTextItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddWidget(widget *QWidget) *QGraphicsProxyWidget {
	ret := C.QGraphicsScene_AddWidget(this.h, widget.cPointer())
	return newQGraphicsProxyWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddEllipse2(x float64, y float64, w float64, h float64) *QGraphicsEllipseItem {
	ret := C.QGraphicsScene_AddEllipse2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	return newQGraphicsEllipseItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddLine2(x1 float64, y1 float64, x2 float64, y2 float64) *QGraphicsLineItem {
	ret := C.QGraphicsScene_AddLine2(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
	return newQGraphicsLineItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddRect2(x float64, y float64, w float64, h float64) *QGraphicsRectItem {
	ret := C.QGraphicsScene_AddRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	return newQGraphicsRectItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) RemoveItem(item *QGraphicsItem) {
	C.QGraphicsScene_RemoveItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) FocusItem() *QGraphicsItem {
	ret := C.QGraphicsScene_FocusItem(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) SetFocusItem(item *QGraphicsItem) {
	C.QGraphicsScene_SetFocusItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) HasFocus() bool {
	ret := C.QGraphicsScene_HasFocus(this.h)
	return (bool)(ret)
}

func (this *QGraphicsScene) SetFocus() {
	C.QGraphicsScene_SetFocus(this.h)
}

func (this *QGraphicsScene) ClearFocus() {
	C.QGraphicsScene_ClearFocus(this.h)
}

func (this *QGraphicsScene) SetStickyFocus(enabled bool) {
	C.QGraphicsScene_SetStickyFocus(this.h, (C.bool)(enabled))
}

func (this *QGraphicsScene) StickyFocus() bool {
	ret := C.QGraphicsScene_StickyFocus(this.h)
	return (bool)(ret)
}

func (this *QGraphicsScene) MouseGrabberItem() *QGraphicsItem {
	ret := C.QGraphicsScene_MouseGrabberItem(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) BackgroundBrush() *QBrush {
	ret := C.QGraphicsScene_BackgroundBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) SetBackgroundBrush(brush *QBrush) {
	C.QGraphicsScene_SetBackgroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsScene) ForegroundBrush() *QBrush {
	ret := C.QGraphicsScene_ForegroundBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) SetForegroundBrush(brush *QBrush) {
	C.QGraphicsScene_SetForegroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsScene) InputMethodQuery(query uintptr) *QVariant {
	ret := C.QGraphicsScene_InputMethodQuery(this.h, (C.uintptr_t)(query))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) Views() []*QGraphicsView {
	var _out **C.QGraphicsView = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Views(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsView, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsView)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsView(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Update(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_Update(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Invalidate(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_Invalidate(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Style() *QStyle {
	ret := C.QGraphicsScene_Style(this.h)
	return newQStyle_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) SetStyle(style *QStyle) {
	C.QGraphicsScene_SetStyle(this.h, style.cPointer())
}

func (this *QGraphicsScene) Font() *QFont {
	ret := C.QGraphicsScene_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) SetFont(font *QFont) {
	C.QGraphicsScene_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsScene) Palette() *QPalette {
	ret := C.QGraphicsScene_Palette(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScene) SetPalette(palette *QPalette) {
	C.QGraphicsScene_SetPalette(this.h, palette.cPointer())
}

func (this *QGraphicsScene) IsActive() bool {
	ret := C.QGraphicsScene_IsActive(this.h)
	return (bool)(ret)
}

func (this *QGraphicsScene) ActivePanel() *QGraphicsItem {
	ret := C.QGraphicsScene_ActivePanel(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) SetActivePanel(item *QGraphicsItem) {
	C.QGraphicsScene_SetActivePanel(this.h, item.cPointer())
}

func (this *QGraphicsScene) ActiveWindow() *QGraphicsWidget {
	ret := C.QGraphicsScene_ActiveWindow(this.h)
	return newQGraphicsWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) SetActiveWindow(widget *QGraphicsWidget) {
	C.QGraphicsScene_SetActiveWindow(this.h, widget.cPointer())
}

func (this *QGraphicsScene) SendEvent(item *QGraphicsItem, event *QEvent) bool {
	ret := C.QGraphicsScene_SendEvent(this.h, item.cPointer(), event.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsScene) MinimumRenderSize() float64 {
	ret := C.QGraphicsScene_MinimumRenderSize(this.h)
	return (float64)(ret)
}

func (this *QGraphicsScene) SetMinimumRenderSize(minSize float64) {
	C.QGraphicsScene_SetMinimumRenderSize(this.h, (C.double)(minSize))
}

func (this *QGraphicsScene) FocusOnTouch() bool {
	ret := C.QGraphicsScene_FocusOnTouch(this.h)
	return (bool)(ret)
}

func (this *QGraphicsScene) SetFocusOnTouch(enabled bool) {
	C.QGraphicsScene_SetFocusOnTouch(this.h, (C.bool)(enabled))
}

func (this *QGraphicsScene) Update2() {
	C.QGraphicsScene_Update2(this.h)
}

func (this *QGraphicsScene) Invalidate2() {
	C.QGraphicsScene_Invalidate2(this.h)
}

func (this *QGraphicsScene) Advance() {
	C.QGraphicsScene_Advance(this.h)
}

func (this *QGraphicsScene) ClearSelection() {
	C.QGraphicsScene_ClearSelection(this.h)
}

func (this *QGraphicsScene) Clear() {
	C.QGraphicsScene_Clear(this.h)
}

func (this *QGraphicsScene) Changed(region []QRectF) {
	// For the C ABI, malloc a C array of raw pointers
	region_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(region))))
	defer C.free(unsafe.Pointer(region_CArray))
	for i := range region {
		region_CArray[i] = region[i].cPointer()
	}
	C.QGraphicsScene_Changed(this.h, &region_CArray[0], C.ulong(len(region)))
}

func (this *QGraphicsScene) OnChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScene_connect_Changed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsScene) SceneRectChanged(rect *QRectF) {
	C.QGraphicsScene_SceneRectChanged(this.h, rect.cPointer())
}

func (this *QGraphicsScene) OnSceneRectChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScene_connect_SceneRectChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsScene) SelectionChanged() {
	C.QGraphicsScene_SelectionChanged(this.h)
}

func (this *QGraphicsScene) OnSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScene_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsScene) FocusItemChanged(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason uintptr) {
	C.QGraphicsScene_FocusItemChanged(this.h, newFocus.cPointer(), oldFocus.cPointer(), (C.uintptr_t)(reason))
}

func (this *QGraphicsScene) OnFocusItemChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScene_connect_FocusItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsScene_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScene_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScene_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScene_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScene_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScene_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScene_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScene_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Render2(painter *QPainter, target *QRectF) {
	C.QGraphicsScene_Render2(this.h, painter.cPointer(), target.cPointer())
}

func (this *QGraphicsScene) Render3(painter *QPainter, target *QRectF, source *QRectF) {
	C.QGraphicsScene_Render3(this.h, painter.cPointer(), target.cPointer(), source.cPointer())
}

func (this *QGraphicsScene) Render4(painter *QPainter, target *QRectF, source *QRectF, aspectRatioMode uintptr) {
	C.QGraphicsScene_Render4(this.h, painter.cPointer(), target.cPointer(), source.cPointer(), (C.uintptr_t)(aspectRatioMode))
}

func (this *QGraphicsScene) Items1(order uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items1(this.h, (C.uintptr_t)(order), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items22(pos *QPointF, mode uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items22(this.h, pos.cPointer(), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items3(pos *QPointF, mode uintptr, order uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items3(this.h, pos.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(order), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items4(pos *QPointF, mode uintptr, order uintptr, deviceTransform *QTransform) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items4(this.h, pos.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(order), deviceTransform.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items23(rect *QRectF, mode uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items23(this.h, rect.cPointer(), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items32(rect *QRectF, mode uintptr, order uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items32(this.h, rect.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(order), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items42(rect *QRectF, mode uintptr, order uintptr, deviceTransform *QTransform) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items42(this.h, rect.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(order), deviceTransform.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items25(path *QPainterPath, mode uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items25(this.h, path.cPointer(), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items34(path *QPainterPath, mode uintptr, order uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items34(this.h, path.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(order), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items44(path *QPainterPath, mode uintptr, order uintptr, deviceTransform *QTransform) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items44(this.h, path.cPointer(), (C.uintptr_t)(mode), (C.uintptr_t)(order), deviceTransform.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) CollidingItems2(item *QGraphicsItem, mode uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_CollidingItems2(this.h, item.cPointer(), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) Items7(x float64, y float64, w float64, h float64, mode uintptr, order uintptr, deviceTransform *QTransform) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsScene_Items7(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.uintptr_t)(mode), (C.uintptr_t)(order), deviceTransform.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScene) SetSelectionArea22(path *QPainterPath, mode uintptr) {
	C.QGraphicsScene_SetSelectionArea22(this.h, path.cPointer(), (C.uintptr_t)(mode))
}

func (this *QGraphicsScene) SetSelectionArea3(path *QPainterPath, mode uintptr, deviceTransform *QTransform) {
	C.QGraphicsScene_SetSelectionArea3(this.h, path.cPointer(), (C.uintptr_t)(mode), deviceTransform.cPointer())
}

func (this *QGraphicsScene) SetSelectionArea32(path *QPainterPath, selectionOperation uintptr, mode uintptr) {
	C.QGraphicsScene_SetSelectionArea32(this.h, path.cPointer(), (C.uintptr_t)(selectionOperation), (C.uintptr_t)(mode))
}

func (this *QGraphicsScene) SetSelectionArea4(path *QPainterPath, selectionOperation uintptr, mode uintptr, deviceTransform *QTransform) {
	C.QGraphicsScene_SetSelectionArea4(this.h, path.cPointer(), (C.uintptr_t)(selectionOperation), (C.uintptr_t)(mode), deviceTransform.cPointer())
}

func (this *QGraphicsScene) AddEllipse22(rect *QRectF, pen *QPen) *QGraphicsEllipseItem {
	ret := C.QGraphicsScene_AddEllipse22(this.h, rect.cPointer(), pen.cPointer())
	return newQGraphicsEllipseItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddEllipse3(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	ret := C.QGraphicsScene_AddEllipse3(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer())
	return newQGraphicsEllipseItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddLine22(line *QLineF, pen *QPen) *QGraphicsLineItem {
	ret := C.QGraphicsScene_AddLine22(this.h, line.cPointer(), pen.cPointer())
	return newQGraphicsLineItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddPath2(path *QPainterPath, pen *QPen) *QGraphicsPathItem {
	ret := C.QGraphicsScene_AddPath2(this.h, path.cPointer(), pen.cPointer())
	return newQGraphicsPathItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddPath3(path *QPainterPath, pen *QPen, brush *QBrush) *QGraphicsPathItem {
	ret := C.QGraphicsScene_AddPath3(this.h, path.cPointer(), pen.cPointer(), brush.cPointer())
	return newQGraphicsPathItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddRect22(rect *QRectF, pen *QPen) *QGraphicsRectItem {
	ret := C.QGraphicsScene_AddRect22(this.h, rect.cPointer(), pen.cPointer())
	return newQGraphicsRectItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddRect3(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	ret := C.QGraphicsScene_AddRect3(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer())
	return newQGraphicsRectItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddText2(text string, font *QFont) *QGraphicsTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsScene_AddText2(this.h, text_Cstring, C.ulong(len(text)), font.cPointer())
	return newQGraphicsTextItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddSimpleText2(text string, font *QFont) *QGraphicsSimpleTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsScene_AddSimpleText2(this.h, text_Cstring, C.ulong(len(text)), font.cPointer())
	return newQGraphicsSimpleTextItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddWidget2(widget *QWidget, wFlags int) *QGraphicsProxyWidget {
	ret := C.QGraphicsScene_AddWidget2(this.h, widget.cPointer(), (C.int)(wFlags))
	return newQGraphicsProxyWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddEllipse5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsEllipseItem {
	ret := C.QGraphicsScene_AddEllipse5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer())
	return newQGraphicsEllipseItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddEllipse6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	ret := C.QGraphicsScene_AddEllipse6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer())
	return newQGraphicsEllipseItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddLine5(x1 float64, y1 float64, x2 float64, y2 float64, pen *QPen) *QGraphicsLineItem {
	ret := C.QGraphicsScene_AddLine5(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), pen.cPointer())
	return newQGraphicsLineItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddRect5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsRectItem {
	ret := C.QGraphicsScene_AddRect5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer())
	return newQGraphicsRectItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) AddRect6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	ret := C.QGraphicsScene_AddRect6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer())
	return newQGraphicsRectItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsScene) SetFocusItem2(item *QGraphicsItem, focusReason uintptr) {
	C.QGraphicsScene_SetFocusItem2(this.h, item.cPointer(), (C.uintptr_t)(focusReason))
}

func (this *QGraphicsScene) SetFocus1(focusReason uintptr) {
	C.QGraphicsScene_SetFocus1(this.h, (C.uintptr_t)(focusReason))
}

func (this *QGraphicsScene) Invalidate5(x float64, y float64, w float64, h float64, layers int) {
	C.QGraphicsScene_Invalidate5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(layers))
}

func (this *QGraphicsScene) Update1(rect *QRectF) {
	C.QGraphicsScene_Update1(this.h, rect.cPointer())
}

func (this *QGraphicsScene) Invalidate1(rect *QRectF) {
	C.QGraphicsScene_Invalidate1(this.h, rect.cPointer())
}

func (this *QGraphicsScene) Invalidate22(rect *QRectF, layers int) {
	C.QGraphicsScene_Invalidate22(this.h, rect.cPointer(), (C.int)(layers))
}

func (this *QGraphicsScene) Delete() {
	C.QGraphicsScene_Delete(this.h)
}

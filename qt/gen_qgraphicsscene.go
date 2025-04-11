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

type QGraphicsScene__ItemIndexMethod int

const (
	QGraphicsScene__BspTreeIndex QGraphicsScene__ItemIndexMethod = 0
	QGraphicsScene__NoIndex      QGraphicsScene__ItemIndexMethod = -1
)

type QGraphicsScene__SceneLayer int

const (
	QGraphicsScene__ItemLayer       QGraphicsScene__SceneLayer = 1
	QGraphicsScene__BackgroundLayer QGraphicsScene__SceneLayer = 2
	QGraphicsScene__ForegroundLayer QGraphicsScene__SceneLayer = 4
	QGraphicsScene__AllLayers       QGraphicsScene__SceneLayer = 65535
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

func (this *QGraphicsScene) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsScene constructs the type using only CGO pointers.
func newQGraphicsScene(h *C.QGraphicsScene) *QGraphicsScene {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGraphicsScene_virtbase(h, &outptr_QObject)

	return &QGraphicsScene{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQGraphicsScene constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsScene(h unsafe.Pointer) *QGraphicsScene {
	return newQGraphicsScene((*C.QGraphicsScene)(h))
}

// NewQGraphicsScene constructs a new QGraphicsScene object.
func NewQGraphicsScene() *QGraphicsScene {

	return newQGraphicsScene(C.QGraphicsScene_new())
}

// NewQGraphicsScene2 constructs a new QGraphicsScene object.
func NewQGraphicsScene2(sceneRect *QRectF) *QGraphicsScene {

	return newQGraphicsScene(C.QGraphicsScene_new2(sceneRect.cPointer()))
}

// NewQGraphicsScene3 constructs a new QGraphicsScene object.
func NewQGraphicsScene3(x float64, y float64, width float64, height float64) *QGraphicsScene {

	return newQGraphicsScene(C.QGraphicsScene_new3((C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height)))
}

// NewQGraphicsScene4 constructs a new QGraphicsScene object.
func NewQGraphicsScene4(parent *QObject) *QGraphicsScene {

	return newQGraphicsScene(C.QGraphicsScene_new4(parent.cPointer()))
}

// NewQGraphicsScene5 constructs a new QGraphicsScene object.
func NewQGraphicsScene5(sceneRect *QRectF, parent *QObject) *QGraphicsScene {

	return newQGraphicsScene(C.QGraphicsScene_new5(sceneRect.cPointer(), parent.cPointer()))
}

// NewQGraphicsScene6 constructs a new QGraphicsScene object.
func NewQGraphicsScene6(x float64, y float64, width float64, height float64, parent *QObject) *QGraphicsScene {

	return newQGraphicsScene(C.QGraphicsScene_new6((C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height), parent.cPointer()))
}

func (this *QGraphicsScene) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsScene_metaObject(this.h))
}

func (this *QGraphicsScene) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsScene_metacast(this.h, param1_Cstring))
}

func QGraphicsScene_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsScene_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsScene) SceneRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsScene_sceneRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) Width() float64 {
	return (float64)(C.QGraphicsScene_width(this.h))
}

func (this *QGraphicsScene) Height() float64 {
	return (float64)(C.QGraphicsScene_height(this.h))
}

func (this *QGraphicsScene) SetSceneRect(rect *QRectF) {
	C.QGraphicsScene_setSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsScene) SetSceneRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_setSceneRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Render(painter *QPainter) {
	C.QGraphicsScene_render(this.h, painter.cPointer())
}

func (this *QGraphicsScene) ItemIndexMethod() QGraphicsScene__ItemIndexMethod {
	return (QGraphicsScene__ItemIndexMethod)(C.QGraphicsScene_itemIndexMethod(this.h))
}

func (this *QGraphicsScene) SetItemIndexMethod(method QGraphicsScene__ItemIndexMethod) {
	C.QGraphicsScene_setItemIndexMethod(this.h, (C.int)(method))
}

func (this *QGraphicsScene) IsSortCacheEnabled() bool {
	return (bool)(C.QGraphicsScene_isSortCacheEnabled(this.h))
}

func (this *QGraphicsScene) SetSortCacheEnabled(enabled bool) {
	C.QGraphicsScene_setSortCacheEnabled(this.h, (C.bool)(enabled))
}

func (this *QGraphicsScene) BspTreeDepth() int {
	return (int)(C.QGraphicsScene_bspTreeDepth(this.h))
}

func (this *QGraphicsScene) SetBspTreeDepth(depth int) {
	C.QGraphicsScene_setBspTreeDepth(this.h, (C.int)(depth))
}

func (this *QGraphicsScene) ItemsBoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsScene_itemsBoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) Items() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) ItemsWithPos(pos *QPointF) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_itemsWithPos(this.h, pos.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) ItemsWithRect(rect *QRectF) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_itemsWithRect(this.h, rect.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_itemsWithPath(this.h, path.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) CollidingItems(item *QGraphicsItem) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_collidingItems(this.h, item.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) ItemAt(pos *QPointF, deviceTransform *QTransform) *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsScene_itemAt(this.h, pos.cPointer(), deviceTransform.cPointer()))
}

func (this *QGraphicsScene) Items2(x float64, y float64, w float64, h float64, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) ItemAt2(x float64, y float64, deviceTransform *QTransform) *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsScene_itemAt2(this.h, (C.double)(x), (C.double)(y), deviceTransform.cPointer()))
}

func (this *QGraphicsScene) SelectedItems() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_selectedItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) SelectionArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsScene_selectionArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetSelectionArea(path *QPainterPath, deviceTransform *QTransform) {
	C.QGraphicsScene_setSelectionArea(this.h, path.cPointer(), deviceTransform.cPointer())
}

func (this *QGraphicsScene) SetSelectionAreaWithPath(path *QPainterPath) {
	C.QGraphicsScene_setSelectionAreaWithPath(this.h, path.cPointer())
}

func (this *QGraphicsScene) SetSelectionArea2(path *QPainterPath, selectionOperation ItemSelectionOperation) {
	C.QGraphicsScene_setSelectionArea2(this.h, path.cPointer(), (C.int)(selectionOperation))
}

func (this *QGraphicsScene) CreateItemGroup(items []*QGraphicsItem) *QGraphicsItemGroup {
	items_CArray := (*[0xffff]*C.QGraphicsItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	return newQGraphicsItemGroup(C.QGraphicsScene_createItemGroup(this.h, items_ma))
}

func (this *QGraphicsScene) DestroyItemGroup(group *QGraphicsItemGroup) {
	C.QGraphicsScene_destroyItemGroup(this.h, group.cPointer())
}

func (this *QGraphicsScene) AddItem(item *QGraphicsItem) {
	C.QGraphicsScene_addItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) AddEllipse(rect *QRectF) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem(C.QGraphicsScene_addEllipse(this.h, rect.cPointer()))
}

func (this *QGraphicsScene) AddLine(line *QLineF) *QGraphicsLineItem {
	return newQGraphicsLineItem(C.QGraphicsScene_addLine(this.h, line.cPointer()))
}

func (this *QGraphicsScene) AddPath(path *QPainterPath) *QGraphicsPathItem {
	return newQGraphicsPathItem(C.QGraphicsScene_addPath(this.h, path.cPointer()))
}

func (this *QGraphicsScene) AddPixmap(pixmap *QPixmap) *QGraphicsPixmapItem {
	return newQGraphicsPixmapItem(C.QGraphicsScene_addPixmap(this.h, pixmap.cPointer()))
}

func (this *QGraphicsScene) AddRect(rect *QRectF) *QGraphicsRectItem {
	return newQGraphicsRectItem(C.QGraphicsScene_addRect(this.h, rect.cPointer()))
}

func (this *QGraphicsScene) AddText(text string) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQGraphicsTextItem(C.QGraphicsScene_addText(this.h, text_ms))
}

func (this *QGraphicsScene) AddSimpleText(text string) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQGraphicsSimpleTextItem(C.QGraphicsScene_addSimpleText(this.h, text_ms))
}

func (this *QGraphicsScene) AddWidget(widget *QWidget) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget(C.QGraphicsScene_addWidget(this.h, widget.cPointer()))
}

func (this *QGraphicsScene) AddEllipse2(x float64, y float64, w float64, h float64) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem(C.QGraphicsScene_addEllipse2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
}

func (this *QGraphicsScene) AddLine2(x1 float64, y1 float64, x2 float64, y2 float64) *QGraphicsLineItem {
	return newQGraphicsLineItem(C.QGraphicsScene_addLine2(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2)))
}

func (this *QGraphicsScene) AddRect2(x float64, y float64, w float64, h float64) *QGraphicsRectItem {
	return newQGraphicsRectItem(C.QGraphicsScene_addRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
}

func (this *QGraphicsScene) RemoveItem(item *QGraphicsItem) {
	C.QGraphicsScene_removeItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) FocusItem() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsScene_focusItem(this.h))
}

func (this *QGraphicsScene) SetFocusItem(item *QGraphicsItem) {
	C.QGraphicsScene_setFocusItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) HasFocus() bool {
	return (bool)(C.QGraphicsScene_hasFocus(this.h))
}

func (this *QGraphicsScene) SetFocus() {
	C.QGraphicsScene_setFocus(this.h)
}

func (this *QGraphicsScene) ClearFocus() {
	C.QGraphicsScene_clearFocus(this.h)
}

func (this *QGraphicsScene) SetStickyFocus(enabled bool) {
	C.QGraphicsScene_setStickyFocus(this.h, (C.bool)(enabled))
}

func (this *QGraphicsScene) StickyFocus() bool {
	return (bool)(C.QGraphicsScene_stickyFocus(this.h))
}

func (this *QGraphicsScene) MouseGrabberItem() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsScene_mouseGrabberItem(this.h))
}

func (this *QGraphicsScene) BackgroundBrush() *QBrush {
	_goptr := newQBrush(C.QGraphicsScene_backgroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetBackgroundBrush(brush *QBrush) {
	C.QGraphicsScene_setBackgroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsScene) ForegroundBrush() *QBrush {
	_goptr := newQBrush(C.QGraphicsScene_foregroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetForegroundBrush(brush *QBrush) {
	C.QGraphicsScene_setForegroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsScene) InputMethodQuery(query InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QGraphicsScene_inputMethodQuery(this.h, (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) Views() []*QGraphicsView {
	var _ma C.struct_miqt_array = C.QGraphicsScene_views(this.h)
	_ret := make([]*QGraphicsView, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsView)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsView(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Update(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_update(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Invalidate(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_invalidate(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Style() *QStyle {
	return newQStyle(C.QGraphicsScene_style(this.h))
}

func (this *QGraphicsScene) SetStyle(style *QStyle) {
	C.QGraphicsScene_setStyle(this.h, style.cPointer())
}

func (this *QGraphicsScene) Font() *QFont {
	_goptr := newQFont(C.QGraphicsScene_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetFont(font *QFont) {
	C.QGraphicsScene_setFont(this.h, font.cPointer())
}

func (this *QGraphicsScene) Palette() *QPalette {
	_goptr := newQPalette(C.QGraphicsScene_palette(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetPalette(palette *QPalette) {
	C.QGraphicsScene_setPalette(this.h, palette.cPointer())
}

func (this *QGraphicsScene) IsActive() bool {
	return (bool)(C.QGraphicsScene_isActive(this.h))
}

func (this *QGraphicsScene) ActivePanel() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsScene_activePanel(this.h))
}

func (this *QGraphicsScene) SetActivePanel(item *QGraphicsItem) {
	C.QGraphicsScene_setActivePanel(this.h, item.cPointer())
}

func (this *QGraphicsScene) ActiveWindow() *QGraphicsWidget {
	return newQGraphicsWidget(C.QGraphicsScene_activeWindow(this.h))
}

func (this *QGraphicsScene) SetActiveWindow(widget *QGraphicsWidget) {
	C.QGraphicsScene_setActiveWindow(this.h, widget.cPointer())
}

func (this *QGraphicsScene) SendEvent(item *QGraphicsItem, event *QEvent) bool {
	return (bool)(C.QGraphicsScene_sendEvent(this.h, item.cPointer(), event.cPointer()))
}

func (this *QGraphicsScene) MinimumRenderSize() float64 {
	return (float64)(C.QGraphicsScene_minimumRenderSize(this.h))
}

func (this *QGraphicsScene) SetMinimumRenderSize(minSize float64) {
	C.QGraphicsScene_setMinimumRenderSize(this.h, (C.double)(minSize))
}

func (this *QGraphicsScene) FocusOnTouch() bool {
	return (bool)(C.QGraphicsScene_focusOnTouch(this.h))
}

func (this *QGraphicsScene) SetFocusOnTouch(enabled bool) {
	C.QGraphicsScene_setFocusOnTouch(this.h, (C.bool)(enabled))
}

func (this *QGraphicsScene) Update2() {
	C.QGraphicsScene_update2(this.h)
}

func (this *QGraphicsScene) Invalidate2() {
	C.QGraphicsScene_invalidate2(this.h)
}

func (this *QGraphicsScene) Advance() {
	C.QGraphicsScene_advance(this.h)
}

func (this *QGraphicsScene) ClearSelection() {
	C.QGraphicsScene_clearSelection(this.h)
}

func (this *QGraphicsScene) Clear() {
	C.QGraphicsScene_clear(this.h)
}

func (this *QGraphicsScene) Changed(region []QRectF) {
	region_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(region))))
	defer C.free(unsafe.Pointer(region_CArray))
	for i := range region {
		region_CArray[i] = region[i].cPointer()
	}
	region_ma := C.struct_miqt_array{len: C.size_t(len(region)), data: unsafe.Pointer(region_CArray)}
	C.QGraphicsScene_changed(this.h, region_ma)
}
func (this *QGraphicsScene) OnChanged(slot func(region []QRectF)) {
	C.QGraphicsScene_connect_changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_changed
func miqt_exec_callback_QGraphicsScene_changed(cb C.intptr_t, region C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(region []QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var region_ma C.struct_miqt_array = region
	region_ret := make([]QRectF, int(region_ma.len))
	region_outCast := (*[0xffff]*C.QRectF)(unsafe.Pointer(region_ma.data)) // hey ya
	for i := 0; i < int(region_ma.len); i++ {
		region_lv_goptr := newQRectF(region_outCast[i])
		region_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		region_ret[i] = *region_lv_goptr
	}
	slotval1 := region_ret

	gofunc(slotval1)
}

func (this *QGraphicsScene) SceneRectChanged(rect *QRectF) {
	C.QGraphicsScene_sceneRectChanged(this.h, rect.cPointer())
}
func (this *QGraphicsScene) OnSceneRectChanged(slot func(rect *QRectF)) {
	C.QGraphicsScene_connect_sceneRectChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_sceneRectChanged
func miqt_exec_callback_QGraphicsScene_sceneRectChanged(cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc(slotval1)
}

func (this *QGraphicsScene) SelectionChanged() {
	C.QGraphicsScene_selectionChanged(this.h)
}
func (this *QGraphicsScene) OnSelectionChanged(slot func()) {
	C.QGraphicsScene_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_selectionChanged
func miqt_exec_callback_QGraphicsScene_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScene) FocusItemChanged(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason) {
	C.QGraphicsScene_focusItemChanged(this.h, newFocus.cPointer(), oldFocus.cPointer(), (C.int)(reason))
}
func (this *QGraphicsScene) OnFocusItemChanged(slot func(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason)) {
	C.QGraphicsScene_connect_focusItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_focusItemChanged
func miqt_exec_callback_QGraphicsScene_focusItemChanged(cb C.intptr_t, newFocus *C.QGraphicsItem, oldFocus *C.QGraphicsItem, reason C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(newFocus)

	slotval2 := newQGraphicsItem(oldFocus)

	slotval3 := (FocusReason)(reason)

	gofunc(slotval1, slotval2, slotval3)
}

func QGraphicsScene_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsScene_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsScene_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsScene_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsScene) Render2(painter *QPainter, target *QRectF) {
	C.QGraphicsScene_render2(this.h, painter.cPointer(), target.cPointer())
}

func (this *QGraphicsScene) Render3(painter *QPainter, target *QRectF, source *QRectF) {
	C.QGraphicsScene_render3(this.h, painter.cPointer(), target.cPointer(), source.cPointer())
}

func (this *QGraphicsScene) Render4(painter *QPainter, target *QRectF, source *QRectF, aspectRatioMode AspectRatioMode) {
	C.QGraphicsScene_render4(this.h, painter.cPointer(), target.cPointer(), source.cPointer(), (C.int)(aspectRatioMode))
}

func (this *QGraphicsScene) ItemsWithOrder(order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_itemsWithOrder(this.h, (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items3(pos *QPointF, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items3(this.h, pos.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items4(pos *QPointF, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items4(this.h, pos.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items5(pos *QPointF, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items5(this.h, pos.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items6(rect *QRectF, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items6(this.h, rect.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items7(rect *QRectF, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items7(this.h, rect.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items8(rect *QRectF, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items8(this.h, rect.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items12(path *QPainterPath, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items12(this.h, path.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items13(path *QPainterPath, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items13(this.h, path.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items14(path *QPainterPath, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items14(this.h, path.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) CollidingItems2(item *QGraphicsItem, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_collidingItems2(this.h, item.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) Items15(x float64, y float64, w float64, h float64, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_items15(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsScene) SetSelectionArea3(path *QPainterPath, mode ItemSelectionMode) {
	C.QGraphicsScene_setSelectionArea3(this.h, path.cPointer(), (C.int)(mode))
}

func (this *QGraphicsScene) SetSelectionArea4(path *QPainterPath, mode ItemSelectionMode, deviceTransform *QTransform) {
	C.QGraphicsScene_setSelectionArea4(this.h, path.cPointer(), (C.int)(mode), deviceTransform.cPointer())
}

func (this *QGraphicsScene) SetSelectionArea5(path *QPainterPath, selectionOperation ItemSelectionOperation, mode ItemSelectionMode) {
	C.QGraphicsScene_setSelectionArea5(this.h, path.cPointer(), (C.int)(selectionOperation), (C.int)(mode))
}

func (this *QGraphicsScene) SetSelectionArea6(path *QPainterPath, selectionOperation ItemSelectionOperation, mode ItemSelectionMode, deviceTransform *QTransform) {
	C.QGraphicsScene_setSelectionArea6(this.h, path.cPointer(), (C.int)(selectionOperation), (C.int)(mode), deviceTransform.cPointer())
}

func (this *QGraphicsScene) AddEllipse3(rect *QRectF, pen *QPen) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem(C.QGraphicsScene_addEllipse3(this.h, rect.cPointer(), pen.cPointer()))
}

func (this *QGraphicsScene) AddEllipse4(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem(C.QGraphicsScene_addEllipse4(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer()))
}

func (this *QGraphicsScene) AddLine3(line *QLineF, pen *QPen) *QGraphicsLineItem {
	return newQGraphicsLineItem(C.QGraphicsScene_addLine3(this.h, line.cPointer(), pen.cPointer()))
}

func (this *QGraphicsScene) AddPath2(path *QPainterPath, pen *QPen) *QGraphicsPathItem {
	return newQGraphicsPathItem(C.QGraphicsScene_addPath2(this.h, path.cPointer(), pen.cPointer()))
}

func (this *QGraphicsScene) AddPath3(path *QPainterPath, pen *QPen, brush *QBrush) *QGraphicsPathItem {
	return newQGraphicsPathItem(C.QGraphicsScene_addPath3(this.h, path.cPointer(), pen.cPointer(), brush.cPointer()))
}

func (this *QGraphicsScene) AddRect3(rect *QRectF, pen *QPen) *QGraphicsRectItem {
	return newQGraphicsRectItem(C.QGraphicsScene_addRect3(this.h, rect.cPointer(), pen.cPointer()))
}

func (this *QGraphicsScene) AddRect4(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	return newQGraphicsRectItem(C.QGraphicsScene_addRect4(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer()))
}

func (this *QGraphicsScene) AddText2(text string, font *QFont) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQGraphicsTextItem(C.QGraphicsScene_addText2(this.h, text_ms, font.cPointer()))
}

func (this *QGraphicsScene) AddSimpleText2(text string, font *QFont) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return newQGraphicsSimpleTextItem(C.QGraphicsScene_addSimpleText2(this.h, text_ms, font.cPointer()))
}

func (this *QGraphicsScene) AddWidget2(widget *QWidget, wFlags WindowType) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget(C.QGraphicsScene_addWidget2(this.h, widget.cPointer(), (C.int)(wFlags)))
}

func (this *QGraphicsScene) AddEllipse5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem(C.QGraphicsScene_addEllipse5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer()))
}

func (this *QGraphicsScene) AddEllipse6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem(C.QGraphicsScene_addEllipse6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer()))
}

func (this *QGraphicsScene) AddLine4(x1 float64, y1 float64, x2 float64, y2 float64, pen *QPen) *QGraphicsLineItem {
	return newQGraphicsLineItem(C.QGraphicsScene_addLine4(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), pen.cPointer()))
}

func (this *QGraphicsScene) AddRect5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsRectItem {
	return newQGraphicsRectItem(C.QGraphicsScene_addRect5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer()))
}

func (this *QGraphicsScene) AddRect6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	return newQGraphicsRectItem(C.QGraphicsScene_addRect6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer()))
}

func (this *QGraphicsScene) SetFocusItem2(item *QGraphicsItem, focusReason FocusReason) {
	C.QGraphicsScene_setFocusItem2(this.h, item.cPointer(), (C.int)(focusReason))
}

func (this *QGraphicsScene) SetFocusWithFocusReason(focusReason FocusReason) {
	C.QGraphicsScene_setFocusWithFocusReason(this.h, (C.int)(focusReason))
}

func (this *QGraphicsScene) Invalidate3(x float64, y float64, w float64, h float64, layers QGraphicsScene__SceneLayer) {
	C.QGraphicsScene_invalidate3(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(layers))
}

func (this *QGraphicsScene) UpdateWithRect(rect *QRectF) {
	C.QGraphicsScene_updateWithRect(this.h, rect.cPointer())
}

func (this *QGraphicsScene) InvalidateWithRect(rect *QRectF) {
	C.QGraphicsScene_invalidateWithRect(this.h, rect.cPointer())
}

func (this *QGraphicsScene) Invalidate4(rect *QRectF, layers QGraphicsScene__SceneLayer) {
	C.QGraphicsScene_invalidate4(this.h, rect.cPointer(), (C.int)(layers))
}

// FocusNextPrevChild can only be called from a QGraphicsScene that was directly constructed.
func (this *QGraphicsScene) FocusNextPrevChild(next bool) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsScene_protectedbase_focusNextPrevChild(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(next)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGraphicsScene that was directly constructed.
func (this *QGraphicsScene) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsScene_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsScene that was directly constructed.
func (this *QGraphicsScene) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsScene_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsScene that was directly constructed.
func (this *QGraphicsScene) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsScene_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsScene that was directly constructed.
func (this *QGraphicsScene) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsScene_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsScene) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsScene_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsScene) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsScene_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_inputMethodQuery
func miqt_exec_callback_QGraphicsScene_inputMethodQuery(self *C.QGraphicsScene, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsScene{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsScene) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsScene_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsScene) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsScene_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_event
func miqt_exec_callback_QGraphicsScene_event(self *C.QGraphicsScene, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsScene{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsScene) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsScene_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsScene) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsScene_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_eventFilter
func miqt_exec_callback_QGraphicsScene_eventFilter(self *C.QGraphicsScene, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsScene{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsScene) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsScene_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsScene_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_contextMenuEvent
func miqt_exec_callback_QGraphicsScene_contextMenuEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsScene_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_dragEnterEvent
func miqt_exec_callback_QGraphicsScene_dragEnterEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsScene_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_dragMoveEvent
func miqt_exec_callback_QGraphicsScene_dragMoveEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsScene_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_dragLeaveEvent
func miqt_exec_callback_QGraphicsScene_dragLeaveEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsScene_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_dropEvent
func miqt_exec_callback_QGraphicsScene_dropEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsScene_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsScene_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_focusInEvent
func miqt_exec_callback_QGraphicsScene_focusInEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsScene_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsScene_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_focusOutEvent
func miqt_exec_callback_QGraphicsScene_focusOutEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_HelpEvent(event *QGraphicsSceneHelpEvent) {

	C.QGraphicsScene_virtualbase_helpEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnHelpEvent(slot func(super func(event *QGraphicsSceneHelpEvent), event *QGraphicsSceneHelpEvent)) {
	ok := C.QGraphicsScene_override_virtual_helpEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_helpEvent
func miqt_exec_callback_QGraphicsScene_helpEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneHelpEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHelpEvent), event *QGraphicsSceneHelpEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHelpEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_HelpEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsScene_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsScene_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_keyPressEvent
func miqt_exec_callback_QGraphicsScene_keyPressEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsScene_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsScene_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_keyReleaseEvent
func miqt_exec_callback_QGraphicsScene_keyReleaseEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsScene_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_mousePressEvent
func miqt_exec_callback_QGraphicsScene_mousePressEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsScene_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_mouseMoveEvent
func miqt_exec_callback_QGraphicsScene_mouseMoveEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsScene_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_mouseReleaseEvent
func miqt_exec_callback_QGraphicsScene_mouseReleaseEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsScene_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsScene_mouseDoubleClickEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsScene_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsScene_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_wheelEvent
func miqt_exec_callback_QGraphicsScene_wheelEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsScene_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsScene_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_inputMethodEvent
func miqt_exec_callback_QGraphicsScene_inputMethodEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DrawBackground(painter *QPainter, rect *QRectF) {

	C.QGraphicsScene_virtualbase_drawBackground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsScene) OnDrawBackground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	ok := C.QGraphicsScene_override_virtual_drawBackground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_drawBackground
func miqt_exec_callback_QGraphicsScene_drawBackground(self *C.QGraphicsScene, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRectF(rect)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DrawBackground, slotval1, slotval2)

}

func (this *QGraphicsScene) callVirtualBase_DrawForeground(painter *QPainter, rect *QRectF) {

	C.QGraphicsScene_virtualbase_drawForeground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsScene) OnDrawForeground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	ok := C.QGraphicsScene_override_virtual_drawForeground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_drawForeground
func miqt_exec_callback_QGraphicsScene_drawForeground(self *C.QGraphicsScene, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRectF(rect)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DrawForeground, slotval1, slotval2)

}

func (this *QGraphicsScene) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsScene_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsScene_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_timerEvent
func miqt_exec_callback_QGraphicsScene_timerEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsScene_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsScene_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_childEvent
func miqt_exec_callback_QGraphicsScene_childEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsScene_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsScene_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_customEvent
func miqt_exec_callback_QGraphicsScene_customEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsScene_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsScene) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsScene_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_connectNotify
func miqt_exec_callback_QGraphicsScene_connectNotify(self *C.QGraphicsScene, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsScene_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsScene) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsScene_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScene_disconnectNotify
func miqt_exec_callback_QGraphicsScene_disconnectNotify(self *C.QGraphicsScene, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsScene) Delete() {
	C.QGraphicsScene_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsScene) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsScene) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

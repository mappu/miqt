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
	return newQMetaObject_U(unsafe.Pointer(C.QGraphicsScene_MetaObject(this.h)))
}

func QGraphicsScene_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsScene_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsScene_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsScene_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsScene) SceneRect() *QRectF {
	_ret := C.QGraphicsScene_SceneRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) Width() float64 {
	return (float64)(C.QGraphicsScene_Width(this.h))
}

func (this *QGraphicsScene) Height() float64 {
	return (float64)(C.QGraphicsScene_Height(this.h))
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

func (this *QGraphicsScene) ItemIndexMethod() QGraphicsScene__ItemIndexMethod {
	return (QGraphicsScene__ItemIndexMethod)(C.QGraphicsScene_ItemIndexMethod(this.h))
}

func (this *QGraphicsScene) SetItemIndexMethod(method QGraphicsScene__ItemIndexMethod) {
	C.QGraphicsScene_SetItemIndexMethod(this.h, (C.int)(method))
}

func (this *QGraphicsScene) IsSortCacheEnabled() bool {
	return (bool)(C.QGraphicsScene_IsSortCacheEnabled(this.h))
}

func (this *QGraphicsScene) SetSortCacheEnabled(enabled bool) {
	C.QGraphicsScene_SetSortCacheEnabled(this.h, (C.bool)(enabled))
}

func (this *QGraphicsScene) BspTreeDepth() int {
	return (int)(C.QGraphicsScene_BspTreeDepth(this.h))
}

func (this *QGraphicsScene) SetBspTreeDepth(depth int) {
	C.QGraphicsScene_SetBspTreeDepth(this.h, (C.int)(depth))
}

func (this *QGraphicsScene) ItemsBoundingRect() *QRectF {
	_ret := C.QGraphicsScene_ItemsBoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) Items() []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) ItemsWithPos(pos *QPointF) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_ItemsWithPos(this.h, pos.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) ItemsWithRect(rect *QRectF) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_ItemsWithRect(this.h, rect.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_ItemsWithPath(this.h, path.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) CollidingItems(item *QGraphicsItem) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_CollidingItems(this.h, item.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) ItemAt(pos *QPointF, deviceTransform *QTransform) *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsScene_ItemAt(this.h, pos.cPointer(), deviceTransform.cPointer())))
}

func (this *QGraphicsScene) Items2(x float64, y float64, w float64, h float64, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) ItemAt2(x float64, y float64, deviceTransform *QTransform) *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsScene_ItemAt2(this.h, (C.double)(x), (C.double)(y), deviceTransform.cPointer())))
}

func (this *QGraphicsScene) SelectedItems() []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_SelectedItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) SelectionArea() *QPainterPath {
	_ret := C.QGraphicsScene_SelectionArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetSelectionArea(path *QPainterPath, deviceTransform *QTransform) {
	C.QGraphicsScene_SetSelectionArea(this.h, path.cPointer(), deviceTransform.cPointer())
}

func (this *QGraphicsScene) SetSelectionAreaWithPath(path *QPainterPath) {
	C.QGraphicsScene_SetSelectionAreaWithPath(this.h, path.cPointer())
}

func (this *QGraphicsScene) SetSelectionArea2(path *QPainterPath, selectionOperation ItemSelectionOperation) {
	C.QGraphicsScene_SetSelectionArea2(this.h, path.cPointer(), (C.int)(selectionOperation))
}

func (this *QGraphicsScene) CreateItemGroup(items []*QGraphicsItem) *QGraphicsItemGroup {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QGraphicsItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	return newQGraphicsItemGroup_U(unsafe.Pointer(C.QGraphicsScene_CreateItemGroup(this.h, items_ma)))
}

func (this *QGraphicsScene) DestroyItemGroup(group *QGraphicsItemGroup) {
	C.QGraphicsScene_DestroyItemGroup(this.h, group.cPointer())
}

func (this *QGraphicsScene) AddItem(item *QGraphicsItem) {
	C.QGraphicsScene_AddItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) AddEllipse(rect *QRectF) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem_U(unsafe.Pointer(C.QGraphicsScene_AddEllipse(this.h, rect.cPointer())))
}

func (this *QGraphicsScene) AddLine(line *QLineF) *QGraphicsLineItem {
	return newQGraphicsLineItem_U(unsafe.Pointer(C.QGraphicsScene_AddLine(this.h, line.cPointer())))
}

func (this *QGraphicsScene) AddPath(path *QPainterPath) *QGraphicsPathItem {
	return newQGraphicsPathItem_U(unsafe.Pointer(C.QGraphicsScene_AddPath(this.h, path.cPointer())))
}

func (this *QGraphicsScene) AddPixmap(pixmap *QPixmap) *QGraphicsPixmapItem {
	return newQGraphicsPixmapItem_U(unsafe.Pointer(C.QGraphicsScene_AddPixmap(this.h, pixmap.cPointer())))
}

func (this *QGraphicsScene) AddRect(rect *QRectF) *QGraphicsRectItem {
	return newQGraphicsRectItem_U(unsafe.Pointer(C.QGraphicsScene_AddRect(this.h, rect.cPointer())))
}

func (this *QGraphicsScene) AddText(text string) *QGraphicsTextItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQGraphicsTextItem_U(unsafe.Pointer(C.QGraphicsScene_AddText(this.h, (*C.struct_miqt_string)(text_ms))))
}

func (this *QGraphicsScene) AddSimpleText(text string) *QGraphicsSimpleTextItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQGraphicsSimpleTextItem_U(unsafe.Pointer(C.QGraphicsScene_AddSimpleText(this.h, (*C.struct_miqt_string)(text_ms))))
}

func (this *QGraphicsScene) AddWidget(widget *QWidget) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget_U(unsafe.Pointer(C.QGraphicsScene_AddWidget(this.h, widget.cPointer())))
}

func (this *QGraphicsScene) AddEllipse2(x float64, y float64, w float64, h float64) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem_U(unsafe.Pointer(C.QGraphicsScene_AddEllipse2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))))
}

func (this *QGraphicsScene) AddLine2(x1 float64, y1 float64, x2 float64, y2 float64) *QGraphicsLineItem {
	return newQGraphicsLineItem_U(unsafe.Pointer(C.QGraphicsScene_AddLine2(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))))
}

func (this *QGraphicsScene) AddRect2(x float64, y float64, w float64, h float64) *QGraphicsRectItem {
	return newQGraphicsRectItem_U(unsafe.Pointer(C.QGraphicsScene_AddRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))))
}

func (this *QGraphicsScene) RemoveItem(item *QGraphicsItem) {
	C.QGraphicsScene_RemoveItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) FocusItem() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsScene_FocusItem(this.h)))
}

func (this *QGraphicsScene) SetFocusItem(item *QGraphicsItem) {
	C.QGraphicsScene_SetFocusItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) HasFocus() bool {
	return (bool)(C.QGraphicsScene_HasFocus(this.h))
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
	return (bool)(C.QGraphicsScene_StickyFocus(this.h))
}

func (this *QGraphicsScene) MouseGrabberItem() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsScene_MouseGrabberItem(this.h)))
}

func (this *QGraphicsScene) BackgroundBrush() *QBrush {
	_ret := C.QGraphicsScene_BackgroundBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetBackgroundBrush(brush *QBrush) {
	C.QGraphicsScene_SetBackgroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsScene) ForegroundBrush() *QBrush {
	_ret := C.QGraphicsScene_ForegroundBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetForegroundBrush(brush *QBrush) {
	C.QGraphicsScene_SetForegroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsScene) InputMethodQuery(query InputMethodQuery) *QVariant {
	_ret := C.QGraphicsScene_InputMethodQuery(this.h, (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) Views() []*QGraphicsView {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Views(this.h)
	_ret := make([]*QGraphicsView, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsView)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsView_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Update(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_Update(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Invalidate(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_Invalidate(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Style() *QStyle {
	return newQStyle_U(unsafe.Pointer(C.QGraphicsScene_Style(this.h)))
}

func (this *QGraphicsScene) SetStyle(style *QStyle) {
	C.QGraphicsScene_SetStyle(this.h, style.cPointer())
}

func (this *QGraphicsScene) Font() *QFont {
	_ret := C.QGraphicsScene_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetFont(font *QFont) {
	C.QGraphicsScene_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsScene) Palette() *QPalette {
	_ret := C.QGraphicsScene_Palette(this.h)
	_goptr := newQPalette(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScene) SetPalette(palette *QPalette) {
	C.QGraphicsScene_SetPalette(this.h, palette.cPointer())
}

func (this *QGraphicsScene) IsActive() bool {
	return (bool)(C.QGraphicsScene_IsActive(this.h))
}

func (this *QGraphicsScene) ActivePanel() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsScene_ActivePanel(this.h)))
}

func (this *QGraphicsScene) SetActivePanel(item *QGraphicsItem) {
	C.QGraphicsScene_SetActivePanel(this.h, item.cPointer())
}

func (this *QGraphicsScene) ActiveWindow() *QGraphicsWidget {
	return newQGraphicsWidget_U(unsafe.Pointer(C.QGraphicsScene_ActiveWindow(this.h)))
}

func (this *QGraphicsScene) SetActiveWindow(widget *QGraphicsWidget) {
	C.QGraphicsScene_SetActiveWindow(this.h, widget.cPointer())
}

func (this *QGraphicsScene) SendEvent(item *QGraphicsItem, event *QEvent) bool {
	return (bool)(C.QGraphicsScene_SendEvent(this.h, item.cPointer(), event.cPointer()))
}

func (this *QGraphicsScene) MinimumRenderSize() float64 {
	return (float64)(C.QGraphicsScene_MinimumRenderSize(this.h))
}

func (this *QGraphicsScene) SetMinimumRenderSize(minSize float64) {
	C.QGraphicsScene_SetMinimumRenderSize(this.h, (C.double)(minSize))
}

func (this *QGraphicsScene) FocusOnTouch() bool {
	return (bool)(C.QGraphicsScene_FocusOnTouch(this.h))
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
	region_ma := &C.struct_miqt_array{len: C.size_t(len(region)), data: unsafe.Pointer(region_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(region_ma))
	C.QGraphicsScene_Changed(this.h, region_ma)
}
func (this *QGraphicsScene) OnChanged(slot func(region []QRectF)) {
	C.QGraphicsScene_connect_Changed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsScene_Changed
func miqt_exec_callback_QGraphicsScene_Changed(cb *C.void, region *C.struct_miqt_array) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(region []QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var region_ma *C.struct_miqt_array = region
	region_ret := make([]QRectF, int(region_ma.len))
	region_outCast := (*[0xffff]*C.QRectF)(unsafe.Pointer(region_ma.data)) // hey ya
	for i := 0; i < int(region_ma.len); i++ {
		region_lv_ret := region_outCast[i]
		region_lv_goptr := newQRectF(region_lv_ret)
		region_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		region_ret[i] = *region_lv_goptr
	}
	C.free(unsafe.Pointer(region_ma))
	slotval1 := region_ret

	gofunc(slotval1)
}

func (this *QGraphicsScene) SceneRectChanged(rect *QRectF) {
	C.QGraphicsScene_SceneRectChanged(this.h, rect.cPointer())
}
func (this *QGraphicsScene) OnSceneRectChanged(slot func(rect *QRectF)) {
	C.QGraphicsScene_connect_SceneRectChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsScene_SceneRectChanged
func miqt_exec_callback_QGraphicsScene_SceneRectChanged(cb *C.void, rect *C.QRectF) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF_U(unsafe.Pointer(rect))

	gofunc(slotval1)
}

func (this *QGraphicsScene) SelectionChanged() {
	C.QGraphicsScene_SelectionChanged(this.h)
}
func (this *QGraphicsScene) OnSelectionChanged(slot func()) {
	C.QGraphicsScene_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsScene_SelectionChanged
func miqt_exec_callback_QGraphicsScene_SelectionChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScene) FocusItemChanged(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason) {
	C.QGraphicsScene_FocusItemChanged(this.h, newFocus.cPointer(), oldFocus.cPointer(), (C.int)(reason))
}
func (this *QGraphicsScene) OnFocusItemChanged(slot func(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason)) {
	C.QGraphicsScene_connect_FocusItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsScene_FocusItemChanged
func miqt_exec_callback_QGraphicsScene_FocusItemChanged(cb *C.void, newFocus *C.QGraphicsItem, oldFocus *C.QGraphicsItem, reason C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem_U(unsafe.Pointer(newFocus))
	slotval2 := newQGraphicsItem_U(unsafe.Pointer(oldFocus))
	slotval3 := (FocusReason)(reason)

	gofunc(slotval1, slotval2, slotval3)
}

func QGraphicsScene_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsScene_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsScene_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsScene_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsScene_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsScene_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsScene_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsScene_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsScene) Render2(painter *QPainter, target *QRectF) {
	C.QGraphicsScene_Render2(this.h, painter.cPointer(), target.cPointer())
}

func (this *QGraphicsScene) Render3(painter *QPainter, target *QRectF, source *QRectF) {
	C.QGraphicsScene_Render3(this.h, painter.cPointer(), target.cPointer(), source.cPointer())
}

func (this *QGraphicsScene) Render4(painter *QPainter, target *QRectF, source *QRectF, aspectRatioMode AspectRatioMode) {
	C.QGraphicsScene_Render4(this.h, painter.cPointer(), target.cPointer(), source.cPointer(), (C.int)(aspectRatioMode))
}

func (this *QGraphicsScene) Items1(order SortOrder) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items1(this.h, (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items22(pos *QPointF, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items22(this.h, pos.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items3(pos *QPointF, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items3(this.h, pos.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items4(pos *QPointF, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items4(this.h, pos.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items23(rect *QRectF, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items23(this.h, rect.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items32(rect *QRectF, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items32(this.h, rect.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items42(rect *QRectF, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items42(this.h, rect.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items25(path *QPainterPath, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items25(this.h, path.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items34(path *QPainterPath, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items34(this.h, path.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items44(path *QPainterPath, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items44(this.h, path.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) CollidingItems2(item *QGraphicsItem, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_CollidingItems2(this.h, item.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) Items7(x float64, y float64, w float64, h float64, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsScene_Items7(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsScene) SetSelectionArea22(path *QPainterPath, mode ItemSelectionMode) {
	C.QGraphicsScene_SetSelectionArea22(this.h, path.cPointer(), (C.int)(mode))
}

func (this *QGraphicsScene) SetSelectionArea3(path *QPainterPath, mode ItemSelectionMode, deviceTransform *QTransform) {
	C.QGraphicsScene_SetSelectionArea3(this.h, path.cPointer(), (C.int)(mode), deviceTransform.cPointer())
}

func (this *QGraphicsScene) SetSelectionArea32(path *QPainterPath, selectionOperation ItemSelectionOperation, mode ItemSelectionMode) {
	C.QGraphicsScene_SetSelectionArea32(this.h, path.cPointer(), (C.int)(selectionOperation), (C.int)(mode))
}

func (this *QGraphicsScene) SetSelectionArea4(path *QPainterPath, selectionOperation ItemSelectionOperation, mode ItemSelectionMode, deviceTransform *QTransform) {
	C.QGraphicsScene_SetSelectionArea4(this.h, path.cPointer(), (C.int)(selectionOperation), (C.int)(mode), deviceTransform.cPointer())
}

func (this *QGraphicsScene) AddEllipse22(rect *QRectF, pen *QPen) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem_U(unsafe.Pointer(C.QGraphicsScene_AddEllipse22(this.h, rect.cPointer(), pen.cPointer())))
}

func (this *QGraphicsScene) AddEllipse3(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem_U(unsafe.Pointer(C.QGraphicsScene_AddEllipse3(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer())))
}

func (this *QGraphicsScene) AddLine22(line *QLineF, pen *QPen) *QGraphicsLineItem {
	return newQGraphicsLineItem_U(unsafe.Pointer(C.QGraphicsScene_AddLine22(this.h, line.cPointer(), pen.cPointer())))
}

func (this *QGraphicsScene) AddPath2(path *QPainterPath, pen *QPen) *QGraphicsPathItem {
	return newQGraphicsPathItem_U(unsafe.Pointer(C.QGraphicsScene_AddPath2(this.h, path.cPointer(), pen.cPointer())))
}

func (this *QGraphicsScene) AddPath3(path *QPainterPath, pen *QPen, brush *QBrush) *QGraphicsPathItem {
	return newQGraphicsPathItem_U(unsafe.Pointer(C.QGraphicsScene_AddPath3(this.h, path.cPointer(), pen.cPointer(), brush.cPointer())))
}

func (this *QGraphicsScene) AddRect22(rect *QRectF, pen *QPen) *QGraphicsRectItem {
	return newQGraphicsRectItem_U(unsafe.Pointer(C.QGraphicsScene_AddRect22(this.h, rect.cPointer(), pen.cPointer())))
}

func (this *QGraphicsScene) AddRect3(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	return newQGraphicsRectItem_U(unsafe.Pointer(C.QGraphicsScene_AddRect3(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer())))
}

func (this *QGraphicsScene) AddText2(text string, font *QFont) *QGraphicsTextItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQGraphicsTextItem_U(unsafe.Pointer(C.QGraphicsScene_AddText2(this.h, (*C.struct_miqt_string)(text_ms), font.cPointer())))
}

func (this *QGraphicsScene) AddSimpleText2(text string, font *QFont) *QGraphicsSimpleTextItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQGraphicsSimpleTextItem_U(unsafe.Pointer(C.QGraphicsScene_AddSimpleText2(this.h, (*C.struct_miqt_string)(text_ms), font.cPointer())))
}

func (this *QGraphicsScene) AddWidget2(widget *QWidget, wFlags WindowType) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget_U(unsafe.Pointer(C.QGraphicsScene_AddWidget2(this.h, widget.cPointer(), (C.int)(wFlags))))
}

func (this *QGraphicsScene) AddEllipse5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem_U(unsafe.Pointer(C.QGraphicsScene_AddEllipse5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer())))
}

func (this *QGraphicsScene) AddEllipse6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem_U(unsafe.Pointer(C.QGraphicsScene_AddEllipse6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer())))
}

func (this *QGraphicsScene) AddLine5(x1 float64, y1 float64, x2 float64, y2 float64, pen *QPen) *QGraphicsLineItem {
	return newQGraphicsLineItem_U(unsafe.Pointer(C.QGraphicsScene_AddLine5(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), pen.cPointer())))
}

func (this *QGraphicsScene) AddRect5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsRectItem {
	return newQGraphicsRectItem_U(unsafe.Pointer(C.QGraphicsScene_AddRect5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer())))
}

func (this *QGraphicsScene) AddRect6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	return newQGraphicsRectItem_U(unsafe.Pointer(C.QGraphicsScene_AddRect6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer())))
}

func (this *QGraphicsScene) SetFocusItem2(item *QGraphicsItem, focusReason FocusReason) {
	C.QGraphicsScene_SetFocusItem2(this.h, item.cPointer(), (C.int)(focusReason))
}

func (this *QGraphicsScene) SetFocus1(focusReason FocusReason) {
	C.QGraphicsScene_SetFocus1(this.h, (C.int)(focusReason))
}

func (this *QGraphicsScene) Invalidate5(x float64, y float64, w float64, h float64, layers QGraphicsScene__SceneLayer) {
	C.QGraphicsScene_Invalidate5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(layers))
}

func (this *QGraphicsScene) Update1(rect *QRectF) {
	C.QGraphicsScene_Update1(this.h, rect.cPointer())
}

func (this *QGraphicsScene) Invalidate1(rect *QRectF) {
	C.QGraphicsScene_Invalidate1(this.h, rect.cPointer())
}

func (this *QGraphicsScene) Invalidate22(rect *QRectF, layers QGraphicsScene__SceneLayer) {
	C.QGraphicsScene_Invalidate22(this.h, rect.cPointer(), (C.int)(layers))
}

// Delete this object from C++ memory.
func (this *QGraphicsScene) Delete() {
	C.QGraphicsScene_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsScene) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsScene) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qt6

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
	h          *C.QGraphicsScene
	isSubclass bool
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
func newQGraphicsScene(h *C.QGraphicsScene, h_QObject *C.QObject) *QGraphicsScene {
	if h == nil {
		return nil
	}
	return &QGraphicsScene{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQGraphicsScene constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsScene(h unsafe.Pointer, h_QObject unsafe.Pointer) *QGraphicsScene {
	if h == nil {
		return nil
	}

	return &QGraphicsScene{h: (*C.QGraphicsScene)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQGraphicsScene constructs a new QGraphicsScene object.
func NewQGraphicsScene() *QGraphicsScene {
	var outptr_QGraphicsScene *C.QGraphicsScene = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScene_new(&outptr_QGraphicsScene, &outptr_QObject)
	ret := newQGraphicsScene(outptr_QGraphicsScene, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsScene2 constructs a new QGraphicsScene object.
func NewQGraphicsScene2(sceneRect *QRectF) *QGraphicsScene {
	var outptr_QGraphicsScene *C.QGraphicsScene = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScene_new2(sceneRect.cPointer(), &outptr_QGraphicsScene, &outptr_QObject)
	ret := newQGraphicsScene(outptr_QGraphicsScene, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsScene3 constructs a new QGraphicsScene object.
func NewQGraphicsScene3(x float64, y float64, width float64, height float64) *QGraphicsScene {
	var outptr_QGraphicsScene *C.QGraphicsScene = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScene_new3((C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height), &outptr_QGraphicsScene, &outptr_QObject)
	ret := newQGraphicsScene(outptr_QGraphicsScene, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsScene4 constructs a new QGraphicsScene object.
func NewQGraphicsScene4(parent *QObject) *QGraphicsScene {
	var outptr_QGraphicsScene *C.QGraphicsScene = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScene_new4(parent.cPointer(), &outptr_QGraphicsScene, &outptr_QObject)
	ret := newQGraphicsScene(outptr_QGraphicsScene, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsScene5 constructs a new QGraphicsScene object.
func NewQGraphicsScene5(sceneRect *QRectF, parent *QObject) *QGraphicsScene {
	var outptr_QGraphicsScene *C.QGraphicsScene = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScene_new5(sceneRect.cPointer(), parent.cPointer(), &outptr_QGraphicsScene, &outptr_QObject)
	ret := newQGraphicsScene(outptr_QGraphicsScene, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsScene6 constructs a new QGraphicsScene object.
func NewQGraphicsScene6(x float64, y float64, width float64, height float64, parent *QObject) *QGraphicsScene {
	var outptr_QGraphicsScene *C.QGraphicsScene = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScene_new6((C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height), parent.cPointer(), &outptr_QGraphicsScene, &outptr_QObject)
	ret := newQGraphicsScene(outptr_QGraphicsScene, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsScene) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsScene_MetaObject(this.h)))
}

func (this *QGraphicsScene) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsScene_Metacast(this.h, param1_Cstring))
}

func QGraphicsScene_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) ItemsWithPos(pos *QPointF) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_ItemsWithPos(this.h, pos.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) ItemsWithRect(rect *QRectF) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_ItemsWithRect(this.h, rect.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_ItemsWithPath(this.h, path.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items2(x float64, y float64, w float64, h float64, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) CollidingItems(item *QGraphicsItem) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_CollidingItems(this.h, item.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) ItemAt(pos *QPointF, deviceTransform *QTransform) *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsScene_ItemAt(this.h, pos.cPointer(), deviceTransform.cPointer())))
}

func (this *QGraphicsScene) ItemAt2(x float64, y float64, deviceTransform *QTransform) *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsScene_ItemAt2(this.h, (C.double)(x), (C.double)(y), deviceTransform.cPointer())))
}

func (this *QGraphicsScene) SelectedItems() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_SelectedItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
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

func (this *QGraphicsScene) CreateItemGroup(items []*QGraphicsItem) *QGraphicsItemGroup {
	items_CArray := (*[0xffff]*C.QGraphicsItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	return UnsafeNewQGraphicsItemGroup(unsafe.Pointer(C.QGraphicsScene_CreateItemGroup(this.h, items_ma)), nil)
}

func (this *QGraphicsScene) DestroyItemGroup(group *QGraphicsItemGroup) {
	C.QGraphicsScene_DestroyItemGroup(this.h, group.cPointer())
}

func (this *QGraphicsScene) AddItem(item *QGraphicsItem) {
	C.QGraphicsScene_AddItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) AddEllipse(rect *QRectF) *QGraphicsEllipseItem {
	return UnsafeNewQGraphicsEllipseItem(unsafe.Pointer(C.QGraphicsScene_AddEllipse(this.h, rect.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddLine(line *QLineF) *QGraphicsLineItem {
	return UnsafeNewQGraphicsLineItem(unsafe.Pointer(C.QGraphicsScene_AddLine(this.h, line.cPointer())), nil)
}

func (this *QGraphicsScene) AddPath(path *QPainterPath) *QGraphicsPathItem {
	return UnsafeNewQGraphicsPathItem(unsafe.Pointer(C.QGraphicsScene_AddPath(this.h, path.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddPixmap(pixmap *QPixmap) *QGraphicsPixmapItem {
	return UnsafeNewQGraphicsPixmapItem(unsafe.Pointer(C.QGraphicsScene_AddPixmap(this.h, pixmap.cPointer())), nil)
}

func (this *QGraphicsScene) AddRect(rect *QRectF) *QGraphicsRectItem {
	return UnsafeNewQGraphicsRectItem(unsafe.Pointer(C.QGraphicsScene_AddRect(this.h, rect.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddText(text string) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQGraphicsTextItem(unsafe.Pointer(C.QGraphicsScene_AddText(this.h, text_ms)), nil, nil, nil)
}

func (this *QGraphicsScene) AddSimpleText(text string) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQGraphicsSimpleTextItem(unsafe.Pointer(C.QGraphicsScene_AddSimpleText(this.h, text_ms)), nil, nil)
}

func (this *QGraphicsScene) AddWidget(widget *QWidget) *QGraphicsProxyWidget {
	return UnsafeNewQGraphicsProxyWidget(unsafe.Pointer(C.QGraphicsScene_AddWidget(this.h, widget.cPointer())), nil, nil, nil, nil, nil)
}

func (this *QGraphicsScene) AddEllipse2(x float64, y float64, w float64, h float64) *QGraphicsEllipseItem {
	return UnsafeNewQGraphicsEllipseItem(unsafe.Pointer(C.QGraphicsScene_AddEllipse2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))), nil, nil)
}

func (this *QGraphicsScene) AddLine2(x1 float64, y1 float64, x2 float64, y2 float64) *QGraphicsLineItem {
	return UnsafeNewQGraphicsLineItem(unsafe.Pointer(C.QGraphicsScene_AddLine2(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))), nil)
}

func (this *QGraphicsScene) AddRect2(x float64, y float64, w float64, h float64) *QGraphicsRectItem {
	return UnsafeNewQGraphicsRectItem(unsafe.Pointer(C.QGraphicsScene_AddRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))), nil, nil)
}

func (this *QGraphicsScene) RemoveItem(item *QGraphicsItem) {
	C.QGraphicsScene_RemoveItem(this.h, item.cPointer())
}

func (this *QGraphicsScene) FocusItem() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsScene_FocusItem(this.h)))
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
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsScene_MouseGrabberItem(this.h)))
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
	var _ma C.struct_miqt_array = C.QGraphicsScene_Views(this.h)
	_ret := make([]*QGraphicsView, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsView)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsView(unsafe.Pointer(_outCast[i]), nil, nil, nil, nil, nil)
	}
	return _ret
}

func (this *QGraphicsScene) Update(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_Update(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Invalidate(x float64, y float64, w float64, h float64) {
	C.QGraphicsScene_Invalidate(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsScene) Style() *QStyle {
	return UnsafeNewQStyle(unsafe.Pointer(C.QGraphicsScene_Style(this.h)), nil)
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
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsScene_ActivePanel(this.h)))
}

func (this *QGraphicsScene) SetActivePanel(item *QGraphicsItem) {
	C.QGraphicsScene_SetActivePanel(this.h, item.cPointer())
}

func (this *QGraphicsScene) ActiveWindow() *QGraphicsWidget {
	return UnsafeNewQGraphicsWidget(unsafe.Pointer(C.QGraphicsScene_ActiveWindow(this.h)), nil, nil, nil, nil)
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
	region_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(region))))
	defer C.free(unsafe.Pointer(region_CArray))
	for i := range region {
		region_CArray[i] = region[i].cPointer()
	}
	region_ma := C.struct_miqt_array{len: C.size_t(len(region)), data: unsafe.Pointer(region_CArray)}
	C.QGraphicsScene_Changed(this.h, region_ma)
}
func (this *QGraphicsScene) OnChanged(slot func(region []QRectF)) {
	C.QGraphicsScene_connect_Changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_Changed
func miqt_exec_callback_QGraphicsScene_Changed(cb C.intptr_t, region C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(region []QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var region_ma C.struct_miqt_array = region
	region_ret := make([]QRectF, int(region_ma.len))
	region_outCast := (*[0xffff]*C.QRectF)(unsafe.Pointer(region_ma.data)) // hey ya
	for i := 0; i < int(region_ma.len); i++ {
		region_lv_ret := region_outCast[i]
		region_lv_goptr := newQRectF(region_lv_ret)
		region_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		region_ret[i] = *region_lv_goptr
	}
	slotval1 := region_ret

	gofunc(slotval1)
}

func (this *QGraphicsScene) SceneRectChanged(rect *QRectF) {
	C.QGraphicsScene_SceneRectChanged(this.h, rect.cPointer())
}
func (this *QGraphicsScene) OnSceneRectChanged(slot func(rect *QRectF)) {
	C.QGraphicsScene_connect_SceneRectChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_SceneRectChanged
func miqt_exec_callback_QGraphicsScene_SceneRectChanged(cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc(slotval1)
}

func (this *QGraphicsScene) SelectionChanged() {
	C.QGraphicsScene_SelectionChanged(this.h)
}
func (this *QGraphicsScene) OnSelectionChanged(slot func()) {
	C.QGraphicsScene_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_SelectionChanged
func miqt_exec_callback_QGraphicsScene_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScene) FocusItemChanged(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason) {
	C.QGraphicsScene_FocusItemChanged(this.h, newFocus.cPointer(), oldFocus.cPointer(), (C.int)(reason))
}
func (this *QGraphicsScene) OnFocusItemChanged(slot func(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason)) {
	C.QGraphicsScene_connect_FocusItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_FocusItemChanged
func miqt_exec_callback_QGraphicsScene_FocusItemChanged(cb C.intptr_t, newFocus *C.QGraphicsItem, oldFocus *C.QGraphicsItem, reason C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newFocus *QGraphicsItem, oldFocus *QGraphicsItem, reason FocusReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(newFocus))
	slotval2 := UnsafeNewQGraphicsItem(unsafe.Pointer(oldFocus))
	slotval3 := (FocusReason)(reason)

	gofunc(slotval1, slotval2, slotval3)
}

func QGraphicsScene_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsScene_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScene_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items1(this.h, (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items22(pos *QPointF, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items22(this.h, pos.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items3(pos *QPointF, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items3(this.h, pos.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items4(pos *QPointF, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items4(this.h, pos.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items23(rect *QRectF, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items23(this.h, rect.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items32(rect *QRectF, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items32(this.h, rect.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items42(rect *QRectF, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items42(this.h, rect.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items25(path *QPainterPath, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items25(this.h, path.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items34(path *QPainterPath, mode ItemSelectionMode, order SortOrder) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items34(this.h, path.cPointer(), (C.int)(mode), (C.int)(order))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items44(path *QPainterPath, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items44(this.h, path.cPointer(), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) Items7(x float64, y float64, w float64, h float64, mode ItemSelectionMode, order SortOrder, deviceTransform *QTransform) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_Items7(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(mode), (C.int)(order), deviceTransform.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) CollidingItems2(item *QGraphicsItem, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsScene_CollidingItems2(this.h, item.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsScene) SetSelectionArea2(path *QPainterPath, selectionOperation ItemSelectionOperation) {
	C.QGraphicsScene_SetSelectionArea2(this.h, path.cPointer(), (C.int)(selectionOperation))
}

func (this *QGraphicsScene) SetSelectionArea3(path *QPainterPath, selectionOperation ItemSelectionOperation, mode ItemSelectionMode) {
	C.QGraphicsScene_SetSelectionArea3(this.h, path.cPointer(), (C.int)(selectionOperation), (C.int)(mode))
}

func (this *QGraphicsScene) SetSelectionArea4(path *QPainterPath, selectionOperation ItemSelectionOperation, mode ItemSelectionMode, deviceTransform *QTransform) {
	C.QGraphicsScene_SetSelectionArea4(this.h, path.cPointer(), (C.int)(selectionOperation), (C.int)(mode), deviceTransform.cPointer())
}

func (this *QGraphicsScene) AddEllipse22(rect *QRectF, pen *QPen) *QGraphicsEllipseItem {
	return UnsafeNewQGraphicsEllipseItem(unsafe.Pointer(C.QGraphicsScene_AddEllipse22(this.h, rect.cPointer(), pen.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddEllipse3(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	return UnsafeNewQGraphicsEllipseItem(unsafe.Pointer(C.QGraphicsScene_AddEllipse3(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddLine22(line *QLineF, pen *QPen) *QGraphicsLineItem {
	return UnsafeNewQGraphicsLineItem(unsafe.Pointer(C.QGraphicsScene_AddLine22(this.h, line.cPointer(), pen.cPointer())), nil)
}

func (this *QGraphicsScene) AddPath2(path *QPainterPath, pen *QPen) *QGraphicsPathItem {
	return UnsafeNewQGraphicsPathItem(unsafe.Pointer(C.QGraphicsScene_AddPath2(this.h, path.cPointer(), pen.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddPath3(path *QPainterPath, pen *QPen, brush *QBrush) *QGraphicsPathItem {
	return UnsafeNewQGraphicsPathItem(unsafe.Pointer(C.QGraphicsScene_AddPath3(this.h, path.cPointer(), pen.cPointer(), brush.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddRect22(rect *QRectF, pen *QPen) *QGraphicsRectItem {
	return UnsafeNewQGraphicsRectItem(unsafe.Pointer(C.QGraphicsScene_AddRect22(this.h, rect.cPointer(), pen.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddRect3(rect *QRectF, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	return UnsafeNewQGraphicsRectItem(unsafe.Pointer(C.QGraphicsScene_AddRect3(this.h, rect.cPointer(), pen.cPointer(), brush.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddText2(text string, font *QFont) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQGraphicsTextItem(unsafe.Pointer(C.QGraphicsScene_AddText2(this.h, text_ms, font.cPointer())), nil, nil, nil)
}

func (this *QGraphicsScene) AddSimpleText2(text string, font *QFont) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return UnsafeNewQGraphicsSimpleTextItem(unsafe.Pointer(C.QGraphicsScene_AddSimpleText2(this.h, text_ms, font.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddWidget2(widget *QWidget, wFlags WindowType) *QGraphicsProxyWidget {
	return UnsafeNewQGraphicsProxyWidget(unsafe.Pointer(C.QGraphicsScene_AddWidget2(this.h, widget.cPointer(), (C.int)(wFlags))), nil, nil, nil, nil, nil)
}

func (this *QGraphicsScene) AddEllipse5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsEllipseItem {
	return UnsafeNewQGraphicsEllipseItem(unsafe.Pointer(C.QGraphicsScene_AddEllipse5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddEllipse6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsEllipseItem {
	return UnsafeNewQGraphicsEllipseItem(unsafe.Pointer(C.QGraphicsScene_AddEllipse6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddLine5(x1 float64, y1 float64, x2 float64, y2 float64, pen *QPen) *QGraphicsLineItem {
	return UnsafeNewQGraphicsLineItem(unsafe.Pointer(C.QGraphicsScene_AddLine5(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), pen.cPointer())), nil)
}

func (this *QGraphicsScene) AddRect5(x float64, y float64, w float64, h float64, pen *QPen) *QGraphicsRectItem {
	return UnsafeNewQGraphicsRectItem(unsafe.Pointer(C.QGraphicsScene_AddRect5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer())), nil, nil)
}

func (this *QGraphicsScene) AddRect6(x float64, y float64, w float64, h float64, pen *QPen, brush *QBrush) *QGraphicsRectItem {
	return UnsafeNewQGraphicsRectItem(unsafe.Pointer(C.QGraphicsScene_AddRect6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), pen.cPointer(), brush.cPointer())), nil, nil)
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

func (this *QGraphicsScene) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_ret := C.QGraphicsScene_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsScene) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_InputMethodQuery
func miqt_exec_callback_QGraphicsScene_InputMethodQuery(self *C.QGraphicsScene, cb C.intptr_t, query C.int) *C.QVariant {
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

	return (bool)(C.QGraphicsScene_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsScene) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_Event
func miqt_exec_callback_QGraphicsScene_Event(self *C.QGraphicsScene, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsScene{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsScene) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsScene_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsScene) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_EventFilter
func miqt_exec_callback_QGraphicsScene_EventFilter(self *C.QGraphicsScene, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsScene{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsScene) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsScene_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_ContextMenuEvent
func miqt_exec_callback_QGraphicsScene_ContextMenuEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_DragEnterEvent
func miqt_exec_callback_QGraphicsScene_DragEnterEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_DragMoveEvent
func miqt_exec_callback_QGraphicsScene_DragMoveEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_DragLeaveEvent
func miqt_exec_callback_QGraphicsScene_DragLeaveEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsScene_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_DropEvent
func miqt_exec_callback_QGraphicsScene_DropEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsScene_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_FocusInEvent
func miqt_exec_callback_QGraphicsScene_FocusInEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsScene_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_FocusOutEvent
func miqt_exec_callback_QGraphicsScene_FocusOutEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_HelpEvent(event *QGraphicsSceneHelpEvent) {

	C.QGraphicsScene_virtualbase_HelpEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnHelpEvent(slot func(super func(event *QGraphicsSceneHelpEvent), event *QGraphicsSceneHelpEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_HelpEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_HelpEvent
func miqt_exec_callback_QGraphicsScene_HelpEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneHelpEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHelpEvent), event *QGraphicsSceneHelpEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHelpEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_HelpEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsScene_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_KeyPressEvent
func miqt_exec_callback_QGraphicsScene_KeyPressEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsScene_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_KeyReleaseEvent
func miqt_exec_callback_QGraphicsScene_KeyReleaseEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_MousePressEvent
func miqt_exec_callback_QGraphicsScene_MousePressEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_MouseMoveEvent
func miqt_exec_callback_QGraphicsScene_MouseMoveEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_MouseReleaseEvent
func miqt_exec_callback_QGraphicsScene_MouseReleaseEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsScene_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsScene_MouseDoubleClickEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsScene_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_WheelEvent
func miqt_exec_callback_QGraphicsScene_WheelEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsScene_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_InputMethodEvent
func miqt_exec_callback_QGraphicsScene_InputMethodEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DrawBackground(painter *QPainter, rect *QRectF) {

	C.QGraphicsScene_virtualbase_DrawBackground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsScene) OnDrawBackground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_DrawBackground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_DrawBackground
func miqt_exec_callback_QGraphicsScene_DrawBackground(self *C.QGraphicsScene, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DrawBackground, slotval1, slotval2)

}

func (this *QGraphicsScene) callVirtualBase_DrawForeground(painter *QPainter, rect *QRectF) {

	C.QGraphicsScene_virtualbase_DrawForeground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsScene) OnDrawForeground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_DrawForeground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_DrawForeground
func miqt_exec_callback_QGraphicsScene_DrawForeground(self *C.QGraphicsScene, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DrawForeground, slotval1, slotval2)

}

func (this *QGraphicsScene) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsScene_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsScene) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_FocusNextPrevChild
func miqt_exec_callback_QGraphicsScene_FocusNextPrevChild(self *C.QGraphicsScene, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGraphicsScene{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsScene) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsScene_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_TimerEvent
func miqt_exec_callback_QGraphicsScene_TimerEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsScene_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_ChildEvent
func miqt_exec_callback_QGraphicsScene_ChildEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsScene_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScene) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_CustomEvent
func miqt_exec_callback_QGraphicsScene_CustomEvent(self *C.QGraphicsScene, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsScene_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsScene) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_ConnectNotify
func miqt_exec_callback_QGraphicsScene_ConnectNotify(self *C.QGraphicsScene, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsScene) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsScene_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsScene) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScene_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScene_DisconnectNotify
func miqt_exec_callback_QGraphicsScene_DisconnectNotify(self *C.QGraphicsScene, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsScene{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsScene) Delete() {
	C.QGraphicsScene_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsScene) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsScene) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

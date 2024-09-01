package qt

/*

#include "gen_qgraphicsitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsItem struct {
	h *C.QGraphicsItem
}

func (this *QGraphicsItem) cPointer() *C.QGraphicsItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsItem(h *C.QGraphicsItem) *QGraphicsItem {
	if h == nil {
		return nil
	}
	return &QGraphicsItem{h: h}
}

func newQGraphicsItem_U(h unsafe.Pointer) *QGraphicsItem {
	return newQGraphicsItem((*C.QGraphicsItem)(h))
}

func (this *QGraphicsItem) Scene() *QGraphicsScene {
	ret := C.QGraphicsItem_Scene(this.h)
	return newQGraphicsScene_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) ParentItem() *QGraphicsItem {
	ret := C.QGraphicsItem_ParentItem(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) TopLevelItem() *QGraphicsItem {
	ret := C.QGraphicsItem_TopLevelItem(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) ParentObject() *QGraphicsObject {
	ret := C.QGraphicsItem_ParentObject(this.h)
	return newQGraphicsObject_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) ParentWidget() *QGraphicsWidget {
	ret := C.QGraphicsItem_ParentWidget(this.h)
	return newQGraphicsWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) TopLevelWidget() *QGraphicsWidget {
	ret := C.QGraphicsItem_TopLevelWidget(this.h)
	return newQGraphicsWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) Window() *QGraphicsWidget {
	ret := C.QGraphicsItem_Window(this.h)
	return newQGraphicsWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) Panel() *QGraphicsItem {
	ret := C.QGraphicsItem_Panel(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) SetParentItem(parent *QGraphicsItem) {
	C.QGraphicsItem_SetParentItem(this.h, parent.cPointer())
}

func (this *QGraphicsItem) ChildItems() []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsItem_ChildItems(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsItem) IsWidget() bool {
	ret := C.QGraphicsItem_IsWidget(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) IsWindow() bool {
	ret := C.QGraphicsItem_IsWindow(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) IsPanel() bool {
	ret := C.QGraphicsItem_IsPanel(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) ToGraphicsObject() *QGraphicsObject {
	ret := C.QGraphicsItem_ToGraphicsObject(this.h)
	return newQGraphicsObject_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) ToGraphicsObject2() *QGraphicsObject {
	ret := C.QGraphicsItem_ToGraphicsObject2(this.h)
	return newQGraphicsObject_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) Group() *QGraphicsItemGroup {
	ret := C.QGraphicsItem_Group(this.h)
	return newQGraphicsItemGroup_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) SetGroup(group *QGraphicsItemGroup) {
	C.QGraphicsItem_SetGroup(this.h, group.cPointer())
}

func (this *QGraphicsItem) Flags() int {
	ret := C.QGraphicsItem_Flags(this.h)
	return (int)(ret)
}

func (this *QGraphicsItem) SetFlag(flag uintptr) {
	C.QGraphicsItem_SetFlag(this.h, (C.uintptr_t)(flag))
}

func (this *QGraphicsItem) SetFlags(flags int) {
	C.QGraphicsItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsItem) CacheMode() uintptr {
	ret := C.QGraphicsItem_CacheMode(this.h)
	return (uintptr)(ret)
}

func (this *QGraphicsItem) SetCacheMode(mode uintptr) {
	C.QGraphicsItem_SetCacheMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGraphicsItem) PanelModality() uintptr {
	ret := C.QGraphicsItem_PanelModality(this.h)
	return (uintptr)(ret)
}

func (this *QGraphicsItem) SetPanelModality(panelModality uintptr) {
	C.QGraphicsItem_SetPanelModality(this.h, (C.uintptr_t)(panelModality))
}

func (this *QGraphicsItem) IsBlockedByModalPanel() bool {
	ret := C.QGraphicsItem_IsBlockedByModalPanel(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) ToolTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsItem_ToolTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsItem) SetToolTip(toolTip string) {
	toolTip_Cstring := C.CString(toolTip)
	defer C.free(unsafe.Pointer(toolTip_Cstring))
	C.QGraphicsItem_SetToolTip(this.h, toolTip_Cstring, C.size_t(len(toolTip)))
}

func (this *QGraphicsItem) Cursor() *QCursor {
	ret := C.QGraphicsItem_Cursor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SetCursor(cursor *QCursor) {
	C.QGraphicsItem_SetCursor(this.h, cursor.cPointer())
}

func (this *QGraphicsItem) HasCursor() bool {
	ret := C.QGraphicsItem_HasCursor(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) UnsetCursor() {
	C.QGraphicsItem_UnsetCursor(this.h)
}

func (this *QGraphicsItem) IsVisible() bool {
	ret := C.QGraphicsItem_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) IsVisibleTo(parent *QGraphicsItem) bool {
	ret := C.QGraphicsItem_IsVisibleTo(this.h, parent.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItem) SetVisible(visible bool) {
	C.QGraphicsItem_SetVisible(this.h, (C.bool)(visible))
}

func (this *QGraphicsItem) Hide() {
	C.QGraphicsItem_Hide(this.h)
}

func (this *QGraphicsItem) Show() {
	C.QGraphicsItem_Show(this.h)
}

func (this *QGraphicsItem) IsEnabled() bool {
	ret := C.QGraphicsItem_IsEnabled(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetEnabled(enabled bool) {
	C.QGraphicsItem_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) IsSelected() bool {
	ret := C.QGraphicsItem_IsSelected(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetSelected(selected bool) {
	C.QGraphicsItem_SetSelected(this.h, (C.bool)(selected))
}

func (this *QGraphicsItem) AcceptDrops() bool {
	ret := C.QGraphicsItem_AcceptDrops(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetAcceptDrops(on bool) {
	C.QGraphicsItem_SetAcceptDrops(this.h, (C.bool)(on))
}

func (this *QGraphicsItem) Opacity() float64 {
	ret := C.QGraphicsItem_Opacity(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) EffectiveOpacity() float64 {
	ret := C.QGraphicsItem_EffectiveOpacity(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) SetOpacity(opacity float64) {
	C.QGraphicsItem_SetOpacity(this.h, (C.double)(opacity))
}

func (this *QGraphicsItem) GraphicsEffect() *QGraphicsEffect {
	ret := C.QGraphicsItem_GraphicsEffect(this.h)
	return newQGraphicsEffect_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) SetGraphicsEffect(effect *QGraphicsEffect) {
	C.QGraphicsItem_SetGraphicsEffect(this.h, effect.cPointer())
}

func (this *QGraphicsItem) AcceptedMouseButtons() int {
	ret := C.QGraphicsItem_AcceptedMouseButtons(this.h)
	return (int)(ret)
}

func (this *QGraphicsItem) SetAcceptedMouseButtons(buttons int) {
	C.QGraphicsItem_SetAcceptedMouseButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsItem) AcceptHoverEvents() bool {
	ret := C.QGraphicsItem_AcceptHoverEvents(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetAcceptHoverEvents(enabled bool) {
	C.QGraphicsItem_SetAcceptHoverEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) AcceptTouchEvents() bool {
	ret := C.QGraphicsItem_AcceptTouchEvents(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetAcceptTouchEvents(enabled bool) {
	C.QGraphicsItem_SetAcceptTouchEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) FiltersChildEvents() bool {
	ret := C.QGraphicsItem_FiltersChildEvents(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetFiltersChildEvents(enabled bool) {
	C.QGraphicsItem_SetFiltersChildEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) HandlesChildEvents() bool {
	ret := C.QGraphicsItem_HandlesChildEvents(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetHandlesChildEvents(enabled bool) {
	C.QGraphicsItem_SetHandlesChildEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) IsActive() bool {
	ret := C.QGraphicsItem_IsActive(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetActive(active bool) {
	C.QGraphicsItem_SetActive(this.h, (C.bool)(active))
}

func (this *QGraphicsItem) HasFocus() bool {
	ret := C.QGraphicsItem_HasFocus(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) SetFocus() {
	C.QGraphicsItem_SetFocus(this.h)
}

func (this *QGraphicsItem) ClearFocus() {
	C.QGraphicsItem_ClearFocus(this.h)
}

func (this *QGraphicsItem) FocusProxy() *QGraphicsItem {
	ret := C.QGraphicsItem_FocusProxy(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) SetFocusProxy(item *QGraphicsItem) {
	C.QGraphicsItem_SetFocusProxy(this.h, item.cPointer())
}

func (this *QGraphicsItem) FocusItem() *QGraphicsItem {
	ret := C.QGraphicsItem_FocusItem(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) FocusScopeItem() *QGraphicsItem {
	ret := C.QGraphicsItem_FocusScopeItem(this.h)
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) GrabMouse() {
	C.QGraphicsItem_GrabMouse(this.h)
}

func (this *QGraphicsItem) UngrabMouse() {
	C.QGraphicsItem_UngrabMouse(this.h)
}

func (this *QGraphicsItem) GrabKeyboard() {
	C.QGraphicsItem_GrabKeyboard(this.h)
}

func (this *QGraphicsItem) UngrabKeyboard() {
	C.QGraphicsItem_UngrabKeyboard(this.h)
}

func (this *QGraphicsItem) Pos() *QPointF {
	ret := C.QGraphicsItem_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) X() float64 {
	ret := C.QGraphicsItem_X(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) SetX(x float64) {
	C.QGraphicsItem_SetX(this.h, (C.double)(x))
}

func (this *QGraphicsItem) Y() float64 {
	ret := C.QGraphicsItem_Y(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) SetY(y float64) {
	C.QGraphicsItem_SetY(this.h, (C.double)(y))
}

func (this *QGraphicsItem) ScenePos() *QPointF {
	ret := C.QGraphicsItem_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SetPos(pos *QPointF) {
	C.QGraphicsItem_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsItem) SetPos2(x float64, y float64) {
	C.QGraphicsItem_SetPos2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsItem) MoveBy(dx float64, dy float64) {
	C.QGraphicsItem_MoveBy(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsItem) EnsureVisible() {
	C.QGraphicsItem_EnsureVisible(this.h)
}

func (this *QGraphicsItem) EnsureVisible2(x float64, y float64, w float64, h float64) {
	C.QGraphicsItem_EnsureVisible2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsItem) Matrix() *QMatrix {
	ret := C.QGraphicsItem_Matrix(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SceneMatrix() *QMatrix {
	ret := C.QGraphicsItem_SceneMatrix(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SetMatrix(matrix *QMatrix) {
	C.QGraphicsItem_SetMatrix(this.h, matrix.cPointer())
}

func (this *QGraphicsItem) ResetMatrix() {
	C.QGraphicsItem_ResetMatrix(this.h)
}

func (this *QGraphicsItem) Transform() *QTransform {
	ret := C.QGraphicsItem_Transform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SceneTransform() *QTransform {
	ret := C.QGraphicsItem_SceneTransform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) DeviceTransform(viewportTransform *QTransform) *QTransform {
	ret := C.QGraphicsItem_DeviceTransform(this.h, viewportTransform.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) ItemTransform(other *QGraphicsItem) *QTransform {
	ret := C.QGraphicsItem_ItemTransform(this.h, other.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SetTransform(matrix *QTransform) {
	C.QGraphicsItem_SetTransform(this.h, matrix.cPointer())
}

func (this *QGraphicsItem) ResetTransform() {
	C.QGraphicsItem_ResetTransform(this.h)
}

func (this *QGraphicsItem) SetRotation(angle float64) {
	C.QGraphicsItem_SetRotation(this.h, (C.double)(angle))
}

func (this *QGraphicsItem) Rotation() float64 {
	ret := C.QGraphicsItem_Rotation(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) SetScale(scale float64) {
	C.QGraphicsItem_SetScale(this.h, (C.double)(scale))
}

func (this *QGraphicsItem) Scale() float64 {
	ret := C.QGraphicsItem_Scale(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) Transformations() []*QGraphicsTransform {
	var _out **C.QGraphicsTransform = nil
	var _out_len C.size_t = 0
	C.QGraphicsItem_Transformations(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsTransform, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsTransform)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsTransform(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsItem) SetTransformations(transformations []*QGraphicsTransform) {
	// For the C ABI, malloc a C array of raw pointers
	transformations_CArray := (*[0xffff]*C.QGraphicsTransform)(C.malloc(C.size_t(8 * len(transformations))))
	defer C.free(unsafe.Pointer(transformations_CArray))
	for i := range transformations {
		transformations_CArray[i] = transformations[i].cPointer()
	}
	C.QGraphicsItem_SetTransformations(this.h, &transformations_CArray[0], C.size_t(len(transformations)))
}

func (this *QGraphicsItem) TransformOriginPoint() *QPointF {
	ret := C.QGraphicsItem_TransformOriginPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SetTransformOriginPoint(origin *QPointF) {
	C.QGraphicsItem_SetTransformOriginPoint(this.h, origin.cPointer())
}

func (this *QGraphicsItem) SetTransformOriginPoint2(ax float64, ay float64) {
	C.QGraphicsItem_SetTransformOriginPoint2(this.h, (C.double)(ax), (C.double)(ay))
}

func (this *QGraphicsItem) Advance(phase int) {
	C.QGraphicsItem_Advance(this.h, (C.int)(phase))
}

func (this *QGraphicsItem) ZValue() float64 {
	ret := C.QGraphicsItem_ZValue(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) SetZValue(z float64) {
	C.QGraphicsItem_SetZValue(this.h, (C.double)(z))
}

func (this *QGraphicsItem) StackBefore(sibling *QGraphicsItem) {
	C.QGraphicsItem_StackBefore(this.h, sibling.cPointer())
}

func (this *QGraphicsItem) BoundingRect() *QRectF {
	ret := C.QGraphicsItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) ChildrenBoundingRect() *QRectF {
	ret := C.QGraphicsItem_ChildrenBoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SceneBoundingRect() *QRectF {
	ret := C.QGraphicsItem_SceneBoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) Shape() *QPainterPath {
	ret := C.QGraphicsItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) IsClipped() bool {
	ret := C.QGraphicsItem_IsClipped(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) ClipPath() *QPainterPath {
	ret := C.QGraphicsItem_ClipPath(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItem) CollidesWithItem(other *QGraphicsItem) bool {
	ret := C.QGraphicsItem_CollidesWithItem(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItem) CollidesWithPath(path *QPainterPath) bool {
	ret := C.QGraphicsItem_CollidesWithPath(this.h, path.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItem) CollidingItems() []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsItem_CollidingItems(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsItem) IsObscured() bool {
	ret := C.QGraphicsItem_IsObscured(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) IsObscured2(x float64, y float64, w float64, h float64) bool {
	ret := C.QGraphicsItem_IsObscured2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	return (bool)(ret)
}

func (this *QGraphicsItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) BoundingRegion(itemToDeviceTransform *QTransform) *QRegion {
	ret := C.QGraphicsItem_BoundingRegion(this.h, itemToDeviceTransform.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRegion(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRegion) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) BoundingRegionGranularity() float64 {
	ret := C.QGraphicsItem_BoundingRegionGranularity(this.h)
	return (float64)(ret)
}

func (this *QGraphicsItem) SetBoundingRegionGranularity(granularity float64) {
	C.QGraphicsItem_SetBoundingRegionGranularity(this.h, (C.double)(granularity))
}

func (this *QGraphicsItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsItem_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsItem) Update() {
	C.QGraphicsItem_Update(this.h)
}

func (this *QGraphicsItem) Update2(x float64, y float64, width float64, height float64) {
	C.QGraphicsItem_Update2(this.h, (C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height))
}

func (this *QGraphicsItem) Scroll(dx float64, dy float64) {
	C.QGraphicsItem_Scroll(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsItem) MapToItem(item *QGraphicsItem, point *QPointF) *QPointF {
	ret := C.QGraphicsItem_MapToItem(this.h, item.cPointer(), point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToParent(point *QPointF) *QPointF {
	ret := C.QGraphicsItem_MapToParent(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToScene(point *QPointF) *QPointF {
	ret := C.QGraphicsItem_MapToScene(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectToItem(item *QGraphicsItem, rect *QRectF) *QRectF {
	ret := C.QGraphicsItem_MapRectToItem(this.h, item.cPointer(), rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectToParent(rect *QRectF) *QRectF {
	ret := C.QGraphicsItem_MapRectToParent(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectToScene(rect *QRectF) *QRectF {
	ret := C.QGraphicsItem_MapRectToScene(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToItem4(item *QGraphicsItem, path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsItem_MapToItem4(this.h, item.cPointer(), path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToParentWithPath(path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsItem_MapToParentWithPath(this.h, path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToSceneWithPath(path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsItem_MapToSceneWithPath(this.h, path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromItem(item *QGraphicsItem, point *QPointF) *QPointF {
	ret := C.QGraphicsItem_MapFromItem(this.h, item.cPointer(), point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromParent(point *QPointF) *QPointF {
	ret := C.QGraphicsItem_MapFromParent(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromScene(point *QPointF) *QPointF {
	ret := C.QGraphicsItem_MapFromScene(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectFromItem(item *QGraphicsItem, rect *QRectF) *QRectF {
	ret := C.QGraphicsItem_MapRectFromItem(this.h, item.cPointer(), rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectFromParent(rect *QRectF) *QRectF {
	ret := C.QGraphicsItem_MapRectFromParent(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectFromScene(rect *QRectF) *QRectF {
	ret := C.QGraphicsItem_MapRectFromScene(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromItem4(item *QGraphicsItem, path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsItem_MapFromItem4(this.h, item.cPointer(), path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromParentWithPath(path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsItem_MapFromParentWithPath(this.h, path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromSceneWithPath(path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsItem_MapFromSceneWithPath(this.h, path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToItem5(item *QGraphicsItem, x float64, y float64) *QPointF {
	ret := C.QGraphicsItem_MapToItem5(this.h, item.cPointer(), (C.double)(x), (C.double)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToParent2(x float64, y float64) *QPointF {
	ret := C.QGraphicsItem_MapToParent2(this.h, (C.double)(x), (C.double)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapToScene2(x float64, y float64) *QPointF {
	ret := C.QGraphicsItem_MapToScene2(this.h, (C.double)(x), (C.double)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectToItem2(item *QGraphicsItem, x float64, y float64, w float64, h float64) *QRectF {
	ret := C.QGraphicsItem_MapRectToItem2(this.h, item.cPointer(), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectToParent2(x float64, y float64, w float64, h float64) *QRectF {
	ret := C.QGraphicsItem_MapRectToParent2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectToScene2(x float64, y float64, w float64, h float64) *QRectF {
	ret := C.QGraphicsItem_MapRectToScene2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromItem5(item *QGraphicsItem, x float64, y float64) *QPointF {
	ret := C.QGraphicsItem_MapFromItem5(this.h, item.cPointer(), (C.double)(x), (C.double)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromParent2(x float64, y float64) *QPointF {
	ret := C.QGraphicsItem_MapFromParent2(this.h, (C.double)(x), (C.double)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapFromScene2(x float64, y float64) *QPointF {
	ret := C.QGraphicsItem_MapFromScene2(this.h, (C.double)(x), (C.double)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectFromItem2(item *QGraphicsItem, x float64, y float64, w float64, h float64) *QRectF {
	ret := C.QGraphicsItem_MapRectFromItem2(this.h, item.cPointer(), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectFromParent2(x float64, y float64, w float64, h float64) *QRectF {
	ret := C.QGraphicsItem_MapRectFromParent2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) MapRectFromScene2(x float64, y float64, w float64, h float64) *QRectF {
	ret := C.QGraphicsItem_MapRectFromScene2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) IsAncestorOf(child *QGraphicsItem) bool {
	ret := C.QGraphicsItem_IsAncestorOf(this.h, child.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItem) CommonAncestorItem(other *QGraphicsItem) *QGraphicsItem {
	ret := C.QGraphicsItem_CommonAncestorItem(this.h, other.cPointer())
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsItem) IsUnderMouse() bool {
	ret := C.QGraphicsItem_IsUnderMouse(this.h)
	return (bool)(ret)
}

func (this *QGraphicsItem) Data(key int) *QVariant {
	ret := C.QGraphicsItem_Data(this.h, (C.int)(key))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SetData(key int, value *QVariant) {
	C.QGraphicsItem_SetData(this.h, (C.int)(key), value.cPointer())
}

func (this *QGraphicsItem) InputMethodHints() int {
	ret := C.QGraphicsItem_InputMethodHints(this.h)
	return (int)(ret)
}

func (this *QGraphicsItem) SetInputMethodHints(hints int) {
	C.QGraphicsItem_SetInputMethodHints(this.h, (C.int)(hints))
}

func (this *QGraphicsItem) Type() int {
	ret := C.QGraphicsItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsItem) InstallSceneEventFilter(filterItem *QGraphicsItem) {
	C.QGraphicsItem_InstallSceneEventFilter(this.h, filterItem.cPointer())
}

func (this *QGraphicsItem) RemoveSceneEventFilter(filterItem *QGraphicsItem) {
	C.QGraphicsItem_RemoveSceneEventFilter(this.h, filterItem.cPointer())
}

func (this *QGraphicsItem) SetFlag2(flag uintptr, enabled bool) {
	C.QGraphicsItem_SetFlag2(this.h, (C.uintptr_t)(flag), (C.bool)(enabled))
}

func (this *QGraphicsItem) SetCacheMode2(mode uintptr, cacheSize *QSize) {
	C.QGraphicsItem_SetCacheMode2(this.h, (C.uintptr_t)(mode), cacheSize.cPointer())
}

func (this *QGraphicsItem) SetFocus1(focusReason uintptr) {
	C.QGraphicsItem_SetFocus1(this.h, (C.uintptr_t)(focusReason))
}

func (this *QGraphicsItem) EnsureVisible1(rect *QRectF) {
	C.QGraphicsItem_EnsureVisible1(this.h, rect.cPointer())
}

func (this *QGraphicsItem) EnsureVisible22(rect *QRectF, xmargin int) {
	C.QGraphicsItem_EnsureVisible22(this.h, rect.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsItem) EnsureVisible3(rect *QRectF, xmargin int, ymargin int) {
	C.QGraphicsItem_EnsureVisible3(this.h, rect.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsItem) EnsureVisible5(x float64, y float64, w float64, h float64, xmargin int) {
	C.QGraphicsItem_EnsureVisible5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin))
}

func (this *QGraphicsItem) EnsureVisible6(x float64, y float64, w float64, h float64, xmargin int, ymargin int) {
	C.QGraphicsItem_EnsureVisible6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsItem) SetMatrix2(matrix *QMatrix, combine bool) {
	C.QGraphicsItem_SetMatrix2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsItem) ItemTransform2(other *QGraphicsItem, ok *bool) *QTransform {
	ret := C.QGraphicsItem_ItemTransform2(this.h, other.cPointer(), (*C.bool)(unsafe.Pointer(ok)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItem) SetTransform2(matrix *QTransform, combine bool) {
	C.QGraphicsItem_SetTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsItem) CollidesWithItem2(other *QGraphicsItem, mode uintptr) bool {
	ret := C.QGraphicsItem_CollidesWithItem2(this.h, other.cPointer(), (C.uintptr_t)(mode))
	return (bool)(ret)
}

func (this *QGraphicsItem) CollidesWithPath2(path *QPainterPath, mode uintptr) bool {
	ret := C.QGraphicsItem_CollidesWithPath2(this.h, path.cPointer(), (C.uintptr_t)(mode))
	return (bool)(ret)
}

func (this *QGraphicsItem) CollidingItems1(mode uintptr) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsItem_CollidingItems1(this.h, (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsItem) IsObscured1(rect *QRectF) bool {
	ret := C.QGraphicsItem_IsObscured1(this.h, rect.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsItem) Update1(rect *QRectF) {
	C.QGraphicsItem_Update1(this.h, rect.cPointer())
}

func (this *QGraphicsItem) Scroll3(dx float64, dy float64, rect *QRectF) {
	C.QGraphicsItem_Scroll3(this.h, (C.double)(dx), (C.double)(dy), rect.cPointer())
}

func (this *QGraphicsItem) Delete() {
	C.QGraphicsItem_Delete(this.h)
}

type QGraphicsObject struct {
	h *C.QGraphicsObject
	*QObject
	*QGraphicsItem
}

func (this *QGraphicsObject) cPointer() *C.QGraphicsObject {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsObject(h *C.QGraphicsObject) *QGraphicsObject {
	if h == nil {
		return nil
	}
	return &QGraphicsObject{h: h, QObject: newQObject_U(unsafe.Pointer(h)), QGraphicsItem: newQGraphicsItem_U(unsafe.Pointer(h))}
}

func newQGraphicsObject_U(h unsafe.Pointer) *QGraphicsObject {
	return newQGraphicsObject((*C.QGraphicsObject)(h))
}

func (this *QGraphicsObject) MetaObject() *QMetaObject {
	ret := C.QGraphicsObject_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsObject_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsObject_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsObject_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsObject) GrabGesture(typeVal uintptr) {
	C.QGraphicsObject_GrabGesture(this.h, (C.uintptr_t)(typeVal))
}

func (this *QGraphicsObject) UngrabGesture(typeVal uintptr) {
	C.QGraphicsObject_UngrabGesture(this.h, (C.uintptr_t)(typeVal))
}

func (this *QGraphicsObject) ParentChanged() {
	C.QGraphicsObject_ParentChanged(this.h)
}

func (this *QGraphicsObject) OnParentChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_ParentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) OpacityChanged() {
	C.QGraphicsObject_OpacityChanged(this.h)
}

func (this *QGraphicsObject) OnOpacityChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_OpacityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) VisibleChanged() {
	C.QGraphicsObject_VisibleChanged(this.h)
}

func (this *QGraphicsObject) OnVisibleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_VisibleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) EnabledChanged() {
	C.QGraphicsObject_EnabledChanged(this.h)
}

func (this *QGraphicsObject) OnEnabledChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_EnabledChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) XChanged() {
	C.QGraphicsObject_XChanged(this.h)
}

func (this *QGraphicsObject) OnXChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_XChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) YChanged() {
	C.QGraphicsObject_YChanged(this.h)
}

func (this *QGraphicsObject) OnYChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_YChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) ZChanged() {
	C.QGraphicsObject_ZChanged(this.h)
}

func (this *QGraphicsObject) OnZChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_ZChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) RotationChanged() {
	C.QGraphicsObject_RotationChanged(this.h)
}

func (this *QGraphicsObject) OnRotationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_RotationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) ScaleChanged() {
	C.QGraphicsObject_ScaleChanged(this.h)
}

func (this *QGraphicsObject) OnScaleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_ScaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) ChildrenChanged() {
	C.QGraphicsObject_ChildrenChanged(this.h)
}

func (this *QGraphicsObject) OnChildrenChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_ChildrenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) WidthChanged() {
	C.QGraphicsObject_WidthChanged(this.h)
}

func (this *QGraphicsObject) OnWidthChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_WidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsObject) HeightChanged() {
	C.QGraphicsObject_HeightChanged(this.h)
}

func (this *QGraphicsObject) OnHeightChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsObject_connect_HeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsObject_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsObject_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsObject_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsObject_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsObject_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsObject_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsObject) GrabGesture2(typeVal uintptr, flags int) {
	C.QGraphicsObject_GrabGesture2(this.h, (C.uintptr_t)(typeVal), (C.int)(flags))
}

func (this *QGraphicsObject) Delete() {
	C.QGraphicsObject_Delete(this.h)
}

type QAbstractGraphicsShapeItem struct {
	h *C.QAbstractGraphicsShapeItem
	*QGraphicsItem
}

func (this *QAbstractGraphicsShapeItem) cPointer() *C.QAbstractGraphicsShapeItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractGraphicsShapeItem(h *C.QAbstractGraphicsShapeItem) *QAbstractGraphicsShapeItem {
	if h == nil {
		return nil
	}
	return &QAbstractGraphicsShapeItem{h: h, QGraphicsItem: newQGraphicsItem_U(unsafe.Pointer(h))}
}

func newQAbstractGraphicsShapeItem_U(h unsafe.Pointer) *QAbstractGraphicsShapeItem {
	return newQAbstractGraphicsShapeItem((*C.QAbstractGraphicsShapeItem)(h))
}

func (this *QAbstractGraphicsShapeItem) Pen() *QPen {
	ret := C.QAbstractGraphicsShapeItem_Pen(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPen(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPen) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractGraphicsShapeItem) SetPen(pen *QPen) {
	C.QAbstractGraphicsShapeItem_SetPen(this.h, pen.cPointer())
}

func (this *QAbstractGraphicsShapeItem) Brush() *QBrush {
	ret := C.QAbstractGraphicsShapeItem_Brush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractGraphicsShapeItem) SetBrush(brush *QBrush) {
	C.QAbstractGraphicsShapeItem_SetBrush(this.h, brush.cPointer())
}

func (this *QAbstractGraphicsShapeItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QAbstractGraphicsShapeItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QAbstractGraphicsShapeItem) OpaqueArea() *QPainterPath {
	ret := C.QAbstractGraphicsShapeItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractGraphicsShapeItem) Delete() {
	C.QAbstractGraphicsShapeItem_Delete(this.h)
}

type QGraphicsPathItem struct {
	h *C.QGraphicsPathItem
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsPathItem) cPointer() *C.QGraphicsPathItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsPathItem(h *C.QGraphicsPathItem) *QGraphicsPathItem {
	if h == nil {
		return nil
	}
	return &QGraphicsPathItem{h: h, QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem_U(unsafe.Pointer(h))}
}

func newQGraphicsPathItem_U(h unsafe.Pointer) *QGraphicsPathItem {
	return newQGraphicsPathItem((*C.QGraphicsPathItem)(h))
}

// NewQGraphicsPathItem constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem() *QGraphicsPathItem {
	ret := C.QGraphicsPathItem_new()
	return newQGraphicsPathItem(ret)
}

// NewQGraphicsPathItem2 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem2(path *QPainterPath) *QGraphicsPathItem {
	ret := C.QGraphicsPathItem_new2(path.cPointer())
	return newQGraphicsPathItem(ret)
}

// NewQGraphicsPathItem3 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem3(parent *QGraphicsItem) *QGraphicsPathItem {
	ret := C.QGraphicsPathItem_new3(parent.cPointer())
	return newQGraphicsPathItem(ret)
}

// NewQGraphicsPathItem4 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem4(path *QPainterPath, parent *QGraphicsItem) *QGraphicsPathItem {
	ret := C.QGraphicsPathItem_new4(path.cPointer(), parent.cPointer())
	return newQGraphicsPathItem(ret)
}

func (this *QGraphicsPathItem) Path() *QPainterPath {
	ret := C.QGraphicsPathItem_Path(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPathItem) SetPath(path *QPainterPath) {
	C.QGraphicsPathItem_SetPath(this.h, path.cPointer())
}

func (this *QGraphicsPathItem) BoundingRect() *QRectF {
	ret := C.QGraphicsPathItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPathItem) Shape() *QPainterPath {
	ret := C.QGraphicsPathItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPathItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsPathItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsPathItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsPathItem_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsPathItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsPathItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsPathItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsPathItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPathItem) Type() int {
	ret := C.QGraphicsPathItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsPathItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPathItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPathItem) Delete() {
	C.QGraphicsPathItem_Delete(this.h)
}

type QGraphicsRectItem struct {
	h *C.QGraphicsRectItem
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsRectItem) cPointer() *C.QGraphicsRectItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsRectItem(h *C.QGraphicsRectItem) *QGraphicsRectItem {
	if h == nil {
		return nil
	}
	return &QGraphicsRectItem{h: h, QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem_U(unsafe.Pointer(h))}
}

func newQGraphicsRectItem_U(h unsafe.Pointer) *QGraphicsRectItem {
	return newQGraphicsRectItem((*C.QGraphicsRectItem)(h))
}

// NewQGraphicsRectItem constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem() *QGraphicsRectItem {
	ret := C.QGraphicsRectItem_new()
	return newQGraphicsRectItem(ret)
}

// NewQGraphicsRectItem2 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem2(rect *QRectF) *QGraphicsRectItem {
	ret := C.QGraphicsRectItem_new2(rect.cPointer())
	return newQGraphicsRectItem(ret)
}

// NewQGraphicsRectItem3 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem3(x float64, y float64, w float64, h float64) *QGraphicsRectItem {
	ret := C.QGraphicsRectItem_new3((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	return newQGraphicsRectItem(ret)
}

// NewQGraphicsRectItem4 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem4(parent *QGraphicsItem) *QGraphicsRectItem {
	ret := C.QGraphicsRectItem_new4(parent.cPointer())
	return newQGraphicsRectItem(ret)
}

// NewQGraphicsRectItem5 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem5(rect *QRectF, parent *QGraphicsItem) *QGraphicsRectItem {
	ret := C.QGraphicsRectItem_new5(rect.cPointer(), parent.cPointer())
	return newQGraphicsRectItem(ret)
}

// NewQGraphicsRectItem6 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem6(x float64, y float64, w float64, h float64, parent *QGraphicsItem) *QGraphicsRectItem {
	ret := C.QGraphicsRectItem_new6((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), parent.cPointer())
	return newQGraphicsRectItem(ret)
}

func (this *QGraphicsRectItem) Rect() *QRectF {
	ret := C.QGraphicsRectItem_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsRectItem) SetRect(rect *QRectF) {
	C.QGraphicsRectItem_SetRect(this.h, rect.cPointer())
}

func (this *QGraphicsRectItem) SetRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsRectItem_SetRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsRectItem) BoundingRect() *QRectF {
	ret := C.QGraphicsRectItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsRectItem) Shape() *QPainterPath {
	ret := C.QGraphicsRectItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsRectItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsRectItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsRectItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsRectItem_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsRectItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsRectItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsRectItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsRectItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsRectItem) Type() int {
	ret := C.QGraphicsRectItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsRectItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsRectItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsRectItem) Delete() {
	C.QGraphicsRectItem_Delete(this.h)
}

type QGraphicsEllipseItem struct {
	h *C.QGraphicsEllipseItem
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsEllipseItem) cPointer() *C.QGraphicsEllipseItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsEllipseItem(h *C.QGraphicsEllipseItem) *QGraphicsEllipseItem {
	if h == nil {
		return nil
	}
	return &QGraphicsEllipseItem{h: h, QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem_U(unsafe.Pointer(h))}
}

func newQGraphicsEllipseItem_U(h unsafe.Pointer) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem((*C.QGraphicsEllipseItem)(h))
}

// NewQGraphicsEllipseItem constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem() *QGraphicsEllipseItem {
	ret := C.QGraphicsEllipseItem_new()
	return newQGraphicsEllipseItem(ret)
}

// NewQGraphicsEllipseItem2 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem2(rect *QRectF) *QGraphicsEllipseItem {
	ret := C.QGraphicsEllipseItem_new2(rect.cPointer())
	return newQGraphicsEllipseItem(ret)
}

// NewQGraphicsEllipseItem3 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem3(x float64, y float64, w float64, h float64) *QGraphicsEllipseItem {
	ret := C.QGraphicsEllipseItem_new3((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	return newQGraphicsEllipseItem(ret)
}

// NewQGraphicsEllipseItem4 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem4(parent *QGraphicsItem) *QGraphicsEllipseItem {
	ret := C.QGraphicsEllipseItem_new4(parent.cPointer())
	return newQGraphicsEllipseItem(ret)
}

// NewQGraphicsEllipseItem5 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem5(rect *QRectF, parent *QGraphicsItem) *QGraphicsEllipseItem {
	ret := C.QGraphicsEllipseItem_new5(rect.cPointer(), parent.cPointer())
	return newQGraphicsEllipseItem(ret)
}

// NewQGraphicsEllipseItem6 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem6(x float64, y float64, w float64, h float64, parent *QGraphicsItem) *QGraphicsEllipseItem {
	ret := C.QGraphicsEllipseItem_new6((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), parent.cPointer())
	return newQGraphicsEllipseItem(ret)
}

func (this *QGraphicsEllipseItem) Rect() *QRectF {
	ret := C.QGraphicsEllipseItem_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsEllipseItem) SetRect(rect *QRectF) {
	C.QGraphicsEllipseItem_SetRect(this.h, rect.cPointer())
}

func (this *QGraphicsEllipseItem) SetRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsEllipseItem_SetRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsEllipseItem) StartAngle() int {
	ret := C.QGraphicsEllipseItem_StartAngle(this.h)
	return (int)(ret)
}

func (this *QGraphicsEllipseItem) SetStartAngle(angle int) {
	C.QGraphicsEllipseItem_SetStartAngle(this.h, (C.int)(angle))
}

func (this *QGraphicsEllipseItem) SpanAngle() int {
	ret := C.QGraphicsEllipseItem_SpanAngle(this.h)
	return (int)(ret)
}

func (this *QGraphicsEllipseItem) SetSpanAngle(angle int) {
	C.QGraphicsEllipseItem_SetSpanAngle(this.h, (C.int)(angle))
}

func (this *QGraphicsEllipseItem) BoundingRect() *QRectF {
	ret := C.QGraphicsEllipseItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsEllipseItem) Shape() *QPainterPath {
	ret := C.QGraphicsEllipseItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsEllipseItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsEllipseItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsEllipseItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsEllipseItem_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsEllipseItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsEllipseItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsEllipseItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsEllipseItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsEllipseItem) Type() int {
	ret := C.QGraphicsEllipseItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsEllipseItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsEllipseItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsEllipseItem) Delete() {
	C.QGraphicsEllipseItem_Delete(this.h)
}

type QGraphicsPolygonItem struct {
	h *C.QGraphicsPolygonItem
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsPolygonItem) cPointer() *C.QGraphicsPolygonItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsPolygonItem(h *C.QGraphicsPolygonItem) *QGraphicsPolygonItem {
	if h == nil {
		return nil
	}
	return &QGraphicsPolygonItem{h: h, QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem_U(unsafe.Pointer(h))}
}

func newQGraphicsPolygonItem_U(h unsafe.Pointer) *QGraphicsPolygonItem {
	return newQGraphicsPolygonItem((*C.QGraphicsPolygonItem)(h))
}

// NewQGraphicsPolygonItem constructs a new QGraphicsPolygonItem object.
func NewQGraphicsPolygonItem() *QGraphicsPolygonItem {
	ret := C.QGraphicsPolygonItem_new()
	return newQGraphicsPolygonItem(ret)
}

// NewQGraphicsPolygonItem2 constructs a new QGraphicsPolygonItem object.
func NewQGraphicsPolygonItem2(parent *QGraphicsItem) *QGraphicsPolygonItem {
	ret := C.QGraphicsPolygonItem_new2(parent.cPointer())
	return newQGraphicsPolygonItem(ret)
}

func (this *QGraphicsPolygonItem) FillRule() uintptr {
	ret := C.QGraphicsPolygonItem_FillRule(this.h)
	return (uintptr)(ret)
}

func (this *QGraphicsPolygonItem) SetFillRule(rule uintptr) {
	C.QGraphicsPolygonItem_SetFillRule(this.h, (C.uintptr_t)(rule))
}

func (this *QGraphicsPolygonItem) BoundingRect() *QRectF {
	ret := C.QGraphicsPolygonItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPolygonItem) Shape() *QPainterPath {
	ret := C.QGraphicsPolygonItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPolygonItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsPolygonItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsPolygonItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsPolygonItem_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsPolygonItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsPolygonItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsPolygonItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsPolygonItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPolygonItem) Type() int {
	ret := C.QGraphicsPolygonItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsPolygonItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPolygonItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPolygonItem) Delete() {
	C.QGraphicsPolygonItem_Delete(this.h)
}

type QGraphicsLineItem struct {
	h *C.QGraphicsLineItem
	*QGraphicsItem
}

func (this *QGraphicsLineItem) cPointer() *C.QGraphicsLineItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsLineItem(h *C.QGraphicsLineItem) *QGraphicsLineItem {
	if h == nil {
		return nil
	}
	return &QGraphicsLineItem{h: h, QGraphicsItem: newQGraphicsItem_U(unsafe.Pointer(h))}
}

func newQGraphicsLineItem_U(h unsafe.Pointer) *QGraphicsLineItem {
	return newQGraphicsLineItem((*C.QGraphicsLineItem)(h))
}

// NewQGraphicsLineItem constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem() *QGraphicsLineItem {
	ret := C.QGraphicsLineItem_new()
	return newQGraphicsLineItem(ret)
}

// NewQGraphicsLineItem2 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem2(line *QLineF) *QGraphicsLineItem {
	ret := C.QGraphicsLineItem_new2(line.cPointer())
	return newQGraphicsLineItem(ret)
}

// NewQGraphicsLineItem3 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem3(x1 float64, y1 float64, x2 float64, y2 float64) *QGraphicsLineItem {
	ret := C.QGraphicsLineItem_new3((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
	return newQGraphicsLineItem(ret)
}

// NewQGraphicsLineItem4 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem4(parent *QGraphicsItem) *QGraphicsLineItem {
	ret := C.QGraphicsLineItem_new4(parent.cPointer())
	return newQGraphicsLineItem(ret)
}

// NewQGraphicsLineItem5 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem5(line *QLineF, parent *QGraphicsItem) *QGraphicsLineItem {
	ret := C.QGraphicsLineItem_new5(line.cPointer(), parent.cPointer())
	return newQGraphicsLineItem(ret)
}

// NewQGraphicsLineItem6 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem6(x1 float64, y1 float64, x2 float64, y2 float64, parent *QGraphicsItem) *QGraphicsLineItem {
	ret := C.QGraphicsLineItem_new6((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), parent.cPointer())
	return newQGraphicsLineItem(ret)
}

func (this *QGraphicsLineItem) Pen() *QPen {
	ret := C.QGraphicsLineItem_Pen(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPen(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPen) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLineItem) SetPen(pen *QPen) {
	C.QGraphicsLineItem_SetPen(this.h, pen.cPointer())
}

func (this *QGraphicsLineItem) Line() *QLineF {
	ret := C.QGraphicsLineItem_Line(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQLineF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QLineF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLineItem) SetLine(line *QLineF) {
	C.QGraphicsLineItem_SetLine(this.h, line.cPointer())
}

func (this *QGraphicsLineItem) SetLine2(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QGraphicsLineItem_SetLine2(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QGraphicsLineItem) BoundingRect() *QRectF {
	ret := C.QGraphicsLineItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLineItem) Shape() *QPainterPath {
	ret := C.QGraphicsLineItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLineItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsLineItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsLineItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsLineItem_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsLineItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsLineItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsLineItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsLineItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsLineItem) Type() int {
	ret := C.QGraphicsLineItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsLineItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsLineItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsLineItem) Delete() {
	C.QGraphicsLineItem_Delete(this.h)
}

type QGraphicsPixmapItem struct {
	h *C.QGraphicsPixmapItem
	*QGraphicsItem
}

func (this *QGraphicsPixmapItem) cPointer() *C.QGraphicsPixmapItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsPixmapItem(h *C.QGraphicsPixmapItem) *QGraphicsPixmapItem {
	if h == nil {
		return nil
	}
	return &QGraphicsPixmapItem{h: h, QGraphicsItem: newQGraphicsItem_U(unsafe.Pointer(h))}
}

func newQGraphicsPixmapItem_U(h unsafe.Pointer) *QGraphicsPixmapItem {
	return newQGraphicsPixmapItem((*C.QGraphicsPixmapItem)(h))
}

// NewQGraphicsPixmapItem constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem() *QGraphicsPixmapItem {
	ret := C.QGraphicsPixmapItem_new()
	return newQGraphicsPixmapItem(ret)
}

// NewQGraphicsPixmapItem2 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem2(pixmap *QPixmap) *QGraphicsPixmapItem {
	ret := C.QGraphicsPixmapItem_new2(pixmap.cPointer())
	return newQGraphicsPixmapItem(ret)
}

// NewQGraphicsPixmapItem3 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem3(parent *QGraphicsItem) *QGraphicsPixmapItem {
	ret := C.QGraphicsPixmapItem_new3(parent.cPointer())
	return newQGraphicsPixmapItem(ret)
}

// NewQGraphicsPixmapItem4 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem4(pixmap *QPixmap, parent *QGraphicsItem) *QGraphicsPixmapItem {
	ret := C.QGraphicsPixmapItem_new4(pixmap.cPointer(), parent.cPointer())
	return newQGraphicsPixmapItem(ret)
}

func (this *QGraphicsPixmapItem) Pixmap() *QPixmap {
	ret := C.QGraphicsPixmapItem_Pixmap(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPixmapItem) SetPixmap(pixmap *QPixmap) {
	C.QGraphicsPixmapItem_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QGraphicsPixmapItem) TransformationMode() uintptr {
	ret := C.QGraphicsPixmapItem_TransformationMode(this.h)
	return (uintptr)(ret)
}

func (this *QGraphicsPixmapItem) SetTransformationMode(mode uintptr) {
	C.QGraphicsPixmapItem_SetTransformationMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGraphicsPixmapItem) Offset() *QPointF {
	ret := C.QGraphicsPixmapItem_Offset(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPixmapItem) SetOffset(offset *QPointF) {
	C.QGraphicsPixmapItem_SetOffset(this.h, offset.cPointer())
}

func (this *QGraphicsPixmapItem) SetOffset2(x float64, y float64) {
	C.QGraphicsPixmapItem_SetOffset2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsPixmapItem) BoundingRect() *QRectF {
	ret := C.QGraphicsPixmapItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPixmapItem) Shape() *QPainterPath {
	ret := C.QGraphicsPixmapItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPixmapItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsPixmapItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsPixmapItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPixmapItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPixmapItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsPixmapItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsPixmapItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsPixmapItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsPixmapItem) Type() int {
	ret := C.QGraphicsPixmapItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsPixmapItem) ShapeMode() uintptr {
	ret := C.QGraphicsPixmapItem_ShapeMode(this.h)
	return (uintptr)(ret)
}

func (this *QGraphicsPixmapItem) SetShapeMode(mode uintptr) {
	C.QGraphicsPixmapItem_SetShapeMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGraphicsPixmapItem) Delete() {
	C.QGraphicsPixmapItem_Delete(this.h)
}

type QGraphicsTextItem struct {
	h *C.QGraphicsTextItem
	*QGraphicsObject
}

func (this *QGraphicsTextItem) cPointer() *C.QGraphicsTextItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsTextItem(h *C.QGraphicsTextItem) *QGraphicsTextItem {
	if h == nil {
		return nil
	}
	return &QGraphicsTextItem{h: h, QGraphicsObject: newQGraphicsObject_U(unsafe.Pointer(h))}
}

func newQGraphicsTextItem_U(h unsafe.Pointer) *QGraphicsTextItem {
	return newQGraphicsTextItem((*C.QGraphicsTextItem)(h))
}

// NewQGraphicsTextItem constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem() *QGraphicsTextItem {
	ret := C.QGraphicsTextItem_new()
	return newQGraphicsTextItem(ret)
}

// NewQGraphicsTextItem2 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem2(text string) *QGraphicsTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsTextItem_new2(text_Cstring, C.size_t(len(text)))
	return newQGraphicsTextItem(ret)
}

// NewQGraphicsTextItem3 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem3(parent *QGraphicsItem) *QGraphicsTextItem {
	ret := C.QGraphicsTextItem_new3(parent.cPointer())
	return newQGraphicsTextItem(ret)
}

// NewQGraphicsTextItem4 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem4(text string, parent *QGraphicsItem) *QGraphicsTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsTextItem_new4(text_Cstring, C.size_t(len(text)), parent.cPointer())
	return newQGraphicsTextItem(ret)
}

func (this *QGraphicsTextItem) MetaObject() *QMetaObject {
	ret := C.QGraphicsTextItem_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsTextItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTextItem_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsTextItem) ToHtml() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_ToHtml(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsTextItem) SetHtml(html string) {
	html_Cstring := C.CString(html)
	defer C.free(unsafe.Pointer(html_Cstring))
	C.QGraphicsTextItem_SetHtml(this.h, html_Cstring, C.size_t(len(html)))
}

func (this *QGraphicsTextItem) ToPlainText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_ToPlainText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsTextItem) SetPlainText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QGraphicsTextItem_SetPlainText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QGraphicsTextItem) Font() *QFont {
	ret := C.QGraphicsTextItem_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsTextItem) SetFont(font *QFont) {
	C.QGraphicsTextItem_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsTextItem) SetDefaultTextColor(c *QColor) {
	C.QGraphicsTextItem_SetDefaultTextColor(this.h, c.cPointer())
}

func (this *QGraphicsTextItem) DefaultTextColor() *QColor {
	ret := C.QGraphicsTextItem_DefaultTextColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsTextItem) BoundingRect() *QRectF {
	ret := C.QGraphicsTextItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsTextItem) Shape() *QPainterPath {
	ret := C.QGraphicsTextItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsTextItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsTextItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsTextItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsTextItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsTextItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsTextItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsTextItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsTextItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsTextItem) Type() int {
	ret := C.QGraphicsTextItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsTextItem) SetTextWidth(width float64) {
	C.QGraphicsTextItem_SetTextWidth(this.h, (C.double)(width))
}

func (this *QGraphicsTextItem) TextWidth() float64 {
	ret := C.QGraphicsTextItem_TextWidth(this.h)
	return (float64)(ret)
}

func (this *QGraphicsTextItem) AdjustSize() {
	C.QGraphicsTextItem_AdjustSize(this.h)
}

func (this *QGraphicsTextItem) SetDocument(document *QTextDocument) {
	C.QGraphicsTextItem_SetDocument(this.h, document.cPointer())
}

func (this *QGraphicsTextItem) Document() *QTextDocument {
	ret := C.QGraphicsTextItem_Document(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QGraphicsTextItem) SetTextInteractionFlags(flags int) {
	C.QGraphicsTextItem_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsTextItem) TextInteractionFlags() int {
	ret := C.QGraphicsTextItem_TextInteractionFlags(this.h)
	return (int)(ret)
}

func (this *QGraphicsTextItem) SetTabChangesFocus(b bool) {
	C.QGraphicsTextItem_SetTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QGraphicsTextItem) TabChangesFocus() bool {
	ret := C.QGraphicsTextItem_TabChangesFocus(this.h)
	return (bool)(ret)
}

func (this *QGraphicsTextItem) SetOpenExternalLinks(open bool) {
	C.QGraphicsTextItem_SetOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QGraphicsTextItem) OpenExternalLinks() bool {
	ret := C.QGraphicsTextItem_OpenExternalLinks(this.h)
	return (bool)(ret)
}

func (this *QGraphicsTextItem) SetTextCursor(cursor *QTextCursor) {
	C.QGraphicsTextItem_SetTextCursor(this.h, cursor.cPointer())
}

func (this *QGraphicsTextItem) TextCursor() *QTextCursor {
	ret := C.QGraphicsTextItem_TextCursor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsTextItem) LinkActivated(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QGraphicsTextItem_LinkActivated(this.h, param1_Cstring, C.size_t(len(param1)))
}

func (this *QGraphicsTextItem) OnLinkActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsTextItem_connect_LinkActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsTextItem) LinkHovered(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QGraphicsTextItem_LinkHovered(this.h, param1_Cstring, C.size_t(len(param1)))
}

func (this *QGraphicsTextItem) OnLinkHovered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsTextItem_connect_LinkHovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsTextItem_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTextItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTextItem_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTextItem_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTextItem_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsTextItem) Delete() {
	C.QGraphicsTextItem_Delete(this.h)
}

type QGraphicsSimpleTextItem struct {
	h *C.QGraphicsSimpleTextItem
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsSimpleTextItem) cPointer() *C.QGraphicsSimpleTextItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsSimpleTextItem(h *C.QGraphicsSimpleTextItem) *QGraphicsSimpleTextItem {
	if h == nil {
		return nil
	}
	return &QGraphicsSimpleTextItem{h: h, QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem_U(unsafe.Pointer(h))}
}

func newQGraphicsSimpleTextItem_U(h unsafe.Pointer) *QGraphicsSimpleTextItem {
	return newQGraphicsSimpleTextItem((*C.QGraphicsSimpleTextItem)(h))
}

// NewQGraphicsSimpleTextItem constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem() *QGraphicsSimpleTextItem {
	ret := C.QGraphicsSimpleTextItem_new()
	return newQGraphicsSimpleTextItem(ret)
}

// NewQGraphicsSimpleTextItem2 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem2(text string) *QGraphicsSimpleTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsSimpleTextItem_new2(text_Cstring, C.size_t(len(text)))
	return newQGraphicsSimpleTextItem(ret)
}

// NewQGraphicsSimpleTextItem3 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem3(parent *QGraphicsItem) *QGraphicsSimpleTextItem {
	ret := C.QGraphicsSimpleTextItem_new3(parent.cPointer())
	return newQGraphicsSimpleTextItem(ret)
}

// NewQGraphicsSimpleTextItem4 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem4(text string, parent *QGraphicsItem) *QGraphicsSimpleTextItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QGraphicsSimpleTextItem_new4(text_Cstring, C.size_t(len(text)), parent.cPointer())
	return newQGraphicsSimpleTextItem(ret)
}

func (this *QGraphicsSimpleTextItem) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QGraphicsSimpleTextItem_SetText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QGraphicsSimpleTextItem) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsSimpleTextItem_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsSimpleTextItem) SetFont(font *QFont) {
	C.QGraphicsSimpleTextItem_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsSimpleTextItem) Font() *QFont {
	ret := C.QGraphicsSimpleTextItem_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSimpleTextItem) BoundingRect() *QRectF {
	ret := C.QGraphicsSimpleTextItem_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSimpleTextItem) Shape() *QPainterPath {
	ret := C.QGraphicsSimpleTextItem_Shape(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSimpleTextItem) Contains(point *QPointF) bool {
	ret := C.QGraphicsSimpleTextItem_Contains(this.h, point.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsSimpleTextItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsSimpleTextItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsSimpleTextItem) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsSimpleTextItem_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsSimpleTextItem) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsSimpleTextItem_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSimpleTextItem) Type() int {
	ret := C.QGraphicsSimpleTextItem_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsSimpleTextItem) Delete() {
	C.QGraphicsSimpleTextItem_Delete(this.h)
}

type QGraphicsItemGroup struct {
	h *C.QGraphicsItemGroup
	*QGraphicsItem
}

func (this *QGraphicsItemGroup) cPointer() *C.QGraphicsItemGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsItemGroup(h *C.QGraphicsItemGroup) *QGraphicsItemGroup {
	if h == nil {
		return nil
	}
	return &QGraphicsItemGroup{h: h, QGraphicsItem: newQGraphicsItem_U(unsafe.Pointer(h))}
}

func newQGraphicsItemGroup_U(h unsafe.Pointer) *QGraphicsItemGroup {
	return newQGraphicsItemGroup((*C.QGraphicsItemGroup)(h))
}

// NewQGraphicsItemGroup constructs a new QGraphicsItemGroup object.
func NewQGraphicsItemGroup() *QGraphicsItemGroup {
	ret := C.QGraphicsItemGroup_new()
	return newQGraphicsItemGroup(ret)
}

// NewQGraphicsItemGroup2 constructs a new QGraphicsItemGroup object.
func NewQGraphicsItemGroup2(parent *QGraphicsItem) *QGraphicsItemGroup {
	ret := C.QGraphicsItemGroup_new2(parent.cPointer())
	return newQGraphicsItemGroup(ret)
}

func (this *QGraphicsItemGroup) AddToGroup(item *QGraphicsItem) {
	C.QGraphicsItemGroup_AddToGroup(this.h, item.cPointer())
}

func (this *QGraphicsItemGroup) RemoveFromGroup(item *QGraphicsItem) {
	C.QGraphicsItemGroup_RemoveFromGroup(this.h, item.cPointer())
}

func (this *QGraphicsItemGroup) BoundingRect() *QRectF {
	ret := C.QGraphicsItemGroup_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItemGroup) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsItemGroup_Paint(this.h, painter.cPointer(), option.cPointer())
}

func (this *QGraphicsItemGroup) IsObscuredBy(item *QGraphicsItem) bool {
	ret := C.QGraphicsItemGroup_IsObscuredBy(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QGraphicsItemGroup) OpaqueArea() *QPainterPath {
	ret := C.QGraphicsItemGroup_OpaqueArea(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsItemGroup) Type() int {
	ret := C.QGraphicsItemGroup_Type(this.h)
	return (int)(ret)
}

func (this *QGraphicsItemGroup) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsItemGroup_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsItemGroup) Delete() {
	C.QGraphicsItemGroup_Delete(this.h)
}

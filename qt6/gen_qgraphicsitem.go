package qt6

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

type QGraphicsItem__GraphicsItemFlag int

const (
	QGraphicsItem__ItemIsMovable                        QGraphicsItem__GraphicsItemFlag = 1
	QGraphicsItem__ItemIsSelectable                     QGraphicsItem__GraphicsItemFlag = 2
	QGraphicsItem__ItemIsFocusable                      QGraphicsItem__GraphicsItemFlag = 4
	QGraphicsItem__ItemClipsToShape                     QGraphicsItem__GraphicsItemFlag = 8
	QGraphicsItem__ItemClipsChildrenToShape             QGraphicsItem__GraphicsItemFlag = 16
	QGraphicsItem__ItemIgnoresTransformations           QGraphicsItem__GraphicsItemFlag = 32
	QGraphicsItem__ItemIgnoresParentOpacity             QGraphicsItem__GraphicsItemFlag = 64
	QGraphicsItem__ItemDoesntPropagateOpacityToChildren QGraphicsItem__GraphicsItemFlag = 128
	QGraphicsItem__ItemStacksBehindParent               QGraphicsItem__GraphicsItemFlag = 256
	QGraphicsItem__ItemUsesExtendedStyleOption          QGraphicsItem__GraphicsItemFlag = 512
	QGraphicsItem__ItemHasNoContents                    QGraphicsItem__GraphicsItemFlag = 1024
	QGraphicsItem__ItemSendsGeometryChanges             QGraphicsItem__GraphicsItemFlag = 2048
	QGraphicsItem__ItemAcceptsInputMethod               QGraphicsItem__GraphicsItemFlag = 4096
	QGraphicsItem__ItemNegativeZStacksBehindParent      QGraphicsItem__GraphicsItemFlag = 8192
	QGraphicsItem__ItemIsPanel                          QGraphicsItem__GraphicsItemFlag = 16384
	QGraphicsItem__ItemIsFocusScope                     QGraphicsItem__GraphicsItemFlag = 32768
	QGraphicsItem__ItemSendsScenePositionChanges        QGraphicsItem__GraphicsItemFlag = 65536
	QGraphicsItem__ItemStopsClickFocusPropagation       QGraphicsItem__GraphicsItemFlag = 131072
	QGraphicsItem__ItemStopsFocusHandling               QGraphicsItem__GraphicsItemFlag = 262144
	QGraphicsItem__ItemContainsChildrenInShape          QGraphicsItem__GraphicsItemFlag = 524288
)

type QGraphicsItem__GraphicsItemChange int

const (
	QGraphicsItem__ItemPositionChange                 QGraphicsItem__GraphicsItemChange = 0
	QGraphicsItem__ItemVisibleChange                  QGraphicsItem__GraphicsItemChange = 2
	QGraphicsItem__ItemEnabledChange                  QGraphicsItem__GraphicsItemChange = 3
	QGraphicsItem__ItemSelectedChange                 QGraphicsItem__GraphicsItemChange = 4
	QGraphicsItem__ItemParentChange                   QGraphicsItem__GraphicsItemChange = 5
	QGraphicsItem__ItemChildAddedChange               QGraphicsItem__GraphicsItemChange = 6
	QGraphicsItem__ItemChildRemovedChange             QGraphicsItem__GraphicsItemChange = 7
	QGraphicsItem__ItemTransformChange                QGraphicsItem__GraphicsItemChange = 8
	QGraphicsItem__ItemPositionHasChanged             QGraphicsItem__GraphicsItemChange = 9
	QGraphicsItem__ItemTransformHasChanged            QGraphicsItem__GraphicsItemChange = 10
	QGraphicsItem__ItemSceneChange                    QGraphicsItem__GraphicsItemChange = 11
	QGraphicsItem__ItemVisibleHasChanged              QGraphicsItem__GraphicsItemChange = 12
	QGraphicsItem__ItemEnabledHasChanged              QGraphicsItem__GraphicsItemChange = 13
	QGraphicsItem__ItemSelectedHasChanged             QGraphicsItem__GraphicsItemChange = 14
	QGraphicsItem__ItemParentHasChanged               QGraphicsItem__GraphicsItemChange = 15
	QGraphicsItem__ItemSceneHasChanged                QGraphicsItem__GraphicsItemChange = 16
	QGraphicsItem__ItemCursorChange                   QGraphicsItem__GraphicsItemChange = 17
	QGraphicsItem__ItemCursorHasChanged               QGraphicsItem__GraphicsItemChange = 18
	QGraphicsItem__ItemToolTipChange                  QGraphicsItem__GraphicsItemChange = 19
	QGraphicsItem__ItemToolTipHasChanged              QGraphicsItem__GraphicsItemChange = 20
	QGraphicsItem__ItemFlagsChange                    QGraphicsItem__GraphicsItemChange = 21
	QGraphicsItem__ItemFlagsHaveChanged               QGraphicsItem__GraphicsItemChange = 22
	QGraphicsItem__ItemZValueChange                   QGraphicsItem__GraphicsItemChange = 23
	QGraphicsItem__ItemZValueHasChanged               QGraphicsItem__GraphicsItemChange = 24
	QGraphicsItem__ItemOpacityChange                  QGraphicsItem__GraphicsItemChange = 25
	QGraphicsItem__ItemOpacityHasChanged              QGraphicsItem__GraphicsItemChange = 26
	QGraphicsItem__ItemScenePositionHasChanged        QGraphicsItem__GraphicsItemChange = 27
	QGraphicsItem__ItemRotationChange                 QGraphicsItem__GraphicsItemChange = 28
	QGraphicsItem__ItemRotationHasChanged             QGraphicsItem__GraphicsItemChange = 29
	QGraphicsItem__ItemScaleChange                    QGraphicsItem__GraphicsItemChange = 30
	QGraphicsItem__ItemScaleHasChanged                QGraphicsItem__GraphicsItemChange = 31
	QGraphicsItem__ItemTransformOriginPointChange     QGraphicsItem__GraphicsItemChange = 32
	QGraphicsItem__ItemTransformOriginPointHasChanged QGraphicsItem__GraphicsItemChange = 33
)

type QGraphicsItem__CacheMode int

const (
	QGraphicsItem__NoCache               QGraphicsItem__CacheMode = 0
	QGraphicsItem__ItemCoordinateCache   QGraphicsItem__CacheMode = 1
	QGraphicsItem__DeviceCoordinateCache QGraphicsItem__CacheMode = 2
)

type QGraphicsItem__PanelModality int

const (
	QGraphicsItem__NonModal   QGraphicsItem__PanelModality = 0
	QGraphicsItem__PanelModal QGraphicsItem__PanelModality = 1
	QGraphicsItem__SceneModal QGraphicsItem__PanelModality = 2
)

type QGraphicsItem__ int

const (
	QGraphicsItem__Type     QGraphicsItem__ = 1
	QGraphicsItem__UserType QGraphicsItem__ = 65536
)

type QGraphicsItem__Extension int

const (
	QGraphicsItem__UserExtension QGraphicsItem__Extension = 2147483648
)

type QGraphicsPathItem__ int

const (
	QGraphicsPathItem__Type QGraphicsPathItem__ = 2
)

type QGraphicsRectItem__ int

const (
	QGraphicsRectItem__Type QGraphicsRectItem__ = 3
)

type QGraphicsEllipseItem__ int

const (
	QGraphicsEllipseItem__Type QGraphicsEllipseItem__ = 4
)

type QGraphicsPolygonItem__ int

const (
	QGraphicsPolygonItem__Type QGraphicsPolygonItem__ = 5
)

type QGraphicsLineItem__ int

const (
	QGraphicsLineItem__Type QGraphicsLineItem__ = 6
)

type QGraphicsPixmapItem__ShapeMode int

const (
	QGraphicsPixmapItem__MaskShape          QGraphicsPixmapItem__ShapeMode = 0
	QGraphicsPixmapItem__BoundingRectShape  QGraphicsPixmapItem__ShapeMode = 1
	QGraphicsPixmapItem__HeuristicMaskShape QGraphicsPixmapItem__ShapeMode = 2
)

type QGraphicsPixmapItem__ int

const (
	QGraphicsPixmapItem__Type QGraphicsPixmapItem__ = 7
)

type QGraphicsTextItem__ int

const (
	QGraphicsTextItem__Type QGraphicsTextItem__ = 8
)

type QGraphicsSimpleTextItem__ int

const (
	QGraphicsSimpleTextItem__Type QGraphicsSimpleTextItem__ = 9
)

type QGraphicsItemGroup__ int

const (
	QGraphicsItemGroup__Type QGraphicsItemGroup__ = 10
)

type QGraphicsItem struct {
	h          *C.QGraphicsItem
	isSubclass bool
}

func (this *QGraphicsItem) cPointer() *C.QGraphicsItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsItem constructs the type using only CGO pointers.
func newQGraphicsItem(h *C.QGraphicsItem) *QGraphicsItem {
	if h == nil {
		return nil
	}
	return &QGraphicsItem{h: h}
}

// UnsafeNewQGraphicsItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsItem(h unsafe.Pointer) *QGraphicsItem {
	if h == nil {
		return nil
	}

	return &QGraphicsItem{h: (*C.QGraphicsItem)(h)}
}

func (this *QGraphicsItem) Scene() *QGraphicsScene {
	return UnsafeNewQGraphicsScene(unsafe.Pointer(C.QGraphicsItem_Scene(this.h)), nil)
}

func (this *QGraphicsItem) ParentItem() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItem_ParentItem(this.h)))
}

func (this *QGraphicsItem) TopLevelItem() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItem_TopLevelItem(this.h)))
}

func (this *QGraphicsItem) ParentObject() *QGraphicsObject {
	return UnsafeNewQGraphicsObject(unsafe.Pointer(C.QGraphicsItem_ParentObject(this.h)), nil, nil)
}

func (this *QGraphicsItem) ParentWidget() *QGraphicsWidget {
	return UnsafeNewQGraphicsWidget(unsafe.Pointer(C.QGraphicsItem_ParentWidget(this.h)), nil, nil, nil, nil)
}

func (this *QGraphicsItem) TopLevelWidget() *QGraphicsWidget {
	return UnsafeNewQGraphicsWidget(unsafe.Pointer(C.QGraphicsItem_TopLevelWidget(this.h)), nil, nil, nil, nil)
}

func (this *QGraphicsItem) Window() *QGraphicsWidget {
	return UnsafeNewQGraphicsWidget(unsafe.Pointer(C.QGraphicsItem_Window(this.h)), nil, nil, nil, nil)
}

func (this *QGraphicsItem) Panel() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItem_Panel(this.h)))
}

func (this *QGraphicsItem) SetParentItem(parent *QGraphicsItem) {
	C.QGraphicsItem_SetParentItem(this.h, parent.cPointer())
}

func (this *QGraphicsItem) ChildItems() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsItem_ChildItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsItem) IsWidget() bool {
	return (bool)(C.QGraphicsItem_IsWidget(this.h))
}

func (this *QGraphicsItem) IsWindow() bool {
	return (bool)(C.QGraphicsItem_IsWindow(this.h))
}

func (this *QGraphicsItem) IsPanel() bool {
	return (bool)(C.QGraphicsItem_IsPanel(this.h))
}

func (this *QGraphicsItem) ToGraphicsObject() *QGraphicsObject {
	return UnsafeNewQGraphicsObject(unsafe.Pointer(C.QGraphicsItem_ToGraphicsObject(this.h)), nil, nil)
}

func (this *QGraphicsItem) ToGraphicsObject2() *QGraphicsObject {
	return UnsafeNewQGraphicsObject(unsafe.Pointer(C.QGraphicsItem_ToGraphicsObject2(this.h)), nil, nil)
}

func (this *QGraphicsItem) Group() *QGraphicsItemGroup {
	return UnsafeNewQGraphicsItemGroup(unsafe.Pointer(C.QGraphicsItem_Group(this.h)), nil)
}

func (this *QGraphicsItem) SetGroup(group *QGraphicsItemGroup) {
	C.QGraphicsItem_SetGroup(this.h, group.cPointer())
}

func (this *QGraphicsItem) Flags() QGraphicsItem__GraphicsItemFlag {
	return (QGraphicsItem__GraphicsItemFlag)(C.QGraphicsItem_Flags(this.h))
}

func (this *QGraphicsItem) SetFlag(flag QGraphicsItem__GraphicsItemFlag) {
	C.QGraphicsItem_SetFlag(this.h, (C.int)(flag))
}

func (this *QGraphicsItem) SetFlags(flags QGraphicsItem__GraphicsItemFlag) {
	C.QGraphicsItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsItem) CacheMode() QGraphicsItem__CacheMode {
	return (QGraphicsItem__CacheMode)(C.QGraphicsItem_CacheMode(this.h))
}

func (this *QGraphicsItem) SetCacheMode(mode QGraphicsItem__CacheMode) {
	C.QGraphicsItem_SetCacheMode(this.h, (C.int)(mode))
}

func (this *QGraphicsItem) PanelModality() QGraphicsItem__PanelModality {
	return (QGraphicsItem__PanelModality)(C.QGraphicsItem_PanelModality(this.h))
}

func (this *QGraphicsItem) SetPanelModality(panelModality QGraphicsItem__PanelModality) {
	C.QGraphicsItem_SetPanelModality(this.h, (C.int)(panelModality))
}

func (this *QGraphicsItem) IsBlockedByModalPanel() bool {
	return (bool)(C.QGraphicsItem_IsBlockedByModalPanel(this.h))
}

func (this *QGraphicsItem) ToolTip() string {
	var _ms C.struct_miqt_string = C.QGraphicsItem_ToolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsItem) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QGraphicsItem_SetToolTip(this.h, toolTip_ms)
}

func (this *QGraphicsItem) Cursor() *QCursor {
	_ret := C.QGraphicsItem_Cursor(this.h)
	_goptr := newQCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetCursor(cursor *QCursor) {
	C.QGraphicsItem_SetCursor(this.h, cursor.cPointer())
}

func (this *QGraphicsItem) HasCursor() bool {
	return (bool)(C.QGraphicsItem_HasCursor(this.h))
}

func (this *QGraphicsItem) UnsetCursor() {
	C.QGraphicsItem_UnsetCursor(this.h)
}

func (this *QGraphicsItem) IsVisible() bool {
	return (bool)(C.QGraphicsItem_IsVisible(this.h))
}

func (this *QGraphicsItem) IsVisibleTo(parent *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItem_IsVisibleTo(this.h, parent.cPointer()))
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
	return (bool)(C.QGraphicsItem_IsEnabled(this.h))
}

func (this *QGraphicsItem) SetEnabled(enabled bool) {
	C.QGraphicsItem_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) IsSelected() bool {
	return (bool)(C.QGraphicsItem_IsSelected(this.h))
}

func (this *QGraphicsItem) SetSelected(selected bool) {
	C.QGraphicsItem_SetSelected(this.h, (C.bool)(selected))
}

func (this *QGraphicsItem) AcceptDrops() bool {
	return (bool)(C.QGraphicsItem_AcceptDrops(this.h))
}

func (this *QGraphicsItem) SetAcceptDrops(on bool) {
	C.QGraphicsItem_SetAcceptDrops(this.h, (C.bool)(on))
}

func (this *QGraphicsItem) Opacity() float64 {
	return (float64)(C.QGraphicsItem_Opacity(this.h))
}

func (this *QGraphicsItem) EffectiveOpacity() float64 {
	return (float64)(C.QGraphicsItem_EffectiveOpacity(this.h))
}

func (this *QGraphicsItem) SetOpacity(opacity float64) {
	C.QGraphicsItem_SetOpacity(this.h, (C.double)(opacity))
}

func (this *QGraphicsItem) GraphicsEffect() *QGraphicsEffect {
	return UnsafeNewQGraphicsEffect(unsafe.Pointer(C.QGraphicsItem_GraphicsEffect(this.h)), nil)
}

func (this *QGraphicsItem) SetGraphicsEffect(effect *QGraphicsEffect) {
	C.QGraphicsItem_SetGraphicsEffect(this.h, effect.cPointer())
}

func (this *QGraphicsItem) AcceptedMouseButtons() MouseButton {
	return (MouseButton)(C.QGraphicsItem_AcceptedMouseButtons(this.h))
}

func (this *QGraphicsItem) SetAcceptedMouseButtons(buttons MouseButton) {
	C.QGraphicsItem_SetAcceptedMouseButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsItem) AcceptHoverEvents() bool {
	return (bool)(C.QGraphicsItem_AcceptHoverEvents(this.h))
}

func (this *QGraphicsItem) SetAcceptHoverEvents(enabled bool) {
	C.QGraphicsItem_SetAcceptHoverEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) AcceptTouchEvents() bool {
	return (bool)(C.QGraphicsItem_AcceptTouchEvents(this.h))
}

func (this *QGraphicsItem) SetAcceptTouchEvents(enabled bool) {
	C.QGraphicsItem_SetAcceptTouchEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) FiltersChildEvents() bool {
	return (bool)(C.QGraphicsItem_FiltersChildEvents(this.h))
}

func (this *QGraphicsItem) SetFiltersChildEvents(enabled bool) {
	C.QGraphicsItem_SetFiltersChildEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) HandlesChildEvents() bool {
	return (bool)(C.QGraphicsItem_HandlesChildEvents(this.h))
}

func (this *QGraphicsItem) SetHandlesChildEvents(enabled bool) {
	C.QGraphicsItem_SetHandlesChildEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) IsActive() bool {
	return (bool)(C.QGraphicsItem_IsActive(this.h))
}

func (this *QGraphicsItem) SetActive(active bool) {
	C.QGraphicsItem_SetActive(this.h, (C.bool)(active))
}

func (this *QGraphicsItem) HasFocus() bool {
	return (bool)(C.QGraphicsItem_HasFocus(this.h))
}

func (this *QGraphicsItem) SetFocus() {
	C.QGraphicsItem_SetFocus(this.h)
}

func (this *QGraphicsItem) ClearFocus() {
	C.QGraphicsItem_ClearFocus(this.h)
}

func (this *QGraphicsItem) FocusProxy() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItem_FocusProxy(this.h)))
}

func (this *QGraphicsItem) SetFocusProxy(item *QGraphicsItem) {
	C.QGraphicsItem_SetFocusProxy(this.h, item.cPointer())
}

func (this *QGraphicsItem) FocusItem() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItem_FocusItem(this.h)))
}

func (this *QGraphicsItem) FocusScopeItem() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItem_FocusScopeItem(this.h)))
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
	_ret := C.QGraphicsItem_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) X() float64 {
	return (float64)(C.QGraphicsItem_X(this.h))
}

func (this *QGraphicsItem) SetX(x float64) {
	C.QGraphicsItem_SetX(this.h, (C.double)(x))
}

func (this *QGraphicsItem) Y() float64 {
	return (float64)(C.QGraphicsItem_Y(this.h))
}

func (this *QGraphicsItem) SetY(y float64) {
	C.QGraphicsItem_SetY(this.h, (C.double)(y))
}

func (this *QGraphicsItem) ScenePos() *QPointF {
	_ret := C.QGraphicsItem_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

func (this *QGraphicsItem) Transform() *QTransform {
	_ret := C.QGraphicsItem_Transform(this.h)
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SceneTransform() *QTransform {
	_ret := C.QGraphicsItem_SceneTransform(this.h)
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) DeviceTransform(viewportTransform *QTransform) *QTransform {
	_ret := C.QGraphicsItem_DeviceTransform(this.h, viewportTransform.cPointer())
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) ItemTransform(other *QGraphicsItem) *QTransform {
	_ret := C.QGraphicsItem_ItemTransform(this.h, other.cPointer())
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	return (float64)(C.QGraphicsItem_Rotation(this.h))
}

func (this *QGraphicsItem) SetScale(scale float64) {
	C.QGraphicsItem_SetScale(this.h, (C.double)(scale))
}

func (this *QGraphicsItem) Scale() float64 {
	return (float64)(C.QGraphicsItem_Scale(this.h))
}

func (this *QGraphicsItem) Transformations() []*QGraphicsTransform {
	var _ma C.struct_miqt_array = C.QGraphicsItem_Transformations(this.h)
	_ret := make([]*QGraphicsTransform, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsTransform)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsTransform(unsafe.Pointer(_outCast[i]), nil)
	}
	return _ret
}

func (this *QGraphicsItem) SetTransformations(transformations []*QGraphicsTransform) {
	transformations_CArray := (*[0xffff]*C.QGraphicsTransform)(C.malloc(C.size_t(8 * len(transformations))))
	defer C.free(unsafe.Pointer(transformations_CArray))
	for i := range transformations {
		transformations_CArray[i] = transformations[i].cPointer()
	}
	transformations_ma := C.struct_miqt_array{len: C.size_t(len(transformations)), data: unsafe.Pointer(transformations_CArray)}
	C.QGraphicsItem_SetTransformations(this.h, transformations_ma)
}

func (this *QGraphicsItem) TransformOriginPoint() *QPointF {
	_ret := C.QGraphicsItem_TransformOriginPoint(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	return (float64)(C.QGraphicsItem_ZValue(this.h))
}

func (this *QGraphicsItem) SetZValue(z float64) {
	C.QGraphicsItem_SetZValue(this.h, (C.double)(z))
}

func (this *QGraphicsItem) StackBefore(sibling *QGraphicsItem) {
	C.QGraphicsItem_StackBefore(this.h, sibling.cPointer())
}

func (this *QGraphicsItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) ChildrenBoundingRect() *QRectF {
	_ret := C.QGraphicsItem_ChildrenBoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SceneBoundingRect() *QRectF {
	_ret := C.QGraphicsItem_SceneBoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) Shape() *QPainterPath {
	_ret := C.QGraphicsItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) IsClipped() bool {
	return (bool)(C.QGraphicsItem_IsClipped(this.h))
}

func (this *QGraphicsItem) ClipPath() *QPainterPath {
	_ret := C.QGraphicsItem_ClipPath(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsItem) CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {
	return (bool)(C.QGraphicsItem_CollidesWithItem(this.h, other.cPointer(), (C.int)(mode)))
}

func (this *QGraphicsItem) CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {
	return (bool)(C.QGraphicsItem_CollidesWithPath(this.h, path.cPointer(), (C.int)(mode)))
}

func (this *QGraphicsItem) CollidingItems() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsItem_CollidingItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsItem) IsObscured() bool {
	return (bool)(C.QGraphicsItem_IsObscured(this.h))
}

func (this *QGraphicsItem) IsObscured2(x float64, y float64, w float64, h float64) bool {
	return (bool)(C.QGraphicsItem_IsObscured2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
}

func (this *QGraphicsItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) BoundingRegion(itemToDeviceTransform *QTransform) *QRegion {
	_ret := C.QGraphicsItem_BoundingRegion(this.h, itemToDeviceTransform.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) BoundingRegionGranularity() float64 {
	return (float64)(C.QGraphicsItem_BoundingRegionGranularity(this.h))
}

func (this *QGraphicsItem) SetBoundingRegionGranularity(granularity float64) {
	C.QGraphicsItem_SetBoundingRegionGranularity(this.h, (C.double)(granularity))
}

func (this *QGraphicsItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
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
	_ret := C.QGraphicsItem_MapToItem(this.h, item.cPointer(), point.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToParent(point *QPointF) *QPointF {
	_ret := C.QGraphicsItem_MapToParent(this.h, point.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToScene(point *QPointF) *QPointF {
	_ret := C.QGraphicsItem_MapToScene(this.h, point.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToItem(item *QGraphicsItem, rect *QRectF) *QRectF {
	_ret := C.QGraphicsItem_MapRectToItem(this.h, item.cPointer(), rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToParent(rect *QRectF) *QRectF {
	_ret := C.QGraphicsItem_MapRectToParent(this.h, rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToScene(rect *QRectF) *QRectF {
	_ret := C.QGraphicsItem_MapRectToScene(this.h, rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToItem4(item *QGraphicsItem, path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsItem_MapToItem4(this.h, item.cPointer(), path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToParentWithPath(path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsItem_MapToParentWithPath(this.h, path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToSceneWithPath(path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsItem_MapToSceneWithPath(this.h, path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromItem(item *QGraphicsItem, point *QPointF) *QPointF {
	_ret := C.QGraphicsItem_MapFromItem(this.h, item.cPointer(), point.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromParent(point *QPointF) *QPointF {
	_ret := C.QGraphicsItem_MapFromParent(this.h, point.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromScene(point *QPointF) *QPointF {
	_ret := C.QGraphicsItem_MapFromScene(this.h, point.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromItem(item *QGraphicsItem, rect *QRectF) *QRectF {
	_ret := C.QGraphicsItem_MapRectFromItem(this.h, item.cPointer(), rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromParent(rect *QRectF) *QRectF {
	_ret := C.QGraphicsItem_MapRectFromParent(this.h, rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromScene(rect *QRectF) *QRectF {
	_ret := C.QGraphicsItem_MapRectFromScene(this.h, rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromItem4(item *QGraphicsItem, path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsItem_MapFromItem4(this.h, item.cPointer(), path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromParentWithPath(path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsItem_MapFromParentWithPath(this.h, path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromSceneWithPath(path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsItem_MapFromSceneWithPath(this.h, path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToItem5(item *QGraphicsItem, x float64, y float64) *QPointF {
	_ret := C.QGraphicsItem_MapToItem5(this.h, item.cPointer(), (C.double)(x), (C.double)(y))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToParent2(x float64, y float64) *QPointF {
	_ret := C.QGraphicsItem_MapToParent2(this.h, (C.double)(x), (C.double)(y))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToScene2(x float64, y float64) *QPointF {
	_ret := C.QGraphicsItem_MapToScene2(this.h, (C.double)(x), (C.double)(y))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToItem2(item *QGraphicsItem, x float64, y float64, w float64, h float64) *QRectF {
	_ret := C.QGraphicsItem_MapRectToItem2(this.h, item.cPointer(), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToParent2(x float64, y float64, w float64, h float64) *QRectF {
	_ret := C.QGraphicsItem_MapRectToParent2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToScene2(x float64, y float64, w float64, h float64) *QRectF {
	_ret := C.QGraphicsItem_MapRectToScene2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromItem5(item *QGraphicsItem, x float64, y float64) *QPointF {
	_ret := C.QGraphicsItem_MapFromItem5(this.h, item.cPointer(), (C.double)(x), (C.double)(y))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromParent2(x float64, y float64) *QPointF {
	_ret := C.QGraphicsItem_MapFromParent2(this.h, (C.double)(x), (C.double)(y))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromScene2(x float64, y float64) *QPointF {
	_ret := C.QGraphicsItem_MapFromScene2(this.h, (C.double)(x), (C.double)(y))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromItem2(item *QGraphicsItem, x float64, y float64, w float64, h float64) *QRectF {
	_ret := C.QGraphicsItem_MapRectFromItem2(this.h, item.cPointer(), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromParent2(x float64, y float64, w float64, h float64) *QRectF {
	_ret := C.QGraphicsItem_MapRectFromParent2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromScene2(x float64, y float64, w float64, h float64) *QRectF {
	_ret := C.QGraphicsItem_MapRectFromScene2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) IsAncestorOf(child *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItem_IsAncestorOf(this.h, child.cPointer()))
}

func (this *QGraphicsItem) CommonAncestorItem(other *QGraphicsItem) *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItem_CommonAncestorItem(this.h, other.cPointer())))
}

func (this *QGraphicsItem) IsUnderMouse() bool {
	return (bool)(C.QGraphicsItem_IsUnderMouse(this.h))
}

func (this *QGraphicsItem) Data(key int) *QVariant {
	_ret := C.QGraphicsItem_Data(this.h, (C.int)(key))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetData(key int, value *QVariant) {
	C.QGraphicsItem_SetData(this.h, (C.int)(key), value.cPointer())
}

func (this *QGraphicsItem) InputMethodHints() InputMethodHint {
	return (InputMethodHint)(C.QGraphicsItem_InputMethodHints(this.h))
}

func (this *QGraphicsItem) SetInputMethodHints(hints InputMethodHint) {
	C.QGraphicsItem_SetInputMethodHints(this.h, (C.int)(hints))
}

func (this *QGraphicsItem) Type() int {
	return (int)(C.QGraphicsItem_Type(this.h))
}

func (this *QGraphicsItem) InstallSceneEventFilter(filterItem *QGraphicsItem) {
	C.QGraphicsItem_InstallSceneEventFilter(this.h, filterItem.cPointer())
}

func (this *QGraphicsItem) RemoveSceneEventFilter(filterItem *QGraphicsItem) {
	C.QGraphicsItem_RemoveSceneEventFilter(this.h, filterItem.cPointer())
}

func (this *QGraphicsItem) SetFlag2(flag QGraphicsItem__GraphicsItemFlag, enabled bool) {
	C.QGraphicsItem_SetFlag2(this.h, (C.int)(flag), (C.bool)(enabled))
}

func (this *QGraphicsItem) SetCacheMode2(mode QGraphicsItem__CacheMode, cacheSize *QSize) {
	C.QGraphicsItem_SetCacheMode2(this.h, (C.int)(mode), cacheSize.cPointer())
}

func (this *QGraphicsItem) SetFocus1(focusReason FocusReason) {
	C.QGraphicsItem_SetFocus1(this.h, (C.int)(focusReason))
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

func (this *QGraphicsItem) ItemTransform2(other *QGraphicsItem, ok *bool) *QTransform {
	_ret := C.QGraphicsItem_ItemTransform2(this.h, other.cPointer(), (*C.bool)(unsafe.Pointer(ok)))
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetTransform2(matrix *QTransform, combine bool) {
	C.QGraphicsItem_SetTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsItem) CollidingItems1(mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsItem_CollidingItems1(this.h, (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsItem) IsObscured1(rect *QRectF) bool {
	return (bool)(C.QGraphicsItem_IsObscured1(this.h, rect.cPointer()))
}

func (this *QGraphicsItem) Update1(rect *QRectF) {
	C.QGraphicsItem_Update1(this.h, rect.cPointer())
}

func (this *QGraphicsItem) Scroll3(dx float64, dy float64, rect *QRectF) {
	C.QGraphicsItem_Scroll3(this.h, (C.double)(dx), (C.double)(dy), rect.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsItem) Delete() {
	C.QGraphicsItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsObject struct {
	h          *C.QGraphicsObject
	isSubclass bool
	*QObject
	*QGraphicsItem
}

func (this *QGraphicsObject) cPointer() *C.QGraphicsObject {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsObject constructs the type using only CGO pointers.
func newQGraphicsObject(h *C.QGraphicsObject, h_QObject *C.QObject, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsObject {
	if h == nil {
		return nil
	}
	return &QGraphicsObject{h: h,
		QObject:       newQObject(h_QObject),
		QGraphicsItem: newQGraphicsItem(h_QGraphicsItem)}
}

// UnsafeNewQGraphicsObject constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsObject(h unsafe.Pointer, h_QObject unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsObject {
	if h == nil {
		return nil
	}

	return &QGraphicsObject{h: (*C.QGraphicsObject)(h),
		QObject:       UnsafeNewQObject(h_QObject),
		QGraphicsItem: UnsafeNewQGraphicsItem(h_QGraphicsItem)}
}

func (this *QGraphicsObject) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsObject_MetaObject(this.h)))
}

func (this *QGraphicsObject) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsObject_Metacast(this.h, param1_Cstring))
}

func QGraphicsObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsObject_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsObject) GrabGesture(typeVal GestureType) {
	C.QGraphicsObject_GrabGesture(this.h, (C.int)(typeVal))
}

func (this *QGraphicsObject) UngrabGesture(typeVal GestureType) {
	C.QGraphicsObject_UngrabGesture(this.h, (C.int)(typeVal))
}

func (this *QGraphicsObject) ParentChanged() {
	C.QGraphicsObject_ParentChanged(this.h)
}
func (this *QGraphicsObject) OnParentChanged(slot func()) {
	C.QGraphicsObject_connect_ParentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_ParentChanged
func miqt_exec_callback_QGraphicsObject_ParentChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) OpacityChanged() {
	C.QGraphicsObject_OpacityChanged(this.h)
}
func (this *QGraphicsObject) OnOpacityChanged(slot func()) {
	C.QGraphicsObject_connect_OpacityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_OpacityChanged
func miqt_exec_callback_QGraphicsObject_OpacityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) VisibleChanged() {
	C.QGraphicsObject_VisibleChanged(this.h)
}
func (this *QGraphicsObject) OnVisibleChanged(slot func()) {
	C.QGraphicsObject_connect_VisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_VisibleChanged
func miqt_exec_callback_QGraphicsObject_VisibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) EnabledChanged() {
	C.QGraphicsObject_EnabledChanged(this.h)
}
func (this *QGraphicsObject) OnEnabledChanged(slot func()) {
	C.QGraphicsObject_connect_EnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_EnabledChanged
func miqt_exec_callback_QGraphicsObject_EnabledChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) XChanged() {
	C.QGraphicsObject_XChanged(this.h)
}
func (this *QGraphicsObject) OnXChanged(slot func()) {
	C.QGraphicsObject_connect_XChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_XChanged
func miqt_exec_callback_QGraphicsObject_XChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) YChanged() {
	C.QGraphicsObject_YChanged(this.h)
}
func (this *QGraphicsObject) OnYChanged(slot func()) {
	C.QGraphicsObject_connect_YChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_YChanged
func miqt_exec_callback_QGraphicsObject_YChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ZChanged() {
	C.QGraphicsObject_ZChanged(this.h)
}
func (this *QGraphicsObject) OnZChanged(slot func()) {
	C.QGraphicsObject_connect_ZChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_ZChanged
func miqt_exec_callback_QGraphicsObject_ZChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) RotationChanged() {
	C.QGraphicsObject_RotationChanged(this.h)
}
func (this *QGraphicsObject) OnRotationChanged(slot func()) {
	C.QGraphicsObject_connect_RotationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_RotationChanged
func miqt_exec_callback_QGraphicsObject_RotationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ScaleChanged() {
	C.QGraphicsObject_ScaleChanged(this.h)
}
func (this *QGraphicsObject) OnScaleChanged(slot func()) {
	C.QGraphicsObject_connect_ScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_ScaleChanged
func miqt_exec_callback_QGraphicsObject_ScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ChildrenChanged() {
	C.QGraphicsObject_ChildrenChanged(this.h)
}
func (this *QGraphicsObject) OnChildrenChanged(slot func()) {
	C.QGraphicsObject_connect_ChildrenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_ChildrenChanged
func miqt_exec_callback_QGraphicsObject_ChildrenChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) WidthChanged() {
	C.QGraphicsObject_WidthChanged(this.h)
}
func (this *QGraphicsObject) OnWidthChanged(slot func()) {
	C.QGraphicsObject_connect_WidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_WidthChanged
func miqt_exec_callback_QGraphicsObject_WidthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) HeightChanged() {
	C.QGraphicsObject_HeightChanged(this.h)
}
func (this *QGraphicsObject) OnHeightChanged(slot func()) {
	C.QGraphicsObject_connect_HeightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_HeightChanged
func miqt_exec_callback_QGraphicsObject_HeightChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QGraphicsObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsObject_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsObject_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsObject) GrabGesture2(typeVal GestureType, flags GestureFlag) {
	C.QGraphicsObject_GrabGesture2(this.h, (C.int)(typeVal), (C.int)(flags))
}

// Delete this object from C++ memory.
func (this *QGraphicsObject) Delete() {
	C.QGraphicsObject_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAbstractGraphicsShapeItem struct {
	h          *C.QAbstractGraphicsShapeItem
	isSubclass bool
	*QGraphicsItem
}

func (this *QAbstractGraphicsShapeItem) cPointer() *C.QAbstractGraphicsShapeItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractGraphicsShapeItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractGraphicsShapeItem constructs the type using only CGO pointers.
func newQAbstractGraphicsShapeItem(h *C.QAbstractGraphicsShapeItem, h_QGraphicsItem *C.QGraphicsItem) *QAbstractGraphicsShapeItem {
	if h == nil {
		return nil
	}
	return &QAbstractGraphicsShapeItem{h: h,
		QGraphicsItem: newQGraphicsItem(h_QGraphicsItem)}
}

// UnsafeNewQAbstractGraphicsShapeItem constructs the type using only unsafe pointers.
func UnsafeNewQAbstractGraphicsShapeItem(h unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QAbstractGraphicsShapeItem {
	if h == nil {
		return nil
	}

	return &QAbstractGraphicsShapeItem{h: (*C.QAbstractGraphicsShapeItem)(h),
		QGraphicsItem: UnsafeNewQGraphicsItem(h_QGraphicsItem)}
}

func (this *QAbstractGraphicsShapeItem) Pen() *QPen {
	_ret := C.QAbstractGraphicsShapeItem_Pen(this.h)
	_goptr := newQPen(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractGraphicsShapeItem) SetPen(pen *QPen) {
	C.QAbstractGraphicsShapeItem_SetPen(this.h, pen.cPointer())
}

func (this *QAbstractGraphicsShapeItem) Brush() *QBrush {
	_ret := C.QAbstractGraphicsShapeItem_Brush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractGraphicsShapeItem) SetBrush(brush *QBrush) {
	C.QAbstractGraphicsShapeItem_SetBrush(this.h, brush.cPointer())
}

func (this *QAbstractGraphicsShapeItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QAbstractGraphicsShapeItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QAbstractGraphicsShapeItem) OpaqueArea() *QPainterPath {
	_ret := C.QAbstractGraphicsShapeItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QAbstractGraphicsShapeItem) Delete() {
	C.QAbstractGraphicsShapeItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractGraphicsShapeItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractGraphicsShapeItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsPathItem struct {
	h          *C.QGraphicsPathItem
	isSubclass bool
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsPathItem) cPointer() *C.QGraphicsPathItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsPathItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsPathItem constructs the type using only CGO pointers.
func newQGraphicsPathItem(h *C.QGraphicsPathItem, h_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsPathItem {
	if h == nil {
		return nil
	}
	return &QGraphicsPathItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// UnsafeNewQGraphicsPathItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsPathItem(h unsafe.Pointer, h_QAbstractGraphicsShapeItem unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsPathItem {
	if h == nil {
		return nil
	}

	return &QGraphicsPathItem{h: (*C.QGraphicsPathItem)(h),
		QAbstractGraphicsShapeItem: UnsafeNewQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// NewQGraphicsPathItem constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem() *QGraphicsPathItem {
	var outptr_QGraphicsPathItem *C.QGraphicsPathItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPathItem_new(&outptr_QGraphicsPathItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPathItem(outptr_QGraphicsPathItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsPathItem2 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem2(path *QPainterPath) *QGraphicsPathItem {
	var outptr_QGraphicsPathItem *C.QGraphicsPathItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPathItem_new2(path.cPointer(), &outptr_QGraphicsPathItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPathItem(outptr_QGraphicsPathItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsPathItem3 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem3(parent *QGraphicsItem) *QGraphicsPathItem {
	var outptr_QGraphicsPathItem *C.QGraphicsPathItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPathItem_new3(parent.cPointer(), &outptr_QGraphicsPathItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPathItem(outptr_QGraphicsPathItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsPathItem4 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem4(path *QPainterPath, parent *QGraphicsItem) *QGraphicsPathItem {
	var outptr_QGraphicsPathItem *C.QGraphicsPathItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPathItem_new4(path.cPointer(), parent.cPointer(), &outptr_QGraphicsPathItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPathItem(outptr_QGraphicsPathItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsPathItem) Path() *QPainterPath {
	_ret := C.QGraphicsPathItem_Path(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) SetPath(path *QPainterPath) {
	C.QGraphicsPathItem_SetPath(this.h, path.cPointer())
}

func (this *QGraphicsPathItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsPathItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) Shape() *QPainterPath {
	_ret := C.QGraphicsPathItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsPathItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsPathItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPathItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPathItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsPathItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsPathItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsPathItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) Type() int {
	return (int)(C.QGraphicsPathItem_Type(this.h))
}

func (this *QGraphicsPathItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsPathItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsPathItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_BoundingRect
func miqt_exec_callback_QGraphicsPathItem_BoundingRect(self *C.QGraphicsPathItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsPathItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsPathItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_Shape
func miqt_exec_callback_QGraphicsPathItem_Shape(self *C.QGraphicsPathItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsPathItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsPathItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_Contains
func miqt_exec_callback_QGraphicsPathItem_Contains(self *C.QGraphicsPathItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsPathItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsPathItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsPathItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_Paint
func miqt_exec_callback_QGraphicsPathItem_Paint(self *C.QGraphicsPathItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsPathItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsPathItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsPathItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_IsObscuredBy
func miqt_exec_callback_QGraphicsPathItem_IsObscuredBy(self *C.QGraphicsPathItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsPathItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsPathItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_OpaqueArea
func miqt_exec_callback_QGraphicsPathItem_OpaqueArea(self *C.QGraphicsPathItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsPathItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsPathItem) OnType(slot func(super func() int) int) {
	C.QGraphicsPathItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_Type
func miqt_exec_callback_QGraphicsPathItem_Type(self *C.QGraphicsPathItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsPathItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsPathItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_SupportsExtension
func miqt_exec_callback_QGraphicsPathItem_SupportsExtension(self *C.QGraphicsPathItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsPathItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsPathItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsPathItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_SetExtension
func miqt_exec_callback_QGraphicsPathItem_SetExtension(self *C.QGraphicsPathItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsPathItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsPathItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsPathItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPathItem_Extension
func miqt_exec_callback_QGraphicsPathItem_Extension(self *C.QGraphicsPathItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsPathItem) Delete() {
	C.QGraphicsPathItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsPathItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsPathItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsRectItem struct {
	h          *C.QGraphicsRectItem
	isSubclass bool
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsRectItem) cPointer() *C.QGraphicsRectItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsRectItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsRectItem constructs the type using only CGO pointers.
func newQGraphicsRectItem(h *C.QGraphicsRectItem, h_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsRectItem {
	if h == nil {
		return nil
	}
	return &QGraphicsRectItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// UnsafeNewQGraphicsRectItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsRectItem(h unsafe.Pointer, h_QAbstractGraphicsShapeItem unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsRectItem {
	if h == nil {
		return nil
	}

	return &QGraphicsRectItem{h: (*C.QGraphicsRectItem)(h),
		QAbstractGraphicsShapeItem: UnsafeNewQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// NewQGraphicsRectItem constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem() *QGraphicsRectItem {
	var outptr_QGraphicsRectItem *C.QGraphicsRectItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsRectItem_new(&outptr_QGraphicsRectItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsRectItem(outptr_QGraphicsRectItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsRectItem2 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem2(rect *QRectF) *QGraphicsRectItem {
	var outptr_QGraphicsRectItem *C.QGraphicsRectItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsRectItem_new2(rect.cPointer(), &outptr_QGraphicsRectItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsRectItem(outptr_QGraphicsRectItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsRectItem3 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem3(x float64, y float64, w float64, h float64) *QGraphicsRectItem {
	var outptr_QGraphicsRectItem *C.QGraphicsRectItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsRectItem_new3((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), &outptr_QGraphicsRectItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsRectItem(outptr_QGraphicsRectItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsRectItem4 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem4(parent *QGraphicsItem) *QGraphicsRectItem {
	var outptr_QGraphicsRectItem *C.QGraphicsRectItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsRectItem_new4(parent.cPointer(), &outptr_QGraphicsRectItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsRectItem(outptr_QGraphicsRectItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsRectItem5 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem5(rect *QRectF, parent *QGraphicsItem) *QGraphicsRectItem {
	var outptr_QGraphicsRectItem *C.QGraphicsRectItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsRectItem_new5(rect.cPointer(), parent.cPointer(), &outptr_QGraphicsRectItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsRectItem(outptr_QGraphicsRectItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsRectItem6 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem6(x float64, y float64, w float64, h float64, parent *QGraphicsItem) *QGraphicsRectItem {
	var outptr_QGraphicsRectItem *C.QGraphicsRectItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsRectItem_new6((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), parent.cPointer(), &outptr_QGraphicsRectItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsRectItem(outptr_QGraphicsRectItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsRectItem) Rect() *QRectF {
	_ret := C.QGraphicsRectItem_Rect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) SetRect(rect *QRectF) {
	C.QGraphicsRectItem_SetRect(this.h, rect.cPointer())
}

func (this *QGraphicsRectItem) SetRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsRectItem_SetRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsRectItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsRectItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) Shape() *QPainterPath {
	_ret := C.QGraphicsRectItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsRectItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsRectItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsRectItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsRectItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsRectItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsRectItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsRectItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) Type() int {
	return (int)(C.QGraphicsRectItem_Type(this.h))
}

func (this *QGraphicsRectItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsRectItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsRectItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_BoundingRect
func miqt_exec_callback_QGraphicsRectItem_BoundingRect(self *C.QGraphicsRectItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsRectItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsRectItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_Shape
func miqt_exec_callback_QGraphicsRectItem_Shape(self *C.QGraphicsRectItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsRectItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsRectItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_Contains
func miqt_exec_callback_QGraphicsRectItem_Contains(self *C.QGraphicsRectItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsRectItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsRectItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsRectItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_Paint
func miqt_exec_callback_QGraphicsRectItem_Paint(self *C.QGraphicsRectItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsRectItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsRectItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsRectItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_IsObscuredBy
func miqt_exec_callback_QGraphicsRectItem_IsObscuredBy(self *C.QGraphicsRectItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsRectItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsRectItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_OpaqueArea
func miqt_exec_callback_QGraphicsRectItem_OpaqueArea(self *C.QGraphicsRectItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsRectItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsRectItem) OnType(slot func(super func() int) int) {
	C.QGraphicsRectItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_Type
func miqt_exec_callback_QGraphicsRectItem_Type(self *C.QGraphicsRectItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsRectItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsRectItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_SupportsExtension
func miqt_exec_callback_QGraphicsRectItem_SupportsExtension(self *C.QGraphicsRectItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsRectItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsRectItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsRectItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_SetExtension
func miqt_exec_callback_QGraphicsRectItem_SetExtension(self *C.QGraphicsRectItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsRectItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsRectItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsRectItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRectItem_Extension
func miqt_exec_callback_QGraphicsRectItem_Extension(self *C.QGraphicsRectItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsRectItem) Delete() {
	C.QGraphicsRectItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsRectItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsRectItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsEllipseItem struct {
	h          *C.QGraphicsEllipseItem
	isSubclass bool
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsEllipseItem) cPointer() *C.QGraphicsEllipseItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsEllipseItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsEllipseItem constructs the type using only CGO pointers.
func newQGraphicsEllipseItem(h *C.QGraphicsEllipseItem, h_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsEllipseItem {
	if h == nil {
		return nil
	}
	return &QGraphicsEllipseItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// UnsafeNewQGraphicsEllipseItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsEllipseItem(h unsafe.Pointer, h_QAbstractGraphicsShapeItem unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsEllipseItem {
	if h == nil {
		return nil
	}

	return &QGraphicsEllipseItem{h: (*C.QGraphicsEllipseItem)(h),
		QAbstractGraphicsShapeItem: UnsafeNewQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// NewQGraphicsEllipseItem constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem() *QGraphicsEllipseItem {
	var outptr_QGraphicsEllipseItem *C.QGraphicsEllipseItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsEllipseItem_new(&outptr_QGraphicsEllipseItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsEllipseItem(outptr_QGraphicsEllipseItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsEllipseItem2 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem2(rect *QRectF) *QGraphicsEllipseItem {
	var outptr_QGraphicsEllipseItem *C.QGraphicsEllipseItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsEllipseItem_new2(rect.cPointer(), &outptr_QGraphicsEllipseItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsEllipseItem(outptr_QGraphicsEllipseItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsEllipseItem3 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem3(x float64, y float64, w float64, h float64) *QGraphicsEllipseItem {
	var outptr_QGraphicsEllipseItem *C.QGraphicsEllipseItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsEllipseItem_new3((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), &outptr_QGraphicsEllipseItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsEllipseItem(outptr_QGraphicsEllipseItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsEllipseItem4 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem4(parent *QGraphicsItem) *QGraphicsEllipseItem {
	var outptr_QGraphicsEllipseItem *C.QGraphicsEllipseItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsEllipseItem_new4(parent.cPointer(), &outptr_QGraphicsEllipseItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsEllipseItem(outptr_QGraphicsEllipseItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsEllipseItem5 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem5(rect *QRectF, parent *QGraphicsItem) *QGraphicsEllipseItem {
	var outptr_QGraphicsEllipseItem *C.QGraphicsEllipseItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsEllipseItem_new5(rect.cPointer(), parent.cPointer(), &outptr_QGraphicsEllipseItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsEllipseItem(outptr_QGraphicsEllipseItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsEllipseItem6 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem6(x float64, y float64, w float64, h float64, parent *QGraphicsItem) *QGraphicsEllipseItem {
	var outptr_QGraphicsEllipseItem *C.QGraphicsEllipseItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsEllipseItem_new6((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), parent.cPointer(), &outptr_QGraphicsEllipseItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsEllipseItem(outptr_QGraphicsEllipseItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsEllipseItem) Rect() *QRectF {
	_ret := C.QGraphicsEllipseItem_Rect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) SetRect(rect *QRectF) {
	C.QGraphicsEllipseItem_SetRect(this.h, rect.cPointer())
}

func (this *QGraphicsEllipseItem) SetRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsEllipseItem_SetRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsEllipseItem) StartAngle() int {
	return (int)(C.QGraphicsEllipseItem_StartAngle(this.h))
}

func (this *QGraphicsEllipseItem) SetStartAngle(angle int) {
	C.QGraphicsEllipseItem_SetStartAngle(this.h, (C.int)(angle))
}

func (this *QGraphicsEllipseItem) SpanAngle() int {
	return (int)(C.QGraphicsEllipseItem_SpanAngle(this.h))
}

func (this *QGraphicsEllipseItem) SetSpanAngle(angle int) {
	C.QGraphicsEllipseItem_SetSpanAngle(this.h, (C.int)(angle))
}

func (this *QGraphicsEllipseItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsEllipseItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) Shape() *QPainterPath {
	_ret := C.QGraphicsEllipseItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsEllipseItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsEllipseItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsEllipseItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsEllipseItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsEllipseItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsEllipseItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsEllipseItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) Type() int {
	return (int)(C.QGraphicsEllipseItem_Type(this.h))
}

func (this *QGraphicsEllipseItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsEllipseItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsEllipseItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_BoundingRect
func miqt_exec_callback_QGraphicsEllipseItem_BoundingRect(self *C.QGraphicsEllipseItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsEllipseItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsEllipseItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_Shape
func miqt_exec_callback_QGraphicsEllipseItem_Shape(self *C.QGraphicsEllipseItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsEllipseItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsEllipseItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_Contains
func miqt_exec_callback_QGraphicsEllipseItem_Contains(self *C.QGraphicsEllipseItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsEllipseItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsEllipseItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsEllipseItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_Paint
func miqt_exec_callback_QGraphicsEllipseItem_Paint(self *C.QGraphicsEllipseItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsEllipseItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsEllipseItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsEllipseItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_IsObscuredBy
func miqt_exec_callback_QGraphicsEllipseItem_IsObscuredBy(self *C.QGraphicsEllipseItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsEllipseItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsEllipseItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_OpaqueArea
func miqt_exec_callback_QGraphicsEllipseItem_OpaqueArea(self *C.QGraphicsEllipseItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsEllipseItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsEllipseItem) OnType(slot func(super func() int) int) {
	C.QGraphicsEllipseItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_Type
func miqt_exec_callback_QGraphicsEllipseItem_Type(self *C.QGraphicsEllipseItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsEllipseItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsEllipseItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_SupportsExtension
func miqt_exec_callback_QGraphicsEllipseItem_SupportsExtension(self *C.QGraphicsEllipseItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsEllipseItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsEllipseItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsEllipseItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_SetExtension
func miqt_exec_callback_QGraphicsEllipseItem_SetExtension(self *C.QGraphicsEllipseItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsEllipseItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsEllipseItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsEllipseItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEllipseItem_Extension
func miqt_exec_callback_QGraphicsEllipseItem_Extension(self *C.QGraphicsEllipseItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsEllipseItem) Delete() {
	C.QGraphicsEllipseItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsEllipseItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsEllipseItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsPolygonItem struct {
	h          *C.QGraphicsPolygonItem
	isSubclass bool
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsPolygonItem) cPointer() *C.QGraphicsPolygonItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsPolygonItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsPolygonItem constructs the type using only CGO pointers.
func newQGraphicsPolygonItem(h *C.QGraphicsPolygonItem, h_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsPolygonItem {
	if h == nil {
		return nil
	}
	return &QGraphicsPolygonItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// UnsafeNewQGraphicsPolygonItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsPolygonItem(h unsafe.Pointer, h_QAbstractGraphicsShapeItem unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsPolygonItem {
	if h == nil {
		return nil
	}

	return &QGraphicsPolygonItem{h: (*C.QGraphicsPolygonItem)(h),
		QAbstractGraphicsShapeItem: UnsafeNewQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// NewQGraphicsPolygonItem constructs a new QGraphicsPolygonItem object.
func NewQGraphicsPolygonItem() *QGraphicsPolygonItem {
	var outptr_QGraphicsPolygonItem *C.QGraphicsPolygonItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPolygonItem_new(&outptr_QGraphicsPolygonItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPolygonItem(outptr_QGraphicsPolygonItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsPolygonItem2 constructs a new QGraphicsPolygonItem object.
func NewQGraphicsPolygonItem2(parent *QGraphicsItem) *QGraphicsPolygonItem {
	var outptr_QGraphicsPolygonItem *C.QGraphicsPolygonItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPolygonItem_new2(parent.cPointer(), &outptr_QGraphicsPolygonItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPolygonItem(outptr_QGraphicsPolygonItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsPolygonItem) FillRule() FillRule {
	return (FillRule)(C.QGraphicsPolygonItem_FillRule(this.h))
}

func (this *QGraphicsPolygonItem) SetFillRule(rule FillRule) {
	C.QGraphicsPolygonItem_SetFillRule(this.h, (C.int)(rule))
}

func (this *QGraphicsPolygonItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsPolygonItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPolygonItem) Shape() *QPainterPath {
	_ret := C.QGraphicsPolygonItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPolygonItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsPolygonItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsPolygonItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPolygonItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPolygonItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsPolygonItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsPolygonItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsPolygonItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPolygonItem) Type() int {
	return (int)(C.QGraphicsPolygonItem_Type(this.h))
}

func (this *QGraphicsPolygonItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsPolygonItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsPolygonItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_BoundingRect
func miqt_exec_callback_QGraphicsPolygonItem_BoundingRect(self *C.QGraphicsPolygonItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsPolygonItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsPolygonItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_Shape
func miqt_exec_callback_QGraphicsPolygonItem_Shape(self *C.QGraphicsPolygonItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsPolygonItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsPolygonItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_Contains
func miqt_exec_callback_QGraphicsPolygonItem_Contains(self *C.QGraphicsPolygonItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsPolygonItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsPolygonItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsPolygonItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_Paint
func miqt_exec_callback_QGraphicsPolygonItem_Paint(self *C.QGraphicsPolygonItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsPolygonItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsPolygonItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsPolygonItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_IsObscuredBy
func miqt_exec_callback_QGraphicsPolygonItem_IsObscuredBy(self *C.QGraphicsPolygonItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsPolygonItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsPolygonItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_OpaqueArea
func miqt_exec_callback_QGraphicsPolygonItem_OpaqueArea(self *C.QGraphicsPolygonItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsPolygonItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsPolygonItem) OnType(slot func(super func() int) int) {
	C.QGraphicsPolygonItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_Type
func miqt_exec_callback_QGraphicsPolygonItem_Type(self *C.QGraphicsPolygonItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsPolygonItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsPolygonItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_SupportsExtension
func miqt_exec_callback_QGraphicsPolygonItem_SupportsExtension(self *C.QGraphicsPolygonItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsPolygonItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsPolygonItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsPolygonItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_SetExtension
func miqt_exec_callback_QGraphicsPolygonItem_SetExtension(self *C.QGraphicsPolygonItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsPolygonItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsPolygonItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsPolygonItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPolygonItem_Extension
func miqt_exec_callback_QGraphicsPolygonItem_Extension(self *C.QGraphicsPolygonItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsPolygonItem) Delete() {
	C.QGraphicsPolygonItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsPolygonItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsPolygonItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsLineItem struct {
	h          *C.QGraphicsLineItem
	isSubclass bool
	*QGraphicsItem
}

func (this *QGraphicsLineItem) cPointer() *C.QGraphicsLineItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsLineItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsLineItem constructs the type using only CGO pointers.
func newQGraphicsLineItem(h *C.QGraphicsLineItem, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsLineItem {
	if h == nil {
		return nil
	}
	return &QGraphicsLineItem{h: h,
		QGraphicsItem: newQGraphicsItem(h_QGraphicsItem)}
}

// UnsafeNewQGraphicsLineItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsLineItem(h unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsLineItem {
	if h == nil {
		return nil
	}

	return &QGraphicsLineItem{h: (*C.QGraphicsLineItem)(h),
		QGraphicsItem: UnsafeNewQGraphicsItem(h_QGraphicsItem)}
}

// NewQGraphicsLineItem constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem() *QGraphicsLineItem {
	var outptr_QGraphicsLineItem *C.QGraphicsLineItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsLineItem_new(&outptr_QGraphicsLineItem, &outptr_QGraphicsItem)
	ret := newQGraphicsLineItem(outptr_QGraphicsLineItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLineItem2 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem2(line *QLineF) *QGraphicsLineItem {
	var outptr_QGraphicsLineItem *C.QGraphicsLineItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsLineItem_new2(line.cPointer(), &outptr_QGraphicsLineItem, &outptr_QGraphicsItem)
	ret := newQGraphicsLineItem(outptr_QGraphicsLineItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLineItem3 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem3(x1 float64, y1 float64, x2 float64, y2 float64) *QGraphicsLineItem {
	var outptr_QGraphicsLineItem *C.QGraphicsLineItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsLineItem_new3((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), &outptr_QGraphicsLineItem, &outptr_QGraphicsItem)
	ret := newQGraphicsLineItem(outptr_QGraphicsLineItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLineItem4 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem4(parent *QGraphicsItem) *QGraphicsLineItem {
	var outptr_QGraphicsLineItem *C.QGraphicsLineItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsLineItem_new4(parent.cPointer(), &outptr_QGraphicsLineItem, &outptr_QGraphicsItem)
	ret := newQGraphicsLineItem(outptr_QGraphicsLineItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLineItem5 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem5(line *QLineF, parent *QGraphicsItem) *QGraphicsLineItem {
	var outptr_QGraphicsLineItem *C.QGraphicsLineItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsLineItem_new5(line.cPointer(), parent.cPointer(), &outptr_QGraphicsLineItem, &outptr_QGraphicsItem)
	ret := newQGraphicsLineItem(outptr_QGraphicsLineItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsLineItem6 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem6(x1 float64, y1 float64, x2 float64, y2 float64, parent *QGraphicsItem) *QGraphicsLineItem {
	var outptr_QGraphicsLineItem *C.QGraphicsLineItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsLineItem_new6((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), parent.cPointer(), &outptr_QGraphicsLineItem, &outptr_QGraphicsItem)
	ret := newQGraphicsLineItem(outptr_QGraphicsLineItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsLineItem) Pen() *QPen {
	_ret := C.QGraphicsLineItem_Pen(this.h)
	_goptr := newQPen(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) SetPen(pen *QPen) {
	C.QGraphicsLineItem_SetPen(this.h, pen.cPointer())
}

func (this *QGraphicsLineItem) Line() *QLineF {
	_ret := C.QGraphicsLineItem_Line(this.h)
	_goptr := newQLineF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) SetLine(line *QLineF) {
	C.QGraphicsLineItem_SetLine(this.h, line.cPointer())
}

func (this *QGraphicsLineItem) SetLine2(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QGraphicsLineItem_SetLine2(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QGraphicsLineItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsLineItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) Shape() *QPainterPath {
	_ret := C.QGraphicsLineItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsLineItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsLineItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsLineItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsLineItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsLineItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsLineItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsLineItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) Type() int {
	return (int)(C.QGraphicsLineItem_Type(this.h))
}

func (this *QGraphicsLineItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsLineItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsLineItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_BoundingRect
func miqt_exec_callback_QGraphicsLineItem_BoundingRect(self *C.QGraphicsLineItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsLineItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsLineItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_Shape
func miqt_exec_callback_QGraphicsLineItem_Shape(self *C.QGraphicsLineItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsLineItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsLineItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_Contains
func miqt_exec_callback_QGraphicsLineItem_Contains(self *C.QGraphicsLineItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsLineItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsLineItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsLineItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_Paint
func miqt_exec_callback_QGraphicsLineItem_Paint(self *C.QGraphicsLineItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsLineItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsLineItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsLineItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_IsObscuredBy
func miqt_exec_callback_QGraphicsLineItem_IsObscuredBy(self *C.QGraphicsLineItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsLineItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsLineItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_OpaqueArea
func miqt_exec_callback_QGraphicsLineItem_OpaqueArea(self *C.QGraphicsLineItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsLineItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsLineItem) OnType(slot func(super func() int) int) {
	C.QGraphicsLineItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_Type
func miqt_exec_callback_QGraphicsLineItem_Type(self *C.QGraphicsLineItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsLineItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsLineItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_SupportsExtension
func miqt_exec_callback_QGraphicsLineItem_SupportsExtension(self *C.QGraphicsLineItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsLineItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsLineItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsLineItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_SetExtension
func miqt_exec_callback_QGraphicsLineItem_SetExtension(self *C.QGraphicsLineItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsLineItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsLineItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsLineItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_Extension
func miqt_exec_callback_QGraphicsLineItem_Extension(self *C.QGraphicsLineItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsLineItem_virtualbase_Advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsLineItem) OnAdvance(slot func(super func(phase int), phase int)) {
	C.QGraphicsLineItem_override_virtual_Advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_Advance
func miqt_exec_callback_QGraphicsLineItem_Advance(self *C.QGraphicsLineItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_CollidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsLineItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	C.QGraphicsLineItem_override_virtual_CollidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_CollidesWithItem
func miqt_exec_callback_QGraphicsLineItem_CollidesWithItem(self *C.QGraphicsLineItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(other))
	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_CollidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsLineItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	C.QGraphicsLineItem_override_virtual_CollidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_CollidesWithPath
func miqt_exec_callback_QGraphicsLineItem_CollidesWithPath(self *C.QGraphicsLineItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainterPath(unsafe.Pointer(path))
	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_SceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsLineItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	C.QGraphicsLineItem_override_virtual_SceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_SceneEventFilter
func miqt_exec_callback_QGraphicsLineItem_SceneEventFilter(self *C.QGraphicsLineItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_SceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsLineItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QGraphicsLineItem_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_SceneEvent
func miqt_exec_callback_QGraphicsLineItem_SceneEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsLineItem_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	C.QGraphicsLineItem_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_ContextMenuEvent
func miqt_exec_callback_QGraphicsLineItem_ContextMenuEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsLineItem_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_DragEnterEvent
func miqt_exec_callback_QGraphicsLineItem_DragEnterEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsLineItem_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_DragLeaveEvent
func miqt_exec_callback_QGraphicsLineItem_DragLeaveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsLineItem_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_DragMoveEvent
func miqt_exec_callback_QGraphicsLineItem_DragMoveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsLineItem_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_DropEvent
func miqt_exec_callback_QGraphicsLineItem_DropEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsLineItem_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsLineItem_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_FocusInEvent
func miqt_exec_callback_QGraphicsLineItem_FocusInEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsLineItem_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsLineItem_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_FocusOutEvent
func miqt_exec_callback_QGraphicsLineItem_FocusOutEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsLineItem_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsLineItem_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_HoverEnterEvent
func miqt_exec_callback_QGraphicsLineItem_HoverEnterEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsLineItem_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsLineItem_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_HoverMoveEvent
func miqt_exec_callback_QGraphicsLineItem_HoverMoveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsLineItem_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsLineItem_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_HoverLeaveEvent
func miqt_exec_callback_QGraphicsLineItem_HoverLeaveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsLineItem_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsLineItem_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_KeyPressEvent
func miqt_exec_callback_QGraphicsLineItem_KeyPressEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsLineItem_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsLineItem_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_KeyReleaseEvent
func miqt_exec_callback_QGraphicsLineItem_KeyReleaseEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsLineItem_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_MousePressEvent
func miqt_exec_callback_QGraphicsLineItem_MousePressEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsLineItem_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_MouseMoveEvent
func miqt_exec_callback_QGraphicsLineItem_MouseMoveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsLineItem_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_MouseReleaseEvent
func miqt_exec_callback_QGraphicsLineItem_MouseReleaseEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsLineItem_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsLineItem_MouseDoubleClickEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsLineItem_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	C.QGraphicsLineItem_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_WheelEvent
func miqt_exec_callback_QGraphicsLineItem_WheelEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsLineItem_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	C.QGraphicsLineItem_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_InputMethodEvent
func miqt_exec_callback_QGraphicsLineItem_InputMethodEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_ret := C.QGraphicsLineItem_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	C.QGraphicsLineItem_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_InputMethodQuery
func miqt_exec_callback_QGraphicsLineItem_InputMethodQuery(self *C.QGraphicsLineItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_ret := C.QGraphicsLineItem_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	C.QGraphicsLineItem_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsLineItem_ItemChange
func miqt_exec_callback_QGraphicsLineItem_ItemChange(self *C.QGraphicsLineItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsLineItem) Delete() {
	C.QGraphicsLineItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsLineItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsLineItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsPixmapItem struct {
	h          *C.QGraphicsPixmapItem
	isSubclass bool
	*QGraphicsItem
}

func (this *QGraphicsPixmapItem) cPointer() *C.QGraphicsPixmapItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsPixmapItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsPixmapItem constructs the type using only CGO pointers.
func newQGraphicsPixmapItem(h *C.QGraphicsPixmapItem, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsPixmapItem {
	if h == nil {
		return nil
	}
	return &QGraphicsPixmapItem{h: h,
		QGraphicsItem: newQGraphicsItem(h_QGraphicsItem)}
}

// UnsafeNewQGraphicsPixmapItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsPixmapItem(h unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsPixmapItem {
	if h == nil {
		return nil
	}

	return &QGraphicsPixmapItem{h: (*C.QGraphicsPixmapItem)(h),
		QGraphicsItem: UnsafeNewQGraphicsItem(h_QGraphicsItem)}
}

// NewQGraphicsPixmapItem constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem() *QGraphicsPixmapItem {
	var outptr_QGraphicsPixmapItem *C.QGraphicsPixmapItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPixmapItem_new(&outptr_QGraphicsPixmapItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPixmapItem(outptr_QGraphicsPixmapItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsPixmapItem2 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem2(pixmap *QPixmap) *QGraphicsPixmapItem {
	var outptr_QGraphicsPixmapItem *C.QGraphicsPixmapItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPixmapItem_new2(pixmap.cPointer(), &outptr_QGraphicsPixmapItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPixmapItem(outptr_QGraphicsPixmapItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsPixmapItem3 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem3(parent *QGraphicsItem) *QGraphicsPixmapItem {
	var outptr_QGraphicsPixmapItem *C.QGraphicsPixmapItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPixmapItem_new3(parent.cPointer(), &outptr_QGraphicsPixmapItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPixmapItem(outptr_QGraphicsPixmapItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsPixmapItem4 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem4(pixmap *QPixmap, parent *QGraphicsItem) *QGraphicsPixmapItem {
	var outptr_QGraphicsPixmapItem *C.QGraphicsPixmapItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsPixmapItem_new4(pixmap.cPointer(), parent.cPointer(), &outptr_QGraphicsPixmapItem, &outptr_QGraphicsItem)
	ret := newQGraphicsPixmapItem(outptr_QGraphicsPixmapItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsPixmapItem) Pixmap() *QPixmap {
	_ret := C.QGraphicsPixmapItem_Pixmap(this.h)
	_goptr := newQPixmap(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) SetPixmap(pixmap *QPixmap) {
	C.QGraphicsPixmapItem_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QGraphicsPixmapItem) TransformationMode() TransformationMode {
	return (TransformationMode)(C.QGraphicsPixmapItem_TransformationMode(this.h))
}

func (this *QGraphicsPixmapItem) SetTransformationMode(mode TransformationMode) {
	C.QGraphicsPixmapItem_SetTransformationMode(this.h, (C.int)(mode))
}

func (this *QGraphicsPixmapItem) Offset() *QPointF {
	_ret := C.QGraphicsPixmapItem_Offset(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) SetOffset(offset *QPointF) {
	C.QGraphicsPixmapItem_SetOffset(this.h, offset.cPointer())
}

func (this *QGraphicsPixmapItem) SetOffset2(x float64, y float64) {
	C.QGraphicsPixmapItem_SetOffset2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsPixmapItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsPixmapItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) Shape() *QPainterPath {
	_ret := C.QGraphicsPixmapItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsPixmapItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsPixmapItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPixmapItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPixmapItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsPixmapItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsPixmapItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsPixmapItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) Type() int {
	return (int)(C.QGraphicsPixmapItem_Type(this.h))
}

func (this *QGraphicsPixmapItem) ShapeMode() QGraphicsPixmapItem__ShapeMode {
	return (QGraphicsPixmapItem__ShapeMode)(C.QGraphicsPixmapItem_ShapeMode(this.h))
}

func (this *QGraphicsPixmapItem) SetShapeMode(mode QGraphicsPixmapItem__ShapeMode) {
	C.QGraphicsPixmapItem_SetShapeMode(this.h, (C.int)(mode))
}

func (this *QGraphicsPixmapItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsPixmapItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsPixmapItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_BoundingRect
func miqt_exec_callback_QGraphicsPixmapItem_BoundingRect(self *C.QGraphicsPixmapItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsPixmapItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsPixmapItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_Shape
func miqt_exec_callback_QGraphicsPixmapItem_Shape(self *C.QGraphicsPixmapItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsPixmapItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsPixmapItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_Contains
func miqt_exec_callback_QGraphicsPixmapItem_Contains(self *C.QGraphicsPixmapItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsPixmapItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsPixmapItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsPixmapItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_Paint
func miqt_exec_callback_QGraphicsPixmapItem_Paint(self *C.QGraphicsPixmapItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsPixmapItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsPixmapItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsPixmapItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_IsObscuredBy
func miqt_exec_callback_QGraphicsPixmapItem_IsObscuredBy(self *C.QGraphicsPixmapItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsPixmapItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsPixmapItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_OpaqueArea
func miqt_exec_callback_QGraphicsPixmapItem_OpaqueArea(self *C.QGraphicsPixmapItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsPixmapItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsPixmapItem) OnType(slot func(super func() int) int) {
	C.QGraphicsPixmapItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_Type
func miqt_exec_callback_QGraphicsPixmapItem_Type(self *C.QGraphicsPixmapItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsPixmapItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsPixmapItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_SupportsExtension
func miqt_exec_callback_QGraphicsPixmapItem_SupportsExtension(self *C.QGraphicsPixmapItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsPixmapItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsPixmapItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsPixmapItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_SetExtension
func miqt_exec_callback_QGraphicsPixmapItem_SetExtension(self *C.QGraphicsPixmapItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsPixmapItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsPixmapItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsPixmapItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_Extension
func miqt_exec_callback_QGraphicsPixmapItem_Extension(self *C.QGraphicsPixmapItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsPixmapItem_virtualbase_Advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsPixmapItem) OnAdvance(slot func(super func(phase int), phase int)) {
	C.QGraphicsPixmapItem_override_virtual_Advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_Advance
func miqt_exec_callback_QGraphicsPixmapItem_Advance(self *C.QGraphicsPixmapItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_CollidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPixmapItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	C.QGraphicsPixmapItem_override_virtual_CollidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_CollidesWithItem
func miqt_exec_callback_QGraphicsPixmapItem_CollidesWithItem(self *C.QGraphicsPixmapItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(other))
	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_CollidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPixmapItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	C.QGraphicsPixmapItem_override_virtual_CollidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_CollidesWithPath
func miqt_exec_callback_QGraphicsPixmapItem_CollidesWithPath(self *C.QGraphicsPixmapItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainterPath(unsafe.Pointer(path))
	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_SceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsPixmapItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	C.QGraphicsPixmapItem_override_virtual_SceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_SceneEventFilter
func miqt_exec_callback_QGraphicsPixmapItem_SceneEventFilter(self *C.QGraphicsPixmapItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_SceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsPixmapItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QGraphicsPixmapItem_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_SceneEvent
func miqt_exec_callback_QGraphicsPixmapItem_SceneEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsPixmapItem_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	C.QGraphicsPixmapItem_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_ContextMenuEvent
func miqt_exec_callback_QGraphicsPixmapItem_ContextMenuEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsPixmapItem_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_DragEnterEvent
func miqt_exec_callback_QGraphicsPixmapItem_DragEnterEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsPixmapItem_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_DragLeaveEvent
func miqt_exec_callback_QGraphicsPixmapItem_DragLeaveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsPixmapItem_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_DragMoveEvent
func miqt_exec_callback_QGraphicsPixmapItem_DragMoveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsPixmapItem_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_DropEvent
func miqt_exec_callback_QGraphicsPixmapItem_DropEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsPixmapItem_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsPixmapItem_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_FocusInEvent
func miqt_exec_callback_QGraphicsPixmapItem_FocusInEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsPixmapItem_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsPixmapItem_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_FocusOutEvent
func miqt_exec_callback_QGraphicsPixmapItem_FocusOutEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPixmapItem_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsPixmapItem_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_HoverEnterEvent
func miqt_exec_callback_QGraphicsPixmapItem_HoverEnterEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPixmapItem_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsPixmapItem_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_HoverMoveEvent
func miqt_exec_callback_QGraphicsPixmapItem_HoverMoveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPixmapItem_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsPixmapItem_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_HoverLeaveEvent
func miqt_exec_callback_QGraphicsPixmapItem_HoverLeaveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsPixmapItem_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsPixmapItem_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_KeyPressEvent
func miqt_exec_callback_QGraphicsPixmapItem_KeyPressEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsPixmapItem_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsPixmapItem_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_KeyReleaseEvent
func miqt_exec_callback_QGraphicsPixmapItem_KeyReleaseEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsPixmapItem_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_MousePressEvent
func miqt_exec_callback_QGraphicsPixmapItem_MousePressEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsPixmapItem_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_MouseMoveEvent
func miqt_exec_callback_QGraphicsPixmapItem_MouseMoveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsPixmapItem_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_MouseReleaseEvent
func miqt_exec_callback_QGraphicsPixmapItem_MouseReleaseEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsPixmapItem_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsPixmapItem_MouseDoubleClickEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsPixmapItem_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	C.QGraphicsPixmapItem_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_WheelEvent
func miqt_exec_callback_QGraphicsPixmapItem_WheelEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsPixmapItem_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	C.QGraphicsPixmapItem_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_InputMethodEvent
func miqt_exec_callback_QGraphicsPixmapItem_InputMethodEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_ret := C.QGraphicsPixmapItem_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	C.QGraphicsPixmapItem_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_InputMethodQuery
func miqt_exec_callback_QGraphicsPixmapItem_InputMethodQuery(self *C.QGraphicsPixmapItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_ret := C.QGraphicsPixmapItem_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	C.QGraphicsPixmapItem_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsPixmapItem_ItemChange
func miqt_exec_callback_QGraphicsPixmapItem_ItemChange(self *C.QGraphicsPixmapItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsPixmapItem) Delete() {
	C.QGraphicsPixmapItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsPixmapItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsPixmapItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsTextItem struct {
	h          *C.QGraphicsTextItem
	isSubclass bool
	*QGraphicsObject
}

func (this *QGraphicsTextItem) cPointer() *C.QGraphicsTextItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsTextItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsTextItem constructs the type using only CGO pointers.
func newQGraphicsTextItem(h *C.QGraphicsTextItem, h_QGraphicsObject *C.QGraphicsObject, h_QObject *C.QObject, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsTextItem {
	if h == nil {
		return nil
	}
	return &QGraphicsTextItem{h: h,
		QGraphicsObject: newQGraphicsObject(h_QGraphicsObject, h_QObject, h_QGraphicsItem)}
}

// UnsafeNewQGraphicsTextItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsTextItem(h unsafe.Pointer, h_QGraphicsObject unsafe.Pointer, h_QObject unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsTextItem {
	if h == nil {
		return nil
	}

	return &QGraphicsTextItem{h: (*C.QGraphicsTextItem)(h),
		QGraphicsObject: UnsafeNewQGraphicsObject(h_QGraphicsObject, h_QObject, h_QGraphicsItem)}
}

// NewQGraphicsTextItem constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem() *QGraphicsTextItem {
	var outptr_QGraphicsTextItem *C.QGraphicsTextItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsTextItem_new(&outptr_QGraphicsTextItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsTextItem(outptr_QGraphicsTextItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsTextItem2 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem2(text string) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QGraphicsTextItem *C.QGraphicsTextItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsTextItem_new2(text_ms, &outptr_QGraphicsTextItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsTextItem(outptr_QGraphicsTextItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsTextItem3 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem3(parent *QGraphicsItem) *QGraphicsTextItem {
	var outptr_QGraphicsTextItem *C.QGraphicsTextItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsTextItem_new3(parent.cPointer(), &outptr_QGraphicsTextItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsTextItem(outptr_QGraphicsTextItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsTextItem4 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem4(text string, parent *QGraphicsItem) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QGraphicsTextItem *C.QGraphicsTextItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsTextItem_new4(text_ms, parent.cPointer(), &outptr_QGraphicsTextItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsTextItem(outptr_QGraphicsTextItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsTextItem) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsTextItem_MetaObject(this.h)))
}

func (this *QGraphicsTextItem) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsTextItem_Metacast(this.h, param1_Cstring))
}

func QGraphicsTextItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTextItem) ToHtml() string {
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_ToHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTextItem) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QGraphicsTextItem_SetHtml(this.h, html_ms)
}

func (this *QGraphicsTextItem) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_ToPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTextItem) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QGraphicsTextItem_SetPlainText(this.h, text_ms)
}

func (this *QGraphicsTextItem) Font() *QFont {
	_ret := C.QGraphicsTextItem_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) SetFont(font *QFont) {
	C.QGraphicsTextItem_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsTextItem) SetDefaultTextColor(c *QColor) {
	C.QGraphicsTextItem_SetDefaultTextColor(this.h, c.cPointer())
}

func (this *QGraphicsTextItem) DefaultTextColor() *QColor {
	_ret := C.QGraphicsTextItem_DefaultTextColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsTextItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) Shape() *QPainterPath {
	_ret := C.QGraphicsTextItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsTextItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsTextItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsTextItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsTextItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsTextItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsTextItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsTextItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) Type() int {
	return (int)(C.QGraphicsTextItem_Type(this.h))
}

func (this *QGraphicsTextItem) SetTextWidth(width float64) {
	C.QGraphicsTextItem_SetTextWidth(this.h, (C.double)(width))
}

func (this *QGraphicsTextItem) TextWidth() float64 {
	return (float64)(C.QGraphicsTextItem_TextWidth(this.h))
}

func (this *QGraphicsTextItem) AdjustSize() {
	C.QGraphicsTextItem_AdjustSize(this.h)
}

func (this *QGraphicsTextItem) SetDocument(document *QTextDocument) {
	C.QGraphicsTextItem_SetDocument(this.h, document.cPointer())
}

func (this *QGraphicsTextItem) Document() *QTextDocument {
	return UnsafeNewQTextDocument(unsafe.Pointer(C.QGraphicsTextItem_Document(this.h)), nil)
}

func (this *QGraphicsTextItem) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QGraphicsTextItem_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsTextItem) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QGraphicsTextItem_TextInteractionFlags(this.h))
}

func (this *QGraphicsTextItem) SetTabChangesFocus(b bool) {
	C.QGraphicsTextItem_SetTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QGraphicsTextItem) TabChangesFocus() bool {
	return (bool)(C.QGraphicsTextItem_TabChangesFocus(this.h))
}

func (this *QGraphicsTextItem) SetOpenExternalLinks(open bool) {
	C.QGraphicsTextItem_SetOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QGraphicsTextItem) OpenExternalLinks() bool {
	return (bool)(C.QGraphicsTextItem_OpenExternalLinks(this.h))
}

func (this *QGraphicsTextItem) SetTextCursor(cursor *QTextCursor) {
	C.QGraphicsTextItem_SetTextCursor(this.h, cursor.cPointer())
}

func (this *QGraphicsTextItem) TextCursor() *QTextCursor {
	_ret := C.QGraphicsTextItem_TextCursor(this.h)
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) LinkActivated(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QGraphicsTextItem_LinkActivated(this.h, param1_ms)
}
func (this *QGraphicsTextItem) OnLinkActivated(slot func(param1 string)) {
	C.QGraphicsTextItem_connect_LinkActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_LinkActivated
func miqt_exec_callback_QGraphicsTextItem_LinkActivated(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QGraphicsTextItem) LinkHovered(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QGraphicsTextItem_LinkHovered(this.h, param1_ms)
}
func (this *QGraphicsTextItem) OnLinkHovered(slot func(param1 string)) {
	C.QGraphicsTextItem_connect_LinkHovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_LinkHovered
func miqt_exec_callback_QGraphicsTextItem_LinkHovered(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QGraphicsTextItem_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsTextItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTextItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsTextItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsTextItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_BoundingRect
func miqt_exec_callback_QGraphicsTextItem_BoundingRect(self *C.QGraphicsTextItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsTextItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsTextItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_Shape
func miqt_exec_callback_QGraphicsTextItem_Shape(self *C.QGraphicsTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsTextItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsTextItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_Contains
func miqt_exec_callback_QGraphicsTextItem_Contains(self *C.QGraphicsTextItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsTextItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsTextItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsTextItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_Paint
func miqt_exec_callback_QGraphicsTextItem_Paint(self *C.QGraphicsTextItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsTextItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsTextItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsTextItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_IsObscuredBy
func miqt_exec_callback_QGraphicsTextItem_IsObscuredBy(self *C.QGraphicsTextItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsTextItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsTextItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_OpaqueArea
func miqt_exec_callback_QGraphicsTextItem_OpaqueArea(self *C.QGraphicsTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsTextItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsTextItem) OnType(slot func(super func() int) int) {
	C.QGraphicsTextItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_Type
func miqt_exec_callback_QGraphicsTextItem_Type(self *C.QGraphicsTextItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_SceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsTextItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QGraphicsTextItem_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_SceneEvent
func miqt_exec_callback_QGraphicsTextItem_SceneEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsTextItem_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_MousePressEvent
func miqt_exec_callback_QGraphicsTextItem_MousePressEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsTextItem_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_MouseMoveEvent
func miqt_exec_callback_QGraphicsTextItem_MouseMoveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsTextItem_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_MouseReleaseEvent
func miqt_exec_callback_QGraphicsTextItem_MouseReleaseEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsTextItem_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsTextItem_MouseDoubleClickEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsTextItem_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	C.QGraphicsTextItem_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_ContextMenuEvent
func miqt_exec_callback_QGraphicsTextItem_ContextMenuEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsTextItem_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsTextItem_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_KeyPressEvent
func miqt_exec_callback_QGraphicsTextItem_KeyPressEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsTextItem_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsTextItem_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_KeyReleaseEvent
func miqt_exec_callback_QGraphicsTextItem_KeyReleaseEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsTextItem_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsTextItem_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_FocusInEvent
func miqt_exec_callback_QGraphicsTextItem_FocusInEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsTextItem_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsTextItem_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_FocusOutEvent
func miqt_exec_callback_QGraphicsTextItem_FocusOutEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsTextItem_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_DragEnterEvent
func miqt_exec_callback_QGraphicsTextItem_DragEnterEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsTextItem_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_DragLeaveEvent
func miqt_exec_callback_QGraphicsTextItem_DragLeaveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsTextItem_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_DragMoveEvent
func miqt_exec_callback_QGraphicsTextItem_DragMoveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsTextItem_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_DropEvent
func miqt_exec_callback_QGraphicsTextItem_DropEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsTextItem_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	C.QGraphicsTextItem_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_InputMethodEvent
func miqt_exec_callback_QGraphicsTextItem_InputMethodEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsTextItem_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsTextItem_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_HoverEnterEvent
func miqt_exec_callback_QGraphicsTextItem_HoverEnterEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsTextItem_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsTextItem_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_HoverMoveEvent
func miqt_exec_callback_QGraphicsTextItem_HoverMoveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsTextItem_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsTextItem_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_HoverLeaveEvent
func miqt_exec_callback_QGraphicsTextItem_HoverLeaveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_ret := C.QGraphicsTextItem_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	C.QGraphicsTextItem_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_InputMethodQuery
func miqt_exec_callback_QGraphicsTextItem_InputMethodQuery(self *C.QGraphicsTextItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsTextItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsTextItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_SupportsExtension
func miqt_exec_callback_QGraphicsTextItem_SupportsExtension(self *C.QGraphicsTextItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsTextItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsTextItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsTextItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_SetExtension
func miqt_exec_callback_QGraphicsTextItem_SetExtension(self *C.QGraphicsTextItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsTextItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsTextItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsTextItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_Extension
func miqt_exec_callback_QGraphicsTextItem_Extension(self *C.QGraphicsTextItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Event(ev *QEvent) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_Event(unsafe.Pointer(this.h), ev.cPointer()))

}
func (this *QGraphicsTextItem) OnEvent(slot func(super func(ev *QEvent) bool, ev *QEvent) bool) {
	C.QGraphicsTextItem_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_Event
func miqt_exec_callback_QGraphicsTextItem_Event(self *C.QGraphicsTextItem, cb C.intptr_t, ev *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QEvent) bool, ev *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(ev))

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QGraphicsTextItem) Delete() {
	C.QGraphicsTextItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsTextItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsTextItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSimpleTextItem struct {
	h          *C.QGraphicsSimpleTextItem
	isSubclass bool
	*QAbstractGraphicsShapeItem
}

func (this *QGraphicsSimpleTextItem) cPointer() *C.QGraphicsSimpleTextItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSimpleTextItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSimpleTextItem constructs the type using only CGO pointers.
func newQGraphicsSimpleTextItem(h *C.QGraphicsSimpleTextItem, h_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsSimpleTextItem {
	if h == nil {
		return nil
	}
	return &QGraphicsSimpleTextItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// UnsafeNewQGraphicsSimpleTextItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSimpleTextItem(h unsafe.Pointer, h_QAbstractGraphicsShapeItem unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsSimpleTextItem {
	if h == nil {
		return nil
	}

	return &QGraphicsSimpleTextItem{h: (*C.QGraphicsSimpleTextItem)(h),
		QAbstractGraphicsShapeItem: UnsafeNewQAbstractGraphicsShapeItem(h_QAbstractGraphicsShapeItem, h_QGraphicsItem)}
}

// NewQGraphicsSimpleTextItem constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem() *QGraphicsSimpleTextItem {
	var outptr_QGraphicsSimpleTextItem *C.QGraphicsSimpleTextItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSimpleTextItem_new(&outptr_QGraphicsSimpleTextItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsSimpleTextItem(outptr_QGraphicsSimpleTextItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsSimpleTextItem2 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem2(text string) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QGraphicsSimpleTextItem *C.QGraphicsSimpleTextItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSimpleTextItem_new2(text_ms, &outptr_QGraphicsSimpleTextItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsSimpleTextItem(outptr_QGraphicsSimpleTextItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsSimpleTextItem3 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem3(parent *QGraphicsItem) *QGraphicsSimpleTextItem {
	var outptr_QGraphicsSimpleTextItem *C.QGraphicsSimpleTextItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSimpleTextItem_new3(parent.cPointer(), &outptr_QGraphicsSimpleTextItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsSimpleTextItem(outptr_QGraphicsSimpleTextItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsSimpleTextItem4 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem4(text string, parent *QGraphicsItem) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QGraphicsSimpleTextItem *C.QGraphicsSimpleTextItem = nil
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSimpleTextItem_new4(text_ms, parent.cPointer(), &outptr_QGraphicsSimpleTextItem, &outptr_QAbstractGraphicsShapeItem, &outptr_QGraphicsItem)
	ret := newQGraphicsSimpleTextItem(outptr_QGraphicsSimpleTextItem, outptr_QAbstractGraphicsShapeItem, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsSimpleTextItem) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QGraphicsSimpleTextItem_SetText(this.h, text_ms)
}

func (this *QGraphicsSimpleTextItem) Text() string {
	var _ms C.struct_miqt_string = C.QGraphicsSimpleTextItem_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsSimpleTextItem) SetFont(font *QFont) {
	C.QGraphicsSimpleTextItem_SetFont(this.h, font.cPointer())
}

func (this *QGraphicsSimpleTextItem) Font() *QFont {
	_ret := C.QGraphicsSimpleTextItem_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) BoundingRect() *QRectF {
	_ret := C.QGraphicsSimpleTextItem_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) Shape() *QPainterPath {
	_ret := C.QGraphicsSimpleTextItem_Shape(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsSimpleTextItem_Contains(this.h, point.cPointer()))
}

func (this *QGraphicsSimpleTextItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsSimpleTextItem_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsSimpleTextItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsSimpleTextItem_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsSimpleTextItem) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsSimpleTextItem_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) Type() int {
	return (int)(C.QGraphicsSimpleTextItem_Type(this.h))
}

func (this *QGraphicsSimpleTextItem) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsSimpleTextItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsSimpleTextItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_BoundingRect
func miqt_exec_callback_QGraphicsSimpleTextItem_BoundingRect(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsSimpleTextItem_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsSimpleTextItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_Shape
func miqt_exec_callback_QGraphicsSimpleTextItem_Shape(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsSimpleTextItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsSimpleTextItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_Contains
func miqt_exec_callback_QGraphicsSimpleTextItem_Contains(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsSimpleTextItem_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsSimpleTextItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_Paint
func miqt_exec_callback_QGraphicsSimpleTextItem_Paint(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsSimpleTextItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsSimpleTextItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_IsObscuredBy
func miqt_exec_callback_QGraphicsSimpleTextItem_IsObscuredBy(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsSimpleTextItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsSimpleTextItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_OpaqueArea
func miqt_exec_callback_QGraphicsSimpleTextItem_OpaqueArea(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsSimpleTextItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsSimpleTextItem) OnType(slot func(super func() int) int) {
	C.QGraphicsSimpleTextItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_Type
func miqt_exec_callback_QGraphicsSimpleTextItem_Type(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsSimpleTextItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsSimpleTextItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_SupportsExtension
func miqt_exec_callback_QGraphicsSimpleTextItem_SupportsExtension(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsSimpleTextItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsSimpleTextItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_SetExtension
func miqt_exec_callback_QGraphicsSimpleTextItem_SetExtension(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsSimpleTextItem_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsSimpleTextItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_Extension
func miqt_exec_callback_QGraphicsSimpleTextItem_Extension(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsSimpleTextItem) Delete() {
	C.QGraphicsSimpleTextItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSimpleTextItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSimpleTextItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsItemGroup struct {
	h          *C.QGraphicsItemGroup
	isSubclass bool
	*QGraphicsItem
}

func (this *QGraphicsItemGroup) cPointer() *C.QGraphicsItemGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsItemGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsItemGroup constructs the type using only CGO pointers.
func newQGraphicsItemGroup(h *C.QGraphicsItemGroup, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsItemGroup {
	if h == nil {
		return nil
	}
	return &QGraphicsItemGroup{h: h,
		QGraphicsItem: newQGraphicsItem(h_QGraphicsItem)}
}

// UnsafeNewQGraphicsItemGroup constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsItemGroup(h unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsItemGroup {
	if h == nil {
		return nil
	}

	return &QGraphicsItemGroup{h: (*C.QGraphicsItemGroup)(h),
		QGraphicsItem: UnsafeNewQGraphicsItem(h_QGraphicsItem)}
}

// NewQGraphicsItemGroup constructs a new QGraphicsItemGroup object.
func NewQGraphicsItemGroup() *QGraphicsItemGroup {
	var outptr_QGraphicsItemGroup *C.QGraphicsItemGroup = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsItemGroup_new(&outptr_QGraphicsItemGroup, &outptr_QGraphicsItem)
	ret := newQGraphicsItemGroup(outptr_QGraphicsItemGroup, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsItemGroup2 constructs a new QGraphicsItemGroup object.
func NewQGraphicsItemGroup2(parent *QGraphicsItem) *QGraphicsItemGroup {
	var outptr_QGraphicsItemGroup *C.QGraphicsItemGroup = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsItemGroup_new2(parent.cPointer(), &outptr_QGraphicsItemGroup, &outptr_QGraphicsItem)
	ret := newQGraphicsItemGroup(outptr_QGraphicsItemGroup, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsItemGroup) AddToGroup(item *QGraphicsItem) {
	C.QGraphicsItemGroup_AddToGroup(this.h, item.cPointer())
}

func (this *QGraphicsItemGroup) RemoveFromGroup(item *QGraphicsItem) {
	C.QGraphicsItemGroup_RemoveFromGroup(this.h, item.cPointer())
}

func (this *QGraphicsItemGroup) BoundingRect() *QRectF {
	_ret := C.QGraphicsItemGroup_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemGroup) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsItemGroup_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsItemGroup) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItemGroup_IsObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsItemGroup) OpaqueArea() *QPainterPath {
	_ret := C.QGraphicsItemGroup_OpaqueArea(this.h)
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemGroup) Type() int {
	return (int)(C.QGraphicsItemGroup_Type(this.h))
}

func (this *QGraphicsItemGroup) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsItemGroup_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsItemGroup_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_BoundingRect
func miqt_exec_callback_QGraphicsItemGroup_BoundingRect(self *C.QGraphicsItemGroup, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsItemGroup_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsItemGroup) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsItemGroup_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_Paint
func miqt_exec_callback_QGraphicsItemGroup_Paint(self *C.QGraphicsItemGroup, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsItemGroup) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsItemGroup) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	C.QGraphicsItemGroup_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_IsObscuredBy
func miqt_exec_callback_QGraphicsItemGroup_IsObscuredBy(self *C.QGraphicsItemGroup, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_OpaqueArea() *QPainterPath {

	_ret := C.QGraphicsItemGroup_virtualbase_OpaqueArea(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsItemGroup_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_OpaqueArea
func miqt_exec_callback_QGraphicsItemGroup_OpaqueArea(self *C.QGraphicsItemGroup, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_Type() int {

	return (int)(C.QGraphicsItemGroup_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsItemGroup) OnType(slot func(super func() int) int) {
	C.QGraphicsItemGroup_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_Type
func miqt_exec_callback_QGraphicsItemGroup_Type(self *C.QGraphicsItemGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_Advance(phase int) {

	C.QGraphicsItemGroup_virtualbase_Advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsItemGroup) OnAdvance(slot func(super func(phase int), phase int)) {
	C.QGraphicsItemGroup_override_virtual_Advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_Advance
func miqt_exec_callback_QGraphicsItemGroup_Advance(self *C.QGraphicsItemGroup, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsItemGroup_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsItemGroup_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_Shape
func miqt_exec_callback_QGraphicsItemGroup_Shape(self *C.QGraphicsItemGroup, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsItemGroup) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	C.QGraphicsItemGroup_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_Contains
func miqt_exec_callback_QGraphicsItemGroup_Contains(self *C.QGraphicsItemGroup, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_CollidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsItemGroup) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	C.QGraphicsItemGroup_override_virtual_CollidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_CollidesWithItem
func miqt_exec_callback_QGraphicsItemGroup_CollidesWithItem(self *C.QGraphicsItemGroup, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(other))
	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_CollidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsItemGroup) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	C.QGraphicsItemGroup_override_virtual_CollidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_CollidesWithPath
func miqt_exec_callback_QGraphicsItemGroup_CollidesWithPath(self *C.QGraphicsItemGroup, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainterPath(unsafe.Pointer(path))
	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_SceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsItemGroup) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	C.QGraphicsItemGroup_override_virtual_SceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_SceneEventFilter
func miqt_exec_callback_QGraphicsItemGroup_SceneEventFilter(self *C.QGraphicsItemGroup, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsItem(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_SceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsItemGroup) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QGraphicsItemGroup_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_SceneEvent
func miqt_exec_callback_QGraphicsItemGroup_SceneEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsItemGroup_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	C.QGraphicsItemGroup_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_ContextMenuEvent
func miqt_exec_callback_QGraphicsItemGroup_ContextMenuEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsItemGroup_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_DragEnterEvent
func miqt_exec_callback_QGraphicsItemGroup_DragEnterEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsItemGroup_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_DragLeaveEvent
func miqt_exec_callback_QGraphicsItemGroup_DragLeaveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsItemGroup_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_DragMoveEvent
func miqt_exec_callback_QGraphicsItemGroup_DragMoveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsItemGroup_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_DropEvent
func miqt_exec_callback_QGraphicsItemGroup_DropEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsItemGroup_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsItemGroup_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_FocusInEvent
func miqt_exec_callback_QGraphicsItemGroup_FocusInEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsItemGroup_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsItemGroup_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_FocusOutEvent
func miqt_exec_callback_QGraphicsItemGroup_FocusOutEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItemGroup_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsItemGroup_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_HoverEnterEvent
func miqt_exec_callback_QGraphicsItemGroup_HoverEnterEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItemGroup_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsItemGroup_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_HoverMoveEvent
func miqt_exec_callback_QGraphicsItemGroup_HoverMoveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItemGroup_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsItemGroup_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_HoverLeaveEvent
func miqt_exec_callback_QGraphicsItemGroup_HoverLeaveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsItemGroup_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsItemGroup_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_KeyPressEvent
func miqt_exec_callback_QGraphicsItemGroup_KeyPressEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsItemGroup_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsItemGroup_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_KeyReleaseEvent
func miqt_exec_callback_QGraphicsItemGroup_KeyReleaseEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsItemGroup_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_MousePressEvent
func miqt_exec_callback_QGraphicsItemGroup_MousePressEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsItemGroup_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_MouseMoveEvent
func miqt_exec_callback_QGraphicsItemGroup_MouseMoveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsItemGroup_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_MouseReleaseEvent
func miqt_exec_callback_QGraphicsItemGroup_MouseReleaseEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsItemGroup_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsItemGroup_MouseDoubleClickEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsItemGroup_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	C.QGraphicsItemGroup_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_WheelEvent
func miqt_exec_callback_QGraphicsItemGroup_WheelEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsItemGroup_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	C.QGraphicsItemGroup_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_InputMethodEvent
func miqt_exec_callback_QGraphicsItemGroup_InputMethodEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_ret := C.QGraphicsItemGroup_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	C.QGraphicsItemGroup_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_InputMethodQuery
func miqt_exec_callback_QGraphicsItemGroup_InputMethodQuery(self *C.QGraphicsItemGroup, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_ret := C.QGraphicsItemGroup_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	C.QGraphicsItemGroup_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_ItemChange
func miqt_exec_callback_QGraphicsItemGroup_ItemChange(self *C.QGraphicsItemGroup, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsItemGroup) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	C.QGraphicsItemGroup_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_SupportsExtension
func miqt_exec_callback_QGraphicsItemGroup_SupportsExtension(self *C.QGraphicsItemGroup, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsItemGroup_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsItemGroup) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	C.QGraphicsItemGroup_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_SetExtension
func miqt_exec_callback_QGraphicsItemGroup_SetExtension(self *C.QGraphicsItemGroup, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsItemGroup) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_ret := C.QGraphicsItemGroup_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	C.QGraphicsItemGroup_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemGroup_Extension
func miqt_exec_callback_QGraphicsItemGroup_Extension(self *C.QGraphicsItemGroup, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsItemGroup) Delete() {
	C.QGraphicsItemGroup_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsItemGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsItemGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

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
	h *C.QGraphicsItem
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
	return newQGraphicsItem((*C.QGraphicsItem)(h))
}

// NewQGraphicsItem constructs a new QGraphicsItem object.
func NewQGraphicsItem() *QGraphicsItem {

	return newQGraphicsItem(C.QGraphicsItem_new())
}

// NewQGraphicsItem2 constructs a new QGraphicsItem object.
func NewQGraphicsItem2(parent *QGraphicsItem) *QGraphicsItem {

	return newQGraphicsItem(C.QGraphicsItem_new2(parent.cPointer()))
}

func (this *QGraphicsItem) Scene() *QGraphicsScene {
	return newQGraphicsScene(C.QGraphicsItem_scene(this.h))
}

func (this *QGraphicsItem) ParentItem() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItem_parentItem(this.h))
}

func (this *QGraphicsItem) TopLevelItem() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItem_topLevelItem(this.h))
}

func (this *QGraphicsItem) ParentObject() *QGraphicsObject {
	return newQGraphicsObject(C.QGraphicsItem_parentObject(this.h))
}

func (this *QGraphicsItem) ParentWidget() *QGraphicsWidget {
	return newQGraphicsWidget(C.QGraphicsItem_parentWidget(this.h))
}

func (this *QGraphicsItem) TopLevelWidget() *QGraphicsWidget {
	return newQGraphicsWidget(C.QGraphicsItem_topLevelWidget(this.h))
}

func (this *QGraphicsItem) Window() *QGraphicsWidget {
	return newQGraphicsWidget(C.QGraphicsItem_window(this.h))
}

func (this *QGraphicsItem) Panel() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItem_panel(this.h))
}

func (this *QGraphicsItem) SetParentItem(parent *QGraphicsItem) {
	C.QGraphicsItem_setParentItem(this.h, parent.cPointer())
}

func (this *QGraphicsItem) ChildItems() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsItem_childItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsItem) IsWidget() bool {
	return (bool)(C.QGraphicsItem_isWidget(this.h))
}

func (this *QGraphicsItem) IsWindow() bool {
	return (bool)(C.QGraphicsItem_isWindow(this.h))
}

func (this *QGraphicsItem) IsPanel() bool {
	return (bool)(C.QGraphicsItem_isPanel(this.h))
}

func (this *QGraphicsItem) ToGraphicsObject() *QGraphicsObject {
	return newQGraphicsObject(C.QGraphicsItem_toGraphicsObject(this.h))
}

func (this *QGraphicsItem) ToGraphicsObject2() *QGraphicsObject {
	return newQGraphicsObject(C.QGraphicsItem_toGraphicsObject2(this.h))
}

func (this *QGraphicsItem) Group() *QGraphicsItemGroup {
	return newQGraphicsItemGroup(C.QGraphicsItem_group(this.h))
}

func (this *QGraphicsItem) SetGroup(group *QGraphicsItemGroup) {
	C.QGraphicsItem_setGroup(this.h, group.cPointer())
}

func (this *QGraphicsItem) Flags() QGraphicsItem__GraphicsItemFlag {
	return (QGraphicsItem__GraphicsItemFlag)(C.QGraphicsItem_flags(this.h))
}

func (this *QGraphicsItem) SetFlag(flag QGraphicsItem__GraphicsItemFlag) {
	C.QGraphicsItem_setFlag(this.h, (C.int)(flag))
}

func (this *QGraphicsItem) SetFlags(flags QGraphicsItem__GraphicsItemFlag) {
	C.QGraphicsItem_setFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsItem) CacheMode() QGraphicsItem__CacheMode {
	return (QGraphicsItem__CacheMode)(C.QGraphicsItem_cacheMode(this.h))
}

func (this *QGraphicsItem) SetCacheMode(mode QGraphicsItem__CacheMode) {
	C.QGraphicsItem_setCacheMode(this.h, (C.int)(mode))
}

func (this *QGraphicsItem) PanelModality() QGraphicsItem__PanelModality {
	return (QGraphicsItem__PanelModality)(C.QGraphicsItem_panelModality(this.h))
}

func (this *QGraphicsItem) SetPanelModality(panelModality QGraphicsItem__PanelModality) {
	C.QGraphicsItem_setPanelModality(this.h, (C.int)(panelModality))
}

func (this *QGraphicsItem) IsBlockedByModalPanel() bool {
	return (bool)(C.QGraphicsItem_isBlockedByModalPanel(this.h))
}

func (this *QGraphicsItem) ToolTip() string {
	var _ms C.struct_miqt_string = C.QGraphicsItem_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsItem) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QGraphicsItem_setToolTip(this.h, toolTip_ms)
}

func (this *QGraphicsItem) Cursor() *QCursor {
	_goptr := newQCursor(C.QGraphicsItem_cursor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetCursor(cursor *QCursor) {
	C.QGraphicsItem_setCursor(this.h, cursor.cPointer())
}

func (this *QGraphicsItem) HasCursor() bool {
	return (bool)(C.QGraphicsItem_hasCursor(this.h))
}

func (this *QGraphicsItem) UnsetCursor() {
	C.QGraphicsItem_unsetCursor(this.h)
}

func (this *QGraphicsItem) IsVisible() bool {
	return (bool)(C.QGraphicsItem_isVisible(this.h))
}

func (this *QGraphicsItem) IsVisibleTo(parent *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItem_isVisibleTo(this.h, parent.cPointer()))
}

func (this *QGraphicsItem) SetVisible(visible bool) {
	C.QGraphicsItem_setVisible(this.h, (C.bool)(visible))
}

func (this *QGraphicsItem) Hide() {
	C.QGraphicsItem_hide(this.h)
}

func (this *QGraphicsItem) Show() {
	C.QGraphicsItem_show(this.h)
}

func (this *QGraphicsItem) IsEnabled() bool {
	return (bool)(C.QGraphicsItem_isEnabled(this.h))
}

func (this *QGraphicsItem) SetEnabled(enabled bool) {
	C.QGraphicsItem_setEnabled(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) IsSelected() bool {
	return (bool)(C.QGraphicsItem_isSelected(this.h))
}

func (this *QGraphicsItem) SetSelected(selected bool) {
	C.QGraphicsItem_setSelected(this.h, (C.bool)(selected))
}

func (this *QGraphicsItem) AcceptDrops() bool {
	return (bool)(C.QGraphicsItem_acceptDrops(this.h))
}

func (this *QGraphicsItem) SetAcceptDrops(on bool) {
	C.QGraphicsItem_setAcceptDrops(this.h, (C.bool)(on))
}

func (this *QGraphicsItem) Opacity() float64 {
	return (float64)(C.QGraphicsItem_opacity(this.h))
}

func (this *QGraphicsItem) EffectiveOpacity() float64 {
	return (float64)(C.QGraphicsItem_effectiveOpacity(this.h))
}

func (this *QGraphicsItem) SetOpacity(opacity float64) {
	C.QGraphicsItem_setOpacity(this.h, (C.double)(opacity))
}

func (this *QGraphicsItem) GraphicsEffect() *QGraphicsEffect {
	return newQGraphicsEffect(C.QGraphicsItem_graphicsEffect(this.h))
}

func (this *QGraphicsItem) SetGraphicsEffect(effect *QGraphicsEffect) {
	C.QGraphicsItem_setGraphicsEffect(this.h, effect.cPointer())
}

func (this *QGraphicsItem) AcceptedMouseButtons() MouseButton {
	return (MouseButton)(C.QGraphicsItem_acceptedMouseButtons(this.h))
}

func (this *QGraphicsItem) SetAcceptedMouseButtons(buttons MouseButton) {
	C.QGraphicsItem_setAcceptedMouseButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsItem) AcceptHoverEvents() bool {
	return (bool)(C.QGraphicsItem_acceptHoverEvents(this.h))
}

func (this *QGraphicsItem) SetAcceptHoverEvents(enabled bool) {
	C.QGraphicsItem_setAcceptHoverEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) AcceptTouchEvents() bool {
	return (bool)(C.QGraphicsItem_acceptTouchEvents(this.h))
}

func (this *QGraphicsItem) SetAcceptTouchEvents(enabled bool) {
	C.QGraphicsItem_setAcceptTouchEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) FiltersChildEvents() bool {
	return (bool)(C.QGraphicsItem_filtersChildEvents(this.h))
}

func (this *QGraphicsItem) SetFiltersChildEvents(enabled bool) {
	C.QGraphicsItem_setFiltersChildEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) HandlesChildEvents() bool {
	return (bool)(C.QGraphicsItem_handlesChildEvents(this.h))
}

func (this *QGraphicsItem) SetHandlesChildEvents(enabled bool) {
	C.QGraphicsItem_setHandlesChildEvents(this.h, (C.bool)(enabled))
}

func (this *QGraphicsItem) IsActive() bool {
	return (bool)(C.QGraphicsItem_isActive(this.h))
}

func (this *QGraphicsItem) SetActive(active bool) {
	C.QGraphicsItem_setActive(this.h, (C.bool)(active))
}

func (this *QGraphicsItem) HasFocus() bool {
	return (bool)(C.QGraphicsItem_hasFocus(this.h))
}

func (this *QGraphicsItem) SetFocus() {
	C.QGraphicsItem_setFocus(this.h)
}

func (this *QGraphicsItem) ClearFocus() {
	C.QGraphicsItem_clearFocus(this.h)
}

func (this *QGraphicsItem) FocusProxy() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItem_focusProxy(this.h))
}

func (this *QGraphicsItem) SetFocusProxy(item *QGraphicsItem) {
	C.QGraphicsItem_setFocusProxy(this.h, item.cPointer())
}

func (this *QGraphicsItem) FocusItem() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItem_focusItem(this.h))
}

func (this *QGraphicsItem) FocusScopeItem() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItem_focusScopeItem(this.h))
}

func (this *QGraphicsItem) GrabMouse() {
	C.QGraphicsItem_grabMouse(this.h)
}

func (this *QGraphicsItem) UngrabMouse() {
	C.QGraphicsItem_ungrabMouse(this.h)
}

func (this *QGraphicsItem) GrabKeyboard() {
	C.QGraphicsItem_grabKeyboard(this.h)
}

func (this *QGraphicsItem) UngrabKeyboard() {
	C.QGraphicsItem_ungrabKeyboard(this.h)
}

func (this *QGraphicsItem) Pos() *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) X() float64 {
	return (float64)(C.QGraphicsItem_x(this.h))
}

func (this *QGraphicsItem) SetX(x float64) {
	C.QGraphicsItem_setX(this.h, (C.double)(x))
}

func (this *QGraphicsItem) Y() float64 {
	return (float64)(C.QGraphicsItem_y(this.h))
}

func (this *QGraphicsItem) SetY(y float64) {
	C.QGraphicsItem_setY(this.h, (C.double)(y))
}

func (this *QGraphicsItem) ScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetPos(pos *QPointF) {
	C.QGraphicsItem_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsItem) SetPos2(x float64, y float64) {
	C.QGraphicsItem_setPos2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsItem) MoveBy(dx float64, dy float64) {
	C.QGraphicsItem_moveBy(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsItem) EnsureVisible() {
	C.QGraphicsItem_ensureVisible(this.h)
}

func (this *QGraphicsItem) EnsureVisible2(x float64, y float64, w float64, h float64) {
	C.QGraphicsItem_ensureVisible2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsItem) Transform() *QTransform {
	_goptr := newQTransform(C.QGraphicsItem_transform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SceneTransform() *QTransform {
	_goptr := newQTransform(C.QGraphicsItem_sceneTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) DeviceTransform(viewportTransform *QTransform) *QTransform {
	_goptr := newQTransform(C.QGraphicsItem_deviceTransform(this.h, viewportTransform.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) ItemTransform(other *QGraphicsItem) *QTransform {
	_goptr := newQTransform(C.QGraphicsItem_itemTransform(this.h, other.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetTransform(matrix *QTransform) {
	C.QGraphicsItem_setTransform(this.h, matrix.cPointer())
}

func (this *QGraphicsItem) ResetTransform() {
	C.QGraphicsItem_resetTransform(this.h)
}

func (this *QGraphicsItem) SetRotation(angle float64) {
	C.QGraphicsItem_setRotation(this.h, (C.double)(angle))
}

func (this *QGraphicsItem) Rotation() float64 {
	return (float64)(C.QGraphicsItem_rotation(this.h))
}

func (this *QGraphicsItem) SetScale(scale float64) {
	C.QGraphicsItem_setScale(this.h, (C.double)(scale))
}

func (this *QGraphicsItem) Scale() float64 {
	return (float64)(C.QGraphicsItem_scale(this.h))
}

func (this *QGraphicsItem) Transformations() []*QGraphicsTransform {
	var _ma C.struct_miqt_array = C.QGraphicsItem_transformations(this.h)
	_ret := make([]*QGraphicsTransform, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsTransform)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsTransform(_outCast[i])
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
	C.QGraphicsItem_setTransformations(this.h, transformations_ma)
}

func (this *QGraphicsItem) TransformOriginPoint() *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_transformOriginPoint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetTransformOriginPoint(origin *QPointF) {
	C.QGraphicsItem_setTransformOriginPoint(this.h, origin.cPointer())
}

func (this *QGraphicsItem) SetTransformOriginPoint2(ax float64, ay float64) {
	C.QGraphicsItem_setTransformOriginPoint2(this.h, (C.double)(ax), (C.double)(ay))
}

func (this *QGraphicsItem) Advance(phase int) {
	C.QGraphicsItem_advance(this.h, (C.int)(phase))
}

func (this *QGraphicsItem) ZValue() float64 {
	return (float64)(C.QGraphicsItem_zValue(this.h))
}

func (this *QGraphicsItem) SetZValue(z float64) {
	C.QGraphicsItem_setZValue(this.h, (C.double)(z))
}

func (this *QGraphicsItem) StackBefore(sibling *QGraphicsItem) {
	C.QGraphicsItem_stackBefore(this.h, sibling.cPointer())
}

func (this *QGraphicsItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) ChildrenBoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_childrenBoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SceneBoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_sceneBoundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) IsClipped() bool {
	return (bool)(C.QGraphicsItem_isClipped(this.h))
}

func (this *QGraphicsItem) ClipPath() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_clipPath(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsItem) CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {
	return (bool)(C.QGraphicsItem_collidesWithItem(this.h, other.cPointer(), (C.int)(mode)))
}

func (this *QGraphicsItem) CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {
	return (bool)(C.QGraphicsItem_collidesWithPath(this.h, path.cPointer(), (C.int)(mode)))
}

func (this *QGraphicsItem) CollidingItems() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsItem_collidingItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsItem) IsObscured() bool {
	return (bool)(C.QGraphicsItem_isObscured(this.h))
}

func (this *QGraphicsItem) IsObscured2(x float64, y float64, w float64, h float64) bool {
	return (bool)(C.QGraphicsItem_isObscured2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
}

func (this *QGraphicsItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) BoundingRegion(itemToDeviceTransform *QTransform) *QRegion {
	_goptr := newQRegion(C.QGraphicsItem_boundingRegion(this.h, itemToDeviceTransform.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) BoundingRegionGranularity() float64 {
	return (float64)(C.QGraphicsItem_boundingRegionGranularity(this.h))
}

func (this *QGraphicsItem) SetBoundingRegionGranularity(granularity float64) {
	C.QGraphicsItem_setBoundingRegionGranularity(this.h, (C.double)(granularity))
}

func (this *QGraphicsItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsItem) Update() {
	C.QGraphicsItem_update(this.h)
}

func (this *QGraphicsItem) Update2(x float64, y float64, width float64, height float64) {
	C.QGraphicsItem_update2(this.h, (C.double)(x), (C.double)(y), (C.double)(width), (C.double)(height))
}

func (this *QGraphicsItem) Scroll(dx float64, dy float64) {
	C.QGraphicsItem_scroll(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsItem) MapToItem(item *QGraphicsItem, point *QPointF) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapToItem(this.h, item.cPointer(), point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToParent(point *QPointF) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapToParent(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToScene(point *QPointF) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapToScene(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToItem(item *QGraphicsItem, rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectToItem(this.h, item.cPointer(), rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToParent(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectToParent(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToScene(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectToScene(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToItem4(item *QGraphicsItem, path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_mapToItem4(this.h, item.cPointer(), path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToParentWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_mapToParentWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToSceneWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_mapToSceneWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromItem(item *QGraphicsItem, point *QPointF) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapFromItem(this.h, item.cPointer(), point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromParent(point *QPointF) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapFromParent(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromScene(point *QPointF) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapFromScene(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromItem(item *QGraphicsItem, rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectFromItem(this.h, item.cPointer(), rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromParent(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectFromParent(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromScene(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectFromScene(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromItem4(item *QGraphicsItem, path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_mapFromItem4(this.h, item.cPointer(), path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromParentWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_mapFromParentWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromSceneWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItem_mapFromSceneWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToItem5(item *QGraphicsItem, x float64, y float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapToItem5(this.h, item.cPointer(), (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToParent2(x float64, y float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapToParent2(this.h, (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapToScene2(x float64, y float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapToScene2(this.h, (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToItem2(item *QGraphicsItem, x float64, y float64, w float64, h float64) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectToItem2(this.h, item.cPointer(), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToParent2(x float64, y float64, w float64, h float64) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectToParent2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectToScene2(x float64, y float64, w float64, h float64) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectToScene2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromItem5(item *QGraphicsItem, x float64, y float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapFromItem5(this.h, item.cPointer(), (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromParent2(x float64, y float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapFromParent2(this.h, (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapFromScene2(x float64, y float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItem_mapFromScene2(this.h, (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromItem2(item *QGraphicsItem, x float64, y float64, w float64, h float64) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectFromItem2(this.h, item.cPointer(), (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromParent2(x float64, y float64, w float64, h float64) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectFromParent2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) MapRectFromScene2(x float64, y float64, w float64, h float64) *QRectF {
	_goptr := newQRectF(C.QGraphicsItem_mapRectFromScene2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) IsAncestorOf(child *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItem_isAncestorOf(this.h, child.cPointer()))
}

func (this *QGraphicsItem) CommonAncestorItem(other *QGraphicsItem) *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItem_commonAncestorItem(this.h, other.cPointer()))
}

func (this *QGraphicsItem) IsUnderMouse() bool {
	return (bool)(C.QGraphicsItem_isUnderMouse(this.h))
}

func (this *QGraphicsItem) Data(key int) *QVariant {
	_goptr := newQVariant(C.QGraphicsItem_data(this.h, (C.int)(key)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetData(key int, value *QVariant) {
	C.QGraphicsItem_setData(this.h, (C.int)(key), value.cPointer())
}

func (this *QGraphicsItem) InputMethodHints() InputMethodHint {
	return (InputMethodHint)(C.QGraphicsItem_inputMethodHints(this.h))
}

func (this *QGraphicsItem) SetInputMethodHints(hints InputMethodHint) {
	C.QGraphicsItem_setInputMethodHints(this.h, (C.int)(hints))
}

func (this *QGraphicsItem) Type() int {
	return (int)(C.QGraphicsItem_type(this.h))
}

func (this *QGraphicsItem) InstallSceneEventFilter(filterItem *QGraphicsItem) {
	C.QGraphicsItem_installSceneEventFilter(this.h, filterItem.cPointer())
}

func (this *QGraphicsItem) RemoveSceneEventFilter(filterItem *QGraphicsItem) {
	C.QGraphicsItem_removeSceneEventFilter(this.h, filterItem.cPointer())
}

func (this *QGraphicsItem) SetFlag2(flag QGraphicsItem__GraphicsItemFlag, enabled bool) {
	C.QGraphicsItem_setFlag2(this.h, (C.int)(flag), (C.bool)(enabled))
}

func (this *QGraphicsItem) SetCacheMode2(mode QGraphicsItem__CacheMode, cacheSize *QSize) {
	C.QGraphicsItem_setCacheMode2(this.h, (C.int)(mode), cacheSize.cPointer())
}

func (this *QGraphicsItem) SetFocusWithFocusReason(focusReason FocusReason) {
	C.QGraphicsItem_setFocusWithFocusReason(this.h, (C.int)(focusReason))
}

func (this *QGraphicsItem) EnsureVisibleWithRect(rect *QRectF) {
	C.QGraphicsItem_ensureVisibleWithRect(this.h, rect.cPointer())
}

func (this *QGraphicsItem) EnsureVisible3(rect *QRectF, xmargin int) {
	C.QGraphicsItem_ensureVisible3(this.h, rect.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsItem) EnsureVisible4(rect *QRectF, xmargin int, ymargin int) {
	C.QGraphicsItem_ensureVisible4(this.h, rect.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsItem) EnsureVisible5(x float64, y float64, w float64, h float64, xmargin int) {
	C.QGraphicsItem_ensureVisible5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin))
}

func (this *QGraphicsItem) EnsureVisible6(x float64, y float64, w float64, h float64, xmargin int, ymargin int) {
	C.QGraphicsItem_ensureVisible6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsItem) ItemTransform2(other *QGraphicsItem, ok *bool) *QTransform {
	_goptr := newQTransform(C.QGraphicsItem_itemTransform2(this.h, other.cPointer(), (*C.bool)(unsafe.Pointer(ok))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetTransform2(matrix *QTransform, combine bool) {
	C.QGraphicsItem_setTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsItem) CollidingItemsWithMode(mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsItem_collidingItemsWithMode(this.h, (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsItem) IsObscuredWithRect(rect *QRectF) bool {
	return (bool)(C.QGraphicsItem_isObscuredWithRect(this.h, rect.cPointer()))
}

func (this *QGraphicsItem) UpdateWithRect(rect *QRectF) {
	C.QGraphicsItem_updateWithRect(this.h, rect.cPointer())
}

func (this *QGraphicsItem) Scroll2(dx float64, dy float64, rect *QRectF) {
	C.QGraphicsItem_scroll2(this.h, (C.double)(dx), (C.double)(dy), rect.cPointer())
}

// UpdateMicroFocus can only be called from a QGraphicsItem that was directly constructed.
func (this *QGraphicsItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsItem that was directly constructed.
func (this *QGraphicsItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsItem that was directly constructed.
func (this *QGraphicsItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsItem that was directly constructed.
func (this *QGraphicsItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_advance
func miqt_exec_callback_QGraphicsItem_advance(self *C.QGraphicsItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_Advance, slotval1)

}
func (this *QGraphicsItem) OnBoundingRect(slot func() *QRectF) {
	ok := C.QGraphicsItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_boundingRect
func miqt_exec_callback_QGraphicsItem_boundingRect(self *C.QGraphicsItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

func (this *QGraphicsItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_shape
func miqt_exec_callback_QGraphicsItem_shape(self *C.QGraphicsItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_contains
func miqt_exec_callback_QGraphicsItem_contains(self *C.QGraphicsItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_collidesWithItem
func miqt_exec_callback_QGraphicsItem_collidesWithItem(self *C.QGraphicsItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_collidesWithPath
func miqt_exec_callback_QGraphicsItem_collidesWithPath(self *C.QGraphicsItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_isObscuredBy
func miqt_exec_callback_QGraphicsItem_isObscuredBy(self *C.QGraphicsItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_opaqueArea
func miqt_exec_callback_QGraphicsItem_opaqueArea(self *C.QGraphicsItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}
func (this *QGraphicsItem) OnPaint(slot func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_paint
func miqt_exec_callback_QGraphicsItem_paint(self *C.QGraphicsItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc(slotval1, slotval2, slotval3)

}

func (this *QGraphicsItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_type
func miqt_exec_callback_QGraphicsItem_type(self *C.QGraphicsItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_sceneEventFilter
func miqt_exec_callback_QGraphicsItem_sceneEventFilter(self *C.QGraphicsItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_sceneEvent
func miqt_exec_callback_QGraphicsItem_sceneEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_contextMenuEvent
func miqt_exec_callback_QGraphicsItem_contextMenuEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_dragEnterEvent
func miqt_exec_callback_QGraphicsItem_dragEnterEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsItem_dragLeaveEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_dragMoveEvent
func miqt_exec_callback_QGraphicsItem_dragMoveEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_dropEvent
func miqt_exec_callback_QGraphicsItem_dropEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_focusInEvent
func miqt_exec_callback_QGraphicsItem_focusInEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_focusOutEvent
func miqt_exec_callback_QGraphicsItem_focusOutEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsItem_hoverEnterEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsItem_hoverMoveEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsItem_hoverLeaveEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_keyPressEvent
func miqt_exec_callback_QGraphicsItem_keyPressEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsItem_keyReleaseEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_mousePressEvent
func miqt_exec_callback_QGraphicsItem_mousePressEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsItem_mouseMoveEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsItem_mouseReleaseEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsItem_mouseDoubleClickEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_wheelEvent
func miqt_exec_callback_QGraphicsItem_wheelEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_inputMethodEvent
func miqt_exec_callback_QGraphicsItem_inputMethodEvent(self *C.QGraphicsItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_inputMethodQuery
func miqt_exec_callback_QGraphicsItem_inputMethodQuery(self *C.QGraphicsItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_itemChange
func miqt_exec_callback_QGraphicsItem_itemChange(self *C.QGraphicsItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_supportsExtension
func miqt_exec_callback_QGraphicsItem_supportsExtension(self *C.QGraphicsItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_setExtension
func miqt_exec_callback_QGraphicsItem_setExtension(self *C.QGraphicsItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItem_extension
func miqt_exec_callback_QGraphicsItem_extension(self *C.QGraphicsItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsItem) Delete() {
	C.QGraphicsItem_delete(this.h)
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

func (this *QGraphicsObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsObject constructs the type using only CGO pointers.
func newQGraphicsObject(h *C.QGraphicsObject) *QGraphicsObject {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	C.QGraphicsObject_virtbase(h, &outptr_QObject, &outptr_QGraphicsItem)

	return &QGraphicsObject{h: h,
		QObject:       newQObject(outptr_QObject),
		QGraphicsItem: newQGraphicsItem(outptr_QGraphicsItem)}
}

// UnsafeNewQGraphicsObject constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsObject(h unsafe.Pointer) *QGraphicsObject {
	return newQGraphicsObject((*C.QGraphicsObject)(h))
}

// NewQGraphicsObject constructs a new QGraphicsObject object.
func NewQGraphicsObject() *QGraphicsObject {

	return newQGraphicsObject(C.QGraphicsObject_new())
}

// NewQGraphicsObject2 constructs a new QGraphicsObject object.
func NewQGraphicsObject2(parent *QGraphicsItem) *QGraphicsObject {

	return newQGraphicsObject(C.QGraphicsObject_new2(parent.cPointer()))
}

func (this *QGraphicsObject) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsObject_metaObject(this.h))
}

func (this *QGraphicsObject) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsObject_metacast(this.h, param1_Cstring))
}

func QGraphicsObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsObject_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsObject) GrabGesture(typeVal GestureType) {
	C.QGraphicsObject_grabGesture(this.h, (C.int)(typeVal))
}

func (this *QGraphicsObject) UngrabGesture(typeVal GestureType) {
	C.QGraphicsObject_ungrabGesture(this.h, (C.int)(typeVal))
}

func (this *QGraphicsObject) ParentChanged() {
	C.QGraphicsObject_parentChanged(this.h)
}
func (this *QGraphicsObject) OnParentChanged(slot func()) {
	C.QGraphicsObject_connect_parentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_parentChanged
func miqt_exec_callback_QGraphicsObject_parentChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) OpacityChanged() {
	C.QGraphicsObject_opacityChanged(this.h)
}
func (this *QGraphicsObject) OnOpacityChanged(slot func()) {
	C.QGraphicsObject_connect_opacityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_opacityChanged
func miqt_exec_callback_QGraphicsObject_opacityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) VisibleChanged() {
	C.QGraphicsObject_visibleChanged(this.h)
}
func (this *QGraphicsObject) OnVisibleChanged(slot func()) {
	C.QGraphicsObject_connect_visibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_visibleChanged
func miqt_exec_callback_QGraphicsObject_visibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) EnabledChanged() {
	C.QGraphicsObject_enabledChanged(this.h)
}
func (this *QGraphicsObject) OnEnabledChanged(slot func()) {
	C.QGraphicsObject_connect_enabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_enabledChanged
func miqt_exec_callback_QGraphicsObject_enabledChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) XChanged() {
	C.QGraphicsObject_xChanged(this.h)
}
func (this *QGraphicsObject) OnXChanged(slot func()) {
	C.QGraphicsObject_connect_xChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_xChanged
func miqt_exec_callback_QGraphicsObject_xChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) YChanged() {
	C.QGraphicsObject_yChanged(this.h)
}
func (this *QGraphicsObject) OnYChanged(slot func()) {
	C.QGraphicsObject_connect_yChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_yChanged
func miqt_exec_callback_QGraphicsObject_yChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ZChanged() {
	C.QGraphicsObject_zChanged(this.h)
}
func (this *QGraphicsObject) OnZChanged(slot func()) {
	C.QGraphicsObject_connect_zChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_zChanged
func miqt_exec_callback_QGraphicsObject_zChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) RotationChanged() {
	C.QGraphicsObject_rotationChanged(this.h)
}
func (this *QGraphicsObject) OnRotationChanged(slot func()) {
	C.QGraphicsObject_connect_rotationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_rotationChanged
func miqt_exec_callback_QGraphicsObject_rotationChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ScaleChanged() {
	C.QGraphicsObject_scaleChanged(this.h)
}
func (this *QGraphicsObject) OnScaleChanged(slot func()) {
	C.QGraphicsObject_connect_scaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_scaleChanged
func miqt_exec_callback_QGraphicsObject_scaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ChildrenChanged() {
	C.QGraphicsObject_childrenChanged(this.h)
}
func (this *QGraphicsObject) OnChildrenChanged(slot func()) {
	C.QGraphicsObject_connect_childrenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_childrenChanged
func miqt_exec_callback_QGraphicsObject_childrenChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) WidthChanged() {
	C.QGraphicsObject_widthChanged(this.h)
}
func (this *QGraphicsObject) OnWidthChanged(slot func()) {
	C.QGraphicsObject_connect_widthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_widthChanged
func miqt_exec_callback_QGraphicsObject_widthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) HeightChanged() {
	C.QGraphicsObject_heightChanged(this.h)
}
func (this *QGraphicsObject) OnHeightChanged(slot func()) {
	C.QGraphicsObject_connect_heightChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsObject_heightChanged
func miqt_exec_callback_QGraphicsObject_heightChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QGraphicsObject_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsObject_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsObject) GrabGesture2(typeVal GestureType, flags GestureFlag) {
	C.QGraphicsObject_grabGesture2(this.h, (C.int)(typeVal), (C.int)(flags))
}

// UpdateMicroFocus can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsObject_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsObject_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsObject_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsObject_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsObject_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AddToIndex can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsObject_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsObject_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsObject that was directly constructed.
func (this *QGraphicsObject) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsObject_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsObject) callVirtualBase_Event(ev *QEvent) bool {

	return (bool)(C.QGraphicsObject_virtualbase_event(unsafe.Pointer(this.h), ev.cPointer()))

}
func (this *QGraphicsObject) OnEvent(slot func(super func(ev *QEvent) bool, ev *QEvent) bool) {
	ok := C.QGraphicsObject_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_event
func miqt_exec_callback_QGraphicsObject_event(self *C.QGraphicsObject, cb C.intptr_t, ev *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QEvent) bool, ev *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(ev)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsObject_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsObject) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsObject_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_eventFilter
func miqt_exec_callback_QGraphicsObject_eventFilter(self *C.QGraphicsObject, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsObject_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsObject_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_timerEvent
func miqt_exec_callback_QGraphicsObject_timerEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsObject_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsObject_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_childEvent
func miqt_exec_callback_QGraphicsObject_childEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsObject_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsObject_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_customEvent
func miqt_exec_callback_QGraphicsObject_customEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsObject_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsObject) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsObject_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_connectNotify
func miqt_exec_callback_QGraphicsObject_connectNotify(self *C.QGraphicsObject, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsObject_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsObject) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsObject_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_disconnectNotify
func miqt_exec_callback_QGraphicsObject_disconnectNotify(self *C.QGraphicsObject, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_Advance(phase int) {

	C.QGraphicsObject_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsObject) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsObject_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_advance
func miqt_exec_callback_QGraphicsObject_advance(self *C.QGraphicsObject, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_Advance, slotval1)

}
func (this *QGraphicsObject) OnBoundingRect(slot func() *QRectF) {
	ok := C.QGraphicsObject_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_boundingRect
func miqt_exec_callback_QGraphicsObject_boundingRect(self *C.QGraphicsObject, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

func (this *QGraphicsObject) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsObject_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsObject) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsObject_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_shape
func miqt_exec_callback_QGraphicsObject_shape(self *C.QGraphicsObject, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsObject) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsObject_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsObject) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsObject_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_contains
func miqt_exec_callback_QGraphicsObject_contains(self *C.QGraphicsObject, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsObject_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsObject) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsObject_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_collidesWithItem
func miqt_exec_callback_QGraphicsObject_collidesWithItem(self *C.QGraphicsObject, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsObject_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsObject) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsObject_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_collidesWithPath
func miqt_exec_callback_QGraphicsObject_collidesWithPath(self *C.QGraphicsObject, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsObject_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsObject) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsObject_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_isObscuredBy
func miqt_exec_callback_QGraphicsObject_isObscuredBy(self *C.QGraphicsObject, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsObject_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsObject) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsObject_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_opaqueArea
func miqt_exec_callback_QGraphicsObject_opaqueArea(self *C.QGraphicsObject, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}
func (this *QGraphicsObject) OnPaint(slot func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsObject_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_paint
func miqt_exec_callback_QGraphicsObject_paint(self *C.QGraphicsObject, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc(slotval1, slotval2, slotval3)

}

func (this *QGraphicsObject) callVirtualBase_Type() int {

	return (int)(C.QGraphicsObject_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsObject) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsObject_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_type
func miqt_exec_callback_QGraphicsObject_type(self *C.QGraphicsObject, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsObject_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsObject) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsObject_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_sceneEventFilter
func miqt_exec_callback_QGraphicsObject_sceneEventFilter(self *C.QGraphicsObject, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsObject_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsObject) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsObject_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_sceneEvent
func miqt_exec_callback_QGraphicsObject_sceneEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsObject_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsObject_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_contextMenuEvent
func miqt_exec_callback_QGraphicsObject_contextMenuEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsObject_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsObject_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_dragEnterEvent
func miqt_exec_callback_QGraphicsObject_dragEnterEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsObject_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsObject_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_dragLeaveEvent
func miqt_exec_callback_QGraphicsObject_dragLeaveEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsObject_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsObject_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_dragMoveEvent
func miqt_exec_callback_QGraphicsObject_dragMoveEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsObject_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsObject_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_dropEvent
func miqt_exec_callback_QGraphicsObject_dropEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsObject_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsObject_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_focusInEvent
func miqt_exec_callback_QGraphicsObject_focusInEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsObject_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsObject_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_focusOutEvent
func miqt_exec_callback_QGraphicsObject_focusOutEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsObject_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsObject_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_hoverEnterEvent
func miqt_exec_callback_QGraphicsObject_hoverEnterEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsObject_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsObject_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_hoverMoveEvent
func miqt_exec_callback_QGraphicsObject_hoverMoveEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsObject_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsObject_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_hoverLeaveEvent
func miqt_exec_callback_QGraphicsObject_hoverLeaveEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsObject_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsObject_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_keyPressEvent
func miqt_exec_callback_QGraphicsObject_keyPressEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsObject_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsObject_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_keyReleaseEvent
func miqt_exec_callback_QGraphicsObject_keyReleaseEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsObject_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsObject_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_mousePressEvent
func miqt_exec_callback_QGraphicsObject_mousePressEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsObject_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsObject_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_mouseMoveEvent
func miqt_exec_callback_QGraphicsObject_mouseMoveEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsObject_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsObject_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_mouseReleaseEvent
func miqt_exec_callback_QGraphicsObject_mouseReleaseEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsObject_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsObject_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsObject_mouseDoubleClickEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsObject_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsObject_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_wheelEvent
func miqt_exec_callback_QGraphicsObject_wheelEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsObject_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsObject) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsObject_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_inputMethodEvent
func miqt_exec_callback_QGraphicsObject_inputMethodEvent(self *C.QGraphicsObject, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsObject) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsObject_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsObject) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsObject_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_inputMethodQuery
func miqt_exec_callback_QGraphicsObject_inputMethodQuery(self *C.QGraphicsObject, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsObject) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsObject_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsObject) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsObject_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_itemChange
func miqt_exec_callback_QGraphicsObject_itemChange(self *C.QGraphicsObject, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsObject) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsObject_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsObject) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsObject_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_supportsExtension
func miqt_exec_callback_QGraphicsObject_supportsExtension(self *C.QGraphicsObject, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsObject) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsObject_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsObject) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsObject_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_setExtension
func miqt_exec_callback_QGraphicsObject_setExtension(self *C.QGraphicsObject, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsObject{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsObject) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsObject_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsObject) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsObject_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsObject_extension
func miqt_exec_callback_QGraphicsObject_extension(self *C.QGraphicsObject, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsObject{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsObject) Delete() {
	C.QGraphicsObject_delete(this.h)
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
	h *C.QAbstractGraphicsShapeItem
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
func newQAbstractGraphicsShapeItem(h *C.QAbstractGraphicsShapeItem) *QAbstractGraphicsShapeItem {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	C.QAbstractGraphicsShapeItem_virtbase(h, &outptr_QGraphicsItem)

	return &QAbstractGraphicsShapeItem{h: h,
		QGraphicsItem: newQGraphicsItem(outptr_QGraphicsItem)}
}

// UnsafeNewQAbstractGraphicsShapeItem constructs the type using only unsafe pointers.
func UnsafeNewQAbstractGraphicsShapeItem(h unsafe.Pointer) *QAbstractGraphicsShapeItem {
	return newQAbstractGraphicsShapeItem((*C.QAbstractGraphicsShapeItem)(h))
}

// NewQAbstractGraphicsShapeItem constructs a new QAbstractGraphicsShapeItem object.
func NewQAbstractGraphicsShapeItem() *QAbstractGraphicsShapeItem {

	return newQAbstractGraphicsShapeItem(C.QAbstractGraphicsShapeItem_new())
}

// NewQAbstractGraphicsShapeItem2 constructs a new QAbstractGraphicsShapeItem object.
func NewQAbstractGraphicsShapeItem2(parent *QGraphicsItem) *QAbstractGraphicsShapeItem {

	return newQAbstractGraphicsShapeItem(C.QAbstractGraphicsShapeItem_new2(parent.cPointer()))
}

func (this *QAbstractGraphicsShapeItem) Pen() *QPen {
	_goptr := newQPen(C.QAbstractGraphicsShapeItem_pen(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractGraphicsShapeItem) SetPen(pen *QPen) {
	C.QAbstractGraphicsShapeItem_setPen(this.h, pen.cPointer())
}

func (this *QAbstractGraphicsShapeItem) Brush() *QBrush {
	_goptr := newQBrush(C.QAbstractGraphicsShapeItem_brush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractGraphicsShapeItem) SetBrush(brush *QBrush) {
	C.QAbstractGraphicsShapeItem_setBrush(this.h, brush.cPointer())
}

func (this *QAbstractGraphicsShapeItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QAbstractGraphicsShapeItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QAbstractGraphicsShapeItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QAbstractGraphicsShapeItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// UpdateMicroFocus can only be called from a QAbstractGraphicsShapeItem that was directly constructed.
func (this *QAbstractGraphicsShapeItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractGraphicsShapeItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QAbstractGraphicsShapeItem that was directly constructed.
func (this *QAbstractGraphicsShapeItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractGraphicsShapeItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QAbstractGraphicsShapeItem that was directly constructed.
func (this *QAbstractGraphicsShapeItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractGraphicsShapeItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QAbstractGraphicsShapeItem that was directly constructed.
func (this *QAbstractGraphicsShapeItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractGraphicsShapeItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QAbstractGraphicsShapeItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QAbstractGraphicsShapeItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_isObscuredBy
func miqt_exec_callback_QAbstractGraphicsShapeItem_isObscuredBy(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QAbstractGraphicsShapeItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractGraphicsShapeItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_opaqueArea
func miqt_exec_callback_QAbstractGraphicsShapeItem_opaqueArea(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_Advance(phase int) {

	C.QAbstractGraphicsShapeItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QAbstractGraphicsShapeItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_advance
func miqt_exec_callback_QAbstractGraphicsShapeItem_advance(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_Advance, slotval1)

}
func (this *QAbstractGraphicsShapeItem) OnBoundingRect(slot func() *QRectF) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_boundingRect
func miqt_exec_callback_QAbstractGraphicsShapeItem_boundingRect(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QAbstractGraphicsShapeItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractGraphicsShapeItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_shape
func miqt_exec_callback_QAbstractGraphicsShapeItem_shape(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QAbstractGraphicsShapeItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QAbstractGraphicsShapeItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_contains
func miqt_exec_callback_QAbstractGraphicsShapeItem_contains(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QAbstractGraphicsShapeItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QAbstractGraphicsShapeItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithItem
func miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithItem(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QAbstractGraphicsShapeItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QAbstractGraphicsShapeItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithPath
func miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithPath(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractGraphicsShapeItem) OnPaint(slot func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_paint
func miqt_exec_callback_QAbstractGraphicsShapeItem_paint(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc(slotval1, slotval2, slotval3)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_Type() int {

	return (int)(C.QAbstractGraphicsShapeItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QAbstractGraphicsShapeItem) OnType(slot func(super func() int) int) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_type
func miqt_exec_callback_QAbstractGraphicsShapeItem_type(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QAbstractGraphicsShapeItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractGraphicsShapeItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEventFilter
func miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEventFilter(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QAbstractGraphicsShapeItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractGraphicsShapeItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_contextMenuEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_contextMenuEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_dragEnterEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_dragEnterEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_dragLeaveEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_dragLeaveEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_dragMoveEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_dragMoveEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_dropEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_dropEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_focusInEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_focusInEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_focusOutEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_focusOutEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_hoverEnterEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_hoverEnterEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_hoverMoveEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_hoverMoveEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_hoverLeaveEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_hoverLeaveEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_keyPressEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_keyPressEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_keyReleaseEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_keyReleaseEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_mousePressEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_mousePressEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_mouseMoveEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_mouseMoveEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_mouseReleaseEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_mouseReleaseEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_mouseDoubleClickEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_mouseDoubleClickEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_wheelEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_wheelEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QAbstractGraphicsShapeItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodEvent
func miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodEvent(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QAbstractGraphicsShapeItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractGraphicsShapeItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodQuery
func miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodQuery(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QAbstractGraphicsShapeItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractGraphicsShapeItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_itemChange
func miqt_exec_callback_QAbstractGraphicsShapeItem_itemChange(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QAbstractGraphicsShapeItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QAbstractGraphicsShapeItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_supportsExtension
func miqt_exec_callback_QAbstractGraphicsShapeItem_supportsExtension(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QAbstractGraphicsShapeItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QAbstractGraphicsShapeItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_setExtension
func miqt_exec_callback_QAbstractGraphicsShapeItem_setExtension(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QAbstractGraphicsShapeItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QAbstractGraphicsShapeItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractGraphicsShapeItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QAbstractGraphicsShapeItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractGraphicsShapeItem_extension
func miqt_exec_callback_QAbstractGraphicsShapeItem_extension(self *C.QAbstractGraphicsShapeItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QAbstractGraphicsShapeItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QAbstractGraphicsShapeItem) Delete() {
	C.QAbstractGraphicsShapeItem_delete(this.h)
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
	h *C.QGraphicsPathItem
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
func newQGraphicsPathItem(h *C.QGraphicsPathItem) *QGraphicsPathItem {
	if h == nil {
		return nil
	}
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	C.QGraphicsPathItem_virtbase(h, &outptr_QAbstractGraphicsShapeItem)

	return &QGraphicsPathItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(outptr_QAbstractGraphicsShapeItem)}
}

// UnsafeNewQGraphicsPathItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsPathItem(h unsafe.Pointer) *QGraphicsPathItem {
	return newQGraphicsPathItem((*C.QGraphicsPathItem)(h))
}

// NewQGraphicsPathItem constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem() *QGraphicsPathItem {

	return newQGraphicsPathItem(C.QGraphicsPathItem_new())
}

// NewQGraphicsPathItem2 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem2(path *QPainterPath) *QGraphicsPathItem {

	return newQGraphicsPathItem(C.QGraphicsPathItem_new2(path.cPointer()))
}

// NewQGraphicsPathItem3 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem3(parent *QGraphicsItem) *QGraphicsPathItem {

	return newQGraphicsPathItem(C.QGraphicsPathItem_new3(parent.cPointer()))
}

// NewQGraphicsPathItem4 constructs a new QGraphicsPathItem object.
func NewQGraphicsPathItem4(path *QPainterPath, parent *QGraphicsItem) *QGraphicsPathItem {

	return newQGraphicsPathItem(C.QGraphicsPathItem_new4(path.cPointer(), parent.cPointer()))
}

func (this *QGraphicsPathItem) Path() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsPathItem_path(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) SetPath(path *QPainterPath) {
	C.QGraphicsPathItem_setPath(this.h, path.cPointer())
}

func (this *QGraphicsPathItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsPathItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsPathItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsPathItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsPathItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPathItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPathItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsPathItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsPathItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsPathItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPathItem) Type() int {
	return (int)(C.QGraphicsPathItem_type(this.h))
}

// UpdateMicroFocus can only be called from a QGraphicsPathItem that was directly constructed.
func (this *QGraphicsPathItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPathItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsPathItem that was directly constructed.
func (this *QGraphicsPathItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPathItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsPathItem that was directly constructed.
func (this *QGraphicsPathItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPathItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsPathItem that was directly constructed.
func (this *QGraphicsPathItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPathItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsPathItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsPathItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsPathItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_boundingRect
func miqt_exec_callback_QGraphicsPathItem_boundingRect(self *C.QGraphicsPathItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsPathItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsPathItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_shape
func miqt_exec_callback_QGraphicsPathItem_shape(self *C.QGraphicsPathItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsPathItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsPathItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_contains
func miqt_exec_callback_QGraphicsPathItem_contains(self *C.QGraphicsPathItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsPathItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsPathItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsPathItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_paint
func miqt_exec_callback_QGraphicsPathItem_paint(self *C.QGraphicsPathItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsPathItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsPathItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsPathItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_isObscuredBy
func miqt_exec_callback_QGraphicsPathItem_isObscuredBy(self *C.QGraphicsPathItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsPathItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsPathItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_opaqueArea
func miqt_exec_callback_QGraphicsPathItem_opaqueArea(self *C.QGraphicsPathItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsPathItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsPathItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsPathItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_type
func miqt_exec_callback_QGraphicsPathItem_type(self *C.QGraphicsPathItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsPathItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsPathItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_supportsExtension
func miqt_exec_callback_QGraphicsPathItem_supportsExtension(self *C.QGraphicsPathItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsPathItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsPathItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsPathItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_setExtension
func miqt_exec_callback_QGraphicsPathItem_setExtension(self *C.QGraphicsPathItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsPathItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsPathItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsPathItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_extension
func miqt_exec_callback_QGraphicsPathItem_extension(self *C.QGraphicsPathItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsPathItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsPathItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsPathItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_advance
func miqt_exec_callback_QGraphicsPathItem_advance(self *C.QGraphicsPathItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPathItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsPathItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_collidesWithItem
func miqt_exec_callback_QGraphicsPathItem_collidesWithItem(self *C.QGraphicsPathItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPathItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsPathItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_collidesWithPath
func miqt_exec_callback_QGraphicsPathItem_collidesWithPath(self *C.QGraphicsPathItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsPathItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsPathItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_sceneEventFilter
func miqt_exec_callback_QGraphicsPathItem_sceneEventFilter(self *C.QGraphicsPathItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsPathItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsPathItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsPathItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_sceneEvent
func miqt_exec_callback_QGraphicsPathItem_sceneEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPathItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsPathItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_contextMenuEvent
func miqt_exec_callback_QGraphicsPathItem_contextMenuEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPathItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_dragEnterEvent
func miqt_exec_callback_QGraphicsPathItem_dragEnterEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPathItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsPathItem_dragLeaveEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPathItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_dragMoveEvent
func miqt_exec_callback_QGraphicsPathItem_dragMoveEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPathItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_dropEvent
func miqt_exec_callback_QGraphicsPathItem_dropEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsPathItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_focusInEvent
func miqt_exec_callback_QGraphicsPathItem_focusInEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsPathItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_focusOutEvent
func miqt_exec_callback_QGraphicsPathItem_focusOutEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPathItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsPathItem_hoverEnterEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPathItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsPathItem_hoverMoveEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPathItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsPathItem_hoverLeaveEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsPathItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_keyPressEvent
func miqt_exec_callback_QGraphicsPathItem_keyPressEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsPathItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsPathItem_keyReleaseEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPathItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_mousePressEvent
func miqt_exec_callback_QGraphicsPathItem_mousePressEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPathItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsPathItem_mouseMoveEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPathItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsPathItem_mouseReleaseEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPathItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsPathItem_mouseDoubleClickEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsPathItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_wheelEvent
func miqt_exec_callback_QGraphicsPathItem_wheelEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsPathItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPathItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsPathItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_inputMethodEvent
func miqt_exec_callback_QGraphicsPathItem_inputMethodEvent(self *C.QGraphicsPathItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsPathItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsPathItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsPathItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_inputMethodQuery
func miqt_exec_callback_QGraphicsPathItem_inputMethodQuery(self *C.QGraphicsPathItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPathItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsPathItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPathItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsPathItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPathItem_itemChange
func miqt_exec_callback_QGraphicsPathItem_itemChange(self *C.QGraphicsPathItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsPathItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsPathItem) Delete() {
	C.QGraphicsPathItem_delete(this.h)
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
	h *C.QGraphicsRectItem
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
func newQGraphicsRectItem(h *C.QGraphicsRectItem) *QGraphicsRectItem {
	if h == nil {
		return nil
	}
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	C.QGraphicsRectItem_virtbase(h, &outptr_QAbstractGraphicsShapeItem)

	return &QGraphicsRectItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(outptr_QAbstractGraphicsShapeItem)}
}

// UnsafeNewQGraphicsRectItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsRectItem(h unsafe.Pointer) *QGraphicsRectItem {
	return newQGraphicsRectItem((*C.QGraphicsRectItem)(h))
}

// NewQGraphicsRectItem constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem() *QGraphicsRectItem {

	return newQGraphicsRectItem(C.QGraphicsRectItem_new())
}

// NewQGraphicsRectItem2 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem2(rect *QRectF) *QGraphicsRectItem {

	return newQGraphicsRectItem(C.QGraphicsRectItem_new2(rect.cPointer()))
}

// NewQGraphicsRectItem3 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem3(x float64, y float64, w float64, h float64) *QGraphicsRectItem {

	return newQGraphicsRectItem(C.QGraphicsRectItem_new3((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
}

// NewQGraphicsRectItem4 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem4(parent *QGraphicsItem) *QGraphicsRectItem {

	return newQGraphicsRectItem(C.QGraphicsRectItem_new4(parent.cPointer()))
}

// NewQGraphicsRectItem5 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem5(rect *QRectF, parent *QGraphicsItem) *QGraphicsRectItem {

	return newQGraphicsRectItem(C.QGraphicsRectItem_new5(rect.cPointer(), parent.cPointer()))
}

// NewQGraphicsRectItem6 constructs a new QGraphicsRectItem object.
func NewQGraphicsRectItem6(x float64, y float64, w float64, h float64, parent *QGraphicsItem) *QGraphicsRectItem {

	return newQGraphicsRectItem(C.QGraphicsRectItem_new6((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), parent.cPointer()))
}

func (this *QGraphicsRectItem) Rect() *QRectF {
	_goptr := newQRectF(C.QGraphicsRectItem_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) SetRect(rect *QRectF) {
	C.QGraphicsRectItem_setRect(this.h, rect.cPointer())
}

func (this *QGraphicsRectItem) SetRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsRectItem_setRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsRectItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsRectItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsRectItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsRectItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsRectItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsRectItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsRectItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsRectItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsRectItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsRectItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRectItem) Type() int {
	return (int)(C.QGraphicsRectItem_type(this.h))
}

// UpdateMicroFocus can only be called from a QGraphicsRectItem that was directly constructed.
func (this *QGraphicsRectItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsRectItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsRectItem that was directly constructed.
func (this *QGraphicsRectItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsRectItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsRectItem that was directly constructed.
func (this *QGraphicsRectItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsRectItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsRectItem that was directly constructed.
func (this *QGraphicsRectItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsRectItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsRectItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsRectItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsRectItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_boundingRect
func miqt_exec_callback_QGraphicsRectItem_boundingRect(self *C.QGraphicsRectItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsRectItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsRectItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_shape
func miqt_exec_callback_QGraphicsRectItem_shape(self *C.QGraphicsRectItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsRectItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsRectItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_contains
func miqt_exec_callback_QGraphicsRectItem_contains(self *C.QGraphicsRectItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsRectItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsRectItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsRectItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_paint
func miqt_exec_callback_QGraphicsRectItem_paint(self *C.QGraphicsRectItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsRectItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsRectItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsRectItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_isObscuredBy
func miqt_exec_callback_QGraphicsRectItem_isObscuredBy(self *C.QGraphicsRectItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsRectItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsRectItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_opaqueArea
func miqt_exec_callback_QGraphicsRectItem_opaqueArea(self *C.QGraphicsRectItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsRectItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsRectItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsRectItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_type
func miqt_exec_callback_QGraphicsRectItem_type(self *C.QGraphicsRectItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsRectItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsRectItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_supportsExtension
func miqt_exec_callback_QGraphicsRectItem_supportsExtension(self *C.QGraphicsRectItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsRectItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsRectItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsRectItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_setExtension
func miqt_exec_callback_QGraphicsRectItem_setExtension(self *C.QGraphicsRectItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsRectItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsRectItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsRectItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_extension
func miqt_exec_callback_QGraphicsRectItem_extension(self *C.QGraphicsRectItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsRectItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsRectItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsRectItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_advance
func miqt_exec_callback_QGraphicsRectItem_advance(self *C.QGraphicsRectItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsRectItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsRectItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_collidesWithItem
func miqt_exec_callback_QGraphicsRectItem_collidesWithItem(self *C.QGraphicsRectItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsRectItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsRectItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_collidesWithPath
func miqt_exec_callback_QGraphicsRectItem_collidesWithPath(self *C.QGraphicsRectItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsRectItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsRectItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_sceneEventFilter
func miqt_exec_callback_QGraphicsRectItem_sceneEventFilter(self *C.QGraphicsRectItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsRectItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsRectItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsRectItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_sceneEvent
func miqt_exec_callback_QGraphicsRectItem_sceneEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRectItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsRectItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_contextMenuEvent
func miqt_exec_callback_QGraphicsRectItem_contextMenuEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsRectItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_dragEnterEvent
func miqt_exec_callback_QGraphicsRectItem_dragEnterEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsRectItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsRectItem_dragLeaveEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsRectItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_dragMoveEvent
func miqt_exec_callback_QGraphicsRectItem_dragMoveEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsRectItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_dropEvent
func miqt_exec_callback_QGraphicsRectItem_dropEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsRectItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_focusInEvent
func miqt_exec_callback_QGraphicsRectItem_focusInEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsRectItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_focusOutEvent
func miqt_exec_callback_QGraphicsRectItem_focusOutEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsRectItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsRectItem_hoverEnterEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsRectItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsRectItem_hoverMoveEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsRectItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsRectItem_hoverLeaveEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsRectItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_keyPressEvent
func miqt_exec_callback_QGraphicsRectItem_keyPressEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsRectItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsRectItem_keyReleaseEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsRectItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_mousePressEvent
func miqt_exec_callback_QGraphicsRectItem_mousePressEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsRectItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsRectItem_mouseMoveEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsRectItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsRectItem_mouseReleaseEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsRectItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsRectItem_mouseDoubleClickEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsRectItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_wheelEvent
func miqt_exec_callback_QGraphicsRectItem_wheelEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsRectItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRectItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsRectItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_inputMethodEvent
func miqt_exec_callback_QGraphicsRectItem_inputMethodEvent(self *C.QGraphicsRectItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsRectItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsRectItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsRectItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_inputMethodQuery
func miqt_exec_callback_QGraphicsRectItem_inputMethodQuery(self *C.QGraphicsRectItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsRectItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsRectItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsRectItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsRectItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRectItem_itemChange
func miqt_exec_callback_QGraphicsRectItem_itemChange(self *C.QGraphicsRectItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsRectItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsRectItem) Delete() {
	C.QGraphicsRectItem_delete(this.h)
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
	h *C.QGraphicsEllipseItem
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
func newQGraphicsEllipseItem(h *C.QGraphicsEllipseItem) *QGraphicsEllipseItem {
	if h == nil {
		return nil
	}
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	C.QGraphicsEllipseItem_virtbase(h, &outptr_QAbstractGraphicsShapeItem)

	return &QGraphicsEllipseItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(outptr_QAbstractGraphicsShapeItem)}
}

// UnsafeNewQGraphicsEllipseItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsEllipseItem(h unsafe.Pointer) *QGraphicsEllipseItem {
	return newQGraphicsEllipseItem((*C.QGraphicsEllipseItem)(h))
}

// NewQGraphicsEllipseItem constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem() *QGraphicsEllipseItem {

	return newQGraphicsEllipseItem(C.QGraphicsEllipseItem_new())
}

// NewQGraphicsEllipseItem2 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem2(rect *QRectF) *QGraphicsEllipseItem {

	return newQGraphicsEllipseItem(C.QGraphicsEllipseItem_new2(rect.cPointer()))
}

// NewQGraphicsEllipseItem3 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem3(x float64, y float64, w float64, h float64) *QGraphicsEllipseItem {

	return newQGraphicsEllipseItem(C.QGraphicsEllipseItem_new3((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h)))
}

// NewQGraphicsEllipseItem4 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem4(parent *QGraphicsItem) *QGraphicsEllipseItem {

	return newQGraphicsEllipseItem(C.QGraphicsEllipseItem_new4(parent.cPointer()))
}

// NewQGraphicsEllipseItem5 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem5(rect *QRectF, parent *QGraphicsItem) *QGraphicsEllipseItem {

	return newQGraphicsEllipseItem(C.QGraphicsEllipseItem_new5(rect.cPointer(), parent.cPointer()))
}

// NewQGraphicsEllipseItem6 constructs a new QGraphicsEllipseItem object.
func NewQGraphicsEllipseItem6(x float64, y float64, w float64, h float64, parent *QGraphicsItem) *QGraphicsEllipseItem {

	return newQGraphicsEllipseItem(C.QGraphicsEllipseItem_new6((C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), parent.cPointer()))
}

func (this *QGraphicsEllipseItem) Rect() *QRectF {
	_goptr := newQRectF(C.QGraphicsEllipseItem_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) SetRect(rect *QRectF) {
	C.QGraphicsEllipseItem_setRect(this.h, rect.cPointer())
}

func (this *QGraphicsEllipseItem) SetRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsEllipseItem_setRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsEllipseItem) StartAngle() int {
	return (int)(C.QGraphicsEllipseItem_startAngle(this.h))
}

func (this *QGraphicsEllipseItem) SetStartAngle(angle int) {
	C.QGraphicsEllipseItem_setStartAngle(this.h, (C.int)(angle))
}

func (this *QGraphicsEllipseItem) SpanAngle() int {
	return (int)(C.QGraphicsEllipseItem_spanAngle(this.h))
}

func (this *QGraphicsEllipseItem) SetSpanAngle(angle int) {
	C.QGraphicsEllipseItem_setSpanAngle(this.h, (C.int)(angle))
}

func (this *QGraphicsEllipseItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsEllipseItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsEllipseItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsEllipseItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsEllipseItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsEllipseItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsEllipseItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsEllipseItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsEllipseItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsEllipseItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEllipseItem) Type() int {
	return (int)(C.QGraphicsEllipseItem_type(this.h))
}

// UpdateMicroFocus can only be called from a QGraphicsEllipseItem that was directly constructed.
func (this *QGraphicsEllipseItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsEllipseItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsEllipseItem that was directly constructed.
func (this *QGraphicsEllipseItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsEllipseItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsEllipseItem that was directly constructed.
func (this *QGraphicsEllipseItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsEllipseItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsEllipseItem that was directly constructed.
func (this *QGraphicsEllipseItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsEllipseItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsEllipseItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsEllipseItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsEllipseItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_boundingRect
func miqt_exec_callback_QGraphicsEllipseItem_boundingRect(self *C.QGraphicsEllipseItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsEllipseItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsEllipseItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_shape
func miqt_exec_callback_QGraphicsEllipseItem_shape(self *C.QGraphicsEllipseItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsEllipseItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsEllipseItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_contains
func miqt_exec_callback_QGraphicsEllipseItem_contains(self *C.QGraphicsEllipseItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsEllipseItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsEllipseItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsEllipseItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_paint
func miqt_exec_callback_QGraphicsEllipseItem_paint(self *C.QGraphicsEllipseItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsEllipseItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsEllipseItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsEllipseItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_isObscuredBy
func miqt_exec_callback_QGraphicsEllipseItem_isObscuredBy(self *C.QGraphicsEllipseItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsEllipseItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsEllipseItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_opaqueArea
func miqt_exec_callback_QGraphicsEllipseItem_opaqueArea(self *C.QGraphicsEllipseItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsEllipseItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsEllipseItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsEllipseItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_type
func miqt_exec_callback_QGraphicsEllipseItem_type(self *C.QGraphicsEllipseItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsEllipseItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsEllipseItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_supportsExtension
func miqt_exec_callback_QGraphicsEllipseItem_supportsExtension(self *C.QGraphicsEllipseItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsEllipseItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsEllipseItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsEllipseItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_setExtension
func miqt_exec_callback_QGraphicsEllipseItem_setExtension(self *C.QGraphicsEllipseItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsEllipseItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsEllipseItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsEllipseItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_extension
func miqt_exec_callback_QGraphicsEllipseItem_extension(self *C.QGraphicsEllipseItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsEllipseItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsEllipseItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsEllipseItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_advance
func miqt_exec_callback_QGraphicsEllipseItem_advance(self *C.QGraphicsEllipseItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsEllipseItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsEllipseItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_collidesWithItem
func miqt_exec_callback_QGraphicsEllipseItem_collidesWithItem(self *C.QGraphicsEllipseItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsEllipseItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsEllipseItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_collidesWithPath
func miqt_exec_callback_QGraphicsEllipseItem_collidesWithPath(self *C.QGraphicsEllipseItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsEllipseItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsEllipseItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_sceneEventFilter
func miqt_exec_callback_QGraphicsEllipseItem_sceneEventFilter(self *C.QGraphicsEllipseItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsEllipseItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsEllipseItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsEllipseItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_sceneEvent
func miqt_exec_callback_QGraphicsEllipseItem_sceneEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEllipseItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsEllipseItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_contextMenuEvent
func miqt_exec_callback_QGraphicsEllipseItem_contextMenuEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsEllipseItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_dragEnterEvent
func miqt_exec_callback_QGraphicsEllipseItem_dragEnterEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsEllipseItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsEllipseItem_dragLeaveEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsEllipseItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_dragMoveEvent
func miqt_exec_callback_QGraphicsEllipseItem_dragMoveEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsEllipseItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_dropEvent
func miqt_exec_callback_QGraphicsEllipseItem_dropEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsEllipseItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_focusInEvent
func miqt_exec_callback_QGraphicsEllipseItem_focusInEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsEllipseItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_focusOutEvent
func miqt_exec_callback_QGraphicsEllipseItem_focusOutEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsEllipseItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsEllipseItem_hoverEnterEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsEllipseItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsEllipseItem_hoverMoveEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsEllipseItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsEllipseItem_hoverLeaveEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsEllipseItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_keyPressEvent
func miqt_exec_callback_QGraphicsEllipseItem_keyPressEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsEllipseItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsEllipseItem_keyReleaseEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsEllipseItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_mousePressEvent
func miqt_exec_callback_QGraphicsEllipseItem_mousePressEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsEllipseItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsEllipseItem_mouseMoveEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsEllipseItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsEllipseItem_mouseReleaseEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsEllipseItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsEllipseItem_mouseDoubleClickEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsEllipseItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_wheelEvent
func miqt_exec_callback_QGraphicsEllipseItem_wheelEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsEllipseItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEllipseItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsEllipseItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_inputMethodEvent
func miqt_exec_callback_QGraphicsEllipseItem_inputMethodEvent(self *C.QGraphicsEllipseItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsEllipseItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsEllipseItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsEllipseItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_inputMethodQuery
func miqt_exec_callback_QGraphicsEllipseItem_inputMethodQuery(self *C.QGraphicsEllipseItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsEllipseItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsEllipseItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEllipseItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsEllipseItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEllipseItem_itemChange
func miqt_exec_callback_QGraphicsEllipseItem_itemChange(self *C.QGraphicsEllipseItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsEllipseItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsEllipseItem) Delete() {
	C.QGraphicsEllipseItem_delete(this.h)
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
	h *C.QGraphicsPolygonItem
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
func newQGraphicsPolygonItem(h *C.QGraphicsPolygonItem) *QGraphicsPolygonItem {
	if h == nil {
		return nil
	}
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	C.QGraphicsPolygonItem_virtbase(h, &outptr_QAbstractGraphicsShapeItem)

	return &QGraphicsPolygonItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(outptr_QAbstractGraphicsShapeItem)}
}

// UnsafeNewQGraphicsPolygonItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsPolygonItem(h unsafe.Pointer) *QGraphicsPolygonItem {
	return newQGraphicsPolygonItem((*C.QGraphicsPolygonItem)(h))
}

// NewQGraphicsPolygonItem constructs a new QGraphicsPolygonItem object.
func NewQGraphicsPolygonItem() *QGraphicsPolygonItem {

	return newQGraphicsPolygonItem(C.QGraphicsPolygonItem_new())
}

// NewQGraphicsPolygonItem2 constructs a new QGraphicsPolygonItem object.
func NewQGraphicsPolygonItem2(parent *QGraphicsItem) *QGraphicsPolygonItem {

	return newQGraphicsPolygonItem(C.QGraphicsPolygonItem_new2(parent.cPointer()))
}

func (this *QGraphicsPolygonItem) FillRule() FillRule {
	return (FillRule)(C.QGraphicsPolygonItem_fillRule(this.h))
}

func (this *QGraphicsPolygonItem) SetFillRule(rule FillRule) {
	C.QGraphicsPolygonItem_setFillRule(this.h, (C.int)(rule))
}

func (this *QGraphicsPolygonItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsPolygonItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPolygonItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsPolygonItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPolygonItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsPolygonItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsPolygonItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPolygonItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPolygonItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsPolygonItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsPolygonItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsPolygonItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPolygonItem) Type() int {
	return (int)(C.QGraphicsPolygonItem_type(this.h))
}

// UpdateMicroFocus can only be called from a QGraphicsPolygonItem that was directly constructed.
func (this *QGraphicsPolygonItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPolygonItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsPolygonItem that was directly constructed.
func (this *QGraphicsPolygonItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPolygonItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsPolygonItem that was directly constructed.
func (this *QGraphicsPolygonItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPolygonItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsPolygonItem that was directly constructed.
func (this *QGraphicsPolygonItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPolygonItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsPolygonItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsPolygonItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsPolygonItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_boundingRect
func miqt_exec_callback_QGraphicsPolygonItem_boundingRect(self *C.QGraphicsPolygonItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsPolygonItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsPolygonItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_shape
func miqt_exec_callback_QGraphicsPolygonItem_shape(self *C.QGraphicsPolygonItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsPolygonItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsPolygonItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_contains
func miqt_exec_callback_QGraphicsPolygonItem_contains(self *C.QGraphicsPolygonItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsPolygonItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsPolygonItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsPolygonItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_paint
func miqt_exec_callback_QGraphicsPolygonItem_paint(self *C.QGraphicsPolygonItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsPolygonItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsPolygonItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsPolygonItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_isObscuredBy
func miqt_exec_callback_QGraphicsPolygonItem_isObscuredBy(self *C.QGraphicsPolygonItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsPolygonItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsPolygonItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_opaqueArea
func miqt_exec_callback_QGraphicsPolygonItem_opaqueArea(self *C.QGraphicsPolygonItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsPolygonItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsPolygonItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsPolygonItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_type
func miqt_exec_callback_QGraphicsPolygonItem_type(self *C.QGraphicsPolygonItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsPolygonItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsPolygonItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_supportsExtension
func miqt_exec_callback_QGraphicsPolygonItem_supportsExtension(self *C.QGraphicsPolygonItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsPolygonItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsPolygonItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsPolygonItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_setExtension
func miqt_exec_callback_QGraphicsPolygonItem_setExtension(self *C.QGraphicsPolygonItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsPolygonItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsPolygonItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsPolygonItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_extension
func miqt_exec_callback_QGraphicsPolygonItem_extension(self *C.QGraphicsPolygonItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsPolygonItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsPolygonItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsPolygonItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_advance
func miqt_exec_callback_QGraphicsPolygonItem_advance(self *C.QGraphicsPolygonItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPolygonItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsPolygonItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_collidesWithItem
func miqt_exec_callback_QGraphicsPolygonItem_collidesWithItem(self *C.QGraphicsPolygonItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPolygonItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsPolygonItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_collidesWithPath
func miqt_exec_callback_QGraphicsPolygonItem_collidesWithPath(self *C.QGraphicsPolygonItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsPolygonItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsPolygonItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_sceneEventFilter
func miqt_exec_callback_QGraphicsPolygonItem_sceneEventFilter(self *C.QGraphicsPolygonItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsPolygonItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsPolygonItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsPolygonItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_sceneEvent
func miqt_exec_callback_QGraphicsPolygonItem_sceneEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPolygonItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsPolygonItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_contextMenuEvent
func miqt_exec_callback_QGraphicsPolygonItem_contextMenuEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPolygonItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_dragEnterEvent
func miqt_exec_callback_QGraphicsPolygonItem_dragEnterEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPolygonItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsPolygonItem_dragLeaveEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPolygonItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_dragMoveEvent
func miqt_exec_callback_QGraphicsPolygonItem_dragMoveEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPolygonItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_dropEvent
func miqt_exec_callback_QGraphicsPolygonItem_dropEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsPolygonItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_focusInEvent
func miqt_exec_callback_QGraphicsPolygonItem_focusInEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsPolygonItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_focusOutEvent
func miqt_exec_callback_QGraphicsPolygonItem_focusOutEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPolygonItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsPolygonItem_hoverEnterEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPolygonItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsPolygonItem_hoverMoveEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPolygonItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsPolygonItem_hoverLeaveEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsPolygonItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_keyPressEvent
func miqt_exec_callback_QGraphicsPolygonItem_keyPressEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsPolygonItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsPolygonItem_keyReleaseEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPolygonItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_mousePressEvent
func miqt_exec_callback_QGraphicsPolygonItem_mousePressEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPolygonItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsPolygonItem_mouseMoveEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPolygonItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsPolygonItem_mouseReleaseEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPolygonItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsPolygonItem_mouseDoubleClickEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsPolygonItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_wheelEvent
func miqt_exec_callback_QGraphicsPolygonItem_wheelEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsPolygonItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPolygonItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsPolygonItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_inputMethodEvent
func miqt_exec_callback_QGraphicsPolygonItem_inputMethodEvent(self *C.QGraphicsPolygonItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsPolygonItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsPolygonItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsPolygonItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_inputMethodQuery
func miqt_exec_callback_QGraphicsPolygonItem_inputMethodQuery(self *C.QGraphicsPolygonItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPolygonItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsPolygonItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPolygonItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsPolygonItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPolygonItem_itemChange
func miqt_exec_callback_QGraphicsPolygonItem_itemChange(self *C.QGraphicsPolygonItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsPolygonItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsPolygonItem) Delete() {
	C.QGraphicsPolygonItem_delete(this.h)
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
	h *C.QGraphicsLineItem
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
func newQGraphicsLineItem(h *C.QGraphicsLineItem) *QGraphicsLineItem {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	C.QGraphicsLineItem_virtbase(h, &outptr_QGraphicsItem)

	return &QGraphicsLineItem{h: h,
		QGraphicsItem: newQGraphicsItem(outptr_QGraphicsItem)}
}

// UnsafeNewQGraphicsLineItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsLineItem(h unsafe.Pointer) *QGraphicsLineItem {
	return newQGraphicsLineItem((*C.QGraphicsLineItem)(h))
}

// NewQGraphicsLineItem constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem() *QGraphicsLineItem {

	return newQGraphicsLineItem(C.QGraphicsLineItem_new())
}

// NewQGraphicsLineItem2 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem2(line *QLineF) *QGraphicsLineItem {

	return newQGraphicsLineItem(C.QGraphicsLineItem_new2(line.cPointer()))
}

// NewQGraphicsLineItem3 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem3(x1 float64, y1 float64, x2 float64, y2 float64) *QGraphicsLineItem {

	return newQGraphicsLineItem(C.QGraphicsLineItem_new3((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2)))
}

// NewQGraphicsLineItem4 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem4(parent *QGraphicsItem) *QGraphicsLineItem {

	return newQGraphicsLineItem(C.QGraphicsLineItem_new4(parent.cPointer()))
}

// NewQGraphicsLineItem5 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem5(line *QLineF, parent *QGraphicsItem) *QGraphicsLineItem {

	return newQGraphicsLineItem(C.QGraphicsLineItem_new5(line.cPointer(), parent.cPointer()))
}

// NewQGraphicsLineItem6 constructs a new QGraphicsLineItem object.
func NewQGraphicsLineItem6(x1 float64, y1 float64, x2 float64, y2 float64, parent *QGraphicsItem) *QGraphicsLineItem {

	return newQGraphicsLineItem(C.QGraphicsLineItem_new6((C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2), parent.cPointer()))
}

func (this *QGraphicsLineItem) Pen() *QPen {
	_goptr := newQPen(C.QGraphicsLineItem_pen(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) SetPen(pen *QPen) {
	C.QGraphicsLineItem_setPen(this.h, pen.cPointer())
}

func (this *QGraphicsLineItem) Line() *QLineF {
	_goptr := newQLineF(C.QGraphicsLineItem_line(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) SetLine(line *QLineF) {
	C.QGraphicsLineItem_setLine(this.h, line.cPointer())
}

func (this *QGraphicsLineItem) SetLine2(x1 float64, y1 float64, x2 float64, y2 float64) {
	C.QGraphicsLineItem_setLine2(this.h, (C.double)(x1), (C.double)(y1), (C.double)(x2), (C.double)(y2))
}

func (this *QGraphicsLineItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsLineItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsLineItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsLineItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsLineItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsLineItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsLineItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsLineItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsLineItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsLineItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsLineItem) Type() int {
	return (int)(C.QGraphicsLineItem_type(this.h))
}

// UpdateMicroFocus can only be called from a QGraphicsLineItem that was directly constructed.
func (this *QGraphicsLineItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLineItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsLineItem that was directly constructed.
func (this *QGraphicsLineItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLineItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsLineItem that was directly constructed.
func (this *QGraphicsLineItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLineItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsLineItem that was directly constructed.
func (this *QGraphicsLineItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsLineItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsLineItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsLineItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsLineItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_boundingRect
func miqt_exec_callback_QGraphicsLineItem_boundingRect(self *C.QGraphicsLineItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsLineItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsLineItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_shape
func miqt_exec_callback_QGraphicsLineItem_shape(self *C.QGraphicsLineItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsLineItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsLineItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_contains
func miqt_exec_callback_QGraphicsLineItem_contains(self *C.QGraphicsLineItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsLineItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsLineItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsLineItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_paint
func miqt_exec_callback_QGraphicsLineItem_paint(self *C.QGraphicsLineItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsLineItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsLineItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsLineItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_isObscuredBy
func miqt_exec_callback_QGraphicsLineItem_isObscuredBy(self *C.QGraphicsLineItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsLineItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsLineItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_opaqueArea
func miqt_exec_callback_QGraphicsLineItem_opaqueArea(self *C.QGraphicsLineItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsLineItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsLineItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsLineItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_type
func miqt_exec_callback_QGraphicsLineItem_type(self *C.QGraphicsLineItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsLineItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsLineItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_supportsExtension
func miqt_exec_callback_QGraphicsLineItem_supportsExtension(self *C.QGraphicsLineItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsLineItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsLineItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsLineItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_setExtension
func miqt_exec_callback_QGraphicsLineItem_setExtension(self *C.QGraphicsLineItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsLineItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsLineItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsLineItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_extension
func miqt_exec_callback_QGraphicsLineItem_extension(self *C.QGraphicsLineItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsLineItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsLineItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsLineItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsLineItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_advance
func miqt_exec_callback_QGraphicsLineItem_advance(self *C.QGraphicsLineItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsLineItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsLineItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_collidesWithItem
func miqt_exec_callback_QGraphicsLineItem_collidesWithItem(self *C.QGraphicsLineItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsLineItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsLineItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_collidesWithPath
func miqt_exec_callback_QGraphicsLineItem_collidesWithPath(self *C.QGraphicsLineItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsLineItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsLineItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_sceneEventFilter
func miqt_exec_callback_QGraphicsLineItem_sceneEventFilter(self *C.QGraphicsLineItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsLineItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsLineItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsLineItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_sceneEvent
func miqt_exec_callback_QGraphicsLineItem_sceneEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsLineItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsLineItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_contextMenuEvent
func miqt_exec_callback_QGraphicsLineItem_contextMenuEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_dragEnterEvent
func miqt_exec_callback_QGraphicsLineItem_dragEnterEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsLineItem_dragLeaveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_dragMoveEvent
func miqt_exec_callback_QGraphicsLineItem_dragMoveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsLineItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_dropEvent
func miqt_exec_callback_QGraphicsLineItem_dropEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsLineItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_focusInEvent
func miqt_exec_callback_QGraphicsLineItem_focusInEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsLineItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_focusOutEvent
func miqt_exec_callback_QGraphicsLineItem_focusOutEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsLineItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsLineItem_hoverEnterEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsLineItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsLineItem_hoverMoveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsLineItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsLineItem_hoverLeaveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsLineItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_keyPressEvent
func miqt_exec_callback_QGraphicsLineItem_keyPressEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsLineItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsLineItem_keyReleaseEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_mousePressEvent
func miqt_exec_callback_QGraphicsLineItem_mousePressEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsLineItem_mouseMoveEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsLineItem_mouseReleaseEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsLineItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsLineItem_mouseDoubleClickEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsLineItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_wheelEvent
func miqt_exec_callback_QGraphicsLineItem_wheelEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsLineItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsLineItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsLineItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_inputMethodEvent
func miqt_exec_callback_QGraphicsLineItem_inputMethodEvent(self *C.QGraphicsLineItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsLineItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsLineItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsLineItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_inputMethodQuery
func miqt_exec_callback_QGraphicsLineItem_inputMethodQuery(self *C.QGraphicsLineItem, cb C.intptr_t, query C.int) *C.QVariant {
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

	_goptr := newQVariant(C.QGraphicsLineItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsLineItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsLineItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsLineItem_itemChange
func miqt_exec_callback_QGraphicsLineItem_itemChange(self *C.QGraphicsLineItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsLineItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsLineItem) Delete() {
	C.QGraphicsLineItem_delete(this.h)
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
	h *C.QGraphicsPixmapItem
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
func newQGraphicsPixmapItem(h *C.QGraphicsPixmapItem) *QGraphicsPixmapItem {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	C.QGraphicsPixmapItem_virtbase(h, &outptr_QGraphicsItem)

	return &QGraphicsPixmapItem{h: h,
		QGraphicsItem: newQGraphicsItem(outptr_QGraphicsItem)}
}

// UnsafeNewQGraphicsPixmapItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsPixmapItem(h unsafe.Pointer) *QGraphicsPixmapItem {
	return newQGraphicsPixmapItem((*C.QGraphicsPixmapItem)(h))
}

// NewQGraphicsPixmapItem constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem() *QGraphicsPixmapItem {

	return newQGraphicsPixmapItem(C.QGraphicsPixmapItem_new())
}

// NewQGraphicsPixmapItem2 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem2(pixmap *QPixmap) *QGraphicsPixmapItem {

	return newQGraphicsPixmapItem(C.QGraphicsPixmapItem_new2(pixmap.cPointer()))
}

// NewQGraphicsPixmapItem3 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem3(parent *QGraphicsItem) *QGraphicsPixmapItem {

	return newQGraphicsPixmapItem(C.QGraphicsPixmapItem_new3(parent.cPointer()))
}

// NewQGraphicsPixmapItem4 constructs a new QGraphicsPixmapItem object.
func NewQGraphicsPixmapItem4(pixmap *QPixmap, parent *QGraphicsItem) *QGraphicsPixmapItem {

	return newQGraphicsPixmapItem(C.QGraphicsPixmapItem_new4(pixmap.cPointer(), parent.cPointer()))
}

func (this *QGraphicsPixmapItem) Pixmap() *QPixmap {
	_goptr := newQPixmap(C.QGraphicsPixmapItem_pixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) SetPixmap(pixmap *QPixmap) {
	C.QGraphicsPixmapItem_setPixmap(this.h, pixmap.cPointer())
}

func (this *QGraphicsPixmapItem) TransformationMode() TransformationMode {
	return (TransformationMode)(C.QGraphicsPixmapItem_transformationMode(this.h))
}

func (this *QGraphicsPixmapItem) SetTransformationMode(mode TransformationMode) {
	C.QGraphicsPixmapItem_setTransformationMode(this.h, (C.int)(mode))
}

func (this *QGraphicsPixmapItem) Offset() *QPointF {
	_goptr := newQPointF(C.QGraphicsPixmapItem_offset(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) SetOffset(offset *QPointF) {
	C.QGraphicsPixmapItem_setOffset(this.h, offset.cPointer())
}

func (this *QGraphicsPixmapItem) SetOffset2(x float64, y float64) {
	C.QGraphicsPixmapItem_setOffset2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsPixmapItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsPixmapItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsPixmapItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsPixmapItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsPixmapItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPixmapItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsPixmapItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsPixmapItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsPixmapItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsPixmapItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsPixmapItem) Type() int {
	return (int)(C.QGraphicsPixmapItem_type(this.h))
}

func (this *QGraphicsPixmapItem) ShapeMode() QGraphicsPixmapItem__ShapeMode {
	return (QGraphicsPixmapItem__ShapeMode)(C.QGraphicsPixmapItem_shapeMode(this.h))
}

func (this *QGraphicsPixmapItem) SetShapeMode(mode QGraphicsPixmapItem__ShapeMode) {
	C.QGraphicsPixmapItem_setShapeMode(this.h, (C.int)(mode))
}

// UpdateMicroFocus can only be called from a QGraphicsPixmapItem that was directly constructed.
func (this *QGraphicsPixmapItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPixmapItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsPixmapItem that was directly constructed.
func (this *QGraphicsPixmapItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPixmapItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsPixmapItem that was directly constructed.
func (this *QGraphicsPixmapItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPixmapItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsPixmapItem that was directly constructed.
func (this *QGraphicsPixmapItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsPixmapItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsPixmapItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsPixmapItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsPixmapItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_boundingRect
func miqt_exec_callback_QGraphicsPixmapItem_boundingRect(self *C.QGraphicsPixmapItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsPixmapItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsPixmapItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_shape
func miqt_exec_callback_QGraphicsPixmapItem_shape(self *C.QGraphicsPixmapItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsPixmapItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsPixmapItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_contains
func miqt_exec_callback_QGraphicsPixmapItem_contains(self *C.QGraphicsPixmapItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsPixmapItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsPixmapItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsPixmapItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_paint
func miqt_exec_callback_QGraphicsPixmapItem_paint(self *C.QGraphicsPixmapItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsPixmapItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsPixmapItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsPixmapItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_isObscuredBy
func miqt_exec_callback_QGraphicsPixmapItem_isObscuredBy(self *C.QGraphicsPixmapItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsPixmapItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsPixmapItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_opaqueArea
func miqt_exec_callback_QGraphicsPixmapItem_opaqueArea(self *C.QGraphicsPixmapItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsPixmapItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsPixmapItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsPixmapItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_type
func miqt_exec_callback_QGraphicsPixmapItem_type(self *C.QGraphicsPixmapItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsPixmapItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsPixmapItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_supportsExtension
func miqt_exec_callback_QGraphicsPixmapItem_supportsExtension(self *C.QGraphicsPixmapItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsPixmapItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsPixmapItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsPixmapItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_setExtension
func miqt_exec_callback_QGraphicsPixmapItem_setExtension(self *C.QGraphicsPixmapItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsPixmapItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsPixmapItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsPixmapItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_extension
func miqt_exec_callback_QGraphicsPixmapItem_extension(self *C.QGraphicsPixmapItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsPixmapItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsPixmapItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsPixmapItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsPixmapItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_advance
func miqt_exec_callback_QGraphicsPixmapItem_advance(self *C.QGraphicsPixmapItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPixmapItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsPixmapItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_collidesWithItem
func miqt_exec_callback_QGraphicsPixmapItem_collidesWithItem(self *C.QGraphicsPixmapItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsPixmapItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsPixmapItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_collidesWithPath
func miqt_exec_callback_QGraphicsPixmapItem_collidesWithPath(self *C.QGraphicsPixmapItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsPixmapItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsPixmapItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_sceneEventFilter
func miqt_exec_callback_QGraphicsPixmapItem_sceneEventFilter(self *C.QGraphicsPixmapItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsPixmapItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsPixmapItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsPixmapItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_sceneEvent
func miqt_exec_callback_QGraphicsPixmapItem_sceneEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsPixmapItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsPixmapItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_contextMenuEvent
func miqt_exec_callback_QGraphicsPixmapItem_contextMenuEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_dragEnterEvent
func miqt_exec_callback_QGraphicsPixmapItem_dragEnterEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsPixmapItem_dragLeaveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_dragMoveEvent
func miqt_exec_callback_QGraphicsPixmapItem_dragMoveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsPixmapItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_dropEvent
func miqt_exec_callback_QGraphicsPixmapItem_dropEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsPixmapItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_focusInEvent
func miqt_exec_callback_QGraphicsPixmapItem_focusInEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsPixmapItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_focusOutEvent
func miqt_exec_callback_QGraphicsPixmapItem_focusOutEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPixmapItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsPixmapItem_hoverEnterEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPixmapItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsPixmapItem_hoverMoveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsPixmapItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsPixmapItem_hoverLeaveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsPixmapItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_keyPressEvent
func miqt_exec_callback_QGraphicsPixmapItem_keyPressEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsPixmapItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsPixmapItem_keyReleaseEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_mousePressEvent
func miqt_exec_callback_QGraphicsPixmapItem_mousePressEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsPixmapItem_mouseMoveEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsPixmapItem_mouseReleaseEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsPixmapItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsPixmapItem_mouseDoubleClickEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsPixmapItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_wheelEvent
func miqt_exec_callback_QGraphicsPixmapItem_wheelEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsPixmapItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsPixmapItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsPixmapItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_inputMethodEvent
func miqt_exec_callback_QGraphicsPixmapItem_inputMethodEvent(self *C.QGraphicsPixmapItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsPixmapItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsPixmapItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsPixmapItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_inputMethodQuery
func miqt_exec_callback_QGraphicsPixmapItem_inputMethodQuery(self *C.QGraphicsPixmapItem, cb C.intptr_t, query C.int) *C.QVariant {
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

	_goptr := newQVariant(C.QGraphicsPixmapItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsPixmapItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsPixmapItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsPixmapItem_itemChange
func miqt_exec_callback_QGraphicsPixmapItem_itemChange(self *C.QGraphicsPixmapItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsPixmapItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsPixmapItem) Delete() {
	C.QGraphicsPixmapItem_delete(this.h)
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
	h *C.QGraphicsTextItem
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
func newQGraphicsTextItem(h *C.QGraphicsTextItem) *QGraphicsTextItem {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	C.QGraphicsTextItem_virtbase(h, &outptr_QGraphicsObject)

	return &QGraphicsTextItem{h: h,
		QGraphicsObject: newQGraphicsObject(outptr_QGraphicsObject)}
}

// UnsafeNewQGraphicsTextItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsTextItem(h unsafe.Pointer) *QGraphicsTextItem {
	return newQGraphicsTextItem((*C.QGraphicsTextItem)(h))
}

// NewQGraphicsTextItem constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem() *QGraphicsTextItem {

	return newQGraphicsTextItem(C.QGraphicsTextItem_new())
}

// NewQGraphicsTextItem2 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem2(text string) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQGraphicsTextItem(C.QGraphicsTextItem_new2(text_ms))
}

// NewQGraphicsTextItem3 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem3(parent *QGraphicsItem) *QGraphicsTextItem {

	return newQGraphicsTextItem(C.QGraphicsTextItem_new3(parent.cPointer()))
}

// NewQGraphicsTextItem4 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem4(text string, parent *QGraphicsItem) *QGraphicsTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQGraphicsTextItem(C.QGraphicsTextItem_new4(text_ms, parent.cPointer()))
}

func (this *QGraphicsTextItem) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsTextItem_metaObject(this.h))
}

func (this *QGraphicsTextItem) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsTextItem_metacast(this.h, param1_Cstring))
}

func QGraphicsTextItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTextItem) ToHtml() string {
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_toHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTextItem) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QGraphicsTextItem_setHtml(this.h, html_ms)
}

func (this *QGraphicsTextItem) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_toPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTextItem) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QGraphicsTextItem_setPlainText(this.h, text_ms)
}

func (this *QGraphicsTextItem) Font() *QFont {
	_goptr := newQFont(C.QGraphicsTextItem_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) SetFont(font *QFont) {
	C.QGraphicsTextItem_setFont(this.h, font.cPointer())
}

func (this *QGraphicsTextItem) SetDefaultTextColor(c *QColor) {
	C.QGraphicsTextItem_setDefaultTextColor(this.h, c.cPointer())
}

func (this *QGraphicsTextItem) DefaultTextColor() *QColor {
	_goptr := newQColor(C.QGraphicsTextItem_defaultTextColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsTextItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsTextItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsTextItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsTextItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsTextItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsTextItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsTextItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsTextItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsTextItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) Type() int {
	return (int)(C.QGraphicsTextItem_type(this.h))
}

func (this *QGraphicsTextItem) SetTextWidth(width float64) {
	C.QGraphicsTextItem_setTextWidth(this.h, (C.double)(width))
}

func (this *QGraphicsTextItem) TextWidth() float64 {
	return (float64)(C.QGraphicsTextItem_textWidth(this.h))
}

func (this *QGraphicsTextItem) AdjustSize() {
	C.QGraphicsTextItem_adjustSize(this.h)
}

func (this *QGraphicsTextItem) SetDocument(document *QTextDocument) {
	C.QGraphicsTextItem_setDocument(this.h, document.cPointer())
}

func (this *QGraphicsTextItem) Document() *QTextDocument {
	return newQTextDocument(C.QGraphicsTextItem_document(this.h))
}

func (this *QGraphicsTextItem) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QGraphicsTextItem_setTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsTextItem) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QGraphicsTextItem_textInteractionFlags(this.h))
}

func (this *QGraphicsTextItem) SetTabChangesFocus(b bool) {
	C.QGraphicsTextItem_setTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QGraphicsTextItem) TabChangesFocus() bool {
	return (bool)(C.QGraphicsTextItem_tabChangesFocus(this.h))
}

func (this *QGraphicsTextItem) SetOpenExternalLinks(open bool) {
	C.QGraphicsTextItem_setOpenExternalLinks(this.h, (C.bool)(open))
}

func (this *QGraphicsTextItem) OpenExternalLinks() bool {
	return (bool)(C.QGraphicsTextItem_openExternalLinks(this.h))
}

func (this *QGraphicsTextItem) SetTextCursor(cursor *QTextCursor) {
	C.QGraphicsTextItem_setTextCursor(this.h, cursor.cPointer())
}

func (this *QGraphicsTextItem) TextCursor() *QTextCursor {
	_goptr := newQTextCursor(C.QGraphicsTextItem_textCursor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsTextItem) LinkActivated(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QGraphicsTextItem_linkActivated(this.h, param1_ms)
}
func (this *QGraphicsTextItem) OnLinkActivated(slot func(param1 string)) {
	C.QGraphicsTextItem_connect_linkActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_linkActivated
func miqt_exec_callback_QGraphicsTextItem_linkActivated(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QGraphicsTextItem_linkHovered(this.h, param1_ms)
}
func (this *QGraphicsTextItem) OnLinkHovered(slot func(param1 string)) {
	C.QGraphicsTextItem_connect_linkHovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTextItem_linkHovered
func miqt_exec_callback_QGraphicsTextItem_linkHovered(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsTextItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTextItem_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsTextItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsTextItem_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsTextItem_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsTextItem_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsTextItem_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AddToIndex can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsTextItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsTextItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsTextItem that was directly constructed.
func (this *QGraphicsTextItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsTextItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsTextItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsTextItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsTextItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_boundingRect
func miqt_exec_callback_QGraphicsTextItem_boundingRect(self *C.QGraphicsTextItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsTextItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsTextItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_shape
func miqt_exec_callback_QGraphicsTextItem_shape(self *C.QGraphicsTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsTextItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsTextItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_contains
func miqt_exec_callback_QGraphicsTextItem_contains(self *C.QGraphicsTextItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsTextItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsTextItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsTextItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_paint
func miqt_exec_callback_QGraphicsTextItem_paint(self *C.QGraphicsTextItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsTextItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsTextItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsTextItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_isObscuredBy
func miqt_exec_callback_QGraphicsTextItem_isObscuredBy(self *C.QGraphicsTextItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsTextItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsTextItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_opaqueArea
func miqt_exec_callback_QGraphicsTextItem_opaqueArea(self *C.QGraphicsTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsTextItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsTextItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsTextItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_type
func miqt_exec_callback_QGraphicsTextItem_type(self *C.QGraphicsTextItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsTextItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsTextItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_sceneEvent
func miqt_exec_callback_QGraphicsTextItem_sceneEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_mousePressEvent
func miqt_exec_callback_QGraphicsTextItem_mousePressEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsTextItem_mouseMoveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsTextItem_mouseReleaseEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsTextItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsTextItem_mouseDoubleClickEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsTextItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_contextMenuEvent
func miqt_exec_callback_QGraphicsTextItem_contextMenuEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsTextItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_keyPressEvent
func miqt_exec_callback_QGraphicsTextItem_keyPressEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsTextItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsTextItem_keyReleaseEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsTextItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_focusInEvent
func miqt_exec_callback_QGraphicsTextItem_focusInEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsTextItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_focusOutEvent
func miqt_exec_callback_QGraphicsTextItem_focusOutEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_dragEnterEvent
func miqt_exec_callback_QGraphicsTextItem_dragEnterEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsTextItem_dragLeaveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_dragMoveEvent
func miqt_exec_callback_QGraphicsTextItem_dragMoveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsTextItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_dropEvent
func miqt_exec_callback_QGraphicsTextItem_dropEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsTextItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_inputMethodEvent
func miqt_exec_callback_QGraphicsTextItem_inputMethodEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsTextItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsTextItem_hoverEnterEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsTextItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsTextItem_hoverMoveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsTextItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsTextItem_hoverLeaveEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsTextItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsTextItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_inputMethodQuery
func miqt_exec_callback_QGraphicsTextItem_inputMethodQuery(self *C.QGraphicsTextItem, cb C.intptr_t, query C.int) *C.QVariant {
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

	return (bool)(C.QGraphicsTextItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsTextItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsTextItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_supportsExtension
func miqt_exec_callback_QGraphicsTextItem_supportsExtension(self *C.QGraphicsTextItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsTextItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsTextItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsTextItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_setExtension
func miqt_exec_callback_QGraphicsTextItem_setExtension(self *C.QGraphicsTextItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsTextItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsTextItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsTextItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_extension
func miqt_exec_callback_QGraphicsTextItem_extension(self *C.QGraphicsTextItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsTextItem) callVirtualBase_Event(ev *QEvent) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_event(unsafe.Pointer(this.h), ev.cPointer()))

}
func (this *QGraphicsTextItem) OnEvent(slot func(super func(ev *QEvent) bool, ev *QEvent) bool) {
	ok := C.QGraphicsTextItem_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_event
func miqt_exec_callback_QGraphicsTextItem_event(self *C.QGraphicsTextItem, cb C.intptr_t, ev *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *QEvent) bool, ev *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(ev)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsTextItem) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsTextItem_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_eventFilter
func miqt_exec_callback_QGraphicsTextItem_eventFilter(self *C.QGraphicsTextItem, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsTextItem_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_timerEvent
func miqt_exec_callback_QGraphicsTextItem_timerEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsTextItem_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_childEvent
func miqt_exec_callback_QGraphicsTextItem_childEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsTextItem_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_customEvent
func miqt_exec_callback_QGraphicsTextItem_customEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsTextItem_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsTextItem) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsTextItem_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_connectNotify
func miqt_exec_callback_QGraphicsTextItem_connectNotify(self *C.QGraphicsTextItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsTextItem_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsTextItem) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsTextItem_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_disconnectNotify
func miqt_exec_callback_QGraphicsTextItem_disconnectNotify(self *C.QGraphicsTextItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsTextItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsTextItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsTextItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_advance
func miqt_exec_callback_QGraphicsTextItem_advance(self *C.QGraphicsTextItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsTextItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsTextItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_collidesWithItem
func miqt_exec_callback_QGraphicsTextItem_collidesWithItem(self *C.QGraphicsTextItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsTextItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsTextItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_collidesWithPath
func miqt_exec_callback_QGraphicsTextItem_collidesWithPath(self *C.QGraphicsTextItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsTextItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsTextItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsTextItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_sceneEventFilter
func miqt_exec_callback_QGraphicsTextItem_sceneEventFilter(self *C.QGraphicsTextItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTextItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsTextItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTextItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsTextItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_wheelEvent
func miqt_exec_callback_QGraphicsTextItem_wheelEvent(self *C.QGraphicsTextItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsTextItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsTextItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsTextItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsTextItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTextItem_itemChange
func miqt_exec_callback_QGraphicsTextItem_itemChange(self *C.QGraphicsTextItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsTextItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsTextItem) Delete() {
	C.QGraphicsTextItem_delete(this.h)
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
	h *C.QGraphicsSimpleTextItem
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
func newQGraphicsSimpleTextItem(h *C.QGraphicsSimpleTextItem) *QGraphicsSimpleTextItem {
	if h == nil {
		return nil
	}
	var outptr_QAbstractGraphicsShapeItem *C.QAbstractGraphicsShapeItem = nil
	C.QGraphicsSimpleTextItem_virtbase(h, &outptr_QAbstractGraphicsShapeItem)

	return &QGraphicsSimpleTextItem{h: h,
		QAbstractGraphicsShapeItem: newQAbstractGraphicsShapeItem(outptr_QAbstractGraphicsShapeItem)}
}

// UnsafeNewQGraphicsSimpleTextItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSimpleTextItem(h unsafe.Pointer) *QGraphicsSimpleTextItem {
	return newQGraphicsSimpleTextItem((*C.QGraphicsSimpleTextItem)(h))
}

// NewQGraphicsSimpleTextItem constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem() *QGraphicsSimpleTextItem {

	return newQGraphicsSimpleTextItem(C.QGraphicsSimpleTextItem_new())
}

// NewQGraphicsSimpleTextItem2 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem2(text string) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQGraphicsSimpleTextItem(C.QGraphicsSimpleTextItem_new2(text_ms))
}

// NewQGraphicsSimpleTextItem3 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem3(parent *QGraphicsItem) *QGraphicsSimpleTextItem {

	return newQGraphicsSimpleTextItem(C.QGraphicsSimpleTextItem_new3(parent.cPointer()))
}

// NewQGraphicsSimpleTextItem4 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem4(text string, parent *QGraphicsItem) *QGraphicsSimpleTextItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQGraphicsSimpleTextItem(C.QGraphicsSimpleTextItem_new4(text_ms, parent.cPointer()))
}

func (this *QGraphicsSimpleTextItem) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QGraphicsSimpleTextItem_setText(this.h, text_ms)
}

func (this *QGraphicsSimpleTextItem) Text() string {
	var _ms C.struct_miqt_string = C.QGraphicsSimpleTextItem_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsSimpleTextItem) SetFont(font *QFont) {
	C.QGraphicsSimpleTextItem_setFont(this.h, font.cPointer())
}

func (this *QGraphicsSimpleTextItem) Font() *QFont {
	_goptr := newQFont(C.QGraphicsSimpleTextItem_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsSimpleTextItem_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) Shape() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsSimpleTextItem_shape(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) Contains(point *QPointF) bool {
	return (bool)(C.QGraphicsSimpleTextItem_contains(this.h, point.cPointer()))
}

func (this *QGraphicsSimpleTextItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsSimpleTextItem_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsSimpleTextItem) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsSimpleTextItem_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsSimpleTextItem) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsSimpleTextItem_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSimpleTextItem) Type() int {
	return (int)(C.QGraphicsSimpleTextItem_type(this.h))
}

// UpdateMicroFocus can only be called from a QGraphicsSimpleTextItem that was directly constructed.
func (this *QGraphicsSimpleTextItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsSimpleTextItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsSimpleTextItem that was directly constructed.
func (this *QGraphicsSimpleTextItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsSimpleTextItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsSimpleTextItem that was directly constructed.
func (this *QGraphicsSimpleTextItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsSimpleTextItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsSimpleTextItem that was directly constructed.
func (this *QGraphicsSimpleTextItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsSimpleTextItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsSimpleTextItem_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_boundingRect
func miqt_exec_callback_QGraphicsSimpleTextItem_boundingRect(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsSimpleTextItem_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_shape
func miqt_exec_callback_QGraphicsSimpleTextItem_shape(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsSimpleTextItem) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_contains
func miqt_exec_callback_QGraphicsSimpleTextItem_contains(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsSimpleTextItem_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_paint
func miqt_exec_callback_QGraphicsSimpleTextItem_paint(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsSimpleTextItem) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_isObscuredBy
func miqt_exec_callback_QGraphicsSimpleTextItem_isObscuredBy(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsSimpleTextItem_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_opaqueArea
func miqt_exec_callback_QGraphicsSimpleTextItem_opaqueArea(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsSimpleTextItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsSimpleTextItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_type
func miqt_exec_callback_QGraphicsSimpleTextItem_type(self *C.QGraphicsSimpleTextItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsSimpleTextItem) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_supportsExtension
func miqt_exec_callback_QGraphicsSimpleTextItem_supportsExtension(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsSimpleTextItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_setExtension
func miqt_exec_callback_QGraphicsSimpleTextItem_setExtension(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsSimpleTextItem_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_extension
func miqt_exec_callback_QGraphicsSimpleTextItem_extension(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsSimpleTextItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsSimpleTextItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_advance
func miqt_exec_callback_QGraphicsSimpleTextItem_advance(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsSimpleTextItem) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithItem
func miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithItem(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsSimpleTextItem) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithPath
func miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithPath(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsSimpleTextItem) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_sceneEventFilter
func miqt_exec_callback_QGraphicsSimpleTextItem_sceneEventFilter(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsSimpleTextItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsSimpleTextItem) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_sceneEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_sceneEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_contextMenuEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_contextMenuEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_dragEnterEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_dragEnterEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_dragLeaveEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_dragMoveEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_dragMoveEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_dropEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_dropEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_focusInEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_focusInEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_focusOutEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_focusOutEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_hoverEnterEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_hoverMoveEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_hoverLeaveEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_keyPressEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_keyPressEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_keyReleaseEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_mousePressEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_mousePressEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_mouseMoveEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_mouseReleaseEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_mouseDoubleClickEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_wheelEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_wheelEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsSimpleTextItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsSimpleTextItem) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodEvent
func miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodEvent(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsSimpleTextItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodQuery
func miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodQuery(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsSimpleTextItem) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsSimpleTextItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSimpleTextItem) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsSimpleTextItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSimpleTextItem_itemChange
func miqt_exec_callback_QGraphicsSimpleTextItem_itemChange(self *C.QGraphicsSimpleTextItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsSimpleTextItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsSimpleTextItem) Delete() {
	C.QGraphicsSimpleTextItem_delete(this.h)
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
	h *C.QGraphicsItemGroup
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
func newQGraphicsItemGroup(h *C.QGraphicsItemGroup) *QGraphicsItemGroup {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	C.QGraphicsItemGroup_virtbase(h, &outptr_QGraphicsItem)

	return &QGraphicsItemGroup{h: h,
		QGraphicsItem: newQGraphicsItem(outptr_QGraphicsItem)}
}

// UnsafeNewQGraphicsItemGroup constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsItemGroup(h unsafe.Pointer) *QGraphicsItemGroup {
	return newQGraphicsItemGroup((*C.QGraphicsItemGroup)(h))
}

// NewQGraphicsItemGroup constructs a new QGraphicsItemGroup object.
func NewQGraphicsItemGroup() *QGraphicsItemGroup {

	return newQGraphicsItemGroup(C.QGraphicsItemGroup_new())
}

// NewQGraphicsItemGroup2 constructs a new QGraphicsItemGroup object.
func NewQGraphicsItemGroup2(parent *QGraphicsItem) *QGraphicsItemGroup {

	return newQGraphicsItemGroup(C.QGraphicsItemGroup_new2(parent.cPointer()))
}

func (this *QGraphicsItemGroup) AddToGroup(item *QGraphicsItem) {
	C.QGraphicsItemGroup_addToGroup(this.h, item.cPointer())
}

func (this *QGraphicsItemGroup) RemoveFromGroup(item *QGraphicsItem) {
	C.QGraphicsItemGroup_removeFromGroup(this.h, item.cPointer())
}

func (this *QGraphicsItemGroup) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsItemGroup_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemGroup) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsItemGroup_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsItemGroup) IsObscuredBy(item *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItemGroup_isObscuredBy(this.h, item.cPointer()))
}

func (this *QGraphicsItemGroup) OpaqueArea() *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsItemGroup_opaqueArea(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemGroup) Type() int {
	return (int)(C.QGraphicsItemGroup_type(this.h))
}

// UpdateMicroFocus can only be called from a QGraphicsItemGroup that was directly constructed.
func (this *QGraphicsItemGroup) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItemGroup_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddToIndex can only be called from a QGraphicsItemGroup that was directly constructed.
func (this *QGraphicsItemGroup) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItemGroup_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsItemGroup that was directly constructed.
func (this *QGraphicsItemGroup) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItemGroup_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsItemGroup that was directly constructed.
func (this *QGraphicsItemGroup) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsItemGroup_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsItemGroup) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsItemGroup_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsItemGroup_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_boundingRect
func miqt_exec_callback_QGraphicsItemGroup_boundingRect(self *C.QGraphicsItemGroup, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsItemGroup_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsItemGroup) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsItemGroup_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_paint
func miqt_exec_callback_QGraphicsItemGroup_paint(self *C.QGraphicsItemGroup, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsItemGroup) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsItemGroup) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsItemGroup_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_isObscuredBy
func miqt_exec_callback_QGraphicsItemGroup_isObscuredBy(self *C.QGraphicsItemGroup, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsItemGroup_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsItemGroup_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_opaqueArea
func miqt_exec_callback_QGraphicsItemGroup_opaqueArea(self *C.QGraphicsItemGroup, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_Type() int {

	return (int)(C.QGraphicsItemGroup_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsItemGroup) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsItemGroup_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_type
func miqt_exec_callback_QGraphicsItemGroup_type(self *C.QGraphicsItemGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_Advance(phase int) {

	C.QGraphicsItemGroup_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsItemGroup) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsItemGroup_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_advance
func miqt_exec_callback_QGraphicsItemGroup_advance(self *C.QGraphicsItemGroup, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsItemGroup_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsItemGroup_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_shape
func miqt_exec_callback_QGraphicsItemGroup_shape(self *C.QGraphicsItemGroup, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsItemGroup) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsItemGroup_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_contains
func miqt_exec_callback_QGraphicsItemGroup_contains(self *C.QGraphicsItemGroup, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsItemGroup) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsItemGroup_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_collidesWithItem
func miqt_exec_callback_QGraphicsItemGroup_collidesWithItem(self *C.QGraphicsItemGroup, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsItemGroup) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsItemGroup_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_collidesWithPath
func miqt_exec_callback_QGraphicsItemGroup_collidesWithPath(self *C.QGraphicsItemGroup, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsItemGroup) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsItemGroup_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_sceneEventFilter
func miqt_exec_callback_QGraphicsItemGroup_sceneEventFilter(self *C.QGraphicsItemGroup, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsItemGroup) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsItemGroup_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_sceneEvent
func miqt_exec_callback_QGraphicsItemGroup_sceneEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemGroup) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsItemGroup_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_contextMenuEvent
func miqt_exec_callback_QGraphicsItemGroup_contextMenuEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_dragEnterEvent
func miqt_exec_callback_QGraphicsItemGroup_dragEnterEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_dragLeaveEvent
func miqt_exec_callback_QGraphicsItemGroup_dragLeaveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_dragMoveEvent
func miqt_exec_callback_QGraphicsItemGroup_dragMoveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsItemGroup_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_dropEvent
func miqt_exec_callback_QGraphicsItemGroup_dropEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsItemGroup_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_focusInEvent
func miqt_exec_callback_QGraphicsItemGroup_focusInEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsItemGroup_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_focusOutEvent
func miqt_exec_callback_QGraphicsItemGroup_focusOutEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItemGroup_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_hoverEnterEvent
func miqt_exec_callback_QGraphicsItemGroup_hoverEnterEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItemGroup_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_hoverMoveEvent
func miqt_exec_callback_QGraphicsItemGroup_hoverMoveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsItemGroup_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_hoverLeaveEvent
func miqt_exec_callback_QGraphicsItemGroup_hoverLeaveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsItemGroup_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_keyPressEvent
func miqt_exec_callback_QGraphicsItemGroup_keyPressEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsItemGroup_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_keyReleaseEvent
func miqt_exec_callback_QGraphicsItemGroup_keyReleaseEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_mousePressEvent
func miqt_exec_callback_QGraphicsItemGroup_mousePressEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_mouseMoveEvent
func miqt_exec_callback_QGraphicsItemGroup_mouseMoveEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_mouseReleaseEvent
func miqt_exec_callback_QGraphicsItemGroup_mouseReleaseEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsItemGroup_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsItemGroup_mouseDoubleClickEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsItemGroup_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_wheelEvent
func miqt_exec_callback_QGraphicsItemGroup_wheelEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsItemGroup_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemGroup) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsItemGroup_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_inputMethodEvent
func miqt_exec_callback_QGraphicsItemGroup_inputMethodEvent(self *C.QGraphicsItemGroup, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsItemGroup) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsItemGroup_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsItemGroup_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_inputMethodQuery
func miqt_exec_callback_QGraphicsItemGroup_inputMethodQuery(self *C.QGraphicsItemGroup, cb C.intptr_t, query C.int) *C.QVariant {
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

	_goptr := newQVariant(C.QGraphicsItemGroup_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsItemGroup_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_itemChange
func miqt_exec_callback_QGraphicsItemGroup_itemChange(self *C.QGraphicsItemGroup, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsItemGroup) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsItemGroup_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsItemGroup) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsItemGroup_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_supportsExtension
func miqt_exec_callback_QGraphicsItemGroup_supportsExtension(self *C.QGraphicsItemGroup, cb C.intptr_t, extension C.int) C.bool {
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

	C.QGraphicsItemGroup_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsItemGroup) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsItemGroup_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_setExtension
func miqt_exec_callback_QGraphicsItemGroup_setExtension(self *C.QGraphicsItemGroup, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsItemGroup) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsItemGroup_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsItemGroup) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsItemGroup_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemGroup_extension
func miqt_exec_callback_QGraphicsItemGroup_extension(self *C.QGraphicsItemGroup, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsItemGroup{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsItemGroup) Delete() {
	C.QGraphicsItemGroup_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsItemGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsItemGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

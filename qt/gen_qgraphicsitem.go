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

type QGraphicsItem__GraphicsItemFlag int

const (
	QGraphicsItem__GraphicsItemFlag__ItemIsMovable                        QGraphicsItem__GraphicsItemFlag = 1
	QGraphicsItem__GraphicsItemFlag__ItemIsSelectable                     QGraphicsItem__GraphicsItemFlag = 2
	QGraphicsItem__GraphicsItemFlag__ItemIsFocusable                      QGraphicsItem__GraphicsItemFlag = 4
	QGraphicsItem__GraphicsItemFlag__ItemClipsToShape                     QGraphicsItem__GraphicsItemFlag = 8
	QGraphicsItem__GraphicsItemFlag__ItemClipsChildrenToShape             QGraphicsItem__GraphicsItemFlag = 16
	QGraphicsItem__GraphicsItemFlag__ItemIgnoresTransformations           QGraphicsItem__GraphicsItemFlag = 32
	QGraphicsItem__GraphicsItemFlag__ItemIgnoresParentOpacity             QGraphicsItem__GraphicsItemFlag = 64
	QGraphicsItem__GraphicsItemFlag__ItemDoesntPropagateOpacityToChildren QGraphicsItem__GraphicsItemFlag = 128
	QGraphicsItem__GraphicsItemFlag__ItemStacksBehindParent               QGraphicsItem__GraphicsItemFlag = 256
	QGraphicsItem__GraphicsItemFlag__ItemUsesExtendedStyleOption          QGraphicsItem__GraphicsItemFlag = 512
	QGraphicsItem__GraphicsItemFlag__ItemHasNoContents                    QGraphicsItem__GraphicsItemFlag = 1024
	QGraphicsItem__GraphicsItemFlag__ItemSendsGeometryChanges             QGraphicsItem__GraphicsItemFlag = 2048
	QGraphicsItem__GraphicsItemFlag__ItemAcceptsInputMethod               QGraphicsItem__GraphicsItemFlag = 4096
	QGraphicsItem__GraphicsItemFlag__ItemNegativeZStacksBehindParent      QGraphicsItem__GraphicsItemFlag = 8192
	QGraphicsItem__GraphicsItemFlag__ItemIsPanel                          QGraphicsItem__GraphicsItemFlag = 16384
	QGraphicsItem__GraphicsItemFlag__ItemIsFocusScope                     QGraphicsItem__GraphicsItemFlag = 32768
	QGraphicsItem__GraphicsItemFlag__ItemSendsScenePositionChanges        QGraphicsItem__GraphicsItemFlag = 65536
	QGraphicsItem__GraphicsItemFlag__ItemStopsClickFocusPropagation       QGraphicsItem__GraphicsItemFlag = 131072
	QGraphicsItem__GraphicsItemFlag__ItemStopsFocusHandling               QGraphicsItem__GraphicsItemFlag = 262144
	QGraphicsItem__GraphicsItemFlag__ItemContainsChildrenInShape          QGraphicsItem__GraphicsItemFlag = 524288
)

type QGraphicsItem__GraphicsItemChange int

const (
	QGraphicsItem__GraphicsItemChange__ItemPositionChange                 QGraphicsItem__GraphicsItemChange = 0
	QGraphicsItem__GraphicsItemChange__ItemMatrixChange                   QGraphicsItem__GraphicsItemChange = 1
	QGraphicsItem__GraphicsItemChange__ItemVisibleChange                  QGraphicsItem__GraphicsItemChange = 2
	QGraphicsItem__GraphicsItemChange__ItemEnabledChange                  QGraphicsItem__GraphicsItemChange = 3
	QGraphicsItem__GraphicsItemChange__ItemSelectedChange                 QGraphicsItem__GraphicsItemChange = 4
	QGraphicsItem__GraphicsItemChange__ItemParentChange                   QGraphicsItem__GraphicsItemChange = 5
	QGraphicsItem__GraphicsItemChange__ItemChildAddedChange               QGraphicsItem__GraphicsItemChange = 6
	QGraphicsItem__GraphicsItemChange__ItemChildRemovedChange             QGraphicsItem__GraphicsItemChange = 7
	QGraphicsItem__GraphicsItemChange__ItemTransformChange                QGraphicsItem__GraphicsItemChange = 8
	QGraphicsItem__GraphicsItemChange__ItemPositionHasChanged             QGraphicsItem__GraphicsItemChange = 9
	QGraphicsItem__GraphicsItemChange__ItemTransformHasChanged            QGraphicsItem__GraphicsItemChange = 10
	QGraphicsItem__GraphicsItemChange__ItemSceneChange                    QGraphicsItem__GraphicsItemChange = 11
	QGraphicsItem__GraphicsItemChange__ItemVisibleHasChanged              QGraphicsItem__GraphicsItemChange = 12
	QGraphicsItem__GraphicsItemChange__ItemEnabledHasChanged              QGraphicsItem__GraphicsItemChange = 13
	QGraphicsItem__GraphicsItemChange__ItemSelectedHasChanged             QGraphicsItem__GraphicsItemChange = 14
	QGraphicsItem__GraphicsItemChange__ItemParentHasChanged               QGraphicsItem__GraphicsItemChange = 15
	QGraphicsItem__GraphicsItemChange__ItemSceneHasChanged                QGraphicsItem__GraphicsItemChange = 16
	QGraphicsItem__GraphicsItemChange__ItemCursorChange                   QGraphicsItem__GraphicsItemChange = 17
	QGraphicsItem__GraphicsItemChange__ItemCursorHasChanged               QGraphicsItem__GraphicsItemChange = 18
	QGraphicsItem__GraphicsItemChange__ItemToolTipChange                  QGraphicsItem__GraphicsItemChange = 19
	QGraphicsItem__GraphicsItemChange__ItemToolTipHasChanged              QGraphicsItem__GraphicsItemChange = 20
	QGraphicsItem__GraphicsItemChange__ItemFlagsChange                    QGraphicsItem__GraphicsItemChange = 21
	QGraphicsItem__GraphicsItemChange__ItemFlagsHaveChanged               QGraphicsItem__GraphicsItemChange = 22
	QGraphicsItem__GraphicsItemChange__ItemZValueChange                   QGraphicsItem__GraphicsItemChange = 23
	QGraphicsItem__GraphicsItemChange__ItemZValueHasChanged               QGraphicsItem__GraphicsItemChange = 24
	QGraphicsItem__GraphicsItemChange__ItemOpacityChange                  QGraphicsItem__GraphicsItemChange = 25
	QGraphicsItem__GraphicsItemChange__ItemOpacityHasChanged              QGraphicsItem__GraphicsItemChange = 26
	QGraphicsItem__GraphicsItemChange__ItemScenePositionHasChanged        QGraphicsItem__GraphicsItemChange = 27
	QGraphicsItem__GraphicsItemChange__ItemRotationChange                 QGraphicsItem__GraphicsItemChange = 28
	QGraphicsItem__GraphicsItemChange__ItemRotationHasChanged             QGraphicsItem__GraphicsItemChange = 29
	QGraphicsItem__GraphicsItemChange__ItemScaleChange                    QGraphicsItem__GraphicsItemChange = 30
	QGraphicsItem__GraphicsItemChange__ItemScaleHasChanged                QGraphicsItem__GraphicsItemChange = 31
	QGraphicsItem__GraphicsItemChange__ItemTransformOriginPointChange     QGraphicsItem__GraphicsItemChange = 32
	QGraphicsItem__GraphicsItemChange__ItemTransformOriginPointHasChanged QGraphicsItem__GraphicsItemChange = 33
)

type QGraphicsItem__CacheMode int

const (
	QGraphicsItem__CacheMode__NoCache               QGraphicsItem__CacheMode = 0
	QGraphicsItem__CacheMode__ItemCoordinateCache   QGraphicsItem__CacheMode = 1
	QGraphicsItem__CacheMode__DeviceCoordinateCache QGraphicsItem__CacheMode = 2
)

type QGraphicsItem__PanelModality int

const (
	QGraphicsItem__PanelModality__NonModal   QGraphicsItem__PanelModality = 0
	QGraphicsItem__PanelModality__PanelModal QGraphicsItem__PanelModality = 1
	QGraphicsItem__PanelModality__SceneModal QGraphicsItem__PanelModality = 2
)

type QGraphicsItem__ int

const (
	QGraphicsItem____Type     QGraphicsItem__ = 1
	QGraphicsItem____UserType QGraphicsItem__ = 65536
)

type QGraphicsPathItem__ int

const (
	QGraphicsPathItem____Type QGraphicsPathItem__ = 2
)

type QGraphicsRectItem__ int

const (
	QGraphicsRectItem____Type QGraphicsRectItem__ = 3
)

type QGraphicsEllipseItem__ int

const (
	QGraphicsEllipseItem____Type QGraphicsEllipseItem__ = 4
)

type QGraphicsPolygonItem__ int

const (
	QGraphicsPolygonItem____Type QGraphicsPolygonItem__ = 5
)

type QGraphicsLineItem__ int

const (
	QGraphicsLineItem____Type QGraphicsLineItem__ = 6
)

type QGraphicsPixmapItem__ShapeMode int

const (
	QGraphicsPixmapItem__ShapeMode__MaskShape          QGraphicsPixmapItem__ShapeMode = 0
	QGraphicsPixmapItem__ShapeMode__BoundingRectShape  QGraphicsPixmapItem__ShapeMode = 1
	QGraphicsPixmapItem__ShapeMode__HeuristicMaskShape QGraphicsPixmapItem__ShapeMode = 2
)

type QGraphicsPixmapItem__ int

const (
	QGraphicsPixmapItem____Type QGraphicsPixmapItem__ = 7
)

type QGraphicsTextItem__ int

const (
	QGraphicsTextItem____Type QGraphicsTextItem__ = 8
)

type QGraphicsSimpleTextItem__ int

const (
	QGraphicsSimpleTextItem____Type QGraphicsSimpleTextItem__ = 9
)

type QGraphicsItemGroup__ int

const (
	QGraphicsItemGroup____Type QGraphicsItemGroup__ = 10
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
	return newQGraphicsScene_U(unsafe.Pointer(C.QGraphicsItem_Scene(this.h)))
}

func (this *QGraphicsItem) ParentItem() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsItem_ParentItem(this.h)))
}

func (this *QGraphicsItem) TopLevelItem() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsItem_TopLevelItem(this.h)))
}

func (this *QGraphicsItem) ParentObject() *QGraphicsObject {
	return newQGraphicsObject_U(unsafe.Pointer(C.QGraphicsItem_ParentObject(this.h)))
}

func (this *QGraphicsItem) ParentWidget() *QGraphicsWidget {
	return newQGraphicsWidget_U(unsafe.Pointer(C.QGraphicsItem_ParentWidget(this.h)))
}

func (this *QGraphicsItem) TopLevelWidget() *QGraphicsWidget {
	return newQGraphicsWidget_U(unsafe.Pointer(C.QGraphicsItem_TopLevelWidget(this.h)))
}

func (this *QGraphicsItem) Window() *QGraphicsWidget {
	return newQGraphicsWidget_U(unsafe.Pointer(C.QGraphicsItem_Window(this.h)))
}

func (this *QGraphicsItem) Panel() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsItem_Panel(this.h)))
}

func (this *QGraphicsItem) SetParentItem(parent *QGraphicsItem) {
	C.QGraphicsItem_SetParentItem(this.h, parent.cPointer())
}

func (this *QGraphicsItem) ChildItems() []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsItem_ChildItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
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
	return newQGraphicsObject_U(unsafe.Pointer(C.QGraphicsItem_ToGraphicsObject(this.h)))
}

func (this *QGraphicsItem) ToGraphicsObject2() *QGraphicsObject {
	return newQGraphicsObject_U(unsafe.Pointer(C.QGraphicsItem_ToGraphicsObject2(this.h)))
}

func (this *QGraphicsItem) Group() *QGraphicsItemGroup {
	return newQGraphicsItemGroup_U(unsafe.Pointer(C.QGraphicsItem_Group(this.h)))
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
	var _ms *C.struct_miqt_string = C.QGraphicsItem_ToolTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsItem) SetToolTip(toolTip string) {
	toolTip_ms := miqt_strdupg(toolTip)
	defer C.free(toolTip_ms)
	C.QGraphicsItem_SetToolTip(this.h, (*C.struct_miqt_string)(toolTip_ms))
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
	return newQGraphicsEffect_U(unsafe.Pointer(C.QGraphicsItem_GraphicsEffect(this.h)))
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
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsItem_FocusProxy(this.h)))
}

func (this *QGraphicsItem) SetFocusProxy(item *QGraphicsItem) {
	C.QGraphicsItem_SetFocusProxy(this.h, item.cPointer())
}

func (this *QGraphicsItem) FocusItem() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsItem_FocusItem(this.h)))
}

func (this *QGraphicsItem) FocusScopeItem() *QGraphicsItem {
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsItem_FocusScopeItem(this.h)))
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

func (this *QGraphicsItem) Matrix() *QMatrix {
	_ret := C.QGraphicsItem_Matrix(this.h)
	_goptr := newQMatrix(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SceneMatrix() *QMatrix {
	_ret := C.QGraphicsItem_SceneMatrix(this.h)
	_goptr := newQMatrix(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItem) SetMatrix(matrix *QMatrix) {
	C.QGraphicsItem_SetMatrix(this.h, matrix.cPointer())
}

func (this *QGraphicsItem) ResetMatrix() {
	C.QGraphicsItem_ResetMatrix(this.h)
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
	var _ma *C.struct_miqt_array = C.QGraphicsItem_Transformations(this.h)
	_ret := make([]*QGraphicsTransform, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsTransform)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsTransform_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsItem) SetTransformations(transformations []*QGraphicsTransform) {
	// For the C ABI, malloc a C array of raw pointers
	transformations_CArray := (*[0xffff]*C.QGraphicsTransform)(C.malloc(C.size_t(8 * len(transformations))))
	defer C.free(unsafe.Pointer(transformations_CArray))
	for i := range transformations {
		transformations_CArray[i] = transformations[i].cPointer()
	}
	transformations_ma := &C.struct_miqt_array{len: C.size_t(len(transformations)), data: unsafe.Pointer(transformations_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(transformations_ma))
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

func (this *QGraphicsItem) CollidesWithItem(other *QGraphicsItem) bool {
	return (bool)(C.QGraphicsItem_CollidesWithItem(this.h, other.cPointer()))
}

func (this *QGraphicsItem) CollidesWithPath(path *QPainterPath) bool {
	return (bool)(C.QGraphicsItem_CollidesWithPath(this.h, path.cPointer()))
}

func (this *QGraphicsItem) CollidingItems() []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsItem_CollidingItems(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
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
	return newQGraphicsItem_U(unsafe.Pointer(C.QGraphicsItem_CommonAncestorItem(this.h, other.cPointer())))
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

func (this *QGraphicsItem) SetMatrix2(matrix *QMatrix, combine bool) {
	C.QGraphicsItem_SetMatrix2(this.h, matrix.cPointer(), (C.bool)(combine))
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

func (this *QGraphicsItem) CollidesWithItem2(other *QGraphicsItem, mode ItemSelectionMode) bool {
	return (bool)(C.QGraphicsItem_CollidesWithItem2(this.h, other.cPointer(), (C.int)(mode)))
}

func (this *QGraphicsItem) CollidesWithPath2(path *QPainterPath, mode ItemSelectionMode) bool {
	return (bool)(C.QGraphicsItem_CollidesWithPath2(this.h, path.cPointer(), (C.int)(mode)))
}

func (this *QGraphicsItem) CollidingItems1(mode ItemSelectionMode) []*QGraphicsItem {
	var _ma *C.struct_miqt_array = C.QGraphicsItem_CollidingItems1(this.h, (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGraphicsItem) IsObscured1(rect *QRectF) bool {
	return (bool)(C.QGraphicsItem_IsObscured1(this.h, rect.cPointer()))
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

// Delete this object from C++ memory.
func (this *QGraphicsItem) Delete() {
	C.QGraphicsItem_Delete(this.h)
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
	return newQMetaObject_U(unsafe.Pointer(C.QGraphicsObject_MetaObject(this.h)))
}

func QGraphicsObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsObject_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsObject_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsObject_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	C.QGraphicsObject_connect_ParentChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_ParentChanged
func miqt_exec_callback_QGraphicsObject_ParentChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) OpacityChanged() {
	C.QGraphicsObject_OpacityChanged(this.h)
}
func (this *QGraphicsObject) OnOpacityChanged(slot func()) {
	C.QGraphicsObject_connect_OpacityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_OpacityChanged
func miqt_exec_callback_QGraphicsObject_OpacityChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) VisibleChanged() {
	C.QGraphicsObject_VisibleChanged(this.h)
}
func (this *QGraphicsObject) OnVisibleChanged(slot func()) {
	C.QGraphicsObject_connect_VisibleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_VisibleChanged
func miqt_exec_callback_QGraphicsObject_VisibleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) EnabledChanged() {
	C.QGraphicsObject_EnabledChanged(this.h)
}
func (this *QGraphicsObject) OnEnabledChanged(slot func()) {
	C.QGraphicsObject_connect_EnabledChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_EnabledChanged
func miqt_exec_callback_QGraphicsObject_EnabledChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) XChanged() {
	C.QGraphicsObject_XChanged(this.h)
}
func (this *QGraphicsObject) OnXChanged(slot func()) {
	C.QGraphicsObject_connect_XChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_XChanged
func miqt_exec_callback_QGraphicsObject_XChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) YChanged() {
	C.QGraphicsObject_YChanged(this.h)
}
func (this *QGraphicsObject) OnYChanged(slot func()) {
	C.QGraphicsObject_connect_YChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_YChanged
func miqt_exec_callback_QGraphicsObject_YChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ZChanged() {
	C.QGraphicsObject_ZChanged(this.h)
}
func (this *QGraphicsObject) OnZChanged(slot func()) {
	C.QGraphicsObject_connect_ZChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_ZChanged
func miqt_exec_callback_QGraphicsObject_ZChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) RotationChanged() {
	C.QGraphicsObject_RotationChanged(this.h)
}
func (this *QGraphicsObject) OnRotationChanged(slot func()) {
	C.QGraphicsObject_connect_RotationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_RotationChanged
func miqt_exec_callback_QGraphicsObject_RotationChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ScaleChanged() {
	C.QGraphicsObject_ScaleChanged(this.h)
}
func (this *QGraphicsObject) OnScaleChanged(slot func()) {
	C.QGraphicsObject_connect_ScaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_ScaleChanged
func miqt_exec_callback_QGraphicsObject_ScaleChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) ChildrenChanged() {
	C.QGraphicsObject_ChildrenChanged(this.h)
}
func (this *QGraphicsObject) OnChildrenChanged(slot func()) {
	C.QGraphicsObject_connect_ChildrenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_ChildrenChanged
func miqt_exec_callback_QGraphicsObject_ChildrenChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) WidthChanged() {
	C.QGraphicsObject_WidthChanged(this.h)
}
func (this *QGraphicsObject) OnWidthChanged(slot func()) {
	C.QGraphicsObject_connect_WidthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_WidthChanged
func miqt_exec_callback_QGraphicsObject_WidthChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsObject) HeightChanged() {
	C.QGraphicsObject_HeightChanged(this.h)
}
func (this *QGraphicsObject) OnHeightChanged(slot func()) {
	C.QGraphicsObject_connect_HeightChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsObject_HeightChanged
func miqt_exec_callback_QGraphicsObject_HeightChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
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
	var _ms *C.struct_miqt_string = C.QGraphicsObject_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsObject_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsObject_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsObject_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsObject_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsObject_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsObject) GrabGesture2(typeVal GestureType, flags GestureFlag) {
	C.QGraphicsObject_GrabGesture2(this.h, (C.int)(typeVal), (C.int)(flags))
}

// Delete this object from C++ memory.
func (this *QGraphicsObject) Delete() {
	C.QGraphicsObject_Delete(this.h)
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
	C.QAbstractGraphicsShapeItem_Delete(this.h)
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

func (this *QGraphicsPathItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsPathItem_Paint(this.h, painter.cPointer(), option.cPointer())
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

func (this *QGraphicsPathItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPathItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsPathItem) Delete() {
	C.QGraphicsPathItem_Delete(this.h)
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

func (this *QGraphicsRectItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsRectItem_Paint(this.h, painter.cPointer(), option.cPointer())
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

func (this *QGraphicsRectItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsRectItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsRectItem) Delete() {
	C.QGraphicsRectItem_Delete(this.h)
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

func (this *QGraphicsEllipseItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsEllipseItem_Paint(this.h, painter.cPointer(), option.cPointer())
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

func (this *QGraphicsEllipseItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsEllipseItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsEllipseItem) Delete() {
	C.QGraphicsEllipseItem_Delete(this.h)
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

func (this *QGraphicsPolygonItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsPolygonItem_Paint(this.h, painter.cPointer(), option.cPointer())
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

func (this *QGraphicsPolygonItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsPolygonItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsPolygonItem) Delete() {
	C.QGraphicsPolygonItem_Delete(this.h)
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

func (this *QGraphicsLineItem) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsLineItem_Paint(this.h, painter.cPointer(), option.cPointer())
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

func (this *QGraphicsLineItem) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsLineItem_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsLineItem) Delete() {
	C.QGraphicsLineItem_Delete(this.h)
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
	_ret := C.QGraphicsPixmapItem_Pixmap(this.h)
	_goptr := newQPixmap(_ret)
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

// Delete this object from C++ memory.
func (this *QGraphicsPixmapItem) Delete() {
	C.QGraphicsPixmapItem_Delete(this.h)
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QGraphicsTextItem_new2((*C.struct_miqt_string)(text_ms))
	return newQGraphicsTextItem(ret)
}

// NewQGraphicsTextItem3 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem3(parent *QGraphicsItem) *QGraphicsTextItem {
	ret := C.QGraphicsTextItem_new3(parent.cPointer())
	return newQGraphicsTextItem(ret)
}

// NewQGraphicsTextItem4 constructs a new QGraphicsTextItem object.
func NewQGraphicsTextItem4(text string, parent *QGraphicsItem) *QGraphicsTextItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QGraphicsTextItem_new4((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQGraphicsTextItem(ret)
}

func (this *QGraphicsTextItem) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QGraphicsTextItem_MetaObject(this.h)))
}

func QGraphicsTextItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsTextItem_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsTextItem) ToHtml() string {
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_ToHtml(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsTextItem) SetHtml(html string) {
	html_ms := miqt_strdupg(html)
	defer C.free(html_ms)
	C.QGraphicsTextItem_SetHtml(this.h, (*C.struct_miqt_string)(html_ms))
}

func (this *QGraphicsTextItem) ToPlainText() string {
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_ToPlainText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsTextItem) SetPlainText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QGraphicsTextItem_SetPlainText(this.h, (*C.struct_miqt_string)(text_ms))
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
	return newQTextDocument_U(unsafe.Pointer(C.QGraphicsTextItem_Document(this.h)))
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
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QGraphicsTextItem_LinkActivated(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QGraphicsTextItem) OnLinkActivated(slot func(param1 string)) {
	C.QGraphicsTextItem_connect_LinkActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsTextItem_LinkActivated
func miqt_exec_callback_QGraphicsTextItem_LinkActivated(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QGraphicsTextItem) LinkHovered(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QGraphicsTextItem_LinkHovered(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QGraphicsTextItem) OnLinkHovered(slot func(param1 string)) {
	C.QGraphicsTextItem_connect_LinkHovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QGraphicsTextItem_LinkHovered
func miqt_exec_callback_QGraphicsTextItem_LinkHovered(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QGraphicsTextItem_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsTextItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsTextItem_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsTextItem_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsTextItem_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsTextItem) Delete() {
	C.QGraphicsTextItem_Delete(this.h)
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QGraphicsSimpleTextItem_new2((*C.struct_miqt_string)(text_ms))
	return newQGraphicsSimpleTextItem(ret)
}

// NewQGraphicsSimpleTextItem3 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem3(parent *QGraphicsItem) *QGraphicsSimpleTextItem {
	ret := C.QGraphicsSimpleTextItem_new3(parent.cPointer())
	return newQGraphicsSimpleTextItem(ret)
}

// NewQGraphicsSimpleTextItem4 constructs a new QGraphicsSimpleTextItem object.
func NewQGraphicsSimpleTextItem4(text string, parent *QGraphicsItem) *QGraphicsSimpleTextItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QGraphicsSimpleTextItem_new4((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQGraphicsSimpleTextItem(ret)
}

func (this *QGraphicsSimpleTextItem) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QGraphicsSimpleTextItem_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QGraphicsSimpleTextItem) Text() string {
	var _ms *C.struct_miqt_string = C.QGraphicsSimpleTextItem_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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

// Delete this object from C++ memory.
func (this *QGraphicsSimpleTextItem) Delete() {
	C.QGraphicsSimpleTextItem_Delete(this.h)
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
	_ret := C.QGraphicsItemGroup_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemGroup) Paint(painter *QPainter, option *QStyleOptionGraphicsItem) {
	C.QGraphicsItemGroup_Paint(this.h, painter.cPointer(), option.cPointer())
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

func (this *QGraphicsItemGroup) Paint3(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsItemGroup_Paint3(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsItemGroup) Delete() {
	C.QGraphicsItemGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsItemGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsItemGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

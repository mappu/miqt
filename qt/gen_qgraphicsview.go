package qt

/*

#include "gen_qgraphicsview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsView__ViewportAnchor int

const (
	QGraphicsView__NoAnchor         QGraphicsView__ViewportAnchor = 0
	QGraphicsView__AnchorViewCenter QGraphicsView__ViewportAnchor = 1
	QGraphicsView__AnchorUnderMouse QGraphicsView__ViewportAnchor = 2
)

type QGraphicsView__CacheModeFlag int

const (
	QGraphicsView__CacheNone       QGraphicsView__CacheModeFlag = 0
	QGraphicsView__CacheBackground QGraphicsView__CacheModeFlag = 1
)

type QGraphicsView__DragMode int

const (
	QGraphicsView__NoDrag         QGraphicsView__DragMode = 0
	QGraphicsView__ScrollHandDrag QGraphicsView__DragMode = 1
	QGraphicsView__RubberBandDrag QGraphicsView__DragMode = 2
)

type QGraphicsView__ViewportUpdateMode int

const (
	QGraphicsView__FullViewportUpdate         QGraphicsView__ViewportUpdateMode = 0
	QGraphicsView__MinimalViewportUpdate      QGraphicsView__ViewportUpdateMode = 1
	QGraphicsView__SmartViewportUpdate        QGraphicsView__ViewportUpdateMode = 2
	QGraphicsView__NoViewportUpdate           QGraphicsView__ViewportUpdateMode = 3
	QGraphicsView__BoundingRectViewportUpdate QGraphicsView__ViewportUpdateMode = 4
)

type QGraphicsView__OptimizationFlag int

const (
	QGraphicsView__DontClipPainter           QGraphicsView__OptimizationFlag = 1
	QGraphicsView__DontSavePainterState      QGraphicsView__OptimizationFlag = 2
	QGraphicsView__DontAdjustForAntialiasing QGraphicsView__OptimizationFlag = 4
	QGraphicsView__IndirectPainting          QGraphicsView__OptimizationFlag = 8
)

type QGraphicsView struct {
	h *C.QGraphicsView
	*QAbstractScrollArea
}

func (this *QGraphicsView) cPointer() *C.QGraphicsView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsView constructs the type using only CGO pointers.
func newQGraphicsView(h *C.QGraphicsView) *QGraphicsView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QGraphicsView_virtbase(h, &outptr_QAbstractScrollArea)

	return &QGraphicsView{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQGraphicsView constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsView(h unsafe.Pointer) *QGraphicsView {
	return newQGraphicsView((*C.QGraphicsView)(h))
}

// NewQGraphicsView constructs a new QGraphicsView object.
func NewQGraphicsView(parent *QWidget) *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new(parent.cPointer()))
}

// NewQGraphicsView2 constructs a new QGraphicsView object.
func NewQGraphicsView2() *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new2())
}

// NewQGraphicsView3 constructs a new QGraphicsView object.
func NewQGraphicsView3(scene *QGraphicsScene) *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new3(scene.cPointer()))
}

// NewQGraphicsView4 constructs a new QGraphicsView object.
func NewQGraphicsView4(scene *QGraphicsScene, parent *QWidget) *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new4(scene.cPointer(), parent.cPointer()))
}

func (this *QGraphicsView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsView_metaObject(this.h))
}

func (this *QGraphicsView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsView_metacast(this.h, param1_Cstring))
}

func QGraphicsView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsView) SizeHint() *QSize {
	_goptr := newQSize(C.QGraphicsView_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) RenderHints() QPainter__RenderHint {
	return (QPainter__RenderHint)(C.QGraphicsView_renderHints(this.h))
}

func (this *QGraphicsView) SetRenderHint(hint QPainter__RenderHint) {
	C.QGraphicsView_setRenderHint(this.h, (C.int)(hint))
}

func (this *QGraphicsView) SetRenderHints(hints QPainter__RenderHint) {
	C.QGraphicsView_setRenderHints(this.h, (C.int)(hints))
}

func (this *QGraphicsView) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsView_alignment(this.h))
}

func (this *QGraphicsView) SetAlignment(alignment AlignmentFlag) {
	C.QGraphicsView_setAlignment(this.h, (C.int)(alignment))
}

func (this *QGraphicsView) TransformationAnchor() QGraphicsView__ViewportAnchor {
	return (QGraphicsView__ViewportAnchor)(C.QGraphicsView_transformationAnchor(this.h))
}

func (this *QGraphicsView) SetTransformationAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_setTransformationAnchor(this.h, (C.int)(anchor))
}

func (this *QGraphicsView) ResizeAnchor() QGraphicsView__ViewportAnchor {
	return (QGraphicsView__ViewportAnchor)(C.QGraphicsView_resizeAnchor(this.h))
}

func (this *QGraphicsView) SetResizeAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_setResizeAnchor(this.h, (C.int)(anchor))
}

func (this *QGraphicsView) ViewportUpdateMode() QGraphicsView__ViewportUpdateMode {
	return (QGraphicsView__ViewportUpdateMode)(C.QGraphicsView_viewportUpdateMode(this.h))
}

func (this *QGraphicsView) SetViewportUpdateMode(mode QGraphicsView__ViewportUpdateMode) {
	C.QGraphicsView_setViewportUpdateMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) OptimizationFlags() QGraphicsView__OptimizationFlag {
	return (QGraphicsView__OptimizationFlag)(C.QGraphicsView_optimizationFlags(this.h))
}

func (this *QGraphicsView) SetOptimizationFlag(flag QGraphicsView__OptimizationFlag) {
	C.QGraphicsView_setOptimizationFlag(this.h, (C.int)(flag))
}

func (this *QGraphicsView) SetOptimizationFlags(flags QGraphicsView__OptimizationFlag) {
	C.QGraphicsView_setOptimizationFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsView) DragMode() QGraphicsView__DragMode {
	return (QGraphicsView__DragMode)(C.QGraphicsView_dragMode(this.h))
}

func (this *QGraphicsView) SetDragMode(mode QGraphicsView__DragMode) {
	C.QGraphicsView_setDragMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) RubberBandSelectionMode() ItemSelectionMode {
	return (ItemSelectionMode)(C.QGraphicsView_rubberBandSelectionMode(this.h))
}

func (this *QGraphicsView) SetRubberBandSelectionMode(mode ItemSelectionMode) {
	C.QGraphicsView_setRubberBandSelectionMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) RubberBandRect() *QRect {
	_goptr := newQRect(C.QGraphicsView_rubberBandRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) CacheMode() QGraphicsView__CacheModeFlag {
	return (QGraphicsView__CacheModeFlag)(C.QGraphicsView_cacheMode(this.h))
}

func (this *QGraphicsView) SetCacheMode(mode QGraphicsView__CacheModeFlag) {
	C.QGraphicsView_setCacheMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) ResetCachedContent() {
	C.QGraphicsView_resetCachedContent(this.h)
}

func (this *QGraphicsView) IsInteractive() bool {
	return (bool)(C.QGraphicsView_isInteractive(this.h))
}

func (this *QGraphicsView) SetInteractive(allowed bool) {
	C.QGraphicsView_setInteractive(this.h, (C.bool)(allowed))
}

func (this *QGraphicsView) Scene() *QGraphicsScene {
	return newQGraphicsScene(C.QGraphicsView_scene(this.h))
}

func (this *QGraphicsView) SetScene(scene *QGraphicsScene) {
	C.QGraphicsView_setScene(this.h, scene.cPointer())
}

func (this *QGraphicsView) SceneRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsView_sceneRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetSceneRect(rect *QRectF) {
	C.QGraphicsView_setSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) SetSceneRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_setSceneRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) Matrix() *QMatrix {
	_goptr := newQMatrix(C.QGraphicsView_matrix(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetMatrix(matrix *QMatrix) {
	C.QGraphicsView_setMatrix(this.h, matrix.cPointer())
}

func (this *QGraphicsView) ResetMatrix() {
	C.QGraphicsView_resetMatrix(this.h)
}

func (this *QGraphicsView) Transform() *QTransform {
	_goptr := newQTransform(C.QGraphicsView_transform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) ViewportTransform() *QTransform {
	_goptr := newQTransform(C.QGraphicsView_viewportTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) IsTransformed() bool {
	return (bool)(C.QGraphicsView_isTransformed(this.h))
}

func (this *QGraphicsView) SetTransform(matrix *QTransform) {
	C.QGraphicsView_setTransform(this.h, matrix.cPointer())
}

func (this *QGraphicsView) ResetTransform() {
	C.QGraphicsView_resetTransform(this.h)
}

func (this *QGraphicsView) Rotate(angle float64) {
	C.QGraphicsView_rotate(this.h, (C.double)(angle))
}

func (this *QGraphicsView) Scale(sx float64, sy float64) {
	C.QGraphicsView_scale(this.h, (C.double)(sx), (C.double)(sy))
}

func (this *QGraphicsView) Shear(sh float64, sv float64) {
	C.QGraphicsView_shear(this.h, (C.double)(sh), (C.double)(sv))
}

func (this *QGraphicsView) Translate(dx float64, dy float64) {
	C.QGraphicsView_translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsView) CenterOn(pos *QPointF) {
	C.QGraphicsView_centerOn(this.h, pos.cPointer())
}

func (this *QGraphicsView) CenterOn2(x float64, y float64) {
	C.QGraphicsView_centerOn2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsView) CenterOnWithItem(item *QGraphicsItem) {
	C.QGraphicsView_centerOnWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) EnsureVisible(rect *QRectF) {
	C.QGraphicsView_ensureVisible(this.h, rect.cPointer())
}

func (this *QGraphicsView) EnsureVisible2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_ensureVisible2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) EnsureVisibleWithItem(item *QGraphicsItem) {
	C.QGraphicsView_ensureVisibleWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) FitInView(rect *QRectF) {
	C.QGraphicsView_fitInView(this.h, rect.cPointer())
}

func (this *QGraphicsView) FitInView2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_fitInView2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) FitInViewWithItem(item *QGraphicsItem) {
	C.QGraphicsView_fitInViewWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) Render(painter *QPainter) {
	C.QGraphicsView_render(this.h, painter.cPointer())
}

func (this *QGraphicsView) Items() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_items(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithPos(pos *QPoint) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_itemsWithPos(this.h, pos.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items2(x int, y int) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_items2(this.h, (C.int)(x), (C.int)(y))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithRect(rect *QRect) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_itemsWithRect(this.h, rect.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items3(x int, y int, w int, h int) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_items3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_itemsWithPath(this.h, path.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemAt(pos *QPoint) *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsView_itemAt(this.h, pos.cPointer()))
}

func (this *QGraphicsView) ItemAt2(x int, y int) *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsView_itemAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QGraphicsView) MapToScene(point *QPoint) *QPointF {
	_goptr := newQPointF(C.QGraphicsView_mapToScene(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapToSceneWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsView_mapToSceneWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromScene(point *QPointF) *QPoint {
	_goptr := newQPoint(C.QGraphicsView_mapFromScene(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromSceneWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsView_mapFromSceneWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapToScene2(x int, y int) *QPointF {
	_goptr := newQPointF(C.QGraphicsView_mapToScene2(this.h, (C.int)(x), (C.int)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromScene2(x float64, y float64) *QPoint {
	_goptr := newQPoint(C.QGraphicsView_mapFromScene2(this.h, (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) InputMethodQuery(query InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QGraphicsView_inputMethodQuery(this.h, (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) BackgroundBrush() *QBrush {
	_goptr := newQBrush(C.QGraphicsView_backgroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetBackgroundBrush(brush *QBrush) {
	C.QGraphicsView_setBackgroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) ForegroundBrush() *QBrush {
	_goptr := newQBrush(C.QGraphicsView_foregroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetForegroundBrush(brush *QBrush) {
	C.QGraphicsView_setForegroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) UpdateScene(rects []QRectF) {
	rects_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(rects))))
	defer C.free(unsafe.Pointer(rects_CArray))
	for i := range rects {
		rects_CArray[i] = rects[i].cPointer()
	}
	rects_ma := C.struct_miqt_array{len: C.size_t(len(rects)), data: unsafe.Pointer(rects_CArray)}
	C.QGraphicsView_updateScene(this.h, rects_ma)
}

func (this *QGraphicsView) InvalidateScene() {
	C.QGraphicsView_invalidateScene(this.h)
}

func (this *QGraphicsView) UpdateSceneRect(rect *QRectF) {
	C.QGraphicsView_updateSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) RubberBandChanged(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF) {
	C.QGraphicsView_rubberBandChanged(this.h, viewportRect.cPointer(), fromScenePoint.cPointer(), toScenePoint.cPointer())
}
func (this *QGraphicsView) OnRubberBandChanged(slot func(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF)) {
	C.QGraphicsView_connect_rubberBandChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsView_rubberBandChanged
func miqt_exec_callback_QGraphicsView_rubberBandChanged(cb C.intptr_t, viewportRect *C.QRect, fromScenePoint *C.QPointF, toScenePoint *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	viewportRect_goptr := newQRect(viewportRect)
	viewportRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *viewportRect_goptr

	fromScenePoint_goptr := newQPointF(fromScenePoint)
	fromScenePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fromScenePoint_goptr

	toScenePoint_goptr := newQPointF(toScenePoint)
	toScenePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *toScenePoint_goptr

	gofunc(slotval1, slotval2, slotval3)
}

func QGraphicsView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsView) SetRenderHint2(hint QPainter__RenderHint, enabled bool) {
	C.QGraphicsView_setRenderHint2(this.h, (C.int)(hint), (C.bool)(enabled))
}

func (this *QGraphicsView) SetOptimizationFlag2(flag QGraphicsView__OptimizationFlag, enabled bool) {
	C.QGraphicsView_setOptimizationFlag2(this.h, (C.int)(flag), (C.bool)(enabled))
}

func (this *QGraphicsView) SetMatrix2(matrix *QMatrix, combine bool) {
	C.QGraphicsView_setMatrix2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsView) SetTransform2(matrix *QTransform, combine bool) {
	C.QGraphicsView_setTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsView) EnsureVisible22(rect *QRectF, xmargin int) {
	C.QGraphicsView_ensureVisible22(this.h, rect.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible3(rect *QRectF, xmargin int, ymargin int) {
	C.QGraphicsView_ensureVisible3(this.h, rect.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible5(x float64, y float64, w float64, h float64, xmargin int) {
	C.QGraphicsView_ensureVisible5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible6(x float64, y float64, w float64, h float64, xmargin int, ymargin int) {
	C.QGraphicsView_ensureVisible6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible23(item *QGraphicsItem, xmargin int) {
	C.QGraphicsView_ensureVisible23(this.h, item.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible32(item *QGraphicsItem, xmargin int, ymargin int) {
	C.QGraphicsView_ensureVisible32(this.h, item.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) FitInView22(rect *QRectF, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_fitInView22(this.h, rect.cPointer(), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView5(x float64, y float64, w float64, h float64, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_fitInView5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView23(item *QGraphicsItem, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_fitInView23(this.h, item.cPointer(), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) Render2(painter *QPainter, target *QRectF) {
	C.QGraphicsView_render2(this.h, painter.cPointer(), target.cPointer())
}

func (this *QGraphicsView) Render3(painter *QPainter, target *QRectF, source *QRect) {
	C.QGraphicsView_render3(this.h, painter.cPointer(), target.cPointer(), source.cPointer())
}

func (this *QGraphicsView) Render4(painter *QPainter, target *QRectF, source *QRect, aspectRatioMode AspectRatioMode) {
	C.QGraphicsView_render4(this.h, painter.cPointer(), target.cPointer(), source.cPointer(), (C.int)(aspectRatioMode))
}

func (this *QGraphicsView) Items22(rect *QRect, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_items22(this.h, rect.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items5(x int, y int, w int, h int, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_items5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items24(path *QPainterPath, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_items24(this.h, path.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) InvalidateScene1(rect *QRectF) {
	C.QGraphicsView_invalidateScene1(this.h, rect.cPointer())
}

func (this *QGraphicsView) InvalidateScene2(rect *QRectF, layers QGraphicsScene__SceneLayer) {
	C.QGraphicsView_invalidateScene2(this.h, rect.cPointer(), (C.int)(layers))
}

func (this *QGraphicsView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QGraphicsView_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGraphicsView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_sizeHint
func miqt_exec_callback_QGraphicsView_sizeHint(self *C.QGraphicsView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OninputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_inputMethodQuery
func miqt_exec_callback_QGraphicsView_inputMethodQuery(self *C.QGraphicsView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_SetupViewport(widget *QWidget) {

	C.QGraphicsView_virtualbase_setupViewport(unsafe.Pointer(this.h), widget.cPointer())

}
func (this *QGraphicsView) OnsetupViewport(slot func(super func(widget *QWidget), widget *QWidget)) {
	ok := C.QGraphicsView_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_setupViewport
func miqt_exec_callback_QGraphicsView_setupViewport(self *C.QGraphicsView, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *QWidget), widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(widget)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QGraphicsView) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsView_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsView) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_event
func miqt_exec_callback_QGraphicsView_event(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsView_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsView) OnviewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsView_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_viewportEvent
func miqt_exec_callback_QGraphicsView_viewportEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QGraphicsView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QGraphicsView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_contextMenuEvent
func miqt_exec_callback_QGraphicsView_contextMenuEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QGraphicsView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QGraphicsView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_dragEnterEvent
func miqt_exec_callback_QGraphicsView_dragEnterEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QGraphicsView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QGraphicsView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_dragLeaveEvent
func miqt_exec_callback_QGraphicsView_dragLeaveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QGraphicsView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QGraphicsView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_dragMoveEvent
func miqt_exec_callback_QGraphicsView_dragMoveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QGraphicsView_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QGraphicsView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_dropEvent
func miqt_exec_callback_QGraphicsView_dropEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsView_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_focusInEvent
func miqt_exec_callback_QGraphicsView_focusInEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsView) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_focusNextPrevChild
func miqt_exec_callback_QGraphicsView_focusNextPrevChild(self *C.QGraphicsView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_focusOutEvent
func miqt_exec_callback_QGraphicsView_focusOutEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_keyPressEvent
func miqt_exec_callback_QGraphicsView_keyPressEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_keyReleaseEvent
func miqt_exec_callback_QGraphicsView_keyReleaseEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsView_mouseDoubleClickEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_mousePressEvent
func miqt_exec_callback_QGraphicsView_mousePressEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_mouseMoveEvent
func miqt_exec_callback_QGraphicsView_mouseMoveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_mouseReleaseEvent
func miqt_exec_callback_QGraphicsView_mouseReleaseEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QGraphicsView_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QGraphicsView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_wheelEvent
func miqt_exec_callback_QGraphicsView_wheelEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QGraphicsView_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QGraphicsView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_paintEvent
func miqt_exec_callback_QGraphicsView_paintEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QGraphicsView_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QGraphicsView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_resizeEvent
func miqt_exec_callback_QGraphicsView_resizeEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QGraphicsView_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QGraphicsView) OnscrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QGraphicsView_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_scrollContentsBy
func miqt_exec_callback_QGraphicsView_scrollContentsBy(self *C.QGraphicsView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QGraphicsView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGraphicsView_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QGraphicsView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_showEvent
func miqt_exec_callback_QGraphicsView_showEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OninputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_inputMethodEvent
func miqt_exec_callback_QGraphicsView_inputMethodEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DrawBackground(painter *QPainter, rect *QRectF) {

	C.QGraphicsView_virtualbase_drawBackground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsView) OndrawBackground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	ok := C.QGraphicsView_override_virtual_drawBackground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_drawBackground
func miqt_exec_callback_QGraphicsView_drawBackground(self *C.QGraphicsView, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRectF(rect)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DrawBackground, slotval1, slotval2)

}

func (this *QGraphicsView) callVirtualBase_DrawForeground(painter *QPainter, rect *QRectF) {

	C.QGraphicsView_virtualbase_drawForeground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsView) OndrawForeground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	ok := C.QGraphicsView_override_virtual_drawForeground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_drawForeground
func miqt_exec_callback_QGraphicsView_drawForeground(self *C.QGraphicsView, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRectF(rect)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DrawForeground, slotval1, slotval2)

}

func (this *QGraphicsView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QGraphicsView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGraphicsView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_minimumSizeHint
func miqt_exec_callback_QGraphicsView_minimumSizeHint(self *C.QGraphicsView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QGraphicsView_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QGraphicsView) OneventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QGraphicsView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_eventFilter
func miqt_exec_callback_QGraphicsView_eventFilter(self *C.QGraphicsView, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QGraphicsView_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OnviewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGraphicsView_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_viewportSizeHint
func miqt_exec_callback_QGraphicsView_viewportSizeHint(self *C.QGraphicsView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QGraphicsView_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QGraphicsView) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QGraphicsView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_changeEvent
func miqt_exec_callback_QGraphicsView_changeEvent(self *C.QGraphicsView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DevType() int {

	return (int)(C.QGraphicsView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OndevType(slot func(super func() int) int) {
	ok := C.QGraphicsView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_devType
func miqt_exec_callback_QGraphicsView_devType(self *C.QGraphicsView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_SetVisible(visible bool) {

	C.QGraphicsView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QGraphicsView) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QGraphicsView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_setVisible
func miqt_exec_callback_QGraphicsView_setVisible(self *C.QGraphicsView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QGraphicsView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QGraphicsView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGraphicsView) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QGraphicsView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_heightForWidth
func miqt_exec_callback_QGraphicsView_heightForWidth(self *C.QGraphicsView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QGraphicsView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QGraphicsView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_hasHeightForWidth
func miqt_exec_callback_QGraphicsView_hasHeightForWidth(self *C.QGraphicsView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QGraphicsView_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QGraphicsView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_paintEngine
func miqt_exec_callback_QGraphicsView_paintEngine(self *C.QGraphicsView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_EnterEvent(event *QEvent) {

	C.QGraphicsView_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_enterEvent
func miqt_exec_callback_QGraphicsView_enterEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QGraphicsView_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_leaveEvent
func miqt_exec_callback_QGraphicsView_leaveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QGraphicsView_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QGraphicsView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_moveEvent
func miqt_exec_callback_QGraphicsView_moveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGraphicsView_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QGraphicsView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_closeEvent
func miqt_exec_callback_QGraphicsView_closeEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QGraphicsView_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QGraphicsView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_tabletEvent
func miqt_exec_callback_QGraphicsView_tabletEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QGraphicsView_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QGraphicsView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_actionEvent
func miqt_exec_callback_QGraphicsView_actionEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGraphicsView_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QGraphicsView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_hideEvent
func miqt_exec_callback_QGraphicsView_hideEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QGraphicsView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QGraphicsView) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QGraphicsView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_nativeEvent
func miqt_exec_callback_QGraphicsView_nativeEvent(self *C.QGraphicsView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QGraphicsView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGraphicsView) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QGraphicsView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_metric
func miqt_exec_callback_QGraphicsView_metric(self *C.QGraphicsView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QGraphicsView_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsView) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_initPainter
func miqt_exec_callback_QGraphicsView_initPainter(self *C.QGraphicsView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QGraphicsView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QGraphicsView_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QGraphicsView) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QGraphicsView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_redirected
func miqt_exec_callback_QGraphicsView_redirected(self *C.QGraphicsView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QGraphicsView_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QGraphicsView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_sharedPainter
func miqt_exec_callback_QGraphicsView_sharedPainter(self *C.QGraphicsView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsView_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_timerEvent
func miqt_exec_callback_QGraphicsView_timerEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsView_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_childEvent
func miqt_exec_callback_QGraphicsView_childEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsView_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_customEvent
func miqt_exec_callback_QGraphicsView_customEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsView_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsView) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_connectNotify
func miqt_exec_callback_QGraphicsView_connectNotify(self *C.QGraphicsView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsView) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_disconnectNotify
func miqt_exec_callback_QGraphicsView_disconnectNotify(self *C.QGraphicsView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsView) Delete() {
	C.QGraphicsView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsView) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

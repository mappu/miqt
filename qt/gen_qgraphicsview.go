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
	QGraphicsView__ViewportAnchor__NoAnchor         QGraphicsView__ViewportAnchor = 0
	QGraphicsView__ViewportAnchor__AnchorViewCenter QGraphicsView__ViewportAnchor = 1
	QGraphicsView__ViewportAnchor__AnchorUnderMouse QGraphicsView__ViewportAnchor = 2
)

type QGraphicsView__CacheModeFlag int

const (
	QGraphicsView__CacheModeFlag__CacheNone       QGraphicsView__CacheModeFlag = 0
	QGraphicsView__CacheModeFlag__CacheBackground QGraphicsView__CacheModeFlag = 1
)

type QGraphicsView__DragMode int

const (
	QGraphicsView__DragMode__NoDrag         QGraphicsView__DragMode = 0
	QGraphicsView__DragMode__ScrollHandDrag QGraphicsView__DragMode = 1
	QGraphicsView__DragMode__RubberBandDrag QGraphicsView__DragMode = 2
)

type QGraphicsView__ViewportUpdateMode int

const (
	QGraphicsView__ViewportUpdateMode__FullViewportUpdate         QGraphicsView__ViewportUpdateMode = 0
	QGraphicsView__ViewportUpdateMode__MinimalViewportUpdate      QGraphicsView__ViewportUpdateMode = 1
	QGraphicsView__ViewportUpdateMode__SmartViewportUpdate        QGraphicsView__ViewportUpdateMode = 2
	QGraphicsView__ViewportUpdateMode__NoViewportUpdate           QGraphicsView__ViewportUpdateMode = 3
	QGraphicsView__ViewportUpdateMode__BoundingRectViewportUpdate QGraphicsView__ViewportUpdateMode = 4
)

type QGraphicsView__OptimizationFlag int

const (
	QGraphicsView__OptimizationFlag__DontClipPainter           QGraphicsView__OptimizationFlag = 1
	QGraphicsView__OptimizationFlag__DontSavePainterState      QGraphicsView__OptimizationFlag = 2
	QGraphicsView__OptimizationFlag__DontAdjustForAntialiasing QGraphicsView__OptimizationFlag = 4
	QGraphicsView__OptimizationFlag__IndirectPainting          QGraphicsView__OptimizationFlag = 8
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

func newQGraphicsView(h *C.QGraphicsView) *QGraphicsView {
	if h == nil {
		return nil
	}
	return &QGraphicsView{h: h, QAbstractScrollArea: newQAbstractScrollArea_U(unsafe.Pointer(h))}
}

func newQGraphicsView_U(h unsafe.Pointer) *QGraphicsView {
	return newQGraphicsView((*C.QGraphicsView)(h))
}

// NewQGraphicsView constructs a new QGraphicsView object.
func NewQGraphicsView() *QGraphicsView {
	ret := C.QGraphicsView_new()
	return newQGraphicsView(ret)
}

// NewQGraphicsView2 constructs a new QGraphicsView object.
func NewQGraphicsView2(scene *QGraphicsScene) *QGraphicsView {
	ret := C.QGraphicsView_new2(scene.cPointer())
	return newQGraphicsView(ret)
}

// NewQGraphicsView3 constructs a new QGraphicsView object.
func NewQGraphicsView3(parent *QWidget) *QGraphicsView {
	ret := C.QGraphicsView_new3(parent.cPointer())
	return newQGraphicsView(ret)
}

// NewQGraphicsView4 constructs a new QGraphicsView object.
func NewQGraphicsView4(scene *QGraphicsScene, parent *QWidget) *QGraphicsView {
	ret := C.QGraphicsView_new4(scene.cPointer(), parent.cPointer())
	return newQGraphicsView(ret)
}

func (this *QGraphicsView) MetaObject() *QMetaObject {
	ret := C.QGraphicsView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) SizeHint() *QSize {
	ret := C.QGraphicsView_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) RenderHints() int {
	ret := C.QGraphicsView_RenderHints(this.h)
	return (int)(ret)
}

func (this *QGraphicsView) SetRenderHint(hint QPainter__RenderHint) {
	C.QGraphicsView_SetRenderHint(this.h, (C.uintptr_t)(hint))
}

func (this *QGraphicsView) SetRenderHints(hints int) {
	C.QGraphicsView_SetRenderHints(this.h, (C.int)(hints))
}

func (this *QGraphicsView) Alignment() int {
	ret := C.QGraphicsView_Alignment(this.h)
	return (int)(ret)
}

func (this *QGraphicsView) SetAlignment(alignment int) {
	C.QGraphicsView_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QGraphicsView) TransformationAnchor() QGraphicsView__ViewportAnchor {
	ret := C.QGraphicsView_TransformationAnchor(this.h)
	return (QGraphicsView__ViewportAnchor)(ret)
}

func (this *QGraphicsView) SetTransformationAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_SetTransformationAnchor(this.h, (C.uintptr_t)(anchor))
}

func (this *QGraphicsView) ResizeAnchor() QGraphicsView__ViewportAnchor {
	ret := C.QGraphicsView_ResizeAnchor(this.h)
	return (QGraphicsView__ViewportAnchor)(ret)
}

func (this *QGraphicsView) SetResizeAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_SetResizeAnchor(this.h, (C.uintptr_t)(anchor))
}

func (this *QGraphicsView) ViewportUpdateMode() QGraphicsView__ViewportUpdateMode {
	ret := C.QGraphicsView_ViewportUpdateMode(this.h)
	return (QGraphicsView__ViewportUpdateMode)(ret)
}

func (this *QGraphicsView) SetViewportUpdateMode(mode QGraphicsView__ViewportUpdateMode) {
	C.QGraphicsView_SetViewportUpdateMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGraphicsView) OptimizationFlags() int {
	ret := C.QGraphicsView_OptimizationFlags(this.h)
	return (int)(ret)
}

func (this *QGraphicsView) SetOptimizationFlag(flag QGraphicsView__OptimizationFlag) {
	C.QGraphicsView_SetOptimizationFlag(this.h, (C.uintptr_t)(flag))
}

func (this *QGraphicsView) SetOptimizationFlags(flags int) {
	C.QGraphicsView_SetOptimizationFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsView) DragMode() QGraphicsView__DragMode {
	ret := C.QGraphicsView_DragMode(this.h)
	return (QGraphicsView__DragMode)(ret)
}

func (this *QGraphicsView) SetDragMode(mode QGraphicsView__DragMode) {
	C.QGraphicsView_SetDragMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGraphicsView) RubberBandSelectionMode() ItemSelectionMode {
	ret := C.QGraphicsView_RubberBandSelectionMode(this.h)
	return (ItemSelectionMode)(ret)
}

func (this *QGraphicsView) SetRubberBandSelectionMode(mode ItemSelectionMode) {
	C.QGraphicsView_SetRubberBandSelectionMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGraphicsView) RubberBandRect() *QRect {
	ret := C.QGraphicsView_RubberBandRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) CacheMode() int {
	ret := C.QGraphicsView_CacheMode(this.h)
	return (int)(ret)
}

func (this *QGraphicsView) SetCacheMode(mode int) {
	C.QGraphicsView_SetCacheMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) ResetCachedContent() {
	C.QGraphicsView_ResetCachedContent(this.h)
}

func (this *QGraphicsView) IsInteractive() bool {
	ret := C.QGraphicsView_IsInteractive(this.h)
	return (bool)(ret)
}

func (this *QGraphicsView) SetInteractive(allowed bool) {
	C.QGraphicsView_SetInteractive(this.h, (C.bool)(allowed))
}

func (this *QGraphicsView) Scene() *QGraphicsScene {
	ret := C.QGraphicsView_Scene(this.h)
	return newQGraphicsScene_U(unsafe.Pointer(ret))
}

func (this *QGraphicsView) SetScene(scene *QGraphicsScene) {
	C.QGraphicsView_SetScene(this.h, scene.cPointer())
}

func (this *QGraphicsView) SceneRect() *QRectF {
	ret := C.QGraphicsView_SceneRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) SetSceneRect(rect *QRectF) {
	C.QGraphicsView_SetSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) SetSceneRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_SetSceneRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) Matrix() *QMatrix {
	ret := C.QGraphicsView_Matrix(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMatrix(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMatrix) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) SetMatrix(matrix *QMatrix) {
	C.QGraphicsView_SetMatrix(this.h, matrix.cPointer())
}

func (this *QGraphicsView) ResetMatrix() {
	C.QGraphicsView_ResetMatrix(this.h)
}

func (this *QGraphicsView) Transform() *QTransform {
	ret := C.QGraphicsView_Transform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) ViewportTransform() *QTransform {
	ret := C.QGraphicsView_ViewportTransform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) IsTransformed() bool {
	ret := C.QGraphicsView_IsTransformed(this.h)
	return (bool)(ret)
}

func (this *QGraphicsView) SetTransform(matrix *QTransform) {
	C.QGraphicsView_SetTransform(this.h, matrix.cPointer())
}

func (this *QGraphicsView) ResetTransform() {
	C.QGraphicsView_ResetTransform(this.h)
}

func (this *QGraphicsView) Rotate(angle float64) {
	C.QGraphicsView_Rotate(this.h, (C.double)(angle))
}

func (this *QGraphicsView) Scale(sx float64, sy float64) {
	C.QGraphicsView_Scale(this.h, (C.double)(sx), (C.double)(sy))
}

func (this *QGraphicsView) Shear(sh float64, sv float64) {
	C.QGraphicsView_Shear(this.h, (C.double)(sh), (C.double)(sv))
}

func (this *QGraphicsView) Translate(dx float64, dy float64) {
	C.QGraphicsView_Translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsView) CenterOn(pos *QPointF) {
	C.QGraphicsView_CenterOn(this.h, pos.cPointer())
}

func (this *QGraphicsView) CenterOn2(x float64, y float64) {
	C.QGraphicsView_CenterOn2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsView) CenterOnWithItem(item *QGraphicsItem) {
	C.QGraphicsView_CenterOnWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) EnsureVisible(rect *QRectF) {
	C.QGraphicsView_EnsureVisible(this.h, rect.cPointer())
}

func (this *QGraphicsView) EnsureVisible2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_EnsureVisible2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) EnsureVisibleWithItem(item *QGraphicsItem) {
	C.QGraphicsView_EnsureVisibleWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) FitInView(rect *QRectF) {
	C.QGraphicsView_FitInView(this.h, rect.cPointer())
}

func (this *QGraphicsView) FitInView2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_FitInView2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) FitInViewWithItem(item *QGraphicsItem) {
	C.QGraphicsView_FitInViewWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) Render(painter *QPainter) {
	C.QGraphicsView_Render(this.h, painter.cPointer())
}

func (this *QGraphicsView) Items() []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_Items(this.h, &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) ItemsWithPos(pos *QPoint) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_ItemsWithPos(this.h, pos.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) Items2(x int, y int) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_Items2(this.h, (C.int)(x), (C.int)(y), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) ItemsWithRect(rect *QRect) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_ItemsWithRect(this.h, rect.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) Items3(x int, y int, w int, h int) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_Items3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_ItemsWithPath(this.h, path.cPointer(), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) ItemAt(pos *QPoint) *QGraphicsItem {
	ret := C.QGraphicsView_ItemAt(this.h, pos.cPointer())
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsView) ItemAt2(x int, y int) *QGraphicsItem {
	ret := C.QGraphicsView_ItemAt2(this.h, (C.int)(x), (C.int)(y))
	return newQGraphicsItem_U(unsafe.Pointer(ret))
}

func (this *QGraphicsView) MapToScene(point *QPoint) *QPointF {
	ret := C.QGraphicsView_MapToScene(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) MapToSceneWithPath(path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsView_MapToSceneWithPath(this.h, path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) MapFromScene(point *QPointF) *QPoint {
	ret := C.QGraphicsView_MapFromScene(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) MapFromSceneWithPath(path *QPainterPath) *QPainterPath {
	ret := C.QGraphicsView_MapFromSceneWithPath(this.h, path.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPainterPath(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPainterPath) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) MapToScene2(x int, y int) *QPointF {
	ret := C.QGraphicsView_MapToScene2(this.h, (C.int)(x), (C.int)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) MapFromScene2(x float64, y float64) *QPoint {
	ret := C.QGraphicsView_MapFromScene2(this.h, (C.double)(x), (C.double)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) InputMethodQuery(query InputMethodQuery) *QVariant {
	ret := C.QGraphicsView_InputMethodQuery(this.h, (C.uintptr_t)(query))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) BackgroundBrush() *QBrush {
	ret := C.QGraphicsView_BackgroundBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) SetBackgroundBrush(brush *QBrush) {
	C.QGraphicsView_SetBackgroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) ForegroundBrush() *QBrush {
	ret := C.QGraphicsView_ForegroundBrush(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsView) SetForegroundBrush(brush *QBrush) {
	C.QGraphicsView_SetForegroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) UpdateScene(rects []QRectF) {
	// For the C ABI, malloc a C array of raw pointers
	rects_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(rects))))
	defer C.free(unsafe.Pointer(rects_CArray))
	for i := range rects {
		rects_CArray[i] = rects[i].cPointer()
	}
	C.QGraphicsView_UpdateScene(this.h, &rects_CArray[0], C.size_t(len(rects)))
}

func (this *QGraphicsView) InvalidateScene() {
	C.QGraphicsView_InvalidateScene(this.h)
}

func (this *QGraphicsView) UpdateSceneRect(rect *QRectF) {
	C.QGraphicsView_UpdateSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) RubberBandChanged(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF) {
	C.QGraphicsView_RubberBandChanged(this.h, viewportRect.cPointer(), fromScenePoint.cPointer(), toScenePoint.cPointer())
}

func (this *QGraphicsView) OnRubberBandChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsView_connect_RubberBandChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) SetRenderHint2(hint QPainter__RenderHint, enabled bool) {
	C.QGraphicsView_SetRenderHint2(this.h, (C.uintptr_t)(hint), (C.bool)(enabled))
}

func (this *QGraphicsView) SetOptimizationFlag2(flag QGraphicsView__OptimizationFlag, enabled bool) {
	C.QGraphicsView_SetOptimizationFlag2(this.h, (C.uintptr_t)(flag), (C.bool)(enabled))
}

func (this *QGraphicsView) SetMatrix2(matrix *QMatrix, combine bool) {
	C.QGraphicsView_SetMatrix2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsView) SetTransform2(matrix *QTransform, combine bool) {
	C.QGraphicsView_SetTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsView) EnsureVisible22(rect *QRectF, xmargin int) {
	C.QGraphicsView_EnsureVisible22(this.h, rect.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible3(rect *QRectF, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible3(this.h, rect.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible5(x float64, y float64, w float64, h float64, xmargin int) {
	C.QGraphicsView_EnsureVisible5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible6(x float64, y float64, w float64, h float64, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible23(item *QGraphicsItem, xmargin int) {
	C.QGraphicsView_EnsureVisible23(this.h, item.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible32(item *QGraphicsItem, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible32(this.h, item.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) FitInView22(rect *QRectF, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView22(this.h, rect.cPointer(), (C.uintptr_t)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView5(x float64, y float64, w float64, h float64, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.uintptr_t)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView23(item *QGraphicsItem, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView23(this.h, item.cPointer(), (C.uintptr_t)(aspectRadioMode))
}

func (this *QGraphicsView) Render2(painter *QPainter, target *QRectF) {
	C.QGraphicsView_Render2(this.h, painter.cPointer(), target.cPointer())
}

func (this *QGraphicsView) Render3(painter *QPainter, target *QRectF, source *QRect) {
	C.QGraphicsView_Render3(this.h, painter.cPointer(), target.cPointer(), source.cPointer())
}

func (this *QGraphicsView) Render4(painter *QPainter, target *QRectF, source *QRect, aspectRatioMode AspectRatioMode) {
	C.QGraphicsView_Render4(this.h, painter.cPointer(), target.cPointer(), source.cPointer(), (C.uintptr_t)(aspectRatioMode))
}

func (this *QGraphicsView) Items22(rect *QRect, mode ItemSelectionMode) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_Items22(this.h, rect.cPointer(), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) Items5(x int, y int, w int, h int, mode ItemSelectionMode) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_Items5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) Items24(path *QPainterPath, mode ItemSelectionMode) []*QGraphicsItem {
	var _out **C.QGraphicsItem = nil
	var _out_len C.size_t = 0
	C.QGraphicsView_Items24(this.h, path.cPointer(), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]*QGraphicsItem, int(_out_len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGraphicsItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsView) InvalidateScene1(rect *QRectF) {
	C.QGraphicsView_InvalidateScene1(this.h, rect.cPointer())
}

func (this *QGraphicsView) InvalidateScene2(rect *QRectF, layers int) {
	C.QGraphicsView_InvalidateScene2(this.h, rect.cPointer(), (C.int)(layers))
}

func (this *QGraphicsView) Delete() {
	C.QGraphicsView_Delete(this.h)
}

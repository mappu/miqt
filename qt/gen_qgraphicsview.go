package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicsview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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
	rects_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.ulong(8 * len(rects))))
	defer C.free(unsafe.Pointer(rects_CArray))
	for i := range rects {
		rects_CArray[i] = rects[i].cPointer()
	}
	C.QGraphicsView_UpdateScene(this.h, &rects_CArray[0], C.ulong(len(rects)))
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

func (this *QGraphicsView) Delete() {
	C.QGraphicsView_Delete(this.h)
}

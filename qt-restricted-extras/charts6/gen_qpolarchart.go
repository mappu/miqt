package charts6

/*

#include "gen_qpolarchart.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPolarChart__PolarOrientation int

const (
	QPolarChart__PolarOrientationRadial  QPolarChart__PolarOrientation = 1
	QPolarChart__PolarOrientationAngular QPolarChart__PolarOrientation = 2
)

type QPolarChart struct {
	h *C.QPolarChart
	*QChart
}

func (this *QPolarChart) cPointer() *C.QPolarChart {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPolarChart) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPolarChart constructs the type using only CGO pointers.
func newQPolarChart(h *C.QPolarChart) *QPolarChart {
	if h == nil {
		return nil
	}
	var outptr_QChart *C.QChart = nil
	C.QPolarChart_virtbase(h, &outptr_QChart)

	return &QPolarChart{h: h,
		QChart: newQChart(outptr_QChart)}
}

// UnsafeNewQPolarChart constructs the type using only unsafe pointers.
func UnsafeNewQPolarChart(h unsafe.Pointer) *QPolarChart {
	return newQPolarChart((*C.QPolarChart)(h))
}

// NewQPolarChart constructs a new QPolarChart object.
func NewQPolarChart() *QPolarChart {

	return newQPolarChart(C.QPolarChart_new())
}

// NewQPolarChart2 constructs a new QPolarChart object.
func NewQPolarChart2(parent *qt6.QGraphicsItem) *QPolarChart {

	return newQPolarChart(C.QPolarChart_new2((*C.QGraphicsItem)(parent.UnsafePointer())))
}

// NewQPolarChart3 constructs a new QPolarChart object.
func NewQPolarChart3(parent *qt6.QGraphicsItem, wFlags qt6.WindowType) *QPolarChart {

	return newQPolarChart(C.QPolarChart_new3((*C.QGraphicsItem)(parent.UnsafePointer()), (C.int)(wFlags)))
}

func (this *QPolarChart) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPolarChart_metaObject(this.h)))
}

func (this *QPolarChart) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPolarChart_metacast(this.h, param1_Cstring))
}

func QPolarChart_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPolarChart_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPolarChart) AddAxis(axis *QAbstractAxis, polarOrientation QPolarChart__PolarOrientation) {
	C.QPolarChart_addAxis(this.h, axis.cPointer(), (C.int)(polarOrientation))
}

func (this *QPolarChart) Axes() []*QAbstractAxis {
	var _ma C.struct_miqt_array = C.QPolarChart_axes(this.h)
	_ret := make([]*QAbstractAxis, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAxis)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAxis(_outCast[i])
	}
	return _ret
}

func QPolarChart_AxisPolarOrientation(axis *QAbstractAxis) QPolarChart__PolarOrientation {
	return (QPolarChart__PolarOrientation)(C.QPolarChart_axisPolarOrientation(axis.cPointer()))
}

func QPolarChart_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPolarChart_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPolarChart_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPolarChart_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPolarChart) AxesWithPolarOrientation(polarOrientation QPolarChart__PolarOrientation) []*QAbstractAxis {
	var _ma C.struct_miqt_array = C.QPolarChart_axesWithPolarOrientation(this.h, (C.int)(polarOrientation))
	_ret := make([]*QAbstractAxis, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAxis)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAxis(_outCast[i])
	}
	return _ret
}

func (this *QPolarChart) Axes2(polarOrientation QPolarChart__PolarOrientation, series *QAbstractSeries) []*QAbstractAxis {
	var _ma C.struct_miqt_array = C.QPolarChart_axes2(this.h, (C.int)(polarOrientation), series.cPointer())
	_ret := make([]*QAbstractAxis, int(_ma.len))
	_outCast := (*[0xffff]*C.QAbstractAxis)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAbstractAxis(_outCast[i])
	}
	return _ret
}

// UpdateMicroFocus can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QPolarChart_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPolarChart_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPolarChart_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPolarChart_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPolarChart_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AddToIndex can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QPolarChart_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QPolarChart_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QPolarChart_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetGraphicsItem can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) SetGraphicsItem(item *qt6.QGraphicsItem) {

	var _dynamic_cast_ok C.bool = false
	C.QPolarChart_protectedbase_setGraphicsItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetOwnedByLayout can only be called from a QPolarChart that was directly constructed.
func (this *QPolarChart) SetOwnedByLayout(ownedByLayout bool) {

	var _dynamic_cast_ok C.bool = false
	C.QPolarChart_protectedbase_setOwnedByLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(ownedByLayout))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QPolarChart) callVirtualBase_SetGeometry(rect *qt6.QRectF) {

	C.QPolarChart_virtualbase_setGeometry(unsafe.Pointer(this.h), (*C.QRectF)(rect.UnsafePointer()))

}
func (this *QPolarChart) OnSetGeometry(slot func(super func(rect *qt6.QRectF), rect *qt6.QRectF)) {
	ok := C.QPolarChart_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_setGeometry
func miqt_exec_callback_QPolarChart_setGeometry(self *C.QPolarChart, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *qt6.QRectF), rect *qt6.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QPolarChart{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QPolarChart) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QPolarChart_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QPolarChart) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QPolarChart_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_getContentsMargins
func miqt_exec_callback_QPolarChart_getContentsMargins(self *C.QPolarChart, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QPolarChart{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QPolarChart) callVirtualBase_Type() int {

	return (int)(C.QPolarChart_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QPolarChart) OnType(slot func(super func() int) int) {
	ok := C.QPolarChart_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_type
func miqt_exec_callback_QPolarChart_type(self *C.QPolarChart, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_Paint(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget) {

	C.QPolarChart_virtualbase_paint(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QPolarChart) OnPaint(slot func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget)) {
	ok := C.QPolarChart_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_paint
func miqt_exec_callback_QPolarChart_paint(self *C.QPolarChart, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt6.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QPolarChart{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QPolarChart) callVirtualBase_PaintWindowFrame(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget) {

	C.QPolarChart_virtualbase_paintWindowFrame(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QPolarChart) OnPaintWindowFrame(slot func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget)) {
	ok := C.QPolarChart_override_virtual_paintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_paintWindowFrame
func miqt_exec_callback_QPolarChart_paintWindowFrame(self *C.QPolarChart, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt6.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QPolarChart{h: self}).callVirtualBase_PaintWindowFrame, slotval1, slotval2, slotval3)

}

func (this *QPolarChart) callVirtualBase_BoundingRect() *qt6.QRectF {

	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QPolarChart_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnBoundingRect(slot func(super func() *qt6.QRectF) *qt6.QRectF) {
	ok := C.QPolarChart_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_boundingRect
func miqt_exec_callback_QPolarChart_boundingRect(self *C.QPolarChart, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QRectF) *qt6.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_Shape() *qt6.QPainterPath {

	_goptr := qt6.UnsafeNewQPainterPath(unsafe.Pointer(C.QPolarChart_virtualbase_shape(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnShape(slot func(super func() *qt6.QPainterPath) *qt6.QPainterPath) {
	ok := C.QPolarChart_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_shape
func miqt_exec_callback_QPolarChart_shape(self *C.QPolarChart, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainterPath) *qt6.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_Shape)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_InitStyleOption(option *qt6.QStyleOption) {

	C.QPolarChart_virtualbase_initStyleOption(unsafe.Pointer(this.h), (*C.QStyleOption)(option.UnsafePointer()))

}
func (this *QPolarChart) OnInitStyleOption(slot func(super func(option *qt6.QStyleOption), option *qt6.QStyleOption)) {
	ok := C.QPolarChart_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_initStyleOption
func miqt_exec_callback_QPolarChart_initStyleOption(self *C.QPolarChart, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *qt6.QStyleOption), option *qt6.QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQStyleOption(unsafe.Pointer(option))

	gofunc((&QPolarChart{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QPolarChart) callVirtualBase_SizeHint(which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF {

	_goptr := qt6.UnsafeNewQSizeF(unsafe.Pointer(C.QPolarChart_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), (*C.QSizeF)(constraint.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnSizeHint(slot func(super func(which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF, which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF) {
	ok := C.QPolarChart_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_sizeHint
func miqt_exec_callback_QPolarChart_sizeHint(self *C.QPolarChart, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF, which qt6.SizeHint, constraint *qt6.QSizeF) *qt6.QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.SizeHint)(which)

	slotval2 := qt6.UnsafeNewQSizeF(unsafe.Pointer(constraint))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return (*C.QSizeF)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_UpdateGeometry() {

	C.QPolarChart_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QPolarChart) OnUpdateGeometry(slot func(super func())) {
	ok := C.QPolarChart_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_updateGeometry
func miqt_exec_callback_QPolarChart_updateGeometry(self *C.QPolarChart, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPolarChart{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QPolarChart) callVirtualBase_ItemChange(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPolarChart_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnItemChange(slot func(super func(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant, change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant) {
	ok := C.QPolarChart_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_itemChange
func miqt_exec_callback_QPolarChart_itemChange(self *C.QPolarChart, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant, change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_PropertyChange(propertyName string, value *qt6.QVariant) *qt6.QVariant {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPolarChart_virtualbase_propertyChange(unsafe.Pointer(this.h), propertyName_ms, (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnPropertyChange(slot func(super func(propertyName string, value *qt6.QVariant) *qt6.QVariant, propertyName string, value *qt6.QVariant) *qt6.QVariant) {
	ok := C.QPolarChart_override_virtual_propertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_propertyChange
func miqt_exec_callback_QPolarChart_propertyChange(self *C.QPolarChart, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(propertyName string, value *qt6.QVariant) *qt6.QVariant, propertyName string, value *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_PropertyChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_SceneEvent(event *qt6.QEvent) bool {

	return (bool)(C.QPolarChart_virtualbase_sceneEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPolarChart) OnSceneEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPolarChart_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_sceneEvent
func miqt_exec_callback_QPolarChart_sceneEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_WindowFrameEvent(e *qt6.QEvent) bool {

	return (bool)(C.QPolarChart_virtualbase_windowFrameEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QPolarChart) OnWindowFrameEvent(slot func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool) {
	ok := C.QPolarChart_override_virtual_windowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_windowFrameEvent
func miqt_exec_callback_QPolarChart_windowFrameEvent(self *C.QPolarChart, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt6.QEvent) bool, e *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_WindowFrameEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_WindowFrameSectionAt(pos *qt6.QPointF) qt6.WindowFrameSection {

	return (qt6.WindowFrameSection)(C.QPolarChart_virtualbase_windowFrameSectionAt(unsafe.Pointer(this.h), (*C.QPointF)(pos.UnsafePointer())))

}
func (this *QPolarChart) OnWindowFrameSectionAt(slot func(super func(pos *qt6.QPointF) qt6.WindowFrameSection, pos *qt6.QPointF) qt6.WindowFrameSection) {
	ok := C.QPolarChart_override_virtual_windowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_windowFrameSectionAt
func miqt_exec_callback_QPolarChart_windowFrameSectionAt(self *C.QPolarChart, cb C.intptr_t, pos *C.QPointF) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *qt6.QPointF) qt6.WindowFrameSection, pos *qt6.QPointF) qt6.WindowFrameSection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_WindowFrameSectionAt, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPolarChart_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPolarChart) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPolarChart_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_event
func miqt_exec_callback_QPolarChart_event(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_ChangeEvent(event *qt6.QEvent) {

	C.QPolarChart_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnChangeEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPolarChart_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_changeEvent
func miqt_exec_callback_QPolarChart_changeEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QPolarChart_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QPolarChart_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_closeEvent
func miqt_exec_callback_QPolarChart_closeEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QPolarChart_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPolarChart_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_focusInEvent
func miqt_exec_callback_QPolarChart_focusInEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QPolarChart_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPolarChart) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPolarChart_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_focusNextPrevChild
func miqt_exec_callback_QPolarChart_focusNextPrevChild(self *C.QPolarChart, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QPolarChart_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QPolarChart_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_focusOutEvent
func miqt_exec_callback_QPolarChart_focusOutEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QPolarChart_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QPolarChart_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_hideEvent
func miqt_exec_callback_QPolarChart_hideEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_MoveEvent(event *qt6.QGraphicsSceneMoveEvent) {

	C.QPolarChart_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMoveEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnMoveEvent(slot func(super func(event *qt6.QGraphicsSceneMoveEvent), event *qt6.QGraphicsSceneMoveEvent)) {
	ok := C.QPolarChart_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_moveEvent
func miqt_exec_callback_QPolarChart_moveEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMoveEvent), event *qt6.QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMoveEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_PolishEvent() {

	C.QPolarChart_virtualbase_polishEvent(unsafe.Pointer(this.h))

}
func (this *QPolarChart) OnPolishEvent(slot func(super func())) {
	ok := C.QPolarChart_override_virtual_polishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_polishEvent
func miqt_exec_callback_QPolarChart_polishEvent(self *C.QPolarChart, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPolarChart{h: self}).callVirtualBase_PolishEvent)

}

func (this *QPolarChart) callVirtualBase_ResizeEvent(event *qt6.QGraphicsSceneResizeEvent) {

	C.QPolarChart_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneResizeEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnResizeEvent(slot func(super func(event *qt6.QGraphicsSceneResizeEvent), event *qt6.QGraphicsSceneResizeEvent)) {
	ok := C.QPolarChart_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_resizeEvent
func miqt_exec_callback_QPolarChart_resizeEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneResizeEvent), event *qt6.QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneResizeEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QPolarChart_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QPolarChart_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_showEvent
func miqt_exec_callback_QPolarChart_showEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_HoverMoveEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QPolarChart_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnHoverMoveEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QPolarChart_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_hoverMoveEvent
func miqt_exec_callback_QPolarChart_hoverMoveEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_HoverLeaveEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QPolarChart_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnHoverLeaveEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QPolarChart_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_hoverLeaveEvent
func miqt_exec_callback_QPolarChart_hoverLeaveEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_GrabMouseEvent(event *qt6.QEvent) {

	C.QPolarChart_virtualbase_grabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnGrabMouseEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPolarChart_override_virtual_grabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_grabMouseEvent
func miqt_exec_callback_QPolarChart_grabMouseEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_UngrabMouseEvent(event *qt6.QEvent) {

	C.QPolarChart_virtualbase_ungrabMouseEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnUngrabMouseEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPolarChart_override_virtual_ungrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_ungrabMouseEvent
func miqt_exec_callback_QPolarChart_ungrabMouseEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_GrabKeyboardEvent(event *qt6.QEvent) {

	C.QPolarChart_virtualbase_grabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnGrabKeyboardEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPolarChart_override_virtual_grabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_grabKeyboardEvent
func miqt_exec_callback_QPolarChart_grabKeyboardEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_UngrabKeyboardEvent(event *qt6.QEvent) {

	C.QPolarChart_virtualbase_ungrabKeyboardEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnUngrabKeyboardEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPolarChart_override_virtual_ungrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_ungrabKeyboardEvent
func miqt_exec_callback_QPolarChart_ungrabKeyboardEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPolarChart_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPolarChart) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPolarChart_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_eventFilter
func miqt_exec_callback_QPolarChart_eventFilter(self *C.QPolarChart, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPolarChart_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPolarChart_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_timerEvent
func miqt_exec_callback_QPolarChart_timerEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPolarChart_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPolarChart_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_childEvent
func miqt_exec_callback_QPolarChart_childEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPolarChart_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPolarChart_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_customEvent
func miqt_exec_callback_QPolarChart_customEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPolarChart_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPolarChart) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPolarChart_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_connectNotify
func miqt_exec_callback_QPolarChart_connectNotify(self *C.QPolarChart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPolarChart{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPolarChart) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPolarChart_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPolarChart) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPolarChart_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_disconnectNotify
func miqt_exec_callback_QPolarChart_disconnectNotify(self *C.QPolarChart, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPolarChart{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QPolarChart) callVirtualBase_Advance(phase int) {

	C.QPolarChart_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QPolarChart) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QPolarChart_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_advance
func miqt_exec_callback_QPolarChart_advance(self *C.QPolarChart, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QPolarChart{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QPolarChart) callVirtualBase_Contains(point *qt6.QPointF) bool {

	return (bool)(C.QPolarChart_virtualbase_contains(unsafe.Pointer(this.h), (*C.QPointF)(point.UnsafePointer())))

}
func (this *QPolarChart) OnContains(slot func(super func(point *qt6.QPointF) bool, point *qt6.QPointF) bool) {
	ok := C.QPolarChart_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_contains
func miqt_exec_callback_QPolarChart_contains(self *C.QPolarChart, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *qt6.QPointF) bool, point *qt6.QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_CollidesWithItem(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool {

	return (bool)(C.QPolarChart_virtualbase_collidesWithItem(unsafe.Pointer(this.h), (*C.QGraphicsItem)(other.UnsafePointer()), (C.int)(mode)))

}
func (this *QPolarChart) OnCollidesWithItem(slot func(super func(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool, other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool) {
	ok := C.QPolarChart_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_collidesWithItem
func miqt_exec_callback_QPolarChart_collidesWithItem(self *C.QPolarChart, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool, other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(other))

	slotval2 := (qt6.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_CollidesWithPath(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool {

	return (bool)(C.QPolarChart_virtualbase_collidesWithPath(unsafe.Pointer(this.h), (*C.QPainterPath)(path.UnsafePointer()), (C.int)(mode)))

}
func (this *QPolarChart) OnCollidesWithPath(slot func(super func(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool, path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool) {
	ok := C.QPolarChart_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_collidesWithPath
func miqt_exec_callback_QPolarChart_collidesWithPath(self *C.QPolarChart, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool, path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainterPath(unsafe.Pointer(path))

	slotval2 := (qt6.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_IsObscuredBy(item *qt6.QGraphicsItem) bool {

	return (bool)(C.QPolarChart_virtualbase_isObscuredBy(unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer())))

}
func (this *QPolarChart) OnIsObscuredBy(slot func(super func(item *qt6.QGraphicsItem) bool, item *qt6.QGraphicsItem) bool) {
	ok := C.QPolarChart_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_isObscuredBy
func miqt_exec_callback_QPolarChart_isObscuredBy(self *C.QPolarChart, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt6.QGraphicsItem) bool, item *qt6.QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_OpaqueArea() *qt6.QPainterPath {

	_goptr := qt6.UnsafeNewQPainterPath(unsafe.Pointer(C.QPolarChart_virtualbase_opaqueArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnOpaqueArea(slot func(super func() *qt6.QPainterPath) *qt6.QPainterPath) {
	ok := C.QPolarChart_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_opaqueArea
func miqt_exec_callback_QPolarChart_opaqueArea(self *C.QPolarChart, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainterPath) *qt6.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_OpaqueArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_SceneEventFilter(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool {

	return (bool)(C.QPolarChart_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), (*C.QGraphicsItem)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPolarChart) OnSceneEventFilter(slot func(super func(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool, watched *qt6.QGraphicsItem, event *qt6.QEvent) bool) {
	ok := C.QPolarChart_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_sceneEventFilter
func miqt_exec_callback_QPolarChart_sceneEventFilter(self *C.QPolarChart, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool, watched *qt6.QGraphicsItem, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_ContextMenuEvent(event *qt6.QGraphicsSceneContextMenuEvent) {

	C.QPolarChart_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneContextMenuEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnContextMenuEvent(slot func(super func(event *qt6.QGraphicsSceneContextMenuEvent), event *qt6.QGraphicsSceneContextMenuEvent)) {
	ok := C.QPolarChart_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_contextMenuEvent
func miqt_exec_callback_QPolarChart_contextMenuEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneContextMenuEvent), event *qt6.QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_DragEnterEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QPolarChart_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnDragEnterEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QPolarChart_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_dragEnterEvent
func miqt_exec_callback_QPolarChart_dragEnterEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_DragLeaveEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QPolarChart_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnDragLeaveEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QPolarChart_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_dragLeaveEvent
func miqt_exec_callback_QPolarChart_dragLeaveEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_DragMoveEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QPolarChart_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnDragMoveEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QPolarChart_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_dragMoveEvent
func miqt_exec_callback_QPolarChart_dragMoveEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_DropEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QPolarChart_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnDropEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QPolarChart_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_dropEvent
func miqt_exec_callback_QPolarChart_dropEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_HoverEnterEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QPolarChart_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnHoverEnterEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QPolarChart_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_hoverEnterEvent
func miqt_exec_callback_QPolarChart_hoverEnterEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QPolarChart_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPolarChart_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_keyPressEvent
func miqt_exec_callback_QPolarChart_keyPressEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QPolarChart_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QPolarChart_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_keyReleaseEvent
func miqt_exec_callback_QPolarChart_keyReleaseEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_MousePressEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QPolarChart_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnMousePressEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QPolarChart_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_mousePressEvent
func miqt_exec_callback_QPolarChart_mousePressEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_MouseMoveEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QPolarChart_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnMouseMoveEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QPolarChart_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_mouseMoveEvent
func miqt_exec_callback_QPolarChart_mouseMoveEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_MouseReleaseEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QPolarChart_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnMouseReleaseEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QPolarChart_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_mouseReleaseEvent
func miqt_exec_callback_QPolarChart_mouseReleaseEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_MouseDoubleClickEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QPolarChart_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QPolarChart_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_mouseDoubleClickEvent
func miqt_exec_callback_QPolarChart_mouseDoubleClickEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_WheelEvent(event *qt6.QGraphicsSceneWheelEvent) {

	C.QPolarChart_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneWheelEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnWheelEvent(slot func(super func(event *qt6.QGraphicsSceneWheelEvent), event *qt6.QGraphicsSceneWheelEvent)) {
	ok := C.QPolarChart_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_wheelEvent
func miqt_exec_callback_QPolarChart_wheelEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneWheelEvent), event *qt6.QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_InputMethodEvent(event *qt6.QInputMethodEvent) {

	C.QPolarChart_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QPolarChart) OnInputMethodEvent(slot func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent)) {
	ok := C.QPolarChart_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_inputMethodEvent
func miqt_exec_callback_QPolarChart_inputMethodEvent(self *C.QPolarChart, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&QPolarChart{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPolarChart) callVirtualBase_InputMethodQuery(query qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPolarChart_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnInputMethodQuery(slot func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QPolarChart_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_inputMethodQuery
func miqt_exec_callback_QPolarChart_inputMethodQuery(self *C.QPolarChart, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(query)

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_SupportsExtension(extension qt6.QGraphicsItem__Extension) bool {

	return (bool)(C.QPolarChart_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QPolarChart) OnSupportsExtension(slot func(super func(extension qt6.QGraphicsItem__Extension) bool, extension qt6.QGraphicsItem__Extension) bool) {
	ok := C.QPolarChart_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_supportsExtension
func miqt_exec_callback_QPolarChart_supportsExtension(self *C.QPolarChart, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt6.QGraphicsItem__Extension) bool, extension qt6.QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPolarChart) callVirtualBase_SetExtension(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant) {

	C.QPolarChart_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(variant.UnsafePointer()))

}
func (this *QPolarChart) OnSetExtension(slot func(super func(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant), extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant)) {
	ok := C.QPolarChart_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_setExtension
func miqt_exec_callback_QPolarChart_setExtension(self *C.QPolarChart, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant), extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__Extension)(extension)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QPolarChart{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QPolarChart) callVirtualBase_Extension(variant *qt6.QVariant) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QPolarChart_virtualbase_extension(unsafe.Pointer(this.h), (*C.QVariant)(variant.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPolarChart) OnExtension(slot func(super func(variant *qt6.QVariant) *qt6.QVariant, variant *qt6.QVariant) *qt6.QVariant) {
	ok := C.QPolarChart_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_extension
func miqt_exec_callback_QPolarChart_extension(self *C.QPolarChart, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *qt6.QVariant) *qt6.QVariant, variant *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_Extension, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QPolarChart) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QPolarChart_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QPolarChart) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QPolarChart_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPolarChart_isEmpty
func miqt_exec_callback_QPolarChart_isEmpty(self *C.QPolarChart, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPolarChart{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QPolarChart) Delete() {
	C.QPolarChart_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPolarChart) GoGC() {
	runtime.SetFinalizer(this, func(this *QPolarChart) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

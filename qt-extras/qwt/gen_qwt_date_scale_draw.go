package qwt

/*

#include "gen_qwt_date_scale_draw.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtDateScaleDraw struct {
	h  *C.QwtDateScaleDraw
	gc *[1]unsafe.Pointer
	*QwtScaleDraw
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtDateScaleDraw) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtScaleDraw.miqtSetGC(gc)
}

func (this *QwtDateScaleDraw) cPointer() *C.QwtDateScaleDraw {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtDateScaleDraw) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtDateScaleDraw constructs the type using only CGO pointers.
func newQwtDateScaleDraw(h *C.QwtDateScaleDraw) *QwtDateScaleDraw {
	if h == nil {
		return nil
	}
	var outptr_QwtScaleDraw *C.QwtScaleDraw = nil
	C.QwtDateScaleDraw_virtbase(h, &outptr_QwtScaleDraw)

	return &QwtDateScaleDraw{h: h,
		QwtScaleDraw: newQwtScaleDraw(outptr_QwtScaleDraw)}
}

// UnsafeNewQwtDateScaleDraw constructs the type using only unsafe pointers.
func UnsafeNewQwtDateScaleDraw(h unsafe.Pointer) *QwtDateScaleDraw {
	return newQwtDateScaleDraw((*C.QwtDateScaleDraw)(h))
}

// NewQwtDateScaleDraw constructs a new QwtDateScaleDraw object.
func NewQwtDateScaleDraw() *QwtDateScaleDraw {

	return newQwtDateScaleDraw(C.QwtDateScaleDraw_new())
}

// NewQwtDateScaleDraw2 constructs a new QwtDateScaleDraw object.
func NewQwtDateScaleDraw2(param1 qt.TimeSpec) *QwtDateScaleDraw {

	return newQwtDateScaleDraw(C.QwtDateScaleDraw_new2((C.int)(param1)))
}

func (this *QwtDateScaleDraw) SetDateFormat(param1 QwtDate__IntervalType, param2 string) {
	defer runtime.KeepAlive(this)
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QwtDateScaleDraw_setDateFormat(this.h, (C.int)(param1), param2_ms)
}

func (this *QwtDateScaleDraw) DateFormat(param1 QwtDate__IntervalType) string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QwtDateScaleDraw_dateFormat(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtDateScaleDraw) SetTimeSpec(timeSpec qt.TimeSpec) {
	defer runtime.KeepAlive(this)
	C.QwtDateScaleDraw_setTimeSpec(this.h, (C.int)(timeSpec))
}

func (this *QwtDateScaleDraw) TimeSpec() qt.TimeSpec {
	defer runtime.KeepAlive(this)
	return (qt.TimeSpec)(C.QwtDateScaleDraw_timeSpec(this.h))
}

func (this *QwtDateScaleDraw) SetUtcOffset(seconds int) {
	defer runtime.KeepAlive(this)
	C.QwtDateScaleDraw_setUtcOffset(this.h, (C.int)(seconds))
}

func (this *QwtDateScaleDraw) UtcOffset() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtDateScaleDraw_utcOffset(this.h))
}

func (this *QwtDateScaleDraw) SetWeek0Type(week0Type QwtDate__Week0Type) {
	defer runtime.KeepAlive(this)
	C.QwtDateScaleDraw_setWeek0Type(this.h, (C.int)(week0Type))
}

func (this *QwtDateScaleDraw) Week0Type() QwtDate__Week0Type {
	defer runtime.KeepAlive(this)
	return (QwtDate__Week0Type)(C.QwtDateScaleDraw_week0Type(this.h))
}

func (this *QwtDateScaleDraw) Label(param1 float64) *QwtText {
	defer runtime.KeepAlive(this)
	_goptr := newQwtText(C.QwtDateScaleDraw_label(this.h, (C.double)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDateScaleDraw) ToDateTime(param1 float64) *qt.QDateTime {
	defer runtime.KeepAlive(this)
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QwtDateScaleDraw_toDateTime(this.h, (C.double)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// LabelTransformation can only be called from a QwtDateScaleDraw that was directly constructed.
func (this *QwtDateScaleDraw) LabelTransformation(param1 *qt.QPointF, param2 *qt.QSizeF) qt.QTransform {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQTransform(unsafe.Pointer(C.QwtDateScaleDraw_protectedbase_labelTransformation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (*C.QSizeF)(param2.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// InvalidateCache can only be called from a QwtDateScaleDraw that was directly constructed.
func (this *QwtDateScaleDraw) InvalidateCache() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QwtDateScaleDraw_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// TickLabel can only be called from a QwtDateScaleDraw that was directly constructed.
func (this *QwtDateScaleDraw) TickLabel(param1 *qt.QFont, value float64) *QwtText {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtText(C.QwtDateScaleDraw_protectedbase_tickLabel(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtDateScaleDraw) callVirtualBase_Label(param1 float64) *QwtText {
	defer runtime.KeepAlive(this)

	_goptr := newQwtText(C.QwtDateScaleDraw_virtualbase_label(unsafe.Pointer(this.h), (C.double)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDateScaleDraw) OnLabel(slot func(super func(param1 float64) *QwtText, param1 float64) *QwtText) {
	ok := C.QwtDateScaleDraw_override_virtual_label(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_label
func miqt_exec_callback_QwtDateScaleDraw_label(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 C.double) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 float64) *QwtText, param1 float64) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	virtualReturn := gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_Label, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtDateScaleDraw_virtualreturncopy_QwtText(virtualReturn.cPointer())

}

func (this *QwtDateScaleDraw) callVirtualBase_IntervalType(param1 *QwtScaleDiv) QwtDate__IntervalType {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	return (QwtDate__IntervalType)(C.QwtDateScaleDraw_virtualbase_intervalType(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QwtDateScaleDraw) OnIntervalType(slot func(super func(param1 *QwtScaleDiv) QwtDate__IntervalType, param1 *QwtScaleDiv) QwtDate__IntervalType) {
	ok := C.QwtDateScaleDraw_override_virtual_intervalType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_intervalType
func miqt_exec_callback_QwtDateScaleDraw_intervalType(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 *C.QwtScaleDiv) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtScaleDiv) QwtDate__IntervalType, param1 *QwtScaleDiv) QwtDate__IntervalType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtScaleDiv(param1)

	virtualReturn := gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_IntervalType, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtDateScaleDraw) callVirtualBase_DateFormatOfDate(param1 *qt.QDateTime, param2 QwtDate__IntervalType) string {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	var _ms C.struct_miqt_string = C.QwtDateScaleDraw_virtualbase_dateFormatOfDate(unsafe.Pointer(this.h), (*C.QDateTime)(param1.UnsafePointer()), (C.int)(param2))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QwtDateScaleDraw) OnDateFormatOfDate(slot func(super func(param1 *qt.QDateTime, param2 QwtDate__IntervalType) string, param1 *qt.QDateTime, param2 QwtDate__IntervalType) string) {
	ok := C.QwtDateScaleDraw_override_virtual_dateFormatOfDate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_dateFormatOfDate
func miqt_exec_callback_QwtDateScaleDraw_dateFormatOfDate(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 *C.QDateTime, param2 C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDateTime, param2 QwtDate__IntervalType) string, param1 *qt.QDateTime, param2 QwtDate__IntervalType) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDateTime(unsafe.Pointer(param1))

	slotval2 := (QwtDate__IntervalType)(param2)

	virtualReturn := gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_DateFormatOfDate, slotval1, slotval2)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))

	return virtualReturn_ms

}

func (this *QwtDateScaleDraw) callVirtualBase_Extent(param1 *qt.QFont) float64 {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	return (float64)(C.QwtDateScaleDraw_virtualbase_extent(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer())))

}
func (this *QwtDateScaleDraw) OnExtent(slot func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64) {
	ok := C.QwtDateScaleDraw_override_virtual_extent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_extent
func miqt_exec_callback_QwtDateScaleDraw_extent(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 *C.QFont) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_Extent, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtDateScaleDraw) callVirtualBase_DrawTick(param1 *qt.QPainter, value float64, lenVal float64) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	C.QwtDateScaleDraw_virtualbase_drawTick(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(value), (C.double)(lenVal))

}
func (this *QwtDateScaleDraw) OnDrawTick(slot func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64)) {
	ok := C.QwtDateScaleDraw_override_virtual_drawTick(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_drawTick
func miqt_exec_callback_QwtDateScaleDraw_drawTick(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 *C.QPainter, value C.double, lenVal C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(value)

	slotval3 := (float64)(lenVal)

	gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_DrawTick, slotval1, slotval2, slotval3)

}

func (this *QwtDateScaleDraw) callVirtualBase_DrawBackbone(param1 *qt.QPainter) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	C.QwtDateScaleDraw_virtualbase_drawBackbone(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtDateScaleDraw) OnDrawBackbone(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtDateScaleDraw_override_virtual_drawBackbone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_drawBackbone
func miqt_exec_callback_QwtDateScaleDraw_drawBackbone(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_DrawBackbone, slotval1)

}

func (this *QwtDateScaleDraw) callVirtualBase_DrawLabel(param1 *qt.QPainter, value float64) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	C.QwtDateScaleDraw_virtualbase_drawLabel(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(value))

}
func (this *QwtDateScaleDraw) OnDrawLabel(slot func(super func(param1 *qt.QPainter, value float64), param1 *qt.QPainter, value float64)) {
	ok := C.QwtDateScaleDraw_override_virtual_drawLabel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_drawLabel
func miqt_exec_callback_QwtDateScaleDraw_drawLabel(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 *C.QPainter, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, value float64), param1 *qt.QPainter, value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(value)

	gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_DrawLabel, slotval1, slotval2)

}

func (this *QwtDateScaleDraw) callVirtualBase_Draw(param1 *qt.QPainter, param2 *qt.QPalette) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)

	C.QwtDateScaleDraw_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPalette)(param2.UnsafePointer()))

}
func (this *QwtDateScaleDraw) OnDraw(slot func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette)) {
	ok := C.QwtDateScaleDraw_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleDraw_draw
func miqt_exec_callback_QwtDateScaleDraw_draw(self *C.QwtDateScaleDraw, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPalette(unsafe.Pointer(param2))

	gofunc((&QwtDateScaleDraw{h: self}).callVirtualBase_Draw, slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *QwtDateScaleDraw) Delete() {
	C.QwtDateScaleDraw_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtDateScaleDraw) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtDateScaleDraw_delete((*C.QwtDateScaleDraw)(gc[0]))
	})
	this.miqtSetGC(gc)
}

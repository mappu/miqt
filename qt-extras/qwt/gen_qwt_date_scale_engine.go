package qwt

/*

#include "gen_qwt_date_scale_engine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtDateScaleEngine struct {
	h *C.QwtDateScaleEngine
	*QwtLinearScaleEngine
}

func (this *QwtDateScaleEngine) cPointer() *C.QwtDateScaleEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtDateScaleEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtDateScaleEngine constructs the type using only CGO pointers.
func newQwtDateScaleEngine(h *C.QwtDateScaleEngine) *QwtDateScaleEngine {
	if h == nil {
		return nil
	}
	var outptr_QwtLinearScaleEngine *C.QwtLinearScaleEngine = nil
	C.QwtDateScaleEngine_virtbase(h, &outptr_QwtLinearScaleEngine)

	return &QwtDateScaleEngine{h: h,
		QwtLinearScaleEngine: newQwtLinearScaleEngine(outptr_QwtLinearScaleEngine)}
}

// UnsafeNewQwtDateScaleEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtDateScaleEngine(h unsafe.Pointer) *QwtDateScaleEngine {
	return newQwtDateScaleEngine((*C.QwtDateScaleEngine)(h))
}

// NewQwtDateScaleEngine constructs a new QwtDateScaleEngine object.
func NewQwtDateScaleEngine() *QwtDateScaleEngine {

	return newQwtDateScaleEngine(C.QwtDateScaleEngine_new())
}

// NewQwtDateScaleEngine2 constructs a new QwtDateScaleEngine object.
func NewQwtDateScaleEngine2(param1 *QwtDateScaleEngine) *QwtDateScaleEngine {

	return newQwtDateScaleEngine(C.QwtDateScaleEngine_new2(param1.cPointer()))
}

// NewQwtDateScaleEngine3 constructs a new QwtDateScaleEngine object.
func NewQwtDateScaleEngine3(param1 qt.TimeSpec) *QwtDateScaleEngine {

	return newQwtDateScaleEngine(C.QwtDateScaleEngine_new3((C.int)(param1)))
}

func (this *QwtDateScaleEngine) SetTimeSpec(timeSpec qt.TimeSpec) {
	C.QwtDateScaleEngine_setTimeSpec(this.h, (C.int)(timeSpec))
}

func (this *QwtDateScaleEngine) TimeSpec() qt.TimeSpec {
	return (qt.TimeSpec)(C.QwtDateScaleEngine_timeSpec(this.h))
}

func (this *QwtDateScaleEngine) SetUtcOffset(seconds int) {
	C.QwtDateScaleEngine_setUtcOffset(this.h, (C.int)(seconds))
}

func (this *QwtDateScaleEngine) UtcOffset() int {
	return (int)(C.QwtDateScaleEngine_utcOffset(this.h))
}

func (this *QwtDateScaleEngine) SetWeek0Type(week0Type QwtDate__Week0Type) {
	C.QwtDateScaleEngine_setWeek0Type(this.h, (C.int)(week0Type))
}

func (this *QwtDateScaleEngine) Week0Type() QwtDate__Week0Type {
	return (QwtDate__Week0Type)(C.QwtDateScaleEngine_week0Type(this.h))
}

func (this *QwtDateScaleEngine) SetMaxWeeks(maxWeeks int) {
	C.QwtDateScaleEngine_setMaxWeeks(this.h, (C.int)(maxWeeks))
}

func (this *QwtDateScaleEngine) MaxWeeks() int {
	return (int)(C.QwtDateScaleEngine_maxWeeks(this.h))
}

func (this *QwtDateScaleEngine) AutoScale(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64) {
	C.QwtDateScaleEngine_autoScale(this.h, (C.int)(maxNumSteps), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(stepSize)))
}

func (this *QwtDateScaleEngine) DivideScale(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv {
	_goptr := newQwtScaleDiv(C.QwtDateScaleEngine_divideScale(this.h, (C.double)(x1), (C.double)(x2), (C.int)(maxMajorSteps), (C.int)(maxMinorSteps), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDateScaleEngine) IntervalType(param1 *qt.QDateTime, param2 *qt.QDateTime, maxSteps int) QwtDate__IntervalType {
	return (QwtDate__IntervalType)(C.QwtDateScaleEngine_intervalType(this.h, (*C.QDateTime)(param1.UnsafePointer()), (*C.QDateTime)(param2.UnsafePointer()), (C.int)(maxSteps)))
}

func (this *QwtDateScaleEngine) ToDateTime(param1 float64) *qt.QDateTime {
	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QwtDateScaleEngine_toDateTime(this.h, (C.double)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDateScaleEngine) OperatorAssign(param1 *QwtDateScaleEngine) {
	C.QwtDateScaleEngine_operatorAssign(this.h, param1.cPointer())
}

// Align can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) Align(param1 *QwtInterval, stepSize float64) QwtInterval {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtDateScaleEngine_protectedbase_align(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildTicks can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) BuildTicks(param1 *QwtInterval, stepSize float64, maxMinorSteps int, ticks []float64) {
	ticks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(ticks))))
	defer C.free(unsafe.Pointer(ticks_CArray))
	for i := range ticks {
		ticks_CArray[i] = (C.double)(ticks[i])
	}
	ticks_ma := C.struct_miqt_array{len: C.size_t(len(ticks)), data: unsafe.Pointer(ticks_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QwtDateScaleEngine_protectedbase_buildTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(stepSize), (C.int)(maxMinorSteps), ticks_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BuildMajorTicks can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) BuildMajorTicks(interval *QwtInterval, stepSize float64) []float64 {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QwtDateScaleEngine_protectedbase_buildMajorTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), interval.cPointer(), (C.double)(stepSize))
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildMinorTicks can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) BuildMinorTicks(majorTicks []float64, maxMinorSteps int, stepSize float64, minorTicks []float64, mediumTicks []float64) {
	majorTicks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(majorTicks))))
	defer C.free(unsafe.Pointer(majorTicks_CArray))
	for i := range majorTicks {
		majorTicks_CArray[i] = (C.double)(majorTicks[i])
	}
	majorTicks_ma := C.struct_miqt_array{len: C.size_t(len(majorTicks)), data: unsafe.Pointer(majorTicks_CArray)}
	minorTicks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(minorTicks))))
	defer C.free(unsafe.Pointer(minorTicks_CArray))
	for i := range minorTicks {
		minorTicks_CArray[i] = (C.double)(minorTicks[i])
	}
	minorTicks_ma := C.struct_miqt_array{len: C.size_t(len(minorTicks)), data: unsafe.Pointer(minorTicks_CArray)}
	mediumTicks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(mediumTicks))))
	defer C.free(unsafe.Pointer(mediumTicks_CArray))
	for i := range mediumTicks {
		mediumTicks_CArray[i] = (C.double)(mediumTicks[i])
	}
	mediumTicks_ma := C.struct_miqt_array{len: C.size_t(len(mediumTicks)), data: unsafe.Pointer(mediumTicks_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QwtDateScaleEngine_protectedbase_buildMinorTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), majorTicks_ma, (C.int)(maxMinorSteps), (C.double)(stepSize), minorTicks_ma, mediumTicks_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Contains can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) Contains(param1 *QwtInterval, value float64) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtDateScaleEngine_protectedbase_contains(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Strip can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) Strip(param1 []float64, param2 *QwtInterval) []float64 {
	param1_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray))
	for i := range param1 {
		param1_CArray[i] = (C.double)(param1[i])
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray)}

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QwtDateScaleEngine_protectedbase_strip(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1_ma, param2.cPointer())
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DivideInterval can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) DivideInterval(intervalSize float64, numSteps int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtDateScaleEngine_protectedbase_divideInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(intervalSize), (C.int)(numSteps)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildInterval can only be called from a QwtDateScaleEngine that was directly constructed.
func (this *QwtDateScaleEngine) BuildInterval(value float64) QwtInterval {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtDateScaleEngine_protectedbase_buildInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtDateScaleEngine) callVirtualBase_AutoScale(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64) {

	C.QwtDateScaleEngine_virtualbase_autoScale(unsafe.Pointer(this.h), (C.int)(maxNumSteps), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(stepSize)))

}
func (this *QwtDateScaleEngine) OnAutoScale(slot func(super func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64), maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64)) {
	ok := C.QwtDateScaleEngine_override_virtual_autoScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleEngine_autoScale
func miqt_exec_callback_QwtDateScaleEngine_autoScale(self *C.QwtDateScaleEngine, cb C.intptr_t, maxNumSteps C.int, x1 *C.double, x2 *C.double, stepSize *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64), maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(maxNumSteps)

	slotval2 := (*float64)(unsafe.Pointer(x1))

	slotval3 := (*float64)(unsafe.Pointer(x2))

	slotval4 := (*float64)(unsafe.Pointer(stepSize))

	gofunc((&QwtDateScaleEngine{h: self}).callVirtualBase_AutoScale, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtDateScaleEngine) callVirtualBase_DivideScale(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv {

	_goptr := newQwtScaleDiv(C.QwtDateScaleEngine_virtualbase_divideScale(unsafe.Pointer(this.h), (C.double)(x1), (C.double)(x2), (C.int)(maxMajorSteps), (C.int)(maxMinorSteps), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDateScaleEngine) OnDivideScale(slot func(super func(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv, x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv) {
	ok := C.QwtDateScaleEngine_override_virtual_divideScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleEngine_divideScale
func miqt_exec_callback_QwtDateScaleEngine_divideScale(self *C.QwtDateScaleEngine, cb C.intptr_t, x1 C.double, x2 C.double, maxMajorSteps C.int, maxMinorSteps C.int, stepSize C.double) *C.QwtScaleDiv {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv, x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(x1)

	slotval2 := (float64)(x2)

	slotval3 := (int)(maxMajorSteps)

	slotval4 := (int)(maxMinorSteps)

	slotval5 := (float64)(stepSize)

	virtualReturn := gofunc((&QwtDateScaleEngine{h: self}).callVirtualBase_DivideScale, slotval1, slotval2, slotval3, slotval4, slotval5)

	return virtualReturn.cPointer()

}

func (this *QwtDateScaleEngine) callVirtualBase_IntervalType(param1 *qt.QDateTime, param2 *qt.QDateTime, maxSteps int) QwtDate__IntervalType {

	return (QwtDate__IntervalType)(C.QwtDateScaleEngine_virtualbase_intervalType(unsafe.Pointer(this.h), (*C.QDateTime)(param1.UnsafePointer()), (*C.QDateTime)(param2.UnsafePointer()), (C.int)(maxSteps)))

}
func (this *QwtDateScaleEngine) OnIntervalType(slot func(super func(param1 *qt.QDateTime, param2 *qt.QDateTime, maxSteps int) QwtDate__IntervalType, param1 *qt.QDateTime, param2 *qt.QDateTime, maxSteps int) QwtDate__IntervalType) {
	ok := C.QwtDateScaleEngine_override_virtual_intervalType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleEngine_intervalType
func miqt_exec_callback_QwtDateScaleEngine_intervalType(self *C.QwtDateScaleEngine, cb C.intptr_t, param1 *C.QDateTime, param2 *C.QDateTime, maxSteps C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDateTime, param2 *qt.QDateTime, maxSteps int) QwtDate__IntervalType, param1 *qt.QDateTime, param2 *qt.QDateTime, maxSteps int) QwtDate__IntervalType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDateTime(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQDateTime(unsafe.Pointer(param2))

	slotval3 := (int)(maxSteps)

	virtualReturn := gofunc((&QwtDateScaleEngine{h: self}).callVirtualBase_IntervalType, slotval1, slotval2, slotval3)

	return (C.int)(virtualReturn)

}

func (this *QwtDateScaleEngine) callVirtualBase_AlignDate(param1 *qt.QDateTime, stepSize float64, param3 QwtDate__IntervalType, up bool) *qt.QDateTime {

	_goptr := qt.UnsafeNewQDateTime(unsafe.Pointer(C.QwtDateScaleEngine_virtualbase_alignDate(unsafe.Pointer(this.h), (*C.QDateTime)(param1.UnsafePointer()), (C.double)(stepSize), (C.int)(param3), (C.bool)(up))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDateScaleEngine) OnAlignDate(slot func(super func(param1 *qt.QDateTime, stepSize float64, param3 QwtDate__IntervalType, up bool) *qt.QDateTime, param1 *qt.QDateTime, stepSize float64, param3 QwtDate__IntervalType, up bool) *qt.QDateTime) {
	ok := C.QwtDateScaleEngine_override_virtual_alignDate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDateScaleEngine_alignDate
func miqt_exec_callback_QwtDateScaleEngine_alignDate(self *C.QwtDateScaleEngine, cb C.intptr_t, param1 *C.QDateTime, stepSize C.double, param3 C.int, up C.bool) *C.QDateTime {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QDateTime, stepSize float64, param3 QwtDate__IntervalType, up bool) *qt.QDateTime, param1 *qt.QDateTime, stepSize float64, param3 QwtDate__IntervalType, up bool) *qt.QDateTime)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDateTime(unsafe.Pointer(param1))

	slotval2 := (float64)(stepSize)

	slotval3 := (QwtDate__IntervalType)(param3)

	slotval4 := (bool)(up)

	virtualReturn := gofunc((&QwtDateScaleEngine{h: self}).callVirtualBase_AlignDate, slotval1, slotval2, slotval3, slotval4)

	return (*C.QDateTime)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QwtDateScaleEngine) Delete() {
	C.QwtDateScaleEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtDateScaleEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtDateScaleEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package qwt

/*

#include "gen_qwt_scale_engine.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtScaleEngine__Attribute int

const (
	QwtScaleEngine__NoAttribute      QwtScaleEngine__Attribute = 0
	QwtScaleEngine__IncludeReference QwtScaleEngine__Attribute = 1
	QwtScaleEngine__Symmetric        QwtScaleEngine__Attribute = 2
	QwtScaleEngine__Floating         QwtScaleEngine__Attribute = 4
	QwtScaleEngine__Inverted         QwtScaleEngine__Attribute = 8
)

type QwtScaleArithmetic struct {
	h *C.QwtScaleArithmetic
}

func (this *QwtScaleArithmetic) cPointer() *C.QwtScaleArithmetic {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtScaleArithmetic) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtScaleArithmetic constructs the type using only CGO pointers.
func newQwtScaleArithmetic(h *C.QwtScaleArithmetic) *QwtScaleArithmetic {
	if h == nil {
		return nil
	}

	return &QwtScaleArithmetic{h: h}
}

// UnsafeNewQwtScaleArithmetic constructs the type using only unsafe pointers.
func UnsafeNewQwtScaleArithmetic(h unsafe.Pointer) *QwtScaleArithmetic {
	return newQwtScaleArithmetic((*C.QwtScaleArithmetic)(h))
}

func QwtScaleArithmetic_CeilEps(value float64, intervalSize float64) float64 {
	return (float64)(C.QwtScaleArithmetic_ceilEps((C.double)(value), (C.double)(intervalSize)))
}

func QwtScaleArithmetic_FloorEps(value float64, intervalSize float64) float64 {
	return (float64)(C.QwtScaleArithmetic_floorEps((C.double)(value), (C.double)(intervalSize)))
}

func QwtScaleArithmetic_DivideEps(intervalSize float64, numSteps float64) float64 {
	return (float64)(C.QwtScaleArithmetic_divideEps((C.double)(intervalSize), (C.double)(numSteps)))
}

func QwtScaleArithmetic_DivideInterval(intervalSize float64, numSteps int, base uint) float64 {
	return (float64)(C.QwtScaleArithmetic_divideInterval((C.double)(intervalSize), (C.int)(numSteps), (C.uint)(base)))
}

// Delete this object from C++ memory.
func (this *QwtScaleArithmetic) Delete() {
	C.QwtScaleArithmetic_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtScaleArithmetic) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtScaleArithmetic) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtScaleEngine struct {
	h *C.QwtScaleEngine
}

func (this *QwtScaleEngine) cPointer() *C.QwtScaleEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtScaleEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtScaleEngine constructs the type using only CGO pointers.
func newQwtScaleEngine(h *C.QwtScaleEngine) *QwtScaleEngine {
	if h == nil {
		return nil
	}

	return &QwtScaleEngine{h: h}
}

// UnsafeNewQwtScaleEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtScaleEngine(h unsafe.Pointer) *QwtScaleEngine {
	return newQwtScaleEngine((*C.QwtScaleEngine)(h))
}

// NewQwtScaleEngine constructs a new QwtScaleEngine object.
func NewQwtScaleEngine() *QwtScaleEngine {

	return newQwtScaleEngine(C.QwtScaleEngine_new())
}

// NewQwtScaleEngine2 constructs a new QwtScaleEngine object.
func NewQwtScaleEngine2(param1 *QwtScaleEngine) *QwtScaleEngine {

	return newQwtScaleEngine(C.QwtScaleEngine_new2(param1.cPointer()))
}

// NewQwtScaleEngine3 constructs a new QwtScaleEngine object.
func NewQwtScaleEngine3(base uint) *QwtScaleEngine {

	return newQwtScaleEngine(C.QwtScaleEngine_new3((C.uint)(base)))
}

func (this *QwtScaleEngine) SetBase(base uint) {
	C.QwtScaleEngine_setBase(this.h, (C.uint)(base))
}

func (this *QwtScaleEngine) Base() uint {
	return (uint)(C.QwtScaleEngine_base(this.h))
}

func (this *QwtScaleEngine) SetAttribute(param1 QwtScaleEngine__Attribute) {
	C.QwtScaleEngine_setAttribute(this.h, (C.int)(param1))
}

func (this *QwtScaleEngine) TestAttribute(param1 QwtScaleEngine__Attribute) bool {
	return (bool)(C.QwtScaleEngine_testAttribute(this.h, (C.int)(param1)))
}

func (this *QwtScaleEngine) SetAttributes(attributes QwtScaleEngine__Attribute) {
	C.QwtScaleEngine_setAttributes(this.h, (C.int)(attributes))
}

func (this *QwtScaleEngine) Attributes() QwtScaleEngine__Attribute {
	return (QwtScaleEngine__Attribute)(C.QwtScaleEngine_attributes(this.h))
}

func (this *QwtScaleEngine) SetReference(reference float64) {
	C.QwtScaleEngine_setReference(this.h, (C.double)(reference))
}

func (this *QwtScaleEngine) Reference() float64 {
	return (float64)(C.QwtScaleEngine_reference(this.h))
}

func (this *QwtScaleEngine) SetMargins(lower float64, upper float64) {
	C.QwtScaleEngine_setMargins(this.h, (C.double)(lower), (C.double)(upper))
}

func (this *QwtScaleEngine) LowerMargin() float64 {
	return (float64)(C.QwtScaleEngine_lowerMargin(this.h))
}

func (this *QwtScaleEngine) UpperMargin() float64 {
	return (float64)(C.QwtScaleEngine_upperMargin(this.h))
}

func (this *QwtScaleEngine) AutoScale(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64) {
	C.QwtScaleEngine_autoScale(this.h, (C.int)(maxNumSteps), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(stepSize)))
}

func (this *QwtScaleEngine) DivideScale(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv {
	_goptr := newQwtScaleDiv(C.QwtScaleEngine_divideScale(this.h, (C.double)(x1), (C.double)(x2), (C.int)(maxMajorSteps), (C.int)(maxMinorSteps), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleEngine) SetTransformation(transformation *QwtTransform) {
	C.QwtScaleEngine_setTransformation(this.h, transformation.cPointer())
}

func (this *QwtScaleEngine) Transformation() *QwtTransform {
	return newQwtTransform(C.QwtScaleEngine_transformation(this.h))
}

func (this *QwtScaleEngine) OperatorAssign(param1 *QwtScaleEngine) {
	C.QwtScaleEngine_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtScaleEngine) SetAttribute2(param1 QwtScaleEngine__Attribute, on bool) {
	C.QwtScaleEngine_setAttribute2(this.h, (C.int)(param1), (C.bool)(on))
}

// Contains can only be called from a QwtScaleEngine that was directly constructed.
func (this *QwtScaleEngine) Contains(param1 *QwtInterval, value float64) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtScaleEngine_protectedbase_contains(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Strip can only be called from a QwtScaleEngine that was directly constructed.
func (this *QwtScaleEngine) Strip(param1 []float64, param2 *QwtInterval) []float64 {
	param1_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray))
	for i := range param1 {
		param1_CArray[i] = (C.double)(param1[i])
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray)}

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QwtScaleEngine_protectedbase_strip(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1_ma, param2.cPointer())
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

// DivideInterval can only be called from a QwtScaleEngine that was directly constructed.
func (this *QwtScaleEngine) DivideInterval(intervalSize float64, numSteps int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtScaleEngine_protectedbase_divideInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(intervalSize), (C.int)(numSteps)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildInterval can only be called from a QwtScaleEngine that was directly constructed.
func (this *QwtScaleEngine) BuildInterval(value float64) QwtInterval {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtScaleEngine_protectedbase_buildInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QwtScaleEngine) OnAutoScale(slot func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64)) {
	ok := C.QwtScaleEngine_override_virtual_autoScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleEngine_autoScale
func miqt_exec_callback_QwtScaleEngine_autoScale(self *C.QwtScaleEngine, cb C.intptr_t, maxNumSteps C.int, x1 *C.double, x2 *C.double, stepSize *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(maxNumSteps)

	slotval2 := (*float64)(unsafe.Pointer(x1))

	slotval3 := (*float64)(unsafe.Pointer(x2))

	slotval4 := (*float64)(unsafe.Pointer(stepSize))

	gofunc(slotval1, slotval2, slotval3, slotval4)

}
func (this *QwtScaleEngine) OnDivideScale(slot func(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv) {
	ok := C.QwtScaleEngine_override_virtual_divideScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleEngine_divideScale
func miqt_exec_callback_QwtScaleEngine_divideScale(self *C.QwtScaleEngine, cb C.intptr_t, x1 C.double, x2 C.double, maxMajorSteps C.int, maxMinorSteps C.int, stepSize C.double) *C.QwtScaleDiv {
	gofunc, ok := cgo.Handle(cb).Value().(func(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(x1)

	slotval2 := (float64)(x2)

	slotval3 := (int)(maxMajorSteps)

	slotval4 := (int)(maxMinorSteps)

	slotval5 := (float64)(stepSize)

	virtualReturn := gofunc(slotval1, slotval2, slotval3, slotval4, slotval5)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QwtScaleEngine) Delete() {
	C.QwtScaleEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtScaleEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtScaleEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtLinearScaleEngine struct {
	h *C.QwtLinearScaleEngine
	*QwtScaleEngine
}

func (this *QwtLinearScaleEngine) cPointer() *C.QwtLinearScaleEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtLinearScaleEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtLinearScaleEngine constructs the type using only CGO pointers.
func newQwtLinearScaleEngine(h *C.QwtLinearScaleEngine) *QwtLinearScaleEngine {
	if h == nil {
		return nil
	}
	var outptr_QwtScaleEngine *C.QwtScaleEngine = nil
	C.QwtLinearScaleEngine_virtbase(h, &outptr_QwtScaleEngine)

	return &QwtLinearScaleEngine{h: h,
		QwtScaleEngine: newQwtScaleEngine(outptr_QwtScaleEngine)}
}

// UnsafeNewQwtLinearScaleEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtLinearScaleEngine(h unsafe.Pointer) *QwtLinearScaleEngine {
	return newQwtLinearScaleEngine((*C.QwtLinearScaleEngine)(h))
}

// NewQwtLinearScaleEngine constructs a new QwtLinearScaleEngine object.
func NewQwtLinearScaleEngine() *QwtLinearScaleEngine {

	return newQwtLinearScaleEngine(C.QwtLinearScaleEngine_new())
}

// NewQwtLinearScaleEngine2 constructs a new QwtLinearScaleEngine object.
func NewQwtLinearScaleEngine2(param1 *QwtLinearScaleEngine) *QwtLinearScaleEngine {

	return newQwtLinearScaleEngine(C.QwtLinearScaleEngine_new2(param1.cPointer()))
}

// NewQwtLinearScaleEngine3 constructs a new QwtLinearScaleEngine object.
func NewQwtLinearScaleEngine3(base uint) *QwtLinearScaleEngine {

	return newQwtLinearScaleEngine(C.QwtLinearScaleEngine_new3((C.uint)(base)))
}

func (this *QwtLinearScaleEngine) AutoScale(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64) {
	C.QwtLinearScaleEngine_autoScale(this.h, (C.int)(maxNumSteps), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(stepSize)))
}

func (this *QwtLinearScaleEngine) DivideScale(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv {
	_goptr := newQwtScaleDiv(C.QwtLinearScaleEngine_divideScale(this.h, (C.double)(x1), (C.double)(x2), (C.int)(maxMajorSteps), (C.int)(maxMinorSteps), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLinearScaleEngine) OperatorAssign(param1 *QwtLinearScaleEngine) {
	C.QwtLinearScaleEngine_operatorAssign(this.h, param1.cPointer())
}

// Align can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) Align(param1 *QwtInterval, stepSize float64) QwtInterval {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtLinearScaleEngine_protectedbase_align(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildTicks can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) BuildTicks(param1 *QwtInterval, stepSize float64, maxMinorSteps int, ticks []float64) {
	ticks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(ticks))))
	defer C.free(unsafe.Pointer(ticks_CArray))
	for i := range ticks {
		ticks_CArray[i] = (C.double)(ticks[i])
	}
	ticks_ma := C.struct_miqt_array{len: C.size_t(len(ticks)), data: unsafe.Pointer(ticks_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QwtLinearScaleEngine_protectedbase_buildTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(stepSize), (C.int)(maxMinorSteps), ticks_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BuildMajorTicks can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) BuildMajorTicks(interval *QwtInterval, stepSize float64) []float64 {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QwtLinearScaleEngine_protectedbase_buildMajorTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), interval.cPointer(), (C.double)(stepSize))
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

// BuildMinorTicks can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) BuildMinorTicks(majorTicks []float64, maxMinorSteps int, stepSize float64, minorTicks []float64, mediumTicks []float64) {
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
	C.QwtLinearScaleEngine_protectedbase_buildMinorTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), majorTicks_ma, (C.int)(maxMinorSteps), (C.double)(stepSize), minorTicks_ma, mediumTicks_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Contains can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) Contains(param1 *QwtInterval, value float64) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtLinearScaleEngine_protectedbase_contains(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Strip can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) Strip(param1 []float64, param2 *QwtInterval) []float64 {
	param1_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray))
	for i := range param1 {
		param1_CArray[i] = (C.double)(param1[i])
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray)}

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QwtLinearScaleEngine_protectedbase_strip(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1_ma, param2.cPointer())
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

// DivideInterval can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) DivideInterval(intervalSize float64, numSteps int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtLinearScaleEngine_protectedbase_divideInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(intervalSize), (C.int)(numSteps)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildInterval can only be called from a QwtLinearScaleEngine that was directly constructed.
func (this *QwtLinearScaleEngine) BuildInterval(value float64) QwtInterval {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtLinearScaleEngine_protectedbase_buildInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtLinearScaleEngine) callVirtualBase_AutoScale(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64) {

	C.QwtLinearScaleEngine_virtualbase_autoScale(unsafe.Pointer(this.h), (C.int)(maxNumSteps), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(stepSize)))

}
func (this *QwtLinearScaleEngine) OnAutoScale(slot func(super func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64), maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64)) {
	ok := C.QwtLinearScaleEngine_override_virtual_autoScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLinearScaleEngine_autoScale
func miqt_exec_callback_QwtLinearScaleEngine_autoScale(self *C.QwtLinearScaleEngine, cb C.intptr_t, maxNumSteps C.int, x1 *C.double, x2 *C.double, stepSize *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64), maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(maxNumSteps)

	slotval2 := (*float64)(unsafe.Pointer(x1))

	slotval3 := (*float64)(unsafe.Pointer(x2))

	slotval4 := (*float64)(unsafe.Pointer(stepSize))

	gofunc((&QwtLinearScaleEngine{h: self}).callVirtualBase_AutoScale, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtLinearScaleEngine) callVirtualBase_DivideScale(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv {

	_goptr := newQwtScaleDiv(C.QwtLinearScaleEngine_virtualbase_divideScale(unsafe.Pointer(this.h), (C.double)(x1), (C.double)(x2), (C.int)(maxMajorSteps), (C.int)(maxMinorSteps), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtLinearScaleEngine) OnDivideScale(slot func(super func(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv, x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv) {
	ok := C.QwtLinearScaleEngine_override_virtual_divideScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLinearScaleEngine_divideScale
func miqt_exec_callback_QwtLinearScaleEngine_divideScale(self *C.QwtLinearScaleEngine, cb C.intptr_t, x1 C.double, x2 C.double, maxMajorSteps C.int, maxMinorSteps C.int, stepSize C.double) *C.QwtScaleDiv {
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

	virtualReturn := gofunc((&QwtLinearScaleEngine{h: self}).callVirtualBase_DivideScale, slotval1, slotval2, slotval3, slotval4, slotval5)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QwtLinearScaleEngine) Delete() {
	C.QwtLinearScaleEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtLinearScaleEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtLinearScaleEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtLogScaleEngine struct {
	h *C.QwtLogScaleEngine
	*QwtScaleEngine
}

func (this *QwtLogScaleEngine) cPointer() *C.QwtLogScaleEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtLogScaleEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtLogScaleEngine constructs the type using only CGO pointers.
func newQwtLogScaleEngine(h *C.QwtLogScaleEngine) *QwtLogScaleEngine {
	if h == nil {
		return nil
	}
	var outptr_QwtScaleEngine *C.QwtScaleEngine = nil
	C.QwtLogScaleEngine_virtbase(h, &outptr_QwtScaleEngine)

	return &QwtLogScaleEngine{h: h,
		QwtScaleEngine: newQwtScaleEngine(outptr_QwtScaleEngine)}
}

// UnsafeNewQwtLogScaleEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtLogScaleEngine(h unsafe.Pointer) *QwtLogScaleEngine {
	return newQwtLogScaleEngine((*C.QwtLogScaleEngine)(h))
}

// NewQwtLogScaleEngine constructs a new QwtLogScaleEngine object.
func NewQwtLogScaleEngine() *QwtLogScaleEngine {

	return newQwtLogScaleEngine(C.QwtLogScaleEngine_new())
}

// NewQwtLogScaleEngine2 constructs a new QwtLogScaleEngine object.
func NewQwtLogScaleEngine2(param1 *QwtLogScaleEngine) *QwtLogScaleEngine {

	return newQwtLogScaleEngine(C.QwtLogScaleEngine_new2(param1.cPointer()))
}

// NewQwtLogScaleEngine3 constructs a new QwtLogScaleEngine object.
func NewQwtLogScaleEngine3(base uint) *QwtLogScaleEngine {

	return newQwtLogScaleEngine(C.QwtLogScaleEngine_new3((C.uint)(base)))
}

func (this *QwtLogScaleEngine) AutoScale(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64) {
	C.QwtLogScaleEngine_autoScale(this.h, (C.int)(maxNumSteps), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(stepSize)))
}

func (this *QwtLogScaleEngine) DivideScale(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv {
	_goptr := newQwtScaleDiv(C.QwtLogScaleEngine_divideScale(this.h, (C.double)(x1), (C.double)(x2), (C.int)(maxMajorSteps), (C.int)(maxMinorSteps), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLogScaleEngine) OperatorAssign(param1 *QwtLogScaleEngine) {
	C.QwtLogScaleEngine_operatorAssign(this.h, param1.cPointer())
}

// Align can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) Align(param1 *QwtInterval, stepSize float64) QwtInterval {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtLogScaleEngine_protectedbase_align(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildTicks can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) BuildTicks(param1 *QwtInterval, stepSize float64, maxMinorSteps int, ticks []float64) {
	ticks_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(ticks))))
	defer C.free(unsafe.Pointer(ticks_CArray))
	for i := range ticks {
		ticks_CArray[i] = (C.double)(ticks[i])
	}
	ticks_ma := C.struct_miqt_array{len: C.size_t(len(ticks)), data: unsafe.Pointer(ticks_CArray)}

	var _dynamic_cast_ok C.bool = false
	C.QwtLogScaleEngine_protectedbase_buildTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(stepSize), (C.int)(maxMinorSteps), ticks_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// BuildMajorTicks can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) BuildMajorTicks(interval *QwtInterval, stepSize float64) []float64 {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QwtLogScaleEngine_protectedbase_buildMajorTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), interval.cPointer(), (C.double)(stepSize))
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

// BuildMinorTicks can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) BuildMinorTicks(majorTicks []float64, maxMinorSteps int, stepSize float64, minorTicks []float64, mediumTicks []float64) {
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
	C.QwtLogScaleEngine_protectedbase_buildMinorTicks(&_dynamic_cast_ok, unsafe.Pointer(this.h), majorTicks_ma, (C.int)(maxMinorSteps), (C.double)(stepSize), minorTicks_ma, mediumTicks_ma)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Contains can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) Contains(param1 *QwtInterval, value float64) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtLogScaleEngine_protectedbase_contains(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Strip can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) Strip(param1 []float64, param2 *QwtInterval) []float64 {
	param1_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(param1))))
	defer C.free(unsafe.Pointer(param1_CArray))
	for i := range param1 {
		param1_CArray[i] = (C.double)(param1[i])
	}
	param1_ma := C.struct_miqt_array{len: C.size_t(len(param1)), data: unsafe.Pointer(param1_CArray)}

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QwtLogScaleEngine_protectedbase_strip(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1_ma, param2.cPointer())
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

// DivideInterval can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) DivideInterval(intervalSize float64, numSteps int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtLogScaleEngine_protectedbase_divideInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(intervalSize), (C.int)(numSteps)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// BuildInterval can only be called from a QwtLogScaleEngine that was directly constructed.
func (this *QwtLogScaleEngine) BuildInterval(value float64) QwtInterval {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtLogScaleEngine_protectedbase_buildInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtLogScaleEngine) callVirtualBase_AutoScale(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64) {

	C.QwtLogScaleEngine_virtualbase_autoScale(unsafe.Pointer(this.h), (C.int)(maxNumSteps), (*C.double)(unsafe.Pointer(x1)), (*C.double)(unsafe.Pointer(x2)), (*C.double)(unsafe.Pointer(stepSize)))

}
func (this *QwtLogScaleEngine) OnAutoScale(slot func(super func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64), maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64)) {
	ok := C.QwtLogScaleEngine_override_virtual_autoScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLogScaleEngine_autoScale
func miqt_exec_callback_QwtLogScaleEngine_autoScale(self *C.QwtLogScaleEngine, cb C.intptr_t, maxNumSteps C.int, x1 *C.double, x2 *C.double, stepSize *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64), maxNumSteps int, x1 *float64, x2 *float64, stepSize *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(maxNumSteps)

	slotval2 := (*float64)(unsafe.Pointer(x1))

	slotval3 := (*float64)(unsafe.Pointer(x2))

	slotval4 := (*float64)(unsafe.Pointer(stepSize))

	gofunc((&QwtLogScaleEngine{h: self}).callVirtualBase_AutoScale, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtLogScaleEngine) callVirtualBase_DivideScale(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv {

	_goptr := newQwtScaleDiv(C.QwtLogScaleEngine_virtualbase_divideScale(unsafe.Pointer(this.h), (C.double)(x1), (C.double)(x2), (C.int)(maxMajorSteps), (C.int)(maxMinorSteps), (C.double)(stepSize)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtLogScaleEngine) OnDivideScale(slot func(super func(x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv, x1 float64, x2 float64, maxMajorSteps int, maxMinorSteps int, stepSize float64) *QwtScaleDiv) {
	ok := C.QwtLogScaleEngine_override_virtual_divideScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLogScaleEngine_divideScale
func miqt_exec_callback_QwtLogScaleEngine_divideScale(self *C.QwtLogScaleEngine, cb C.intptr_t, x1 C.double, x2 C.double, maxMajorSteps C.int, maxMinorSteps C.int, stepSize C.double) *C.QwtScaleDiv {
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

	virtualReturn := gofunc((&QwtLogScaleEngine{h: self}).callVirtualBase_DivideScale, slotval1, slotval2, slotval3, slotval4, slotval5)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QwtLogScaleEngine) Delete() {
	C.QwtLogScaleEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtLogScaleEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtLogScaleEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

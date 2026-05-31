package qwt

/*

#include "gen_qwt_compass.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtCompassScaleDraw struct {
	h *C.QwtCompassScaleDraw
	*QwtRoundScaleDraw
}

func (this *QwtCompassScaleDraw) cPointer() *C.QwtCompassScaleDraw {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtCompassScaleDraw) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtCompassScaleDraw constructs the type using only CGO pointers.
func newQwtCompassScaleDraw(h *C.QwtCompassScaleDraw) *QwtCompassScaleDraw {
	if h == nil {
		return nil
	}
	var outptr_QwtRoundScaleDraw *C.QwtRoundScaleDraw = nil
	C.QwtCompassScaleDraw_virtbase(h, &outptr_QwtRoundScaleDraw)

	return &QwtCompassScaleDraw{h: h,
		QwtRoundScaleDraw: newQwtRoundScaleDraw(outptr_QwtRoundScaleDraw)}
}

// UnsafeNewQwtCompassScaleDraw constructs the type using only unsafe pointers.
func UnsafeNewQwtCompassScaleDraw(h unsafe.Pointer) *QwtCompassScaleDraw {
	return newQwtCompassScaleDraw((*C.QwtCompassScaleDraw)(h))
}

// NewQwtCompassScaleDraw constructs a new QwtCompassScaleDraw object.
func NewQwtCompassScaleDraw() *QwtCompassScaleDraw {

	return newQwtCompassScaleDraw(C.QwtCompassScaleDraw_new())
}

// NewQwtCompassScaleDraw2 constructs a new QwtCompassScaleDraw object.
func NewQwtCompassScaleDraw2(mapVal map[float64]string) *QwtCompassScaleDraw {
	mapVal_Keys_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_Keys_CArray[mapVal_ctr] = (C.double)(mapVal_k)
		mapVal_v_ms := C.struct_miqt_string{}
		mapVal_v_ms.data = C.CString(mapVal_v)
		mapVal_v_ms.len = C.size_t(len(mapVal_v))
		defer C.free(unsafe.Pointer(mapVal_v_ms.data))
		mapVal_Values_CArray[mapVal_ctr] = mapVal_v_ms
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}

	return newQwtCompassScaleDraw(C.QwtCompassScaleDraw_new2(mapVal_mm))
}

func (this *QwtCompassScaleDraw) SetLabelMap(mapVal map[float64]string) {
	mapVal_Keys_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Keys_CArray))
	mapVal_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(mapVal))))
	defer C.free(unsafe.Pointer(mapVal_Values_CArray))
	mapVal_ctr := 0
	for mapVal_k, mapVal_v := range mapVal {
		mapVal_Keys_CArray[mapVal_ctr] = (C.double)(mapVal_k)
		mapVal_v_ms := C.struct_miqt_string{}
		mapVal_v_ms.data = C.CString(mapVal_v)
		mapVal_v_ms.len = C.size_t(len(mapVal_v))
		defer C.free(unsafe.Pointer(mapVal_v_ms.data))
		mapVal_Values_CArray[mapVal_ctr] = mapVal_v_ms
		mapVal_ctr++
	}
	mapVal_mm := C.struct_miqt_map{
		len:    C.size_t(len(mapVal)),
		keys:   unsafe.Pointer(mapVal_Keys_CArray),
		values: unsafe.Pointer(mapVal_Values_CArray),
	}
	C.QwtCompassScaleDraw_setLabelMap(this.h, mapVal_mm)
}

func (this *QwtCompassScaleDraw) LabelMap() map[float64]string {
	var _mm C.struct_miqt_map = C.QwtCompassScaleDraw_labelMap(this.h)
	_ret := make(map[float64]string, int(_mm.len))
	_Keys := (*[0xffff]C.double)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (float64)(_Keys[i])

		var _mapval_ms C.struct_miqt_string = _Values[i]
		_mapval_ret := C.GoStringN(_mapval_ms.data, C.int(int64(_mapval_ms.len)))
		C.free(unsafe.Pointer(_mapval_ms.data))
		_entry_Value := _mapval_ret
		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QwtCompassScaleDraw) Label(value float64) *QwtText {
	_goptr := newQwtText(C.QwtCompassScaleDraw_label(this.h, (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// InvalidateCache can only be called from a QwtCompassScaleDraw that was directly constructed.
func (this *QwtCompassScaleDraw) InvalidateCache() {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompassScaleDraw_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// TickLabel can only be called from a QwtCompassScaleDraw that was directly constructed.
func (this *QwtCompassScaleDraw) TickLabel(param1 *qt.QFont, value float64) *QwtText {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtText(C.QwtCompassScaleDraw_protectedbase_tickLabel(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()), (C.double)(value)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtCompassScaleDraw) callVirtualBase_Label(value float64) *QwtText {

	_goptr := newQwtText(C.QwtCompassScaleDraw_virtualbase_label(unsafe.Pointer(this.h), (C.double)(value)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtCompassScaleDraw) OnLabel(slot func(super func(value float64) *QwtText, value float64) *QwtText) {
	ok := C.QwtCompassScaleDraw_override_virtual_label(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassScaleDraw_label
func miqt_exec_callback_QwtCompassScaleDraw_label(self *C.QwtCompassScaleDraw, cb C.intptr_t, value C.double) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64) *QwtText, value float64) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	virtualReturn := gofunc((&QwtCompassScaleDraw{h: self}).callVirtualBase_Label, slotval1)

	return virtualReturn.cPointer()

}

func (this *QwtCompassScaleDraw) callVirtualBase_Extent(param1 *qt.QFont) float64 {

	return (float64)(C.QwtCompassScaleDraw_virtualbase_extent(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer())))

}
func (this *QwtCompassScaleDraw) OnExtent(slot func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64) {
	ok := C.QwtCompassScaleDraw_override_virtual_extent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassScaleDraw_extent
func miqt_exec_callback_QwtCompassScaleDraw_extent(self *C.QwtCompassScaleDraw, cb C.intptr_t, param1 *C.QFont) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont) float64, param1 *qt.QFont) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtCompassScaleDraw{h: self}).callVirtualBase_Extent, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtCompassScaleDraw) callVirtualBase_DrawTick(param1 *qt.QPainter, value float64, lenVal float64) {

	C.QwtCompassScaleDraw_virtualbase_drawTick(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(value), (C.double)(lenVal))

}
func (this *QwtCompassScaleDraw) OnDrawTick(slot func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64)) {
	ok := C.QwtCompassScaleDraw_override_virtual_drawTick(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassScaleDraw_drawTick
func miqt_exec_callback_QwtCompassScaleDraw_drawTick(self *C.QwtCompassScaleDraw, cb C.intptr_t, param1 *C.QPainter, value C.double, lenVal C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, value float64, lenVal float64), param1 *qt.QPainter, value float64, lenVal float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(value)

	slotval3 := (float64)(lenVal)

	gofunc((&QwtCompassScaleDraw{h: self}).callVirtualBase_DrawTick, slotval1, slotval2, slotval3)

}

func (this *QwtCompassScaleDraw) callVirtualBase_DrawBackbone(param1 *qt.QPainter) {

	C.QwtCompassScaleDraw_virtualbase_drawBackbone(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtCompassScaleDraw) OnDrawBackbone(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtCompassScaleDraw_override_virtual_drawBackbone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassScaleDraw_drawBackbone
func miqt_exec_callback_QwtCompassScaleDraw_drawBackbone(self *C.QwtCompassScaleDraw, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtCompassScaleDraw{h: self}).callVirtualBase_DrawBackbone, slotval1)

}

func (this *QwtCompassScaleDraw) callVirtualBase_DrawLabel(param1 *qt.QPainter, val float64) {

	C.QwtCompassScaleDraw_virtualbase_drawLabel(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.double)(val))

}
func (this *QwtCompassScaleDraw) OnDrawLabel(slot func(super func(param1 *qt.QPainter, val float64), param1 *qt.QPainter, val float64)) {
	ok := C.QwtCompassScaleDraw_override_virtual_drawLabel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassScaleDraw_drawLabel
func miqt_exec_callback_QwtCompassScaleDraw_drawLabel(self *C.QwtCompassScaleDraw, cb C.intptr_t, param1 *C.QPainter, val C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, val float64), param1 *qt.QPainter, val float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (float64)(val)

	gofunc((&QwtCompassScaleDraw{h: self}).callVirtualBase_DrawLabel, slotval1, slotval2)

}

func (this *QwtCompassScaleDraw) callVirtualBase_Draw(param1 *qt.QPainter, param2 *qt.QPalette) {

	C.QwtCompassScaleDraw_virtualbase_draw(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPalette)(param2.UnsafePointer()))

}
func (this *QwtCompassScaleDraw) OnDraw(slot func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette)) {
	ok := C.QwtCompassScaleDraw_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompassScaleDraw_draw
func miqt_exec_callback_QwtCompassScaleDraw_draw(self *C.QwtCompassScaleDraw, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPalette), param1 *qt.QPainter, param2 *qt.QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPalette(unsafe.Pointer(param2))

	gofunc((&QwtCompassScaleDraw{h: self}).callVirtualBase_Draw, slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *QwtCompassScaleDraw) Delete() {
	C.QwtCompassScaleDraw_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtCompassScaleDraw) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtCompassScaleDraw) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtCompass struct {
	h *C.QwtCompass
	*QwtDial
}

func (this *QwtCompass) cPointer() *C.QwtCompass {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtCompass) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtCompass constructs the type using only CGO pointers.
func newQwtCompass(h *C.QwtCompass) *QwtCompass {
	if h == nil {
		return nil
	}
	var outptr_QwtDial *C.QwtDial = nil
	C.QwtCompass_virtbase(h, &outptr_QwtDial)

	return &QwtCompass{h: h,
		QwtDial: newQwtDial(outptr_QwtDial)}
}

// UnsafeNewQwtCompass constructs the type using only unsafe pointers.
func UnsafeNewQwtCompass(h unsafe.Pointer) *QwtCompass {
	return newQwtCompass((*C.QwtCompass)(h))
}

// NewQwtCompass constructs a new QwtCompass object.
func NewQwtCompass(parent *qt.QWidget) *QwtCompass {

	return newQwtCompass(C.QwtCompass_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtCompass2 constructs a new QwtCompass object.
func NewQwtCompass2() *QwtCompass {

	return newQwtCompass(C.QwtCompass_new2())
}

func (this *QwtCompass) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtCompass_metaObject(this.h)))
}

func (this *QwtCompass) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtCompass_metacast(this.h, param1_Cstring))
}

func QwtCompass_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtCompass_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtCompass_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtCompass_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtCompass) SetRose(rose *QwtCompassRose) {
	C.QwtCompass_setRose(this.h, rose.cPointer())
}

func (this *QwtCompass) Rose() *QwtCompassRose {
	return newQwtCompassRose(C.QwtCompass_rose(this.h))
}

func (this *QwtCompass) Rose2() *QwtCompassRose {
	return newQwtCompassRose(C.QwtCompass_rose2(this.h))
}

func QwtCompass_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtCompass_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtCompass_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtCompass_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtCompass_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtCompass_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtCompass_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtCompass_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// InvalidateCache can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) InvalidateCache() {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompass_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementValue can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) IncrementValue(stepCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompass_protectedbase_incrementValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(stepCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementedValue can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) IncrementedValue(value float64, stepCount int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtCompass_protectedbase_incrementedValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value), (C.int)(stepCount)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Rescale can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) Rescale(lowerBound float64, upperBound float64, stepSize float64) {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompass_protectedbase_rescale(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(lowerBound), (C.double)(upperBound), (C.double)(stepSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetAbstractScaleDraw can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) SetAbstractScaleDraw(abstractScaleDraw *QwtAbstractScaleDraw) {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompass_protectedbase_setAbstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h), abstractScaleDraw.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AbstractScaleDraw can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) AbstractScaleDraw() *QwtAbstractScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtAbstractScaleDraw(C.QwtCompass_protectedbase_abstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompass_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompass_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtCompass_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtCompass_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtCompass_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtCompass_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtCompass_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtCompass_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtCompass that was directly constructed.
func (this *QwtCompass) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtCompass_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtCompass) callVirtualBase_DrawRose(param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup) {

	C.QwtCompass_virtualbase_drawRose(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius), (C.double)(north), (C.int)(param5))

}
func (this *QwtCompass) OnDrawRose(slot func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtCompass_override_virtual_drawRose(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_drawRose
func miqt_exec_callback_QwtCompass_drawRose(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPainter, center *C.QPointF, radius C.double, north C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, center *qt.QPointF, radius float64, north float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	slotval4 := (float64)(north)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtCompass{h: self}).callVirtualBase_DrawRose, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtCompass) callVirtualBase_DrawScaleContents(param1 *qt.QPainter, center *qt.QPointF, radius float64) {

	C.QwtCompass_virtualbase_drawScaleContents(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius))

}
func (this *QwtCompass) OnDrawScaleContents(slot func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64)) {
	ok := C.QwtCompass_override_virtual_drawScaleContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_drawScaleContents
func miqt_exec_callback_QwtCompass_drawScaleContents(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPainter, center *C.QPointF, radius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	gofunc((&QwtCompass{h: self}).callVirtualBase_DrawScaleContents, slotval1, slotval2, slotval3)

}

func (this *QwtCompass) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtCompass_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtCompass_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_keyPressEvent
func miqt_exec_callback_QwtCompass_keyPressEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_SetOrigin(origin float64) {

	C.QwtCompass_virtualbase_setOrigin(unsafe.Pointer(this.h), (C.double)(origin))

}
func (this *QwtCompass) OnSetOrigin(slot func(super func(origin float64), origin float64)) {
	ok := C.QwtCompass_override_virtual_setOrigin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_setOrigin
func miqt_exec_callback_QwtCompass_setOrigin(self *C.QwtCompass, cb C.intptr_t, origin C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(origin float64), origin float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(origin)

	gofunc((&QwtCompass{h: self}).callVirtualBase_SetOrigin, slotval1)

}

func (this *QwtCompass) callVirtualBase_ScaleInnerRect() *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtCompass_virtualbase_scaleInnerRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtCompass) OnScaleInnerRect(slot func(super func() *qt.QRect) *qt.QRect) {
	ok := C.QwtCompass_override_virtual_scaleInnerRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_scaleInnerRect
func miqt_exec_callback_QwtCompass_scaleInnerRect(self *C.QwtCompass, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRect) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_ScaleInnerRect)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtCompass) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtCompass_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtCompass) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtCompass_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_sizeHint
func miqt_exec_callback_QwtCompass_sizeHint(self *C.QwtCompass, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtCompass) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtCompass_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtCompass) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtCompass_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_minimumSizeHint
func miqt_exec_callback_QwtCompass_minimumSizeHint(self *C.QwtCompass, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtCompass) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QwtCompass_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtCompass_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_wheelEvent
func miqt_exec_callback_QwtCompass_wheelEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtCompass_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtCompass_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_paintEvent
func miqt_exec_callback_QwtCompass_paintEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtCompass_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtCompass_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_changeEvent
func miqt_exec_callback_QwtCompass_changeEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_DrawFrame(param1 *qt.QPainter) {

	C.QwtCompass_virtualbase_drawFrame(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnDrawFrame(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtCompass_override_virtual_drawFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_drawFrame
func miqt_exec_callback_QwtCompass_drawFrame(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DrawFrame, slotval1)

}

func (this *QwtCompass) callVirtualBase_DrawContents(param1 *qt.QPainter) {

	C.QwtCompass_virtualbase_drawContents(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnDrawContents(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtCompass_override_virtual_drawContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_drawContents
func miqt_exec_callback_QwtCompass_drawContents(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DrawContents, slotval1)

}

func (this *QwtCompass) callVirtualBase_DrawFocusIndicator(param1 *qt.QPainter) {

	C.QwtCompass_virtualbase_drawFocusIndicator(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnDrawFocusIndicator(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtCompass_override_virtual_drawFocusIndicator(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_drawFocusIndicator
func miqt_exec_callback_QwtCompass_drawFocusIndicator(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DrawFocusIndicator, slotval1)

}

func (this *QwtCompass) callVirtualBase_DrawScale(param1 *qt.QPainter, center *qt.QPointF, radius float64) {

	C.QwtCompass_virtualbase_drawScale(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius))

}
func (this *QwtCompass) OnDrawScale(slot func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64)) {
	ok := C.QwtCompass_override_virtual_drawScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_drawScale
func miqt_exec_callback_QwtCompass_drawScale(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPainter, center *C.QPointF, radius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	gofunc((&QwtCompass{h: self}).callVirtualBase_DrawScale, slotval1, slotval2, slotval3)

}

func (this *QwtCompass) callVirtualBase_DrawNeedle(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup) {

	C.QwtCompass_virtualbase_drawNeedle(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.double)(radius), (C.double)(direction), (C.int)(param5))

}
func (this *QwtCompass) OnDrawNeedle(slot func(super func(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtCompass_override_virtual_drawNeedle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_drawNeedle
func miqt_exec_callback_QwtCompass_drawNeedle(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPointF, radius C.double, direction C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(param2))

	slotval3 := (float64)(radius)

	slotval4 := (float64)(direction)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtCompass{h: self}).callVirtualBase_DrawNeedle, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtCompass) callVirtualBase_ScrolledTo(param1 *qt.QPoint) float64 {

	return (float64)(C.QwtCompass_virtualbase_scrolledTo(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtCompass) OnScrolledTo(slot func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64) {
	ok := C.QwtCompass_override_virtual_scrolledTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_scrolledTo
func miqt_exec_callback_QwtCompass_scrolledTo(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPoint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_ScrolledTo, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_IsScrollPosition(param1 *qt.QPoint) bool {

	return (bool)(C.QwtCompass_virtualbase_isScrollPosition(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtCompass) OnIsScrollPosition(slot func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool) {
	ok := C.QwtCompass_override_virtual_isScrollPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_isScrollPosition
func miqt_exec_callback_QwtCompass_isScrollPosition(self *C.QwtCompass, cb C.intptr_t, param1 *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_IsScrollPosition, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_SliderChange() {

	C.QwtCompass_virtualbase_sliderChange(unsafe.Pointer(this.h))

}
func (this *QwtCompass) OnSliderChange(slot func(super func())) {
	ok := C.QwtCompass_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_sliderChange
func miqt_exec_callback_QwtCompass_sliderChange(self *C.QwtCompass, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtCompass{h: self}).callVirtualBase_SliderChange)

}

func (this *QwtCompass) callVirtualBase_ScaleChange() {

	C.QwtCompass_virtualbase_scaleChange(unsafe.Pointer(this.h))

}
func (this *QwtCompass) OnScaleChange(slot func(super func())) {
	ok := C.QwtCompass_override_virtual_scaleChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_scaleChange
func miqt_exec_callback_QwtCompass_scaleChange(self *C.QwtCompass, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtCompass{h: self}).callVirtualBase_ScaleChange)

}

func (this *QwtCompass) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtCompass_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtCompass_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_mousePressEvent
func miqt_exec_callback_QwtCompass_mousePressEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtCompass_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtCompass_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_mouseReleaseEvent
func miqt_exec_callback_QwtCompass_mouseReleaseEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtCompass_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtCompass_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_mouseMoveEvent
func miqt_exec_callback_QwtCompass_mouseMoveEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_DevType() int {

	return (int)(C.QwtCompass_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtCompass) OnDevType(slot func(super func() int) int) {
	ok := C.QwtCompass_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_devType
func miqt_exec_callback_QwtCompass_devType(self *C.QwtCompass, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_SetVisible(visible bool) {

	C.QwtCompass_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtCompass) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtCompass_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_setVisible
func miqt_exec_callback_QwtCompass_setVisible(self *C.QwtCompass, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtCompass{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtCompass) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtCompass_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtCompass) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtCompass_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_heightForWidth
func miqt_exec_callback_QwtCompass_heightForWidth(self *C.QwtCompass, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtCompass_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtCompass) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtCompass_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_hasHeightForWidth
func miqt_exec_callback_QwtCompass_hasHeightForWidth(self *C.QwtCompass, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtCompass_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtCompass) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtCompass_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_paintEngine
func miqt_exec_callback_QwtCompass_paintEngine(self *C.QwtCompass, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtCompass) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtCompass_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtCompass) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtCompass_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_event
func miqt_exec_callback_QwtCompass_event(self *C.QwtCompass, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtCompass_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtCompass_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_mouseDoubleClickEvent
func miqt_exec_callback_QwtCompass_mouseDoubleClickEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtCompass_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtCompass_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_keyReleaseEvent
func miqt_exec_callback_QwtCompass_keyReleaseEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtCompass_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtCompass_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_focusInEvent
func miqt_exec_callback_QwtCompass_focusInEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtCompass_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtCompass_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_focusOutEvent
func miqt_exec_callback_QwtCompass_focusOutEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtCompass_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtCompass_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_enterEvent
func miqt_exec_callback_QwtCompass_enterEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtCompass_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtCompass_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_leaveEvent
func miqt_exec_callback_QwtCompass_leaveEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtCompass_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtCompass_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_moveEvent
func miqt_exec_callback_QwtCompass_moveEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtCompass_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtCompass_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_resizeEvent
func miqt_exec_callback_QwtCompass_resizeEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtCompass_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtCompass_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_closeEvent
func miqt_exec_callback_QwtCompass_closeEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtCompass_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtCompass_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_contextMenuEvent
func miqt_exec_callback_QwtCompass_contextMenuEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtCompass_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtCompass_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_tabletEvent
func miqt_exec_callback_QwtCompass_tabletEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtCompass_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtCompass_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_actionEvent
func miqt_exec_callback_QwtCompass_actionEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtCompass_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtCompass_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_dragEnterEvent
func miqt_exec_callback_QwtCompass_dragEnterEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtCompass_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtCompass_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_dragMoveEvent
func miqt_exec_callback_QwtCompass_dragMoveEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtCompass_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtCompass_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_dragLeaveEvent
func miqt_exec_callback_QwtCompass_dragLeaveEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtCompass_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtCompass_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_dropEvent
func miqt_exec_callback_QwtCompass_dropEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtCompass_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtCompass_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_showEvent
func miqt_exec_callback_QwtCompass_showEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtCompass_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtCompass_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_hideEvent
func miqt_exec_callback_QwtCompass_hideEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtCompass_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtCompass) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtCompass_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_nativeEvent
func miqt_exec_callback_QwtCompass_nativeEvent(self *C.QwtCompass, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtCompass_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtCompass) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtCompass_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_metric
func miqt_exec_callback_QwtCompass_metric(self *C.QwtCompass, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtCompass_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtCompass) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtCompass_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_initPainter
func miqt_exec_callback_QwtCompass_initPainter(self *C.QwtCompass, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtCompass{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtCompass) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtCompass_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtCompass) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtCompass_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_redirected
func miqt_exec_callback_QwtCompass_redirected(self *C.QwtCompass, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtCompass) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtCompass_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtCompass) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtCompass_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_sharedPainter
func miqt_exec_callback_QwtCompass_sharedPainter(self *C.QwtCompass, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtCompass) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtCompass_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtCompass) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtCompass_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_inputMethodEvent
func miqt_exec_callback_QwtCompass_inputMethodEvent(self *C.QwtCompass, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtCompass{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtCompass_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtCompass) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtCompass_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_inputMethodQuery
func miqt_exec_callback_QwtCompass_inputMethodQuery(self *C.QwtCompass, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtCompass) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtCompass_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtCompass) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtCompass_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_focusNextPrevChild
func miqt_exec_callback_QwtCompass_focusNextPrevChild(self *C.QwtCompass, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtCompass_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtCompass) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtCompass_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_eventFilter
func miqt_exec_callback_QwtCompass_eventFilter(self *C.QwtCompass, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtCompass{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtCompass) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtCompass_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtCompass_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_timerEvent
func miqt_exec_callback_QwtCompass_timerEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtCompass_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtCompass_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_childEvent
func miqt_exec_callback_QwtCompass_childEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtCompass_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtCompass) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtCompass_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_customEvent
func miqt_exec_callback_QwtCompass_customEvent(self *C.QwtCompass, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtCompass{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtCompass) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtCompass_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtCompass) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtCompass_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_connectNotify
func miqt_exec_callback_QwtCompass_connectNotify(self *C.QwtCompass, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtCompass{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtCompass) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtCompass_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtCompass) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtCompass_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtCompass_disconnectNotify
func miqt_exec_callback_QwtCompass_disconnectNotify(self *C.QwtCompass, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtCompass{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtCompass) Delete() {
	C.QwtCompass_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtCompass) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtCompass) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

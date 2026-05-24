package qwt

/*

#include "gen_qwt_color_map.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtColorMap__Format int

const (
	QwtColorMap__RGB     QwtColorMap__Format = 0
	QwtColorMap__Indexed QwtColorMap__Format = 1
)

type QwtLinearColorMap__Mode int

const (
	QwtLinearColorMap__FixedColors  QwtLinearColorMap__Mode = 0
	QwtLinearColorMap__ScaledColors QwtLinearColorMap__Mode = 1
)

type QwtColorMap struct {
	h *C.QwtColorMap
}

func (this *QwtColorMap) cPointer() *C.QwtColorMap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtColorMap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtColorMap constructs the type using only CGO pointers.
func newQwtColorMap(h *C.QwtColorMap) *QwtColorMap {
	if h == nil {
		return nil
	}

	return &QwtColorMap{h: h}
}

// UnsafeNewQwtColorMap constructs the type using only unsafe pointers.
func UnsafeNewQwtColorMap(h unsafe.Pointer) *QwtColorMap {
	return newQwtColorMap((*C.QwtColorMap)(h))
}

// NewQwtColorMap constructs a new QwtColorMap object.
func NewQwtColorMap() *QwtColorMap {

	return newQwtColorMap(C.QwtColorMap_new())
}

// NewQwtColorMap2 constructs a new QwtColorMap object.
func NewQwtColorMap2(param1 QwtColorMap__Format) *QwtColorMap {

	return newQwtColorMap(C.QwtColorMap_new2((C.int)(param1)))
}

func (this *QwtColorMap) Format() QwtColorMap__Format {
	return (QwtColorMap__Format)(C.QwtColorMap_format(this.h))
}

func (this *QwtColorMap) Rgb(interval *QwtInterval, value float64) uint {
	return (uint)(C.QwtColorMap_rgb(this.h, interval.cPointer(), (C.double)(value)))
}

func (this *QwtColorMap) ColorIndex(interval *QwtInterval, value float64) byte {
	return (byte)(C.QwtColorMap_colorIndex(this.h, interval.cPointer(), (C.double)(value)))
}

func (this *QwtColorMap) Color(param1 *QwtInterval, value float64) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QwtColorMap_color(this.h, param1.cPointer(), (C.double)(value))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtColorMap) ColorTable(param1 *QwtInterval) []uint {
	var _ma C.struct_miqt_array = C.QwtColorMap_colorTable(this.h, param1.cPointer())
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret
}

func (this *QwtColorMap) OperatorAssign(param1 *QwtColorMap) {
	C.QwtColorMap_operatorAssign(this.h, param1.cPointer())
}
func (this *QwtColorMap) OnRgb(slot func(interval *QwtInterval, value float64) uint) {
	ok := C.QwtColorMap_override_virtual_rgb(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtColorMap_rgb
func miqt_exec_callback_QwtColorMap_rgb(self *C.QwtColorMap, cb C.intptr_t, interval *C.QwtInterval, value C.double) C.uint {
	gofunc, ok := cgo.Handle(cb).Value().(func(interval *QwtInterval, value float64) uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(interval)

	slotval2 := (float64)(value)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.uint)(virtualReturn)

}
func (this *QwtColorMap) OnColorIndex(slot func(interval *QwtInterval, value float64) byte) {
	ok := C.QwtColorMap_override_virtual_colorIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtColorMap_colorIndex
func miqt_exec_callback_QwtColorMap_colorIndex(self *C.QwtColorMap, cb C.intptr_t, interval *C.QwtInterval, value C.double) C.uchar {
	gofunc, ok := cgo.Handle(cb).Value().(func(interval *QwtInterval, value float64) byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(interval)

	slotval2 := (float64)(value)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.uchar)(virtualReturn)

}

func (this *QwtColorMap) callVirtualBase_ColorTable(param1 *QwtInterval) []uint {

	var _ma C.struct_miqt_array = C.QwtColorMap_virtualbase_colorTable(unsafe.Pointer(this.h), param1.cPointer())
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret

}
func (this *QwtColorMap) OnColorTable(slot func(super func(param1 *QwtInterval) []uint, param1 *QwtInterval) []uint) {
	ok := C.QwtColorMap_override_virtual_colorTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtColorMap_colorTable
func miqt_exec_callback_QwtColorMap_colorTable(self *C.QwtColorMap, cb C.intptr_t, param1 *C.QwtInterval) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtInterval) []uint, param1 *QwtInterval) []uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(param1)

	virtualReturn := gofunc((&QwtColorMap{h: self}).callVirtualBase_ColorTable, slotval1)
	virtualReturn_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.uint)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtColorMap) Delete() {
	C.QwtColorMap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtColorMap) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtColorMap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtLinearColorMap struct {
	h *C.QwtLinearColorMap
	*QwtColorMap
}

func (this *QwtLinearColorMap) cPointer() *C.QwtLinearColorMap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtLinearColorMap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtLinearColorMap constructs the type using only CGO pointers.
func newQwtLinearColorMap(h *C.QwtLinearColorMap) *QwtLinearColorMap {
	if h == nil {
		return nil
	}
	var outptr_QwtColorMap *C.QwtColorMap = nil
	C.QwtLinearColorMap_virtbase(h, &outptr_QwtColorMap)

	return &QwtLinearColorMap{h: h,
		QwtColorMap: newQwtColorMap(outptr_QwtColorMap)}
}

// UnsafeNewQwtLinearColorMap constructs the type using only unsafe pointers.
func UnsafeNewQwtLinearColorMap(h unsafe.Pointer) *QwtLinearColorMap {
	return newQwtLinearColorMap((*C.QwtLinearColorMap)(h))
}

// NewQwtLinearColorMap constructs a new QwtLinearColorMap object.
func NewQwtLinearColorMap() *QwtLinearColorMap {

	return newQwtLinearColorMap(C.QwtLinearColorMap_new())
}

// NewQwtLinearColorMap2 constructs a new QwtLinearColorMap object.
func NewQwtLinearColorMap2(color1 *qt.QColor, color2 *qt.QColor) *QwtLinearColorMap {

	return newQwtLinearColorMap(C.QwtLinearColorMap_new2((*C.QColor)(color1.UnsafePointer()), (*C.QColor)(color2.UnsafePointer())))
}

// NewQwtLinearColorMap3 constructs a new QwtLinearColorMap object.
func NewQwtLinearColorMap3(param1 QwtColorMap__Format) *QwtLinearColorMap {

	return newQwtLinearColorMap(C.QwtLinearColorMap_new3((C.int)(param1)))
}

// NewQwtLinearColorMap4 constructs a new QwtLinearColorMap object.
func NewQwtLinearColorMap4(color1 *qt.QColor, color2 *qt.QColor, param3 QwtColorMap__Format) *QwtLinearColorMap {

	return newQwtLinearColorMap(C.QwtLinearColorMap_new4((*C.QColor)(color1.UnsafePointer()), (*C.QColor)(color2.UnsafePointer()), (C.int)(param3)))
}

func (this *QwtLinearColorMap) SetMode(mode QwtLinearColorMap__Mode) {
	C.QwtLinearColorMap_setMode(this.h, (C.int)(mode))
}

func (this *QwtLinearColorMap) Mode() QwtLinearColorMap__Mode {
	return (QwtLinearColorMap__Mode)(C.QwtLinearColorMap_mode(this.h))
}

func (this *QwtLinearColorMap) SetColorInterval(color1 *qt.QColor, color2 *qt.QColor) {
	C.QwtLinearColorMap_setColorInterval(this.h, (*C.QColor)(color1.UnsafePointer()), (*C.QColor)(color2.UnsafePointer()))
}

func (this *QwtLinearColorMap) AddColorStop(value float64, param2 *qt.QColor) {
	C.QwtLinearColorMap_addColorStop(this.h, (C.double)(value), (*C.QColor)(param2.UnsafePointer()))
}

func (this *QwtLinearColorMap) ColorStops() []float64 {
	var _ma C.struct_miqt_array = C.QwtLinearColorMap_colorStops(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QwtLinearColorMap) Color1() *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QwtLinearColorMap_color1(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLinearColorMap) Color2() *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QwtLinearColorMap_color2(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtLinearColorMap) Rgb(param1 *QwtInterval, value float64) uint {
	return (uint)(C.QwtLinearColorMap_rgb(this.h, param1.cPointer(), (C.double)(value)))
}

func (this *QwtLinearColorMap) ColorIndex(param1 *QwtInterval, value float64) byte {
	return (byte)(C.QwtLinearColorMap_colorIndex(this.h, param1.cPointer(), (C.double)(value)))
}

func (this *QwtLinearColorMap) callVirtualBase_Rgb(param1 *QwtInterval, value float64) uint {

	return (uint)(C.QwtLinearColorMap_virtualbase_rgb(unsafe.Pointer(this.h), param1.cPointer(), (C.double)(value)))

}
func (this *QwtLinearColorMap) OnRgb(slot func(super func(param1 *QwtInterval, value float64) uint, param1 *QwtInterval, value float64) uint) {
	ok := C.QwtLinearColorMap_override_virtual_rgb(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLinearColorMap_rgb
func miqt_exec_callback_QwtLinearColorMap_rgb(self *C.QwtLinearColorMap, cb C.intptr_t, param1 *C.QwtInterval, value C.double) C.uint {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtInterval, value float64) uint, param1 *QwtInterval, value float64) uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(param1)

	slotval2 := (float64)(value)

	virtualReturn := gofunc((&QwtLinearColorMap{h: self}).callVirtualBase_Rgb, slotval1, slotval2)

	return (C.uint)(virtualReturn)

}

func (this *QwtLinearColorMap) callVirtualBase_ColorIndex(param1 *QwtInterval, value float64) byte {

	return (byte)(C.QwtLinearColorMap_virtualbase_colorIndex(unsafe.Pointer(this.h), param1.cPointer(), (C.double)(value)))

}
func (this *QwtLinearColorMap) OnColorIndex(slot func(super func(param1 *QwtInterval, value float64) byte, param1 *QwtInterval, value float64) byte) {
	ok := C.QwtLinearColorMap_override_virtual_colorIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLinearColorMap_colorIndex
func miqt_exec_callback_QwtLinearColorMap_colorIndex(self *C.QwtLinearColorMap, cb C.intptr_t, param1 *C.QwtInterval, value C.double) C.uchar {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtInterval, value float64) byte, param1 *QwtInterval, value float64) byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(param1)

	slotval2 := (float64)(value)

	virtualReturn := gofunc((&QwtLinearColorMap{h: self}).callVirtualBase_ColorIndex, slotval1, slotval2)

	return (C.uchar)(virtualReturn)

}

func (this *QwtLinearColorMap) callVirtualBase_ColorTable(param1 *QwtInterval) []uint {

	var _ma C.struct_miqt_array = C.QwtLinearColorMap_virtualbase_colorTable(unsafe.Pointer(this.h), param1.cPointer())
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret

}
func (this *QwtLinearColorMap) OnColorTable(slot func(super func(param1 *QwtInterval) []uint, param1 *QwtInterval) []uint) {
	ok := C.QwtLinearColorMap_override_virtual_colorTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtLinearColorMap_colorTable
func miqt_exec_callback_QwtLinearColorMap_colorTable(self *C.QwtLinearColorMap, cb C.intptr_t, param1 *C.QwtInterval) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtInterval) []uint, param1 *QwtInterval) []uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(param1)

	virtualReturn := gofunc((&QwtLinearColorMap{h: self}).callVirtualBase_ColorTable, slotval1)
	virtualReturn_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.uint)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtLinearColorMap) Delete() {
	C.QwtLinearColorMap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtLinearColorMap) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtLinearColorMap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QwtAlphaColorMap struct {
	h *C.QwtAlphaColorMap
	*QwtColorMap
}

func (this *QwtAlphaColorMap) cPointer() *C.QwtAlphaColorMap {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtAlphaColorMap) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtAlphaColorMap constructs the type using only CGO pointers.
func newQwtAlphaColorMap(h *C.QwtAlphaColorMap) *QwtAlphaColorMap {
	if h == nil {
		return nil
	}
	var outptr_QwtColorMap *C.QwtColorMap = nil
	C.QwtAlphaColorMap_virtbase(h, &outptr_QwtColorMap)

	return &QwtAlphaColorMap{h: h,
		QwtColorMap: newQwtColorMap(outptr_QwtColorMap)}
}

// UnsafeNewQwtAlphaColorMap constructs the type using only unsafe pointers.
func UnsafeNewQwtAlphaColorMap(h unsafe.Pointer) *QwtAlphaColorMap {
	return newQwtAlphaColorMap((*C.QwtAlphaColorMap)(h))
}

// NewQwtAlphaColorMap constructs a new QwtAlphaColorMap object.
func NewQwtAlphaColorMap() *QwtAlphaColorMap {

	return newQwtAlphaColorMap(C.QwtAlphaColorMap_new())
}

// NewQwtAlphaColorMap2 constructs a new QwtAlphaColorMap object.
func NewQwtAlphaColorMap2(param1 *qt.QColor) *QwtAlphaColorMap {

	return newQwtAlphaColorMap(C.QwtAlphaColorMap_new2((*C.QColor)(param1.UnsafePointer())))
}

func (this *QwtAlphaColorMap) SetColor(color *qt.QColor) {
	C.QwtAlphaColorMap_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QwtAlphaColorMap) Color() *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QwtAlphaColorMap_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtAlphaColorMap) Rgb(param1 *QwtInterval, value float64) uint {
	return (uint)(C.QwtAlphaColorMap_rgb(this.h, param1.cPointer(), (C.double)(value)))
}

func (this *QwtAlphaColorMap) callVirtualBase_Rgb(param1 *QwtInterval, value float64) uint {

	return (uint)(C.QwtAlphaColorMap_virtualbase_rgb(unsafe.Pointer(this.h), param1.cPointer(), (C.double)(value)))

}
func (this *QwtAlphaColorMap) OnRgb(slot func(super func(param1 *QwtInterval, value float64) uint, param1 *QwtInterval, value float64) uint) {
	ok := C.QwtAlphaColorMap_override_virtual_rgb(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAlphaColorMap_rgb
func miqt_exec_callback_QwtAlphaColorMap_rgb(self *C.QwtAlphaColorMap, cb C.intptr_t, param1 *C.QwtInterval, value C.double) C.uint {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtInterval, value float64) uint, param1 *QwtInterval, value float64) uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(param1)

	slotval2 := (float64)(value)

	virtualReturn := gofunc((&QwtAlphaColorMap{h: self}).callVirtualBase_Rgb, slotval1, slotval2)

	return (C.uint)(virtualReturn)

}

func (this *QwtAlphaColorMap) callVirtualBase_ColorTable(param1 *QwtInterval) []uint {

	var _ma C.struct_miqt_array = C.QwtAlphaColorMap_virtualbase_colorTable(unsafe.Pointer(this.h), param1.cPointer())
	_ret := make([]uint, int(_ma.len))
	_outCast := (*[0xffff]C.uint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (uint)(_outCast[i])
	}
	return _ret

}
func (this *QwtAlphaColorMap) OnColorTable(slot func(super func(param1 *QwtInterval) []uint, param1 *QwtInterval) []uint) {
	ok := C.QwtAlphaColorMap_override_virtual_colorTable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAlphaColorMap_colorTable
func miqt_exec_callback_QwtAlphaColorMap_colorTable(self *C.QwtAlphaColorMap, cb C.intptr_t, param1 *C.QwtInterval) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtInterval) []uint, param1 *QwtInterval) []uint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(param1)

	virtualReturn := gofunc((&QwtAlphaColorMap{h: self}).callVirtualBase_ColorTable, slotval1)
	virtualReturn_CArray := (*[0xffff]C.uint)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.uint)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

// Delete this object from C++ memory.
func (this *QwtAlphaColorMap) Delete() {
	C.QwtAlphaColorMap_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtAlphaColorMap) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtAlphaColorMap) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

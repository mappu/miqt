package qwt

/*

#include "gen_qwt_plot_picker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotPicker struct {
	h  *C.QwtPlotPicker
	gc *[1]unsafe.Pointer
	*QwtPicker
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotPicker) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QwtPicker.miqtSetGC(gc)
}

func (this *QwtPlotPicker) cPointer() *C.QwtPlotPicker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotPicker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotPicker constructs the type using only CGO pointers.
func newQwtPlotPicker(h *C.QwtPlotPicker) *QwtPlotPicker {
	if h == nil {
		return nil
	}
	var outptr_QwtPicker *C.QwtPicker = nil
	C.QwtPlotPicker_virtbase(h, &outptr_QwtPicker)

	return &QwtPlotPicker{h: h,
		QwtPicker: newQwtPicker(outptr_QwtPicker)}
}

// UnsafeNewQwtPlotPicker constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotPicker(h unsafe.Pointer) *QwtPlotPicker {
	return newQwtPlotPicker((*C.QwtPlotPicker)(h))
}

// NewQwtPlotPicker constructs a new QwtPlotPicker object.
func NewQwtPlotPicker(canvas *qt.QWidget) *QwtPlotPicker {

	return newQwtPlotPicker(C.QwtPlotPicker_new((*C.QWidget)(canvas.UnsafePointer())))
}

// NewQwtPlotPicker2 constructs a new QwtPlotPicker object.
func NewQwtPlotPicker2(xAxis int, yAxis int, param3 *qt.QWidget) *QwtPlotPicker {

	return newQwtPlotPicker(C.QwtPlotPicker_new2((C.int)(xAxis), (C.int)(yAxis), (*C.QWidget)(param3.UnsafePointer())))
}

// NewQwtPlotPicker3 constructs a new QwtPlotPicker object.
func NewQwtPlotPicker3(xAxis int, yAxis int, rubberBand QwtPicker__RubberBand, trackerMode QwtPicker__DisplayMode, param5 *qt.QWidget) *QwtPlotPicker {

	return newQwtPlotPicker(C.QwtPlotPicker_new3((C.int)(xAxis), (C.int)(yAxis), (C.int)(rubberBand), (C.int)(trackerMode), (*C.QWidget)(param5.UnsafePointer())))
}

func (this *QwtPlotPicker) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPlotPicker_metaObject(this.h)))
}

func (this *QwtPlotPicker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPlotPicker_metacast(this.h, param1_Cstring))
}

func QwtPlotPicker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotPicker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotPicker_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotPicker_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotPicker) SetAxis(xAxis int, yAxis int) {
	C.QwtPlotPicker_setAxis(this.h, (C.int)(xAxis), (C.int)(yAxis))
}

func (this *QwtPlotPicker) XAxis() int {
	return (int)(C.QwtPlotPicker_xAxis(this.h))
}

func (this *QwtPlotPicker) YAxis() int {
	return (int)(C.QwtPlotPicker_yAxis(this.h))
}

func (this *QwtPlotPicker) Plot() *QwtPlot {
	return newQwtPlot(C.QwtPlotPicker_plot(this.h))
}

func (this *QwtPlotPicker) Plot2() *QwtPlot {
	return newQwtPlot(C.QwtPlotPicker_plot2(this.h))
}

func (this *QwtPlotPicker) Canvas() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlotPicker_canvas(this.h)))
}

func (this *QwtPlotPicker) Canvas2() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlotPicker_canvas2(this.h)))
}

func (this *QwtPlotPicker) Selected(pos qt.QPointF) {
	C.QwtPlotPicker_selected(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos))
}
func (this *QwtPlotPicker) OnSelected(slot func(pos qt.QPointF)) {
	C.QwtPlotPicker_connect_selected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlotPicker_selected
func miqt_exec_callback_QwtPlotPicker_selected(cb C.intptr_t, pos C.struct_miqt_qpointf) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPointF](pos)

	gofunc(slotval1)
}

func (this *QwtPlotPicker) SelectedWithRect(rect qt.QRectF) {
	C.QwtPlotPicker_selectedWithRect(this.h, libmiqt.ValueCast[C.struct_miqt_qrectf](rect))
}
func (this *QwtPlotPicker) OnSelectedWithRect(slot func(rect qt.QRectF)) {
	C.QwtPlotPicker_connect_selectedWithRect(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlotPicker_selectedWithRect
func miqt_exec_callback_QwtPlotPicker_selectedWithRect(cb C.intptr_t, rect C.struct_miqt_qrectf) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QRectF](rect)

	gofunc(slotval1)
}

func (this *QwtPlotPicker) SelectedWithPa(pa []qt.QPointF) {
	pa_CArray_ptr := (*C.struct_miqt_qpointf)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_qpointf{})) * len(pa))))
	defer C.free(unsafe.Pointer(pa_CArray_ptr))
	pa_CArray := unsafe.Slice(pa_CArray_ptr, len(pa))
	for i := range pa {
		pa_CArray[i] = libmiqt.ValueCast[C.struct_miqt_qpointf](pa[i])
	}
	pa_ma := C.struct_miqt_array{len: C.size_t(len(pa)), data: unsafe.Pointer(pa_CArray_ptr)}
	C.QwtPlotPicker_selectedWithPa(this.h, pa_ma)
}
func (this *QwtPlotPicker) OnSelectedWithPa(slot func(pa []qt.QPointF)) {
	C.QwtPlotPicker_connect_selectedWithPa(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlotPicker_selectedWithPa
func miqt_exec_callback_QwtPlotPicker_selectedWithPa(cb C.intptr_t, pa C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pa []qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var pa_ma C.struct_miqt_array = pa
	pa_ret := make([]qt.QPointF, int(pa_ma.len))
	pa_outCast := unsafe.Slice((*C.struct_miqt_qpointf)(unsafe.Pointer(pa_ma.data)), int(pa_ma.len))
	for i := 0; i < int(pa_ma.len); i++ {
		pa_ret[i] = libmiqt.ValueCast[qt.QPointF](pa_outCast[i])
	}
	slotval1 := pa_ret

	gofunc(slotval1)
}

func (this *QwtPlotPicker) Appended(pos qt.QPointF) {
	C.QwtPlotPicker_appended(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos))
}
func (this *QwtPlotPicker) OnAppended(slot func(pos qt.QPointF)) {
	C.QwtPlotPicker_connect_appended(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlotPicker_appended
func miqt_exec_callback_QwtPlotPicker_appended(cb C.intptr_t, pos C.struct_miqt_qpointf) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPointF](pos)

	gofunc(slotval1)
}

func (this *QwtPlotPicker) Moved(pos qt.QPointF) {
	C.QwtPlotPicker_moved(this.h, libmiqt.ValueCast[C.struct_miqt_qpointf](pos))
}
func (this *QwtPlotPicker) OnMoved(slot func(pos qt.QPointF)) {
	C.QwtPlotPicker_connect_moved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPlotPicker_moved
func miqt_exec_callback_QwtPlotPicker_moved(cb C.intptr_t, pos C.struct_miqt_qpointf) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPointF](pos)

	gofunc(slotval1)
}

func QwtPlotPicker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotPicker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotPicker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotPicker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotPicker_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotPicker_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotPicker_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotPicker_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ScaleRect can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) ScaleRect() qt.QRectF {

	var _dynamic_cast_ok C.bool = false
	_method_ret := libmiqt.ValueCast[qt.QRectF](C.QwtPlotPicker_protectedbase_scaleRect(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// InvTransform can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) InvTransform(param1 qt.QRect) qt.QRectF {

	var _dynamic_cast_ok C.bool = false
	_method_ret := libmiqt.ValueCast[qt.QRectF](C.QwtPlotPicker_protectedbase_invTransform(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qrect](param1)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Transform can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) Transform(param1 qt.QRectF) qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_method_ret := libmiqt.ValueCast[qt.QRect](C.QwtPlotPicker_protectedbase_transform(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qrectf](param1)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// InvTransformWithQPoint can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) InvTransformWithQPoint(param1 qt.QPoint) qt.QPointF {

	var _dynamic_cast_ok C.bool = false
	_method_ret := libmiqt.ValueCast[qt.QPointF](C.QwtPlotPicker_protectedbase_invTransformWithQPoint(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qpoint](param1)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// TransformWithQPointF can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) TransformWithQPointF(param1 qt.QPointF) qt.QPoint {

	var _dynamic_cast_ok C.bool = false
	_method_ret := libmiqt.ValueCast[qt.QPoint](C.QwtPlotPicker_protectedbase_transformWithQPointF(&_dynamic_cast_ok, unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qpointf](param1)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// RubberBandOverlay can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) RubberBandOverlay() *QwtWidgetOverlay {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtWidgetOverlay(C.QwtPlotPicker_protectedbase_rubberBandOverlay(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// TrackerOverlay can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) TrackerOverlay() *QwtWidgetOverlay {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtWidgetOverlay(C.QwtPlotPicker_protectedbase_trackerOverlay(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotPicker_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotPicker_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotPicker_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotPicker that was directly constructed.
func (this *QwtPlotPicker) IsSignalConnected(signal *qt.QMetaMethod) bool {
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotPicker_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotPicker) callVirtualBase_SetAxis(xAxis int, yAxis int) {

	C.QwtPlotPicker_virtualbase_setAxis(unsafe.Pointer(this.h), (C.int)(xAxis), (C.int)(yAxis))

}
func (this *QwtPlotPicker) OnSetAxis(slot func(super func(xAxis int, yAxis int), xAxis int, yAxis int)) {
	ok := C.QwtPlotPicker_override_virtual_setAxis(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_setAxis
func miqt_exec_callback_QwtPlotPicker_setAxis(self *C.QwtPlotPicker, cb C.intptr_t, xAxis C.int, yAxis C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(xAxis int, yAxis int), xAxis int, yAxis int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(xAxis)

	slotval2 := (int)(yAxis)

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_SetAxis, slotval1, slotval2)

}

func (this *QwtPlotPicker) callVirtualBase_TrackerText(param1 qt.QPoint) *QwtText {

	_goptr := newQwtText(C.QwtPlotPicker_virtualbase_trackerText(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qpoint](param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotPicker) OnTrackerText(slot func(super func(param1 qt.QPoint) *QwtText, param1 qt.QPoint) *QwtText) {
	ok := C.QwtPlotPicker_override_virtual_trackerText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_trackerText
func miqt_exec_callback_QwtPlotPicker_trackerText(self *C.QwtPlotPicker, cb C.intptr_t, param1 C.struct_miqt_qpoint) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPoint) *QwtText, param1 qt.QPoint) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPoint](param1)

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_TrackerText, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPlotPicker_virtualreturncopy_QwtText(virtualReturn.cPointer())

}

func (this *QwtPlotPicker) callVirtualBase_TrackerTextF(param1 qt.QPointF) *QwtText {

	_goptr := newQwtText(C.QwtPlotPicker_virtualbase_trackerTextF(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qpointf](param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotPicker) OnTrackerTextF(slot func(super func(param1 qt.QPointF) *QwtText, param1 qt.QPointF) *QwtText) {
	ok := C.QwtPlotPicker_override_virtual_trackerTextF(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_trackerTextF
func miqt_exec_callback_QwtPlotPicker_trackerTextF(self *C.QwtPlotPicker, cb C.intptr_t, param1 C.struct_miqt_qpointf) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPointF) *QwtText, param1 qt.QPointF) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPointF](param1)

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_TrackerTextF, slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPlotPicker_virtualreturncopy_QwtText(virtualReturn.cPointer())

}

func (this *QwtPlotPicker) callVirtualBase_Move(param1 qt.QPoint) {

	C.QwtPlotPicker_virtualbase_move(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qpoint](param1))

}
func (this *QwtPlotPicker) OnMove(slot func(super func(param1 qt.QPoint), param1 qt.QPoint)) {
	ok := C.QwtPlotPicker_override_virtual_move(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_move
func miqt_exec_callback_QwtPlotPicker_move(self *C.QwtPlotPicker, cb C.intptr_t, param1 C.struct_miqt_qpoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPoint), param1 qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPoint](param1)

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_Move, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_Append(param1 qt.QPoint) {

	C.QwtPlotPicker_virtualbase_append(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qpoint](param1))

}
func (this *QwtPlotPicker) OnAppend(slot func(super func(param1 qt.QPoint), param1 qt.QPoint)) {
	ok := C.QwtPlotPicker_override_virtual_append(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_append
func miqt_exec_callback_QwtPlotPicker_append(self *C.QwtPlotPicker, cb C.intptr_t, param1 C.struct_miqt_qpoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPoint), param1 qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QPoint](param1)

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_Append, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_End(ok bool) bool {

	return (bool)(C.QwtPlotPicker_virtualbase_end(unsafe.Pointer(this.h), (C.bool)(ok)))

}
func (this *QwtPlotPicker) OnEnd(slot func(super func(ok bool) bool, ok bool) bool) {
	ok := C.QwtPlotPicker_override_virtual_end(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_end
func miqt_exec_callback_QwtPlotPicker_end(self *C.QwtPlotPicker, cb C.intptr_t, ok C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ok bool) bool, ok bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ok)

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_End, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotPicker) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	defer runtime.KeepAlive(param2)

	return (bool)(C.QwtPlotPicker_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotPicker) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtPlotPicker_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_eventFilter
func miqt_exec_callback_QwtPlotPicker_eventFilter(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotPicker) callVirtualBase_PickArea() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPlotPicker_virtualbase_pickArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotPicker) OnPickArea(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QwtPlotPicker_override_virtual_pickArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_pickArea
func miqt_exec_callback_QwtPlotPicker_pickArea(self *C.QwtPlotPicker, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_PickArea)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPlotPicker_virtualreturncopy_QPainterPath((*C.QPainterPath)(virtualReturn.UnsafePointer()))

}

func (this *QwtPlotPicker) callVirtualBase_DrawRubberBand(param1 *qt.QPainter) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_drawRubberBand(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnDrawRubberBand(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotPicker_override_virtual_drawRubberBand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_drawRubberBand
func miqt_exec_callback_QwtPlotPicker_drawRubberBand(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_DrawRubberBand, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_DrawTracker(param1 *qt.QPainter) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_drawTracker(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnDrawTracker(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPlotPicker_override_virtual_drawTracker(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_drawTracker
func miqt_exec_callback_QwtPlotPicker_drawTracker(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_DrawTracker, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_RubberBandMask() *qt.QRegion {

	_goptr := qt.UnsafeNewQRegion(unsafe.Pointer(C.QwtPlotPicker_virtualbase_rubberBandMask(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotPicker) OnRubberBandMask(slot func(super func() *qt.QRegion) *qt.QRegion) {
	ok := C.QwtPlotPicker_override_virtual_rubberBandMask(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_rubberBandMask
func miqt_exec_callback_QwtPlotPicker_rubberBandMask(self *C.QwtPlotPicker, cb C.intptr_t) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRegion) *qt.QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_RubberBandMask)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPlotPicker_virtualreturncopy_QRegion((*C.QRegion)(virtualReturn.UnsafePointer()))

}

func (this *QwtPlotPicker) callVirtualBase_TrackerRect(param1 *qt.QFont) qt.QRect {
	defer runtime.KeepAlive(param1)

	return libmiqt.ValueCast[qt.QRect](C.QwtPlotPicker_virtualbase_trackerRect(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer())))

}
func (this *QwtPlotPicker) OnTrackerRect(slot func(super func(param1 *qt.QFont) qt.QRect, param1 *qt.QFont) qt.QRect) {
	ok := C.QwtPlotPicker_override_virtual_trackerRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_trackerRect
func miqt_exec_callback_QwtPlotPicker_trackerRect(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QFont) C.struct_miqt_qrect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont) qt.QRect, param1 *qt.QFont) qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_TrackerRect, slotval1)

	return libmiqt.ValueCast[C.struct_miqt_qrect](virtualReturn)

}

func (this *QwtPlotPicker) callVirtualBase_Transition(param1 *qt.QEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_transition(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnTransition(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotPicker_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_transition
func miqt_exec_callback_QwtPlotPicker_transition(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_Transition, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_Begin() {

	C.QwtPlotPicker_virtualbase_begin(unsafe.Pointer(this.h))

}
func (this *QwtPlotPicker) OnBegin(slot func(super func())) {
	ok := C.QwtPlotPicker_override_virtual_begin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_begin
func miqt_exec_callback_QwtPlotPicker_begin(self *C.QwtPlotPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_Begin)

}

func (this *QwtPlotPicker) callVirtualBase_Remove() {

	C.QwtPlotPicker_virtualbase_remove(unsafe.Pointer(this.h))

}
func (this *QwtPlotPicker) OnRemove(slot func(super func())) {
	ok := C.QwtPlotPicker_override_virtual_remove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_remove
func miqt_exec_callback_QwtPlotPicker_remove(self *C.QwtPlotPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_Remove)

}

func (this *QwtPlotPicker) callVirtualBase_Reset() {

	C.QwtPlotPicker_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QwtPlotPicker) OnReset(slot func(super func())) {
	ok := C.QwtPlotPicker_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_reset
func miqt_exec_callback_QwtPlotPicker_reset(self *C.QwtPlotPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_Reset)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetMousePressEvent(param1 *qt.QMouseEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetMousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetMousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetMousePressEvent
func miqt_exec_callback_QwtPlotPicker_widgetMousePressEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetMousePressEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetMouseReleaseEvent(param1 *qt.QMouseEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetMouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetMouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetMouseReleaseEvent
func miqt_exec_callback_QwtPlotPicker_widgetMouseReleaseEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetMouseReleaseEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetMouseDoubleClickEvent(param1 *qt.QMouseEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetMouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetMouseDoubleClickEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetMouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetMouseDoubleClickEvent
func miqt_exec_callback_QwtPlotPicker_widgetMouseDoubleClickEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetMouseDoubleClickEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetMouseMoveEvent(param1 *qt.QMouseEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetMouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetMouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetMouseMoveEvent
func miqt_exec_callback_QwtPlotPicker_widgetMouseMoveEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetMouseMoveEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetWheelEvent(param1 *qt.QWheelEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetWheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetWheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetWheelEvent
func miqt_exec_callback_QwtPlotPicker_widgetWheelEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetWheelEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetKeyPressEvent(param1 *qt.QKeyEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetKeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetKeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetKeyPressEvent
func miqt_exec_callback_QwtPlotPicker_widgetKeyPressEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetKeyPressEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetKeyReleaseEvent(param1 *qt.QKeyEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetKeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetKeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetKeyReleaseEvent
func miqt_exec_callback_QwtPlotPicker_widgetKeyReleaseEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetKeyReleaseEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetEnterEvent(param1 *qt.QEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetEnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetEnterEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetEnterEvent
func miqt_exec_callback_QwtPlotPicker_widgetEnterEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetEnterEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_WidgetLeaveEvent(param1 *qt.QEvent) {
	defer runtime.KeepAlive(param1)

	C.QwtPlotPicker_virtualbase_widgetLeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotPicker) OnWidgetLeaveEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPlotPicker_override_virtual_widgetLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_widgetLeaveEvent
func miqt_exec_callback_QwtPlotPicker_widgetLeaveEvent(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_WidgetLeaveEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_StretchSelection(oldSize qt.QSize, newSize qt.QSize) {

	C.QwtPlotPicker_virtualbase_stretchSelection(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qsize](oldSize), libmiqt.ValueCast[C.struct_miqt_qsize](newSize))

}
func (this *QwtPlotPicker) OnStretchSelection(slot func(super func(oldSize qt.QSize, newSize qt.QSize), oldSize qt.QSize, newSize qt.QSize)) {
	ok := C.QwtPlotPicker_override_virtual_stretchSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_stretchSelection
func miqt_exec_callback_QwtPlotPicker_stretchSelection(self *C.QwtPlotPicker, cb C.intptr_t, oldSize C.struct_miqt_qsize, newSize C.struct_miqt_qsize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(oldSize qt.QSize, newSize qt.QSize), oldSize qt.QSize, newSize qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt.QSize](oldSize)

	slotval2 := libmiqt.ValueCast[qt.QSize](newSize)

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_StretchSelection, slotval1, slotval2)

}

func (this *QwtPlotPicker) callVirtualBase_UpdateDisplay() {

	C.QwtPlotPicker_virtualbase_updateDisplay(unsafe.Pointer(this.h))

}
func (this *QwtPlotPicker) OnUpdateDisplay(slot func(super func())) {
	ok := C.QwtPlotPicker_override_virtual_updateDisplay(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_updateDisplay
func miqt_exec_callback_QwtPlotPicker_updateDisplay(self *C.QwtPlotPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_UpdateDisplay)

}

func (this *QwtPlotPicker) callVirtualBase_Event(event *qt.QEvent) bool {
	defer runtime.KeepAlive(event)

	return (bool)(C.QwtPlotPicker_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotPicker) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtPlotPicker_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_event
func miqt_exec_callback_QwtPlotPicker_event(self *C.QwtPlotPicker, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotPicker) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {
	defer runtime.KeepAlive(event)

	C.QwtPlotPicker_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotPicker) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotPicker_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_timerEvent
func miqt_exec_callback_QwtPlotPicker_timerEvent(self *C.QwtPlotPicker, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_ChildEvent(event *qt.QChildEvent) {
	defer runtime.KeepAlive(event)

	C.QwtPlotPicker_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotPicker) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotPicker_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_childEvent
func miqt_exec_callback_QwtPlotPicker_childEvent(self *C.QwtPlotPicker, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_CustomEvent(event *qt.QEvent) {
	defer runtime.KeepAlive(event)

	C.QwtPlotPicker_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotPicker) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotPicker_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_customEvent
func miqt_exec_callback_QwtPlotPicker_customEvent(self *C.QwtPlotPicker, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QwtPlotPicker_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotPicker) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotPicker_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_connectNotify
func miqt_exec_callback_QwtPlotPicker_connectNotify(self *C.QwtPlotPicker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(signal)

	C.QwtPlotPicker_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotPicker) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotPicker_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_disconnectNotify
func miqt_exec_callback_QwtPlotPicker_disconnectNotify(self *C.QwtPlotPicker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotPicker{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QwtPlotPicker) callVirtualBase_MouseMatch2(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool {
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)

	return (bool)(C.QwtPlotPicker_virtualbase_mouseMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QMouseEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotPicker) OnMouseMatch2(slot func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool) {
	ok := C.QwtPlotPicker_override_virtual_mouseMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_mouseMatch2
func miqt_exec_callback_QwtPlotPicker_mouseMatch2(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QwtEventPattern__MousePattern, param2 *C.QMouseEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__MousePattern(param1)

	slotval2 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_MouseMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotPicker) callVirtualBase_KeyMatch2(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool {
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)

	return (bool)(C.QwtPlotPicker_virtualbase_keyMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QKeyEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotPicker) OnKeyMatch2(slot func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool) {
	ok := C.QwtPlotPicker_override_virtual_keyMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotPicker_keyMatch2
func miqt_exec_callback_QwtPlotPicker_keyMatch2(self *C.QwtPlotPicker, cb C.intptr_t, param1 *C.QwtEventPattern__KeyPattern, param2 *C.QKeyEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__KeyPattern(param1)

	slotval2 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotPicker{h: self}).callVirtualBase_KeyMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QwtPlotPicker) Delete() {
	C.QwtPlotPicker_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QwtPlotPicker) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotPicker_delete((*C.QwtPlotPicker)(gc[0]))
	})
	this.miqtSetGC(gc)
}

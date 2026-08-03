package qwt

/*

#include "gen_qwt_scale_widget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtScaleWidget__LayoutFlag int

const (
	QwtScaleWidget__TitleInverted QwtScaleWidget__LayoutFlag = 1
)

type QwtScaleWidget struct {
	h *C.QwtScaleWidget
	*qt.QWidget
}

func (this *QwtScaleWidget) cPointer() *C.QwtScaleWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtScaleWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtScaleWidget constructs the type using only CGO pointers.
func newQwtScaleWidget(h *C.QwtScaleWidget) *QwtScaleWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QwtScaleWidget_virtbase(h, &outptr_QWidget)

	return &QwtScaleWidget{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQwtScaleWidget constructs the type using only unsafe pointers.
func UnsafeNewQwtScaleWidget(h unsafe.Pointer) *QwtScaleWidget {
	return newQwtScaleWidget((*C.QwtScaleWidget)(h))
}

// NewQwtScaleWidget constructs a new QwtScaleWidget object.
func NewQwtScaleWidget(parent *qt.QWidget) *QwtScaleWidget {

	return newQwtScaleWidget(C.QwtScaleWidget_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtScaleWidget2 constructs a new QwtScaleWidget object.
func NewQwtScaleWidget2() *QwtScaleWidget {

	return newQwtScaleWidget(C.QwtScaleWidget_new2())
}

// NewQwtScaleWidget3 constructs a new QwtScaleWidget object.
func NewQwtScaleWidget3(param1 QwtScaleDraw__Alignment) *QwtScaleWidget {

	return newQwtScaleWidget(C.QwtScaleWidget_new3((C.int)(param1)))
}

// NewQwtScaleWidget4 constructs a new QwtScaleWidget object.
func NewQwtScaleWidget4(param1 QwtScaleDraw__Alignment, parent *qt.QWidget) *QwtScaleWidget {

	return newQwtScaleWidget(C.QwtScaleWidget_new4((C.int)(param1), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QwtScaleWidget) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtScaleWidget_metaObject(this.h)))
}

func (this *QwtScaleWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtScaleWidget_metacast(this.h, param1_Cstring))
}

func QwtScaleWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtScaleWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtScaleWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtScaleWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtScaleWidget) ScaleDivChanged() {
	C.QwtScaleWidget_scaleDivChanged(this.h)
}
func (this *QwtScaleWidget) OnScaleDivChanged(slot func()) {
	C.QwtScaleWidget_connect_scaleDivChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtScaleWidget_scaleDivChanged
func miqt_exec_callback_QwtScaleWidget_scaleDivChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QwtScaleWidget) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QwtScaleWidget_setTitle(this.h, title_ms)
}

func (this *QwtScaleWidget) SetTitleWithTitle(title *QwtText) {
	C.QwtScaleWidget_setTitleWithTitle(this.h, title.cPointer())
}

func (this *QwtScaleWidget) Title() *QwtText {
	_goptr := newQwtText(C.QwtScaleWidget_title(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleWidget) SetLayoutFlag(param1 QwtScaleWidget__LayoutFlag, on bool) {
	C.QwtScaleWidget_setLayoutFlag(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtScaleWidget) TestLayoutFlag(param1 QwtScaleWidget__LayoutFlag) bool {
	return (bool)(C.QwtScaleWidget_testLayoutFlag(this.h, (C.int)(param1)))
}

func (this *QwtScaleWidget) SetBorderDist(dist1 int, dist2 int) {
	C.QwtScaleWidget_setBorderDist(this.h, (C.int)(dist1), (C.int)(dist2))
}

func (this *QwtScaleWidget) StartBorderDist() int {
	return (int)(C.QwtScaleWidget_startBorderDist(this.h))
}

func (this *QwtScaleWidget) EndBorderDist() int {
	return (int)(C.QwtScaleWidget_endBorderDist(this.h))
}

func (this *QwtScaleWidget) GetBorderDistHint(start *int, end *int) {
	C.QwtScaleWidget_getBorderDistHint(this.h, (*C.int)(unsafe.Pointer(start)), (*C.int)(unsafe.Pointer(end)))
}

func (this *QwtScaleWidget) GetMinBorderDist(start *int, end *int) {
	C.QwtScaleWidget_getMinBorderDist(this.h, (*C.int)(unsafe.Pointer(start)), (*C.int)(unsafe.Pointer(end)))
}

func (this *QwtScaleWidget) SetMinBorderDist(start int, end int) {
	C.QwtScaleWidget_setMinBorderDist(this.h, (C.int)(start), (C.int)(end))
}

func (this *QwtScaleWidget) SetMargin(margin int) {
	C.QwtScaleWidget_setMargin(this.h, (C.int)(margin))
}

func (this *QwtScaleWidget) Margin() int {
	return (int)(C.QwtScaleWidget_margin(this.h))
}

func (this *QwtScaleWidget) SetSpacing(spacing int) {
	C.QwtScaleWidget_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtScaleWidget) Spacing() int {
	return (int)(C.QwtScaleWidget_spacing(this.h))
}

func (this *QwtScaleWidget) SetScaleDiv(scaleDiv *QwtScaleDiv) {
	C.QwtScaleWidget_setScaleDiv(this.h, scaleDiv.cPointer())
}

func (this *QwtScaleWidget) SetTransformation(transformation *QwtTransform) {
	C.QwtScaleWidget_setTransformation(this.h, transformation.cPointer())
}

func (this *QwtScaleWidget) SetScaleDraw(scaleDraw *QwtScaleDraw) {
	C.QwtScaleWidget_setScaleDraw(this.h, scaleDraw.cPointer())
}

func (this *QwtScaleWidget) ScaleDraw() *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtScaleWidget_scaleDraw(this.h))
}

func (this *QwtScaleWidget) ScaleDraw2() *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtScaleWidget_scaleDraw2(this.h))
}

func (this *QwtScaleWidget) SetLabelAlignment(labelAlignment qt.AlignmentFlag) {
	C.QwtScaleWidget_setLabelAlignment(this.h, (C.int)(labelAlignment))
}

func (this *QwtScaleWidget) SetLabelRotation(rotation float64) {
	C.QwtScaleWidget_setLabelRotation(this.h, (C.double)(rotation))
}

func (this *QwtScaleWidget) SetColorBarEnabled(colorBarEnabled bool) {
	C.QwtScaleWidget_setColorBarEnabled(this.h, (C.bool)(colorBarEnabled))
}

func (this *QwtScaleWidget) IsColorBarEnabled() bool {
	return (bool)(C.QwtScaleWidget_isColorBarEnabled(this.h))
}

func (this *QwtScaleWidget) SetColorBarWidth(colorBarWidth int) {
	C.QwtScaleWidget_setColorBarWidth(this.h, (C.int)(colorBarWidth))
}

func (this *QwtScaleWidget) ColorBarWidth() int {
	return (int)(C.QwtScaleWidget_colorBarWidth(this.h))
}

func (this *QwtScaleWidget) SetColorMap(param1 *QwtInterval, param2 *QwtColorMap) {
	C.QwtScaleWidget_setColorMap(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QwtScaleWidget) ColorBarInterval() *QwtInterval {
	_goptr := newQwtInterval(C.QwtScaleWidget_colorBarInterval(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleWidget) ColorMap() *QwtColorMap {
	return newQwtColorMap(C.QwtScaleWidget_colorMap(this.h))
}

func (this *QwtScaleWidget) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtScaleWidget_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleWidget) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtScaleWidget_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtScaleWidget) TitleHeightForWidth(width int) int {
	return (int)(C.QwtScaleWidget_titleHeightForWidth(this.h, (C.int)(width)))
}

func (this *QwtScaleWidget) DimForLength(length int, scaleFont *qt.QFont) int {
	return (int)(C.QwtScaleWidget_dimForLength(this.h, (C.int)(length), (*C.QFont)(scaleFont.UnsafePointer())))
}

func (this *QwtScaleWidget) DrawColorBar(painter *qt.QPainter, param2 *qt.QRectF) {
	C.QwtScaleWidget_drawColorBar(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))
}

func (this *QwtScaleWidget) DrawTitle(painter *qt.QPainter, param2 QwtScaleDraw__Alignment, rect *qt.QRectF) {
	C.QwtScaleWidget_drawTitle(this.h, (*C.QPainter)(painter.UnsafePointer()), (C.int)(param2), (*C.QRectF)(rect.UnsafePointer()))
}

func (this *QwtScaleWidget) SetAlignment(alignment QwtScaleDraw__Alignment) {
	C.QwtScaleWidget_setAlignment(this.h, (C.int)(alignment))
}

func (this *QwtScaleWidget) Alignment() QwtScaleDraw__Alignment {
	return (QwtScaleDraw__Alignment)(C.QwtScaleWidget_alignment(this.h))
}

func (this *QwtScaleWidget) ColorBarRect(param1 *qt.QRectF) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtScaleWidget_colorBarRect(this.h, (*C.QRectF)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtScaleWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtScaleWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtScaleWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtScaleWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtScaleWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtScaleWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtScaleWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtScaleWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Draw can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) Draw(param1 *qt.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleWidget_protectedbase_draw(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScaleChange can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) ScaleChange() {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleWidget_protectedbase_scaleChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LayoutScale can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) LayoutScale() {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleWidget_protectedbase_layoutScale(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LayoutScaleWithUpdateGeometry can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) LayoutScaleWithUpdateGeometry(update_geometry bool) {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleWidget_protectedbase_layoutScaleWithUpdateGeometry(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.bool)(update_geometry))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtScaleWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtScaleWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtScaleWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtScaleWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtScaleWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtScaleWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtScaleWidget that was directly constructed.
func (this *QwtScaleWidget) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtScaleWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtScaleWidget) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtScaleWidget_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtScaleWidget) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtScaleWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_sizeHint
func miqt_exec_callback_QwtScaleWidget_sizeHint(self *C.QwtScaleWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtScaleWidget) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtScaleWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtScaleWidget) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtScaleWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_minimumSizeHint
func miqt_exec_callback_QwtScaleWidget_minimumSizeHint(self *C.QwtScaleWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtScaleWidget) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtScaleWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtScaleWidget) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtScaleWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_paintEvent
func miqt_exec_callback_QwtScaleWidget_paintEvent(self *C.QwtScaleWidget, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QwtScaleWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QwtScaleWidget) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QwtScaleWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_resizeEvent
func miqt_exec_callback_QwtScaleWidget_resizeEvent(self *C.QwtScaleWidget, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_DevType() int {

	return (int)(C.QwtScaleWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtScaleWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QwtScaleWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_devType
func miqt_exec_callback_QwtScaleWidget_devType(self *C.QwtScaleWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_SetVisible(visible bool) {

	C.QwtScaleWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtScaleWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtScaleWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_setVisible
func miqt_exec_callback_QwtScaleWidget_setVisible(self *C.QwtScaleWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtScaleWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtScaleWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtScaleWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_heightForWidth
func miqt_exec_callback_QwtScaleWidget_heightForWidth(self *C.QwtScaleWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtScaleWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtScaleWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtScaleWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_hasHeightForWidth
func miqt_exec_callback_QwtScaleWidget_hasHeightForWidth(self *C.QwtScaleWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtScaleWidget_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtScaleWidget) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtScaleWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_paintEngine
func miqt_exec_callback_QwtScaleWidget_paintEngine(self *C.QwtScaleWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtScaleWidget) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtScaleWidget_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtScaleWidget) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtScaleWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_event
func miqt_exec_callback_QwtScaleWidget_event(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtScaleWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtScaleWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_mousePressEvent
func miqt_exec_callback_QwtScaleWidget_mousePressEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtScaleWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtScaleWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_mouseReleaseEvent
func miqt_exec_callback_QwtScaleWidget_mouseReleaseEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtScaleWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtScaleWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_mouseDoubleClickEvent
func miqt_exec_callback_QwtScaleWidget_mouseDoubleClickEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtScaleWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtScaleWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_mouseMoveEvent
func miqt_exec_callback_QwtScaleWidget_mouseMoveEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtScaleWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtScaleWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_wheelEvent
func miqt_exec_callback_QwtScaleWidget_wheelEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtScaleWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtScaleWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_keyPressEvent
func miqt_exec_callback_QwtScaleWidget_keyPressEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtScaleWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtScaleWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_keyReleaseEvent
func miqt_exec_callback_QwtScaleWidget_keyReleaseEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtScaleWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtScaleWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_focusInEvent
func miqt_exec_callback_QwtScaleWidget_focusInEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtScaleWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtScaleWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_focusOutEvent
func miqt_exec_callback_QwtScaleWidget_focusOutEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtScaleWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtScaleWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_enterEvent
func miqt_exec_callback_QwtScaleWidget_enterEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtScaleWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtScaleWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_leaveEvent
func miqt_exec_callback_QwtScaleWidget_leaveEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtScaleWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtScaleWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_moveEvent
func miqt_exec_callback_QwtScaleWidget_moveEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtScaleWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtScaleWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_closeEvent
func miqt_exec_callback_QwtScaleWidget_closeEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtScaleWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtScaleWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_contextMenuEvent
func miqt_exec_callback_QwtScaleWidget_contextMenuEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtScaleWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtScaleWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_tabletEvent
func miqt_exec_callback_QwtScaleWidget_tabletEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtScaleWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtScaleWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_actionEvent
func miqt_exec_callback_QwtScaleWidget_actionEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtScaleWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtScaleWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_dragEnterEvent
func miqt_exec_callback_QwtScaleWidget_dragEnterEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtScaleWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtScaleWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_dragMoveEvent
func miqt_exec_callback_QwtScaleWidget_dragMoveEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtScaleWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtScaleWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_dragLeaveEvent
func miqt_exec_callback_QwtScaleWidget_dragLeaveEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtScaleWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtScaleWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_dropEvent
func miqt_exec_callback_QwtScaleWidget_dropEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtScaleWidget_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtScaleWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_showEvent
func miqt_exec_callback_QwtScaleWidget_showEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtScaleWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtScaleWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_hideEvent
func miqt_exec_callback_QwtScaleWidget_hideEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtScaleWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtScaleWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtScaleWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_nativeEvent
func miqt_exec_callback_QwtScaleWidget_nativeEvent(self *C.QwtScaleWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtScaleWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtScaleWidget) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtScaleWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_changeEvent
func miqt_exec_callback_QwtScaleWidget_changeEvent(self *C.QwtScaleWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtScaleWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtScaleWidget) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtScaleWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_metric
func miqt_exec_callback_QwtScaleWidget_metric(self *C.QwtScaleWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtScaleWidget_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtScaleWidget) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtScaleWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_initPainter
func miqt_exec_callback_QwtScaleWidget_initPainter(self *C.QwtScaleWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtScaleWidget_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtScaleWidget) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtScaleWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_redirected
func miqt_exec_callback_QwtScaleWidget_redirected(self *C.QwtScaleWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtScaleWidget) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtScaleWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtScaleWidget) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtScaleWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_sharedPainter
func miqt_exec_callback_QwtScaleWidget_sharedPainter(self *C.QwtScaleWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtScaleWidget) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtScaleWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtScaleWidget) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtScaleWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_inputMethodEvent
func miqt_exec_callback_QwtScaleWidget_inputMethodEvent(self *C.QwtScaleWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtScaleWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtScaleWidget) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtScaleWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_inputMethodQuery
func miqt_exec_callback_QwtScaleWidget_inputMethodQuery(self *C.QwtScaleWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtScaleWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtScaleWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtScaleWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtScaleWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_focusNextPrevChild
func miqt_exec_callback_QwtScaleWidget_focusNextPrevChild(self *C.QwtScaleWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtScaleWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtScaleWidget) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtScaleWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_eventFilter
func miqt_exec_callback_QwtScaleWidget_eventFilter(self *C.QwtScaleWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtScaleWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtScaleWidget) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtScaleWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtScaleWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_timerEvent
func miqt_exec_callback_QwtScaleWidget_timerEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtScaleWidget_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtScaleWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_childEvent
func miqt_exec_callback_QwtScaleWidget_childEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtScaleWidget_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtScaleWidget) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtScaleWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_customEvent
func miqt_exec_callback_QwtScaleWidget_customEvent(self *C.QwtScaleWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtScaleWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtScaleWidget) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtScaleWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_connectNotify
func miqt_exec_callback_QwtScaleWidget_connectNotify(self *C.QwtScaleWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtScaleWidget) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtScaleWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtScaleWidget) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtScaleWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtScaleWidget_disconnectNotify
func miqt_exec_callback_QwtScaleWidget_disconnectNotify(self *C.QwtScaleWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtScaleWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtScaleWidget) Delete() {
	C.QwtScaleWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtScaleWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtScaleWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

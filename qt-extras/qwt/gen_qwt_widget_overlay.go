package qwt

/*

#include "gen_qwt_widget_overlay.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtWidgetOverlay__MaskMode int

const (
	QwtWidgetOverlay__NoMask    QwtWidgetOverlay__MaskMode = 0
	QwtWidgetOverlay__MaskHint  QwtWidgetOverlay__MaskMode = 1
	QwtWidgetOverlay__AlphaMask QwtWidgetOverlay__MaskMode = 2
)

type QwtWidgetOverlay__RenderMode int

const (
	QwtWidgetOverlay__AutoRenderMode QwtWidgetOverlay__RenderMode = 0
	QwtWidgetOverlay__CopyAlphaMask  QwtWidgetOverlay__RenderMode = 1
	QwtWidgetOverlay__DrawOverlay    QwtWidgetOverlay__RenderMode = 2
)

type QwtWidgetOverlay struct {
	h *C.QwtWidgetOverlay
	*qt.QWidget
}

func (this *QwtWidgetOverlay) cPointer() *C.QwtWidgetOverlay {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtWidgetOverlay) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtWidgetOverlay constructs the type using only CGO pointers.
func newQwtWidgetOverlay(h *C.QwtWidgetOverlay) *QwtWidgetOverlay {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QwtWidgetOverlay_virtbase(h, &outptr_QWidget)

	return &QwtWidgetOverlay{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQwtWidgetOverlay constructs the type using only unsafe pointers.
func UnsafeNewQwtWidgetOverlay(h unsafe.Pointer) *QwtWidgetOverlay {
	return newQwtWidgetOverlay((*C.QwtWidgetOverlay)(h))
}

// NewQwtWidgetOverlay constructs a new QwtWidgetOverlay object.
func NewQwtWidgetOverlay(param1 *qt.QWidget) *QwtWidgetOverlay {

	return newQwtWidgetOverlay(C.QwtWidgetOverlay_new((*C.QWidget)(param1.UnsafePointer())))
}

func (this *QwtWidgetOverlay) SetMaskMode(maskMode QwtWidgetOverlay__MaskMode) {
	C.QwtWidgetOverlay_setMaskMode(this.h, (C.int)(maskMode))
}

func (this *QwtWidgetOverlay) MaskMode() QwtWidgetOverlay__MaskMode {
	return (QwtWidgetOverlay__MaskMode)(C.QwtWidgetOverlay_maskMode(this.h))
}

func (this *QwtWidgetOverlay) SetRenderMode(renderMode QwtWidgetOverlay__RenderMode) {
	C.QwtWidgetOverlay_setRenderMode(this.h, (C.int)(renderMode))
}

func (this *QwtWidgetOverlay) RenderMode() QwtWidgetOverlay__RenderMode {
	return (QwtWidgetOverlay__RenderMode)(C.QwtWidgetOverlay_renderMode(this.h))
}

func (this *QwtWidgetOverlay) UpdateOverlay() {
	C.QwtWidgetOverlay_updateOverlay(this.h)
}

func (this *QwtWidgetOverlay) EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	return (bool)(C.QwtWidgetOverlay_eventFilter(this.h, (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))
}

// UpdateMicroFocus can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtWidgetOverlay_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtWidgetOverlay_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtWidgetOverlay_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtWidgetOverlay_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtWidgetOverlay_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtWidgetOverlay_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtWidgetOverlay_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtWidgetOverlay_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtWidgetOverlay that was directly constructed.
func (this *QwtWidgetOverlay) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtWidgetOverlay_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtWidgetOverlay) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtWidgetOverlay_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtWidgetOverlay) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtWidgetOverlay_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_eventFilter
func miqt_exec_callback_QwtWidgetOverlay_eventFilter(self *C.QwtWidgetOverlay, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QwtWidgetOverlay_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_paintEvent
func miqt_exec_callback_QwtWidgetOverlay_paintEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtWidgetOverlay_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_resizeEvent
func miqt_exec_callback_QwtWidgetOverlay_resizeEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_MaskHint() *qt.QRegion {

	_goptr := qt.UnsafeNewQRegion(unsafe.Pointer(C.QwtWidgetOverlay_virtualbase_maskHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtWidgetOverlay) OnMaskHint(slot func(super func() *qt.QRegion) *qt.QRegion) {
	ok := C.QwtWidgetOverlay_override_virtual_maskHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_maskHint
func miqt_exec_callback_QwtWidgetOverlay_maskHint(self *C.QwtWidgetOverlay, cb C.intptr_t) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRegion) *qt.QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_MaskHint)

	return (*C.QRegion)(virtualReturn.UnsafePointer())

}
func (this *QwtWidgetOverlay) OnDrawOverlay(slot func(painter *qt.QPainter)) {
	ok := C.QwtWidgetOverlay_override_virtual_drawOverlay(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_drawOverlay
func miqt_exec_callback_QwtWidgetOverlay_drawOverlay(self *C.QwtWidgetOverlay, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc(slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_DevType() int {

	return (int)(C.QwtWidgetOverlay_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtWidgetOverlay) OnDevType(slot func(super func() int) int) {
	ok := C.QwtWidgetOverlay_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_devType
func miqt_exec_callback_QwtWidgetOverlay_devType(self *C.QwtWidgetOverlay, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_SetVisible(visible bool) {

	C.QwtWidgetOverlay_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtWidgetOverlay) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtWidgetOverlay_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_setVisible
func miqt_exec_callback_QwtWidgetOverlay_setVisible(self *C.QwtWidgetOverlay, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtWidgetOverlay_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtWidgetOverlay) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtWidgetOverlay_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_sizeHint
func miqt_exec_callback_QwtWidgetOverlay_sizeHint(self *C.QwtWidgetOverlay, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtWidgetOverlay) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtWidgetOverlay_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtWidgetOverlay) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtWidgetOverlay_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_minimumSizeHint
func miqt_exec_callback_QwtWidgetOverlay_minimumSizeHint(self *C.QwtWidgetOverlay, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtWidgetOverlay) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtWidgetOverlay_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtWidgetOverlay) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtWidgetOverlay_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_heightForWidth
func miqt_exec_callback_QwtWidgetOverlay_heightForWidth(self *C.QwtWidgetOverlay, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtWidgetOverlay_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtWidgetOverlay) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtWidgetOverlay_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_hasHeightForWidth
func miqt_exec_callback_QwtWidgetOverlay_hasHeightForWidth(self *C.QwtWidgetOverlay, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtWidgetOverlay_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtWidgetOverlay) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtWidgetOverlay_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_paintEngine
func miqt_exec_callback_QwtWidgetOverlay_paintEngine(self *C.QwtWidgetOverlay, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtWidgetOverlay) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtWidgetOverlay_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtWidgetOverlay) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtWidgetOverlay_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_event
func miqt_exec_callback_QwtWidgetOverlay_event(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtWidgetOverlay_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_mousePressEvent
func miqt_exec_callback_QwtWidgetOverlay_mousePressEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtWidgetOverlay_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_mouseReleaseEvent
func miqt_exec_callback_QwtWidgetOverlay_mouseReleaseEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtWidgetOverlay_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_mouseDoubleClickEvent
func miqt_exec_callback_QwtWidgetOverlay_mouseDoubleClickEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtWidgetOverlay_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_mouseMoveEvent
func miqt_exec_callback_QwtWidgetOverlay_mouseMoveEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtWidgetOverlay_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_wheelEvent
func miqt_exec_callback_QwtWidgetOverlay_wheelEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtWidgetOverlay_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_keyPressEvent
func miqt_exec_callback_QwtWidgetOverlay_keyPressEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtWidgetOverlay_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_keyReleaseEvent
func miqt_exec_callback_QwtWidgetOverlay_keyReleaseEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtWidgetOverlay_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_focusInEvent
func miqt_exec_callback_QwtWidgetOverlay_focusInEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtWidgetOverlay_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_focusOutEvent
func miqt_exec_callback_QwtWidgetOverlay_focusOutEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtWidgetOverlay_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_enterEvent
func miqt_exec_callback_QwtWidgetOverlay_enterEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtWidgetOverlay_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_leaveEvent
func miqt_exec_callback_QwtWidgetOverlay_leaveEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtWidgetOverlay_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_moveEvent
func miqt_exec_callback_QwtWidgetOverlay_moveEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtWidgetOverlay_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_closeEvent
func miqt_exec_callback_QwtWidgetOverlay_closeEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtWidgetOverlay_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_contextMenuEvent
func miqt_exec_callback_QwtWidgetOverlay_contextMenuEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtWidgetOverlay_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_tabletEvent
func miqt_exec_callback_QwtWidgetOverlay_tabletEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtWidgetOverlay_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_actionEvent
func miqt_exec_callback_QwtWidgetOverlay_actionEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtWidgetOverlay_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_dragEnterEvent
func miqt_exec_callback_QwtWidgetOverlay_dragEnterEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtWidgetOverlay_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_dragMoveEvent
func miqt_exec_callback_QwtWidgetOverlay_dragMoveEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtWidgetOverlay_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_dragLeaveEvent
func miqt_exec_callback_QwtWidgetOverlay_dragLeaveEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtWidgetOverlay_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_dropEvent
func miqt_exec_callback_QwtWidgetOverlay_dropEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtWidgetOverlay_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_showEvent
func miqt_exec_callback_QwtWidgetOverlay_showEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtWidgetOverlay_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_hideEvent
func miqt_exec_callback_QwtWidgetOverlay_hideEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtWidgetOverlay_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtWidgetOverlay) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtWidgetOverlay_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_nativeEvent
func miqt_exec_callback_QwtWidgetOverlay_nativeEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtWidgetOverlay_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_changeEvent
func miqt_exec_callback_QwtWidgetOverlay_changeEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtWidgetOverlay_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtWidgetOverlay) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtWidgetOverlay_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_metric
func miqt_exec_callback_QwtWidgetOverlay_metric(self *C.QwtWidgetOverlay, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtWidgetOverlay_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtWidgetOverlay_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_initPainter
func miqt_exec_callback_QwtWidgetOverlay_initPainter(self *C.QwtWidgetOverlay, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtWidgetOverlay_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtWidgetOverlay) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtWidgetOverlay_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_redirected
func miqt_exec_callback_QwtWidgetOverlay_redirected(self *C.QwtWidgetOverlay, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtWidgetOverlay) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtWidgetOverlay_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtWidgetOverlay) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtWidgetOverlay_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_sharedPainter
func miqt_exec_callback_QwtWidgetOverlay_sharedPainter(self *C.QwtWidgetOverlay, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtWidgetOverlay) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtWidgetOverlay_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_inputMethodEvent
func miqt_exec_callback_QwtWidgetOverlay_inputMethodEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtWidgetOverlay_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtWidgetOverlay) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtWidgetOverlay_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_inputMethodQuery
func miqt_exec_callback_QwtWidgetOverlay_inputMethodQuery(self *C.QwtWidgetOverlay, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtWidgetOverlay) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtWidgetOverlay_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtWidgetOverlay) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtWidgetOverlay_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_focusNextPrevChild
func miqt_exec_callback_QwtWidgetOverlay_focusNextPrevChild(self *C.QwtWidgetOverlay, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtWidgetOverlay) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtWidgetOverlay_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_timerEvent
func miqt_exec_callback_QwtWidgetOverlay_timerEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtWidgetOverlay_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_childEvent
func miqt_exec_callback_QwtWidgetOverlay_childEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtWidgetOverlay_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtWidgetOverlay_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_customEvent
func miqt_exec_callback_QwtWidgetOverlay_customEvent(self *C.QwtWidgetOverlay, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtWidgetOverlay_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtWidgetOverlay_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_connectNotify
func miqt_exec_callback_QwtWidgetOverlay_connectNotify(self *C.QwtWidgetOverlay, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtWidgetOverlay) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtWidgetOverlay_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtWidgetOverlay) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtWidgetOverlay_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtWidgetOverlay_disconnectNotify
func miqt_exec_callback_QwtWidgetOverlay_disconnectNotify(self *C.QwtWidgetOverlay, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtWidgetOverlay{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtWidgetOverlay) Delete() {
	C.QwtWidgetOverlay_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtWidgetOverlay) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtWidgetOverlay) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

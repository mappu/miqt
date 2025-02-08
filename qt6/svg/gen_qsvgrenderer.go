package svg

/*

#include "gen_qsvgrenderer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSvgRenderer struct {
	h *C.QSvgRenderer
	*qt6.QObject
}

func (this *QSvgRenderer) cPointer() *C.QSvgRenderer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSvgRenderer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSvgRenderer constructs the type using only CGO pointers.
func newQSvgRenderer(h *C.QSvgRenderer) *QSvgRenderer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSvgRenderer_virtbase(h, &outptr_QObject)

	return &QSvgRenderer{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQSvgRenderer constructs the type using only unsafe pointers.
func UnsafeNewQSvgRenderer(h unsafe.Pointer) *QSvgRenderer {
	return newQSvgRenderer((*C.QSvgRenderer)(h))
}

// NewQSvgRenderer constructs a new QSvgRenderer object.
func NewQSvgRenderer() *QSvgRenderer {

	return newQSvgRenderer(C.QSvgRenderer_new())
}

// NewQSvgRenderer2 constructs a new QSvgRenderer object.
func NewQSvgRenderer2(filename string) *QSvgRenderer {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))

	return newQSvgRenderer(C.QSvgRenderer_new2(filename_ms))
}

// NewQSvgRenderer3 constructs a new QSvgRenderer object.
func NewQSvgRenderer3(contents []byte) *QSvgRenderer {
	contents_alias := C.struct_miqt_string{}
	if len(contents) > 0 {
		contents_alias.data = (*C.char)(unsafe.Pointer(&contents[0]))
	} else {
		contents_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	contents_alias.len = C.size_t(len(contents))

	return newQSvgRenderer(C.QSvgRenderer_new3(contents_alias))
}

// NewQSvgRenderer4 constructs a new QSvgRenderer object.
func NewQSvgRenderer4(contents *qt6.QXmlStreamReader) *QSvgRenderer {

	return newQSvgRenderer(C.QSvgRenderer_new4((*C.QXmlStreamReader)(contents.UnsafePointer())))
}

// NewQSvgRenderer5 constructs a new QSvgRenderer object.
func NewQSvgRenderer5(parent *qt6.QObject) *QSvgRenderer {

	return newQSvgRenderer(C.QSvgRenderer_new5((*C.QObject)(parent.UnsafePointer())))
}

// NewQSvgRenderer6 constructs a new QSvgRenderer object.
func NewQSvgRenderer6(filename string, parent *qt6.QObject) *QSvgRenderer {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))

	return newQSvgRenderer(C.QSvgRenderer_new6(filename_ms, (*C.QObject)(parent.UnsafePointer())))
}

// NewQSvgRenderer7 constructs a new QSvgRenderer object.
func NewQSvgRenderer7(contents []byte, parent *qt6.QObject) *QSvgRenderer {
	contents_alias := C.struct_miqt_string{}
	if len(contents) > 0 {
		contents_alias.data = (*C.char)(unsafe.Pointer(&contents[0]))
	} else {
		contents_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	contents_alias.len = C.size_t(len(contents))

	return newQSvgRenderer(C.QSvgRenderer_new7(contents_alias, (*C.QObject)(parent.UnsafePointer())))
}

// NewQSvgRenderer8 constructs a new QSvgRenderer object.
func NewQSvgRenderer8(contents *qt6.QXmlStreamReader, parent *qt6.QObject) *QSvgRenderer {

	return newQSvgRenderer(C.QSvgRenderer_new8((*C.QXmlStreamReader)(contents.UnsafePointer()), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QSvgRenderer) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSvgRenderer_metaObject(this.h)))
}

func (this *QSvgRenderer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSvgRenderer_metacast(this.h, param1_Cstring))
}

func QSvgRenderer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgRenderer) IsValid() bool {
	return (bool)(C.QSvgRenderer_isValid(this.h))
}

func (this *QSvgRenderer) DefaultSize() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QSvgRenderer_defaultSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) ViewBox() *qt6.QRect {
	_goptr := qt6.UnsafeNewQRect(unsafe.Pointer(C.QSvgRenderer_viewBox(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) ViewBoxF() *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QSvgRenderer_viewBoxF(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) SetViewBox(viewbox *qt6.QRect) {
	C.QSvgRenderer_setViewBox(this.h, (*C.QRect)(viewbox.UnsafePointer()))
}

func (this *QSvgRenderer) SetViewBoxWithViewbox(viewbox *qt6.QRectF) {
	C.QSvgRenderer_setViewBoxWithViewbox(this.h, (*C.QRectF)(viewbox.UnsafePointer()))
}

func (this *QSvgRenderer) AspectRatioMode() qt6.AspectRatioMode {
	return (qt6.AspectRatioMode)(C.QSvgRenderer_aspectRatioMode(this.h))
}

func (this *QSvgRenderer) SetAspectRatioMode(mode qt6.AspectRatioMode) {
	C.QSvgRenderer_setAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QSvgRenderer) Animated() bool {
	return (bool)(C.QSvgRenderer_animated(this.h))
}

func (this *QSvgRenderer) FramesPerSecond() int {
	return (int)(C.QSvgRenderer_framesPerSecond(this.h))
}

func (this *QSvgRenderer) SetFramesPerSecond(num int) {
	C.QSvgRenderer_setFramesPerSecond(this.h, (C.int)(num))
}

func (this *QSvgRenderer) CurrentFrame() int {
	return (int)(C.QSvgRenderer_currentFrame(this.h))
}

func (this *QSvgRenderer) SetCurrentFrame(currentFrame int) {
	C.QSvgRenderer_setCurrentFrame(this.h, (C.int)(currentFrame))
}

func (this *QSvgRenderer) AnimationDuration() int {
	return (int)(C.QSvgRenderer_animationDuration(this.h))
}

func (this *QSvgRenderer) BoundsOnElement(id string) *qt6.QRectF {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QSvgRenderer_boundsOnElement(this.h, id_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) ElementExists(id string) bool {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	return (bool)(C.QSvgRenderer_elementExists(this.h, id_ms))
}

func (this *QSvgRenderer) TransformForElement(id string) *qt6.QTransform {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	_goptr := qt6.UnsafeNewQTransform(unsafe.Pointer(C.QSvgRenderer_transformForElement(this.h, id_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) Load(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QSvgRenderer_load(this.h, filename_ms))
}

func (this *QSvgRenderer) LoadWithContents(contents []byte) bool {
	contents_alias := C.struct_miqt_string{}
	if len(contents) > 0 {
		contents_alias.data = (*C.char)(unsafe.Pointer(&contents[0]))
	} else {
		contents_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	contents_alias.len = C.size_t(len(contents))
	return (bool)(C.QSvgRenderer_loadWithContents(this.h, contents_alias))
}

func (this *QSvgRenderer) Load2(contents *qt6.QXmlStreamReader) bool {
	return (bool)(C.QSvgRenderer_load2(this.h, (*C.QXmlStreamReader)(contents.UnsafePointer())))
}

func (this *QSvgRenderer) Render(p *qt6.QPainter) {
	C.QSvgRenderer_render(this.h, (*C.QPainter)(p.UnsafePointer()))
}

func (this *QSvgRenderer) Render2(p *qt6.QPainter, bounds *qt6.QRectF) {
	C.QSvgRenderer_render2(this.h, (*C.QPainter)(p.UnsafePointer()), (*C.QRectF)(bounds.UnsafePointer()))
}

func (this *QSvgRenderer) Render3(p *qt6.QPainter, elementId string) {
	elementId_ms := C.struct_miqt_string{}
	elementId_ms.data = C.CString(elementId)
	elementId_ms.len = C.size_t(len(elementId))
	defer C.free(unsafe.Pointer(elementId_ms.data))
	C.QSvgRenderer_render3(this.h, (*C.QPainter)(p.UnsafePointer()), elementId_ms)
}

func (this *QSvgRenderer) RepaintNeeded() {
	C.QSvgRenderer_repaintNeeded(this.h)
}
func (this *QSvgRenderer) OnRepaintNeeded(slot func()) {
	C.QSvgRenderer_connect_repaintNeeded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_repaintNeeded
func miqt_exec_callback_QSvgRenderer_repaintNeeded(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QSvgRenderer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgRenderer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgRenderer) Render32(p *qt6.QPainter, elementId string, bounds *qt6.QRectF) {
	elementId_ms := C.struct_miqt_string{}
	elementId_ms.data = C.CString(elementId)
	elementId_ms.len = C.size_t(len(elementId))
	defer C.free(unsafe.Pointer(elementId_ms.data))
	C.QSvgRenderer_render32(this.h, (*C.QPainter)(p.UnsafePointer()), elementId_ms, (*C.QRectF)(bounds.UnsafePointer()))
}

// Sender can only be called from a QSvgRenderer that was directly constructed.
func (this *QSvgRenderer) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QSvgRenderer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSvgRenderer that was directly constructed.
func (this *QSvgRenderer) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSvgRenderer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSvgRenderer that was directly constructed.
func (this *QSvgRenderer) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSvgRenderer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSvgRenderer that was directly constructed.
func (this *QSvgRenderer) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSvgRenderer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSvgRenderer) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSvgRenderer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSvgRenderer) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSvgRenderer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgRenderer_event
func miqt_exec_callback_QSvgRenderer_event(self *C.QSvgRenderer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSvgRenderer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSvgRenderer) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSvgRenderer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSvgRenderer) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSvgRenderer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgRenderer_eventFilter
func miqt_exec_callback_QSvgRenderer_eventFilter(self *C.QSvgRenderer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSvgRenderer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSvgRenderer) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSvgRenderer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSvgRenderer) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSvgRenderer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgRenderer_timerEvent
func miqt_exec_callback_QSvgRenderer_timerEvent(self *C.QSvgRenderer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSvgRenderer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSvgRenderer) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSvgRenderer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgRenderer_childEvent
func miqt_exec_callback_QSvgRenderer_childEvent(self *C.QSvgRenderer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSvgRenderer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSvgRenderer) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSvgRenderer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgRenderer_customEvent
func miqt_exec_callback_QSvgRenderer_customEvent(self *C.QSvgRenderer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSvgRenderer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSvgRenderer) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSvgRenderer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgRenderer_connectNotify
func miqt_exec_callback_QSvgRenderer_connectNotify(self *C.QSvgRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSvgRenderer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSvgRenderer) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSvgRenderer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgRenderer_disconnectNotify
func miqt_exec_callback_QSvgRenderer_disconnectNotify(self *C.QSvgRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSvgRenderer) Delete() {
	C.QSvgRenderer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSvgRenderer) GoGC() {
	runtime.SetFinalizer(this, func(this *QSvgRenderer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

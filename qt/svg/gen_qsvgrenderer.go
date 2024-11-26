package svg

/*

#include "gen_qsvgrenderer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSvgRenderer struct {
	h          *C.QSvgRenderer
	isSubclass bool
	*qt.QObject
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
func newQSvgRenderer(h *C.QSvgRenderer, h_QObject *C.QObject) *QSvgRenderer {
	if h == nil {
		return nil
	}
	return &QSvgRenderer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQSvgRenderer constructs the type using only unsafe pointers.
func UnsafeNewQSvgRenderer(h unsafe.Pointer, h_QObject unsafe.Pointer) *QSvgRenderer {
	if h == nil {
		return nil
	}

	return &QSvgRenderer{h: (*C.QSvgRenderer)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQSvgRenderer constructs a new QSvgRenderer object.
func NewQSvgRenderer() *QSvgRenderer {
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new(&outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSvgRenderer2 constructs a new QSvgRenderer object.
func NewQSvgRenderer2(filename string) *QSvgRenderer {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new2(filename_ms, &outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSvgRenderer3 constructs a new QSvgRenderer object.
func NewQSvgRenderer3(contents []byte) *QSvgRenderer {
	contents_alias := C.struct_miqt_string{}
	contents_alias.data = (*C.char)(unsafe.Pointer(&contents[0]))
	contents_alias.len = C.size_t(len(contents))
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new3(contents_alias, &outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSvgRenderer4 constructs a new QSvgRenderer object.
func NewQSvgRenderer4(contents *qt.QXmlStreamReader) *QSvgRenderer {
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new4((*C.QXmlStreamReader)(contents.UnsafePointer()), &outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSvgRenderer5 constructs a new QSvgRenderer object.
func NewQSvgRenderer5(parent *qt.QObject) *QSvgRenderer {
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new5((*C.QObject)(parent.UnsafePointer()), &outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSvgRenderer6 constructs a new QSvgRenderer object.
func NewQSvgRenderer6(filename string, parent *qt.QObject) *QSvgRenderer {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new6(filename_ms, (*C.QObject)(parent.UnsafePointer()), &outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSvgRenderer7 constructs a new QSvgRenderer object.
func NewQSvgRenderer7(contents []byte, parent *qt.QObject) *QSvgRenderer {
	contents_alias := C.struct_miqt_string{}
	contents_alias.data = (*C.char)(unsafe.Pointer(&contents[0]))
	contents_alias.len = C.size_t(len(contents))
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new7(contents_alias, (*C.QObject)(parent.UnsafePointer()), &outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQSvgRenderer8 constructs a new QSvgRenderer object.
func NewQSvgRenderer8(contents *qt.QXmlStreamReader, parent *qt.QObject) *QSvgRenderer {
	var outptr_QSvgRenderer *C.QSvgRenderer = nil
	var outptr_QObject *C.QObject = nil

	C.QSvgRenderer_new8((*C.QXmlStreamReader)(contents.UnsafePointer()), (*C.QObject)(parent.UnsafePointer()), &outptr_QSvgRenderer, &outptr_QObject)
	ret := newQSvgRenderer(outptr_QSvgRenderer, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QSvgRenderer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSvgRenderer_MetaObject(this.h)))
}

func (this *QSvgRenderer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSvgRenderer_Metacast(this.h, param1_Cstring))
}

func QSvgRenderer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgRenderer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgRenderer) IsValid() bool {
	return (bool)(C.QSvgRenderer_IsValid(this.h))
}

func (this *QSvgRenderer) DefaultSize() *qt.QSize {
	_ret := C.QSvgRenderer_DefaultSize(this.h)
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) ViewBox() *qt.QRect {
	_ret := C.QSvgRenderer_ViewBox(this.h)
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) ViewBoxF() *qt.QRectF {
	_ret := C.QSvgRenderer_ViewBoxF(this.h)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) SetViewBox(viewbox *qt.QRect) {
	C.QSvgRenderer_SetViewBox(this.h, (*C.QRect)(viewbox.UnsafePointer()))
}

func (this *QSvgRenderer) SetViewBoxWithViewbox(viewbox *qt.QRectF) {
	C.QSvgRenderer_SetViewBoxWithViewbox(this.h, (*C.QRectF)(viewbox.UnsafePointer()))
}

func (this *QSvgRenderer) AspectRatioMode() qt.AspectRatioMode {
	return (qt.AspectRatioMode)(C.QSvgRenderer_AspectRatioMode(this.h))
}

func (this *QSvgRenderer) SetAspectRatioMode(mode qt.AspectRatioMode) {
	C.QSvgRenderer_SetAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QSvgRenderer) Animated() bool {
	return (bool)(C.QSvgRenderer_Animated(this.h))
}

func (this *QSvgRenderer) FramesPerSecond() int {
	return (int)(C.QSvgRenderer_FramesPerSecond(this.h))
}

func (this *QSvgRenderer) SetFramesPerSecond(num int) {
	C.QSvgRenderer_SetFramesPerSecond(this.h, (C.int)(num))
}

func (this *QSvgRenderer) CurrentFrame() int {
	return (int)(C.QSvgRenderer_CurrentFrame(this.h))
}

func (this *QSvgRenderer) SetCurrentFrame(currentFrame int) {
	C.QSvgRenderer_SetCurrentFrame(this.h, (C.int)(currentFrame))
}

func (this *QSvgRenderer) AnimationDuration() int {
	return (int)(C.QSvgRenderer_AnimationDuration(this.h))
}

func (this *QSvgRenderer) BoundsOnElement(id string) *qt.QRectF {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	_ret := C.QSvgRenderer_BoundsOnElement(this.h, id_ms)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) ElementExists(id string) bool {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	return (bool)(C.QSvgRenderer_ElementExists(this.h, id_ms))
}

func (this *QSvgRenderer) MatrixForElement(id string) *qt.QMatrix {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	_ret := C.QSvgRenderer_MatrixForElement(this.h, id_ms)
	_goptr := qt.UnsafeNewQMatrix(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) TransformForElement(id string) *qt.QTransform {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	_ret := C.QSvgRenderer_TransformForElement(this.h, id_ms)
	_goptr := qt.UnsafeNewQTransform(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgRenderer) Load(filename string) bool {
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QSvgRenderer_Load(this.h, filename_ms))
}

func (this *QSvgRenderer) LoadWithContents(contents []byte) bool {
	contents_alias := C.struct_miqt_string{}
	contents_alias.data = (*C.char)(unsafe.Pointer(&contents[0]))
	contents_alias.len = C.size_t(len(contents))
	return (bool)(C.QSvgRenderer_LoadWithContents(this.h, contents_alias))
}

func (this *QSvgRenderer) Load2(contents *qt.QXmlStreamReader) bool {
	return (bool)(C.QSvgRenderer_Load2(this.h, (*C.QXmlStreamReader)(contents.UnsafePointer())))
}

func (this *QSvgRenderer) Render(p *qt.QPainter) {
	C.QSvgRenderer_Render(this.h, (*C.QPainter)(p.UnsafePointer()))
}

func (this *QSvgRenderer) Render2(p *qt.QPainter, bounds *qt.QRectF) {
	C.QSvgRenderer_Render2(this.h, (*C.QPainter)(p.UnsafePointer()), (*C.QRectF)(bounds.UnsafePointer()))
}

func (this *QSvgRenderer) Render3(p *qt.QPainter, elementId string) {
	elementId_ms := C.struct_miqt_string{}
	elementId_ms.data = C.CString(elementId)
	elementId_ms.len = C.size_t(len(elementId))
	defer C.free(unsafe.Pointer(elementId_ms.data))
	C.QSvgRenderer_Render3(this.h, (*C.QPainter)(p.UnsafePointer()), elementId_ms)
}

func (this *QSvgRenderer) RepaintNeeded() {
	C.QSvgRenderer_RepaintNeeded(this.h)
}
func (this *QSvgRenderer) OnRepaintNeeded(slot func()) {
	C.QSvgRenderer_connect_RepaintNeeded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_RepaintNeeded
func miqt_exec_callback_QSvgRenderer_RepaintNeeded(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QSvgRenderer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgRenderer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgRenderer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgRenderer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgRenderer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgRenderer) Render32(p *qt.QPainter, elementId string, bounds *qt.QRectF) {
	elementId_ms := C.struct_miqt_string{}
	elementId_ms.data = C.CString(elementId)
	elementId_ms.len = C.size_t(len(elementId))
	defer C.free(unsafe.Pointer(elementId_ms.data))
	C.QSvgRenderer_Render32(this.h, (*C.QPainter)(p.UnsafePointer()), elementId_ms, (*C.QRectF)(bounds.UnsafePointer()))
}

func (this *QSvgRenderer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSvgRenderer_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSvgRenderer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	C.QSvgRenderer_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_Event
func miqt_exec_callback_QSvgRenderer_Event(self *C.QSvgRenderer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSvgRenderer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSvgRenderer) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSvgRenderer_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSvgRenderer) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	C.QSvgRenderer_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_EventFilter
func miqt_exec_callback_QSvgRenderer_EventFilter(self *C.QSvgRenderer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSvgRenderer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSvgRenderer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSvgRenderer_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSvgRenderer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	C.QSvgRenderer_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_TimerEvent
func miqt_exec_callback_QSvgRenderer_TimerEvent(self *C.QSvgRenderer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSvgRenderer_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSvgRenderer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	C.QSvgRenderer_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_ChildEvent
func miqt_exec_callback_QSvgRenderer_ChildEvent(self *C.QSvgRenderer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSvgRenderer_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSvgRenderer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	C.QSvgRenderer_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_CustomEvent
func miqt_exec_callback_QSvgRenderer_CustomEvent(self *C.QSvgRenderer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSvgRenderer_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSvgRenderer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QSvgRenderer_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_ConnectNotify
func miqt_exec_callback_QSvgRenderer_ConnectNotify(self *C.QSvgRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSvgRenderer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSvgRenderer_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSvgRenderer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QSvgRenderer_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSvgRenderer_DisconnectNotify
func miqt_exec_callback_QSvgRenderer_DisconnectNotify(self *C.QSvgRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSvgRenderer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSvgRenderer) Delete() {
	C.QSvgRenderer_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSvgRenderer) GoGC() {
	runtime.SetFinalizer(this, func(this *QSvgRenderer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

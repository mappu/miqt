package pdf

/*

#include "gen_qpdfpagerenderer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPdfPageRenderer__RenderMode int

const (
	QPdfPageRenderer__MultiThreaded  QPdfPageRenderer__RenderMode = 0
	QPdfPageRenderer__SingleThreaded QPdfPageRenderer__RenderMode = 1
)

type QPdfPageRenderer struct {
	h *C.QPdfPageRenderer
	*qt.QObject
}

func (this *QPdfPageRenderer) cPointer() *C.QPdfPageRenderer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfPageRenderer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfPageRenderer constructs the type using only CGO pointers.
func newQPdfPageRenderer(h *C.QPdfPageRenderer) *QPdfPageRenderer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPdfPageRenderer_virtbase(h, &outptr_QObject)

	return &QPdfPageRenderer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQPdfPageRenderer constructs the type using only unsafe pointers.
func UnsafeNewQPdfPageRenderer(h unsafe.Pointer) *QPdfPageRenderer {
	return newQPdfPageRenderer((*C.QPdfPageRenderer)(h))
}

// NewQPdfPageRenderer constructs a new QPdfPageRenderer object.
func NewQPdfPageRenderer() *QPdfPageRenderer {

	return newQPdfPageRenderer(C.QPdfPageRenderer_new())
}

// NewQPdfPageRenderer2 constructs a new QPdfPageRenderer object.
func NewQPdfPageRenderer2(parent *qt.QObject) *QPdfPageRenderer {

	return newQPdfPageRenderer(C.QPdfPageRenderer_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QPdfPageRenderer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QPdfPageRenderer_metaObject(this.h)))
}

func (this *QPdfPageRenderer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfPageRenderer_metacast(this.h, param1_Cstring))
}

func QPdfPageRenderer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageRenderer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageRenderer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageRenderer_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfPageRenderer) RenderMode() QPdfPageRenderer__RenderMode {
	return (QPdfPageRenderer__RenderMode)(C.QPdfPageRenderer_renderMode(this.h))
}

func (this *QPdfPageRenderer) SetRenderMode(mode QPdfPageRenderer__RenderMode) {
	C.QPdfPageRenderer_setRenderMode(this.h, (C.int)(mode))
}

func (this *QPdfPageRenderer) Document() *QPdfDocument {
	return newQPdfDocument(C.QPdfPageRenderer_document(this.h))
}

func (this *QPdfPageRenderer) SetDocument(document *QPdfDocument) {
	C.QPdfPageRenderer_setDocument(this.h, document.cPointer())
}

func (this *QPdfPageRenderer) RequestPage(pageNumber int, imageSize qt.QSize) uint64 {
	return (uint64)(C.QPdfPageRenderer_requestPage(this.h, (C.int)(pageNumber), (*C.QSize)(imageSize.UnsafePointer())))
}

func (this *QPdfPageRenderer) DocumentChanged(document *QPdfDocument) {
	C.QPdfPageRenderer_documentChanged(this.h, document.cPointer())
}
func (this *QPdfPageRenderer) OnDocumentChanged(slot func(document *QPdfDocument)) {
	C.QPdfPageRenderer_connect_documentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageRenderer_documentChanged
func miqt_exec_callback_QPdfPageRenderer_documentChanged(cb C.intptr_t, document *C.QPdfDocument) {
	gofunc, ok := cgo.Handle(cb).Value().(func(document *QPdfDocument))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPdfDocument(document)

	gofunc(slotval1)
}

func (this *QPdfPageRenderer) RenderModeChanged(renderMode QPdfPageRenderer__RenderMode) {
	C.QPdfPageRenderer_renderModeChanged(this.h, (C.int)(renderMode))
}
func (this *QPdfPageRenderer) OnRenderModeChanged(slot func(renderMode QPdfPageRenderer__RenderMode)) {
	C.QPdfPageRenderer_connect_renderModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageRenderer_renderModeChanged
func miqt_exec_callback_QPdfPageRenderer_renderModeChanged(cb C.intptr_t, renderMode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(renderMode QPdfPageRenderer__RenderMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPdfPageRenderer__RenderMode)(renderMode)

	gofunc(slotval1)
}

func (this *QPdfPageRenderer) PageRendered(pageNumber int, imageSize qt.QSize, image *qt.QImage, options QPdfDocumentRenderOptions, requestId uint64) {
	C.QPdfPageRenderer_pageRendered(this.h, (C.int)(pageNumber), (*C.QSize)(imageSize.UnsafePointer()), (*C.QImage)(image.UnsafePointer()), options.cPointer(), (C.ulonglong)(requestId))
}
func (this *QPdfPageRenderer) OnPageRendered(slot func(pageNumber int, imageSize qt.QSize, image *qt.QImage, options QPdfDocumentRenderOptions, requestId uint64)) {
	C.QPdfPageRenderer_connect_pageRendered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageRenderer_pageRendered
func miqt_exec_callback_QPdfPageRenderer_pageRendered(cb C.intptr_t, pageNumber C.int, imageSize *C.QSize, image *C.QImage, options *C.QPdfDocumentRenderOptions, requestId C.ulonglong) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pageNumber int, imageSize qt.QSize, image *qt.QImage, options QPdfDocumentRenderOptions, requestId uint64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pageNumber)

	imageSize_goptr := qt.UnsafeNewQSize(unsafe.Pointer(imageSize))
	imageSize_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *imageSize_goptr

	slotval3 := qt.UnsafeNewQImage(unsafe.Pointer(image))

	options_goptr := newQPdfDocumentRenderOptions(options)
	options_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval4 := *options_goptr

	slotval5 := (uint64)(requestId)

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5)
}

func QPdfPageRenderer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageRenderer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageRenderer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageRenderer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageRenderer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageRenderer_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageRenderer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageRenderer_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfPageRenderer) RequestPage2(pageNumber int, imageSize qt.QSize, options QPdfDocumentRenderOptions) uint64 {
	return (uint64)(C.QPdfPageRenderer_requestPage2(this.h, (C.int)(pageNumber), (*C.QSize)(imageSize.UnsafePointer()), options.cPointer()))
}

// Sender can only be called from a QPdfPageRenderer that was directly constructed.
func (this *QPdfPageRenderer) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QPdfPageRenderer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPdfPageRenderer that was directly constructed.
func (this *QPdfPageRenderer) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfPageRenderer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPdfPageRenderer that was directly constructed.
func (this *QPdfPageRenderer) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfPageRenderer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPdfPageRenderer that was directly constructed.
func (this *QPdfPageRenderer) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfPageRenderer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPdfPageRenderer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QPdfPageRenderer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfPageRenderer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QPdfPageRenderer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageRenderer_event
func miqt_exec_callback_QPdfPageRenderer_event(self *C.QPdfPageRenderer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfPageRenderer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfPageRenderer) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QPdfPageRenderer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfPageRenderer) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QPdfPageRenderer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageRenderer_eventFilter
func miqt_exec_callback_QPdfPageRenderer_eventFilter(self *C.QPdfPageRenderer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfPageRenderer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfPageRenderer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QPdfPageRenderer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPdfPageRenderer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QPdfPageRenderer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageRenderer_timerEvent
func miqt_exec_callback_QPdfPageRenderer_timerEvent(self *C.QPdfPageRenderer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageRenderer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfPageRenderer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QPdfPageRenderer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPdfPageRenderer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QPdfPageRenderer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageRenderer_childEvent
func miqt_exec_callback_QPdfPageRenderer_childEvent(self *C.QPdfPageRenderer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageRenderer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfPageRenderer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QPdfPageRenderer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPdfPageRenderer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QPdfPageRenderer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageRenderer_customEvent
func miqt_exec_callback_QPdfPageRenderer_customEvent(self *C.QPdfPageRenderer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageRenderer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfPageRenderer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QPdfPageRenderer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfPageRenderer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QPdfPageRenderer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageRenderer_connectNotify
func miqt_exec_callback_QPdfPageRenderer_connectNotify(self *C.QPdfPageRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfPageRenderer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfPageRenderer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QPdfPageRenderer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfPageRenderer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QPdfPageRenderer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageRenderer_disconnectNotify
func miqt_exec_callback_QPdfPageRenderer_disconnectNotify(self *C.QPdfPageRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfPageRenderer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPdfPageRenderer) Delete() {
	C.QPdfPageRenderer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfPageRenderer) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfPageRenderer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

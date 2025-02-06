package qt6

/*

#include "gen_qoffscreensurface.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QOffscreenSurface struct {
	h *C.QOffscreenSurface
	*QObject
	*QSurface
}

func (this *QOffscreenSurface) cPointer() *C.QOffscreenSurface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QOffscreenSurface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQOffscreenSurface constructs the type using only CGO pointers.
func newQOffscreenSurface(h *C.QOffscreenSurface) *QOffscreenSurface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QSurface *C.QSurface = nil
	C.QOffscreenSurface_virtbase(h, &outptr_QObject, &outptr_QSurface)

	return &QOffscreenSurface{h: h,
		QObject:  newQObject(outptr_QObject),
		QSurface: newQSurface(outptr_QSurface)}
}

// UnsafeNewQOffscreenSurface constructs the type using only unsafe pointers.
func UnsafeNewQOffscreenSurface(h unsafe.Pointer) *QOffscreenSurface {
	return newQOffscreenSurface((*C.QOffscreenSurface)(h))
}

// NewQOffscreenSurface constructs a new QOffscreenSurface object.
func NewQOffscreenSurface() *QOffscreenSurface {

	return newQOffscreenSurface(C.QOffscreenSurface_new())
}

// NewQOffscreenSurface2 constructs a new QOffscreenSurface object.
func NewQOffscreenSurface2(screen *QScreen) *QOffscreenSurface {

	return newQOffscreenSurface(C.QOffscreenSurface_new2(screen.cPointer()))
}

// NewQOffscreenSurface3 constructs a new QOffscreenSurface object.
func NewQOffscreenSurface3(screen *QScreen, parent *QObject) *QOffscreenSurface {

	return newQOffscreenSurface(C.QOffscreenSurface_new3(screen.cPointer(), parent.cPointer()))
}

func (this *QOffscreenSurface) MetaObject() *QMetaObject {
	return newQMetaObject(C.QOffscreenSurface_metaObject(this.h))
}

func (this *QOffscreenSurface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QOffscreenSurface_metacast(this.h, param1_Cstring))
}

func QOffscreenSurface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QOffscreenSurface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QOffscreenSurface) SurfaceType() QSurface__SurfaceType {
	return (QSurface__SurfaceType)(C.QOffscreenSurface_surfaceType(this.h))
}

func (this *QOffscreenSurface) Create() {
	C.QOffscreenSurface_create(this.h)
}

func (this *QOffscreenSurface) Destroy() {
	C.QOffscreenSurface_destroy(this.h)
}

func (this *QOffscreenSurface) IsValid() bool {
	return (bool)(C.QOffscreenSurface_isValid(this.h))
}

func (this *QOffscreenSurface) SetFormat(format *QSurfaceFormat) {
	C.QOffscreenSurface_setFormat(this.h, format.cPointer())
}

func (this *QOffscreenSurface) Format() *QSurfaceFormat {
	_goptr := newQSurfaceFormat(C.QOffscreenSurface_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOffscreenSurface) RequestedFormat() *QSurfaceFormat {
	_goptr := newQSurfaceFormat(C.QOffscreenSurface_requestedFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOffscreenSurface) Size() *QSize {
	_goptr := newQSize(C.QOffscreenSurface_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QOffscreenSurface) Screen() *QScreen {
	return newQScreen(C.QOffscreenSurface_screen(this.h))
}

func (this *QOffscreenSurface) SetScreen(screen *QScreen) {
	C.QOffscreenSurface_setScreen(this.h, screen.cPointer())
}

func (this *QOffscreenSurface) ScreenChanged(screen *QScreen) {
	C.QOffscreenSurface_screenChanged(this.h, screen.cPointer())
}
func (this *QOffscreenSurface) OnScreenChanged(slot func(screen *QScreen)) {
	C.QOffscreenSurface_connect_screenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QOffscreenSurface_screenChanged
func miqt_exec_callback_QOffscreenSurface_screenChanged(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen(screen)

	gofunc(slotval1)
}

func QOffscreenSurface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QOffscreenSurface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QOffscreenSurface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QOffscreenSurface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ResolveInterface can only be called from a QOffscreenSurface that was directly constructed.
func (this *QOffscreenSurface) ResolveInterface(name string, revision int) unsafe.Pointer {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (unsafe.Pointer)(C.QOffscreenSurface_protectedbase_resolveInterface(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_Cstring, (C.int)(revision)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QOffscreenSurface that was directly constructed.
func (this *QOffscreenSurface) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QOffscreenSurface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QOffscreenSurface that was directly constructed.
func (this *QOffscreenSurface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QOffscreenSurface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QOffscreenSurface that was directly constructed.
func (this *QOffscreenSurface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QOffscreenSurface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QOffscreenSurface that was directly constructed.
func (this *QOffscreenSurface) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QOffscreenSurface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QOffscreenSurface) callVirtualBase_SurfaceType() QSurface__SurfaceType {

	return (QSurface__SurfaceType)(C.QOffscreenSurface_virtualbase_surfaceType(unsafe.Pointer(this.h)))

}
func (this *QOffscreenSurface) OnSurfaceType(slot func(super func() QSurface__SurfaceType) QSurface__SurfaceType) {
	ok := C.QOffscreenSurface_override_virtual_surfaceType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_surfaceType
func miqt_exec_callback_QOffscreenSurface_surfaceType(self *C.QOffscreenSurface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSurface__SurfaceType) QSurface__SurfaceType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QOffscreenSurface{h: self}).callVirtualBase_SurfaceType)

	return (C.int)(virtualReturn)

}

func (this *QOffscreenSurface) callVirtualBase_Format() *QSurfaceFormat {

	_goptr := newQSurfaceFormat(C.QOffscreenSurface_virtualbase_format(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QOffscreenSurface) OnFormat(slot func(super func() *QSurfaceFormat) *QSurfaceFormat) {
	ok := C.QOffscreenSurface_override_virtual_format(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_format
func miqt_exec_callback_QOffscreenSurface_format(self *C.QOffscreenSurface, cb C.intptr_t) *C.QSurfaceFormat {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSurfaceFormat) *QSurfaceFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QOffscreenSurface{h: self}).callVirtualBase_Format)

	return virtualReturn.cPointer()

}

func (this *QOffscreenSurface) callVirtualBase_Size() *QSize {

	_goptr := newQSize(C.QOffscreenSurface_virtualbase_size(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QOffscreenSurface) OnSize(slot func(super func() *QSize) *QSize) {
	ok := C.QOffscreenSurface_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_size
func miqt_exec_callback_QOffscreenSurface_size(self *C.QOffscreenSurface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QOffscreenSurface{h: self}).callVirtualBase_Size)

	return virtualReturn.cPointer()

}

func (this *QOffscreenSurface) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QOffscreenSurface_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QOffscreenSurface) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QOffscreenSurface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_event
func miqt_exec_callback_QOffscreenSurface_event(self *C.QOffscreenSurface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QOffscreenSurface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QOffscreenSurface) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QOffscreenSurface_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QOffscreenSurface) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QOffscreenSurface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_eventFilter
func miqt_exec_callback_QOffscreenSurface_eventFilter(self *C.QOffscreenSurface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QOffscreenSurface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QOffscreenSurface) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QOffscreenSurface_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QOffscreenSurface) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QOffscreenSurface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_timerEvent
func miqt_exec_callback_QOffscreenSurface_timerEvent(self *C.QOffscreenSurface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QOffscreenSurface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QOffscreenSurface) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QOffscreenSurface_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QOffscreenSurface) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QOffscreenSurface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_childEvent
func miqt_exec_callback_QOffscreenSurface_childEvent(self *C.QOffscreenSurface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QOffscreenSurface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QOffscreenSurface) callVirtualBase_CustomEvent(event *QEvent) {

	C.QOffscreenSurface_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QOffscreenSurface) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QOffscreenSurface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_customEvent
func miqt_exec_callback_QOffscreenSurface_customEvent(self *C.QOffscreenSurface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QOffscreenSurface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QOffscreenSurface) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QOffscreenSurface_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QOffscreenSurface) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QOffscreenSurface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_connectNotify
func miqt_exec_callback_QOffscreenSurface_connectNotify(self *C.QOffscreenSurface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QOffscreenSurface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QOffscreenSurface) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QOffscreenSurface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QOffscreenSurface) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QOffscreenSurface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QOffscreenSurface_disconnectNotify
func miqt_exec_callback_QOffscreenSurface_disconnectNotify(self *C.QOffscreenSurface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QOffscreenSurface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QOffscreenSurface) Delete() {
	C.QOffscreenSurface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QOffscreenSurface) GoGC() {
	runtime.SetFinalizer(this, func(this *QOffscreenSurface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

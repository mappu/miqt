package qt

/*

#include "gen_qpictureformatplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPictureFormatPlugin struct {
	h *C.QPictureFormatPlugin
	*QObject
}

func (this *QPictureFormatPlugin) cPointer() *C.QPictureFormatPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPictureFormatPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPictureFormatPlugin constructs the type using only CGO pointers.
func newQPictureFormatPlugin(h *C.QPictureFormatPlugin) *QPictureFormatPlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPictureFormatPlugin_virtbase(h, &outptr_QObject)

	return &QPictureFormatPlugin{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQPictureFormatPlugin constructs the type using only unsafe pointers.
func UnsafeNewQPictureFormatPlugin(h unsafe.Pointer) *QPictureFormatPlugin {
	return newQPictureFormatPlugin((*C.QPictureFormatPlugin)(h))
}

// NewQPictureFormatPlugin constructs a new QPictureFormatPlugin object.
func NewQPictureFormatPlugin() *QPictureFormatPlugin {

	return newQPictureFormatPlugin(C.QPictureFormatPlugin_new())
}

// NewQPictureFormatPlugin2 constructs a new QPictureFormatPlugin object.
func NewQPictureFormatPlugin2(parent *QObject) *QPictureFormatPlugin {

	return newQPictureFormatPlugin(C.QPictureFormatPlugin_new2(parent.cPointer()))
}

func (this *QPictureFormatPlugin) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPictureFormatPlugin_metaObject(this.h))
}

func (this *QPictureFormatPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPictureFormatPlugin_metacast(this.h, param1_Cstring))
}

func QPictureFormatPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPictureFormatPlugin) LoadPicture(format string, filename string, pic *QPicture) bool {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QPictureFormatPlugin_loadPicture(this.h, format_ms, filename_ms, pic.cPointer()))
}

func (this *QPictureFormatPlugin) SavePicture(format string, filename string, pic *QPicture) bool {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))
	return (bool)(C.QPictureFormatPlugin_savePicture(this.h, format_ms, filename_ms, pic.cPointer()))
}

func (this *QPictureFormatPlugin) InstallIOHandler(format string) bool {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	return (bool)(C.QPictureFormatPlugin_installIOHandler(this.h, format_ms))
}

func QPictureFormatPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPictureFormatPlugin) callVirtualBase_LoadPicture(format string, filename string, pic *QPicture) bool {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))

	return (bool)(C.QPictureFormatPlugin_virtualbase_loadPicture(unsafe.Pointer(this.h), format_ms, filename_ms, pic.cPointer()))

}
func (this *QPictureFormatPlugin) OnloadPicture(slot func(super func(format string, filename string, pic *QPicture) bool, format string, filename string, pic *QPicture) bool) {
	ok := C.QPictureFormatPlugin_override_virtual_loadPicture(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_loadPicture
func miqt_exec_callback_QPictureFormatPlugin_loadPicture(self *C.QPictureFormatPlugin, cb C.intptr_t, format C.struct_miqt_string, filename C.struct_miqt_string, pic *C.QPicture) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format string, filename string, pic *QPicture) bool, format string, filename string, pic *QPicture) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var format_ms C.struct_miqt_string = format
	format_ret := C.GoStringN(format_ms.data, C.int(int64(format_ms.len)))
	C.free(unsafe.Pointer(format_ms.data))
	slotval1 := format_ret
	var filename_ms C.struct_miqt_string = filename
	filename_ret := C.GoStringN(filename_ms.data, C.int(int64(filename_ms.len)))
	C.free(unsafe.Pointer(filename_ms.data))
	slotval2 := filename_ret
	slotval3 := newQPicture(pic)

	virtualReturn := gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_LoadPicture, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPictureFormatPlugin) callVirtualBase_SavePicture(format string, filename string, pic *QPicture) bool {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	filename_ms := C.struct_miqt_string{}
	filename_ms.data = C.CString(filename)
	filename_ms.len = C.size_t(len(filename))
	defer C.free(unsafe.Pointer(filename_ms.data))

	return (bool)(C.QPictureFormatPlugin_virtualbase_savePicture(unsafe.Pointer(this.h), format_ms, filename_ms, pic.cPointer()))

}
func (this *QPictureFormatPlugin) OnsavePicture(slot func(super func(format string, filename string, pic *QPicture) bool, format string, filename string, pic *QPicture) bool) {
	ok := C.QPictureFormatPlugin_override_virtual_savePicture(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_savePicture
func miqt_exec_callback_QPictureFormatPlugin_savePicture(self *C.QPictureFormatPlugin, cb C.intptr_t, format C.struct_miqt_string, filename C.struct_miqt_string, pic *C.QPicture) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(format string, filename string, pic *QPicture) bool, format string, filename string, pic *QPicture) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var format_ms C.struct_miqt_string = format
	format_ret := C.GoStringN(format_ms.data, C.int(int64(format_ms.len)))
	C.free(unsafe.Pointer(format_ms.data))
	slotval1 := format_ret
	var filename_ms C.struct_miqt_string = filename
	filename_ret := C.GoStringN(filename_ms.data, C.int(int64(filename_ms.len)))
	C.free(unsafe.Pointer(filename_ms.data))
	slotval2 := filename_ret
	slotval3 := newQPicture(pic)

	virtualReturn := gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_SavePicture, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}
func (this *QPictureFormatPlugin) OninstallIOHandler(slot func(format string) bool) {
	ok := C.QPictureFormatPlugin_override_virtual_installIOHandler(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_installIOHandler
func miqt_exec_callback_QPictureFormatPlugin_installIOHandler(self *C.QPictureFormatPlugin, cb C.intptr_t, format C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(format string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var format_ms C.struct_miqt_string = format
	format_ret := C.GoStringN(format_ms.data, C.int(int64(format_ms.len)))
	C.free(unsafe.Pointer(format_ms.data))
	slotval1 := format_ret

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPictureFormatPlugin) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPictureFormatPlugin_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPictureFormatPlugin) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPictureFormatPlugin_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_event
func miqt_exec_callback_QPictureFormatPlugin_event(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPictureFormatPlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPictureFormatPlugin_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPictureFormatPlugin) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPictureFormatPlugin_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_eventFilter
func miqt_exec_callback_QPictureFormatPlugin_eventFilter(self *C.QPictureFormatPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPictureFormatPlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPictureFormatPlugin_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPictureFormatPlugin) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPictureFormatPlugin_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_timerEvent
func miqt_exec_callback_QPictureFormatPlugin_timerEvent(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPictureFormatPlugin_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPictureFormatPlugin) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPictureFormatPlugin_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_childEvent
func miqt_exec_callback_QPictureFormatPlugin_childEvent(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPictureFormatPlugin_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPictureFormatPlugin) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPictureFormatPlugin_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_customEvent
func miqt_exec_callback_QPictureFormatPlugin_customEvent(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPictureFormatPlugin_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPictureFormatPlugin) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPictureFormatPlugin_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_connectNotify
func miqt_exec_callback_QPictureFormatPlugin_connectNotify(self *C.QPictureFormatPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPictureFormatPlugin_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPictureFormatPlugin) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPictureFormatPlugin_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPictureFormatPlugin_disconnectNotify
func miqt_exec_callback_QPictureFormatPlugin_disconnectNotify(self *C.QPictureFormatPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPictureFormatPlugin) Delete() {
	C.QPictureFormatPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPictureFormatPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QPictureFormatPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

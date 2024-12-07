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
	h          *C.QPictureFormatPlugin
	isSubclass bool
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
func newQPictureFormatPlugin(h *C.QPictureFormatPlugin, h_QObject *C.QObject) *QPictureFormatPlugin {
	if h == nil {
		return nil
	}
	return &QPictureFormatPlugin{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQPictureFormatPlugin constructs the type using only unsafe pointers.
func UnsafeNewQPictureFormatPlugin(h unsafe.Pointer, h_QObject unsafe.Pointer) *QPictureFormatPlugin {
	if h == nil {
		return nil
	}

	return &QPictureFormatPlugin{h: (*C.QPictureFormatPlugin)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQPictureFormatPlugin constructs a new QPictureFormatPlugin object.
func NewQPictureFormatPlugin() *QPictureFormatPlugin {
	var outptr_QPictureFormatPlugin *C.QPictureFormatPlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QPictureFormatPlugin_new(&outptr_QPictureFormatPlugin, &outptr_QObject)
	ret := newQPictureFormatPlugin(outptr_QPictureFormatPlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQPictureFormatPlugin2 constructs a new QPictureFormatPlugin object.
func NewQPictureFormatPlugin2(parent *QObject) *QPictureFormatPlugin {
	var outptr_QPictureFormatPlugin *C.QPictureFormatPlugin = nil
	var outptr_QObject *C.QObject = nil

	C.QPictureFormatPlugin_new2(parent.cPointer(), &outptr_QPictureFormatPlugin, &outptr_QObject)
	ret := newQPictureFormatPlugin(outptr_QPictureFormatPlugin, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QPictureFormatPlugin) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPictureFormatPlugin_MetaObject(this.h)))
}

func (this *QPictureFormatPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPictureFormatPlugin_Metacast(this.h, param1_Cstring))
}

func QPictureFormatPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_TrUtf8(s_Cstring)
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
	return (bool)(C.QPictureFormatPlugin_LoadPicture(this.h, format_ms, filename_ms, pic.cPointer()))
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
	return (bool)(C.QPictureFormatPlugin_SavePicture(this.h, format_ms, filename_ms, pic.cPointer()))
}

func (this *QPictureFormatPlugin) InstallIOHandler(format string) bool {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	return (bool)(C.QPictureFormatPlugin_InstallIOHandler(this.h, format_ms))
}

func QPictureFormatPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPictureFormatPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPictureFormatPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
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

	return (bool)(C.QPictureFormatPlugin_virtualbase_LoadPicture(unsafe.Pointer(this.h), format_ms, filename_ms, pic.cPointer()))

}
func (this *QPictureFormatPlugin) OnLoadPicture(slot func(super func(format string, filename string, pic *QPicture) bool, format string, filename string, pic *QPicture) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_LoadPicture(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_LoadPicture
func miqt_exec_callback_QPictureFormatPlugin_LoadPicture(self *C.QPictureFormatPlugin, cb C.intptr_t, format C.struct_miqt_string, filename C.struct_miqt_string, pic *C.QPicture) C.bool {
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
	slotval3 := UnsafeNewQPicture(unsafe.Pointer(pic), nil)

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

	return (bool)(C.QPictureFormatPlugin_virtualbase_SavePicture(unsafe.Pointer(this.h), format_ms, filename_ms, pic.cPointer()))

}
func (this *QPictureFormatPlugin) OnSavePicture(slot func(super func(format string, filename string, pic *QPicture) bool, format string, filename string, pic *QPicture) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_SavePicture(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_SavePicture
func miqt_exec_callback_QPictureFormatPlugin_SavePicture(self *C.QPictureFormatPlugin, cb C.intptr_t, format C.struct_miqt_string, filename C.struct_miqt_string, pic *C.QPicture) C.bool {
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
	slotval3 := UnsafeNewQPicture(unsafe.Pointer(pic), nil)

	virtualReturn := gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_SavePicture, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}
func (this *QPictureFormatPlugin) OnInstallIOHandler(slot func(format string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_InstallIOHandler(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_InstallIOHandler
func miqt_exec_callback_QPictureFormatPlugin_InstallIOHandler(self *C.QPictureFormatPlugin, cb C.intptr_t, format C.struct_miqt_string) C.bool {
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

	return (bool)(C.QPictureFormatPlugin_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPictureFormatPlugin) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_Event
func miqt_exec_callback_QPictureFormatPlugin_Event(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPictureFormatPlugin) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPictureFormatPlugin_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPictureFormatPlugin) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_EventFilter
func miqt_exec_callback_QPictureFormatPlugin_EventFilter(self *C.QPictureFormatPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPictureFormatPlugin) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPictureFormatPlugin_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPictureFormatPlugin) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_TimerEvent
func miqt_exec_callback_QPictureFormatPlugin_TimerEvent(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPictureFormatPlugin_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPictureFormatPlugin) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_ChildEvent
func miqt_exec_callback_QPictureFormatPlugin_ChildEvent(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPictureFormatPlugin_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPictureFormatPlugin) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_CustomEvent
func miqt_exec_callback_QPictureFormatPlugin_CustomEvent(self *C.QPictureFormatPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPictureFormatPlugin_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPictureFormatPlugin) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_ConnectNotify
func miqt_exec_callback_QPictureFormatPlugin_ConnectNotify(self *C.QPictureFormatPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPictureFormatPlugin) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPictureFormatPlugin_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPictureFormatPlugin) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPictureFormatPlugin_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPictureFormatPlugin_DisconnectNotify
func miqt_exec_callback_QPictureFormatPlugin_DisconnectNotify(self *C.QPictureFormatPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPictureFormatPlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPictureFormatPlugin) Delete() {
	C.QPictureFormatPlugin_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPictureFormatPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QPictureFormatPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

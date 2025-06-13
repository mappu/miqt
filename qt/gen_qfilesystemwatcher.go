package qt

/*

#include "gen_qfilesystemwatcher.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFileSystemWatcher struct {
	h *C.QFileSystemWatcher
	*QObject
}

func (this *QFileSystemWatcher) cPointer() *C.QFileSystemWatcher {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileSystemWatcher) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileSystemWatcher constructs the type using only CGO pointers.
func newQFileSystemWatcher(h *C.QFileSystemWatcher) *QFileSystemWatcher {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QFileSystemWatcher_virtbase(h, &outptr_QObject)

	return &QFileSystemWatcher{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQFileSystemWatcher constructs the type using only unsafe pointers.
func UnsafeNewQFileSystemWatcher(h unsafe.Pointer) *QFileSystemWatcher {
	return newQFileSystemWatcher((*C.QFileSystemWatcher)(h))
}

// NewQFileSystemWatcher constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher() *QFileSystemWatcher {

	return newQFileSystemWatcher(C.QFileSystemWatcher_new())
}

// NewQFileSystemWatcher2 constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher2(paths []string) *QFileSystemWatcher {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}

	return newQFileSystemWatcher(C.QFileSystemWatcher_new2(paths_ma))
}

// NewQFileSystemWatcher3 constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher3(parent *QObject) *QFileSystemWatcher {

	return newQFileSystemWatcher(C.QFileSystemWatcher_new3(parent.cPointer()))
}

// NewQFileSystemWatcher4 constructs a new QFileSystemWatcher object.
func NewQFileSystemWatcher4(paths []string, parent *QObject) *QFileSystemWatcher {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}

	return newQFileSystemWatcher(C.QFileSystemWatcher_new4(paths_ma, parent.cPointer()))
}

func (this *QFileSystemWatcher) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFileSystemWatcher_metaObject(this.h))
}

func (this *QFileSystemWatcher) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFileSystemWatcher_metacast(this.h, param1_Cstring))
}

func QFileSystemWatcher_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSystemWatcher_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileSystemWatcher) AddPath(file string) bool {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	return (bool)(C.QFileSystemWatcher_addPath(this.h, file_ms))
}

func (this *QFileSystemWatcher) AddPaths(files []string) []string {
	files_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	for i := range files {
		files_i_ms := C.struct_miqt_string{}
		files_i_ms.data = C.CString(files[i])
		files_i_ms.len = C.size_t(len(files[i]))
		defer C.free(unsafe.Pointer(files_i_ms.data))
		files_CArray[i] = files_i_ms
	}
	files_ma := C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_addPaths(this.h, files_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileSystemWatcher) RemovePath(file string) bool {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	return (bool)(C.QFileSystemWatcher_removePath(this.h, file_ms))
}

func (this *QFileSystemWatcher) RemovePaths(files []string) []string {
	files_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(files))))
	defer C.free(unsafe.Pointer(files_CArray))
	for i := range files {
		files_i_ms := C.struct_miqt_string{}
		files_i_ms.data = C.CString(files[i])
		files_i_ms.len = C.size_t(len(files[i]))
		defer C.free(unsafe.Pointer(files_i_ms.data))
		files_CArray[i] = files_i_ms
	}
	files_ma := C.struct_miqt_array{len: C.size_t(len(files)), data: unsafe.Pointer(files_CArray)}
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_removePaths(this.h, files_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileSystemWatcher) Files() []string {
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_files(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QFileSystemWatcher) Directories() []string {
	var _ma C.struct_miqt_array = C.QFileSystemWatcher_directories(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QFileSystemWatcher_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSystemWatcher_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSystemWatcher_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFileSystemWatcher_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFileSystemWatcher_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QFileSystemWatcher that was directly constructed.
func (this *QFileSystemWatcher) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QFileSystemWatcher_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QFileSystemWatcher that was directly constructed.
func (this *QFileSystemWatcher) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFileSystemWatcher_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QFileSystemWatcher that was directly constructed.
func (this *QFileSystemWatcher) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFileSystemWatcher_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QFileSystemWatcher that was directly constructed.
func (this *QFileSystemWatcher) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFileSystemWatcher_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QFileSystemWatcher) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFileSystemWatcher_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFileSystemWatcher) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFileSystemWatcher_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSystemWatcher_event
func miqt_exec_callback_QFileSystemWatcher_event(self *C.QFileSystemWatcher, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QFileSystemWatcher{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFileSystemWatcher) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QFileSystemWatcher_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFileSystemWatcher) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFileSystemWatcher_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSystemWatcher_eventFilter
func miqt_exec_callback_QFileSystemWatcher_eventFilter(self *C.QFileSystemWatcher, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QFileSystemWatcher{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFileSystemWatcher) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFileSystemWatcher_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSystemWatcher) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFileSystemWatcher_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSystemWatcher_timerEvent
func miqt_exec_callback_QFileSystemWatcher_timerEvent(self *C.QFileSystemWatcher, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFileSystemWatcher{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFileSystemWatcher) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QFileSystemWatcher_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSystemWatcher) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QFileSystemWatcher_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSystemWatcher_childEvent
func miqt_exec_callback_QFileSystemWatcher_childEvent(self *C.QFileSystemWatcher, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QFileSystemWatcher{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFileSystemWatcher) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFileSystemWatcher_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFileSystemWatcher) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFileSystemWatcher_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSystemWatcher_customEvent
func miqt_exec_callback_QFileSystemWatcher_customEvent(self *C.QFileSystemWatcher, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFileSystemWatcher{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFileSystemWatcher) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFileSystemWatcher_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileSystemWatcher) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileSystemWatcher_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSystemWatcher_connectNotify
func miqt_exec_callback_QFileSystemWatcher_connectNotify(self *C.QFileSystemWatcher, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFileSystemWatcher{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFileSystemWatcher) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFileSystemWatcher_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFileSystemWatcher) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFileSystemWatcher_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileSystemWatcher_disconnectNotify
func miqt_exec_callback_QFileSystemWatcher_disconnectNotify(self *C.QFileSystemWatcher, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFileSystemWatcher{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QFileSystemWatcher) OnFileChanged(slot func(path string)) {
	C.QFileSystemWatcher_connect_fileChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSystemWatcher_fileChanged
func miqt_exec_callback_QFileSystemWatcher_fileChanged(cb C.intptr_t, path C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(path string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var path_ms C.struct_miqt_string = path
	path_ret := C.GoStringN(path_ms.data, C.int(int64(path_ms.len)))
	C.free(unsafe.Pointer(path_ms.data))
	slotval1 := path_ret

	gofunc(slotval1)
}

func (this *QFileSystemWatcher) OnDirectoryChanged(slot func(path string)) {
	C.QFileSystemWatcher_connect_directoryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QFileSystemWatcher_directoryChanged
func miqt_exec_callback_QFileSystemWatcher_directoryChanged(cb C.intptr_t, path C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(path string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var path_ms C.struct_miqt_string = path
	path_ret := C.GoStringN(path_ms.data, C.int(int64(path_ms.len)))
	C.free(unsafe.Pointer(path_ms.data))
	slotval1 := path_ret

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QFileSystemWatcher) Delete() {
	C.QFileSystemWatcher_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileSystemWatcher) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileSystemWatcher) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

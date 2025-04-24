package pdf

/*

#include "gen_qpdfpagenavigation.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPdfPageNavigation struct {
	h *C.QPdfPageNavigation
	*qt.QObject
}

func (this *QPdfPageNavigation) cPointer() *C.QPdfPageNavigation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPdfPageNavigation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPdfPageNavigation constructs the type using only CGO pointers.
func newQPdfPageNavigation(h *C.QPdfPageNavigation) *QPdfPageNavigation {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPdfPageNavigation_virtbase(h, &outptr_QObject)

	return &QPdfPageNavigation{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQPdfPageNavigation constructs the type using only unsafe pointers.
func UnsafeNewQPdfPageNavigation(h unsafe.Pointer) *QPdfPageNavigation {
	return newQPdfPageNavigation((*C.QPdfPageNavigation)(h))
}

// NewQPdfPageNavigation constructs a new QPdfPageNavigation object.
func NewQPdfPageNavigation() *QPdfPageNavigation {

	return newQPdfPageNavigation(C.QPdfPageNavigation_new())
}

// NewQPdfPageNavigation2 constructs a new QPdfPageNavigation object.
func NewQPdfPageNavigation2(parent *qt.QObject) *QPdfPageNavigation {

	return newQPdfPageNavigation(C.QPdfPageNavigation_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QPdfPageNavigation) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QPdfPageNavigation_metaObject(this.h)))
}

func (this *QPdfPageNavigation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPdfPageNavigation_metacast(this.h, param1_Cstring))
}

func QPdfPageNavigation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageNavigation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigation_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPdfPageNavigation) Document() *QPdfDocument {
	return newQPdfDocument(C.QPdfPageNavigation_document(this.h))
}

func (this *QPdfPageNavigation) SetDocument(document *QPdfDocument) {
	C.QPdfPageNavigation_setDocument(this.h, document.cPointer())
}

func (this *QPdfPageNavigation) CurrentPage() int {
	return (int)(C.QPdfPageNavigation_currentPage(this.h))
}

func (this *QPdfPageNavigation) SetCurrentPage(currentPage int) {
	C.QPdfPageNavigation_setCurrentPage(this.h, (C.int)(currentPage))
}

func (this *QPdfPageNavigation) PageCount() int {
	return (int)(C.QPdfPageNavigation_pageCount(this.h))
}

func (this *QPdfPageNavigation) CanGoToPreviousPage() bool {
	return (bool)(C.QPdfPageNavigation_canGoToPreviousPage(this.h))
}

func (this *QPdfPageNavigation) CanGoToNextPage() bool {
	return (bool)(C.QPdfPageNavigation_canGoToNextPage(this.h))
}

func (this *QPdfPageNavigation) GoToPreviousPage() {
	C.QPdfPageNavigation_goToPreviousPage(this.h)
}

func (this *QPdfPageNavigation) GoToNextPage() {
	C.QPdfPageNavigation_goToNextPage(this.h)
}

func (this *QPdfPageNavigation) DocumentChanged(document *QPdfDocument) {
	C.QPdfPageNavigation_documentChanged(this.h, document.cPointer())
}
func (this *QPdfPageNavigation) OnDocumentChanged(slot func(document *QPdfDocument)) {
	C.QPdfPageNavigation_connect_documentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigation_documentChanged
func miqt_exec_callback_QPdfPageNavigation_documentChanged(cb C.intptr_t, document *C.QPdfDocument) {
	gofunc, ok := cgo.Handle(cb).Value().(func(document *QPdfDocument))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPdfDocument(document)

	gofunc(slotval1)
}

func (this *QPdfPageNavigation) CurrentPageChanged(currentPage int) {
	C.QPdfPageNavigation_currentPageChanged(this.h, (C.int)(currentPage))
}
func (this *QPdfPageNavigation) OnCurrentPageChanged(slot func(currentPage int)) {
	C.QPdfPageNavigation_connect_currentPageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigation_currentPageChanged
func miqt_exec_callback_QPdfPageNavigation_currentPageChanged(cb C.intptr_t, currentPage C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentPage int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentPage)

	gofunc(slotval1)
}

func (this *QPdfPageNavigation) PageCountChanged(pageCount int) {
	C.QPdfPageNavigation_pageCountChanged(this.h, (C.int)(pageCount))
}
func (this *QPdfPageNavigation) OnPageCountChanged(slot func(pageCount int)) {
	C.QPdfPageNavigation_connect_pageCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigation_pageCountChanged
func miqt_exec_callback_QPdfPageNavigation_pageCountChanged(cb C.intptr_t, pageCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pageCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pageCount)

	gofunc(slotval1)
}

func (this *QPdfPageNavigation) CanGoToPreviousPageChanged(canGo bool) {
	C.QPdfPageNavigation_canGoToPreviousPageChanged(this.h, (C.bool)(canGo))
}
func (this *QPdfPageNavigation) OnCanGoToPreviousPageChanged(slot func(canGo bool)) {
	C.QPdfPageNavigation_connect_canGoToPreviousPageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigation_canGoToPreviousPageChanged
func miqt_exec_callback_QPdfPageNavigation_canGoToPreviousPageChanged(cb C.intptr_t, canGo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canGo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canGo)

	gofunc(slotval1)
}

func (this *QPdfPageNavigation) CanGoToNextPageChanged(canGo bool) {
	C.QPdfPageNavigation_canGoToNextPageChanged(this.h, (C.bool)(canGo))
}
func (this *QPdfPageNavigation) OnCanGoToNextPageChanged(slot func(canGo bool)) {
	C.QPdfPageNavigation_connect_canGoToNextPageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPdfPageNavigation_canGoToNextPageChanged
func miqt_exec_callback_QPdfPageNavigation_canGoToNextPageChanged(cb C.intptr_t, canGo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canGo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canGo)

	gofunc(slotval1)
}

func QPdfPageNavigation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageNavigation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageNavigation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigation_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPdfPageNavigation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPdfPageNavigation_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QPdfPageNavigation that was directly constructed.
func (this *QPdfPageNavigation) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QPdfPageNavigation_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPdfPageNavigation that was directly constructed.
func (this *QPdfPageNavigation) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfPageNavigation_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPdfPageNavigation that was directly constructed.
func (this *QPdfPageNavigation) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPdfPageNavigation_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPdfPageNavigation that was directly constructed.
func (this *QPdfPageNavigation) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPdfPageNavigation_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPdfPageNavigation) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QPdfPageNavigation_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfPageNavigation) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QPdfPageNavigation_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigation_event
func miqt_exec_callback_QPdfPageNavigation_event(self *C.QPdfPageNavigation, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfPageNavigation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPdfPageNavigation) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QPdfPageNavigation_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPdfPageNavigation) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QPdfPageNavigation_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigation_eventFilter
func miqt_exec_callback_QPdfPageNavigation_eventFilter(self *C.QPdfPageNavigation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPdfPageNavigation{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPdfPageNavigation) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QPdfPageNavigation_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPdfPageNavigation) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QPdfPageNavigation_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigation_timerEvent
func miqt_exec_callback_QPdfPageNavigation_timerEvent(self *C.QPdfPageNavigation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageNavigation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPdfPageNavigation) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QPdfPageNavigation_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPdfPageNavigation) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QPdfPageNavigation_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigation_childEvent
func miqt_exec_callback_QPdfPageNavigation_childEvent(self *C.QPdfPageNavigation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageNavigation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPdfPageNavigation) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QPdfPageNavigation_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPdfPageNavigation) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QPdfPageNavigation_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigation_customEvent
func miqt_exec_callback_QPdfPageNavigation_customEvent(self *C.QPdfPageNavigation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPdfPageNavigation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPdfPageNavigation) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QPdfPageNavigation_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfPageNavigation) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QPdfPageNavigation_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigation_connectNotify
func miqt_exec_callback_QPdfPageNavigation_connectNotify(self *C.QPdfPageNavigation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfPageNavigation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPdfPageNavigation) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QPdfPageNavigation_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPdfPageNavigation) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QPdfPageNavigation_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPdfPageNavigation_disconnectNotify
func miqt_exec_callback_QPdfPageNavigation_disconnectNotify(self *C.QPdfPageNavigation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPdfPageNavigation{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPdfPageNavigation) Delete() {
	C.QPdfPageNavigation_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPdfPageNavigation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPdfPageNavigation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

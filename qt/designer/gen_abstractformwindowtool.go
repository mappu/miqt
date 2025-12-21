package designer

/*

#include "gen_abstractformwindowtool.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerFormWindowToolInterface struct {
	h *C.QDesignerFormWindowToolInterface
	*qt.QObject
}

func (this *QDesignerFormWindowToolInterface) cPointer() *C.QDesignerFormWindowToolInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerFormWindowToolInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerFormWindowToolInterface constructs the type using only CGO pointers.
func newQDesignerFormWindowToolInterface(h *C.QDesignerFormWindowToolInterface) *QDesignerFormWindowToolInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDesignerFormWindowToolInterface_virtbase(h, &outptr_QObject)

	return &QDesignerFormWindowToolInterface{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDesignerFormWindowToolInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerFormWindowToolInterface(h unsafe.Pointer) *QDesignerFormWindowToolInterface {
	return newQDesignerFormWindowToolInterface((*C.QDesignerFormWindowToolInterface)(h))
}

// NewQDesignerFormWindowToolInterface constructs a new QDesignerFormWindowToolInterface object.
func NewQDesignerFormWindowToolInterface() *QDesignerFormWindowToolInterface {

	return newQDesignerFormWindowToolInterface(C.QDesignerFormWindowToolInterface_new())
}

// NewQDesignerFormWindowToolInterface2 constructs a new QDesignerFormWindowToolInterface object.
func NewQDesignerFormWindowToolInterface2(parent *qt.QObject) *QDesignerFormWindowToolInterface {

	return newQDesignerFormWindowToolInterface(C.QDesignerFormWindowToolInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerFormWindowToolInterface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerFormWindowToolInterface_metaObject(this.h)))
}

func (this *QDesignerFormWindowToolInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerFormWindowToolInterface_metacast(this.h, param1_Cstring))
}

func QDesignerFormWindowToolInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowToolInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowToolInterface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowToolInterface_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowToolInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerFormWindowToolInterface_core(this.h))
}

func (this *QDesignerFormWindowToolInterface) FormWindow() *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowToolInterface_formWindow(this.h))
}

func (this *QDesignerFormWindowToolInterface) Editor() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowToolInterface_editor(this.h)))
}

func (this *QDesignerFormWindowToolInterface) Action() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowToolInterface_action(this.h)))
}

func (this *QDesignerFormWindowToolInterface) Activated() {
	C.QDesignerFormWindowToolInterface_activated(this.h)
}

func (this *QDesignerFormWindowToolInterface) Deactivated() {
	C.QDesignerFormWindowToolInterface_deactivated(this.h)
}

func (this *QDesignerFormWindowToolInterface) HandleEvent(widget *qt.QWidget, managedWidget *qt.QWidget, event *qt.QEvent) bool {
	return (bool)(C.QDesignerFormWindowToolInterface_handleEvent(this.h, (*C.QWidget)(widget.UnsafePointer()), (*C.QWidget)(managedWidget.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))
}

func QDesignerFormWindowToolInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowToolInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowToolInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowToolInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowToolInterface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowToolInterface_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowToolInterface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowToolInterface_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDesignerFormWindowToolInterface that was directly constructed.
func (this *QDesignerFormWindowToolInterface) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QDesignerFormWindowToolInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerFormWindowToolInterface that was directly constructed.
func (this *QDesignerFormWindowToolInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerFormWindowToolInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerFormWindowToolInterface that was directly constructed.
func (this *QDesignerFormWindowToolInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerFormWindowToolInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerFormWindowToolInterface that was directly constructed.
func (this *QDesignerFormWindowToolInterface) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerFormWindowToolInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QDesignerFormWindowToolInterface) OnCore(slot func() *QDesignerFormEditorInterface) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_core
func miqt_exec_callback_QDesignerFormWindowToolInterface_core(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QDesignerFormWindowToolInterface) OnFormWindow(slot func() *QDesignerFormWindowInterface) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_formWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_formWindow
func miqt_exec_callback_QDesignerFormWindowToolInterface_formWindow(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t) *C.QDesignerFormWindowInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormWindowInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QDesignerFormWindowToolInterface) OnEditor(slot func() *qt.QWidget) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_editor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_editor
func miqt_exec_callback_QDesignerFormWindowToolInterface_editor(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowToolInterface) OnAction(slot func() *qt.QAction) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_action(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_action
func miqt_exec_callback_QDesignerFormWindowToolInterface_action(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t) *C.QAction {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QAction)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowToolInterface) OnActivated(slot func()) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_activated(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_activated
func miqt_exec_callback_QDesignerFormWindowToolInterface_activated(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerFormWindowToolInterface) OnDeactivated(slot func()) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_deactivated(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_deactivated
func miqt_exec_callback_QDesignerFormWindowToolInterface_deactivated(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerFormWindowToolInterface) OnHandleEvent(slot func(widget *qt.QWidget, managedWidget *qt.QWidget, event *qt.QEvent) bool) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_handleEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_handleEvent
func miqt_exec_callback_QDesignerFormWindowToolInterface_handleEvent(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, widget *C.QWidget, managedWidget *C.QWidget, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt.QWidget, managedWidget *qt.QWidget, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	slotval2 := qt.UnsafeNewQWidget(unsafe.Pointer(managedWidget))

	slotval3 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerFormWindowToolInterface) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QDesignerFormWindowToolInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerFormWindowToolInterface) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_event
func miqt_exec_callback_QDesignerFormWindowToolInterface_event(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerFormWindowToolInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerFormWindowToolInterface) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QDesignerFormWindowToolInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerFormWindowToolInterface) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_eventFilter
func miqt_exec_callback_QDesignerFormWindowToolInterface_eventFilter(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerFormWindowToolInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerFormWindowToolInterface) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QDesignerFormWindowToolInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormWindowToolInterface) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_timerEvent
func miqt_exec_callback_QDesignerFormWindowToolInterface_timerEvent(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormWindowToolInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerFormWindowToolInterface) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QDesignerFormWindowToolInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormWindowToolInterface) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_childEvent
func miqt_exec_callback_QDesignerFormWindowToolInterface_childEvent(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormWindowToolInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerFormWindowToolInterface) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QDesignerFormWindowToolInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormWindowToolInterface) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_customEvent
func miqt_exec_callback_QDesignerFormWindowToolInterface_customEvent(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormWindowToolInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerFormWindowToolInterface) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerFormWindowToolInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerFormWindowToolInterface) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_connectNotify
func miqt_exec_callback_QDesignerFormWindowToolInterface_connectNotify(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerFormWindowToolInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerFormWindowToolInterface) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerFormWindowToolInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerFormWindowToolInterface) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerFormWindowToolInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowToolInterface_disconnectNotify
func miqt_exec_callback_QDesignerFormWindowToolInterface_disconnectNotify(self *C.QDesignerFormWindowToolInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerFormWindowToolInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerFormWindowToolInterface) Delete() {
	C.QDesignerFormWindowToolInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerFormWindowToolInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerFormWindowToolInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

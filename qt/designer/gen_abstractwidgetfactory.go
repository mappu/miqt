package designer

/*

#include "gen_abstractwidgetfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerWidgetFactoryInterface struct {
	h *C.QDesignerWidgetFactoryInterface
	*qt.QObject
}

func (this *QDesignerWidgetFactoryInterface) cPointer() *C.QDesignerWidgetFactoryInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerWidgetFactoryInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerWidgetFactoryInterface constructs the type using only CGO pointers.
func newQDesignerWidgetFactoryInterface(h *C.QDesignerWidgetFactoryInterface) *QDesignerWidgetFactoryInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDesignerWidgetFactoryInterface_virtbase(h, &outptr_QObject)

	return &QDesignerWidgetFactoryInterface{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDesignerWidgetFactoryInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerWidgetFactoryInterface(h unsafe.Pointer) *QDesignerWidgetFactoryInterface {
	return newQDesignerWidgetFactoryInterface((*C.QDesignerWidgetFactoryInterface)(h))
}

// NewQDesignerWidgetFactoryInterface constructs a new QDesignerWidgetFactoryInterface object.
func NewQDesignerWidgetFactoryInterface() *QDesignerWidgetFactoryInterface {

	return newQDesignerWidgetFactoryInterface(C.QDesignerWidgetFactoryInterface_new())
}

// NewQDesignerWidgetFactoryInterface2 constructs a new QDesignerWidgetFactoryInterface object.
func NewQDesignerWidgetFactoryInterface2(parent *qt.QObject) *QDesignerWidgetFactoryInterface {

	return newQDesignerWidgetFactoryInterface(C.QDesignerWidgetFactoryInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerWidgetFactoryInterface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerWidgetFactoryInterface_metaObject(this.h)))
}

func (this *QDesignerWidgetFactoryInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerWidgetFactoryInterface_metacast(this.h, param1_Cstring))
}

func QDesignerWidgetFactoryInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetFactoryInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetFactoryInterface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetFactoryInterface_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetFactoryInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerWidgetFactoryInterface_core(this.h))
}

func (this *QDesignerWidgetFactoryInterface) ContainerOfWidget(w *qt.QWidget) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerWidgetFactoryInterface_containerOfWidget(this.h, (*C.QWidget)(w.UnsafePointer()))))
}

func (this *QDesignerWidgetFactoryInterface) WidgetOfContainer(w *qt.QWidget) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerWidgetFactoryInterface_widgetOfContainer(this.h, (*C.QWidget)(w.UnsafePointer()))))
}

func (this *QDesignerWidgetFactoryInterface) CreateWidget(name string, parentWidget *qt.QWidget) *qt.QWidget {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerWidgetFactoryInterface_createWidget(this.h, name_ms, (*C.QWidget)(parentWidget.UnsafePointer()))))
}

func (this *QDesignerWidgetFactoryInterface) CreateLayout(widget *qt.QWidget, layout *qt.QLayout, typeVal int) *qt.QLayout {
	return qt.UnsafeNewQLayout(unsafe.Pointer(C.QDesignerWidgetFactoryInterface_createLayout(this.h, (*C.QWidget)(widget.UnsafePointer()), (*C.QLayout)(layout.UnsafePointer()), (C.int)(typeVal))))
}

func (this *QDesignerWidgetFactoryInterface) IsPassiveInteractor(widget *qt.QWidget) bool {
	return (bool)(C.QDesignerWidgetFactoryInterface_isPassiveInteractor(this.h, (*C.QWidget)(widget.UnsafePointer())))
}

func (this *QDesignerWidgetFactoryInterface) Initialize(object *qt.QObject) {
	C.QDesignerWidgetFactoryInterface_initialize(this.h, (*C.QObject)(object.UnsafePointer()))
}

func QDesignerWidgetFactoryInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetFactoryInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetFactoryInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetFactoryInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetFactoryInterface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetFactoryInterface_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetFactoryInterface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetFactoryInterface_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDesignerWidgetFactoryInterface that was directly constructed.
func (this *QDesignerWidgetFactoryInterface) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QDesignerWidgetFactoryInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerWidgetFactoryInterface that was directly constructed.
func (this *QDesignerWidgetFactoryInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerWidgetFactoryInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerWidgetFactoryInterface that was directly constructed.
func (this *QDesignerWidgetFactoryInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerWidgetFactoryInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerWidgetFactoryInterface that was directly constructed.
func (this *QDesignerWidgetFactoryInterface) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerWidgetFactoryInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QDesignerWidgetFactoryInterface) OnCore(slot func() *QDesignerFormEditorInterface) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_core
func miqt_exec_callback_QDesignerWidgetFactoryInterface_core(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QDesignerWidgetFactoryInterface) OnContainerOfWidget(slot func(w *qt.QWidget) *qt.QWidget) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_containerOfWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_containerOfWidget
func miqt_exec_callback_QDesignerWidgetFactoryInterface_containerOfWidget(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, w *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(w *qt.QWidget) *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(w))

	virtualReturn := gofunc(slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerWidgetFactoryInterface) OnWidgetOfContainer(slot func(w *qt.QWidget) *qt.QWidget) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_widgetOfContainer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_widgetOfContainer
func miqt_exec_callback_QDesignerWidgetFactoryInterface_widgetOfContainer(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, w *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(w *qt.QWidget) *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(w))

	virtualReturn := gofunc(slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerWidgetFactoryInterface) OnCreateWidget(slot func(name string, parentWidget *qt.QWidget) *qt.QWidget) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_createWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_createWidget
func miqt_exec_callback_QDesignerWidgetFactoryInterface_createWidget(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, name C.struct_miqt_string, parentWidget *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, parentWidget *qt.QWidget) *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt.UnsafeNewQWidget(unsafe.Pointer(parentWidget))

	virtualReturn := gofunc(slotval1, slotval2)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerWidgetFactoryInterface) OnCreateLayout(slot func(widget *qt.QWidget, layout *qt.QLayout, typeVal int) *qt.QLayout) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_createLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_createLayout
func miqt_exec_callback_QDesignerWidgetFactoryInterface_createLayout(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, widget *C.QWidget, layout *C.QLayout, typeVal C.int) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt.QWidget, layout *qt.QLayout, typeVal int) *qt.QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	slotval2 := qt.UnsafeNewQLayout(unsafe.Pointer(layout))

	slotval3 := (int)(typeVal)

	virtualReturn := gofunc(slotval1, slotval2, slotval3)

	return (*C.QLayout)(virtualReturn.UnsafePointer())

}
func (this *QDesignerWidgetFactoryInterface) OnIsPassiveInteractor(slot func(widget *qt.QWidget) bool) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_isPassiveInteractor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_isPassiveInteractor
func miqt_exec_callback_QDesignerWidgetFactoryInterface_isPassiveInteractor(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, widget *C.QWidget) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt.QWidget) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerWidgetFactoryInterface) OnInitialize(slot func(object *qt.QObject)) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_initialize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_initialize
func miqt_exec_callback_QDesignerWidgetFactoryInterface_initialize(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, object *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *qt.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(object))

	gofunc(slotval1)

}

func (this *QDesignerWidgetFactoryInterface) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QDesignerWidgetFactoryInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetFactoryInterface) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_event
func miqt_exec_callback_QDesignerWidgetFactoryInterface_event(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetFactoryInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetFactoryInterface) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QDesignerWidgetFactoryInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetFactoryInterface) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_eventFilter
func miqt_exec_callback_QDesignerWidgetFactoryInterface_eventFilter(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetFactoryInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetFactoryInterface) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QDesignerWidgetFactoryInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetFactoryInterface) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_timerEvent
func miqt_exec_callback_QDesignerWidgetFactoryInterface_timerEvent(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetFactoryInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerWidgetFactoryInterface) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QDesignerWidgetFactoryInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetFactoryInterface) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_childEvent
func miqt_exec_callback_QDesignerWidgetFactoryInterface_childEvent(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetFactoryInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerWidgetFactoryInterface) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QDesignerWidgetFactoryInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetFactoryInterface) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_customEvent
func miqt_exec_callback_QDesignerWidgetFactoryInterface_customEvent(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetFactoryInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerWidgetFactoryInterface) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerWidgetFactoryInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetFactoryInterface) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_connectNotify
func miqt_exec_callback_QDesignerWidgetFactoryInterface_connectNotify(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerWidgetFactoryInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerWidgetFactoryInterface) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerWidgetFactoryInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetFactoryInterface) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerWidgetFactoryInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetFactoryInterface_disconnectNotify
func miqt_exec_callback_QDesignerWidgetFactoryInterface_disconnectNotify(self *C.QDesignerWidgetFactoryInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerWidgetFactoryInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerWidgetFactoryInterface) Delete() {
	C.QDesignerWidgetFactoryInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerWidgetFactoryInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerWidgetFactoryInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

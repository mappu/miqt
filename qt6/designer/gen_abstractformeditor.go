package designer

/*

#include "gen_abstractformeditor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerFormEditorInterface struct {
	h *C.QDesignerFormEditorInterface
	*qt6.QObject
}

func (this *QDesignerFormEditorInterface) cPointer() *C.QDesignerFormEditorInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerFormEditorInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerFormEditorInterface constructs the type using only CGO pointers.
func newQDesignerFormEditorInterface(h *C.QDesignerFormEditorInterface) *QDesignerFormEditorInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDesignerFormEditorInterface_virtbase(h, &outptr_QObject)

	return &QDesignerFormEditorInterface{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDesignerFormEditorInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerFormEditorInterface(h unsafe.Pointer) *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface((*C.QDesignerFormEditorInterface)(h))
}

// NewQDesignerFormEditorInterface constructs a new QDesignerFormEditorInterface object.
func NewQDesignerFormEditorInterface() *QDesignerFormEditorInterface {

	return newQDesignerFormEditorInterface(C.QDesignerFormEditorInterface_new())
}

// NewQDesignerFormEditorInterface2 constructs a new QDesignerFormEditorInterface object.
func NewQDesignerFormEditorInterface2(parent *qt6.QObject) *QDesignerFormEditorInterface {

	return newQDesignerFormEditorInterface(C.QDesignerFormEditorInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerFormEditorInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerFormEditorInterface_metaObject(this.h)))
}

func (this *QDesignerFormEditorInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerFormEditorInterface_metacast(this.h, param1_Cstring))
}

func QDesignerFormEditorInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormEditorInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormEditorInterface) ExtensionManager() *QExtensionManager {
	return newQExtensionManager(C.QDesignerFormEditorInterface_extensionManager(this.h))
}

func (this *QDesignerFormEditorInterface) TopLevel() *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormEditorInterface_topLevel(this.h)))
}

func (this *QDesignerFormEditorInterface) WidgetBox() *QDesignerWidgetBoxInterface {
	return newQDesignerWidgetBoxInterface(C.QDesignerFormEditorInterface_widgetBox(this.h))
}

func (this *QDesignerFormEditorInterface) PropertyEditor() *QDesignerPropertyEditorInterface {
	return newQDesignerPropertyEditorInterface(C.QDesignerFormEditorInterface_propertyEditor(this.h))
}

func (this *QDesignerFormEditorInterface) ObjectInspector() *QDesignerObjectInspectorInterface {
	return newQDesignerObjectInspectorInterface(C.QDesignerFormEditorInterface_objectInspector(this.h))
}

func (this *QDesignerFormEditorInterface) FormWindowManager() *QDesignerFormWindowManagerInterface {
	return newQDesignerFormWindowManagerInterface(C.QDesignerFormEditorInterface_formWindowManager(this.h))
}

func (this *QDesignerFormEditorInterface) WidgetDataBase() *QDesignerWidgetDataBaseInterface {
	return newQDesignerWidgetDataBaseInterface(C.QDesignerFormEditorInterface_widgetDataBase(this.h))
}

func (this *QDesignerFormEditorInterface) MetaDataBase() *QDesignerMetaDataBaseInterface {
	return newQDesignerMetaDataBaseInterface(C.QDesignerFormEditorInterface_metaDataBase(this.h))
}

func (this *QDesignerFormEditorInterface) Promotion() *QDesignerPromotionInterface {
	return newQDesignerPromotionInterface(C.QDesignerFormEditorInterface_promotion(this.h))
}

func (this *QDesignerFormEditorInterface) WidgetFactory() *QDesignerWidgetFactoryInterface {
	return newQDesignerWidgetFactoryInterface(C.QDesignerFormEditorInterface_widgetFactory(this.h))
}

func (this *QDesignerFormEditorInterface) ActionEditor() *QDesignerActionEditorInterface {
	return newQDesignerActionEditorInterface(C.QDesignerFormEditorInterface_actionEditor(this.h))
}

func (this *QDesignerFormEditorInterface) Integration() *QDesignerIntegrationInterface {
	return newQDesignerIntegrationInterface(C.QDesignerFormEditorInterface_integration(this.h))
}

func (this *QDesignerFormEditorInterface) SettingsManager() *QDesignerSettingsInterface {
	return newQDesignerSettingsInterface(C.QDesignerFormEditorInterface_settingsManager(this.h))
}

func (this *QDesignerFormEditorInterface) ResourceLocation() string {
	var _ms C.struct_miqt_string = C.QDesignerFormEditorInterface_resourceLocation(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormEditorInterface) OptionsPages() []*QDesignerOptionsPageInterface {
	var _ma C.struct_miqt_array = C.QDesignerFormEditorInterface_optionsPages(this.h)
	_ret := make([]*QDesignerOptionsPageInterface, int(_ma.len))
	_outCast := (*[0xffff]*C.QDesignerOptionsPageInterface)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQDesignerOptionsPageInterface(_outCast[i])
	}
	return _ret
}

func (this *QDesignerFormEditorInterface) SetTopLevel(topLevel *qt6.QWidget) {
	C.QDesignerFormEditorInterface_setTopLevel(this.h, (*C.QWidget)(topLevel.UnsafePointer()))
}

func (this *QDesignerFormEditorInterface) SetWidgetBox(widgetBox *QDesignerWidgetBoxInterface) {
	C.QDesignerFormEditorInterface_setWidgetBox(this.h, widgetBox.cPointer())
}

func (this *QDesignerFormEditorInterface) SetPropertyEditor(propertyEditor *QDesignerPropertyEditorInterface) {
	C.QDesignerFormEditorInterface_setPropertyEditor(this.h, propertyEditor.cPointer())
}

func (this *QDesignerFormEditorInterface) SetObjectInspector(objectInspector *QDesignerObjectInspectorInterface) {
	C.QDesignerFormEditorInterface_setObjectInspector(this.h, objectInspector.cPointer())
}

func (this *QDesignerFormEditorInterface) SetActionEditor(actionEditor *QDesignerActionEditorInterface) {
	C.QDesignerFormEditorInterface_setActionEditor(this.h, actionEditor.cPointer())
}

func (this *QDesignerFormEditorInterface) SetIntegration(integration *QDesignerIntegrationInterface) {
	C.QDesignerFormEditorInterface_setIntegration(this.h, integration.cPointer())
}

func (this *QDesignerFormEditorInterface) SetSettingsManager(settingsManager *QDesignerSettingsInterface) {
	C.QDesignerFormEditorInterface_setSettingsManager(this.h, settingsManager.cPointer())
}

func (this *QDesignerFormEditorInterface) SetOptionsPages(optionsPages []*QDesignerOptionsPageInterface) {
	optionsPages_CArray := (*[0xffff]*C.QDesignerOptionsPageInterface)(C.malloc(C.size_t(8 * len(optionsPages))))
	defer C.free(unsafe.Pointer(optionsPages_CArray))
	for i := range optionsPages {
		optionsPages_CArray[i] = optionsPages[i].cPointer()
	}
	optionsPages_ma := C.struct_miqt_array{len: C.size_t(len(optionsPages)), data: unsafe.Pointer(optionsPages_CArray)}
	C.QDesignerFormEditorInterface_setOptionsPages(this.h, optionsPages_ma)
}

func (this *QDesignerFormEditorInterface) PluginInstances() []*qt6.QObject {
	var _ma C.struct_miqt_array = C.QDesignerFormEditorInterface_pluginInstances(this.h)
	_ret := make([]*qt6.QObject, int(_ma.len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQObject(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func QDesignerFormEditorInterface_CreateIcon(name string) *qt6.QIcon {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt6.UnsafeNewQIcon(unsafe.Pointer(C.QDesignerFormEditorInterface_createIcon(name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QDesignerFormEditorInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormEditorInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormEditorInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormEditorInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetFormManager can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) SetFormManager(formWindowManager *QDesignerFormWindowManagerInterface) {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerFormEditorInterface_protectedbase_setFormManager(&_dynamic_cast_ok, unsafe.Pointer(this.h), formWindowManager.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetMetaDataBase can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) SetMetaDataBase(metaDataBase *QDesignerMetaDataBaseInterface) {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerFormEditorInterface_protectedbase_setMetaDataBase(&_dynamic_cast_ok, unsafe.Pointer(this.h), metaDataBase.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetWidgetDataBase can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) SetWidgetDataBase(widgetDataBase *QDesignerWidgetDataBaseInterface) {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerFormEditorInterface_protectedbase_setWidgetDataBase(&_dynamic_cast_ok, unsafe.Pointer(this.h), widgetDataBase.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetPromotion can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) SetPromotion(promotion *QDesignerPromotionInterface) {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerFormEditorInterface_protectedbase_setPromotion(&_dynamic_cast_ok, unsafe.Pointer(this.h), promotion.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetWidgetFactory can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) SetWidgetFactory(widgetFactory *QDesignerWidgetFactoryInterface) {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerFormEditorInterface_protectedbase_setWidgetFactory(&_dynamic_cast_ok, unsafe.Pointer(this.h), widgetFactory.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetExtensionManager can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) SetExtensionManager(extensionManager *QExtensionManager) {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerFormEditorInterface_protectedbase_setExtensionManager(&_dynamic_cast_ok, unsafe.Pointer(this.h), extensionManager.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerFormEditorInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerFormEditorInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerFormEditorInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerFormEditorInterface that was directly constructed.
func (this *QDesignerFormEditorInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerFormEditorInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDesignerFormEditorInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerFormEditorInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerFormEditorInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerFormEditorInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorInterface_event
func miqt_exec_callback_QDesignerFormEditorInterface_event(self *C.QDesignerFormEditorInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerFormEditorInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerFormEditorInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerFormEditorInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerFormEditorInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerFormEditorInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorInterface_eventFilter
func miqt_exec_callback_QDesignerFormEditorInterface_eventFilter(self *C.QDesignerFormEditorInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerFormEditorInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerFormEditorInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerFormEditorInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormEditorInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerFormEditorInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorInterface_timerEvent
func miqt_exec_callback_QDesignerFormEditorInterface_timerEvent(self *C.QDesignerFormEditorInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormEditorInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerFormEditorInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerFormEditorInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormEditorInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerFormEditorInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorInterface_childEvent
func miqt_exec_callback_QDesignerFormEditorInterface_childEvent(self *C.QDesignerFormEditorInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormEditorInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerFormEditorInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerFormEditorInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormEditorInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerFormEditorInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorInterface_customEvent
func miqt_exec_callback_QDesignerFormEditorInterface_customEvent(self *C.QDesignerFormEditorInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormEditorInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerFormEditorInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerFormEditorInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerFormEditorInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerFormEditorInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorInterface_connectNotify
func miqt_exec_callback_QDesignerFormEditorInterface_connectNotify(self *C.QDesignerFormEditorInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerFormEditorInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerFormEditorInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerFormEditorInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerFormEditorInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerFormEditorInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormEditorInterface_disconnectNotify
func miqt_exec_callback_QDesignerFormEditorInterface_disconnectNotify(self *C.QDesignerFormEditorInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerFormEditorInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerFormEditorInterface) Delete() {
	C.QDesignerFormEditorInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerFormEditorInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerFormEditorInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package webkit

/*

#include "gen_qwebpluginfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebPluginFactory struct {
	h *C.QWebPluginFactory
	*qt.QObject
}

func (this *QWebPluginFactory) cPointer() *C.QWebPluginFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPluginFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPluginFactory constructs the type using only CGO pointers.
func newQWebPluginFactory(h *C.QWebPluginFactory) *QWebPluginFactory {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebPluginFactory_virtbase(h, &outptr_QObject)

	return &QWebPluginFactory{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebPluginFactory constructs the type using only unsafe pointers.
func UnsafeNewQWebPluginFactory(h unsafe.Pointer) *QWebPluginFactory {
	return newQWebPluginFactory((*C.QWebPluginFactory)(h))
}

// NewQWebPluginFactory constructs a new QWebPluginFactory object.
func NewQWebPluginFactory() *QWebPluginFactory {

	return newQWebPluginFactory(C.QWebPluginFactory_new())
}

// NewQWebPluginFactory2 constructs a new QWebPluginFactory object.
func NewQWebPluginFactory2(parent *qt.QObject) *QWebPluginFactory {

	return newQWebPluginFactory(C.QWebPluginFactory_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebPluginFactory) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebPluginFactory_metaObject(this.h)))
}

func (this *QWebPluginFactory) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebPluginFactory_metacast(this.h, param1_Cstring))
}

func QWebPluginFactory_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebPluginFactory_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPluginFactory_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebPluginFactory_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebPluginFactory) Plugins() []QWebPluginFactory__Plugin {
	var _ma C.struct_miqt_array = C.QWebPluginFactory_plugins(this.h)
	_ret := make([]QWebPluginFactory__Plugin, int(_ma.len))
	_outCast := (*[0xffff]*C.QWebPluginFactory__Plugin)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQWebPluginFactory__Plugin(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QWebPluginFactory) RefreshPlugins() {
	C.QWebPluginFactory_refreshPlugins(this.h)
}

func (this *QWebPluginFactory) Create(mimeType string, param2 *qt.QUrl, argumentNames []string, argumentValues []string) *qt.QObject {
	mimeType_ms := C.struct_miqt_string{}
	mimeType_ms.data = C.CString(mimeType)
	mimeType_ms.len = C.size_t(len(mimeType))
	defer C.free(unsafe.Pointer(mimeType_ms.data))
	argumentNames_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(argumentNames))))
	defer C.free(unsafe.Pointer(argumentNames_CArray))
	for i := range argumentNames {
		argumentNames_i_ms := C.struct_miqt_string{}
		argumentNames_i_ms.data = C.CString(argumentNames[i])
		argumentNames_i_ms.len = C.size_t(len(argumentNames[i]))
		defer C.free(unsafe.Pointer(argumentNames_i_ms.data))
		argumentNames_CArray[i] = argumentNames_i_ms
	}
	argumentNames_ma := C.struct_miqt_array{len: C.size_t(len(argumentNames)), data: unsafe.Pointer(argumentNames_CArray)}
	argumentValues_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(argumentValues))))
	defer C.free(unsafe.Pointer(argumentValues_CArray))
	for i := range argumentValues {
		argumentValues_i_ms := C.struct_miqt_string{}
		argumentValues_i_ms.data = C.CString(argumentValues[i])
		argumentValues_i_ms.len = C.size_t(len(argumentValues[i]))
		defer C.free(unsafe.Pointer(argumentValues_i_ms.data))
		argumentValues_CArray[i] = argumentValues_i_ms
	}
	argumentValues_ma := C.struct_miqt_array{len: C.size_t(len(argumentValues)), data: unsafe.Pointer(argumentValues_CArray)}
	return qt.UnsafeNewQObject(unsafe.Pointer(C.QWebPluginFactory_create(this.h, mimeType_ms, (*C.QUrl)(param2.UnsafePointer()), argumentNames_ma, argumentValues_ma)))
}

func (this *QWebPluginFactory) Extension(extension QWebPluginFactory__Extension, option *QWebPluginFactory__ExtensionOption, output *QWebPluginFactory__ExtensionReturn) bool {
	return (bool)(C.QWebPluginFactory_extension(this.h, (C.int)(extension), option.cPointer(), output.cPointer()))
}

func (this *QWebPluginFactory) SupportsExtension(extension QWebPluginFactory__Extension) bool {
	return (bool)(C.QWebPluginFactory_supportsExtension(this.h, (C.int)(extension)))
}

func QWebPluginFactory_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPluginFactory_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPluginFactory_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPluginFactory_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPluginFactory_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPluginFactory_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebPluginFactory_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebPluginFactory_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QWebPluginFactory that was directly constructed.
func (this *QWebPluginFactory) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QWebPluginFactory_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QWebPluginFactory that was directly constructed.
func (this *QWebPluginFactory) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebPluginFactory_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QWebPluginFactory that was directly constructed.
func (this *QWebPluginFactory) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QWebPluginFactory_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QWebPluginFactory that was directly constructed.
func (this *QWebPluginFactory) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QWebPluginFactory_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QWebPluginFactory) OnPlugins(slot func() []QWebPluginFactory__Plugin) {
	ok := C.QWebPluginFactory_override_virtual_plugins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_plugins
func miqt_exec_callback_QWebPluginFactory_plugins(self *C.QWebPluginFactory, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []QWebPluginFactory__Plugin)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_CArray := (*[0xffff]*C.QWebPluginFactory__Plugin)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QWebPluginFactory) callVirtualBase_RefreshPlugins() {

	C.QWebPluginFactory_virtualbase_refreshPlugins(unsafe.Pointer(this.h))

}
func (this *QWebPluginFactory) OnRefreshPlugins(slot func(super func())) {
	ok := C.QWebPluginFactory_override_virtual_refreshPlugins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_refreshPlugins
func miqt_exec_callback_QWebPluginFactory_refreshPlugins(self *C.QWebPluginFactory, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWebPluginFactory{h: self}).callVirtualBase_RefreshPlugins)

}
func (this *QWebPluginFactory) OnCreate(slot func(mimeType string, param2 *qt.QUrl, argumentNames []string, argumentValues []string) *qt.QObject) {
	ok := C.QWebPluginFactory_override_virtual_create(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_create
func miqt_exec_callback_QWebPluginFactory_create(self *C.QWebPluginFactory, cb C.intptr_t, mimeType C.struct_miqt_string, param2 *C.QUrl, argumentNames C.struct_miqt_array, argumentValues C.struct_miqt_array) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(mimeType string, param2 *qt.QUrl, argumentNames []string, argumentValues []string) *qt.QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var mimeType_ms C.struct_miqt_string = mimeType
	mimeType_ret := C.GoStringN(mimeType_ms.data, C.int(int64(mimeType_ms.len)))
	C.free(unsafe.Pointer(mimeType_ms.data))
	slotval1 := mimeType_ret
	slotval2 := qt.UnsafeNewQUrl(unsafe.Pointer(param2))

	var argumentNames_ma C.struct_miqt_array = argumentNames
	argumentNames_ret := make([]string, int(argumentNames_ma.len))
	argumentNames_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(argumentNames_ma.data)) // hey ya
	for i := 0; i < int(argumentNames_ma.len); i++ {
		var argumentNames_lv_ms C.struct_miqt_string = argumentNames_outCast[i]
		argumentNames_lv_ret := C.GoStringN(argumentNames_lv_ms.data, C.int(int64(argumentNames_lv_ms.len)))
		C.free(unsafe.Pointer(argumentNames_lv_ms.data))
		argumentNames_ret[i] = argumentNames_lv_ret
	}
	slotval3 := argumentNames_ret

	var argumentValues_ma C.struct_miqt_array = argumentValues
	argumentValues_ret := make([]string, int(argumentValues_ma.len))
	argumentValues_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(argumentValues_ma.data)) // hey ya
	for i := 0; i < int(argumentValues_ma.len); i++ {
		var argumentValues_lv_ms C.struct_miqt_string = argumentValues_outCast[i]
		argumentValues_lv_ret := C.GoStringN(argumentValues_lv_ms.data, C.int(int64(argumentValues_lv_ms.len)))
		C.free(unsafe.Pointer(argumentValues_lv_ms.data))
		argumentValues_ret[i] = argumentValues_lv_ret
	}
	slotval4 := argumentValues_ret

	virtualReturn := gofunc(slotval1, slotval2, slotval3, slotval4)

	return (*C.QObject)(virtualReturn.UnsafePointer())

}

func (this *QWebPluginFactory) callVirtualBase_Extension(extension QWebPluginFactory__Extension, option *QWebPluginFactory__ExtensionOption, output *QWebPluginFactory__ExtensionReturn) bool {

	return (bool)(C.QWebPluginFactory_virtualbase_extension(unsafe.Pointer(this.h), (C.int)(extension), option.cPointer(), output.cPointer()))

}
func (this *QWebPluginFactory) OnExtension(slot func(super func(extension QWebPluginFactory__Extension, option *QWebPluginFactory__ExtensionOption, output *QWebPluginFactory__ExtensionReturn) bool, extension QWebPluginFactory__Extension, option *QWebPluginFactory__ExtensionOption, output *QWebPluginFactory__ExtensionReturn) bool) {
	ok := C.QWebPluginFactory_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_extension
func miqt_exec_callback_QWebPluginFactory_extension(self *C.QWebPluginFactory, cb C.intptr_t, extension C.int, option *C.QWebPluginFactory__ExtensionOption, output *C.QWebPluginFactory__ExtensionReturn) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QWebPluginFactory__Extension, option *QWebPluginFactory__ExtensionOption, output *QWebPluginFactory__ExtensionReturn) bool, extension QWebPluginFactory__Extension, option *QWebPluginFactory__ExtensionOption, output *QWebPluginFactory__ExtensionReturn) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPluginFactory__Extension)(extension)

	slotval2 := newQWebPluginFactory__ExtensionOption(option)

	slotval3 := newQWebPluginFactory__ExtensionReturn(output)

	virtualReturn := gofunc((&QWebPluginFactory{h: self}).callVirtualBase_Extension, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebPluginFactory) callVirtualBase_SupportsExtension(extension QWebPluginFactory__Extension) bool {

	return (bool)(C.QWebPluginFactory_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QWebPluginFactory) OnSupportsExtension(slot func(super func(extension QWebPluginFactory__Extension) bool, extension QWebPluginFactory__Extension) bool) {
	ok := C.QWebPluginFactory_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_supportsExtension
func miqt_exec_callback_QWebPluginFactory_supportsExtension(self *C.QWebPluginFactory, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QWebPluginFactory__Extension) bool, extension QWebPluginFactory__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QWebPluginFactory__Extension)(extension)

	virtualReturn := gofunc((&QWebPluginFactory{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebPluginFactory) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QWebPluginFactory_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebPluginFactory) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QWebPluginFactory_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_event
func miqt_exec_callback_QWebPluginFactory_event(self *C.QWebPluginFactory, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebPluginFactory{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebPluginFactory) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebPluginFactory_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebPluginFactory) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QWebPluginFactory_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_eventFilter
func miqt_exec_callback_QWebPluginFactory_eventFilter(self *C.QWebPluginFactory, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebPluginFactory{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebPluginFactory) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebPluginFactory_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebPluginFactory) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QWebPluginFactory_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_timerEvent
func miqt_exec_callback_QWebPluginFactory_timerEvent(self *C.QWebPluginFactory, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebPluginFactory{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebPluginFactory) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebPluginFactory_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebPluginFactory) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QWebPluginFactory_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_childEvent
func miqt_exec_callback_QWebPluginFactory_childEvent(self *C.QWebPluginFactory, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebPluginFactory{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebPluginFactory) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebPluginFactory_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebPluginFactory) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebPluginFactory_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_customEvent
func miqt_exec_callback_QWebPluginFactory_customEvent(self *C.QWebPluginFactory, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebPluginFactory{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebPluginFactory) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebPluginFactory_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebPluginFactory) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebPluginFactory_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_connectNotify
func miqt_exec_callback_QWebPluginFactory_connectNotify(self *C.QWebPluginFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebPluginFactory{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebPluginFactory) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebPluginFactory_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebPluginFactory) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebPluginFactory_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebPluginFactory_disconnectNotify
func miqt_exec_callback_QWebPluginFactory_disconnectNotify(self *C.QWebPluginFactory, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebPluginFactory{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebPluginFactory) Delete() {
	C.QWebPluginFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPluginFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPluginFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPluginFactory__MimeType struct {
	h *C.QWebPluginFactory__MimeType
}

func (this *QWebPluginFactory__MimeType) cPointer() *C.QWebPluginFactory__MimeType {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPluginFactory__MimeType) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPluginFactory__MimeType constructs the type using only CGO pointers.
func newQWebPluginFactory__MimeType(h *C.QWebPluginFactory__MimeType) *QWebPluginFactory__MimeType {
	if h == nil {
		return nil
	}

	return &QWebPluginFactory__MimeType{h: h}
}

// UnsafeNewQWebPluginFactory__MimeType constructs the type using only unsafe pointers.
func UnsafeNewQWebPluginFactory__MimeType(h unsafe.Pointer) *QWebPluginFactory__MimeType {
	return newQWebPluginFactory__MimeType((*C.QWebPluginFactory__MimeType)(h))
}

// NewQWebPluginFactory__MimeType constructs a new QWebPluginFactory::MimeType object.
func NewQWebPluginFactory__MimeType(param1 *QWebPluginFactory__MimeType) *QWebPluginFactory__MimeType {

	return newQWebPluginFactory__MimeType(C.QWebPluginFactory__MimeType_new(param1.cPointer()))
}

func (this *QWebPluginFactory__MimeType) Name() string {
	var name_ms C.struct_miqt_string = C.QWebPluginFactory__MimeType_name(this.h)
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	return name_ret
}

func (this *QWebPluginFactory__MimeType) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebPluginFactory__MimeType_setName(this.h, name_ms)
}

func (this *QWebPluginFactory__MimeType) Description() string {
	var description_ms C.struct_miqt_string = C.QWebPluginFactory__MimeType_description(this.h)
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	return description_ret
}

func (this *QWebPluginFactory__MimeType) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QWebPluginFactory__MimeType_setDescription(this.h, description_ms)
}

func (this *QWebPluginFactory__MimeType) FileExtensions() []string {
	var fileExtensions_ma C.struct_miqt_array = C.QWebPluginFactory__MimeType_fileExtensions(this.h)
	fileExtensions_ret := make([]string, int(fileExtensions_ma.len))
	fileExtensions_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(fileExtensions_ma.data)) // hey ya
	for i := 0; i < int(fileExtensions_ma.len); i++ {
		var fileExtensions_lv_ms C.struct_miqt_string = fileExtensions_outCast[i]
		fileExtensions_lv_ret := C.GoStringN(fileExtensions_lv_ms.data, C.int(int64(fileExtensions_lv_ms.len)))
		C.free(unsafe.Pointer(fileExtensions_lv_ms.data))
		fileExtensions_ret[i] = fileExtensions_lv_ret
	}
	return fileExtensions_ret
}

func (this *QWebPluginFactory__MimeType) SetFileExtensions(fileExtensions []string) {
	fileExtensions_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(fileExtensions))))
	defer C.free(unsafe.Pointer(fileExtensions_CArray))
	for i := range fileExtensions {
		fileExtensions_i_ms := C.struct_miqt_string{}
		fileExtensions_i_ms.data = C.CString(fileExtensions[i])
		fileExtensions_i_ms.len = C.size_t(len(fileExtensions[i]))
		defer C.free(unsafe.Pointer(fileExtensions_i_ms.data))
		fileExtensions_CArray[i] = fileExtensions_i_ms
	}
	fileExtensions_ma := C.struct_miqt_array{len: C.size_t(len(fileExtensions)), data: unsafe.Pointer(fileExtensions_CArray)}
	C.QWebPluginFactory__MimeType_setFileExtensions(this.h, fileExtensions_ma)
}

func (this *QWebPluginFactory__MimeType) OperatorEqual(other *QWebPluginFactory__MimeType) bool {
	return (bool)(C.QWebPluginFactory__MimeType_operatorEqual(this.h, other.cPointer()))
}

func (this *QWebPluginFactory__MimeType) OperatorNotEqual(other *QWebPluginFactory__MimeType) bool {
	return (bool)(C.QWebPluginFactory__MimeType_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QWebPluginFactory__MimeType) OperatorAssign(param1 *QWebPluginFactory__MimeType) {
	C.QWebPluginFactory__MimeType_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebPluginFactory__MimeType) Delete() {
	C.QWebPluginFactory__MimeType_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPluginFactory__MimeType) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPluginFactory__MimeType) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPluginFactory__Plugin struct {
	h *C.QWebPluginFactory__Plugin
}

func (this *QWebPluginFactory__Plugin) cPointer() *C.QWebPluginFactory__Plugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPluginFactory__Plugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPluginFactory__Plugin constructs the type using only CGO pointers.
func newQWebPluginFactory__Plugin(h *C.QWebPluginFactory__Plugin) *QWebPluginFactory__Plugin {
	if h == nil {
		return nil
	}

	return &QWebPluginFactory__Plugin{h: h}
}

// UnsafeNewQWebPluginFactory__Plugin constructs the type using only unsafe pointers.
func UnsafeNewQWebPluginFactory__Plugin(h unsafe.Pointer) *QWebPluginFactory__Plugin {
	return newQWebPluginFactory__Plugin((*C.QWebPluginFactory__Plugin)(h))
}

// NewQWebPluginFactory__Plugin constructs a new QWebPluginFactory::Plugin object.
func NewQWebPluginFactory__Plugin(param1 *QWebPluginFactory__Plugin) *QWebPluginFactory__Plugin {

	return newQWebPluginFactory__Plugin(C.QWebPluginFactory__Plugin_new(param1.cPointer()))
}

func (this *QWebPluginFactory__Plugin) Name() string {
	var name_ms C.struct_miqt_string = C.QWebPluginFactory__Plugin_name(this.h)
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	return name_ret
}

func (this *QWebPluginFactory__Plugin) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QWebPluginFactory__Plugin_setName(this.h, name_ms)
}

func (this *QWebPluginFactory__Plugin) Description() string {
	var description_ms C.struct_miqt_string = C.QWebPluginFactory__Plugin_description(this.h)
	description_ret := C.GoStringN(description_ms.data, C.int(int64(description_ms.len)))
	C.free(unsafe.Pointer(description_ms.data))
	return description_ret
}

func (this *QWebPluginFactory__Plugin) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QWebPluginFactory__Plugin_setDescription(this.h, description_ms)
}

func (this *QWebPluginFactory__Plugin) MimeTypes() []QWebPluginFactory__MimeType {
	var mimeTypes_ma C.struct_miqt_array = C.QWebPluginFactory__Plugin_mimeTypes(this.h)
	mimeTypes_ret := make([]QWebPluginFactory__MimeType, int(mimeTypes_ma.len))
	mimeTypes_outCast := (*[0xffff]*C.QWebPluginFactory__MimeType)(unsafe.Pointer(mimeTypes_ma.data)) // hey ya
	for i := 0; i < int(mimeTypes_ma.len); i++ {
		mimeTypes_lv_goptr := newQWebPluginFactory__MimeType(mimeTypes_outCast[i])
		mimeTypes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		mimeTypes_ret[i] = *mimeTypes_lv_goptr
	}
	return mimeTypes_ret
}

func (this *QWebPluginFactory__Plugin) SetMimeTypes(mimeTypes []QWebPluginFactory__MimeType) {
	mimeTypes_CArray := (*[0xffff]*C.QWebPluginFactory__MimeType)(C.malloc(C.size_t(8 * len(mimeTypes))))
	defer C.free(unsafe.Pointer(mimeTypes_CArray))
	for i := range mimeTypes {
		mimeTypes_CArray[i] = mimeTypes[i].cPointer()
	}
	mimeTypes_ma := C.struct_miqt_array{len: C.size_t(len(mimeTypes)), data: unsafe.Pointer(mimeTypes_CArray)}
	C.QWebPluginFactory__Plugin_setMimeTypes(this.h, mimeTypes_ma)
}

func (this *QWebPluginFactory__Plugin) OperatorAssign(param1 *QWebPluginFactory__Plugin) {
	C.QWebPluginFactory__Plugin_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebPluginFactory__Plugin) Delete() {
	C.QWebPluginFactory__Plugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPluginFactory__Plugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPluginFactory__Plugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPluginFactory__ExtensionOption struct {
	h *C.QWebPluginFactory__ExtensionOption
}

func (this *QWebPluginFactory__ExtensionOption) cPointer() *C.QWebPluginFactory__ExtensionOption {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPluginFactory__ExtensionOption) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPluginFactory__ExtensionOption constructs the type using only CGO pointers.
func newQWebPluginFactory__ExtensionOption(h *C.QWebPluginFactory__ExtensionOption) *QWebPluginFactory__ExtensionOption {
	if h == nil {
		return nil
	}

	return &QWebPluginFactory__ExtensionOption{h: h}
}

// UnsafeNewQWebPluginFactory__ExtensionOption constructs the type using only unsafe pointers.
func UnsafeNewQWebPluginFactory__ExtensionOption(h unsafe.Pointer) *QWebPluginFactory__ExtensionOption {
	return newQWebPluginFactory__ExtensionOption((*C.QWebPluginFactory__ExtensionOption)(h))
}

// Delete this object from C++ memory.
func (this *QWebPluginFactory__ExtensionOption) Delete() {
	C.QWebPluginFactory__ExtensionOption_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPluginFactory__ExtensionOption) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPluginFactory__ExtensionOption) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebPluginFactory__ExtensionReturn struct {
	h *C.QWebPluginFactory__ExtensionReturn
}

func (this *QWebPluginFactory__ExtensionReturn) cPointer() *C.QWebPluginFactory__ExtensionReturn {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebPluginFactory__ExtensionReturn) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebPluginFactory__ExtensionReturn constructs the type using only CGO pointers.
func newQWebPluginFactory__ExtensionReturn(h *C.QWebPluginFactory__ExtensionReturn) *QWebPluginFactory__ExtensionReturn {
	if h == nil {
		return nil
	}

	return &QWebPluginFactory__ExtensionReturn{h: h}
}

// UnsafeNewQWebPluginFactory__ExtensionReturn constructs the type using only unsafe pointers.
func UnsafeNewQWebPluginFactory__ExtensionReturn(h unsafe.Pointer) *QWebPluginFactory__ExtensionReturn {
	return newQWebPluginFactory__ExtensionReturn((*C.QWebPluginFactory__ExtensionReturn)(h))
}

// Delete this object from C++ memory.
func (this *QWebPluginFactory__ExtensionReturn) Delete() {
	C.QWebPluginFactory__ExtensionReturn_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebPluginFactory__ExtensionReturn) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebPluginFactory__ExtensionReturn) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

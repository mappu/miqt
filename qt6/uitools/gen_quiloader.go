package uitools

/*

#include "gen_quiloader.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QUiLoader struct {
	h *C.QUiLoader
	*qt6.QObject
}

func (this *QUiLoader) cPointer() *C.QUiLoader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUiLoader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUiLoader constructs the type using only CGO pointers.
func newQUiLoader(h *C.QUiLoader) *QUiLoader {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QUiLoader_virtbase(h, &outptr_QObject)

	return &QUiLoader{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQUiLoader constructs the type using only unsafe pointers.
func UnsafeNewQUiLoader(h unsafe.Pointer) *QUiLoader {
	return newQUiLoader((*C.QUiLoader)(h))
}

// NewQUiLoader constructs a new QUiLoader object.
func NewQUiLoader() *QUiLoader {

	return newQUiLoader(C.QUiLoader_new())
}

// NewQUiLoader2 constructs a new QUiLoader object.
func NewQUiLoader2(parent *qt6.QObject) *QUiLoader {

	return newQUiLoader(C.QUiLoader_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QUiLoader) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QUiLoader_metaObject(this.h)))
}

func (this *QUiLoader) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUiLoader_metacast(this.h, param1_Cstring))
}

func QUiLoader_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUiLoader_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUiLoader) PluginPaths() []string {
	var _ma C.struct_miqt_array = C.QUiLoader_pluginPaths(this.h)
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

func (this *QUiLoader) ClearPluginPaths() {
	C.QUiLoader_clearPluginPaths(this.h)
}

func (this *QUiLoader) AddPluginPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QUiLoader_addPluginPath(this.h, path_ms)
}

func (this *QUiLoader) Load(device *qt6.QIODevice) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QUiLoader_load(this.h, (*C.QIODevice)(device.UnsafePointer()))))
}

func (this *QUiLoader) AvailableWidgets() []string {
	var _ma C.struct_miqt_array = C.QUiLoader_availableWidgets(this.h)
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

func (this *QUiLoader) AvailableLayouts() []string {
	var _ma C.struct_miqt_array = C.QUiLoader_availableLayouts(this.h)
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

func (this *QUiLoader) CreateWidget(className string, parent *qt6.QWidget, name string) *qt6.QWidget {
	className_ms := C.struct_miqt_string{}
	className_ms.data = C.CString(className)
	className_ms.len = C.size_t(len(className))
	defer C.free(unsafe.Pointer(className_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QUiLoader_createWidget(this.h, className_ms, (*C.QWidget)(parent.UnsafePointer()), name_ms)))
}

func (this *QUiLoader) CreateLayout(className string, parent *qt6.QObject, name string) *qt6.QLayout {
	className_ms := C.struct_miqt_string{}
	className_ms.data = C.CString(className)
	className_ms.len = C.size_t(len(className))
	defer C.free(unsafe.Pointer(className_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return qt6.UnsafeNewQLayout(unsafe.Pointer(C.QUiLoader_createLayout(this.h, className_ms, (*C.QObject)(parent.UnsafePointer()), name_ms)))
}

func (this *QUiLoader) CreateActionGroup(parent *qt6.QObject, name string) *qt6.QActionGroup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return qt6.UnsafeNewQActionGroup(unsafe.Pointer(C.QUiLoader_createActionGroup(this.h, (*C.QObject)(parent.UnsafePointer()), name_ms)))
}

func (this *QUiLoader) CreateAction(parent *qt6.QObject, name string) *qt6.QAction {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QUiLoader_createAction(this.h, (*C.QObject)(parent.UnsafePointer()), name_ms)))
}

func (this *QUiLoader) SetWorkingDirectory(dir *qt6.QDir) {
	C.QUiLoader_setWorkingDirectory(this.h, (*C.QDir)(dir.UnsafePointer()))
}

func (this *QUiLoader) WorkingDirectory() *qt6.QDir {
	_goptr := qt6.UnsafeNewQDir(unsafe.Pointer(C.QUiLoader_workingDirectory(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUiLoader) SetLanguageChangeEnabled(enabled bool) {
	C.QUiLoader_setLanguageChangeEnabled(this.h, (C.bool)(enabled))
}

func (this *QUiLoader) IsLanguageChangeEnabled() bool {
	return (bool)(C.QUiLoader_isLanguageChangeEnabled(this.h))
}

func (this *QUiLoader) SetTranslationEnabled(enabled bool) {
	C.QUiLoader_setTranslationEnabled(this.h, (C.bool)(enabled))
}

func (this *QUiLoader) IsTranslationEnabled() bool {
	return (bool)(C.QUiLoader_isTranslationEnabled(this.h))
}

func (this *QUiLoader) ErrorString() string {
	var _ms C.struct_miqt_string = C.QUiLoader_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUiLoader_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUiLoader_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUiLoader_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUiLoader_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUiLoader) Load2(device *qt6.QIODevice, parentWidget *qt6.QWidget) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QUiLoader_load2(this.h, (*C.QIODevice)(device.UnsafePointer()), (*C.QWidget)(parentWidget.UnsafePointer()))))
}

// Sender can only be called from a QUiLoader that was directly constructed.
func (this *QUiLoader) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QUiLoader_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QUiLoader that was directly constructed.
func (this *QUiLoader) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QUiLoader_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QUiLoader that was directly constructed.
func (this *QUiLoader) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QUiLoader_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QUiLoader that was directly constructed.
func (this *QUiLoader) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QUiLoader_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QUiLoader) callVirtualBase_CreateWidget(className string, parent *qt6.QWidget, name string) *qt6.QWidget {
	className_ms := C.struct_miqt_string{}
	className_ms.data = C.CString(className)
	className_ms.len = C.size_t(len(className))
	defer C.free(unsafe.Pointer(className_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QUiLoader_virtualbase_createWidget(unsafe.Pointer(this.h), className_ms, (*C.QWidget)(parent.UnsafePointer()), name_ms)))

}
func (this *QUiLoader) OnCreateWidget(slot func(super func(className string, parent *qt6.QWidget, name string) *qt6.QWidget, className string, parent *qt6.QWidget, name string) *qt6.QWidget) {
	ok := C.QUiLoader_override_virtual_createWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_createWidget
func miqt_exec_callback_QUiLoader_createWidget(self *C.QUiLoader, cb C.intptr_t, className C.struct_miqt_string, parent *C.QWidget, name C.struct_miqt_string) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(className string, parent *qt6.QWidget, name string) *qt6.QWidget, className string, parent *qt6.QWidget, name string) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var className_ms C.struct_miqt_string = className
	className_ret := C.GoStringN(className_ms.data, C.int(int64(className_ms.len)))
	C.free(unsafe.Pointer(className_ms.data))
	slotval1 := className_ret
	slotval2 := qt6.UnsafeNewQWidget(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval3 := name_ret

	virtualReturn := gofunc((&QUiLoader{h: self}).callVirtualBase_CreateWidget, slotval1, slotval2, slotval3)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QUiLoader) callVirtualBase_CreateLayout(className string, parent *qt6.QObject, name string) *qt6.QLayout {
	className_ms := C.struct_miqt_string{}
	className_ms.data = C.CString(className)
	className_ms.len = C.size_t(len(className))
	defer C.free(unsafe.Pointer(className_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQLayout(unsafe.Pointer(C.QUiLoader_virtualbase_createLayout(unsafe.Pointer(this.h), className_ms, (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QUiLoader) OnCreateLayout(slot func(super func(className string, parent *qt6.QObject, name string) *qt6.QLayout, className string, parent *qt6.QObject, name string) *qt6.QLayout) {
	ok := C.QUiLoader_override_virtual_createLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_createLayout
func miqt_exec_callback_QUiLoader_createLayout(self *C.QUiLoader, cb C.intptr_t, className C.struct_miqt_string, parent *C.QObject, name C.struct_miqt_string) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(className string, parent *qt6.QObject, name string) *qt6.QLayout, className string, parent *qt6.QObject, name string) *qt6.QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var className_ms C.struct_miqt_string = className
	className_ret := C.GoStringN(className_ms.data, C.int(int64(className_ms.len)))
	C.free(unsafe.Pointer(className_ms.data))
	slotval1 := className_ret
	slotval2 := qt6.UnsafeNewQObject(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval3 := name_ret

	virtualReturn := gofunc((&QUiLoader{h: self}).callVirtualBase_CreateLayout, slotval1, slotval2, slotval3)

	return (*C.QLayout)(virtualReturn.UnsafePointer())

}

func (this *QUiLoader) callVirtualBase_CreateActionGroup(parent *qt6.QObject, name string) *qt6.QActionGroup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQActionGroup(unsafe.Pointer(C.QUiLoader_virtualbase_createActionGroup(unsafe.Pointer(this.h), (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QUiLoader) OnCreateActionGroup(slot func(super func(parent *qt6.QObject, name string) *qt6.QActionGroup, parent *qt6.QObject, name string) *qt6.QActionGroup) {
	ok := C.QUiLoader_override_virtual_createActionGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_createActionGroup
func miqt_exec_callback_QUiLoader_createActionGroup(self *C.QUiLoader, cb C.intptr_t, parent *C.QObject, name C.struct_miqt_string) *C.QActionGroup {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QObject, name string) *qt6.QActionGroup, parent *qt6.QObject, name string) *qt6.QActionGroup)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval2 := name_ret

	virtualReturn := gofunc((&QUiLoader{h: self}).callVirtualBase_CreateActionGroup, slotval1, slotval2)

	return (*C.QActionGroup)(virtualReturn.UnsafePointer())

}

func (this *QUiLoader) callVirtualBase_CreateAction(parent *qt6.QObject, name string) *qt6.QAction {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QUiLoader_virtualbase_createAction(unsafe.Pointer(this.h), (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QUiLoader) OnCreateAction(slot func(super func(parent *qt6.QObject, name string) *qt6.QAction, parent *qt6.QObject, name string) *qt6.QAction) {
	ok := C.QUiLoader_override_virtual_createAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_createAction
func miqt_exec_callback_QUiLoader_createAction(self *C.QUiLoader, cb C.intptr_t, parent *C.QObject, name C.struct_miqt_string) *C.QAction {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QObject, name string) *qt6.QAction, parent *qt6.QObject, name string) *qt6.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval2 := name_ret

	virtualReturn := gofunc((&QUiLoader{h: self}).callVirtualBase_CreateAction, slotval1, slotval2)

	return (*C.QAction)(virtualReturn.UnsafePointer())

}

func (this *QUiLoader) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QUiLoader_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QUiLoader) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QUiLoader_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_event
func miqt_exec_callback_QUiLoader_event(self *C.QUiLoader, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QUiLoader{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUiLoader) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QUiLoader_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QUiLoader) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QUiLoader_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_eventFilter
func miqt_exec_callback_QUiLoader_eventFilter(self *C.QUiLoader, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QUiLoader{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QUiLoader) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QUiLoader_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QUiLoader) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QUiLoader_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_timerEvent
func miqt_exec_callback_QUiLoader_timerEvent(self *C.QUiLoader, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QUiLoader{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QUiLoader) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QUiLoader_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QUiLoader) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QUiLoader_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_childEvent
func miqt_exec_callback_QUiLoader_childEvent(self *C.QUiLoader, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QUiLoader{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QUiLoader) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QUiLoader_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QUiLoader) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QUiLoader_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_customEvent
func miqt_exec_callback_QUiLoader_customEvent(self *C.QUiLoader, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QUiLoader{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QUiLoader) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QUiLoader_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QUiLoader) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QUiLoader_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_connectNotify
func miqt_exec_callback_QUiLoader_connectNotify(self *C.QUiLoader, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QUiLoader{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QUiLoader) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QUiLoader_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QUiLoader) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QUiLoader_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUiLoader_disconnectNotify
func miqt_exec_callback_QUiLoader_disconnectNotify(self *C.QUiLoader, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QUiLoader{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QUiLoader) Delete() {
	C.QUiLoader_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUiLoader) GoGC() {
	runtime.SetFinalizer(this, func(this *QUiLoader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

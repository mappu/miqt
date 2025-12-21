package designer

/*

#include "gen_abstractmetadatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerMetaDataBaseItemInterface struct {
	h *C.QDesignerMetaDataBaseItemInterface
}

func (this *QDesignerMetaDataBaseItemInterface) cPointer() *C.QDesignerMetaDataBaseItemInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerMetaDataBaseItemInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerMetaDataBaseItemInterface constructs the type using only CGO pointers.
func newQDesignerMetaDataBaseItemInterface(h *C.QDesignerMetaDataBaseItemInterface) *QDesignerMetaDataBaseItemInterface {
	if h == nil {
		return nil
	}

	return &QDesignerMetaDataBaseItemInterface{h: h}
}

// UnsafeNewQDesignerMetaDataBaseItemInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerMetaDataBaseItemInterface(h unsafe.Pointer) *QDesignerMetaDataBaseItemInterface {
	return newQDesignerMetaDataBaseItemInterface((*C.QDesignerMetaDataBaseItemInterface)(h))
}

// NewQDesignerMetaDataBaseItemInterface constructs a new QDesignerMetaDataBaseItemInterface object.
func NewQDesignerMetaDataBaseItemInterface() *QDesignerMetaDataBaseItemInterface {

	return newQDesignerMetaDataBaseItemInterface(C.QDesignerMetaDataBaseItemInterface_new())
}

func (this *QDesignerMetaDataBaseItemInterface) Name() string {
	var _ms C.struct_miqt_string = C.QDesignerMetaDataBaseItemInterface_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerMetaDataBaseItemInterface) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerMetaDataBaseItemInterface_setName(this.h, name_ms)
}

func (this *QDesignerMetaDataBaseItemInterface) TabOrder() []*qt6.QWidget {
	var _ma C.struct_miqt_array = C.QDesignerMetaDataBaseItemInterface_tabOrder(this.h)
	_ret := make([]*qt6.QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQWidget(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QDesignerMetaDataBaseItemInterface) SetTabOrder(tabOrder []*qt6.QWidget) {
	tabOrder_CArray := (*[0xffff]*C.QWidget)(C.malloc(C.size_t(8 * len(tabOrder))))
	defer C.free(unsafe.Pointer(tabOrder_CArray))
	for i := range tabOrder {
		tabOrder_CArray[i] = (*C.QWidget)(tabOrder[i].UnsafePointer())
	}
	tabOrder_ma := C.struct_miqt_array{len: C.size_t(len(tabOrder)), data: unsafe.Pointer(tabOrder_CArray)}
	C.QDesignerMetaDataBaseItemInterface_setTabOrder(this.h, tabOrder_ma)
}

func (this *QDesignerMetaDataBaseItemInterface) Enabled() bool {
	return (bool)(C.QDesignerMetaDataBaseItemInterface_enabled(this.h))
}

func (this *QDesignerMetaDataBaseItemInterface) SetEnabled(b bool) {
	C.QDesignerMetaDataBaseItemInterface_setEnabled(this.h, (C.bool)(b))
}
func (this *QDesignerMetaDataBaseItemInterface) OnName(slot func() string) {
	ok := C.QDesignerMetaDataBaseItemInterface_override_virtual_name(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseItemInterface_name
func miqt_exec_callback_QDesignerMetaDataBaseItemInterface_name(self *C.QDesignerMetaDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerMetaDataBaseItemInterface) OnSetName(slot func(name string)) {
	ok := C.QDesignerMetaDataBaseItemInterface_override_virtual_setName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setName
func miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setName(self *C.QDesignerMetaDataBaseItemInterface, cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc(slotval1)

}
func (this *QDesignerMetaDataBaseItemInterface) OnTabOrder(slot func() []*qt6.QWidget) {
	ok := C.QDesignerMetaDataBaseItemInterface_override_virtual_tabOrder(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseItemInterface_tabOrder
func miqt_exec_callback_QDesignerMetaDataBaseItemInterface_tabOrder(self *C.QDesignerMetaDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []*qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_CArray := (*[0xffff]*C.QWidget)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QWidget)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QDesignerMetaDataBaseItemInterface) OnSetTabOrder(slot func(tabOrder []*qt6.QWidget)) {
	ok := C.QDesignerMetaDataBaseItemInterface_override_virtual_setTabOrder(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setTabOrder
func miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setTabOrder(self *C.QDesignerMetaDataBaseItemInterface, cb C.intptr_t, tabOrder C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(tabOrder []*qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var tabOrder_ma C.struct_miqt_array = tabOrder
	tabOrder_ret := make([]*qt6.QWidget, int(tabOrder_ma.len))
	tabOrder_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(tabOrder_ma.data)) // hey ya
	for i := 0; i < int(tabOrder_ma.len); i++ {
		tabOrder_ret[i] = qt6.UnsafeNewQWidget(unsafe.Pointer(tabOrder_outCast[i]))
	}
	slotval1 := tabOrder_ret

	gofunc(slotval1)

}
func (this *QDesignerMetaDataBaseItemInterface) OnEnabled(slot func() bool) {
	ok := C.QDesignerMetaDataBaseItemInterface_override_virtual_enabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseItemInterface_enabled
func miqt_exec_callback_QDesignerMetaDataBaseItemInterface_enabled(self *C.QDesignerMetaDataBaseItemInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerMetaDataBaseItemInterface) OnSetEnabled(slot func(b bool)) {
	ok := C.QDesignerMetaDataBaseItemInterface_override_virtual_setEnabled(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setEnabled
func miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setEnabled(self *C.QDesignerMetaDataBaseItemInterface, cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerMetaDataBaseItemInterface) Delete() {
	C.QDesignerMetaDataBaseItemInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerMetaDataBaseItemInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerMetaDataBaseItemInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDesignerMetaDataBaseInterface struct {
	h *C.QDesignerMetaDataBaseInterface
	*qt6.QObject
}

func (this *QDesignerMetaDataBaseInterface) cPointer() *C.QDesignerMetaDataBaseInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerMetaDataBaseInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerMetaDataBaseInterface constructs the type using only CGO pointers.
func newQDesignerMetaDataBaseInterface(h *C.QDesignerMetaDataBaseInterface) *QDesignerMetaDataBaseInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDesignerMetaDataBaseInterface_virtbase(h, &outptr_QObject)

	return &QDesignerMetaDataBaseInterface{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDesignerMetaDataBaseInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerMetaDataBaseInterface(h unsafe.Pointer) *QDesignerMetaDataBaseInterface {
	return newQDesignerMetaDataBaseInterface((*C.QDesignerMetaDataBaseInterface)(h))
}

// NewQDesignerMetaDataBaseInterface constructs a new QDesignerMetaDataBaseInterface object.
func NewQDesignerMetaDataBaseInterface() *QDesignerMetaDataBaseInterface {

	return newQDesignerMetaDataBaseInterface(C.QDesignerMetaDataBaseInterface_new())
}

// NewQDesignerMetaDataBaseInterface2 constructs a new QDesignerMetaDataBaseInterface object.
func NewQDesignerMetaDataBaseInterface2(parent *qt6.QObject) *QDesignerMetaDataBaseInterface {

	return newQDesignerMetaDataBaseInterface(C.QDesignerMetaDataBaseInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerMetaDataBaseInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerMetaDataBaseInterface_metaObject(this.h)))
}

func (this *QDesignerMetaDataBaseInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerMetaDataBaseInterface_metacast(this.h, param1_Cstring))
}

func QDesignerMetaDataBaseInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerMetaDataBaseInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerMetaDataBaseInterface) Item(object *qt6.QObject) *QDesignerMetaDataBaseItemInterface {
	return newQDesignerMetaDataBaseItemInterface(C.QDesignerMetaDataBaseInterface_item(this.h, (*C.QObject)(object.UnsafePointer())))
}

func (this *QDesignerMetaDataBaseInterface) Add(object *qt6.QObject) {
	C.QDesignerMetaDataBaseInterface_add(this.h, (*C.QObject)(object.UnsafePointer()))
}

func (this *QDesignerMetaDataBaseInterface) Remove(object *qt6.QObject) {
	C.QDesignerMetaDataBaseInterface_remove(this.h, (*C.QObject)(object.UnsafePointer()))
}

func (this *QDesignerMetaDataBaseInterface) Objects() []*qt6.QObject {
	var _ma C.struct_miqt_array = C.QDesignerMetaDataBaseInterface_objects(this.h)
	_ret := make([]*qt6.QObject, int(_ma.len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQObject(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QDesignerMetaDataBaseInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerMetaDataBaseInterface_core(this.h))
}

func (this *QDesignerMetaDataBaseInterface) Changed() {
	C.QDesignerMetaDataBaseInterface_changed(this.h)
}
func (this *QDesignerMetaDataBaseInterface) OnChanged(slot func()) {
	C.QDesignerMetaDataBaseInterface_connect_changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_changed
func miqt_exec_callback_QDesignerMetaDataBaseInterface_changed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QDesignerMetaDataBaseInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerMetaDataBaseInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerMetaDataBaseInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerMetaDataBaseInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDesignerMetaDataBaseInterface that was directly constructed.
func (this *QDesignerMetaDataBaseInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerMetaDataBaseInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerMetaDataBaseInterface that was directly constructed.
func (this *QDesignerMetaDataBaseInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerMetaDataBaseInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerMetaDataBaseInterface that was directly constructed.
func (this *QDesignerMetaDataBaseInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerMetaDataBaseInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerMetaDataBaseInterface that was directly constructed.
func (this *QDesignerMetaDataBaseInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerMetaDataBaseInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QDesignerMetaDataBaseInterface) OnItem(slot func(object *qt6.QObject) *QDesignerMetaDataBaseItemInterface) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_item(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_item
func miqt_exec_callback_QDesignerMetaDataBaseInterface_item(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, object *C.QObject) *C.QDesignerMetaDataBaseItemInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *qt6.QObject) *QDesignerMetaDataBaseItemInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QDesignerMetaDataBaseInterface) OnAdd(slot func(object *qt6.QObject)) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_add(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_add
func miqt_exec_callback_QDesignerMetaDataBaseInterface_add(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, object *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *qt6.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	gofunc(slotval1)

}
func (this *QDesignerMetaDataBaseInterface) OnRemove(slot func(object *qt6.QObject)) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_remove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_remove
func miqt_exec_callback_QDesignerMetaDataBaseInterface_remove(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, object *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *qt6.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	gofunc(slotval1)

}
func (this *QDesignerMetaDataBaseInterface) OnObjects(slot func() []*qt6.QObject) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_objects(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_objects
func miqt_exec_callback_QDesignerMetaDataBaseInterface_objects(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []*qt6.QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_CArray := (*[0xffff]*C.QObject)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QObject)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QDesignerMetaDataBaseInterface) OnCore(slot func() *QDesignerFormEditorInterface) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_core
func miqt_exec_callback_QDesignerMetaDataBaseInterface_core(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

func (this *QDesignerMetaDataBaseInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerMetaDataBaseInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerMetaDataBaseInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_event
func miqt_exec_callback_QDesignerMetaDataBaseInterface_event(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerMetaDataBaseInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerMetaDataBaseInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerMetaDataBaseInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerMetaDataBaseInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_eventFilter
func miqt_exec_callback_QDesignerMetaDataBaseInterface_eventFilter(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerMetaDataBaseInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerMetaDataBaseInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerMetaDataBaseInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerMetaDataBaseInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_timerEvent
func miqt_exec_callback_QDesignerMetaDataBaseInterface_timerEvent(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerMetaDataBaseInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerMetaDataBaseInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerMetaDataBaseInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerMetaDataBaseInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_childEvent
func miqt_exec_callback_QDesignerMetaDataBaseInterface_childEvent(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerMetaDataBaseInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerMetaDataBaseInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerMetaDataBaseInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerMetaDataBaseInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_customEvent
func miqt_exec_callback_QDesignerMetaDataBaseInterface_customEvent(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerMetaDataBaseInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerMetaDataBaseInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerMetaDataBaseInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerMetaDataBaseInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_connectNotify
func miqt_exec_callback_QDesignerMetaDataBaseInterface_connectNotify(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerMetaDataBaseInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerMetaDataBaseInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerMetaDataBaseInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerMetaDataBaseInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerMetaDataBaseInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerMetaDataBaseInterface_disconnectNotify
func miqt_exec_callback_QDesignerMetaDataBaseInterface_disconnectNotify(self *C.QDesignerMetaDataBaseInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerMetaDataBaseInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerMetaDataBaseInterface) Delete() {
	C.QDesignerMetaDataBaseInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerMetaDataBaseInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerMetaDataBaseInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package designer

/*

#include "gen_abstractpropertyeditor.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerPropertyEditorInterface struct {
	h *C.QDesignerPropertyEditorInterface
	*qt6.QWidget
}

func (this *QDesignerPropertyEditorInterface) cPointer() *C.QDesignerPropertyEditorInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerPropertyEditorInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerPropertyEditorInterface constructs the type using only CGO pointers.
func newQDesignerPropertyEditorInterface(h *C.QDesignerPropertyEditorInterface) *QDesignerPropertyEditorInterface {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDesignerPropertyEditorInterface_virtbase(h, &outptr_QWidget)

	return &QDesignerPropertyEditorInterface{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQDesignerPropertyEditorInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerPropertyEditorInterface(h unsafe.Pointer) *QDesignerPropertyEditorInterface {
	return newQDesignerPropertyEditorInterface((*C.QDesignerPropertyEditorInterface)(h))
}

// NewQDesignerPropertyEditorInterface constructs a new QDesignerPropertyEditorInterface object.
func NewQDesignerPropertyEditorInterface(parent *qt6.QWidget) *QDesignerPropertyEditorInterface {

	return newQDesignerPropertyEditorInterface(C.QDesignerPropertyEditorInterface_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQDesignerPropertyEditorInterface2 constructs a new QDesignerPropertyEditorInterface object.
func NewQDesignerPropertyEditorInterface2(parent *qt6.QWidget, flags qt6.WindowType) *QDesignerPropertyEditorInterface {

	return newQDesignerPropertyEditorInterface(C.QDesignerPropertyEditorInterface_new2((*C.QWidget)(parent.UnsafePointer()), (C.int)(flags)))
}

func (this *QDesignerPropertyEditorInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerPropertyEditorInterface_metaObject(this.h)))
}

func (this *QDesignerPropertyEditorInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerPropertyEditorInterface_metacast(this.h, param1_Cstring))
}

func QDesignerPropertyEditorInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerPropertyEditorInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertyEditorInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerPropertyEditorInterface_core(this.h))
}

func (this *QDesignerPropertyEditorInterface) IsReadOnly() bool {
	return (bool)(C.QDesignerPropertyEditorInterface_isReadOnly(this.h))
}

func (this *QDesignerPropertyEditorInterface) Object() *qt6.QObject {
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerPropertyEditorInterface_object(this.h)))
}

func (this *QDesignerPropertyEditorInterface) CurrentPropertyName() string {
	var _ms C.struct_miqt_string = C.QDesignerPropertyEditorInterface_currentPropertyName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerPropertyEditorInterface) PropertyChanged(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerPropertyEditorInterface_propertyChanged(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QDesignerPropertyEditorInterface) OnPropertyChanged(slot func(name string, value *qt6.QVariant)) {
	C.QDesignerPropertyEditorInterface_connect_propertyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_propertyChanged
func miqt_exec_callback_QDesignerPropertyEditorInterface_propertyChanged(cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)
}

func (this *QDesignerPropertyEditorInterface) SetObject(object *qt6.QObject) {
	C.QDesignerPropertyEditorInterface_setObject(this.h, (*C.QObject)(object.UnsafePointer()))
}

func (this *QDesignerPropertyEditorInterface) SetPropertyValue(name string, value *qt6.QVariant, changed bool) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerPropertyEditorInterface_setPropertyValue(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()), (C.bool)(changed))
}

func (this *QDesignerPropertyEditorInterface) SetReadOnly(readOnly bool) {
	C.QDesignerPropertyEditorInterface_setReadOnly(this.h, (C.bool)(readOnly))
}

func QDesignerPropertyEditorInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerPropertyEditorInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerPropertyEditorInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerPropertyEditorInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerPropertyEditorInterface_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerPropertyEditorInterface_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerPropertyEditorInterface_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerPropertyEditorInterface_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerPropertyEditorInterface_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerPropertyEditorInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerPropertyEditorInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerPropertyEditorInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerPropertyEditorInterface that was directly constructed.
func (this *QDesignerPropertyEditorInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerPropertyEditorInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_Core() *QDesignerFormEditorInterface {

	return newQDesignerFormEditorInterface(C.QDesignerPropertyEditorInterface_virtualbase_core(unsafe.Pointer(this.h)))

}
func (this *QDesignerPropertyEditorInterface) OnCore(slot func(super func() *QDesignerFormEditorInterface) *QDesignerFormEditorInterface) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_core
func miqt_exec_callback_QDesignerPropertyEditorInterface_core(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QDesignerFormEditorInterface) *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_Core)

	return virtualReturn.cPointer()

}
func (this *QDesignerPropertyEditorInterface) OnIsReadOnly(slot func() bool) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_isReadOnly(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_isReadOnly
func miqt_exec_callback_QDesignerPropertyEditorInterface_isReadOnly(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerPropertyEditorInterface) OnObject(slot func() *qt6.QObject) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_object(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_object
func miqt_exec_callback_QDesignerPropertyEditorInterface_object(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt6.QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QObject)(virtualReturn.UnsafePointer())

}
func (this *QDesignerPropertyEditorInterface) OnCurrentPropertyName(slot func() string) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_currentPropertyName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_currentPropertyName
func miqt_exec_callback_QDesignerPropertyEditorInterface_currentPropertyName(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerPropertyEditorInterface) OnSetObject(slot func(object *qt6.QObject)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_setObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_setObject
func miqt_exec_callback_QDesignerPropertyEditorInterface_setObject(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, object *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *qt6.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	gofunc(slotval1)

}
func (this *QDesignerPropertyEditorInterface) OnSetPropertyValue(slot func(name string, value *qt6.QVariant, changed bool)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_setPropertyValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_setPropertyValue
func miqt_exec_callback_QDesignerPropertyEditorInterface_setPropertyValue(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant, changed C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, value *qt6.QVariant, changed bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval3 := (bool)(changed)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QDesignerPropertyEditorInterface) OnSetReadOnly(slot func(readOnly bool)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_setReadOnly(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_setReadOnly
func miqt_exec_callback_QDesignerPropertyEditorInterface_setReadOnly(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, readOnly C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(readOnly bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(readOnly)

	gofunc(slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_DevType() int {

	return (int)(C.QDesignerPropertyEditorInterface_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDesignerPropertyEditorInterface) OnDevType(slot func(super func() int) int) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_devType
func miqt_exec_callback_QDesignerPropertyEditorInterface_devType(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_SetVisible(visible bool) {

	C.QDesignerPropertyEditorInterface_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDesignerPropertyEditorInterface) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_setVisible
func miqt_exec_callback_QDesignerPropertyEditorInterface_setVisible(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerPropertyEditorInterface_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerPropertyEditorInterface) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_sizeHint
func miqt_exec_callback_QDesignerPropertyEditorInterface_sizeHint(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerPropertyEditorInterface_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerPropertyEditorInterface) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_minimumSizeHint
func miqt_exec_callback_QDesignerPropertyEditorInterface_minimumSizeHint(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDesignerPropertyEditorInterface_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerPropertyEditorInterface) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_heightForWidth
func miqt_exec_callback_QDesignerPropertyEditorInterface_heightForWidth(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDesignerPropertyEditorInterface_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDesignerPropertyEditorInterface) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_hasHeightForWidth
func miqt_exec_callback_QDesignerPropertyEditorInterface_hasHeightForWidth(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QDesignerPropertyEditorInterface_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QDesignerPropertyEditorInterface) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_paintEngine
func miqt_exec_callback_QDesignerPropertyEditorInterface_paintEngine(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerPropertyEditorInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerPropertyEditorInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_event
func miqt_exec_callback_QDesignerPropertyEditorInterface_event(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_mousePressEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_mousePressEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_mouseReleaseEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_mouseReleaseEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_mouseDoubleClickEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_mouseDoubleClickEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_mouseMoveEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_mouseMoveEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_wheelEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_wheelEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_keyPressEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_keyPressEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_keyReleaseEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_keyReleaseEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_focusInEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_focusInEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_focusOutEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_focusOutEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_enterEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_enterEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_leaveEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_leaveEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_paintEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_paintEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_moveEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_moveEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_resizeEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_resizeEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_closeEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_closeEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_contextMenuEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_contextMenuEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_tabletEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_tabletEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_actionEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_actionEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_dragEnterEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_dragEnterEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_dragMoveEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_dragMoveEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_dragLeaveEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_dragLeaveEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_dropEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_dropEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_showEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_showEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_hideEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_hideEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDesignerPropertyEditorInterface_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDesignerPropertyEditorInterface) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_nativeEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_nativeEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_changeEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_changeEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDesignerPropertyEditorInterface_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerPropertyEditorInterface) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_metric
func miqt_exec_callback_QDesignerPropertyEditorInterface_metric(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QDesignerPropertyEditorInterface_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_initPainter
func miqt_exec_callback_QDesignerPropertyEditorInterface_initPainter(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QDesignerPropertyEditorInterface_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QDesignerPropertyEditorInterface) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_redirected
func miqt_exec_callback_QDesignerPropertyEditorInterface_redirected(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QDesignerPropertyEditorInterface_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QDesignerPropertyEditorInterface) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_sharedPainter
func miqt_exec_callback_QDesignerPropertyEditorInterface_sharedPainter(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerPropertyEditorInterface_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerPropertyEditorInterface) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodQuery
func miqt_exec_callback_QDesignerPropertyEditorInterface_inputMethodQuery(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDesignerPropertyEditorInterface_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDesignerPropertyEditorInterface) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_focusNextPrevChild
func miqt_exec_callback_QDesignerPropertyEditorInterface_focusNextPrevChild(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerPropertyEditorInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerPropertyEditorInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_eventFilter
func miqt_exec_callback_QDesignerPropertyEditorInterface_eventFilter(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_timerEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_timerEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_childEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_childEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerPropertyEditorInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_customEvent
func miqt_exec_callback_QDesignerPropertyEditorInterface_customEvent(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerPropertyEditorInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_connectNotify
func miqt_exec_callback_QDesignerPropertyEditorInterface_connectNotify(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerPropertyEditorInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerPropertyEditorInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerPropertyEditorInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerPropertyEditorInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerPropertyEditorInterface_disconnectNotify
func miqt_exec_callback_QDesignerPropertyEditorInterface_disconnectNotify(self *C.QDesignerPropertyEditorInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerPropertyEditorInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerPropertyEditorInterface) Delete() {
	C.QDesignerPropertyEditorInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerPropertyEditorInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerPropertyEditorInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

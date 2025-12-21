package designer

/*

#include "gen_abstractwidgetdatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerWidgetDataBaseItemInterface struct {
	h *C.QDesignerWidgetDataBaseItemInterface
}

func (this *QDesignerWidgetDataBaseItemInterface) cPointer() *C.QDesignerWidgetDataBaseItemInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerWidgetDataBaseItemInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerWidgetDataBaseItemInterface constructs the type using only CGO pointers.
func newQDesignerWidgetDataBaseItemInterface(h *C.QDesignerWidgetDataBaseItemInterface) *QDesignerWidgetDataBaseItemInterface {
	if h == nil {
		return nil
	}

	return &QDesignerWidgetDataBaseItemInterface{h: h}
}

// UnsafeNewQDesignerWidgetDataBaseItemInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerWidgetDataBaseItemInterface(h unsafe.Pointer) *QDesignerWidgetDataBaseItemInterface {
	return newQDesignerWidgetDataBaseItemInterface((*C.QDesignerWidgetDataBaseItemInterface)(h))
}

func (this *QDesignerWidgetDataBaseItemInterface) Name() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseItemInterface_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerWidgetDataBaseItemInterface_setName(this.h, name_ms)
}

func (this *QDesignerWidgetDataBaseItemInterface) Group() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseItemInterface_group(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) SetGroup(group string) {
	group_ms := C.struct_miqt_string{}
	group_ms.data = C.CString(group)
	group_ms.len = C.size_t(len(group))
	defer C.free(unsafe.Pointer(group_ms.data))
	C.QDesignerWidgetDataBaseItemInterface_setGroup(this.h, group_ms)
}

func (this *QDesignerWidgetDataBaseItemInterface) ToolTip() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseItemInterface_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QDesignerWidgetDataBaseItemInterface_setToolTip(this.h, toolTip_ms)
}

func (this *QDesignerWidgetDataBaseItemInterface) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseItemInterface_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QDesignerWidgetDataBaseItemInterface_setWhatsThis(this.h, whatsThis_ms)
}

func (this *QDesignerWidgetDataBaseItemInterface) IncludeFile() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseItemInterface_includeFile(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) SetIncludeFile(includeFile string) {
	includeFile_ms := C.struct_miqt_string{}
	includeFile_ms.data = C.CString(includeFile)
	includeFile_ms.len = C.size_t(len(includeFile))
	defer C.free(unsafe.Pointer(includeFile_ms.data))
	C.QDesignerWidgetDataBaseItemInterface_setIncludeFile(this.h, includeFile_ms)
}

func (this *QDesignerWidgetDataBaseItemInterface) Icon() *qt.QIcon {
	_goptr := qt.UnsafeNewQIcon(unsafe.Pointer(C.QDesignerWidgetDataBaseItemInterface_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerWidgetDataBaseItemInterface) SetIcon(icon *qt.QIcon) {
	C.QDesignerWidgetDataBaseItemInterface_setIcon(this.h, (*C.QIcon)(icon.UnsafePointer()))
}

func (this *QDesignerWidgetDataBaseItemInterface) IsCompat() bool {
	return (bool)(C.QDesignerWidgetDataBaseItemInterface_isCompat(this.h))
}

func (this *QDesignerWidgetDataBaseItemInterface) SetCompat(compat bool) {
	C.QDesignerWidgetDataBaseItemInterface_setCompat(this.h, (C.bool)(compat))
}

func (this *QDesignerWidgetDataBaseItemInterface) IsContainer() bool {
	return (bool)(C.QDesignerWidgetDataBaseItemInterface_isContainer(this.h))
}

func (this *QDesignerWidgetDataBaseItemInterface) SetContainer(container bool) {
	C.QDesignerWidgetDataBaseItemInterface_setContainer(this.h, (C.bool)(container))
}

func (this *QDesignerWidgetDataBaseItemInterface) IsCustom() bool {
	return (bool)(C.QDesignerWidgetDataBaseItemInterface_isCustom(this.h))
}

func (this *QDesignerWidgetDataBaseItemInterface) SetCustom(custom bool) {
	C.QDesignerWidgetDataBaseItemInterface_setCustom(this.h, (C.bool)(custom))
}

func (this *QDesignerWidgetDataBaseItemInterface) PluginPath() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseItemInterface_pluginPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) SetPluginPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QDesignerWidgetDataBaseItemInterface_setPluginPath(this.h, path_ms)
}

func (this *QDesignerWidgetDataBaseItemInterface) IsPromoted() bool {
	return (bool)(C.QDesignerWidgetDataBaseItemInterface_isPromoted(this.h))
}

func (this *QDesignerWidgetDataBaseItemInterface) SetPromoted(b bool) {
	C.QDesignerWidgetDataBaseItemInterface_setPromoted(this.h, (C.bool)(b))
}

func (this *QDesignerWidgetDataBaseItemInterface) Extends() string {
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseItemInterface_extends(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) SetExtends(s string) {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	C.QDesignerWidgetDataBaseItemInterface_setExtends(this.h, s_ms)
}

func (this *QDesignerWidgetDataBaseItemInterface) SetDefaultPropertyValues(list []qt.QVariant) {
	list_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (*C.QVariant)(list[i].UnsafePointer())
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(this.h, list_ma)
}

func (this *QDesignerWidgetDataBaseItemInterface) DefaultPropertyValues() []qt.QVariant {
	var _ma C.struct_miqt_array = C.QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(this.h)
	_ret := make([]qt.QVariant, int(_ma.len))
	_outCast := (*[0xffff]*C.QVariant)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QDesignerWidgetDataBaseItemInterface) OperatorAssign(param1 *QDesignerWidgetDataBaseItemInterface) {
	C.QDesignerWidgetDataBaseItemInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerWidgetDataBaseItemInterface) Delete() {
	C.QDesignerWidgetDataBaseItemInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerWidgetDataBaseItemInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerWidgetDataBaseItemInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDesignerWidgetDataBaseInterface struct {
	h *C.QDesignerWidgetDataBaseInterface
	*qt.QObject
}

func (this *QDesignerWidgetDataBaseInterface) cPointer() *C.QDesignerWidgetDataBaseInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerWidgetDataBaseInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerWidgetDataBaseInterface constructs the type using only CGO pointers.
func newQDesignerWidgetDataBaseInterface(h *C.QDesignerWidgetDataBaseInterface) *QDesignerWidgetDataBaseInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDesignerWidgetDataBaseInterface_virtbase(h, &outptr_QObject)

	return &QDesignerWidgetDataBaseInterface{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDesignerWidgetDataBaseInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerWidgetDataBaseInterface(h unsafe.Pointer) *QDesignerWidgetDataBaseInterface {
	return newQDesignerWidgetDataBaseInterface((*C.QDesignerWidgetDataBaseInterface)(h))
}

// NewQDesignerWidgetDataBaseInterface constructs a new QDesignerWidgetDataBaseInterface object.
func NewQDesignerWidgetDataBaseInterface() *QDesignerWidgetDataBaseInterface {

	return newQDesignerWidgetDataBaseInterface(C.QDesignerWidgetDataBaseInterface_new())
}

// NewQDesignerWidgetDataBaseInterface2 constructs a new QDesignerWidgetDataBaseInterface object.
func NewQDesignerWidgetDataBaseInterface2(parent *qt.QObject) *QDesignerWidgetDataBaseInterface {

	return newQDesignerWidgetDataBaseInterface(C.QDesignerWidgetDataBaseInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerWidgetDataBaseInterface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerWidgetDataBaseInterface_metaObject(this.h)))
}

func (this *QDesignerWidgetDataBaseInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerWidgetDataBaseInterface_metacast(this.h, param1_Cstring))
}

func QDesignerWidgetDataBaseInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetDataBaseInterface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseInterface_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseInterface) Count() int {
	return (int)(C.QDesignerWidgetDataBaseInterface_count(this.h))
}

func (this *QDesignerWidgetDataBaseInterface) Item(index int) *QDesignerWidgetDataBaseItemInterface {
	return newQDesignerWidgetDataBaseItemInterface(C.QDesignerWidgetDataBaseInterface_item(this.h, (C.int)(index)))
}

func (this *QDesignerWidgetDataBaseInterface) IndexOf(item *QDesignerWidgetDataBaseItemInterface) int {
	return (int)(C.QDesignerWidgetDataBaseInterface_indexOf(this.h, item.cPointer()))
}

func (this *QDesignerWidgetDataBaseInterface) Insert(index int, item *QDesignerWidgetDataBaseItemInterface) {
	C.QDesignerWidgetDataBaseInterface_insert(this.h, (C.int)(index), item.cPointer())
}

func (this *QDesignerWidgetDataBaseInterface) Append(item *QDesignerWidgetDataBaseItemInterface) {
	C.QDesignerWidgetDataBaseInterface_append(this.h, item.cPointer())
}

func (this *QDesignerWidgetDataBaseInterface) IndexOfObject(object *qt.QObject, resolveName bool) int {
	return (int)(C.QDesignerWidgetDataBaseInterface_indexOfObject(this.h, (*C.QObject)(object.UnsafePointer()), (C.bool)(resolveName)))
}

func (this *QDesignerWidgetDataBaseInterface) IndexOfClassName(className string, resolveName bool) int {
	className_ms := C.struct_miqt_string{}
	className_ms.data = C.CString(className)
	className_ms.len = C.size_t(len(className))
	defer C.free(unsafe.Pointer(className_ms.data))
	return (int)(C.QDesignerWidgetDataBaseInterface_indexOfClassName(this.h, className_ms, (C.bool)(resolveName)))
}

func (this *QDesignerWidgetDataBaseInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerWidgetDataBaseInterface_core(this.h))
}

func (this *QDesignerWidgetDataBaseInterface) IsContainer(object *qt.QObject) bool {
	return (bool)(C.QDesignerWidgetDataBaseInterface_isContainer(this.h, (*C.QObject)(object.UnsafePointer())))
}

func (this *QDesignerWidgetDataBaseInterface) IsCustom(object *qt.QObject) bool {
	return (bool)(C.QDesignerWidgetDataBaseInterface_isCustom(this.h, (*C.QObject)(object.UnsafePointer())))
}

func (this *QDesignerWidgetDataBaseInterface) Changed() {
	C.QDesignerWidgetDataBaseInterface_changed(this.h)
}
func (this *QDesignerWidgetDataBaseInterface) OnChanged(slot func()) {
	C.QDesignerWidgetDataBaseInterface_connect_changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_changed
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_changed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QDesignerWidgetDataBaseInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetDataBaseInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetDataBaseInterface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseInterface_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerWidgetDataBaseInterface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerWidgetDataBaseInterface_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerWidgetDataBaseInterface) IsContainer2(object *qt.QObject, resolveName bool) bool {
	return (bool)(C.QDesignerWidgetDataBaseInterface_isContainer2(this.h, (*C.QObject)(object.UnsafePointer()), (C.bool)(resolveName)))
}

func (this *QDesignerWidgetDataBaseInterface) IsCustom2(object *qt.QObject, resolveName bool) bool {
	return (bool)(C.QDesignerWidgetDataBaseInterface_isCustom2(this.h, (*C.QObject)(object.UnsafePointer()), (C.bool)(resolveName)))
}

// Sender can only be called from a QDesignerWidgetDataBaseInterface that was directly constructed.
func (this *QDesignerWidgetDataBaseInterface) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QDesignerWidgetDataBaseInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerWidgetDataBaseInterface that was directly constructed.
func (this *QDesignerWidgetDataBaseInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerWidgetDataBaseInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerWidgetDataBaseInterface that was directly constructed.
func (this *QDesignerWidgetDataBaseInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerWidgetDataBaseInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerWidgetDataBaseInterface that was directly constructed.
func (this *QDesignerWidgetDataBaseInterface) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerWidgetDataBaseInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_Count() int {

	return (int)(C.QDesignerWidgetDataBaseInterface_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QDesignerWidgetDataBaseInterface) OnCount(slot func(super func() int) int) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_count
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_count(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_Item(index int) *QDesignerWidgetDataBaseItemInterface {

	return newQDesignerWidgetDataBaseItemInterface(C.QDesignerWidgetDataBaseInterface_virtualbase_item(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QDesignerWidgetDataBaseInterface) OnItem(slot func(super func(index int) *QDesignerWidgetDataBaseItemInterface, index int) *QDesignerWidgetDataBaseItemInterface) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_item(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_item
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_item(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, index C.int) *C.QDesignerWidgetDataBaseItemInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QDesignerWidgetDataBaseItemInterface, index int) *QDesignerWidgetDataBaseItemInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_Item, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_IndexOf(item *QDesignerWidgetDataBaseItemInterface) int {

	return (int)(C.QDesignerWidgetDataBaseInterface_virtualbase_indexOf(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnIndexOf(slot func(super func(item *QDesignerWidgetDataBaseItemInterface) int, item *QDesignerWidgetDataBaseItemInterface) int) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOf
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOf(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, item *C.QDesignerWidgetDataBaseItemInterface) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QDesignerWidgetDataBaseItemInterface) int, item *QDesignerWidgetDataBaseItemInterface) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerWidgetDataBaseItemInterface(item)

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_Insert(index int, item *QDesignerWidgetDataBaseItemInterface) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_insert(unsafe.Pointer(this.h), (C.int)(index), item.cPointer())

}
func (this *QDesignerWidgetDataBaseInterface) OnInsert(slot func(super func(index int, item *QDesignerWidgetDataBaseItemInterface), index int, item *QDesignerWidgetDataBaseItemInterface)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_insert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_insert
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_insert(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, index C.int, item *C.QDesignerWidgetDataBaseItemInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int, item *QDesignerWidgetDataBaseItemInterface), index int, item *QDesignerWidgetDataBaseItemInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := newQDesignerWidgetDataBaseItemInterface(item)

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_Insert, slotval1, slotval2)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_Append(item *QDesignerWidgetDataBaseItemInterface) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_append(unsafe.Pointer(this.h), item.cPointer())

}
func (this *QDesignerWidgetDataBaseInterface) OnAppend(slot func(super func(item *QDesignerWidgetDataBaseItemInterface), item *QDesignerWidgetDataBaseItemInterface)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_append(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_append
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_append(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, item *C.QDesignerWidgetDataBaseItemInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QDesignerWidgetDataBaseItemInterface), item *QDesignerWidgetDataBaseItemInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerWidgetDataBaseItemInterface(item)

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_Append, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_IndexOfObject(object *qt.QObject, resolveName bool) int {

	return (int)(C.QDesignerWidgetDataBaseInterface_virtualbase_indexOfObject(unsafe.Pointer(this.h), (*C.QObject)(object.UnsafePointer()), (C.bool)(resolveName)))

}
func (this *QDesignerWidgetDataBaseInterface) OnIndexOfObject(slot func(super func(object *qt.QObject, resolveName bool) int, object *qt.QObject, resolveName bool) int) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_indexOfObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, object *C.QObject, resolveName C.bool) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *qt.QObject, resolveName bool) int, object *qt.QObject, resolveName bool) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(object))

	slotval2 := (bool)(resolveName)

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_IndexOfObject, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_IndexOfClassName(className string, resolveName bool) int {
	className_ms := C.struct_miqt_string{}
	className_ms.data = C.CString(className)
	className_ms.len = C.size_t(len(className))
	defer C.free(unsafe.Pointer(className_ms.data))

	return (int)(C.QDesignerWidgetDataBaseInterface_virtualbase_indexOfClassName(unsafe.Pointer(this.h), className_ms, (C.bool)(resolveName)))

}
func (this *QDesignerWidgetDataBaseInterface) OnIndexOfClassName(slot func(super func(className string, resolveName bool) int, className string, resolveName bool) int) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_indexOfClassName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfClassName
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfClassName(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, className C.struct_miqt_string, resolveName C.bool) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(className string, resolveName bool) int, className string, resolveName bool) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var className_ms C.struct_miqt_string = className
	className_ret := C.GoStringN(className_ms.data, C.int(int64(className_ms.len)))
	C.free(unsafe.Pointer(className_ms.data))
	slotval1 := className_ret
	slotval2 := (bool)(resolveName)

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_IndexOfClassName, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_Core() *QDesignerFormEditorInterface {

	return newQDesignerFormEditorInterface(C.QDesignerWidgetDataBaseInterface_virtualbase_core(unsafe.Pointer(this.h)))

}
func (this *QDesignerWidgetDataBaseInterface) OnCore(slot func(super func() *QDesignerFormEditorInterface) *QDesignerFormEditorInterface) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_core
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_core(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QDesignerFormEditorInterface) *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_Core)

	return virtualReturn.cPointer()

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QDesignerWidgetDataBaseInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetDataBaseInterface) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_event
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_event(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QDesignerWidgetDataBaseInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetDataBaseInterface) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerWidgetDataBaseInterface) Delete() {
	C.QDesignerWidgetDataBaseInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerWidgetDataBaseInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerWidgetDataBaseInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

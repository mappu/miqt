package designer

/*

#include "gen_abstractwidgetdatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
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

// NewQDesignerWidgetDataBaseItemInterface constructs a new QDesignerWidgetDataBaseItemInterface object.
func NewQDesignerWidgetDataBaseItemInterface() *QDesignerWidgetDataBaseItemInterface {

	return newQDesignerWidgetDataBaseItemInterface(C.QDesignerWidgetDataBaseItemInterface_new())
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

func (this *QDesignerWidgetDataBaseItemInterface) Icon() *qt6.QIcon {
	_goptr := qt6.UnsafeNewQIcon(unsafe.Pointer(C.QDesignerWidgetDataBaseItemInterface_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerWidgetDataBaseItemInterface) SetIcon(icon *qt6.QIcon) {
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

func (this *QDesignerWidgetDataBaseItemInterface) SetDefaultPropertyValues(list []qt6.QVariant) {
	list_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (*C.QVariant)(list[i].UnsafePointer())
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(this.h, list_ma)
}

func (this *QDesignerWidgetDataBaseItemInterface) DefaultPropertyValues() []qt6.QVariant {
	var _ma C.struct_miqt_array = C.QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(this.h)
	_ret := make([]qt6.QVariant, int(_ma.len))
	_outCast := (*[0xffff]*C.QVariant)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_outCast[i]))
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}
func (this *QDesignerWidgetDataBaseItemInterface) OnName(slot func() string) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_name(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_name
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_name(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnSetName(slot func(name string)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setName(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setName
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setName(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, name C.struct_miqt_string) {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnGroup(slot func() string) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_group(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_group
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_group(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnSetGroup(slot func(group string)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setGroup
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setGroup(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, group C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(group string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var group_ms C.struct_miqt_string = group
	group_ret := C.GoStringN(group_ms.data, C.int(int64(group_ms.len)))
	C.free(unsafe.Pointer(group_ms.data))
	slotval1 := group_ret

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnToolTip(slot func() string) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_toolTip(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_toolTip
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_toolTip(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnSetToolTip(slot func(toolTip string)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setToolTip(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setToolTip
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setToolTip(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, toolTip C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(toolTip string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var toolTip_ms C.struct_miqt_string = toolTip
	toolTip_ret := C.GoStringN(toolTip_ms.data, C.int(int64(toolTip_ms.len)))
	C.free(unsafe.Pointer(toolTip_ms.data))
	slotval1 := toolTip_ret

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnWhatsThis(slot func() string) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_whatsThis(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_whatsThis
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_whatsThis(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnSetWhatsThis(slot func(whatsThis string)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setWhatsThis(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setWhatsThis
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setWhatsThis(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, whatsThis C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(whatsThis string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var whatsThis_ms C.struct_miqt_string = whatsThis
	whatsThis_ret := C.GoStringN(whatsThis_ms.data, C.int(int64(whatsThis_ms.len)))
	C.free(unsafe.Pointer(whatsThis_ms.data))
	slotval1 := whatsThis_ret

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnIncludeFile(slot func() string) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_includeFile(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_includeFile
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_includeFile(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnSetIncludeFile(slot func(includeFile string)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setIncludeFile(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIncludeFile
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIncludeFile(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, includeFile C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(includeFile string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var includeFile_ms C.struct_miqt_string = includeFile
	includeFile_ret := C.GoStringN(includeFile_ms.data, C.int(int64(includeFile_ms.len)))
	C.free(unsafe.Pointer(includeFile_ms.data))
	slotval1 := includeFile_ret

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnIcon(slot func() *qt6.QIcon) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_icon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_icon
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_icon(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt6.QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QIcon)(virtualReturn.UnsafePointer())

}
func (this *QDesignerWidgetDataBaseItemInterface) OnSetIcon(slot func(icon *qt6.QIcon)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setIcon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIcon
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIcon(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, icon *C.QIcon) {
	gofunc, ok := cgo.Handle(cb).Value().(func(icon *qt6.QIcon))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQIcon(unsafe.Pointer(icon))

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnIsCompat(slot func() bool) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_isCompat(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCompat
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCompat(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnSetCompat(slot func(compat bool)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setCompat(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCompat
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCompat(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, compat C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(compat bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(compat)

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnIsContainer(slot func() bool) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_isContainer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isContainer
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isContainer(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnSetContainer(slot func(container bool)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setContainer(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setContainer
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setContainer(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, container C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(container bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(container)

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnIsCustom(slot func() bool) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_isCustom(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCustom
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCustom(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnSetCustom(slot func(custom bool)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setCustom(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCustom
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCustom(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, custom C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(custom bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(custom)

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnPluginPath(slot func() string) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_pluginPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_pluginPath
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_pluginPath(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnSetPluginPath(slot func(path string)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setPluginPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPluginPath
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPluginPath(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, path C.struct_miqt_string) {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnIsPromoted(slot func() bool) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_isPromoted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isPromoted
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isPromoted(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnSetPromoted(slot func(b bool)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setPromoted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPromoted
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPromoted(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnExtends(slot func() string) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_extends(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_extends
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_extends(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_string {
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
func (this *QDesignerWidgetDataBaseItemInterface) OnSetExtends(slot func(s string)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setExtends(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setExtends
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setExtends(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, s C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(s string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var s_ms C.struct_miqt_string = s
	s_ret := C.GoStringN(s_ms.data, C.int(int64(s_ms.len)))
	C.free(unsafe.Pointer(s_ms.data))
	slotval1 := s_ret

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnSetDefaultPropertyValues(slot func(list []qt6.QVariant)) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_setDefaultPropertyValues(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t, list C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(list []qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var list_ma C.struct_miqt_array = list
	list_ret := make([]qt6.QVariant, int(list_ma.len))
	list_outCast := (*[0xffff]*C.QVariant)(unsafe.Pointer(list_ma.data)) // hey ya
	for i := 0; i < int(list_ma.len); i++ {
		list_lv_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(list_outCast[i]))
		list_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		list_ret[i] = *list_lv_goptr
	}
	slotval1 := list_ret

	gofunc(slotval1)

}
func (this *QDesignerWidgetDataBaseItemInterface) OnDefaultPropertyValues(slot func() []qt6.QVariant) {
	ok := C.QDesignerWidgetDataBaseItemInterface_override_virtual_defaultPropertyValues(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_defaultPropertyValues
func miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(self *C.QDesignerWidgetDataBaseItemInterface, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (*C.QVariant)(virtualReturn[i].UnsafePointer())
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

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
	*qt6.QObject
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
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
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
func NewQDesignerWidgetDataBaseInterface2(parent *qt6.QObject) *QDesignerWidgetDataBaseInterface {

	return newQDesignerWidgetDataBaseInterface(C.QDesignerWidgetDataBaseInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerWidgetDataBaseInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerWidgetDataBaseInterface_metaObject(this.h)))
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

func (this *QDesignerWidgetDataBaseInterface) IndexOfObject(object *qt6.QObject, resolveName bool) int {
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

func (this *QDesignerWidgetDataBaseInterface) IsContainer(object *qt6.QObject) bool {
	return (bool)(C.QDesignerWidgetDataBaseInterface_isContainer(this.h, (*C.QObject)(object.UnsafePointer())))
}

func (this *QDesignerWidgetDataBaseInterface) IsCustom(object *qt6.QObject) bool {
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

func (this *QDesignerWidgetDataBaseInterface) IsContainer2(object *qt6.QObject, resolveName bool) bool {
	return (bool)(C.QDesignerWidgetDataBaseInterface_isContainer2(this.h, (*C.QObject)(object.UnsafePointer()), (C.bool)(resolveName)))
}

func (this *QDesignerWidgetDataBaseInterface) IsCustom2(object *qt6.QObject, resolveName bool) bool {
	return (bool)(C.QDesignerWidgetDataBaseInterface_isCustom2(this.h, (*C.QObject)(object.UnsafePointer()), (C.bool)(resolveName)))
}

// Sender can only be called from a QDesignerWidgetDataBaseInterface that was directly constructed.
func (this *QDesignerWidgetDataBaseInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerWidgetDataBaseInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

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
func (this *QDesignerWidgetDataBaseInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

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

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_IndexOfObject(object *qt6.QObject, resolveName bool) int {

	return (int)(C.QDesignerWidgetDataBaseInterface_virtualbase_indexOfObject(unsafe.Pointer(this.h), (*C.QObject)(object.UnsafePointer()), (C.bool)(resolveName)))

}
func (this *QDesignerWidgetDataBaseInterface) OnIndexOfObject(slot func(super func(object *qt6.QObject, resolveName bool) int, object *qt6.QObject, resolveName bool) int) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_indexOfObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, object *C.QObject, resolveName C.bool) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *qt6.QObject, resolveName bool) int, object *qt6.QObject, resolveName bool) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

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

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerWidgetDataBaseInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetDataBaseInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_event
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_event(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerWidgetDataBaseInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerWidgetDataBaseInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerWidgetDataBaseInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerWidgetDataBaseInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerWidgetDataBaseInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerWidgetDataBaseInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerWidgetDataBaseInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify
func miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify(self *C.QDesignerWidgetDataBaseInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

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

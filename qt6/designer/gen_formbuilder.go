package designer

/*

#include "gen_formbuilder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFormBuilder struct {
	h *C.QFormBuilder
	*QAbstractFormBuilder
}

func (this *QFormBuilder) cPointer() *C.QFormBuilder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFormBuilder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFormBuilder constructs the type using only CGO pointers.
func newQFormBuilder(h *C.QFormBuilder) *QFormBuilder {
	if h == nil {
		return nil
	}
	var outptr_QAbstractFormBuilder *C.QAbstractFormBuilder = nil
	C.QFormBuilder_virtbase(h, &outptr_QAbstractFormBuilder)

	return &QFormBuilder{h: h,
		QAbstractFormBuilder: newQAbstractFormBuilder(outptr_QAbstractFormBuilder)}
}

// UnsafeNewQFormBuilder constructs the type using only unsafe pointers.
func UnsafeNewQFormBuilder(h unsafe.Pointer) *QFormBuilder {
	return newQFormBuilder((*C.QFormBuilder)(h))
}

// NewQFormBuilder constructs a new QFormBuilder object.
func NewQFormBuilder() *QFormBuilder {

	return newQFormBuilder(C.QFormBuilder_new())
}

func (this *QFormBuilder) PluginPaths() []string {
	var _ma C.struct_miqt_array = C.QFormBuilder_pluginPaths(this.h)
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

func (this *QFormBuilder) ClearPluginPaths() {
	C.QFormBuilder_clearPluginPaths(this.h)
}

func (this *QFormBuilder) AddPluginPath(pluginPath string) {
	pluginPath_ms := C.struct_miqt_string{}
	pluginPath_ms.data = C.CString(pluginPath)
	pluginPath_ms.len = C.size_t(len(pluginPath))
	defer C.free(unsafe.Pointer(pluginPath_ms.data))
	C.QFormBuilder_addPluginPath(this.h, pluginPath_ms)
}

func (this *QFormBuilder) SetPluginPath(pluginPaths []string) {
	pluginPaths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(pluginPaths))))
	defer C.free(unsafe.Pointer(pluginPaths_CArray))
	for i := range pluginPaths {
		pluginPaths_i_ms := C.struct_miqt_string{}
		pluginPaths_i_ms.data = C.CString(pluginPaths[i])
		pluginPaths_i_ms.len = C.size_t(len(pluginPaths[i]))
		defer C.free(unsafe.Pointer(pluginPaths_i_ms.data))
		pluginPaths_CArray[i] = pluginPaths_i_ms
	}
	pluginPaths_ma := C.struct_miqt_array{len: C.size_t(len(pluginPaths)), data: unsafe.Pointer(pluginPaths_CArray)}
	C.QFormBuilder_setPluginPath(this.h, pluginPaths_ma)
}

// ApplyPropertyInternally can only be called from a QFormBuilder that was directly constructed.
func (this *QFormBuilder) ApplyPropertyInternally(o *qt6.QObject, propertyName string, value *qt6.QVariant) bool {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFormBuilder_protectedbase_applyPropertyInternally(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QObject)(o.UnsafePointer()), propertyName_ms, (*C.QVariant)(value.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Reset can only be called from a QFormBuilder that was directly constructed.
func (this *QFormBuilder) Reset() {

	var _dynamic_cast_ok C.bool = false
	C.QFormBuilder_protectedbase_reset(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QFormBuilder) callVirtualBase_CreateWidget(widgetName string, parentWidget *qt6.QWidget, name string) *qt6.QWidget {
	widgetName_ms := C.struct_miqt_string{}
	widgetName_ms.data = C.CString(widgetName)
	widgetName_ms.len = C.size_t(len(widgetName))
	defer C.free(unsafe.Pointer(widgetName_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QFormBuilder_virtualbase_createWidget(unsafe.Pointer(this.h), widgetName_ms, (*C.QWidget)(parentWidget.UnsafePointer()), name_ms)))

}
func (this *QFormBuilder) OnCreateWidget(slot func(super func(widgetName string, parentWidget *qt6.QWidget, name string) *qt6.QWidget, widgetName string, parentWidget *qt6.QWidget, name string) *qt6.QWidget) {
	ok := C.QFormBuilder_override_virtual_createWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_createWidget
func miqt_exec_callback_QFormBuilder_createWidget(self *C.QFormBuilder, cb C.intptr_t, widgetName C.struct_miqt_string, parentWidget *C.QWidget, name C.struct_miqt_string) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widgetName string, parentWidget *qt6.QWidget, name string) *qt6.QWidget, widgetName string, parentWidget *qt6.QWidget, name string) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var widgetName_ms C.struct_miqt_string = widgetName
	widgetName_ret := C.GoStringN(widgetName_ms.data, C.int(int64(widgetName_ms.len)))
	C.free(unsafe.Pointer(widgetName_ms.data))
	slotval1 := widgetName_ret
	slotval2 := qt6.UnsafeNewQWidget(unsafe.Pointer(parentWidget))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval3 := name_ret

	virtualReturn := gofunc((&QFormBuilder{h: self}).callVirtualBase_CreateWidget, slotval1, slotval2, slotval3)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QFormBuilder) callVirtualBase_CreateLayout(layoutName string, parent *qt6.QObject, name string) *qt6.QLayout {
	layoutName_ms := C.struct_miqt_string{}
	layoutName_ms.data = C.CString(layoutName)
	layoutName_ms.len = C.size_t(len(layoutName))
	defer C.free(unsafe.Pointer(layoutName_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQLayout(unsafe.Pointer(C.QFormBuilder_virtualbase_createLayout(unsafe.Pointer(this.h), layoutName_ms, (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QFormBuilder) OnCreateLayout(slot func(super func(layoutName string, parent *qt6.QObject, name string) *qt6.QLayout, layoutName string, parent *qt6.QObject, name string) *qt6.QLayout) {
	ok := C.QFormBuilder_override_virtual_createLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_createLayout
func miqt_exec_callback_QFormBuilder_createLayout(self *C.QFormBuilder, cb C.intptr_t, layoutName C.struct_miqt_string, parent *C.QObject, name C.struct_miqt_string) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(layoutName string, parent *qt6.QObject, name string) *qt6.QLayout, layoutName string, parent *qt6.QObject, name string) *qt6.QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var layoutName_ms C.struct_miqt_string = layoutName
	layoutName_ret := C.GoStringN(layoutName_ms.data, C.int(int64(layoutName_ms.len)))
	C.free(unsafe.Pointer(layoutName_ms.data))
	slotval1 := layoutName_ret
	slotval2 := qt6.UnsafeNewQObject(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval3 := name_ret

	virtualReturn := gofunc((&QFormBuilder{h: self}).callVirtualBase_CreateLayout, slotval1, slotval2, slotval3)

	return (*C.QLayout)(virtualReturn.UnsafePointer())

}

func (this *QFormBuilder) callVirtualBase_UpdateCustomWidgets() {

	C.QFormBuilder_virtualbase_updateCustomWidgets(unsafe.Pointer(this.h))

}
func (this *QFormBuilder) OnUpdateCustomWidgets(slot func(super func())) {
	ok := C.QFormBuilder_override_virtual_updateCustomWidgets(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_updateCustomWidgets
func miqt_exec_callback_QFormBuilder_updateCustomWidgets(self *C.QFormBuilder, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFormBuilder{h: self}).callVirtualBase_UpdateCustomWidgets)

}

func (this *QFormBuilder) callVirtualBase_Load(dev *qt6.QIODevice, parentWidget *qt6.QWidget) *qt6.QWidget {

	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QFormBuilder_virtualbase_load(unsafe.Pointer(this.h), (*C.QIODevice)(dev.UnsafePointer()), (*C.QWidget)(parentWidget.UnsafePointer()))))

}
func (this *QFormBuilder) OnLoad(slot func(super func(dev *qt6.QIODevice, parentWidget *qt6.QWidget) *qt6.QWidget, dev *qt6.QIODevice, parentWidget *qt6.QWidget) *qt6.QWidget) {
	ok := C.QFormBuilder_override_virtual_load(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_load
func miqt_exec_callback_QFormBuilder_load(self *C.QFormBuilder, cb C.intptr_t, dev *C.QIODevice, parentWidget *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dev *qt6.QIODevice, parentWidget *qt6.QWidget) *qt6.QWidget, dev *qt6.QIODevice, parentWidget *qt6.QWidget) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQIODevice(unsafe.Pointer(dev))

	slotval2 := qt6.UnsafeNewQWidget(unsafe.Pointer(parentWidget))

	virtualReturn := gofunc((&QFormBuilder{h: self}).callVirtualBase_Load, slotval1, slotval2)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QFormBuilder) callVirtualBase_Save(dev *qt6.QIODevice, widget *qt6.QWidget) {

	C.QFormBuilder_virtualbase_save(unsafe.Pointer(this.h), (*C.QIODevice)(dev.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QFormBuilder) OnSave(slot func(super func(dev *qt6.QIODevice, widget *qt6.QWidget), dev *qt6.QIODevice, widget *qt6.QWidget)) {
	ok := C.QFormBuilder_override_virtual_save(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_save
func miqt_exec_callback_QFormBuilder_save(self *C.QFormBuilder, cb C.intptr_t, dev *C.QIODevice, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dev *qt6.QIODevice, widget *qt6.QWidget), dev *qt6.QIODevice, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQIODevice(unsafe.Pointer(dev))

	slotval2 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QFormBuilder{h: self}).callVirtualBase_Save, slotval1, slotval2)

}

func (this *QFormBuilder) callVirtualBase_AddMenuAction(action *qt6.QAction) {

	C.QFormBuilder_virtualbase_addMenuAction(unsafe.Pointer(this.h), (*C.QAction)(action.UnsafePointer()))

}
func (this *QFormBuilder) OnAddMenuAction(slot func(super func(action *qt6.QAction), action *qt6.QAction)) {
	ok := C.QFormBuilder_override_virtual_addMenuAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_addMenuAction
func miqt_exec_callback_QFormBuilder_addMenuAction(self *C.QFormBuilder, cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action *qt6.QAction), action *qt6.QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQAction(unsafe.Pointer(action))

	gofunc((&QFormBuilder{h: self}).callVirtualBase_AddMenuAction, slotval1)

}

func (this *QFormBuilder) callVirtualBase_CreateAction(parent *qt6.QObject, name string) *qt6.QAction {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQAction(unsafe.Pointer(C.QFormBuilder_virtualbase_createAction(unsafe.Pointer(this.h), (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QFormBuilder) OnCreateAction(slot func(super func(parent *qt6.QObject, name string) *qt6.QAction, parent *qt6.QObject, name string) *qt6.QAction) {
	ok := C.QFormBuilder_override_virtual_createAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_createAction
func miqt_exec_callback_QFormBuilder_createAction(self *C.QFormBuilder, cb C.intptr_t, parent *C.QObject, name C.struct_miqt_string) *C.QAction {
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

	virtualReturn := gofunc((&QFormBuilder{h: self}).callVirtualBase_CreateAction, slotval1, slotval2)

	return (*C.QAction)(virtualReturn.UnsafePointer())

}

func (this *QFormBuilder) callVirtualBase_CreateActionGroup(parent *qt6.QObject, name string) *qt6.QActionGroup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt6.UnsafeNewQActionGroup(unsafe.Pointer(C.QFormBuilder_virtualbase_createActionGroup(unsafe.Pointer(this.h), (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QFormBuilder) OnCreateActionGroup(slot func(super func(parent *qt6.QObject, name string) *qt6.QActionGroup, parent *qt6.QObject, name string) *qt6.QActionGroup) {
	ok := C.QFormBuilder_override_virtual_createActionGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_createActionGroup
func miqt_exec_callback_QFormBuilder_createActionGroup(self *C.QFormBuilder, cb C.intptr_t, parent *C.QObject, name C.struct_miqt_string) *C.QActionGroup {
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

	virtualReturn := gofunc((&QFormBuilder{h: self}).callVirtualBase_CreateActionGroup, slotval1, slotval2)

	return (*C.QActionGroup)(virtualReturn.UnsafePointer())

}

func (this *QFormBuilder) callVirtualBase_CheckProperty(obj *qt6.QObject, prop string) bool {
	prop_ms := C.struct_miqt_string{}
	prop_ms.data = C.CString(prop)
	prop_ms.len = C.size_t(len(prop))
	defer C.free(unsafe.Pointer(prop_ms.data))

	return (bool)(C.QFormBuilder_virtualbase_checkProperty(unsafe.Pointer(this.h), (*C.QObject)(obj.UnsafePointer()), prop_ms))

}
func (this *QFormBuilder) OnCheckProperty(slot func(super func(obj *qt6.QObject, prop string) bool, obj *qt6.QObject, prop string) bool) {
	ok := C.QFormBuilder_override_virtual_checkProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormBuilder_checkProperty
func miqt_exec_callback_QFormBuilder_checkProperty(self *C.QFormBuilder, cb C.intptr_t, obj *C.QObject, prop C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(obj *qt6.QObject, prop string) bool, obj *qt6.QObject, prop string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(obj))

	var prop_ms C.struct_miqt_string = prop
	prop_ret := C.GoStringN(prop_ms.data, C.int(int64(prop_ms.len)))
	C.free(unsafe.Pointer(prop_ms.data))
	slotval2 := prop_ret

	virtualReturn := gofunc((&QFormBuilder{h: self}).callVirtualBase_CheckProperty, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QFormBuilder) Delete() {
	C.QFormBuilder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFormBuilder) GoGC() {
	runtime.SetFinalizer(this, func(this *QFormBuilder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

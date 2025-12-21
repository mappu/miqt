package designer

/*

#include "gen_abstractformbuilder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractFormBuilder struct {
	h *C.QAbstractFormBuilder
}

func (this *QAbstractFormBuilder) cPointer() *C.QAbstractFormBuilder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractFormBuilder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractFormBuilder constructs the type using only CGO pointers.
func newQAbstractFormBuilder(h *C.QAbstractFormBuilder) *QAbstractFormBuilder {
	if h == nil {
		return nil
	}

	return &QAbstractFormBuilder{h: h}
}

// UnsafeNewQAbstractFormBuilder constructs the type using only unsafe pointers.
func UnsafeNewQAbstractFormBuilder(h unsafe.Pointer) *QAbstractFormBuilder {
	return newQAbstractFormBuilder((*C.QAbstractFormBuilder)(h))
}

// NewQAbstractFormBuilder constructs a new QAbstractFormBuilder object.
func NewQAbstractFormBuilder() *QAbstractFormBuilder {

	return newQAbstractFormBuilder(C.QAbstractFormBuilder_new())
}

func (this *QAbstractFormBuilder) WorkingDirectory() *qt.QDir {
	_goptr := qt.UnsafeNewQDir(unsafe.Pointer(C.QAbstractFormBuilder_workingDirectory(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractFormBuilder) SetWorkingDirectory(directory *qt.QDir) {
	C.QAbstractFormBuilder_setWorkingDirectory(this.h, (*C.QDir)(directory.UnsafePointer()))
}

func (this *QAbstractFormBuilder) Load(dev *qt.QIODevice, parentWidget *qt.QWidget) *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QAbstractFormBuilder_load(this.h, (*C.QIODevice)(dev.UnsafePointer()), (*C.QWidget)(parentWidget.UnsafePointer()))))
}

func (this *QAbstractFormBuilder) Save(dev *qt.QIODevice, widget *qt.QWidget) {
	C.QAbstractFormBuilder_save(this.h, (*C.QIODevice)(dev.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QAbstractFormBuilder) ErrorString() string {
	var _ms C.struct_miqt_string = C.QAbstractFormBuilder_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ApplyPropertyInternally can only be called from a QAbstractFormBuilder that was directly constructed.
func (this *QAbstractFormBuilder) ApplyPropertyInternally(o *qt.QObject, propertyName string, value *qt.QVariant) bool {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractFormBuilder_protectedbase_applyPropertyInternally(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QObject)(o.UnsafePointer()), propertyName_ms, (*C.QVariant)(value.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Reset can only be called from a QAbstractFormBuilder that was directly constructed.
func (this *QAbstractFormBuilder) Reset() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractFormBuilder_protectedbase_reset(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IconPaths can only be called from a QAbstractFormBuilder that was directly constructed.
func (this *QAbstractFormBuilder) IconPaths(param1 *qt.QIcon) struct {
	First  string
	Second string
} {

	var _dynamic_cast_ok C.bool = false
	var _mm C.struct_miqt_map = C.QAbstractFormBuilder_protectedbase_iconPaths(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QIcon)(param1.UnsafePointer()))
	_First_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	var _first_ms C.struct_miqt_string = _First_CArray[0]
	_first_ret := C.GoStringN(_first_ms.data, C.int(int64(_first_ms.len)))
	C.free(unsafe.Pointer(_first_ms.data))
	_entry_First := _first_ret
	var _second_ms C.struct_miqt_string = _Second_CArray[0]
	_second_ret := C.GoStringN(_second_ms.data, C.int(int64(_second_ms.len)))
	C.free(unsafe.Pointer(_second_ms.data))
	_entry_Second := _second_ret
	_method_ret := struct {
		First  string
		Second string
	}{First: _entry_First, Second: _entry_Second}

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// PixmapPaths can only be called from a QAbstractFormBuilder that was directly constructed.
func (this *QAbstractFormBuilder) PixmapPaths(param1 *qt.QPixmap) struct {
	First  string
	Second string
} {

	var _dynamic_cast_ok C.bool = false
	var _mm C.struct_miqt_map = C.QAbstractFormBuilder_protectedbase_pixmapPaths(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPixmap)(param1.UnsafePointer()))
	_First_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	var _first_ms C.struct_miqt_string = _First_CArray[0]
	_first_ret := C.GoStringN(_first_ms.data, C.int(int64(_first_ms.len)))
	C.free(unsafe.Pointer(_first_ms.data))
	_entry_First := _first_ret
	var _second_ms C.struct_miqt_string = _Second_CArray[0]
	_second_ret := C.GoStringN(_second_ms.data, C.int(int64(_second_ms.len)))
	C.free(unsafe.Pointer(_second_ms.data))
	_entry_Second := _second_ret
	_method_ret := struct {
		First  string
		Second string
	}{First: _entry_First, Second: _entry_Second}

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAbstractFormBuilder) callVirtualBase_Load(dev *qt.QIODevice, parentWidget *qt.QWidget) *qt.QWidget {

	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QAbstractFormBuilder_virtualbase_load(unsafe.Pointer(this.h), (*C.QIODevice)(dev.UnsafePointer()), (*C.QWidget)(parentWidget.UnsafePointer()))))

}
func (this *QAbstractFormBuilder) OnLoad(slot func(super func(dev *qt.QIODevice, parentWidget *qt.QWidget) *qt.QWidget, dev *qt.QIODevice, parentWidget *qt.QWidget) *qt.QWidget) {
	ok := C.QAbstractFormBuilder_override_virtual_load(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_load
func miqt_exec_callback_QAbstractFormBuilder_load(self *C.QAbstractFormBuilder, cb C.intptr_t, dev *C.QIODevice, parentWidget *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dev *qt.QIODevice, parentWidget *qt.QWidget) *qt.QWidget, dev *qt.QIODevice, parentWidget *qt.QWidget) *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQIODevice(unsafe.Pointer(dev))

	slotval2 := qt.UnsafeNewQWidget(unsafe.Pointer(parentWidget))

	virtualReturn := gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_Load, slotval1, slotval2)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QAbstractFormBuilder) callVirtualBase_Save(dev *qt.QIODevice, widget *qt.QWidget) {

	C.QAbstractFormBuilder_virtualbase_save(unsafe.Pointer(this.h), (*C.QIODevice)(dev.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QAbstractFormBuilder) OnSave(slot func(super func(dev *qt.QIODevice, widget *qt.QWidget), dev *qt.QIODevice, widget *qt.QWidget)) {
	ok := C.QAbstractFormBuilder_override_virtual_save(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_save
func miqt_exec_callback_QAbstractFormBuilder_save(self *C.QAbstractFormBuilder, cb C.intptr_t, dev *C.QIODevice, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dev *qt.QIODevice, widget *qt.QWidget), dev *qt.QIODevice, widget *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQIODevice(unsafe.Pointer(dev))

	slotval2 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_Save, slotval1, slotval2)

}

func (this *QAbstractFormBuilder) callVirtualBase_AddMenuAction(action *qt.QAction) {

	C.QAbstractFormBuilder_virtualbase_addMenuAction(unsafe.Pointer(this.h), (*C.QAction)(action.UnsafePointer()))

}
func (this *QAbstractFormBuilder) OnAddMenuAction(slot func(super func(action *qt.QAction), action *qt.QAction)) {
	ok := C.QAbstractFormBuilder_override_virtual_addMenuAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_addMenuAction
func miqt_exec_callback_QAbstractFormBuilder_addMenuAction(self *C.QAbstractFormBuilder, cb C.intptr_t, action *C.QAction) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action *qt.QAction), action *qt.QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQAction(unsafe.Pointer(action))

	gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_AddMenuAction, slotval1)

}

func (this *QAbstractFormBuilder) callVirtualBase_CreateWidget(widgetName string, parentWidget *qt.QWidget, name string) *qt.QWidget {
	widgetName_ms := C.struct_miqt_string{}
	widgetName_ms.data = C.CString(widgetName)
	widgetName_ms.len = C.size_t(len(widgetName))
	defer C.free(unsafe.Pointer(widgetName_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QAbstractFormBuilder_virtualbase_createWidget(unsafe.Pointer(this.h), widgetName_ms, (*C.QWidget)(parentWidget.UnsafePointer()), name_ms)))

}
func (this *QAbstractFormBuilder) OnCreateWidget(slot func(super func(widgetName string, parentWidget *qt.QWidget, name string) *qt.QWidget, widgetName string, parentWidget *qt.QWidget, name string) *qt.QWidget) {
	ok := C.QAbstractFormBuilder_override_virtual_createWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_createWidget
func miqt_exec_callback_QAbstractFormBuilder_createWidget(self *C.QAbstractFormBuilder, cb C.intptr_t, widgetName C.struct_miqt_string, parentWidget *C.QWidget, name C.struct_miqt_string) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widgetName string, parentWidget *qt.QWidget, name string) *qt.QWidget, widgetName string, parentWidget *qt.QWidget, name string) *qt.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var widgetName_ms C.struct_miqt_string = widgetName
	widgetName_ret := C.GoStringN(widgetName_ms.data, C.int(int64(widgetName_ms.len)))
	C.free(unsafe.Pointer(widgetName_ms.data))
	slotval1 := widgetName_ret
	slotval2 := qt.UnsafeNewQWidget(unsafe.Pointer(parentWidget))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval3 := name_ret

	virtualReturn := gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_CreateWidget, slotval1, slotval2, slotval3)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QAbstractFormBuilder) callVirtualBase_CreateLayout(layoutName string, parent *qt.QObject, name string) *qt.QLayout {
	layoutName_ms := C.struct_miqt_string{}
	layoutName_ms.data = C.CString(layoutName)
	layoutName_ms.len = C.size_t(len(layoutName))
	defer C.free(unsafe.Pointer(layoutName_ms.data))
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt.UnsafeNewQLayout(unsafe.Pointer(C.QAbstractFormBuilder_virtualbase_createLayout(unsafe.Pointer(this.h), layoutName_ms, (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QAbstractFormBuilder) OnCreateLayout(slot func(super func(layoutName string, parent *qt.QObject, name string) *qt.QLayout, layoutName string, parent *qt.QObject, name string) *qt.QLayout) {
	ok := C.QAbstractFormBuilder_override_virtual_createLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_createLayout
func miqt_exec_callback_QAbstractFormBuilder_createLayout(self *C.QAbstractFormBuilder, cb C.intptr_t, layoutName C.struct_miqt_string, parent *C.QObject, name C.struct_miqt_string) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(layoutName string, parent *qt.QObject, name string) *qt.QLayout, layoutName string, parent *qt.QObject, name string) *qt.QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var layoutName_ms C.struct_miqt_string = layoutName
	layoutName_ret := C.GoStringN(layoutName_ms.data, C.int(int64(layoutName_ms.len)))
	C.free(unsafe.Pointer(layoutName_ms.data))
	slotval1 := layoutName_ret
	slotval2 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval3 := name_ret

	virtualReturn := gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_CreateLayout, slotval1, slotval2, slotval3)

	return (*C.QLayout)(virtualReturn.UnsafePointer())

}

func (this *QAbstractFormBuilder) callVirtualBase_CreateAction(parent *qt.QObject, name string) *qt.QAction {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt.UnsafeNewQAction(unsafe.Pointer(C.QAbstractFormBuilder_virtualbase_createAction(unsafe.Pointer(this.h), (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QAbstractFormBuilder) OnCreateAction(slot func(super func(parent *qt.QObject, name string) *qt.QAction, parent *qt.QObject, name string) *qt.QAction) {
	ok := C.QAbstractFormBuilder_override_virtual_createAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_createAction
func miqt_exec_callback_QAbstractFormBuilder_createAction(self *C.QAbstractFormBuilder, cb C.intptr_t, parent *C.QObject, name C.struct_miqt_string) *C.QAction {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QObject, name string) *qt.QAction, parent *qt.QObject, name string) *qt.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval2 := name_ret

	virtualReturn := gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_CreateAction, slotval1, slotval2)

	return (*C.QAction)(virtualReturn.UnsafePointer())

}

func (this *QAbstractFormBuilder) callVirtualBase_CreateActionGroup(parent *qt.QObject, name string) *qt.QActionGroup {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return qt.UnsafeNewQActionGroup(unsafe.Pointer(C.QAbstractFormBuilder_virtualbase_createActionGroup(unsafe.Pointer(this.h), (*C.QObject)(parent.UnsafePointer()), name_ms)))

}
func (this *QAbstractFormBuilder) OnCreateActionGroup(slot func(super func(parent *qt.QObject, name string) *qt.QActionGroup, parent *qt.QObject, name string) *qt.QActionGroup) {
	ok := C.QAbstractFormBuilder_override_virtual_createActionGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_createActionGroup
func miqt_exec_callback_QAbstractFormBuilder_createActionGroup(self *C.QAbstractFormBuilder, cb C.intptr_t, parent *C.QObject, name C.struct_miqt_string) *C.QActionGroup {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt.QObject, name string) *qt.QActionGroup, parent *qt.QObject, name string) *qt.QActionGroup)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval2 := name_ret

	virtualReturn := gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_CreateActionGroup, slotval1, slotval2)

	return (*C.QActionGroup)(virtualReturn.UnsafePointer())

}

func (this *QAbstractFormBuilder) callVirtualBase_CheckProperty(obj *qt.QObject, prop string) bool {
	prop_ms := C.struct_miqt_string{}
	prop_ms.data = C.CString(prop)
	prop_ms.len = C.size_t(len(prop))
	defer C.free(unsafe.Pointer(prop_ms.data))

	return (bool)(C.QAbstractFormBuilder_virtualbase_checkProperty(unsafe.Pointer(this.h), (*C.QObject)(obj.UnsafePointer()), prop_ms))

}
func (this *QAbstractFormBuilder) OnCheckProperty(slot func(super func(obj *qt.QObject, prop string) bool, obj *qt.QObject, prop string) bool) {
	ok := C.QAbstractFormBuilder_override_virtual_checkProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFormBuilder_checkProperty
func miqt_exec_callback_QAbstractFormBuilder_checkProperty(self *C.QAbstractFormBuilder, cb C.intptr_t, obj *C.QObject, prop C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(obj *qt.QObject, prop string) bool, obj *qt.QObject, prop string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(obj))

	var prop_ms C.struct_miqt_string = prop
	prop_ret := C.GoStringN(prop_ms.data, C.int(int64(prop_ms.len)))
	C.free(unsafe.Pointer(prop_ms.data))
	slotval2 := prop_ret

	virtualReturn := gofunc((&QAbstractFormBuilder{h: self}).callVirtualBase_CheckProperty, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QAbstractFormBuilder) Delete() {
	C.QAbstractFormBuilder_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractFormBuilder) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractFormBuilder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

package uiplugin

/*

#include "gen_customwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/designer"
	"runtime"
	"unsafe"
)

type QDesignerCustomWidgetInterface struct {
	h  *C.QDesignerCustomWidgetInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDesignerCustomWidgetInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDesignerCustomWidgetInterface) cPointer() *C.QDesignerCustomWidgetInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerCustomWidgetInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerCustomWidgetInterface constructs the type using only CGO pointers.
func newQDesignerCustomWidgetInterface(h *C.QDesignerCustomWidgetInterface) *QDesignerCustomWidgetInterface {
	if h == nil {
		return nil
	}

	return &QDesignerCustomWidgetInterface{h: h}
}

// UnsafeNewQDesignerCustomWidgetInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerCustomWidgetInterface(h unsafe.Pointer) *QDesignerCustomWidgetInterface {
	return newQDesignerCustomWidgetInterface((*C.QDesignerCustomWidgetInterface)(h))
}

func (this *QDesignerCustomWidgetInterface) Name() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) Group() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_group(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) ToolTip() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) WhatsThis() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) IncludeFile() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_includeFile(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) Icon() *qt6.QIcon {
	defer runtime.KeepAlive(this)
	_goptr := qt6.UnsafeNewQIcon(unsafe.Pointer(C.QDesignerCustomWidgetInterface_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerCustomWidgetInterface) IsContainer() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerCustomWidgetInterface_isContainer(this.h))
}

func (this *QDesignerCustomWidgetInterface) CreateWidget(parent *qt6.QWidget) *qt6.QWidget {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerCustomWidgetInterface_createWidget(this.h, (*C.QWidget)(parent.UnsafePointer()))))
}

func (this *QDesignerCustomWidgetInterface) IsInitialized() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QDesignerCustomWidgetInterface_isInitialized(this.h))
}

func (this *QDesignerCustomWidgetInterface) Initialize(core *designer.QDesignerFormEditorInterface) {
	defer runtime.KeepAlive(this)
	C.QDesignerCustomWidgetInterface_initialize(this.h, (*C.QDesignerFormEditorInterface)(core.UnsafePointer()))
}

func (this *QDesignerCustomWidgetInterface) DomXml() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_domXml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) CodeTemplate() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_codeTemplate(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDesignerCustomWidgetInterface) Delete() {
	C.QDesignerCustomWidgetInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDesignerCustomWidgetInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDesignerCustomWidgetInterface_delete((*C.QDesignerCustomWidgetInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDesignerCustomWidgetCollectionInterface struct {
	h  *C.QDesignerCustomWidgetCollectionInterface
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDesignerCustomWidgetCollectionInterface) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QDesignerCustomWidgetCollectionInterface) cPointer() *C.QDesignerCustomWidgetCollectionInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerCustomWidgetCollectionInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerCustomWidgetCollectionInterface constructs the type using only CGO pointers.
func newQDesignerCustomWidgetCollectionInterface(h *C.QDesignerCustomWidgetCollectionInterface) *QDesignerCustomWidgetCollectionInterface {
	if h == nil {
		return nil
	}

	return &QDesignerCustomWidgetCollectionInterface{h: h}
}

// UnsafeNewQDesignerCustomWidgetCollectionInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerCustomWidgetCollectionInterface(h unsafe.Pointer) *QDesignerCustomWidgetCollectionInterface {
	return newQDesignerCustomWidgetCollectionInterface((*C.QDesignerCustomWidgetCollectionInterface)(h))
}

func (this *QDesignerCustomWidgetCollectionInterface) OperatorAssign(param1 *QDesignerCustomWidgetCollectionInterface) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDesignerCustomWidgetCollectionInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerCustomWidgetCollectionInterface) Delete() {
	C.QDesignerCustomWidgetCollectionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDesignerCustomWidgetCollectionInterface) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDesignerCustomWidgetCollectionInterface_delete((*C.QDesignerCustomWidgetCollectionInterface)(gc[0]))
	})
	this.miqtSetGC(gc)
}

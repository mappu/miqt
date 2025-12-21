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
	h *C.QDesignerCustomWidgetInterface
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
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) Group() string {
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_group(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) ToolTip() string {
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) IncludeFile() string {
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_includeFile(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) Icon() *qt6.QIcon {
	_goptr := qt6.UnsafeNewQIcon(unsafe.Pointer(C.QDesignerCustomWidgetInterface_icon(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerCustomWidgetInterface) IsContainer() bool {
	return (bool)(C.QDesignerCustomWidgetInterface_isContainer(this.h))
}

func (this *QDesignerCustomWidgetInterface) CreateWidget(parent *qt6.QWidget) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerCustomWidgetInterface_createWidget(this.h, (*C.QWidget)(parent.UnsafePointer()))))
}

func (this *QDesignerCustomWidgetInterface) IsInitialized() bool {
	return (bool)(C.QDesignerCustomWidgetInterface_isInitialized(this.h))
}

func (this *QDesignerCustomWidgetInterface) Initialize(core *designer.QDesignerFormEditorInterface) {
	C.QDesignerCustomWidgetInterface_initialize(this.h, (*C.QDesignerFormEditorInterface)(core.UnsafePointer()))
}

func (this *QDesignerCustomWidgetInterface) DomXml() string {
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_domXml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerCustomWidgetInterface) CodeTemplate() string {
	var _ms C.struct_miqt_string = C.QDesignerCustomWidgetInterface_codeTemplate(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDesignerCustomWidgetInterface) Delete() {
	C.QDesignerCustomWidgetInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerCustomWidgetInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerCustomWidgetInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDesignerCustomWidgetCollectionInterface struct {
	h *C.QDesignerCustomWidgetCollectionInterface
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
	C.QDesignerCustomWidgetCollectionInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDesignerCustomWidgetCollectionInterface) Delete() {
	C.QDesignerCustomWidgetCollectionInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerCustomWidgetCollectionInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerCustomWidgetCollectionInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

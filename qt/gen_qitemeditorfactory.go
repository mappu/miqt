package qt

/*

#include "gen_qitemeditorfactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QItemEditorCreatorBase struct {
	h *C.QItemEditorCreatorBase
}

func (this *QItemEditorCreatorBase) cPointer() *C.QItemEditorCreatorBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QItemEditorCreatorBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQItemEditorCreatorBase(h *C.QItemEditorCreatorBase) *QItemEditorCreatorBase {
	if h == nil {
		return nil
	}
	return &QItemEditorCreatorBase{h: h}
}

func UnsafeNewQItemEditorCreatorBase(h unsafe.Pointer) *QItemEditorCreatorBase {
	return newQItemEditorCreatorBase((*C.QItemEditorCreatorBase)(h))
}

func (this *QItemEditorCreatorBase) CreateWidget(parent *QWidget) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QItemEditorCreatorBase_CreateWidget(this.h, parent.cPointer())))
}

func (this *QItemEditorCreatorBase) ValuePropertyName() *QByteArray {
	_ret := C.QItemEditorCreatorBase_ValuePropertyName(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemEditorCreatorBase) OperatorAssign(param1 *QItemEditorCreatorBase) {
	C.QItemEditorCreatorBase_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QItemEditorCreatorBase) Delete() {
	C.QItemEditorCreatorBase_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemEditorCreatorBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemEditorCreatorBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QItemEditorFactory struct {
	h *C.QItemEditorFactory
}

func (this *QItemEditorFactory) cPointer() *C.QItemEditorFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QItemEditorFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQItemEditorFactory(h *C.QItemEditorFactory) *QItemEditorFactory {
	if h == nil {
		return nil
	}
	return &QItemEditorFactory{h: h}
}

func UnsafeNewQItemEditorFactory(h unsafe.Pointer) *QItemEditorFactory {
	return newQItemEditorFactory((*C.QItemEditorFactory)(h))
}

// NewQItemEditorFactory constructs a new QItemEditorFactory object.
func NewQItemEditorFactory() *QItemEditorFactory {
	ret := C.QItemEditorFactory_new()
	return newQItemEditorFactory(ret)
}

// NewQItemEditorFactory2 constructs a new QItemEditorFactory object.
func NewQItemEditorFactory2(param1 *QItemEditorFactory) *QItemEditorFactory {
	ret := C.QItemEditorFactory_new2(param1.cPointer())
	return newQItemEditorFactory(ret)
}

func (this *QItemEditorFactory) CreateEditor(userType int, parent *QWidget) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QItemEditorFactory_CreateEditor(this.h, (C.int)(userType), parent.cPointer())))
}

func (this *QItemEditorFactory) ValuePropertyName(userType int) *QByteArray {
	_ret := C.QItemEditorFactory_ValuePropertyName(this.h, (C.int)(userType))
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemEditorFactory) RegisterEditor(userType int, creator *QItemEditorCreatorBase) {
	C.QItemEditorFactory_RegisterEditor(this.h, (C.int)(userType), creator.cPointer())
}

func QItemEditorFactory_DefaultFactory() *QItemEditorFactory {
	return UnsafeNewQItemEditorFactory(unsafe.Pointer(C.QItemEditorFactory_DefaultFactory()))
}

func QItemEditorFactory_SetDefaultFactory(factory *QItemEditorFactory) {
	C.QItemEditorFactory_SetDefaultFactory(factory.cPointer())
}

// Delete this object from C++ memory.
func (this *QItemEditorFactory) Delete() {
	C.QItemEditorFactory_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemEditorFactory) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemEditorFactory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

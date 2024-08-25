package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQItemEditorCreatorBase(h *C.QItemEditorCreatorBase) *QItemEditorCreatorBase {
	return &QItemEditorCreatorBase{h: h}
}

func newQItemEditorCreatorBase_U(h unsafe.Pointer) *QItemEditorCreatorBase {
	return newQItemEditorCreatorBase((*C.QItemEditorCreatorBase)(h))
}

func (this *QItemEditorCreatorBase) CreateWidget(parent *QWidget) *QWidget {
	ret := C.QItemEditorCreatorBase_CreateWidget(this.h, parent.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QItemEditorCreatorBase) ValuePropertyName() *QByteArray {
	ret := C.QItemEditorCreatorBase_ValuePropertyName(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QItemEditorCreatorBase) OperatorAssign(param1 *QItemEditorCreatorBase) {
	C.QItemEditorCreatorBase_OperatorAssign(this.h, param1.cPointer())
}

func (this *QItemEditorCreatorBase) Delete() {
	C.QItemEditorCreatorBase_Delete(this.h)
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

func newQItemEditorFactory(h *C.QItemEditorFactory) *QItemEditorFactory {
	return &QItemEditorFactory{h: h}
}

func newQItemEditorFactory_U(h unsafe.Pointer) *QItemEditorFactory {
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
	ret := C.QItemEditorFactory_CreateEditor(this.h, (C.int)(userType), parent.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QItemEditorFactory) ValuePropertyName(userType int) *QByteArray {
	ret := C.QItemEditorFactory_ValuePropertyName(this.h, (C.int)(userType))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QItemEditorFactory) RegisterEditor(userType int, creator *QItemEditorCreatorBase) {
	C.QItemEditorFactory_RegisterEditor(this.h, (C.int)(userType), creator.cPointer())
}

func QItemEditorFactory_DefaultFactory() *QItemEditorFactory {
	ret := C.QItemEditorFactory_DefaultFactory()
	return newQItemEditorFactory_U(unsafe.Pointer(ret))
}

func QItemEditorFactory_SetDefaultFactory(factory *QItemEditorFactory) {
	C.QItemEditorFactory_SetDefaultFactory(factory.cPointer())
}

func (this *QItemEditorFactory) Delete() {
	C.QItemEditorFactory_Delete(this.h)
}

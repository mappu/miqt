package designer

/*

#include "gen_abstractnewformwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerNewFormWidgetInterface struct {
	h *C.QDesignerNewFormWidgetInterface
	*qt.QWidget
}

func (this *QDesignerNewFormWidgetInterface) cPointer() *C.QDesignerNewFormWidgetInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerNewFormWidgetInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerNewFormWidgetInterface constructs the type using only CGO pointers.
func newQDesignerNewFormWidgetInterface(h *C.QDesignerNewFormWidgetInterface) *QDesignerNewFormWidgetInterface {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDesignerNewFormWidgetInterface_virtbase(h, &outptr_QWidget)

	return &QDesignerNewFormWidgetInterface{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQDesignerNewFormWidgetInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerNewFormWidgetInterface(h unsafe.Pointer) *QDesignerNewFormWidgetInterface {
	return newQDesignerNewFormWidgetInterface((*C.QDesignerNewFormWidgetInterface)(h))
}

func (this *QDesignerNewFormWidgetInterface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerNewFormWidgetInterface_metaObject(this.h)))
}

func (this *QDesignerNewFormWidgetInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerNewFormWidgetInterface_metacast(this.h, param1_Cstring))
}

func QDesignerNewFormWidgetInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerNewFormWidgetInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerNewFormWidgetInterface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerNewFormWidgetInterface_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerNewFormWidgetInterface) HasCurrentTemplate() bool {
	return (bool)(C.QDesignerNewFormWidgetInterface_hasCurrentTemplate(this.h))
}

func QDesignerNewFormWidgetInterface_CreateNewFormWidget(core *QDesignerFormEditorInterface) *QDesignerNewFormWidgetInterface {
	return newQDesignerNewFormWidgetInterface(C.QDesignerNewFormWidgetInterface_createNewFormWidget(core.cPointer()))
}

func (this *QDesignerNewFormWidgetInterface) TemplateActivated() {
	C.QDesignerNewFormWidgetInterface_templateActivated(this.h)
}
func (this *QDesignerNewFormWidgetInterface) OnTemplateActivated(slot func()) {
	C.QDesignerNewFormWidgetInterface_connect_templateActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerNewFormWidgetInterface_templateActivated
func miqt_exec_callback_QDesignerNewFormWidgetInterface_templateActivated(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDesignerNewFormWidgetInterface) CurrentTemplateChanged(templateSelected bool) {
	C.QDesignerNewFormWidgetInterface_currentTemplateChanged(this.h, (C.bool)(templateSelected))
}
func (this *QDesignerNewFormWidgetInterface) OnCurrentTemplateChanged(slot func(templateSelected bool)) {
	C.QDesignerNewFormWidgetInterface_connect_currentTemplateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerNewFormWidgetInterface_currentTemplateChanged
func miqt_exec_callback_QDesignerNewFormWidgetInterface_currentTemplateChanged(cb C.intptr_t, templateSelected C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(templateSelected bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(templateSelected)

	gofunc(slotval1)
}

func QDesignerNewFormWidgetInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerNewFormWidgetInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerNewFormWidgetInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerNewFormWidgetInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerNewFormWidgetInterface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerNewFormWidgetInterface_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerNewFormWidgetInterface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerNewFormWidgetInterface_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerNewFormWidgetInterface_CreateNewFormWidget2(core *QDesignerFormEditorInterface, parent *qt.QWidget) *QDesignerNewFormWidgetInterface {
	return newQDesignerNewFormWidgetInterface(C.QDesignerNewFormWidgetInterface_createNewFormWidget2(core.cPointer(), (*C.QWidget)(parent.UnsafePointer())))
}

// Delete this object from C++ memory.
func (this *QDesignerNewFormWidgetInterface) Delete() {
	C.QDesignerNewFormWidgetInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerNewFormWidgetInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerNewFormWidgetInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

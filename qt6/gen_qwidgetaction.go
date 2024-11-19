package qt6

/*

#include "gen_qwidgetaction.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWidgetAction struct {
	h          *C.QWidgetAction
	isSubclass bool
	*QAction
}

func (this *QWidgetAction) cPointer() *C.QWidgetAction {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWidgetAction) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWidgetAction constructs the type using only CGO pointers.
func newQWidgetAction(h *C.QWidgetAction, h_QAction *C.QAction, h_QObject *C.QObject) *QWidgetAction {
	if h == nil {
		return nil
	}
	return &QWidgetAction{h: h,
		QAction: newQAction(h_QAction, h_QObject)}
}

// UnsafeNewQWidgetAction constructs the type using only unsafe pointers.
func UnsafeNewQWidgetAction(h unsafe.Pointer, h_QAction unsafe.Pointer, h_QObject unsafe.Pointer) *QWidgetAction {
	if h == nil {
		return nil
	}

	return &QWidgetAction{h: (*C.QWidgetAction)(h),
		QAction: UnsafeNewQAction(h_QAction, h_QObject)}
}

// NewQWidgetAction constructs a new QWidgetAction object.
func NewQWidgetAction(parent *QObject) *QWidgetAction {
	var outptr_QWidgetAction *C.QWidgetAction = nil
	var outptr_QAction *C.QAction = nil
	var outptr_QObject *C.QObject = nil

	C.QWidgetAction_new(parent.cPointer(), &outptr_QWidgetAction, &outptr_QAction, &outptr_QObject)
	ret := newQWidgetAction(outptr_QWidgetAction, outptr_QAction, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QWidgetAction) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QWidgetAction_MetaObject(this.h)))
}

func (this *QWidgetAction) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWidgetAction_Metacast(this.h, param1_Cstring))
}

func QWidgetAction_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWidgetAction_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidgetAction) SetDefaultWidget(w *QWidget) {
	C.QWidgetAction_SetDefaultWidget(this.h, w.cPointer())
}

func (this *QWidgetAction) DefaultWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QWidgetAction_DefaultWidget(this.h)), nil, nil)
}

func (this *QWidgetAction) RequestWidget(parent *QWidget) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QWidgetAction_RequestWidget(this.h, parent.cPointer())), nil, nil)
}

func (this *QWidgetAction) ReleaseWidget(widget *QWidget) {
	C.QWidgetAction_ReleaseWidget(this.h, widget.cPointer())
}

func QWidgetAction_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidgetAction_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidgetAction_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidgetAction_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidgetAction) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QWidgetAction_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QWidgetAction) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	C.QWidgetAction_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidgetAction_Event
func miqt_exec_callback_QWidgetAction_Event(self *C.QWidgetAction, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QWidgetAction{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetAction) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QWidgetAction_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QWidgetAction) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	C.QWidgetAction_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidgetAction_EventFilter
func miqt_exec_callback_QWidgetAction_EventFilter(self *C.QWidgetAction, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QWidgetAction{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetAction) callVirtualBase_CreateWidget(parent *QWidget) *QWidget {

	return UnsafeNewQWidget(unsafe.Pointer(C.QWidgetAction_virtualbase_CreateWidget(unsafe.Pointer(this.h), parent.cPointer())), nil, nil)
}
func (this *QWidgetAction) OnCreateWidget(slot func(super func(parent *QWidget) *QWidget, parent *QWidget) *QWidget) {
	C.QWidgetAction_override_virtual_CreateWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidgetAction_CreateWidget
func miqt_exec_callback_QWidgetAction_CreateWidget(self *C.QWidgetAction, cb C.intptr_t, parent *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QWidget) *QWidget, parent *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(parent), nil, nil)

	virtualReturn := gofunc((&QWidgetAction{h: self}).callVirtualBase_CreateWidget, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWidgetAction) callVirtualBase_DeleteWidget(widget *QWidget) {

	C.QWidgetAction_virtualbase_DeleteWidget(unsafe.Pointer(this.h), widget.cPointer())

}
func (this *QWidgetAction) OnDeleteWidget(slot func(super func(widget *QWidget), widget *QWidget)) {
	C.QWidgetAction_override_virtual_DeleteWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWidgetAction_DeleteWidget
func miqt_exec_callback_QWidgetAction_DeleteWidget(self *C.QWidgetAction, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *QWidget), widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QWidgetAction{h: self}).callVirtualBase_DeleteWidget, slotval1)

}

// Delete this object from C++ memory.
func (this *QWidgetAction) Delete() {
	C.QWidgetAction_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetAction) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetAction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

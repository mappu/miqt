package multimedia

/*

#include "gen_qcameraviewfinder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraViewfinder struct {
	h          *C.QCameraViewfinder
	isSubclass bool
	*QVideoWidget
}

func (this *QCameraViewfinder) cPointer() *C.QCameraViewfinder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraViewfinder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraViewfinder constructs the type using only CGO pointers.
func newQCameraViewfinder(h *C.QCameraViewfinder, h_QVideoWidget *C.QVideoWidget, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice, h_QMediaBindableInterface *C.QMediaBindableInterface) *QCameraViewfinder {
	if h == nil {
		return nil
	}
	return &QCameraViewfinder{h: h,
		QVideoWidget: newQVideoWidget(h_QVideoWidget, h_QWidget, h_QObject, h_QPaintDevice, h_QMediaBindableInterface)}
}

// UnsafeNewQCameraViewfinder constructs the type using only unsafe pointers.
func UnsafeNewQCameraViewfinder(h unsafe.Pointer, h_QVideoWidget unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer, h_QMediaBindableInterface unsafe.Pointer) *QCameraViewfinder {
	if h == nil {
		return nil
	}

	return &QCameraViewfinder{h: (*C.QCameraViewfinder)(h),
		QVideoWidget: UnsafeNewQVideoWidget(h_QVideoWidget, h_QWidget, h_QObject, h_QPaintDevice, h_QMediaBindableInterface)}
}

// NewQCameraViewfinder constructs a new QCameraViewfinder object.
func NewQCameraViewfinder(parent *qt.QWidget) *QCameraViewfinder {
	var outptr_QCameraViewfinder *C.QCameraViewfinder = nil
	var outptr_QVideoWidget *C.QVideoWidget = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil

	C.QCameraViewfinder_new((*C.QWidget)(parent.UnsafePointer()), &outptr_QCameraViewfinder, &outptr_QVideoWidget, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice, &outptr_QMediaBindableInterface)
	ret := newQCameraViewfinder(outptr_QCameraViewfinder, outptr_QVideoWidget, outptr_QWidget, outptr_QObject, outptr_QPaintDevice, outptr_QMediaBindableInterface)
	ret.isSubclass = true
	return ret
}

// NewQCameraViewfinder2 constructs a new QCameraViewfinder object.
func NewQCameraViewfinder2() *QCameraViewfinder {
	var outptr_QCameraViewfinder *C.QCameraViewfinder = nil
	var outptr_QVideoWidget *C.QVideoWidget = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil

	C.QCameraViewfinder_new2(&outptr_QCameraViewfinder, &outptr_QVideoWidget, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice, &outptr_QMediaBindableInterface)
	ret := newQCameraViewfinder(outptr_QCameraViewfinder, outptr_QVideoWidget, outptr_QWidget, outptr_QObject, outptr_QPaintDevice, outptr_QMediaBindableInterface)
	ret.isSubclass = true
	return ret
}

func (this *QCameraViewfinder) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraViewfinder_MetaObject(this.h)))
}

func (this *QCameraViewfinder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraViewfinder_Metacast(this.h, param1_Cstring))
}

func QCameraViewfinder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraViewfinder) MediaObject() *QMediaObject {
	return newQMediaObject(C.QCameraViewfinder_MediaObject(this.h), nil)
}

func QCameraViewfinder_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraViewfinder) callVirtualBase_MediaObject() *QMediaObject {

	return newQMediaObject(C.QCameraViewfinder_virtualbase_MediaObject(unsafe.Pointer(this.h)), nil)

}
func (this *QCameraViewfinder) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_MediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_MediaObject
func miqt_exec_callback_QCameraViewfinder_MediaObject(self *C.QCameraViewfinder, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QCameraViewfinder) callVirtualBase_SetMediaObject(object *QMediaObject) bool {

	return (bool)(C.QCameraViewfinder_virtualbase_SetMediaObject(unsafe.Pointer(this.h), object.cPointer()))

}
func (this *QCameraViewfinder) OnSetMediaObject(slot func(super func(object *QMediaObject) bool, object *QMediaObject) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_SetMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_SetMediaObject
func miqt_exec_callback_QCameraViewfinder_SetMediaObject(self *C.QCameraViewfinder, cb C.intptr_t, object *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QMediaObject) bool, object *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaObject(object, nil)

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QCameraViewfinder_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCameraViewfinder) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_SizeHint
func miqt_exec_callback_QCameraViewfinder_SizeHint(self *C.QCameraViewfinder, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QCameraViewfinder) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QCameraViewfinder_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCameraViewfinder) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_Event
func miqt_exec_callback_QCameraViewfinder_Event(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QCameraViewfinder_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_ShowEvent
func miqt_exec_callback_QCameraViewfinder_ShowEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QCameraViewfinder_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_HideEvent
func miqt_exec_callback_QCameraViewfinder_HideEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QCameraViewfinder_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_ResizeEvent
func miqt_exec_callback_QCameraViewfinder_ResizeEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QCameraViewfinder_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_MoveEvent
func miqt_exec_callback_QCameraViewfinder_MoveEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QCameraViewfinder_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCameraViewfinder_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraViewfinder_PaintEvent
func miqt_exec_callback_QCameraViewfinder_PaintEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_PaintEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QCameraViewfinder) Delete() {
	C.QCameraViewfinder_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraViewfinder) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraViewfinder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

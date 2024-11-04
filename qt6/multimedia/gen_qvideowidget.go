package multimedia

/*

#include "gen_qvideowidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoWidget struct {
	h *C.QVideoWidget
	*qt6.QWidget
}

func (this *QVideoWidget) cPointer() *C.QVideoWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVideoWidget(h *C.QVideoWidget) *QVideoWidget {
	if h == nil {
		return nil
	}
	return &QVideoWidget{h: h, QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQVideoWidget(h unsafe.Pointer) *QVideoWidget {
	return newQVideoWidget((*C.QVideoWidget)(h))
}

// NewQVideoWidget constructs a new QVideoWidget object.
func NewQVideoWidget(parent *qt6.QWidget) *QVideoWidget {
	ret := C.QVideoWidget_new((*C.QWidget)(parent.UnsafePointer()))
	return newQVideoWidget(ret)
}

// NewQVideoWidget2 constructs a new QVideoWidget object.
func NewQVideoWidget2() *QVideoWidget {
	ret := C.QVideoWidget_new2()
	return newQVideoWidget(ret)
}

func (this *QVideoWidget) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoWidget_MetaObject(this.h)))
}

func (this *QVideoWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoWidget_Metacast(this.h, param1_Cstring))
}

func QVideoWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoWidget) VideoSink() *QVideoSink {
	return UnsafeNewQVideoSink(unsafe.Pointer(C.QVideoWidget_VideoSink(this.h)))
}

func (this *QVideoWidget) AspectRatioMode() qt6.AspectRatioMode {
	return (qt6.AspectRatioMode)(C.QVideoWidget_AspectRatioMode(this.h))
}

func (this *QVideoWidget) SizeHint() *qt6.QSize {
	_ret := C.QVideoWidget_SizeHint(this.h)
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoWidget) SetFullScreen(fullScreen bool) {
	C.QVideoWidget_SetFullScreen(this.h, (C.bool)(fullScreen))
}

func (this *QVideoWidget) SetAspectRatioMode(mode qt6.AspectRatioMode) {
	C.QVideoWidget_SetAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QVideoWidget) FullScreenChanged(fullScreen bool) {
	C.QVideoWidget_FullScreenChanged(this.h, (C.bool)(fullScreen))
}
func (this *QVideoWidget) OnFullScreenChanged(slot func(fullScreen bool)) {
	C.QVideoWidget_connect_FullScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_FullScreenChanged
func miqt_exec_callback_QVideoWidget_FullScreenChanged(cb C.intptr_t, fullScreen C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fullScreen bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fullScreen)

	gofunc(slotval1)
}

func (this *QVideoWidget) AspectRatioModeChanged(mode qt6.AspectRatioMode) {
	C.QVideoWidget_AspectRatioModeChanged(this.h, (C.int)(mode))
}
func (this *QVideoWidget) OnAspectRatioModeChanged(slot func(mode qt6.AspectRatioMode)) {
	C.QVideoWidget_connect_AspectRatioModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_AspectRatioModeChanged
func miqt_exec_callback_QVideoWidget_AspectRatioModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode qt6.AspectRatioMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.AspectRatioMode)(mode)

	gofunc(slotval1)
}

func QVideoWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoWidget) Delete() {
	C.QVideoWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

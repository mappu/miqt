package multimedia

/*

#include "gen_qvideowidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoWidget struct {
	h *C.QVideoWidget
	*qt.QWidget
	*QMediaBindableInterface
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
	return &QVideoWidget{h: h, QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(h)), QMediaBindableInterface: UnsafeNewQMediaBindableInterface(unsafe.Pointer(h))}
}

func UnsafeNewQVideoWidget(h unsafe.Pointer) *QVideoWidget {
	return newQVideoWidget((*C.QVideoWidget)(h))
}

// NewQVideoWidget constructs a new QVideoWidget object.
func NewQVideoWidget(parent *qt.QWidget) *QVideoWidget {
	ret := C.QVideoWidget_new((*C.QWidget)(parent.UnsafePointer()))
	return newQVideoWidget(ret)
}

// NewQVideoWidget2 constructs a new QVideoWidget object.
func NewQVideoWidget2() *QVideoWidget {
	ret := C.QVideoWidget_new2()
	return newQVideoWidget(ret)
}

func (this *QVideoWidget) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoWidget_MetaObject(this.h)))
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

func QVideoWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoWidget) MediaObject() *QMediaObject {
	return UnsafeNewQMediaObject(unsafe.Pointer(C.QVideoWidget_MediaObject(this.h)))
}

func (this *QVideoWidget) VideoSurface() *QAbstractVideoSurface {
	return UnsafeNewQAbstractVideoSurface(unsafe.Pointer(C.QVideoWidget_VideoSurface(this.h)))
}

func (this *QVideoWidget) AspectRatioMode() qt.AspectRatioMode {
	return (qt.AspectRatioMode)(C.QVideoWidget_AspectRatioMode(this.h))
}

func (this *QVideoWidget) Brightness() int {
	return (int)(C.QVideoWidget_Brightness(this.h))
}

func (this *QVideoWidget) Contrast() int {
	return (int)(C.QVideoWidget_Contrast(this.h))
}

func (this *QVideoWidget) Hue() int {
	return (int)(C.QVideoWidget_Hue(this.h))
}

func (this *QVideoWidget) Saturation() int {
	return (int)(C.QVideoWidget_Saturation(this.h))
}

func (this *QVideoWidget) SizeHint() *qt.QSize {
	_ret := C.QVideoWidget_SizeHint(this.h)
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoWidget) SetFullScreen(fullScreen bool) {
	C.QVideoWidget_SetFullScreen(this.h, (C.bool)(fullScreen))
}

func (this *QVideoWidget) SetAspectRatioMode(mode qt.AspectRatioMode) {
	C.QVideoWidget_SetAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QVideoWidget) SetBrightness(brightness int) {
	C.QVideoWidget_SetBrightness(this.h, (C.int)(brightness))
}

func (this *QVideoWidget) SetContrast(contrast int) {
	C.QVideoWidget_SetContrast(this.h, (C.int)(contrast))
}

func (this *QVideoWidget) SetHue(hue int) {
	C.QVideoWidget_SetHue(this.h, (C.int)(hue))
}

func (this *QVideoWidget) SetSaturation(saturation int) {
	C.QVideoWidget_SetSaturation(this.h, (C.int)(saturation))
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

func (this *QVideoWidget) BrightnessChanged(brightness int) {
	C.QVideoWidget_BrightnessChanged(this.h, (C.int)(brightness))
}
func (this *QVideoWidget) OnBrightnessChanged(slot func(brightness int)) {
	C.QVideoWidget_connect_BrightnessChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_BrightnessChanged
func miqt_exec_callback_QVideoWidget_BrightnessChanged(cb C.intptr_t, brightness C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(brightness int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(brightness)

	gofunc(slotval1)
}

func (this *QVideoWidget) ContrastChanged(contrast int) {
	C.QVideoWidget_ContrastChanged(this.h, (C.int)(contrast))
}
func (this *QVideoWidget) OnContrastChanged(slot func(contrast int)) {
	C.QVideoWidget_connect_ContrastChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_ContrastChanged
func miqt_exec_callback_QVideoWidget_ContrastChanged(cb C.intptr_t, contrast C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(contrast int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(contrast)

	gofunc(slotval1)
}

func (this *QVideoWidget) HueChanged(hue int) {
	C.QVideoWidget_HueChanged(this.h, (C.int)(hue))
}
func (this *QVideoWidget) OnHueChanged(slot func(hue int)) {
	C.QVideoWidget_connect_HueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_HueChanged
func miqt_exec_callback_QVideoWidget_HueChanged(cb C.intptr_t, hue C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(hue int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(hue)

	gofunc(slotval1)
}

func (this *QVideoWidget) SaturationChanged(saturation int) {
	C.QVideoWidget_SaturationChanged(this.h, (C.int)(saturation))
}
func (this *QVideoWidget) OnSaturationChanged(slot func(saturation int)) {
	C.QVideoWidget_connect_SaturationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_SaturationChanged
func miqt_exec_callback_QVideoWidget_SaturationChanged(cb C.intptr_t, saturation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(saturation int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(saturation)

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

func QVideoWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
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

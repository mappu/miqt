package multimedia

/*

#include "gen_qvideowidgetcontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoWidgetControl struct {
	h *C.QVideoWidgetControl
	*QMediaControl
}

func (this *QVideoWidgetControl) cPointer() *C.QVideoWidgetControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoWidgetControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoWidgetControl constructs the type using only CGO pointers.
func newQVideoWidgetControl(h *C.QVideoWidgetControl) *QVideoWidgetControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QVideoWidgetControl_virtbase(h, &outptr_QMediaControl)

	return &QVideoWidgetControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQVideoWidgetControl constructs the type using only unsafe pointers.
func UnsafeNewQVideoWidgetControl(h unsafe.Pointer) *QVideoWidgetControl {
	return newQVideoWidgetControl((*C.QVideoWidgetControl)(h))
}

func (this *QVideoWidgetControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoWidgetControl_metaObject(this.h)))
}

func (this *QVideoWidgetControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoWidgetControl_metacast(this.h, param1_Cstring))
}

func QVideoWidgetControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidgetControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWidgetControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidgetControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoWidgetControl) VideoWidget() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QVideoWidgetControl_videoWidget(this.h)))
}

func (this *QVideoWidgetControl) AspectRatioMode() qt.AspectRatioMode {
	return (qt.AspectRatioMode)(C.QVideoWidgetControl_aspectRatioMode(this.h))
}

func (this *QVideoWidgetControl) SetAspectRatioMode(mode qt.AspectRatioMode) {
	C.QVideoWidgetControl_setAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QVideoWidgetControl) IsFullScreen() bool {
	return (bool)(C.QVideoWidgetControl_isFullScreen(this.h))
}

func (this *QVideoWidgetControl) SetFullScreen(fullScreen bool) {
	C.QVideoWidgetControl_setFullScreen(this.h, (C.bool)(fullScreen))
}

func (this *QVideoWidgetControl) Brightness() int {
	return (int)(C.QVideoWidgetControl_brightness(this.h))
}

func (this *QVideoWidgetControl) SetBrightness(brightness int) {
	C.QVideoWidgetControl_setBrightness(this.h, (C.int)(brightness))
}

func (this *QVideoWidgetControl) Contrast() int {
	return (int)(C.QVideoWidgetControl_contrast(this.h))
}

func (this *QVideoWidgetControl) SetContrast(contrast int) {
	C.QVideoWidgetControl_setContrast(this.h, (C.int)(contrast))
}

func (this *QVideoWidgetControl) Hue() int {
	return (int)(C.QVideoWidgetControl_hue(this.h))
}

func (this *QVideoWidgetControl) SetHue(hue int) {
	C.QVideoWidgetControl_setHue(this.h, (C.int)(hue))
}

func (this *QVideoWidgetControl) Saturation() int {
	return (int)(C.QVideoWidgetControl_saturation(this.h))
}

func (this *QVideoWidgetControl) SetSaturation(saturation int) {
	C.QVideoWidgetControl_setSaturation(this.h, (C.int)(saturation))
}

func (this *QVideoWidgetControl) FullScreenChanged(fullScreen bool) {
	C.QVideoWidgetControl_fullScreenChanged(this.h, (C.bool)(fullScreen))
}
func (this *QVideoWidgetControl) OnFullScreenChanged(slot func(fullScreen bool)) {
	C.QVideoWidgetControl_connect_fullScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidgetControl_fullScreenChanged
func miqt_exec_callback_QVideoWidgetControl_fullScreenChanged(cb C.intptr_t, fullScreen C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fullScreen bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fullScreen)

	gofunc(slotval1)
}

func (this *QVideoWidgetControl) BrightnessChanged(brightness int) {
	C.QVideoWidgetControl_brightnessChanged(this.h, (C.int)(brightness))
}
func (this *QVideoWidgetControl) OnBrightnessChanged(slot func(brightness int)) {
	C.QVideoWidgetControl_connect_brightnessChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidgetControl_brightnessChanged
func miqt_exec_callback_QVideoWidgetControl_brightnessChanged(cb C.intptr_t, brightness C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(brightness int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(brightness)

	gofunc(slotval1)
}

func (this *QVideoWidgetControl) ContrastChanged(contrast int) {
	C.QVideoWidgetControl_contrastChanged(this.h, (C.int)(contrast))
}
func (this *QVideoWidgetControl) OnContrastChanged(slot func(contrast int)) {
	C.QVideoWidgetControl_connect_contrastChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidgetControl_contrastChanged
func miqt_exec_callback_QVideoWidgetControl_contrastChanged(cb C.intptr_t, contrast C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(contrast int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(contrast)

	gofunc(slotval1)
}

func (this *QVideoWidgetControl) HueChanged(hue int) {
	C.QVideoWidgetControl_hueChanged(this.h, (C.int)(hue))
}
func (this *QVideoWidgetControl) OnHueChanged(slot func(hue int)) {
	C.QVideoWidgetControl_connect_hueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidgetControl_hueChanged
func miqt_exec_callback_QVideoWidgetControl_hueChanged(cb C.intptr_t, hue C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(hue int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(hue)

	gofunc(slotval1)
}

func (this *QVideoWidgetControl) SaturationChanged(saturation int) {
	C.QVideoWidgetControl_saturationChanged(this.h, (C.int)(saturation))
}
func (this *QVideoWidgetControl) OnSaturationChanged(slot func(saturation int)) {
	C.QVideoWidgetControl_connect_saturationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidgetControl_saturationChanged
func miqt_exec_callback_QVideoWidgetControl_saturationChanged(cb C.intptr_t, saturation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(saturation int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(saturation)

	gofunc(slotval1)
}

func QVideoWidgetControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidgetControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWidgetControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidgetControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWidgetControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidgetControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWidgetControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidgetControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVideoWidgetControl) Delete() {
	C.QVideoWidgetControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoWidgetControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoWidgetControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
